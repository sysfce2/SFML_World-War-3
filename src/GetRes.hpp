#ifndef GetTexture_air321
#define GetTexture_air321

using namespace sf; // don't forget this or you would have to initialize everything with sf::
using namespace std;
class GetRes
{
public:
	void init();
	static Font boldFont;
	static Font gameFont;
	static Font techFont;
	static Texture explosionTex;
	static Texture gameLogoTex;

	static Texture menuBackTex;
	static Texture creditsButtonTex;
	static Texture exitButtonTex;
	static Texture helpButtonTex;
	static Texture playButtonTex;

	static Texture enemyBulletTex;
	static Texture enemyMissileTex;
	static Texture enemyBodyTex1;
	static Texture enemyBodyTex2;
	static Texture enemyBodyTex3;
	static Texture enemyBodyTex4;
	static Texture enemyBodyTex5;
	static Texture enemyBodyTex6;
	static Texture enemyBodyTex7;
	static Texture bossBodyTex;

	static Texture playerBulletTex;
	static Texture playerMissileTex;
	static Texture playerBodyTex;

	static Texture seaTex;
	static Texture seaElem1;
	static Texture seaElem2;
	static Texture seaElem3;
	static Texture seaElem4;
	static Texture seaElem5;

	static Texture landTex;
	static Texture landElem1;
	static Texture landElem2;
	static Texture landElem3;
	static Texture landElem4;
	static Texture landElem5;

	static Texture titleBar;
	static Texture CompleteBody;
	static Texture CompleteStar;
	static Texture CompleteText;
	static Texture CompleteButton;

	static Texture failedStar;
	static Texture failedText;
	static Texture gameOverText;

	static Texture playAgain;
	static Texture tryAgain;

	static Texture closeButton;
	static Texture missileCountTex;
	static Texture retryCount;
	static Texture cursor;

	static Texture outMeter;
	static Texture inMeter;
	static Texture inMeterHover;
	static Texture inMeterClick;
	static Texture outMeterHand;
	static Texture inMeterHand;
	static Texture outMeterHint;
	static Texture outMeterSuccess;
	static Texture dummyButtons;
	static SoundBuffer enemyBulletSound;
	static SoundBuffer enemyMissileSound;
	static SoundBuffer enemyExplodedSound;
	static SoundBuffer enemyBulletExplosionSound;
	static SoundBuffer enemyMissileExplosionSound;
	static SoundBuffer playerBulletSound;
	static SoundBuffer playerMissileSound;
	static SoundBuffer playerExplodedSound;
	static SoundBuffer playerBulletExplosionSound;
	static SoundBuffer playerMissileExplosionSound;
	static SoundBuffer playerFlySound;
	static SoundBuffer failedMessageSound;
	static SoundBuffer successMessageSound;
	static SoundBuffer menuClickSound;
	static SoundBuffer menuHoverSound;
	static SoundBuffer typeWriterSound;
};
#endif
