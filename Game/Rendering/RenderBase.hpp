#pragma once
#include "Renderer.hpp"

namespace Game
{
	namespace Rendering
	{
		class RenderBase
		{
			friend class Renderer;
		public:
			static int xCalculator;
			static int yCalculator;

			RenderBase(Renderer *render);
			virtual ~RenderBase(void);

			void setPriority(int p);
			int priority();

			void setCalculationEnabled(bool enabled);
			bool isCalculationEnabled();

		protected:
			virtual void draw(IDirect3DDevice9 *pDevice) = 0;
			virtual void reset(IDirect3DDevice9 *pDevice) = 0;

			virtual void show() = 0;
			virtual void hide() = 0;

			virtual void releaseResourcesForDeletion(IDirect3DDevice9 *pDevice) = 0;

			virtual bool canBeDeleted() = 0;

			virtual bool loadResource(IDirect3DDevice9 *pDevice) = 0;

			virtual void firstDrawAfterReset(IDirect3DDevice9 *pDevice) = 0;

			void changeResource();

			int calculatedXPos(int x);
			int calculatedYPos(int y);

			Renderer *renderer();

		private:
			bool _hasToBeInitialised, _isMarkedForDeletion, _resourceChanged, _firstDrawAfterReset;

			int _priority = 0;
			bool _calculationEnabled = true;

			Renderer *_renderer;
		};
	}
}


