/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10371bbc4; end: 10371bbf3;  */

undefined ** FUN_10371bbc4(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371bbf4; end: 10371bc13;  */

void FUN_10371bbf4(void)

{
  func_0x000107c61168(&PTR_PTR_112f8be80);
  return;
}



/* Entry: 10371bc14; end: 10371bc37;  */

undefined1  [16] FUN_10371bc14(void)

{
  return ZEXT816(0x110688530);
}



/* Entry: 10371bc38; end: 10371bc8b;  */

void FUN_10371bc38(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371bc8c; end: 10371bd33;  */

void FUN_10371bc8c(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_10371be90();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_103733fd4(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  FUN_103733d78(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 10371bd34; end: 10371bda7;  */

long FUN_10371bd34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_103733fd4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  FUN_103733d78(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 10371bda8; end: 10371bdd3;  */

void FUN_10371bda8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10371bdd4; end: 10371bddb;  */

undefined8 FUN_10371bdd4(void)

{
  return 0x1b;
}



/* Entry: 10371bddc; end: 10371be5f;  */

void FUN_10371bddc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371bed0,param_2,FUN_10371bed4,param_2,0x10371befc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371be60; end: 10371be8f;  */

undefined ** FUN_10371be60(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371be90; end: 10371beaf;  */

void FUN_10371be90(void)

{
  func_0x000107c61168(&PTR_PTR_112f8bf50);
  return;
}



/* Entry: 10371beb0; end: 10371bed3;  */

undefined1  [16] FUN_10371beb0(void)

{
  return ZEXT816(0x1106885b0);
}



/* Entry: 10371bed4; end: 10371bf27;  */

void FUN_10371bed4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371bf28; end: 10371c023;  */

void FUN_10371bf28(long *param_1,long param_2)

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
  FUN_10371c1c4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_103735ed0(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  func_0x000103735d6c(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 10371c024; end: 10371c0cb;  */

long FUN_10371c024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  FUN_103735ed0(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000103735d6c(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 10371c0cc; end: 10371c107;  */

void FUN_10371c0cc(void)

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



/* Entry: 10371c108; end: 10371c10f;  */

undefined8 FUN_10371c108(void)

{
  return 0x1b;
}



/* Entry: 10371c110; end: 10371c193;  */

void FUN_10371c110(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371c204,param_2,FUN_10371c208,param_2,0x10371c230,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371c194; end: 10371c1c3;  */

undefined ** FUN_10371c194(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371c1c4; end: 10371c1e3;  */

void FUN_10371c1c4(void)

{
  func_0x000107c61168(&PTR_PTR_112f8c020);
  return;
}



/* Entry: 10371c1e4; end: 10371c207;  */

undefined1  [16] FUN_10371c1e4(void)

{
  return ZEXT816(0x110688630);
}



/* Entry: 10371c208; end: 10371c25b;  */

void FUN_10371c208(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371c25c; end: 10371c303;  */

void FUN_10371c25c(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_10371c460();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_103739b00(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  func_0x000103739824(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 10371c304; end: 10371c377;  */

long FUN_10371c304(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_103739b00(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000103739824(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 10371c378; end: 10371c3a3;  */

void FUN_10371c378(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10371c3a4; end: 10371c3ab;  */

undefined8 FUN_10371c3a4(void)

{
  return 0x1b;
}



/* Entry: 10371c3ac; end: 10371c42f;  */

void FUN_10371c3ac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371c4a0,param_2,FUN_10371c4a4,param_2,0x10371c4cc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371c430; end: 10371c45f;  */

undefined ** FUN_10371c430(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371c460; end: 10371c47f;  */

void FUN_10371c460(void)

{
  func_0x000107c61168(&PTR_PTR_112f8c100);
  return;
}



/* Entry: 10371c480; end: 10371c4a3;  */

undefined1  [16] FUN_10371c480(void)

{
  return ZEXT816(0x1106886b0);
}



/* Entry: 10371c4a4; end: 10371c4f7;  */

void FUN_10371c4a4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371c4f8; end: 10371c5f3;  */

void FUN_10371c4f8(long *param_1,long param_2)

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
  FUN_10371c794();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10373dfbc(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  func_0x00010373dd20(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 10371c5f4; end: 10371c69b;  */

long FUN_10371c5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  FUN_10373dfbc(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x00010373dd20(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 10371c69c; end: 10371c6d7;  */

void FUN_10371c69c(void)

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



/* Entry: 10371c6d8; end: 10371c6df;  */

undefined8 FUN_10371c6d8(void)

{
  return 0x1b;
}



/* Entry: 10371c6e0; end: 10371c763;  */

void FUN_10371c6e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371c7d4,param_2,FUN_10371c7d8,param_2,0x10371c800,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371c764; end: 10371c793;  */

undefined ** FUN_10371c764(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371c794; end: 10371c7b3;  */

void FUN_10371c794(void)

{
  func_0x000107c61168(&PTR_PTR_112f8c1d0);
  return;
}



/* Entry: 10371c7b4; end: 10371c7d7;  */

undefined1  [16] FUN_10371c7b4(void)

{
  return ZEXT816(0x110688730);
}



/* Entry: 10371c7d8; end: 10371c82b;  */

void FUN_10371c7d8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371c82c; end: 10371c8d3;  */

void FUN_10371c82c(long *param_1,long param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_10371ca30();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_103743a1c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  func_0x00010374383c(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 10371c8d4; end: 10371c947;  */

long FUN_10371c8d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_103743a1c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x00010374383c(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 10371c948; end: 10371c973;  */

void FUN_10371c948(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10371c974; end: 10371c97b;  */

undefined8 FUN_10371c974(void)

{
  return 0x1b;
}



/* Entry: 10371c97c; end: 10371c9ff;  */

void FUN_10371c97c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371ca70,param_2,FUN_10371ca74,param_2,0x10371ca9c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371ca00; end: 10371ca2f;  */

undefined ** FUN_10371ca00(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371ca30; end: 10371ca4f;  */

void FUN_10371ca30(void)

{
  func_0x000107c61168(&PTR_PTR_112f8c2b0);
  return;
}



/* Entry: 10371ca50; end: 10371ca73;  */

undefined1  [16] FUN_10371ca50(void)

{
  return ZEXT816(0x1106887b0);
}



/* Entry: 10371ca74; end: 10371cac7;  */

void FUN_10371ca74(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371cac8; end: 10371cba7;  */

void FUN_10371cac8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  FUN_10371cd40();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_1037996bc(0);
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_1037995e0(uStack_48,uStack_50);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174(uStack_48);
  func_0x000107c6157c(uVar1);
  FUN_1037995ec();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 10371cba8; end: 10371cc57;  */

long FUN_10371cba8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_1037996bc(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1037995e0(param_1,param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  FUN_1037995ec();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 10371cc58; end: 10371cc83;  */

void FUN_10371cc58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10371cc84; end: 10371cc8b;  */

undefined8 FUN_10371cc84(void)

{
  return 0x1b;
}



/* Entry: 10371cc8c; end: 10371cd0f;  */

void FUN_10371cc8c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371cd80,param_2,FUN_10371cd84,param_2,0x10371cdac,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371cd10; end: 10371cd3f;  */

undefined ** FUN_10371cd10(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371cd40; end: 10371cd5f;  */

void FUN_10371cd40(void)

{
  func_0x000107c61168(&PTR_PTR_112f8c380);
  return;
}



/* Entry: 10371cd60; end: 10371cd83;  */

undefined1  [16] FUN_10371cd60(void)

{
  return ZEXT816(0x110688830);
}



/* Entry: 10371cd84; end: 10371cdd7;  */

void FUN_10371cd84(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371cdd8; end: 10371cf33;  */

void FUN_10371cdd8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_10371d024();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  FUN_1037445c4(0);
  func_0x000107c613fc();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_1037442fc(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 10371cf34; end: 10371cf67;  */

void FUN_10371cf34(void)

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



/* Entry: 10371cf68; end: 10371cf6f;  */

undefined8 FUN_10371cf68(void)

{
  return 0x1b;
}



/* Entry: 10371cf70; end: 10371cff3;  */

void FUN_10371cf70(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371d064,param_2,FUN_10371d068,param_2,0x10371d090,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371cff4; end: 10371d023;  */

undefined ** FUN_10371cff4(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371d024; end: 10371d043;  */

void FUN_10371d024(void)

{
  func_0x000107c61168(&PTR_PTR_112f8c450);
  return;
}



/* Entry: 10371d044; end: 10371d067;  */

undefined1  [16] FUN_10371d044(void)

{
  return ZEXT816(0x1106888b0);
}



/* Entry: 10371d068; end: 10371d0bb;  */

void FUN_10371d068(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371d0bc; end: 10371d217;  */

void FUN_10371d0bc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_10371d308();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  FUN_103748284(0);
  func_0x000107c613fc();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_10374805c(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 10371d218; end: 10371d24b;  */

void FUN_10371d218(void)

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



/* Entry: 10371d24c; end: 10371d253;  */

undefined8 FUN_10371d24c(void)

{
  return 0x1b;
}



/* Entry: 10371d254; end: 10371d2d7;  */

void FUN_10371d254(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371d348,param_2,FUN_10371d34c,param_2,0x10371d374,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371d2d8; end: 10371d307;  */

undefined ** FUN_10371d2d8(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371d308; end: 10371d327;  */

void FUN_10371d308(void)

{
  func_0x000107c61168(&PTR_PTR_112f8c528);
  return;
}



/* Entry: 10371d328; end: 10371d34b;  */

undefined1  [16] FUN_10371d328(void)

{
  return ZEXT816(0x110688930);
}



/* Entry: 10371d34c; end: 10371d39f;  */

void FUN_10371d34c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371d3a0; end: 10371d68f;  */

void FUN_10371d3a0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  FUN_10371d788();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_60;
  *(undefined8 *)(param_2 + 0x28) = uStack_68;
  func_0x0001000285a8(0x112f5fed8,&UNK_10dbbba08);
  func_0x000107c610f8();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c6157c(uStack_70);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(param_2 + 0x18) = puVar4;
  FUN_10372c928(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar4);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar3;
  func_0x00010372c488();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  func_0x000107c6157c();
  func_0x00010372c4c8();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uStack_70);
  func_0x000107c61574(uVar5);
  *param_1 = param_2;
  return;
}



/* Entry: 10371d690; end: 10371d6cb;  */

void FUN_10371d690(void)

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



/* Entry: 10371d6cc; end: 10371d6d3;  */

undefined8 FUN_10371d6cc(void)

{
  return 0x1b;
}



/* Entry: 10371d6d4; end: 10371d757;  */

void FUN_10371d6d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371d7c8,param_2,FUN_10371d7cc,param_2,0x10371d7f4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371d758; end: 10371d787;  */

undefined ** FUN_10371d758(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371d788; end: 10371d7a7;  */

void FUN_10371d788(void)

{
  func_0x000107c61168(&PTR_PTR_112f8c600);
  return;
}



/* Entry: 10371d7a8; end: 10371d7cb;  */

undefined1  [16] FUN_10371d7a8(void)

{
  return ZEXT816(0x1106889b0);
}



/* Entry: 10371d7cc; end: 10371d81f;  */

void FUN_10371d7cc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371d820; end: 10371d943;  */

void FUN_10371d820(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_10371db14();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  func_0x000103ac0b2c(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000103ac0714();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c6157c();
  func_0x000103ac082c();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 10371d944; end: 10371da23;  */

long FUN_10371d944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x000103ac0b2c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103ac0714();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  func_0x000103ac082c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 10371da24; end: 10371da57;  */

void FUN_10371da24(void)

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



/* Entry: 10371da58; end: 10371da5f;  */

undefined8 FUN_10371da58(void)

{
  return 0x1b;
}



/* Entry: 10371da60; end: 10371dae3;  */

void FUN_10371da60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371db54,param_2,FUN_10371db58,param_2,0x10371db80,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371dae4; end: 10371db13;  */

undefined ** FUN_10371dae4(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371db14; end: 10371db33;  */

void FUN_10371db14(void)

{
  func_0x000107c61168(&PTR_PTR_112f8c6e0);
  return;
}



/* Entry: 10371db34; end: 10371db57;  */

undefined1  [16] FUN_10371db34(void)

{
  return ZEXT816(0x110688a30);
}



/* Entry: 10371db58; end: 10371dbab;  */

void FUN_10371db58(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371dbac; end: 10371dd07;  */

void FUN_10371dbac(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_10371ddf8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  *(undefined8 *)(param_2 + 0x20) = uStack_58;
  FUN_1037417ec(0);
  func_0x000107c613fc();
  uVar1 = uStack_50;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(uStack_58);
  FUN_103741470(uStack_48,uVar1,uStack_58);
  *(undefined8 *)(param_2 + 0x10) = uStack_48;
  *param_1 = param_2;
  return;
}



/* Entry: 10371dd08; end: 10371dd3b;  */

void FUN_10371dd08(void)

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



/* Entry: 10371dd3c; end: 10371dd43;  */

undefined8 FUN_10371dd3c(void)

{
  return 0x1b;
}



/* Entry: 10371dd44; end: 10371ddc7;  */

void FUN_10371dd44(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10371de38,param_2,FUN_10371de3c,param_2,0x10371de64,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10371ddc8; end: 10371ddf7;  */

undefined ** FUN_10371ddc8(void)

{
  return &PTR_DAT_1130670c0;
}



/* Entry: 10371ddf8; end: 10371de17;  */

void FUN_10371ddf8(void)

{
  func_0x000107c61168(&PTR_PTR_112f8c7b8);
  return;
}



/* Entry: 10371de18; end: 10371de3b;  */

undefined1  [16] FUN_10371de18(void)

{
  return ZEXT816(0x110688ab0);
}



/* Entry: 10371de3c; end: 10371de8f;  */

void FUN_10371de3c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10371de90; end: 10371df3f;  */

void FUN_10371de90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_10371e294();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_10371e0d4(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61170(uStack_58);
  *param_1 = uVar1;
  return;
}


