/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030fc3c8; end: 1030fc41b;  */

void FUN_1030fc3c8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030fc41c; end: 1030fc50f;  */

void FUN_1030fc41c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1030fc64c();
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010311899c(0);
  func_0x000107c613fc();
  func_0x000103118800(uStack_38,uVar1);
  *(undefined8 *)(param_2 + 0x10) = uStack_38;
  func_0x000103118968();
  *(undefined8 *)(param_2 + 0x18) = uStack_38;
  *param_1 = param_2;
  return;
}



/* Entry: 1030fc510; end: 1030fc53b;  */

void FUN_1030fc510(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030fc53c; end: 1030fc58f;  */

void FUN_1030fc53c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030fc590; end: 1030fc597;  */

undefined8 FUN_1030fc590(void)

{
  return 0x1b;
}



/* Entry: 1030fc598; end: 1030fc61b;  */

void FUN_1030fc598(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1030fc69c,param_2,FUN_1030fc6a0,param_2,0x1030fc6c8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030fc61c; end: 1030fc64b;  */

undefined ** FUN_1030fc61c(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1030fc64c; end: 1030fc66b;  */

void FUN_1030fc64c(void)

{
  func_0x000107c61168(&PTR_PTR_112f3e108);
  return;
}



/* Entry: 1030fc66c; end: 1030fc69f;  */

undefined1  [16] FUN_1030fc66c(void)

{
  return ZEXT816(0x11060e8a8);
}



/* Entry: 1030fc6a0; end: 1030fc6f3;  */

void FUN_1030fc6a0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030fc6f4; end: 1030fc7fb;  */

void FUN_1030fc6f4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_1030fca04();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  func_0x000103119450(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  func_0x0001031190c0(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  FUN_10311941c();
  *(undefined8 *)(param_2 + 0x30) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 1030fc7fc; end: 1030fc8af;  */

long FUN_1030fc7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x000103119450(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x0001031190c0(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  FUN_10311941c();
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  return unaff_x20;
}



/* Entry: 1030fc8b0; end: 1030fc8f3;  */

void FUN_1030fc8b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030fc8f4; end: 1030fc947;  */

void FUN_1030fc8f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030fc948; end: 1030fc94f;  */

undefined8 FUN_1030fc948(void)

{
  return 0x1b;
}



/* Entry: 1030fc950; end: 1030fc9d3;  */

void FUN_1030fc950(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1030fca54,param_2,FUN_1030fca58,param_2,0x1030fca80,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030fc9d4; end: 1030fca03;  */

undefined ** FUN_1030fc9d4(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1030fca04; end: 1030fca23;  */

void FUN_1030fca04(void)

{
  func_0x000107c61168(&PTR_PTR_112f3e1d8);
  return;
}



/* Entry: 1030fca24; end: 1030fca57;  */

undefined1  [16] FUN_1030fca24(void)

{
  return ZEXT816(0x11060e948);
}



/* Entry: 1030fca58; end: 1030fcaab;  */

void FUN_1030fca58(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030fcaac; end: 1030fcb43;  */

void FUN_1030fcaac(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_1030fccec();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10311966c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_103119504();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 1030fcb44; end: 1030fcbaf;  */

long FUN_1030fcb44(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10311966c();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  FUN_103119504();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 1030fcbb0; end: 1030fcbdb;  */

void FUN_1030fcbb0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030fcbdc; end: 1030fcc2f;  */

void FUN_1030fcbdc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030fcc30; end: 1030fcc37;  */

undefined8 FUN_1030fcc30(void)

{
  return 0x1b;
}



/* Entry: 1030fcc38; end: 1030fccbb;  */

void FUN_1030fcc38(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1030fcd3c,param_2,FUN_1030fcd40,param_2,0x1030fcd68,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030fccbc; end: 1030fcceb;  */

undefined ** FUN_1030fccbc(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1030fccec; end: 1030fcd0b;  */

void FUN_1030fccec(void)

{
  func_0x000107c61168(&PTR_PTR_112f3e2c0);
  return;
}



/* Entry: 1030fcd0c; end: 1030fcd3f;  */

undefined1  [16] FUN_1030fcd0c(void)

{
  return ZEXT816(0x11060e9e8);
}



/* Entry: 1030fcd40; end: 1030fcd93;  */

void FUN_1030fcd40(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030fcd94; end: 1030fce37;  */

void FUN_1030fcd94(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1030fcf94();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_103119b9c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  func_0x000103119834(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 1030fce38; end: 1030fceab;  */

long FUN_1030fce38(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_103119b9c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000103119834(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 1030fceac; end: 1030fced7;  */

void FUN_1030fceac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030fced8; end: 1030fcedf;  */

undefined8 FUN_1030fced8(void)

{
  return 0x1b;
}



/* Entry: 1030fcee0; end: 1030fcf63;  */

void FUN_1030fcee0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1030fcfd4,param_2,FUN_1030fcfd8,param_2,0x1030fd000,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030fcf64; end: 1030fcf93;  */

undefined ** FUN_1030fcf64(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1030fcf94; end: 1030fcfb3;  */

void FUN_1030fcf94(void)

{
  func_0x000107c61168(&PTR_PTR_112f3e390);
  return;
}



/* Entry: 1030fcfb4; end: 1030fcfd7;  */

undefined1  [16] FUN_1030fcfb4(void)

{
  return ZEXT816(0x11060ea88);
}



/* Entry: 1030fcfd8; end: 1030fd02b;  */

void FUN_1030fcfd8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030fd02c; end: 1030fd17b;  */

void FUN_1030fd02c(long *param_1,long param_2)

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
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_1030fd3a8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_10311aa84(0);
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
  func_0x00010311a4f0(uStack_68,uVar1,uVar2,uVar3,uVar4,uStack_90);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 1030fd17c; end: 1030fd257;  */

long FUN_1030fd17c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  FUN_10311aa84(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x00010311a4f0(param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 1030fd258; end: 1030fd2a3;  */

void FUN_1030fd258(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030fd2a4; end: 1030fd2ab;  */

undefined8 FUN_1030fd2a4(void)

{
  return 0x1b;
}



/* Entry: 1030fd2ac; end: 1030fd32f;  */

void FUN_1030fd2ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1030fd3e8,param_2,FUN_1030fd3ec,param_2,FUN_1030fd414,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030fd330; end: 1030fd377;  */

undefined8 FUN_1030fd330(undefined8 param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_10311a9e8();
  func_0x000107c61574(uStack_28);
  return param_1;
}



/* Entry: 1030fd378; end: 1030fd3a7;  */

undefined ** FUN_1030fd378(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1030fd3a8; end: 1030fd3c7;  */

void FUN_1030fd3a8(void)

{
  func_0x000107c61168(&PTR_PTR_112f3e460);
  return;
}



/* Entry: 1030fd3c8; end: 1030fd3eb;  */

undefined1  [16] FUN_1030fd3c8(void)

{
  return ZEXT816(0x11060eb08);
}



/* Entry: 1030fd3ec; end: 1030fd413;  */

void FUN_1030fd3ec(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030fd414; end: 1030fd41b;  */

undefined8 FUN_1030fd414(void)

{
  undefined8 unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_10311a9e8();
  func_0x000107c61574(uStack_28);
  return unaff_x20;
}



/* Entry: 1030fd41c; end: 1030fd5b7;  */

void FUN_1030fd41c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1030fd6fc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x00010369327c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000103693064();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_10369308c();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 1030fd5b8; end: 1030fd5eb;  */

void FUN_1030fd5b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030fd5ec; end: 1030fd63f;  */

void FUN_1030fd5ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030fd640; end: 1030fd647;  */

undefined8 FUN_1030fd640(void)

{
  return 0x1b;
}



/* Entry: 1030fd648; end: 1030fd6cb;  */

void FUN_1030fd648(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1030fd74c,param_2,FUN_1030fd750,param_2,0x1030fd778,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030fd6cc; end: 1030fd6fb;  */

undefined ** FUN_1030fd6cc(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1030fd6fc; end: 1030fd71b;  */

void FUN_1030fd6fc(void)

{
  func_0x000107c61168(&PTR_PTR_112f3e550);
  return;
}



/* Entry: 1030fd71c; end: 1030fd74f;  */

undefined1  [16] FUN_1030fd71c(void)

{
  return ZEXT816(0x11060eb88);
}



/* Entry: 1030fd750; end: 1030fd7a3;  */

void FUN_1030fd750(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030fd7a4; end: 1030fd83b;  */

void FUN_1030fd7a4(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  FUN_1030fd9e4();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_103833d68();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_103833b8c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 1030fd83c; end: 1030fd8a7;  */

long FUN_1030fd83c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_103833d68();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  FUN_103833b8c();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 1030fd8a8; end: 1030fd8d3;  */

void FUN_1030fd8a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030fd8d4; end: 1030fd927;  */

void FUN_1030fd8d4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030fd928; end: 1030fd92f;  */

undefined8 FUN_1030fd928(void)

{
  return 0x1b;
}



/* Entry: 1030fd930; end: 1030fd9b3;  */

void FUN_1030fd930(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1030fda34,param_2,FUN_1030fda38,param_2,0x1030fda60,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030fd9b4; end: 1030fd9e3;  */

undefined ** FUN_1030fd9b4(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1030fd9e4; end: 1030fda03;  */

void FUN_1030fd9e4(void)

{
  func_0x000107c61168(&PTR_PTR_112f3e628);
  return;
}



/* Entry: 1030fda04; end: 1030fda37;  */

undefined1  [16] FUN_1030fda04(void)

{
  return ZEXT816(0x11060ec28);
}



/* Entry: 1030fda38; end: 1030fda8b;  */

void FUN_1030fda38(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030fda8c; end: 1030fdb1f;  */

void FUN_1030fda8c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1030fdd9c();
  func_0x000107c613fc();
  FUN_1030fdb74(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 1030fdb20; end: 1030fdb73;  */

undefined8 FUN_1030fdb20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1030fdb74(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 1030fdb74; end: 1030fdc4f;  */

void FUN_1030fdb74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x00010368fba0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10368f844();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10368fb20();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 1030fdc50; end: 1030fdc8b;  */

void FUN_1030fdc50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030fdc8c; end: 1030fdcdf;  */

void FUN_1030fdc8c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030fdce0; end: 1030fdce7;  */

undefined8 FUN_1030fdce0(void)

{
  return 0x1b;
}



/* Entry: 1030fdce8; end: 1030fdd6b;  */

void FUN_1030fdce8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1030fddec,param_2,FUN_1030fddf0,param_2,0x1030fde18,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030fdd6c; end: 1030fdd9b;  */

undefined ** FUN_1030fdd6c(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1030fdd9c; end: 1030fddbb;  */

void FUN_1030fdd9c(void)

{
  func_0x000107c61168(&PTR_PTR_112f3e6f8);
  return;
}



/* Entry: 1030fddbc; end: 1030fddef;  */

undefined1  [16] FUN_1030fddbc(void)

{
  return ZEXT816(0x11060ecc8);
}



/* Entry: 1030fddf0; end: 1030fde43;  */

void FUN_1030fddf0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030fde44; end: 1030fe0cf;  */

void FUN_1030fde44(long *param_1,long param_2)

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
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_1030fe224();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_103113af4(0);
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
  func_0x0001031136cc();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_10311374c();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 1030fe0d0; end: 1030fe113;  */

void FUN_1030fe0d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030fe114; end: 1030fe167;  */

void FUN_1030fe114(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030fe168; end: 1030fe16f;  */

undefined8 FUN_1030fe168(void)

{
  return 0x1b;
}



/* Entry: 1030fe170; end: 1030fe1f3;  */

void FUN_1030fe170(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1030fe274,param_2,FUN_1030fe278,param_2,0x1030fe2a0,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030fe1f4; end: 1030fe223;  */

undefined ** FUN_1030fe1f4(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1030fe224; end: 1030fe243;  */

void FUN_1030fe224(void)

{
  func_0x000107c61168(&PTR_PTR_112f3e7d8);
  return;
}



/* Entry: 1030fe244; end: 1030fe277;  */

undefined1  [16] FUN_1030fe244(void)

{
  return ZEXT816(0x11060ed68);
}



/* Entry: 1030fe278; end: 1030fe2cb;  */

void FUN_1030fe278(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030fe2cc; end: 1030fe467;  */

void FUN_1030fe2cc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_1030fe5ac();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x00010369668c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x0001036964bc();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_1036965f0();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 1030fe468; end: 1030fe49b;  */

void FUN_1030fe468(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030fe49c; end: 1030fe4ef;  */

void FUN_1030fe49c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030fe4f0; end: 1030fe4f7;  */

undefined8 FUN_1030fe4f0(void)

{
  return 0x1b;
}



/* Entry: 1030fe4f8; end: 1030fe57b;  */

void FUN_1030fe4f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  func_0x0001005d8744(1,0x1030fe5fc,param_2,FUN_1030fe600,param_2,0x1030fe628,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030fe57c; end: 1030fe5ab;  */

undefined ** FUN_1030fe57c(void)

{
  return &PTR_DAT_112fa42e8;
}



/* Entry: 1030fe5ac; end: 1030fe5cb;  */

void FUN_1030fe5ac(void)

{
  func_0x000107c61168(&PTR_PTR_112f3e8c0);
  return;
}



/* Entry: 1030fe5cc; end: 1030fe5ff;  */

undefined1  [16] FUN_1030fe5cc(void)

{
  return ZEXT816(0x11060ee08);
}



/* Entry: 1030fe600; end: 1030fe653;  */

void FUN_1030fe600(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030fe654; end: 1030fe90b;  */

void FUN_1030fe654(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  FUN_1030fed7c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126acc58;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f123410);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1f5f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0dbd30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010efc6cf0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 1030fe90c; end: 1030fe96f;  */

undefined8
FUN_1030fe90c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_1030fe970(param_1,param_2,param_3,param_4);
  return unaff_x20;
}


