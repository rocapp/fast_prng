#ifndef __cdm_z_norm__
#define __cdm_z_norm__	
#include "MT19937.h"
#include "exponential.h"
#define __NORM_BINS__	253
void normal_setup() {
  mt_init();
}

static inline double normal() {
	static double X[__NORM_BINS__+1] = { 3.94216628254e-19, 3.72049450041e-19, 3.58270244806e-19, 3.48074762365e-19, 3.39901771719e-19, 3.33037783603e-19, 3.27094388176e-19, 3.21835771325e-19, 3.17107585418e-19, 3.1280307407e-19, 3.08845206558e-19, 3.05176506241e-19, 3.01752902926e-19, 2.98539834407e-19, 2.95509674628e-19, 2.92639979885e-19, 2.899122587e-19, 2.87311087802e-19, 2.84823463271e-19, 2.82438315352e-19, 2.80146139647e-19, 2.77938712618e-19, 2.75808869214e-19, 2.73750326983e-19, 2.71757545434e-19, 2.69825612475e-19, 2.67950151888e-19, 2.66127247304e-19, 2.6435337928e-19, 2.6262537282e-19, 2.60940353352e-19, 2.59295709543e-19, 2.57689061732e-19, 2.56118234977e-19, 2.54581235934e-19, 2.53076232924e-19, 2.51601538678e-19, 2.50155595336e-19, 2.48736961354e-19, 2.47344300031e-19, 2.45976369429e-19, 2.44632013479e-19, 2.43310154111e-19, 2.42009784271e-19, 2.40729961704e-19, 2.39469803409e-19, 2.38228480673e-19, 2.37005214619e-19, 2.35799272207e-19, 2.34609962621e-19, 2.33436634011e-19, 2.32278670547e-19, 2.31135489743e-19, 2.30006540027e-19, 2.28891298528e-19, 2.27789269059e-19, 2.26699980275e-19, 2.25622983985e-19, 2.24557853607e-19, 2.23504182749e-19, 2.22461583905e-19, 2.21429687253e-19, 2.20408139549e-19, 2.19396603103e-19, 2.18394754837e-19, 2.17402285409e-19, 2.164188984e-19, 2.15444309566e-19, 2.14478246135e-19, 2.13520446164e-19, 2.12570657924e-19, 2.11628639347e-19, 2.10694157491e-19, 2.09766988055e-19, 2.08846914916e-19, 2.079337297e-19, 2.0702723138e-19, 2.06127225897e-19, 2.05233525809e-19, 2.04345949953e-19, 2.03464323137e-19, 2.02588475842e-19, 2.01718243948e-19, 2.00853468469e-19, 1.99993995309e-19, 1.9913967503e-19, 1.9829036263e-19, 1.97445917335e-19, 1.96606202405e-19, 1.95771084943e-19, 1.94940435722e-19, 1.9411412902e-19, 1.93292042452e-19, 1.92474056827e-19, 1.91660056003e-19, 1.90849926746e-19, 1.90043558606e-19, 1.89240843788e-19, 1.88441677035e-19, 1.87645955517e-19, 1.86853578721e-19, 1.8606444835e-19, 1.85278468221e-19, 1.84495544175e-19, 1.83715583984e-19, 1.82938497262e-19, 1.82164195388e-19, 1.81392591419e-19, 1.80623600019e-19, 1.7985713738e-19, 1.79093121154e-19, 1.78331470384e-19, 1.77572105435e-19, 1.76814947933e-19, 1.76059920701e-19, 1.753069477e-19, 1.74555953971e-19, 1.73806865576e-19, 1.73059609547e-19, 1.72314113829e-19, 1.71570307233e-19, 1.70828119379e-19, 1.7008748065e-19, 1.69348322146e-19, 1.68610575631e-19, 1.67874173493e-19, 1.67139048692e-19, 1.66405134721e-19, 1.6567236556e-19, 1.64940675631e-19, 1.64209999755e-19, 1.63480273116e-19, 1.62751431209e-19, 1.62023409806e-19, 1.61296144913e-19, 1.60569572726e-19, 1.59843629593e-19, 1.59118251972e-19, 1.58393376391e-19, 1.57668939404e-19, 1.56944877552e-19, 1.56221127324e-19, 1.55497625108e-19, 1.54774307158e-19, 1.54051109542e-19, 1.53327968107e-19, 1.52604818431e-19, 1.51881595777e-19, 1.51158235054e-19, 1.50434670764e-19, 1.49710836959e-19, 1.48986667191e-19, 1.48262094465e-19, 1.47537051186e-19, 1.46811469107e-19, 1.46085279278e-19, 1.4535841199e-19, 1.44630796717e-19, 1.43902362058e-19, 1.43173035676e-19, 1.42442744238e-19, 1.41711413344e-19, 1.40978967466e-19, 1.40245329873e-19, 1.39510422558e-19, 1.38774166165e-19, 1.38036479905e-19, 1.37297281475e-19, 1.36556486972e-19, 1.35814010798e-19, 1.35069765568e-19, 1.34323662007e-19, 1.33575608847e-19, 1.32825512715e-19, 1.32073278015e-19, 1.31318806805e-19, 1.30561998669e-19, 1.29802750579e-19, 1.29040956749e-19, 1.28276508483e-19, 1.2750929401e-19, 1.26739198313e-19, 1.25966102948e-19, 1.25189885844e-19, 1.24410421101e-19, 1.23627578765e-19, 1.22841224598e-19, 1.2205121982e-19, 1.21257420848e-19, 1.20459679002e-19, 1.19657840201e-19, 1.18851744634e-19, 1.18041226403e-19, 1.17226113142e-19, 1.16406225609e-19, 1.15581377245e-19, 1.14751373693e-19, 1.13916012285e-19, 1.13075081485e-19, 1.12228360281e-19, 1.11375617531e-19, 1.10516611251e-19, 1.09651087832e-19, 1.08778781199e-19, 1.07899411881e-19, 1.07012685997e-19, 1.06118294148e-19, 1.05215910191e-19, 1.043051899e-19, 1.0338576948e-19, 1.02457263929e-19, 1.01519265222e-19, 1.00571340295e-19, 9.96130287997e-20, 9.86438405995e-20, 9.76632529648e-20, 9.66707074276e-20, 9.56656062409e-20, 9.46473083804e-20, 9.36151250173e-20, 9.25683143709e-20, 9.15060758376e-20, 9.04275432677e-20, 8.93317772338e-20, 8.82177561023e-20, 8.70843656749e-20, 8.59303871096e-20, 8.47544827642e-20, 8.35551795085e-20, 8.23308489336e-20, 8.10796837291e-20, 7.97996692841e-20, 7.84885492861e-20, 7.71437837009e-20, 7.57624969795e-20, 7.43414135785e-20, 7.28767768074e-20, 7.13642454435e-20, 6.97987602408e-20, 6.81743689448e-20, 6.64839929862e-20, 6.47191103452e-20, 6.28693148131e-20, 6.09216875483e-20, 5.88598735756e-20, 5.66626751161e-20, 5.43018136309e-20, 5.17381717445e-20, 4.89150317224e-20, 4.57447418908e-20, 4.20788025686e-20, 3.76259867224e-20, 3.16285898059e-20, 0.0};
	static double Y[__NORM_BINS__+1] = { 1.45984107966e-22, 3.00666134279e-22, 4.61297288151e-22, 6.26633500492e-22, 7.95945247619e-22, 9.68746550217e-22, 1.14468770024e-21, 1.32350363044e-21, 1.50498576921e-21, 1.68896530007e-21, 1.87530253827e-21, 2.06387984237e-21, 2.25459669136e-21, 2.44736615188e-21, 2.64211227278e-21, 2.83876811879e-21, 3.03727425675e-21, 3.23757757e-21, 3.43963031579e-21, 3.6433893658e-21, 3.84881558689e-21, 4.05587333095e-21, 4.26453001043e-21, 4.47475574223e-21, 4.68652304654e-21, 4.89980659028e-21, 5.11458296721e-21, 5.3308305082e-21, 5.5485291167e-21, 5.76766012527e-21, 5.98820616992e-21, 6.21015107954e-21, 6.43347977823e-21, 6.65817819857e-21, 6.88423320459e-21, 7.1116325228e-21, 7.34036468049e-21, 7.57041895029e-21, 7.80178530014e-21, 8.03445434816e-21, 8.26841732173e-21, 8.50366602039e-21, 8.74019278201e-21, 8.97799045203e-21, 9.21705235531e-21, 9.45737227039e-21, 9.69894440593e-21, 9.94176337898e-21, 1.01858241951e-20, 1.04311222301e-20, 1.0677653213e-20, 1.09254132104e-20, 1.11743986124e-20, 1.14246061187e-20, 1.16760327269e-20, 1.19286757204e-20, 1.21825326583e-20, 1.24376013654e-20, 1.2693879923e-20, 1.29513666605e-20, 1.32100601473e-20, 1.34699591858e-20, 1.37310628045e-20, 1.39933702514e-20, 1.42568809885e-20, 1.4521594686e-20, 1.47875112175e-20, 1.50546306552e-20, 1.53229532653e-20, 1.55924795044e-20, 1.58632100153e-20, 1.61351456238e-20, 1.64082873355e-20, 1.66826363327e-20, 1.69581939719e-20, 1.72349617811e-20, 1.75129414576e-20, 1.77921348663e-20, 1.80725440373e-20, 1.83541711644e-20, 1.86370186038e-20, 1.89210888728e-20, 1.92063846482e-20, 1.94929087658e-20, 1.97806642193e-20, 2.00696541597e-20, 2.03598818948e-20, 2.06513508884e-20, 2.09440647607e-20, 2.12380272876e-20, 2.15332424009e-20, 2.18297141884e-20, 2.21274468943e-20, 2.24264449191e-20, 2.27267128206e-20, 2.30282553143e-20, 2.33310772738e-20, 2.36351837324e-20, 2.39405798832e-20, 2.42472710808e-20, 2.45552628422e-20, 2.48645608479e-20, 2.5175170944e-20, 2.54870991431e-20, 2.58003516259e-20, 2.61149347436e-20, 2.64308550193e-20, 2.67481191499e-20, 2.70667340088e-20, 2.73867066474e-20, 2.77080442982e-20, 2.80307543767e-20, 2.83548444847e-20, 2.86803224123e-20, 2.90071961414e-20, 2.93354738484e-20, 2.96651639078e-20, 2.99962748948e-20, 3.03288155897e-20, 3.06627949809e-20, 3.09982222687e-20, 3.13351068696e-20, 3.16734584202e-20, 3.20132867816e-20, 3.23546020438e-20, 3.26974145302e-20, 3.30417348029e-20, 3.33875736673e-20, 3.37349421775e-20, 3.40838516421e-20, 3.44343136293e-20, 3.4786339973e-20, 3.51399427794e-20, 3.54951344328e-20, 3.58519276026e-20, 3.62103352501e-20, 3.65703706358e-20, 3.69320473266e-20, 3.7295379204e-20, 3.76603804721e-20, 3.80270656658e-20, 3.83954496597e-20, 3.87655476775e-20, 3.91373753011e-20, 3.95109484807e-20, 3.98862835454e-20, 4.02633972133e-20, 4.06423066034e-20, 4.10230292468e-20, 4.14055830991e-20, 4.1789986553e-20, 4.21762584518e-20, 4.25644181026e-20, 4.29544852916e-20, 4.33464802983e-20, 4.3740423912e-20, 4.41363374476e-20, 4.45342427632e-20, 4.49341622781e-20, 4.53361189911e-20, 4.5740136501e-20, 4.61462390263e-20, 4.65544514274e-20, 4.69647992292e-20, 4.73773086444e-20, 4.77920065987e-20, 4.82089207569e-20, 4.86280795501e-20, 4.90495122048e-20, 4.94732487728e-20, 4.98993201633e-20, 5.03277581761e-20, 5.07585955372e-20, 5.11918659356e-20, 5.16276040629e-20, 5.20658456539e-20, 5.25066275307e-20, 5.29499876488e-20, 5.33959651452e-20, 5.38446003902e-20, 5.42959350421e-20, 5.47500121042e-20, 5.52068759864e-20, 5.566657257e-20, 5.61291492763e-20, 5.65946551399e-20, 5.70631408865e-20, 5.75346590156e-20, 5.80092638886e-20, 5.8487011823e-20, 5.89679611927e-20, 5.94521725351e-20, 5.99397086661e-20, 6.04306348026e-20, 6.09250186942e-20, 6.14229307644e-20, 6.19244442624e-20, 6.24296354262e-20, 6.29385836583e-20, 6.34513717154e-20, 6.39680859128e-20, 6.44888163458e-20, 6.5013657129e-20, 6.55427066567e-20, 6.60760678847e-20, 6.66138486374e-20, 6.71561619424e-20, 6.7703126396e-20, 6.82548665622e-20, 6.88115134113e-20, 6.93732047997e-20, 6.9940085999e-20, 7.05123102793e-20, 7.10900395534e-20, 7.16734450906e-20, 7.22627083097e-20, 7.28580216611e-20, 7.3459589613e-20, 7.4067629755e-20, 7.46823740371e-20, 7.53040701672e-20, 7.59329831907e-20, 7.65693972825e-20, 7.72136177895e-20, 7.78659735664e-20, 7.85268196595e-20, 7.91965404039e-20, 7.9875553017e-20, 8.05643117889e-20, 8.12633129964e-20, 8.19731007037e-20, 8.26942736526e-20, 8.34274935088e-20, 8.41734948075e-20, 8.49330970528e-20, 8.57072195782e-20, 8.64968999859e-20, 8.73033172957e-20, 8.81278213789e-20, 8.89719709282e-20, 8.98375832393e-20, 9.07268006979e-20, 9.16421814841e-20, 9.25868264067e-20, 9.35645614803e-20, 9.45802100126e-20, 9.56400155509e-20, 9.67523347705e-20, 9.79288516978e-20, 9.91869058575e-20, 1.00554562713e-19, 1.02084073773e-19, 1.03903609932e-19, 1.08420217249e-19};
	static double X_0 = 3.6360066255;
	static uint8_t map[256] = { 0, 0, 239, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 253, 252, 252, 252, 252, 252, 252, 252, 252, 252, 252, 251, 251, 251, 251, 251, 251, 251, 250, 250, 250, 250, 250, 249, 249, 249, 248, 248, 248, 247, 247, 247, 246, 246, 245, 244, 244, 243, 242, 240, 2, 2, 3, 3, 0, 0, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 1, 0, 0 };
	static uint64_t pmf[256] = { 72057594037927929u, 40326624349169501u, 66757706897785419u, 62547370107456319u, 71274364207173701u, 61507054968985473u, 54478266149276443u, 49155733164340606u, 44972794020424414u, 41591175556276175u, 38795847088603822u, 36443259860001493u, 34433744422613224u, 32695829351858417u, 31176862597770541u, 29837157834956965u, 28646206978779730u, 27580152870562938u, 26620057227579184u, 25750685572624320u, 24959637087241629u, 24236709952456878u, 23573430794463256u, 22962700606044278u, 22398524733564961u, 21875804440674224u, 21390174218697054u, 20937873492744559u, 20515644503092397u, 20120650311816103u, 19750408437593236u, 19402736736775866u, 19075708964560448u, 18767618045785091u, 18476945533134393u, 18202336064033358u, 17942575887048175u, 17696574712592900u, 17463350304655947u, 17242015339070226u, 17031766145577350u, 16831873028667604u, 16641671907873521u, 16460557078459508u, 16287974914055582u, 16123418375623848u, 15966422204335254u, 15816558704701513u, 15673434030867554u, 15536684909196574u, 15405975739603460u, 15280996021064117u, 15161458064605987u, 15047094953169732u, 14937658719618274u, 14832918716254269u, 14732660149922243u, 14636682767926421u, 14544799673032988u, 14456836254306534u, 14372629221755972u, 14292025731233296u, 14214882591479089u, 14141065544286445u, 14070448608530462u, 14002913483908799u, 13938349006382230u, 13876650650625104u, 13817720075206806u, 13761464705686065u, 13707797354042863u, 13656635865467047u, 13607902799151378u, 13561525129079604u, 13517433972972049u, 13475564339608528u, 13435854897274895u, 13398247759293605u, 13362688285000509u, 13329124898074925u, 13297508915385434u, 13267794390625861u, 13239937968865130u, 13213898751110231u, 13189638168996072u, 13167119868608247u, 13146309603023673u, 13127175130937336u, 13109686124683929u, 13093814082392480u, 13079532248405872u, 13066815538342607u, 13055640469823871u, 13045985096976177u, 13037828951430420u, 13031152987147778u, 13025939526952160u, 13022172217215106u, 13019835981047289u, 13018916980249703u, 13019402574917055u, 13021281290498526u, 13024542784926616u, 13029177819881202u, 13035178234204753u, 13042536918609822u, 13051247795053544u, 13061305796327260u, 13072706847892956u, 13085447853656085u, 13099526681051874u, 13114942149366307u, 13131694021486739u, 13149782993627473u, 13169210690591294u, 13189979659700336u, 13212093370204792u, 13235556209453985u, 13260373484766434u, 13286551425413025u, 13314097185536209u, 13343018850682536u, 13373325442998151u, 13405026931705971u, 13438134241678334u, 13472659266688547u, 13508614881963189u, 13546014960145101u, 13584874388331072u, 13625209086240762u, 13667036028988819u, 13710373267459809u, 13755239954464188u, 13801656371108540u, 13849643956036713u, 13899225335748016u, 13950424359102306u, 14003266132244831u, 14057777058028482u, 14113984875887664u, 14171918706098202u, 14231609096955289u, 14293088074137726u, 14356389193880522u, 14421547598864794u, 14488600078970554u, 14557585135441908u, 14628543047238593u, 14701515944797442u, 14776547886574214u, 14853684939150051u, 14932975266468814u, 15014469219356988u, 15098219435784020u, 15184280943673772u, 15272711272564168u, 15363570571177196u, 15456921734138893u, 15552830533753119u, 15651365764886983u, 15752599395059613u, 15856606727600106u, 15963466573264567u, 16073261435880874u, 16186077708580341u, 16302005884348013u, 16421140780558237u, 16543581780650293u, 16669433090836135u, 16798804016417162u, 16931809258103442u, 17068569228891904u, 17209210394529843u, 17353865641613745u, 17502674668391024u, 17655784411224130u, 17813349499516040u, 17975532748031473u, 18142505689390775u, 18314449145293453u, 18491553848258648u, 18674021113109295u, 18862063562678606u, 19055905917466663u, 19255785852132516u, 19461954924613351u, 19674679590477322u, 19894242304883213u, 20120942727332549u, 20355099035220519u, 20597049361522729u, 20847153370284920u, 21105793981980467u, 21373379270546649u, 21650344548520823u, 21937154664964454u, 22234306540513892u, 22542331968432568u, 22861800716636564u, 23193323965881326u, 23537558131068374u, 23895209116009237u, 24267037054464576u, 24653861613169194u, 25056567927283650u, 25476113264506816u, 25913534520172953u, 26369956670022322u, 26846602323105587u, 27344802551112696u, 27866009191896242u, 28411808870349840u, 28983939023433370u, 29584306270819799u, 30215007542030962u, 30878354457536343u, 31576901562042559u, 32313479141807967u, 33091231518242930u, 33913661918622594u, 34784685278023288u, 35708690662522692u, 36690615427434090u, 37736033766140443u, 38851263025093306u, 40043492094354602u, 41320937415754285u, 42693033812730584u, 44170669575252827u, 45766478267553201u, 47495203930483104u, 49374162193235515u, 51423828073108663u, 53668593107828002u, 56137751712264683u, 58866802196233418u, 61899186402538035u, 65288651159100205u, 69102507949739969u, 68126330325089464u, 53804945126273163u, 65825748206941672u, 61829892725577452u, 63845813923796788u, 45735327411017712u, 64072175132516523u, 63630696565155801u, 41952625615816055u, 36873742118350298u, 60622404122532291u, 47315190791122488u, 25432751782469124u, 61663558165525176u, 67184089289065578u, 0u, 0u };
	
	MT_FLUSH();
	uint8_t i = Rand->l & 0x00000000000000ff; 
	if (i < __NORM_BINS__) {
		return X[i]*Rand++->sl; 
	}
	double sign_bit = Rand++->l & 0x0000000000000100 ? 1. : -1.;
	uint8_t j = _WDS_SAMPLER();
	double x;
	if (j > 0) {
		do {
			MT_FLUSH();
			x = _CDM_SAMPLE(X[j], X[j-1], Rand->sl, pow(2, 63));
			Rand++;
		}	
		while (_CDM_SAMPLE(Y[j-1], Y[j], Rand++->l & 0x7fffffffffffffff, pow(2, 63)) > exp(-x*x/2));
	}
	else {
		do {
			x = pow(X_0, -1)*exponential();
		}
		while (2*exponential() < x*x);
	}
	return sign_bit*x; 
}
#endif
