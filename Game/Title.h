#pragma once


//�^�C�g���B
class Title : public IGameObject
{
public:
	Title();
	~Title();
	void Update();
	void Render(RenderContext& rc);
	
	SpriteRender spriteRender;
	SoundSource* titleBGM;			//�^�C�g����BGM�B
};
