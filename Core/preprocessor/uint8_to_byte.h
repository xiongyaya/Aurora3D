#pragma once

#define A3D_PP_INT_BYTE( value )      A3D_PP_INT_BYTE_FAST( value )
#define A3D_PP_INT_BYTE_FAST( value ) A3D_PP_BYTE_VALUE ## value   

#define A3D_PP_BYTE_VALUE0     (0,0,0,0,0,0,0,0)
#define A3D_PP_BYTE_VALUE1     (0,0,0,0,0,0,0,1)
#define A3D_PP_BYTE_VALUE2     (0,0,0,0,0,0,1,0)
#define A3D_PP_BYTE_VALUE3     (0,0,0,0,0,0,1,1)
#define A3D_PP_BYTE_VALUE4     (0,0,0,0,0,1,0,0)
#define A3D_PP_BYTE_VALUE5     (0,0,0,0,0,1,0,1)
#define A3D_PP_BYTE_VALUE6     (0,0,0,0,0,1,1,0)
#define A3D_PP_BYTE_VALUE7     (0,0,0,0,0,1,1,1)
#define A3D_PP_BYTE_VALUE8     (0,0,0,0,1,0,0,0)
#define A3D_PP_BYTE_VALUE9     (0,0,0,0,1,0,0,1)
#define A3D_PP_BYTE_VALUE10    (0,0,0,0,1,0,1,0)
#define A3D_PP_BYTE_VALUE11    (0,0,0,0,1,0,1,1)
#define A3D_PP_BYTE_VALUE12    (0,0,0,0,1,1,0,0)
#define A3D_PP_BYTE_VALUE13    (0,0,0,0,1,1,0,1)
#define A3D_PP_BYTE_VALUE14    (0,0,0,0,1,1,1,0)
#define A3D_PP_BYTE_VALUE15    (0,0,0,0,1,1,1,1)
#define A3D_PP_BYTE_VALUE16    (0,0,0,1,0,0,0,0)
#define A3D_PP_BYTE_VALUE17    (0,0,0,1,0,0,0,1)
#define A3D_PP_BYTE_VALUE18    (0,0,0,1,0,0,1,0)
#define A3D_PP_BYTE_VALUE19    (0,0,0,1,0,0,1,1)
#define A3D_PP_BYTE_VALUE20    (0,0,0,1,0,1,0,0)
#define A3D_PP_BYTE_VALUE21    (0,0,0,1,0,1,0,1)
#define A3D_PP_BYTE_VALUE22    (0,0,0,1,0,1,1,0)
#define A3D_PP_BYTE_VALUE23    (0,0,0,1,0,1,1,1)
#define A3D_PP_BYTE_VALUE24    (0,0,0,1,1,0,0,0)
#define A3D_PP_BYTE_VALUE25    (0,0,0,1,1,0,0,1)
#define A3D_PP_BYTE_VALUE26    (0,0,0,1,1,0,1,0)
#define A3D_PP_BYTE_VALUE27    (0,0,0,1,1,0,1,1)
#define A3D_PP_BYTE_VALUE28    (0,0,0,1,1,1,0,0)
#define A3D_PP_BYTE_VALUE29    (0,0,0,1,1,1,0,1)
#define A3D_PP_BYTE_VALUE30    (0,0,0,1,1,1,1,0)
#define A3D_PP_BYTE_VALUE31    (0,0,0,1,1,1,1,1)
#define A3D_PP_BYTE_VALUE32    (0,0,1,0,0,0,0,0)
#define A3D_PP_BYTE_VALUE33    (0,0,1,0,0,0,0,1)
#define A3D_PP_BYTE_VALUE34    (0,0,1,0,0,0,1,0)
#define A3D_PP_BYTE_VALUE35    (0,0,1,0,0,0,1,1)
#define A3D_PP_BYTE_VALUE36    (0,0,1,0,0,1,0,0)
#define A3D_PP_BYTE_VALUE37    (0,0,1,0,0,1,0,1)
#define A3D_PP_BYTE_VALUE38    (0,0,1,0,0,1,1,0)
#define A3D_PP_BYTE_VALUE39    (0,0,1,0,0,1,1,1)
#define A3D_PP_BYTE_VALUE40    (0,0,1,0,1,0,0,0)
#define A3D_PP_BYTE_VALUE41    (0,0,1,0,1,0,0,1)
#define A3D_PP_BYTE_VALUE42    (0,0,1,0,1,0,1,0)
#define A3D_PP_BYTE_VALUE43    (0,0,1,0,1,0,1,1)
#define A3D_PP_BYTE_VALUE44    (0,0,1,0,1,1,0,0)
#define A3D_PP_BYTE_VALUE45    (0,0,1,0,1,1,0,1)
#define A3D_PP_BYTE_VALUE46    (0,0,1,0,1,1,1,0)
#define A3D_PP_BYTE_VALUE47    (0,0,1,0,1,1,1,1)
#define A3D_PP_BYTE_VALUE48    (0,0,1,1,0,0,0,0)
#define A3D_PP_BYTE_VALUE49    (0,0,1,1,0,0,0,1)
#define A3D_PP_BYTE_VALUE50    (0,0,1,1,0,0,1,0)
#define A3D_PP_BYTE_VALUE51    (0,0,1,1,0,0,1,1)
#define A3D_PP_BYTE_VALUE52    (0,0,1,1,0,1,0,0)
#define A3D_PP_BYTE_VALUE53    (0,0,1,1,0,1,0,1)
#define A3D_PP_BYTE_VALUE54    (0,0,1,1,0,1,1,0)
#define A3D_PP_BYTE_VALUE55    (0,0,1,1,0,1,1,1)
#define A3D_PP_BYTE_VALUE56    (0,0,1,1,1,0,0,0)
#define A3D_PP_BYTE_VALUE57    (0,0,1,1,1,0,0,1)
#define A3D_PP_BYTE_VALUE58    (0,0,1,1,1,0,1,0)
#define A3D_PP_BYTE_VALUE59    (0,0,1,1,1,0,1,1)
#define A3D_PP_BYTE_VALUE60    (0,0,1,1,1,1,0,0)
#define A3D_PP_BYTE_VALUE61    (0,0,1,1,1,1,0,1)
#define A3D_PP_BYTE_VALUE62    (0,0,1,1,1,1,1,0)
#define A3D_PP_BYTE_VALUE63    (0,0,1,1,1,1,1,1)
#define A3D_PP_BYTE_VALUE64    (0,1,0,0,0,0,0,0)
#define A3D_PP_BYTE_VALUE65    (0,1,0,0,0,0,0,1)
#define A3D_PP_BYTE_VALUE66    (0,1,0,0,0,0,1,0)
#define A3D_PP_BYTE_VALUE67    (0,1,0,0,0,0,1,1)
#define A3D_PP_BYTE_VALUE68    (0,1,0,0,0,1,0,0)
#define A3D_PP_BYTE_VALUE69    (0,1,0,0,0,1,0,1)
#define A3D_PP_BYTE_VALUE70    (0,1,0,0,0,1,1,0)
#define A3D_PP_BYTE_VALUE71    (0,1,0,0,0,1,1,1)
#define A3D_PP_BYTE_VALUE72    (0,1,0,0,1,0,0,0)
#define A3D_PP_BYTE_VALUE73    (0,1,0,0,1,0,0,1)
#define A3D_PP_BYTE_VALUE74    (0,1,0,0,1,0,1,0)
#define A3D_PP_BYTE_VALUE75    (0,1,0,0,1,0,1,1)
#define A3D_PP_BYTE_VALUE76    (0,1,0,0,1,1,0,0)
#define A3D_PP_BYTE_VALUE77    (0,1,0,0,1,1,0,1)
#define A3D_PP_BYTE_VALUE78    (0,1,0,0,1,1,1,0)
#define A3D_PP_BYTE_VALUE79    (0,1,0,0,1,1,1,1)
#define A3D_PP_BYTE_VALUE80    (0,1,0,1,0,0,0,0)
#define A3D_PP_BYTE_VALUE81    (0,1,0,1,0,0,0,1)
#define A3D_PP_BYTE_VALUE82    (0,1,0,1,0,0,1,0)
#define A3D_PP_BYTE_VALUE83    (0,1,0,1,0,0,1,1)
#define A3D_PP_BYTE_VALUE84    (0,1,0,1,0,1,0,0)
#define A3D_PP_BYTE_VALUE85    (0,1,0,1,0,1,0,1)
#define A3D_PP_BYTE_VALUE86    (0,1,0,1,0,1,1,0)
#define A3D_PP_BYTE_VALUE87    (0,1,0,1,0,1,1,1)
#define A3D_PP_BYTE_VALUE88    (0,1,0,1,1,0,0,0)
#define A3D_PP_BYTE_VALUE89    (0,1,0,1,1,0,0,1)
#define A3D_PP_BYTE_VALUE90    (0,1,0,1,1,0,1,0)
#define A3D_PP_BYTE_VALUE91    (0,1,0,1,1,0,1,1)
#define A3D_PP_BYTE_VALUE92    (0,1,0,1,1,1,0,0)
#define A3D_PP_BYTE_VALUE93    (0,1,0,1,1,1,0,1)
#define A3D_PP_BYTE_VALUE94    (0,1,0,1,1,1,1,0)
#define A3D_PP_BYTE_VALUE95    (0,1,0,1,1,1,1,1)
#define A3D_PP_BYTE_VALUE96    (0,1,1,0,0,0,0,0)
#define A3D_PP_BYTE_VALUE97    (0,1,1,0,0,0,0,1)
#define A3D_PP_BYTE_VALUE98    (0,1,1,0,0,0,1,0)
#define A3D_PP_BYTE_VALUE99    (0,1,1,0,0,0,1,1)
#define A3D_PP_BYTE_VALUE100   (0,1,1,0,0,1,0,0)
#define A3D_PP_BYTE_VALUE101   (0,1,1,0,0,1,0,1)
#define A3D_PP_BYTE_VALUE102   (0,1,1,0,0,1,1,0)
#define A3D_PP_BYTE_VALUE103   (0,1,1,0,0,1,1,1)
#define A3D_PP_BYTE_VALUE104   (0,1,1,0,1,0,0,0)
#define A3D_PP_BYTE_VALUE105   (0,1,1,0,1,0,0,1)
#define A3D_PP_BYTE_VALUE106   (0,1,1,0,1,0,1,0)
#define A3D_PP_BYTE_VALUE107   (0,1,1,0,1,0,1,1)
#define A3D_PP_BYTE_VALUE108   (0,1,1,0,1,1,0,0)
#define A3D_PP_BYTE_VALUE109   (0,1,1,0,1,1,0,1)
#define A3D_PP_BYTE_VALUE110   (0,1,1,0,1,1,1,0)
#define A3D_PP_BYTE_VALUE111   (0,1,1,0,1,1,1,1)
#define A3D_PP_BYTE_VALUE112   (0,1,1,1,0,0,0,0)
#define A3D_PP_BYTE_VALUE113   (0,1,1,1,0,0,0,1)
#define A3D_PP_BYTE_VALUE114   (0,1,1,1,0,0,1,0)
#define A3D_PP_BYTE_VALUE115   (0,1,1,1,0,0,1,1)
#define A3D_PP_BYTE_VALUE116   (0,1,1,1,0,1,0,0)
#define A3D_PP_BYTE_VALUE117   (0,1,1,1,0,1,0,1)
#define A3D_PP_BYTE_VALUE118   (0,1,1,1,0,1,1,0)
#define A3D_PP_BYTE_VALUE119   (0,1,1,1,0,1,1,1)
#define A3D_PP_BYTE_VALUE120   (0,1,1,1,1,0,0,0)
#define A3D_PP_BYTE_VALUE121   (0,1,1,1,1,0,0,1)
#define A3D_PP_BYTE_VALUE122   (0,1,1,1,1,0,1,0)
#define A3D_PP_BYTE_VALUE123   (0,1,1,1,1,0,1,1)
#define A3D_PP_BYTE_VALUE124   (0,1,1,1,1,1,0,0)
#define A3D_PP_BYTE_VALUE125   (0,1,1,1,1,1,0,1)
#define A3D_PP_BYTE_VALUE126   (0,1,1,1,1,1,1,0)
#define A3D_PP_BYTE_VALUE127   (0,1,1,1,1,1,1,1)
#define A3D_PP_BYTE_VALUE128   (1,0,0,0,0,0,0,0)
#define A3D_PP_BYTE_VALUE129   (1,0,0,0,0,0,0,1)
#define A3D_PP_BYTE_VALUE130   (1,0,0,0,0,0,1,0)
#define A3D_PP_BYTE_VALUE131   (1,0,0,0,0,0,1,1)
#define A3D_PP_BYTE_VALUE132   (1,0,0,0,0,1,0,0)
#define A3D_PP_BYTE_VALUE133   (1,0,0,0,0,1,0,1)
#define A3D_PP_BYTE_VALUE134   (1,0,0,0,0,1,1,0)
#define A3D_PP_BYTE_VALUE135   (1,0,0,0,0,1,1,1)
#define A3D_PP_BYTE_VALUE136   (1,0,0,0,1,0,0,0)
#define A3D_PP_BYTE_VALUE137   (1,0,0,0,1,0,0,1)
#define A3D_PP_BYTE_VALUE138   (1,0,0,0,1,0,1,0)
#define A3D_PP_BYTE_VALUE139   (1,0,0,0,1,0,1,1)
#define A3D_PP_BYTE_VALUE140   (1,0,0,0,1,1,0,0)
#define A3D_PP_BYTE_VALUE141   (1,0,0,0,1,1,0,1)
#define A3D_PP_BYTE_VALUE142   (1,0,0,0,1,1,1,0)
#define A3D_PP_BYTE_VALUE143   (1,0,0,0,1,1,1,1)
#define A3D_PP_BYTE_VALUE144   (1,0,0,1,0,0,0,0)
#define A3D_PP_BYTE_VALUE145   (1,0,0,1,0,0,0,1)
#define A3D_PP_BYTE_VALUE146   (1,0,0,1,0,0,1,0)
#define A3D_PP_BYTE_VALUE147   (1,0,0,1,0,0,1,1)
#define A3D_PP_BYTE_VALUE148   (1,0,0,1,0,1,0,0)
#define A3D_PP_BYTE_VALUE149   (1,0,0,1,0,1,0,1)
#define A3D_PP_BYTE_VALUE150   (1,0,0,1,0,1,1,0)
#define A3D_PP_BYTE_VALUE151   (1,0,0,1,0,1,1,1)
#define A3D_PP_BYTE_VALUE152   (1,0,0,1,1,0,0,0)
#define A3D_PP_BYTE_VALUE153   (1,0,0,1,1,0,0,1)
#define A3D_PP_BYTE_VALUE154   (1,0,0,1,1,0,1,0)
#define A3D_PP_BYTE_VALUE155   (1,0,0,1,1,0,1,1)
#define A3D_PP_BYTE_VALUE156   (1,0,0,1,1,1,0,0)
#define A3D_PP_BYTE_VALUE157   (1,0,0,1,1,1,0,1)
#define A3D_PP_BYTE_VALUE158   (1,0,0,1,1,1,1,0)
#define A3D_PP_BYTE_VALUE159   (1,0,0,1,1,1,1,1)
#define A3D_PP_BYTE_VALUE160   (1,0,1,0,0,0,0,0)
#define A3D_PP_BYTE_VALUE161   (1,0,1,0,0,0,0,1)
#define A3D_PP_BYTE_VALUE162   (1,0,1,0,0,0,1,0)
#define A3D_PP_BYTE_VALUE163   (1,0,1,0,0,0,1,1)
#define A3D_PP_BYTE_VALUE164   (1,0,1,0,0,1,0,0)
#define A3D_PP_BYTE_VALUE165   (1,0,1,0,0,1,0,1)
#define A3D_PP_BYTE_VALUE166   (1,0,1,0,0,1,1,0)
#define A3D_PP_BYTE_VALUE167   (1,0,1,0,0,1,1,1)
#define A3D_PP_BYTE_VALUE168   (1,0,1,0,1,0,0,0)
#define A3D_PP_BYTE_VALUE169   (1,0,1,0,1,0,0,1)
#define A3D_PP_BYTE_VALUE170   (1,0,1,0,1,0,1,0)
#define A3D_PP_BYTE_VALUE171   (1,0,1,0,1,0,1,1)
#define A3D_PP_BYTE_VALUE172   (1,0,1,0,1,1,0,0)
#define A3D_PP_BYTE_VALUE173   (1,0,1,0,1,1,0,1)
#define A3D_PP_BYTE_VALUE174   (1,0,1,0,1,1,1,0)
#define A3D_PP_BYTE_VALUE175   (1,0,1,0,1,1,1,1)
#define A3D_PP_BYTE_VALUE176   (1,0,1,1,0,0,0,0)
#define A3D_PP_BYTE_VALUE177   (1,0,1,1,0,0,0,1)
#define A3D_PP_BYTE_VALUE178   (1,0,1,1,0,0,1,0)
#define A3D_PP_BYTE_VALUE179   (1,0,1,1,0,0,1,1)
#define A3D_PP_BYTE_VALUE180   (1,0,1,1,0,1,0,0)
#define A3D_PP_BYTE_VALUE181   (1,0,1,1,0,1,0,1)
#define A3D_PP_BYTE_VALUE182   (1,0,1,1,0,1,1,0)
#define A3D_PP_BYTE_VALUE183   (1,0,1,1,0,1,1,1)
#define A3D_PP_BYTE_VALUE184   (1,0,1,1,1,0,0,0)
#define A3D_PP_BYTE_VALUE185   (1,0,1,1,1,0,0,1)
#define A3D_PP_BYTE_VALUE186   (1,0,1,1,1,0,1,0)
#define A3D_PP_BYTE_VALUE187   (1,0,1,1,1,0,1,1)
#define A3D_PP_BYTE_VALUE188   (1,0,1,1,1,1,0,0)
#define A3D_PP_BYTE_VALUE189   (1,0,1,1,1,1,0,1)
#define A3D_PP_BYTE_VALUE190   (1,0,1,1,1,1,1,0)
#define A3D_PP_BYTE_VALUE191   (1,0,1,1,1,1,1,1)
#define A3D_PP_BYTE_VALUE192   (1,1,0,0,0,0,0,0)
#define A3D_PP_BYTE_VALUE193   (1,1,0,0,0,0,0,1)
#define A3D_PP_BYTE_VALUE194   (1,1,0,0,0,0,1,0)
#define A3D_PP_BYTE_VALUE195   (1,1,0,0,0,0,1,1)
#define A3D_PP_BYTE_VALUE196   (1,1,0,0,0,1,0,0)
#define A3D_PP_BYTE_VALUE197   (1,1,0,0,0,1,0,1)
#define A3D_PP_BYTE_VALUE198   (1,1,0,0,0,1,1,0)
#define A3D_PP_BYTE_VALUE199   (1,1,0,0,0,1,1,1)
#define A3D_PP_BYTE_VALUE200   (1,1,0,0,1,0,0,0)
#define A3D_PP_BYTE_VALUE201   (1,1,0,0,1,0,0,1)
#define A3D_PP_BYTE_VALUE202   (1,1,0,0,1,0,1,0)
#define A3D_PP_BYTE_VALUE203   (1,1,0,0,1,0,1,1)
#define A3D_PP_BYTE_VALUE204   (1,1,0,0,1,1,0,0)
#define A3D_PP_BYTE_VALUE205   (1,1,0,0,1,1,0,1)
#define A3D_PP_BYTE_VALUE206   (1,1,0,0,1,1,1,0)
#define A3D_PP_BYTE_VALUE207   (1,1,0,0,1,1,1,1)
#define A3D_PP_BYTE_VALUE208   (1,1,0,1,0,0,0,0)
#define A3D_PP_BYTE_VALUE209   (1,1,0,1,0,0,0,1)
#define A3D_PP_BYTE_VALUE210   (1,1,0,1,0,0,1,0)
#define A3D_PP_BYTE_VALUE211   (1,1,0,1,0,0,1,1)
#define A3D_PP_BYTE_VALUE212   (1,1,0,1,0,1,0,0)
#define A3D_PP_BYTE_VALUE213   (1,1,0,1,0,1,0,1)
#define A3D_PP_BYTE_VALUE214   (1,1,0,1,0,1,1,0)
#define A3D_PP_BYTE_VALUE215   (1,1,0,1,0,1,1,1)
#define A3D_PP_BYTE_VALUE216   (1,1,0,1,1,0,0,0)
#define A3D_PP_BYTE_VALUE217   (1,1,0,1,1,0,0,1)
#define A3D_PP_BYTE_VALUE218   (1,1,0,1,1,0,1,0)
#define A3D_PP_BYTE_VALUE219   (1,1,0,1,1,0,1,1)
#define A3D_PP_BYTE_VALUE220   (1,1,0,1,1,1,0,0)
#define A3D_PP_BYTE_VALUE221   (1,1,0,1,1,1,0,1)
#define A3D_PP_BYTE_VALUE222   (1,1,0,1,1,1,1,0)
#define A3D_PP_BYTE_VALUE223   (1,1,0,1,1,1,1,1)
#define A3D_PP_BYTE_VALUE224   (1,1,1,0,0,0,0,0)
#define A3D_PP_BYTE_VALUE225   (1,1,1,0,0,0,0,1)
#define A3D_PP_BYTE_VALUE226   (1,1,1,0,0,0,1,0)
#define A3D_PP_BYTE_VALUE227   (1,1,1,0,0,0,1,1)
#define A3D_PP_BYTE_VALUE228   (1,1,1,0,0,1,0,0)
#define A3D_PP_BYTE_VALUE229   (1,1,1,0,0,1,0,1)
#define A3D_PP_BYTE_VALUE230   (1,1,1,0,0,1,1,0)
#define A3D_PP_BYTE_VALUE231   (1,1,1,0,0,1,1,1)
#define A3D_PP_BYTE_VALUE232   (1,1,1,0,1,0,0,0)
#define A3D_PP_BYTE_VALUE233   (1,1,1,0,1,0,0,1)
#define A3D_PP_BYTE_VALUE234   (1,1,1,0,1,0,1,0)
#define A3D_PP_BYTE_VALUE235   (1,1,1,0,1,0,1,1)
#define A3D_PP_BYTE_VALUE236   (1,1,1,0,1,1,0,0)
#define A3D_PP_BYTE_VALUE237   (1,1,1,0,1,1,0,1)
#define A3D_PP_BYTE_VALUE238   (1,1,1,0,1,1,1,0)
#define A3D_PP_BYTE_VALUE239   (1,1,1,0,1,1,1,1)
#define A3D_PP_BYTE_VALUE240   (1,1,1,1,0,0,0,0)
#define A3D_PP_BYTE_VALUE241   (1,1,1,1,0,0,0,1)
#define A3D_PP_BYTE_VALUE242   (1,1,1,1,0,0,1,0)
#define A3D_PP_BYTE_VALUE243   (1,1,1,1,0,0,1,1)
#define A3D_PP_BYTE_VALUE244   (1,1,1,1,0,1,0,0)
#define A3D_PP_BYTE_VALUE245   (1,1,1,1,0,1,0,1)
#define A3D_PP_BYTE_VALUE246   (1,1,1,1,0,1,1,0)
#define A3D_PP_BYTE_VALUE247   (1,1,1,1,0,1,1,1)
#define A3D_PP_BYTE_VALUE248   (1,1,1,1,1,0,0,0)
#define A3D_PP_BYTE_VALUE249   (1,1,1,1,1,0,0,1)
#define A3D_PP_BYTE_VALUE250   (1,1,1,1,1,0,1,0)
#define A3D_PP_BYTE_VALUE251   (1,1,1,1,1,0,1,1)
#define A3D_PP_BYTE_VALUE252   (1,1,1,1,1,1,0,0)
#define A3D_PP_BYTE_VALUE253   (1,1,1,1,1,1,0,1)
#define A3D_PP_BYTE_VALUE254   (1,1,1,1,1,1,1,0)
#define A3D_PP_BYTE_VALUE255   (1,1,1,1,1,1,1,1)