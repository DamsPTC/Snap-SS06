/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005ddd70; end: 1005dddf3;  */

void FUN_1005ddd70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f612c,param_2,&UNK_1029f6130,param_2,&UNK_1029f6158,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005dddf4; end: 1005dddff;  */

undefined ** FUN_1005dddf4(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005dde00; end: 1005dde2b;  */

void FUN_1005dde00(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005dde2c; end: 1005dde33;  */

void FUN_1005dde2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f6254);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005dde34; end: 1005ddeb7;  */

void FUN_1005dde34(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f6254,param_2,&UNK_1029f6258,param_2,&UNK_1029f6280,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005ddeb8; end: 1005ddec3;  */

undefined ** FUN_1005ddeb8(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005ddec4; end: 1005ddeef;  */

void FUN_1005ddec4(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005ddef0; end: 1005ddef7;  */

void FUN_1005ddef0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1029f647c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005ddef8; end: 1005ddf7b;  */

void FUN_1005ddef8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1029f647c,param_2,FUN_1005ddf7c,param_2,&UNK_1029f6480,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005ddf7c; end: 1005ddfa3;  */

void FUN_1005ddf7c(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1005ddfa4; end: 1005ddfaf;  */

void FUN_1005ddfa4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  func_0x0001005c2aec();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  func_0x0001005deebc(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_1005deedc();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  func_0x000107c6157c();
  func_0x0001005def50();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar6);
  *param_1 = lVar1;
  return;
}



/* Entry: 1005ddfb0; end: 1005de10f;  */

void FUN_1005ddfb0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  func_0x0001005c2aec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  func_0x0001005deebc(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_1005deedc();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  func_0x000107c6157c();
  func_0x0001005def50();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 1005de110; end: 1005de117;  */

void FUN_1005de110(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005de118; end: 1005de16b;  */

void FUN_1005de118(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005de16c; end: 1005de173;  */

void FUN_1005de16c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  func_0x0001005c27d0();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_1005de20c();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_1005de278();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1005de174; end: 1005de20b;  */

void FUN_1005de174(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  func_0x0001005c27d0();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_1005de20c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_1005de278();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 1005de20c; end: 1005de277;  */

void FUN_1005de20c(undefined8 param_1)

{
  if (lRam0000000112fa2bb0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e783f30);
  return;
}



/* Entry: 1005de278; end: 1005de35b;  */

code * FUN_1005de278(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  FUN_1000285a8(0x112fa12f8,&UNK_10dc15b50);
  func_0x000107c613fc();
  pcVar1 = FUN_10073e7ac;
  FUN_1000bdd8c(FUN_10073e7ac,0);
  uVar4 = 0x112fa1300;
  FUN_1000285a8(0x112fa1300,&UNK_10dc15b58);
  pcVar2 = FUN_10073eb6c;
  FUN_1000cb480(FUN_10073eb6c,0,uVar4);
  uVar4 = 0x112fa1308;
  FUN_1000285a8(0x112fa1308,&UNK_10dc15b60);
  puVar3 = &UNK_10384a800;
  FUN_1000cb480(&UNK_10384a800,0,uVar4);
  uVar4 = 0;
  func_0x0001005c27f0(0);
  func_0x000107c610f8();
  FUN_1005de37c(pcVar2,puVar3,uVar4);
  func_0x000107c61574(pcVar1);
  return pcVar2;
}



/* Entry: 1005de35c; end: 1005de37b;  */

void FUN_1005de35c(void)

{
  func_0x000107c61168(&PTR_PTR_112fa2770);
  return;
}



/* Entry: 1005de37c; end: 1005de3df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005de37c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fa40c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa40c8) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1005de3e0; end: 1005de3e7;  */

void FUN_1005de3e0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005de3e8; end: 1005de43b;  */

void FUN_1005de3e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005de43c; end: 1005de447;  */

void FUN_1005de43c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100323d68();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  func_0x0001005dea6c(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_1005deaec();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_1005deb28();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 1005de448; end: 1005de5af;  */

void FUN_1005de448(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100323d68();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  func_0x0001005dea6c(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_1005deaec();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_1005deb28();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 1005de5b0; end: 1005de5b7;  */

void FUN_1005de5b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005de5b8; end: 1005de60b;  */

void FUN_1005de5b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005de60c; end: 1005de617;  */

void FUN_1005de60c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002b67b4();
  func_0x000107c613fc();
  FUN_1005de790(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005de618; end: 1005de6ab;  */

void FUN_1005de618(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1002b67b4();
  func_0x000107c613fc();
  FUN_1005de790(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1005de6ac; end: 1005de6b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005de6ac(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar6 = &lStack_50;
  lVar4 = lVar1;
  FUN_1002ae32c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_112fc8c90) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112fc8c98) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112fc8ca0) = uVar7;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61154(&lStack_50,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1005de6b8; end: 1005de75b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005de6b8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = param_2;
  FUN_1002ae32c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fc8c90) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fc8c98) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fc8ca0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61154(&lStack_50,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1005de75c; end: 1005de78f;  */

void FUN_1005de75c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005de790; end: 1005de86b;  */

void FUN_1005de790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_1005de86c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1005de8e8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001005de91c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1005de86c; end: 1005de8e7;  */

void FUN_1005de86c(undefined8 param_1)

{
  if (lRam0000000112e1bf40 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e686c04);
  return;
}



/* Entry: 1005de8e8; end: 1005de9bf;  */

void FUN_1005de8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 1005de9c0; end: 1005de9eb;  */

void FUN_1005de9c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005de9ec; end: 1005dea37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005de9ec(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f1bc70) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1005dea38; end: 1005deaeb;  */

void FUN_1005dea38(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005deaec; end: 1005deb27;  */

void FUN_1005deaec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 1005deb28; end: 1005ded6b;  */

undefined * FUN_1005deb28(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_1105d56a0;
  func_0x000107c613fc(&UNK_1105d56a0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar10;
  FUN_1000285a8(0x112f1ba08,&UNK_10db54410);
  func_0x000107c613fc();
  func_0x000107c61174(uVar10);
  puVar3 = &UNK_102dfad20;
  FUN_1000bdd8c(&UNK_102dfad20,puVar2);
  puVar2 = &UNK_1105d56c8;
  func_0x000107c613fc(&UNK_1105d56c8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined **)(puVar2 + 0x20) = puVar3;
  FUN_1000285a8(0x112f1ba10,&UNK_10db54418);
  func_0x000107c613fc();
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(puVar3);
  puVar4 = &UNK_102dfae00;
  FUN_1000bdd8c(&UNK_102dfae00,puVar2);
  uVar9 = 0x112f1ba18;
  FUN_1000285a8(0x112f1ba18,&UNK_10db54420);
  puVar2 = &UNK_102dfae0c;
  FUN_1000cb480(&UNK_102dfae0c,0,uVar9);
  uVar9 = 0x112f1ba20;
  FUN_1000285a8(0x112f1ba20,&UNK_10db54428);
  puVar5 = &UNK_102dfae20;
  FUN_1000cb480(&UNK_102dfae20,0,uVar9);
  uVar9 = 0x112f1ba28;
  FUN_1000285a8(0x112f1ba28,&UNK_10db54430);
  puVar6 = &UNK_102dfae34;
  FUN_1000cb480(&UNK_102dfae34,0,uVar9);
  puVar7 = puVar6;
  FUN_1003a5b88();
  func_0x000107c61574(puVar6);
  uVar9 = 0x112f1ba30;
  FUN_1000285a8(0x112f1ba30,&UNK_10db54438);
  puVar6 = &UNK_102dfae40;
  FUN_1000cb480(&UNK_102dfae40,0,uVar9);
  uVar9 = 0x112f1ba38;
  FUN_1000285a8(0x112f1ba38,&UNK_10db54440);
  puVar8 = &UNK_102dfae54;
  FUN_1000cb480(&UNK_102dfae54,0,uVar9);
  uVar9 = 0;
  FUN_100323df4(0);
  func_0x000107c610f8();
  FUN_1005dede4(puVar2,puVar5,puVar7,puVar6,puVar8,uVar9);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  return puVar2;
}



/* Entry: 1005ded6c; end: 1005dede3;  */

void FUN_1005ded6c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005dede4; end: 1005dee7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005dede4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fa6458) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6450) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6470) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6460) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fa6468) = param_5;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1005dee80; end: 1005deedb;  */

void FUN_1005dee80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005deedc; end: 1005df0f3;  */

void FUN_1005deedc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  return;
}



/* Entry: 1005df0f4; end: 1005df117;  */

void FUN_1005df0f4(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005df118; end: 1005df1ab; -[_TtC29SCNGLStudySettingServicesImpl24NGLStudySettingsProvider isDailyGamesSectionEnabled] */

undefined8 FUN_1005df118(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  FUN_1000d224c(&uStack_38);
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010efc7dd0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
  return uVar2;
}



/* Entry: 1005df1ac; end: 1005df1af;  */

void FUN_1005df1ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005df1b0; end: 1005df1eb;  */

void FUN_1005df1b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005df1ec; end: 1005df1f7;  */

undefined ** FUN_1005df1ec(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005df1f8; end: 1005df223;  */

void FUN_1005df1f8(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005df224; end: 1005df22b;  */

void FUN_1005df224(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1029f6658);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005df22c; end: 1005df2af;  */

void FUN_1005df22c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1029f6658,param_2,FUN_1005df2b0,param_2,&UNK_1029f665c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005df2b0; end: 1005df2d7;  */

void FUN_1005df2b0(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1005df2d8; end: 1005df2e3;  */

void FUN_1005df2d8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  func_0x0001005c6f80();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_1005e08d8(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_1005e08f8();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  func_0x000107c6157c();
  FUN_1005e0934();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar6);
  *param_1 = lVar1;
  return;
}



/* Entry: 1005df2e4; end: 1005df443;  */

void FUN_1005df2e4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  func_0x0001005c6f80();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_1005e08d8(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_1005e08f8();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  func_0x000107c6157c();
  FUN_1005e0934();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 1005df444; end: 1005df44b;  */

void FUN_1005df444(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005df44c; end: 1005df49f;  */

void FUN_1005df44c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005df4a0; end: 1005df4ab;  */

void FUN_1005df4a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  func_0x0001005c6f00();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1005dfc20(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005df4ac; end: 1005df57b;  */

void FUN_1005df4ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  func_0x0001005c6f00();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1005dfc20(uStack_48,uStack_50,uStack_58,uStack_60);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005df57c; end: 1005df583;  */

void FUN_1005df57c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005df584; end: 1005df5d7;  */

void FUN_1005df584(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005df5d8; end: 1005df5e3;  */

void FUN_1005df5d8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  func_0x0001005c6b80();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  *(undefined8 *)(lVar2 + 0x28) = uStack_78;
  *(undefined8 *)(lVar2 + 0x30) = uStack_80;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar6 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  FUN_1005df788(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_1005df7a8();
  *(undefined8 *)(lVar2 + 0x10) = uVar8;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(undefined **)(lVar2 + 0x38) = puVar3;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005df788);
  (*pcVar1)();
}



/* Entry: 1005df5e4; end: 1005df787;  */

void FUN_1005df5e4(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  func_0x0001005c6b80();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  FUN_1005df788(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_1005df7a8();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    *(undefined **)(param_2 + 0x38) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005df788);
  (*pcVar1)();
}



/* Entry: 1005df788; end: 1005df7a7;  */

void FUN_1005df788(void)

{
  func_0x000107c61168(&PTR_PTR_112ee3b38);
  return;
}



/* Entry: 1005df7a8; end: 1005dfb2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005df7a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar6 = &UNK_11058a840;
  puVar2 = puVar6;
  func_0x000107c613fc(&UNK_11058a840,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_11058a958;
  func_0x000107c613fc(&UNK_11058a958,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1007fc698;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1007fc698;
  puStack_88 = &UNK_11058a970;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_78;
  func_0x000107c6157c();
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar8 = *(undefined8 *)(param_1 + _DAT_113082480);
  uVar9 = *(undefined8 *)(param_4 + _DAT_1130385d8);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  func_0x000107c613fc(&UNK_11058a840,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar3 = &UNK_11058a9a8;
  func_0x000107c613fc(&UNK_11058a9a8,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar6;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(long *)(puVar3 + 0x28) = param_1;
  pcStack_80 = FUN_1005e02dc;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)0x1005e029c;
  puStack_88 = &UNK_11058a9c0;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar6 = &UNK_11058a840;
  func_0x000107c613fc(&UNK_11058a840,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  func_0x000107c61574();
  puVar3 = &UNK_11058a9f8;
  func_0x000107c613fc(&UNK_11058a9f8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar6;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  pcStack_80 = (code *)&UNK_102a3b054;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_102a3b058;
  puStack_88 = &UNK_11058aa10;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar6 = puStack_78;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar6 = PTR_PTR_1126abdd0;
  func_0x000107c610f8(PTR_PTR_1126abdd0);
  func_0x000107c47444();
  func_0x000107c42c20(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1005dfb2c; end: 1005dfb4f;  */

void FUN_1005dfb2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005dfb50; end: 1005dfc1b; -[SCLensesOnCameraServices initWithLensesCameraCapturerStateUpdatesProvider:lensesCameraViewControllerVisibilityProvider:lensesApplicationStateProvider:] */

undefined1 *
FUN_1005dfb50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112703d90;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005dfc1c; end: 1005dfc1f;  */

void FUN_1005dfc1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005dfc20; end: 1005dff5f;  */

void FUN_1005dfc20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  puVar2 = PTR_PTR_1126abd28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 0x49556172656d6163;
  func_0x000107c5fadc(0x49556172656d6163,0xed000065706f6353);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efb78d0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef1bc50);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f0db850);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005dff5c);
    (*pcVar1)();
  }
  *(long *)(unaff_x20 + 0x40) = lVar5;
  lVar5 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar5 != 0) {
    *(long *)(unaff_x20 + 0x48) = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005dff60);
  (*pcVar1)();
}



/* Entry: 1005dff60; end: 1005e0227; -[SCLensCarouselFeatureProviderPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005dff60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  puVar1 = PTR_PTR_1126dd958;
  func_0x000107c61160();
  lVar14 = (long)_DAT_112782648;
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  *(undefined **)(param_1 + lVar14) = puVar1;
  func_0x000107c61174();
  func_0x000107c61170(uVar12);
  lVar2 = param_1 + _DAT_11278264c;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c3e47c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar13 = (long)_DAT_112782650;
  lVar2 = param_1 + lVar13;
  func_0x000107c61148();
  lVar4 = lVar2;
  func_0x000107c4b57c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  lVar13 = param_1 + lVar13;
  func_0x000107c61148();
  lVar5 = lVar13;
  func_0x000107c4b590();
  func_0x000107c61180();
  func_0x000107c61170(lVar13);
  func_0x000107c40aa4(lVar5);
  func_0x000107c611b0();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_1091a5a90;
  puStack_90 = &UNK_110adf358;
  puVar6 = PTR_PTR_1126ae720;
  lStack_88 = lVar3;
  lStack_80 = lVar4;
  lStack_78 = lVar5;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_a8);
  func_0x000107c61180();
  lVar2 = param_1 + _DAT_112782654;
  func_0x000107c61148();
  lVar13 = lVar2;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puStack_d8 = puVar7;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_100857a24;
  puStack_c0 = &UNK_110adf388;
  puVar7 = PTR_PTR_1126ae720;
  puStack_b8 = puVar1;
  lStack_b0 = lVar13;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_d8);
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126dd970;
  func_0x000107c610f4(PTR_PTR_1126dd970);
  uVar12 = *(undefined8 *)(param_1 + lVar14);
  func_0x000107c4aeb4(uVar12);
  func_0x000107c61180();
  func_0x000107c471dc(puVar8,param_2,uVar12,puVar6,puVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112782658),param_2,puVar8);
  puVar9 = PTR_PTR_1126dd978;
  func_0x000107c61160(PTR_PTR_1126dd978);
  puVar10 = PTR_PTR_1126d1120;
  func_0x000107c61160(PTR_PTR_1126d1120);
  puVar11 = PTR_PTR_1126dd980;
  func_0x000107c610f4(PTR_PTR_1126dd980);
  func_0x000107c45c08();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_11278265c),param_2,puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 1005e0228; end: 1005e028b; -[SCLensCarouselManagerResolver init] */

undefined1 * FUN_1005e0228(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700d60;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae560;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1005e028c; end: 1005e0293; -[SCLensesOnCameraServices lensesApplicationStateProvider] */

undefined8 FUN_1005e028c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1005e0294; end: 1005e02a3; -[SCLensesOnCameraServices lensesCameraViewControllerVisibilityProvider] */

undefined8 FUN_1005e0294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1005e02a4; end: 1005e02db;  */

void FUN_1005e02a4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1005e02dc; end: 1005e02eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005e02dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    func_0x000107c61574();
    uVar5 = *(undefined8 *)(lVar3 + _DAT_113082420);
    FUN_1005e038c(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar1);
    FUN_1005e03ac(uVar2,uVar1,uVar5);
  }
  return;
}



/* Entry: 1005e02ec; end: 1005e038b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005e02ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61574();
    uVar1 = *(undefined8 *)(param_4 + _DAT_113082420);
    FUN_1005e038c(0);
    func_0x000107c610f8();
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_3);
    FUN_1005e03ac(param_2,param_3,uVar1);
  }
  return;
}



/* Entry: 1005e038c; end: 1005e03ab;  */

void FUN_1005e038c(void)

{
  func_0x000107c61168(&PTR_PTR_112881f48);
  return;
}



/* Entry: 1005e03ac; end: 1005e04db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1005e03ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112ee3d30;
  puVar4 = &stack0xffffffffffffffb0;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112ee3d38;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112ee3d40;
  puVar3 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112ee3d48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ee3d50) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ee3d58) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ee3d60) = param_3;
  FUN_1005e038c();
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar3);
  func_0x000107c61180();
  FUN_1005e04dc();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return puVar4;
}



/* Entry: 1005e04dc; end: 1005e0637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005e04dc(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  if (*(int *)(unaff_x20 + _DAT_112ee3d60) == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112ee3d58);
    if (lVar3 == 0) {
      return;
    }
    puVar1 = &UNK_11058ac00;
    func_0x000107c613fc(&UNK_11058ac00,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    puStack_40 = (undefined *)0x1008bb040;
    puStack_50 = (undefined *)0x1008baf88;
    puStack_48 = &UNK_11058ac40;
    puStack_38 = puVar1;
  }
  else {
    lVar3 = *(long *)(unaff_x20 + _DAT_112ee3d50);
    if (lVar3 == 0) {
      return;
    }
    puVar1 = &UNK_11058ac00;
    func_0x000107c613fc(&UNK_11058ac00,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    puStack_40 = &UNK_102a3bf30;
    puStack_50 = &UNK_10169aca4;
    puStack_48 = &UNK_11058ac18;
    puStack_38 = puVar1;
  }
  uStack_58 = 0x42000000;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5c320(lVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c3e924(lVar3);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 1005e0638; end: 1005e065b;  */

void FUN_1005e0638(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005e065c; end: 1005e0683;  */

void FUN_1005e065c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1005e0684; end: 1005e06e3;  */

void FUN_1005e0684(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005e06e4; end: 1005e06eb; -[SCLensCarouselManagerResolver lensCarouselManager] */

void FUN_1005e06e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbc3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_future_1125ccaa0);
  return;
}



/* Entry: 1005e06ec; end: 1005e07b7; -[SCLensCarouselFeatureServices initWithLensCarouselManager:lensDisplayableStateProvider:lazyLensCarouselManager:] */

undefined1 *
FUN_1005e06ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_11270a4d0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005e07b8; end: 1005e07d7; -[SCLensUIUpdateListenerAnnouncer .cxx_construct] */

void FUN_1005e07b8(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1005e07d8; end: 1005e08d3; -[SCLensCarouselFeatureInternalServices initWithCameraLensesViewControllerManager:uiUpdateAnnouncer:cameraReplyConfigurationResolver:cameraReplyConfigurationProvider:] */

undefined1 *
FUN_1005e07d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112701af8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005e08d4; end: 1005e08d7;  */

void FUN_1005e08d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005e08d8; end: 1005e08f7;  */

void FUN_1005e08d8(void)

{
  func_0x000107c61168(&PTR_PTR_112f1bb60);
  return;
}



/* Entry: 1005e08f8; end: 1005e0933;  */

void FUN_1005e08f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return;
}



/* Entry: 1005e0934; end: 1005e0a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005e0934(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_1130344b8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c49c0c();
    func_0x000107c615e8(lVar1);
    if ((int)lVar2 != 0) {
      uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000107c4ac68();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fa6460);
      lVar1 = 0;
      func_0x000102dfa908();
      func_0x000107c613fc();
      func_0x0001000c6560(0);
      func_0x000107c613fc();
      uVar4 = uVar5;
      func_0x000107c6157c();
      FUN_1000c6580();
      *(undefined8 *)(lVar1 + 0x18) = uVar5;
      *(undefined8 *)(lVar1 + 0x20) = uVar4;
      *(undefined8 *)(lVar1 + 0x10) = uVar3;
      func_0x000102dfa644();
      uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
      *(long *)(unaff_x20 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 1005e0a30; end: 1005e0a3f;  */

void FUN_1005e0a30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005e0a40; end: 1005e0a6b;  */

void FUN_1005e0a40(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005e0a6c; end: 1005e0a73;  */

void FUN_1005e0a6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1029f67bc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005e0a74; end: 1005e0af7;  */

void FUN_1005e0a74(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1029f67bc,param_2,FUN_1005e0af8,param_2,&UNK_1029f67c0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005e0af8; end: 1005e0b1f;  */

void FUN_1005e0af8(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1005e0b20; end: 1005e0b3f;  */

void FUN_1005e0b20(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  func_0x0001005c6ec0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  FUN_1005e1cd8(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uStack_90);
  FUN_1005e1cf8(uStack_68,uVar2,uVar3,uVar4,uVar5,uStack_90);
  *(undefined8 *)(lVar1 + 0x10) = uStack_68;
  *param_1 = lVar1;
  return;
}



/* Entry: 1005e0b40; end: 1005e0c8f;  */

void FUN_1005e0b40(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  func_0x0001005c6ec0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_1005e1cd8(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uStack_90);
  FUN_1005e1cf8(uStack_68,uVar1,uVar2,uVar3,uVar4,uStack_90);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 1005e0c90; end: 1005e0c97;  */

void FUN_1005e0c90(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005e0c98; end: 1005e0ceb;  */

void FUN_1005e0c98(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x58);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005e0cec; end: 1005e0cf7;  */

void FUN_1005e0cec(void)

{
  long unaff_x20;
  
  FUN_1005e0cf8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1005e0cf8; end: 1005e0f93;  */

void FUN_1005e0cf8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  func_0x0001005c68cc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174();
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174();
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  func_0x0001005e13ec();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = uVar10;
  FUN_1005e140c();
  *(undefined8 *)(param_2 + 0x10) = uVar11;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    *(undefined **)(param_2 + 0x58) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005e0f94);
  (*pcVar1)();
}


