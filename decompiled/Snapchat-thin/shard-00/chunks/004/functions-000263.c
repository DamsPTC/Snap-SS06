/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005eb430; end: 1005eb45b;  */

void FUN_1005eb430(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb45c; end: 1005eb487;  */

long FUN_1005eb45c(long param_1)

{
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  func_0x000107c60c50(param_1 + 0x48,in_stack_00000000,in_stack_00000008);
  return param_1 + 0x48;
}



/* Entry: 1005eb488; end: 1005eb4b3;  */

void FUN_1005eb488(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb4b4; end: 1005eb4c7;  */

void FUN_1005eb4b4(void)

{
  return;
}



/* Entry: 1005eb4c8; end: 1005eb59b;  */

void FUN_1005eb4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000107c60c84(&uStack_88,param_4 * 3 + -2);
  for (lVar2 = 0; param_4 != lVar2; lVar2 = lVar2 + 1) {
    puVar1 = &UNK_10f82fbc4;
    if (lVar2 != 0) {
      puVar1 = &UNK_10f82fbc6;
    }
    func_0x000107c60c58(&uStack_88,puVar1);
  }
  FUN_1005eb59c(auStack_60,&uStack_70,&uStack_88);
  FUN_1003a91d4(&UNK_10f82fbca);
  FUN_1003a9204(param_1);
  func_0x000107c60ca0(&uStack_88);
  return;
}



/* Entry: 1005eb59c; end: 1005eb5cf;  */

undefined8 * FUN_1005eb59c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1005d466c();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  param_1[3] = param_2;
  return param_1;
}



/* Entry: 1005eb5d0; end: 1005eb607;  */

void FUN_1005eb5d0(void)

{
  return;
}



/* Entry: 1005eb608; end: 1005eb633;  */

void FUN_1005eb608(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb634; end: 1005eb643;  */

void FUN_1005eb634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000107c60c84(&uStack_88,7);
  for (lVar2 = 0; lVar2 != 3; lVar2 = lVar2 + 1) {
    puVar1 = &UNK_10f82fbc4;
    if (lVar2 != 0) {
      puVar1 = &UNK_10f82fbc6;
    }
    func_0x000107c60c58(&uStack_88,puVar1);
  }
  FUN_1005eb59c(auStack_60,&uStack_70,&uStack_88);
  FUN_1003a91d4(&UNK_10f82fbca);
  FUN_1003a9204(param_1);
  func_0x000107c60ca0(&uStack_88);
  return;
}



/* Entry: 1005eb644; end: 1005eb66f;  */

void FUN_1005eb644(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb670; end: 1005eb67b;  */

void FUN_1005eb670(void)

{
  return;
}



/* Entry: 1005eb67c; end: 1005eb717;  */

void FUN_1005eb67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x19;
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  FUN_1005eb670();
  FUN_1005eb4c8(appuStack_48,param_3,param_4,0xf);
  if (-1 < cStack_31) {
    appuStack_48[0] = appuStack_48;
  }
  func_0x000107c613d0(appuStack_48[0]);
  FUN_10054bfa4();
  func_0x000107c60ca0(appuStack_48);
  *unaff_x19 = &PTR_DAT_110a7c690;
  return;
}



/* Entry: 1005eb718; end: 1005eb783;  */

undefined8 *
FUN_1005eb718(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_100060b18(param_1 + 9,&uStack_30);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0;
  return param_1;
}



/* Entry: 1005eb784; end: 1005eb78f;  */

void FUN_1005eb784(void)

{
  return;
}



/* Entry: 1005eb790; end: 1005eb7bb;  */

void FUN_1005eb790(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb7bc; end: 1005eb7df;  */

void FUN_1005eb7bc(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb7e0; end: 1005eb80b;  */

void FUN_1005eb7e0(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb80c; end: 1005eb817;  */

long FUN_1005eb80c(long param_1)

{
  long unaff_x19;
  
  return unaff_x19 + param_1;
}



/* Entry: 1005eb818; end: 1005eb843;  */

void FUN_1005eb818(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb844; end: 1005eb86f;  */

void FUN_1005eb844(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb870; end: 1005eb887;  */

void FUN_1005eb870(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}



/* Entry: 1005eb888; end: 1005eb8b3;  */

void FUN_1005eb888(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb8b4; end: 1005eb8df;  */

void FUN_1005eb8b4(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb8e0; end: 1005eb90b;  */

void FUN_1005eb8e0(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb90c; end: 1005eb937;  */

void FUN_1005eb90c(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb938; end: 1005eb963;  */

void FUN_1005eb938(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb964; end: 1005eb96f;  */

undefined8 FUN_1005eb964(void)

{
  undefined8 in_stack_00000000;
  
  return in_stack_00000000;
}



/* Entry: 1005eb970; end: 1005eb99b;  */

void FUN_1005eb970(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb99c; end: 1005eb9a3;  */

void FUN_1005eb99c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000107c60c84(&uStack_88,0xd);
  for (lVar2 = 0; lVar2 != 5; lVar2 = lVar2 + 1) {
    puVar1 = &UNK_10f82fbc4;
    if (lVar2 != 0) {
      puVar1 = &UNK_10f82fbc6;
    }
    func_0x000107c60c58(&uStack_88,puVar1);
  }
  FUN_1005eb59c(auStack_60,&uStack_70,&uStack_88);
  FUN_1003a91d4(&UNK_10f82fbca);
  FUN_1003a9204(param_1);
  func_0x000107c60ca0(&uStack_88);
  return;
}



/* Entry: 1005eb9a4; end: 1005eb9cf;  */

void FUN_1005eb9a4(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eb9d0; end: 1005eb9df;  */

undefined8 * FUN_1005eb9d0(void)

{
  undefined8 *puVar1;
  int iVar2;
  long in_x3;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar3;
  long unaff_x22;
  
  puVar1 = (undefined8 *)(unaff_x19 + unaff_x22);
  *puVar1 = &PTR_DAT_110d99f30;
  puVar1[1] = unaff_x20;
  puVar1[3] = 0x32aaaba7;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[10] = 0;
  for (lVar3 = 0; unaff_x21 = unaff_x21 + -1, in_x3 != lVar3; lVar3 = lVar3 + 1) {
    iVar2 = (int)*(char *)(unaff_x21 + in_x3);
    FUN_10054bf9c();
    if (iVar2 == 0) break;
  }
  FUN_100060b18(puVar1 + 0xb,&stack0xffffffffffffffb0);
  *(undefined1 *)(puVar1 + 0xe) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  if ((*(byte *)(puVar1[1] + 0x16c) & 1) == 0) {
    FUN_10054c7ec(puVar1);
  }
  return puVar1;
}



/* Entry: 1005eb9e0; end: 1005eba0b;  */

void FUN_1005eb9e0(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eba0c; end: 1005eba37;  */

void FUN_1005eba0c(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eba38; end: 1005eba3f;  */

void FUN_1005eba38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000107c60c84(&uStack_88,0x1c);
  for (lVar2 = 0; lVar2 != 10; lVar2 = lVar2 + 1) {
    puVar1 = &UNK_10f82fbc4;
    if (lVar2 != 0) {
      puVar1 = &UNK_10f82fbc6;
    }
    func_0x000107c60c58(&uStack_88,puVar1);
  }
  FUN_1005eb59c(auStack_60,&uStack_70,&uStack_88);
  FUN_1003a91d4(&UNK_10f82fbca);
  FUN_1003a9204(param_1);
  func_0x000107c60ca0(&uStack_88);
  return;
}



/* Entry: 1005eba40; end: 1005eba6b;  */

void FUN_1005eba40(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005eba6c; end: 1005ebae7;  */

void FUN_1005eba6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x19;
  undefined8 **appuStack_48 [2];
  char cStack_31;
  
  FUN_1005e7a1c();
  func_0x0001005eb4c0(appuStack_48,param_3,param_4);
  if (-1 < cStack_31) {
    appuStack_48[0] = appuStack_48;
  }
  func_0x000107c613d0(appuStack_48[0]);
  func_0x0001005eb5f4();
  func_0x00010054f944();
  *unaff_x19 = &PTR_DAT_110a7ce40;
  return;
}



/* Entry: 1005ebae8; end: 1005ebaf7;  */

void FUN_1005ebae8(void)

{
  return;
}



/* Entry: 1005ebaf8; end: 1005ebb23;  */

void FUN_1005ebaf8(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005ebb24; end: 1005ebb33;  */

undefined8 * FUN_1005ebb24(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  *param_1 = &PTR_DAT_110d99f30;
  param_1[1] = param_2;
  param_1[3] = 0x32aaaba7;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  lVar1 = param_3;
  for (lVar3 = 0; lStack_48 = 0x68, lVar3 != 0x68; lVar3 = lVar3 + 1) {
    iVar2 = (int)*(char *)(lVar1 + 0x67);
    FUN_10054bf9c();
    lStack_48 = lVar3;
    if (iVar2 == 0) break;
    lVar1 = lVar1 + -1;
  }
  lStack_48 = 0x68 - lStack_48;
  lStack_50 = param_3;
  FUN_100060b18(param_1 + 0xb,&lStack_50);
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if ((*(byte *)(param_1[1] + 0x16c) & 1) == 0) {
    FUN_10054c7ec(param_1);
  }
  return param_1;
}



/* Entry: 1005ebb34; end: 1005ebb5f;  */

void FUN_1005ebb34(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005ebb60; end: 1005ebb8b;  */

void FUN_1005ebb60(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005ebb8c; end: 1005ebbb7;  */

void FUN_1005ebb8c(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005ebbb8; end: 1005ebbe3;  */

void FUN_1005ebbb8(void)

{
  FUN_1005eb404();
  FUN_1005eb45c();
  func_0x0001005eb468();
  return;
}



/* Entry: 1005ebbe4; end: 1005ec573;  */

void FUN_1005ebbe4(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x22;
  
  lVar3 = *param_1;
  *param_1 = param_2;
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x9308) != 0) {
      plVar4 = *(long **)(lVar3 + 0x9300);
      plVar1 = *(long **)(*(long *)(lVar3 + 0x92f8) + 8);
      lVar2 = *plVar4;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
      *(undefined8 *)(lVar3 + 0x9308) = 0;
      while (plVar4 != (long *)(lVar3 + 0x92f8)) {
        func_0x000107c34188();
        func_0x000107c343d0();
        plVar4 = unaff_x22;
      }
    }
    func_0x000107c60ca0(lVar3 + 0x92e0);
    func_0x000107c60d94(lVar3 + 0x9298);
    func_0x000107c3444c(0x9220);
    func_0x000107c29f24(lVar3 + 0x91a8);
    func_0x000107c34704(0x9130);
    func_0x000107c3438c(0x90a8);
    func_0x000107c3438c(0x9020);
    func_0x000107c3455c(0x8fa8);
    func_0x000107c3455c(0x8f30);
    func_0x000107c3455c(0x8eb8);
    func_0x000107c3438c(0x8e30);
    func_0x000107c3455c(0x8db8);
    func_0x000107c3438c(0x8d30);
    func_0x000107c3444c(0x8cb8);
    func_0x000107c3438c(0x8c30);
    func_0x000107c2a090(lVar3 + 0x8bb8);
    func_0x000107c3438c(0x8b30);
    func_0x000107c2a094(lVar3 + 0x8ab8);
    func_0x000107c3438c(0x8a30);
    func_0x000107c3442c(0x89b8);
    func_0x000107c2a098(lVar3 + 0x8940);
    func_0x000107c34470(0x88c8);
    func_0x000107c34470(0x8850);
    func_0x000107c3438c(0x87c8);
    func_0x000107c3438c(0x8740);
    func_0x000107c3438c(0x86b8);
    func_0x000107c3438c(0x8630);
    func_0x000107c3438c(0x85a8);
    func_0x000107c3438c(0x8520);
    func_0x000107c3438c(0x8498);
    func_0x000107c3438c(0x8410);
    func_0x000107c3438c(0x8388);
    func_0x000107c3438c(0x8300);
    func_0x000107c3438c(0x8278);
    func_0x000107c3438c(0x81f0);
    func_0x000107c3442c(0x8178);
    func_0x000107c34470(0x8100);
    func_0x000107c34470(0x8088);
    func_0x000107c34470(0x8010);
    func_0x000107c34470(0x7f98);
    func_0x000107c34470(0x7f20);
    func_0x000107c34470(0x7ea8);
    func_0x000107c34470(0x7e30);
    func_0x000107c34470(0x7db8);
    func_0x000107c34628(0x7d40);
    func_0x000107c3438c(0x7cb8);
    func_0x000107c34628(0x7c40);
    func_0x000107c343dc(0x7bc8);
    func_0x000107c343dc(0x7b50);
    func_0x000107c343dc(0x7ad8);
    func_0x000107c34700();
    func_0x000107c34450(0x79e8);
    func_0x000107c3438c(0x7960);
    func_0x000107c346fc();
    func_0x000107c3438c(0x7860);
    func_0x000107c3438c(0x77d8);
    func_0x000107c3438c(0x7750);
    func_0x000107c3438c(0x76c8);
    func_0x000107c346f8();
    func_0x000107c3438c(0x75c8);
    func_0x000107c346f4();
    func_0x000107c3442c(0x74d8);
    func_0x000107c3444c(0x7460);
    func_0x000107c343dc(0x73e8);
    func_0x000107c346f0();
    func_0x000107c346ec();
    func_0x000107c3438c(0x7270);
    func_0x000107c3438c(0x71e8);
    func_0x000107c346e8();
    func_0x000107c34450(0x70f8);
    func_0x000107c3438c(0x7070);
    func_0x000107c343dc(0x6ff8);
    func_0x000107c3442c(0x6f80);
    func_0x000107c3442c(0x6f08);
    func_0x000107c3442c(0x6e90);
    func_0x000107c3442c(0x6e18);
    func_0x000107c3442c(0x6da0);
    func_0x000107c3442c(0x6d28);
    func_0x000107c3438c(0x6ca0);
    func_0x000107c3438c(0x6c18);
    func_0x000107c3438c(0x6b90);
    func_0x000107c3438c(0x6b08);
    func_0x000107c3451c(0x6a90);
    func_0x000107c3451c(0x6a18);
    func_0x000107c3451c(0x69a0);
    func_0x000107c3438c(0x6918);
    func_0x000107c3438c(0x6890);
    func_0x000107c3438c(0x6808);
    func_0x000107c3438c(0x6780);
    func_0x000107c3438c(0x66f8);
    func_0x000107c3438c(0x6670);
    func_0x000107c3438c(0x65e8);
    func_0x000107c3438c(0x6560);
    func_0x000107c34544(0x64e8);
    func_0x000107c34544(0x6470);
    func_0x000107c346e4();
    func_0x000107c346e0();
    func_0x000107c346dc();
    func_0x000107c346d8();
    func_0x000107c346d4();
    func_0x000107c346d0();
    func_0x000107c346cc();
    func_0x000107c3451c(0x60b0);
    func_0x000107c3451c(0x6038);
    func_0x000107c34520(0x5fc0);
    func_0x000107c34520(0x5f48);
    func_0x000107c34520(0x5ed0);
    func_0x000107c34544(0x5e58);
    func_0x000107c34544(0x5de0);
    func_0x000107c34520(0x5d68);
    func_0x000107c346c8();
    func_0x000107c3438c(0x5c68);
    func_0x000107c3438c(0x5be0);
    func_0x000107c3438c(0x5b58);
    func_0x000107c3438c(0x5ad0);
    func_0x000107c3438c(0x5a48);
    func_0x000107c3438c(0x59c0);
    func_0x000107c3438c(0x5938);
    func_0x000107c3438c(0x58b0);
    func_0x000107c3438c(0x5828);
    func_0x000107c3438c(0x57a0);
    func_0x000107c34624(0x5728);
    func_0x000107c34624(0x56b0);
    func_0x000107c3438c(0x5628);
    func_0x000107c3438c(0x55a0);
    func_0x000107c3438c(0x5518);
    func_0x000107c3438c(0x5490);
    func_0x000107c346c4();
    func_0x000107c34598(0x53a0);
    func_0x000107c346c0();
    func_0x000107c3438c(0x52a0);
    func_0x000107c3438c(0x5218);
    func_0x000107c3438c(0x5190);
    func_0x000107c346bc();
    func_0x000107c3438c(0x5090);
    func_0x000107c346b8();
    func_0x000107c3438c(0x4f90);
    func_0x000107c3442c(0x4f18);
    func_0x000107c3438c(0x4e90);
    func_0x000107c3438c(0x4e08);
    func_0x000107c3438c(0x4d80);
    func_0x000107c3438c(0x4cf8);
    func_0x000107c3444c(0x4c80);
    func_0x000107c346b4();
    func_0x000107c3444c(0x4b90);
    func_0x000107c3444c(0x4b18);
    func_0x000107c346b0();
    func_0x000107c3442c(0x4a28);
    func_0x000107c3444c(0x49b0);
    func_0x000107c3444c(0x4938);
    func_0x000107c3444c(0x48c0);
    func_0x000107c3444c(0x4848);
    func_0x000107c3444c(0x47d0);
    func_0x000107c3444c(0x4758);
    func_0x000107c3444c(0x46e0);
    func_0x000107c3444c(0x4668);
    func_0x000107c3442c(0x45f0);
    func_0x000107c3442c(0x4578);
    func_0x000107c3444c(0x4500);
    func_0x000107c3438c(0x4478);
    func_0x000107c3438c(0x43f0);
    func_0x000107c3438c(0x4368);
    func_0x000107c3438c(0x42e0);
    func_0x000107c346ac();
    func_0x000107c3461c(0x41f0);
    func_0x000107c3461c(0x4178);
    func_0x000107c3438c(0x40f0);
    func_0x000107c2a0a8(lVar3 + 0x4078);
    func_0x000107c2a078(lVar3 + 0x4000);
    func_0x000107c343dc(0x3f88);
    func_0x000107c3438c(0x3f00);
    func_0x000107c3438c(0x3e78);
    func_0x000107c3438c(0x3df0);
    func_0x000107c34634(0x3d78);
    func_0x000107c34634(0x3d00);
    func_0x000107c3438c(0x3c78);
    func_0x000107c346a8();
    func_0x000107c2a0ac(lVar3 + 0x3b88);
    func_0x000107c3438c(0x3b00);
    func_0x000107c3438c(0x3a78);
    func_0x000107c3438c(0x39f0);
    func_0x000107c34630(0x3978);
    func_0x000107c34630(0x3900);
    func_0x000107c3438c(0x3878);
    func_0x000107c3438c(0x37f0);
    func_0x000107c3438c(0x3768);
    func_0x000107c346a4();
    func_0x000107c346a0();
    func_0x000107c3469c();
    func_0x000107c34704(0x3588);
    func_0x000107c3438c(0x3500);
    func_0x000107c34520(0x3488);
    func_0x000107c3462c(0x3410);
    func_0x000107c34548(0x3398);
    func_0x000107c3438c(0x3310);
    func_0x000107c3438c(0x3288);
    func_0x000107c3438c(0x3200);
    func_0x000107c3438c(0x3178);
    func_0x000107c3438c(0x30f0);
    func_0x000107c3438c(0x3068);
    func_0x000107c3438c(0x2fe0);
    func_0x000107c3438c(0x2f58);
    func_0x000107c34638(12000);
    func_0x000107c34638(0x2e68);
    func_0x000107c34620(0x2df0);
    func_0x000107c34698();
    func_0x000107c3462c(0x2d00);
    func_0x000107c34548(0x2c88);
    func_0x000107c34548(0x2c10);
    func_0x000107c34620(0x2b98);
    func_0x000107c34548(0x2b20);
    func_0x000107c3438c(0x2a98);
    func_0x000107c3438c(0x2a10);
    func_0x000107c3438c(0x2988);
    func_0x000107c34694();
    func_0x000107c34594(0x2898);
    func_0x000107c34594(0x2820);
    func_0x000107c34594(0x27a8);
    func_0x000107c3442c(0x2730);
    func_0x000107c343dc(0x26b8);
    func_0x000107c34450(0x2640);
    func_0x000107c3438c(0x25b8);
    func_0x000107c3438c(0x2530);
    func_0x000107c3438c(0x24a8);
    func_0x000107c3438c(0x2420);
    func_0x000107c343dc(0x23a8);
    func_0x000107c343dc(0x2330);
    func_0x000107c343dc(0x22b8);
    func_0x000107c343dc(0x2240);
    func_0x000107c343dc(0x21c8);
    func_0x000107c343dc(0x2150);
    func_0x000107c343dc(0x20d8);
    func_0x000107c34598(0x2060);
    func_0x000107c343dc(0x1fe8);
    func_0x000107c34450(0x1f70);
    func_0x000107c34450(0x1ef8);
    func_0x000107c34450(0x1e80);
    func_0x000107c34598(0x1e08);
    func_0x000107c343dc(0x1d90);
    func_0x000107c34450(0x1d18);
    func_0x000107c34450(0x1ca0);
    func_0x000107c34450(0x1c28);
    func_0x000107c34450(0x1bb0);
    func_0x000107c343dc(0x1b38);
    func_0x000107c343dc(0x1ac0);
    func_0x000107c34450(0x1a48);
    func_0x000107c343dc(0x19d0);
    func_0x000107c3442c(0x1958);
    func_0x000107c34450(0x18e0);
    func_0x000107c34450(0x1868);
    func_0x000107c34450(0x17f0);
    func_0x000107c343dc(0x1778);
    func_0x000107c343dc(0x1700);
    func_0x000107c343dc(0x1688);
    func_0x000107c343dc(0x1610);
    func_0x000107c343dc(0x1598);
    func_0x000107c343dc(0x1520);
    func_0x000107c34690();
    func_0x000107c3442c(0x1430);
    func_0x000107c343dc(0x13b8);
    func_0x000107c343dc(0x1340);
    func_0x000107c343dc(0x12c8);
    func_0x000107c343dc(0x1250);
    func_0x000107c343dc(0x11d8);
    func_0x000107c34704(0x1160);
    func_0x000107c2a0b0(lVar3 + 0x10e8);
    func_0x000107c343dc(0x1070);
    func_0x000107c2a0a0(lVar3 + 0xff8);
    func_0x000107c2a0a0(lVar3 + 0xf80);
    func_0x000107c2a0a0(lVar3 + 0xf08);
    func_0x000107c2a0a0(lVar3 + 0xe90);
    func_0x000107c2a0a0(lVar3 + 0xe18);
    func_0x000107c2a0a0(lVar3 + 0xda0);
    func_0x000107c2a0a0(lVar3 + 0xd28);
    func_0x000107c2a0a0(lVar3 + 0xcb0);
    func_0x000107c2a0a0(lVar3 + 0xc38);
    func_0x000107c2a0a0(lVar3 + 0xbc0);
    func_0x000107c2a0a0(lVar3 + 0xb48);
    func_0x000107c2a0a0(lVar3 + 0xad0);
    func_0x000107c2a0a0(lVar3 + 0xa58);
    func_0x000107c2a0a0(lVar3 + 0x9e0);
    func_0x000107c2a0a0(lVar3 + 0x968);
    func_0x000107c29f24(lVar3 + 0x8f0);
    func_0x000107c29f24(lVar3 + 0x878);
    func_0x000107c29f24(lVar3 + 0x800);
    FUN_10054c360(lVar3 + 0x778);
    FUN_10054c360(lVar3 + 0x6f0);
    FUN_10054c360(lVar3 + 0x668);
    func_0x000107c2a09c(lVar3 + 0x5f0);
    func_0x000107c2a09c(lVar3 + 0x578);
    FUN_10054c360(lVar3 + 0x4f0);
    FUN_10054c360(lVar3 + 0x468);
    func_0x000107c2a0b4(lVar3 + 0x3f0);
    func_0x000107c2a0b4(lVar3 + 0x378);
    func_0x000107c2a0b4(lVar3 + 0x300);
    FUN_10054c360(lVar3 + 0x278);
    FUN_10054c360(lVar3 + 0x1f0);
    func_0x000107c2a0b8(lVar3 + 0x178);
    FUN_10054c360(lVar3 + 0xf0);
    func_0x000107c2a070(lVar3 + 0x78);
    func_0x000107c2a0a4(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1005ec574; end: 1005ec58b;  */

void FUN_1005ec574(void)

{
  return;
}



/* Entry: 1005ec58c; end: 1005ec5ab;  */

void FUN_1005ec58c(void)

{
  func_0x0001005ec580();
  FUN_1005ebbe4();
  return;
}



/* Entry: 1005ec5ac; end: 1005ec5d7;  */

void FUN_1005ec5ac(void)

{
  return;
}



/* Entry: 1005ec5d8; end: 1005ec683;  */

undefined1 * FUN_1005ec5d8(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x10;
  long unaff_x20;
  undefined1 auStack_c8 [152];
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      param_1 = auStack_c8;
      FUN_1005ec6d4();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_1005ec650;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_1005ec650:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return (undefined1 *)(unaff_x20 + 0x10);
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  FUN_1005ec5d8();
  func_0x0001005ec788(extraout_x8);
  FUN_1005ec800();
  return param_1;
}



/* Entry: 1005ec684; end: 1005ec6a7;  */

void FUN_1005ec684(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_1005ec5d8();
  func_0x0001005ec788(param_1);
  FUN_1005ec800(param_2,auStack_28);
  return;
}



/* Entry: 1005ec6a8; end: 1005ec6d3;  */

void FUN_1005ec6a8(void)

{
  return;
}



/* Entry: 1005ec6d4; end: 1005ec6f3;  */

void FUN_1005ec6d4(undefined8 *param_1)

{
  FUN_10054bfa4();
  *param_1 = &PTR_DAT_110a7d1a0;
  return;
}



/* Entry: 1005ec6f4; end: 1005ec797;  */

void FUN_1005ec6f4(void)

{
  return;
}



/* Entry: 1005ec798; end: 1005ec7e3;  */

void FUN_1005ec798(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x0001005ec788();
  FUN_1005ec800(param_1,auStack_28);
  return;
}



/* Entry: 1005ec7e4; end: 1005ec7ff;  */

undefined1  [16] FUN_1005ec7e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  *param_1 = 0;
  auVar1._0_8_ = param_1 + 1;
  *param_1 = *param_2;
  auVar1._8_8_ = &stack0x00000008;
  return auVar1;
}



/* Entry: 1005ec800; end: 1005ec823;  */

void FUN_1005ec800(void)

{
  FUN_1005ec7e4();
  FUN_1005ec838();
  return;
}



/* Entry: 1005ec824; end: 1005ec837;  */

void FUN_1005ec824(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  return;
}



/* Entry: 1005ec838; end: 1005ec85f;  */

void FUN_1005ec838(long param_1)

{
  FUN_1005ec824();
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_1005ec86c();
  return;
}



/* Entry: 1005ec860; end: 1005ec86b;  */

undefined8 FUN_1005ec860(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 1005ec86c; end: 1005ec8b7;  */

void FUN_1005ec86c(long param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  
  FUN_1005ec860();
  if ((param_1 == 0) || (FUN_10054c3a4(), (int)param_1 == 0)) {
    if (*(char *)(unaff_x19 + 2) == '\x01') {
      *(undefined1 *)(unaff_x19 + 2) = 0;
    }
  }
  else {
    uVar1 = *unaff_x19;
    FUN_1005ec960();
    unaff_x19[1] = uVar1;
    *(undefined1 *)(unaff_x19 + 2) = 1;
  }
  return;
}



/* Entry: 1005ec8b8; end: 1005ec8bf;  */

void FUN_1005ec8b8(void)

{
  char in_stack_00000060;
  
  if (in_stack_00000060 == '\x01') {
    func_0x000107c30530();
  }
  return;
}



/* Entry: 1005ec8c0; end: 1005ec8df;  */

void FUN_1005ec8c0(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000107c30530();
  }
  return;
}



/* Entry: 1005ec8e0; end: 1005ec94f;  */

undefined1 FUN_1005ec8e0(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if ((bRam00000001137f65b0 & 1) == 0) {
    iVar2 = 0x137f65b0;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      uVar1 = 0x80;
      FUN_1005ec950();
      uRam00000001137f6500 = uVar1;
      FUN_100600444(0x1137f65b0);
    }
  }
  return uRam00000001137f6500;
}



/* Entry: 1005ec950; end: 1005ec95f;  */

void FUN_1005ec950(undefined8 *param_1)

{
  undefined1 uStack_11;
  
  uStack_11 = *(undefined1 *)(param_1 + 2);
  FUN_10011befc(0x38,1,*param_1,param_1[1],&uStack_11,0);
  return;
}



/* Entry: 1005ec960; end: 1005ec977;  */

void FUN_1005ec960(void)

{
  FUN_10054c7ec();
  FUN_10054c918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_int64_11034cff8)();
  return;
}



/* Entry: 1005ec978; end: 1005ec99b;  */

void FUN_1005ec978(void)

{
  return;
}



/* Entry: 1005ec99c; end: 1005ec9eb;  */

undefined1  [16] FUN_1005ec99c(void)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  long alStack_28 [2];
  char cStack_18;
  
  func_0x0001005ec984(alStack_28);
  bVar1 = cStack_18 == '\x01' && alStack_28[0] != 0;
  if (bVar1) {
    plVar3 = alStack_28;
    FUN_1005ecaa8();
    lVar2 = *plVar3;
  }
  else {
    lVar2 = 0;
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar2;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 1005ec9ec; end: 1005ec9ff;  */

undefined1  [16] FUN_1005ec9ec(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_2 + 8;
  auVar1._0_8_ = param_1 + 8;
  return auVar1;
}



/* Entry: 1005eca00; end: 1005eca1f;  */

void FUN_1005eca00(void)

{
  FUN_1005ec9ec();
  FUN_1005eca20();
  func_0x0001005eca94();
  return;
}



/* Entry: 1005eca20; end: 1005ecaa7;  */

void FUN_1005eca20(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
      return;
    }
  }
  else if (cVar1 == '\0') {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 1;
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined1 *)(param_2 + 1) = 0;
    }
  }
  else {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 1;
    if (*(char *)(param_1 + 1) == '\x01') {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  return;
}



/* Entry: 1005ecaa8; end: 1005ecaf7;  */

long FUN_1005ecaa8(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    func_0x000107c32440();
    func_0x000107c32444();
    func_0x000107c32460();
    func_0x000107c324f4();
    func_0x000107c324d0();
  }
  return param_1 + 8;
}



/* Entry: 1005ecaf8; end: 1005ecb03;  */

void FUN_1005ecaf8(void)

{
  return;
}



/* Entry: 1005ecb04; end: 1005ecb37;  */

undefined8 * FUN_1005ecb04(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_10054cac4(uVar1);
  return param_1;
}



/* Entry: 1005ecb38; end: 1005ecb47;  */

void FUN_1005ecb38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(*(undefined8 *)(param_1 + 0x88));
  return;
}



/* Entry: 1005ecb48; end: 1005ecb63;  */

void FUN_1005ecb48(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1005ecb64; end: 1005ecb9f;  */

void FUN_1005ecb64(void)

{
  long unaff_x19;
  
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  return;
}



/* Entry: 1005ecba0; end: 1005ecc67;  */

void FUN_1005ecba0(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  long unaff_x21;
  
  func_0x0001005ecb90();
  uVar1 = *(char *)(param_2 + 0x28) == '\x01';
  if ((bool)uVar1) {
    FUN_1005ecc68();
    func_0x0001005ecc7c();
    if (!(bool)uVar1) {
      func_0x000100458ae4();
      func_0x000107c34184();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3423c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1005ecc88(*(long *)(unaff_x21 + 0x20) + 0x78);
  func_0x0001005ecd38();
  func_0x0001005ece04();
  FUN_1005ece10();
  return;
}



/* Entry: 1005ecc68; end: 1005ecc87;  */

void FUN_1005ecc68(void)

{
  long unaff_x21;
  
                    /* WARNING: Could not recover jumptable at 0x0001005ecc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_11340e260)(*(undefined8 *)(unaff_x21 + 8));
  return;
}



/* Entry: 1005ecc88; end: 1005ecd2f;  */

undefined *** FUN_1005ecc88(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 in_ZR;
  int iVar1;
  long extraout_x10;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long lStack_130;
  long lStack_128;
  undefined **ppuStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      if (param_4 < 0) {
        param_3 = *(long *)(unaff_x19 + 0x48);
        param_4 = *(long *)(unaff_x19 + 0x50);
      }
      else {
        param_3 = unaff_x19 + 0x48;
      }
      FUN_1005ecd30();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_1005eccfc;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_1005eccfc:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return (undefined ***)(unaff_x20 + 0x10);
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  ppuStack_c8 = &PTR_DAT_110d99f30;
  uStack_b0 = 0x32aaaba7;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  lVar3 = param_3;
  lStack_c0 = param_2;
  for (lVar2 = 0; lVar3 = lVar3 + -1, lStack_128 = param_4, param_4 != lVar2; lVar2 = lVar2 + 1) {
    iVar1 = (int)*(char *)(lVar3 + param_4);
    FUN_10054bf9c();
    lStack_128 = lVar2;
    if (iVar1 == 0) break;
  }
  lStack_128 = param_4 - lStack_128;
  lStack_130 = param_3;
  FUN_100060b18(auStack_70,&lStack_130);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  if ((*(byte *)(lStack_c0 + 0x16c) & 1) == 0) {
    FUN_10054c7ec(&ppuStack_c8);
  }
  return &ppuStack_c8;
}



/* Entry: 1005ecd30; end: 1005ecd5f;  */

undefined1 * FUN_1005ecd30(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined **ppuStack0000000000000018;
  long lStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined1 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long lStack_50;
  long lStack_48;
  
  ppuStack0000000000000018 = &PTR_DAT_110d99f30;
  uStack0000000000000030 = 0x32aaaba7;
  uStack0000000000000028 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000068 = 0;
  lVar3 = param_3;
  lStack0000000000000020 = param_2;
  for (lVar2 = 0; lVar3 = lVar3 + -1, lStack_48 = param_4, param_4 != lVar2; lVar2 = lVar2 + 1) {
    iVar1 = (int)*(char *)(lVar3 + param_4);
    FUN_10054bf9c();
    lStack_48 = lVar2;
    if (iVar1 == 0) break;
  }
  lStack_48 = param_4 - lStack_48;
  lStack_50 = param_3;
  FUN_100060b18(&stack0x00000070,&lStack_50);
  in_stack_00000088 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  if ((*(byte *)(lStack0000000000000020 + 0x16c) & 1) == 0) {
    FUN_10054c7ec(&stack0x00000018);
  }
  return (undefined1 *)&stack0x00000018;
}



/* Entry: 1005ecd60; end: 1005ecddb;  */

void FUN_1005ecd60(int param_1)

{
  FUN_10054c7ec();
  FUN_1005ecddc();
  func_0x000107c61338();
  if (param_1 != 0) {
    func_0x000107c3a514();
    func_0x000107c3a50c();
    func_0x000107c3a524();
    FUN_1003a91d4(&UNK_10f82fa61);
    func_0x000107c3a51c();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1005ecddc; end: 1005ece0f;  */

void FUN_1005ecddc(void)

{
  return;
}



/* Entry: 1005ece10; end: 1005ecf03;  */

long * FUN_1005ece10(long *param_1,long param_2)

{
  long *plVar1;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  *param_1 = param_2;
  param_1[1] = param_2;
  plVar1 = param_1 + 2;
  *(undefined1 *)plVar1 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  if ((param_2 == 0) || (FUN_10054c3a4(), (int)param_2 == 0)) {
    FUN_1005ed108(plVar1);
  }
  else {
    FUN_10054c7ec(param_1[1]);
    FUN_1005ecf04(&lStack_60);
    func_0x0001005ecf6c(&lStack_48);
    FUN_1005ecf0c();
    if ((char)param_1[8] == '\x01') {
      func_0x000107c2a06c(plVar1,&lStack_60);
    }
    else {
      param_1[3] = lStack_58;
      *plVar1 = lStack_60;
      param_1[4] = lStack_50;
      lStack_58 = 0;
      lStack_50 = 0;
      lStack_60 = 0;
      param_1[6] = lStack_40;
      param_1[5] = lStack_48;
      param_1[7] = lStack_38;
      lStack_48 = 0;
      lStack_40 = 0;
      lStack_38 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
    FUN_1005ecf78(&lStack_60);
  }
  return param_1;
}



/* Entry: 1005ecf04; end: 1005ecf0b;  */

undefined8 FUN_1005ecf04(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  FUN_1005ecf5c(param_1,0);
  if ((int)param_1 == 3) {
    func_0x000107c6135c();
    func_0x00010002b82c();
    func_0x000107c613d0(unaff_x21);
    func_0x000107c60c50(unaff_x20,unaff_x19,unaff_x21);
    return unaff_x20;
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return param_1;
}



/* Entry: 1005ecf0c; end: 1005ecf5b;  */

undefined8 FUN_1005ecf0c(undefined8 param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  
  FUN_1005ecf5c();
  if ((int)param_1 == 3) {
    func_0x000107c6135c();
    func_0x00010002b82c();
    func_0x000107c613d0(unaff_x21);
    func_0x000107c60c50(unaff_x20,unaff_x19,unaff_x21);
    return unaff_x20;
  }
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return param_1;
}



/* Entry: 1005ecf5c; end: 1005ecf77;  */

void FUN_1005ecf5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_type_11034d010)();
  return;
}



/* Entry: 1005ecf78; end: 1005ecf9f;  */

/* WARNING: Possible PIC construction at 0x0001005ecf8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005ecf90) */

void FUN_1005ecf78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x18);
  return;
}



/* Entry: 1005ecfa0; end: 1005ecfd7;  */

void FUN_1005ecfa0(void)

{
  return;
}



/* Entry: 1005ecfd8; end: 1005ed107;  */

void FUN_1005ecfd8(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 extraout_w8;
  ulong *unaff_x19;
  long unaff_x20;
  long lVar3;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  byte in_stack_00000080;
  
  func_0x0001005ecfc4();
  FUN_1005e7a1c();
  in_stack_00000050 = in_stack_00000050 & 0xffffffffffffff00;
  in_stack_00000080 = 0;
  cVar1 = *(char *)(param_2 + 0x40);
  if (cVar1 != '\0') {
    in_stack_00000058 = *(ulong *)(unaff_x20 + 0x18);
    in_stack_00000050 = *(ulong *)(unaff_x20 + 0x10);
    in_stack_00000060 = *(ulong *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    in_stack_00000070 = *(ulong *)(unaff_x20 + 0x30);
    in_stack_00000068 = *(ulong *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    in_stack_00000078 = *(ulong *)(unaff_x20 + 0x38);
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    in_stack_00000080 = 1;
    FUN_1005ed108(unaff_x20 + 0x10);
  }
  lVar3 = *(long *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = 0;
  FUN_1005ed12c();
  func_0x0001005ed13c();
  if (cVar1 == '\0') {
    FUN_1005ed148();
  }
  else {
    FUN_1005ed148();
    if (lVar3 != 0) {
      if ((in_stack_00000080 & 1) == 0) {
        func_0x000107c344bc(&stack0x00000088);
        func_0x000107c34438();
        func_0x000107c342b4();
        FUN_100678270();
        func_0x000107c34460();
      }
      unaff_x19[1] = in_stack_00000058;
      *unaff_x19 = in_stack_00000050;
      unaff_x19[2] = in_stack_00000060;
      in_stack_00000058 = 0;
      in_stack_00000060 = 0;
      in_stack_00000050 = 0;
      unaff_x19[4] = in_stack_00000070;
      unaff_x19[3] = in_stack_00000068;
      unaff_x19[5] = in_stack_00000078;
      in_stack_00000068 = 0;
      in_stack_00000070 = 0;
      uVar2 = 1;
      in_stack_00000078 = 0;
      goto LAB_1005ed0cc;
    }
  }
  func_0x000107c34608();
  uVar2 = extraout_w8;
LAB_1005ed0cc:
  *(undefined1 *)(unaff_x19 + 6) = uVar2;
  FUN_1005ed148(&stack0x00000050);
  return;
}



/* Entry: 1005ed108; end: 1005ed12b;  */

void FUN_1005ed108(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1005ecf78();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 1005ed12c; end: 1005ed147;  */

void FUN_1005ed12c(void)

{
  return;
}



/* Entry: 1005ed148; end: 1005ed167;  */

void FUN_1005ed148(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_1005ecf78();
  }
  return;
}



/* Entry: 1005ed168; end: 1005ed18f;  */

void FUN_1005ed168(void)

{
  return;
}



/* Entry: 1005ed190; end: 1005ed1e7;  */

void FUN_1005ed190(long param_1)

{
  long unaff_x19;
  ulong unaff_x20;
  
  func_0x0001005ed184();
  FUN_1005ed12c();
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_1005ed108(unaff_x19 + 0x10);
  }
  FUN_1005ed148(unaff_x20 | 8);
  FUN_1005ed1e8();
  FUN_10054cac4();
  FUN_1005ed148(unaff_x19 + 0x10);
  return;
}



/* Entry: 1005ed1e8; end: 1005ed1f3;  */

undefined8 FUN_1005ed1e8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  
  uVar1 = *unaff_x19;
  *unaff_x19 = 0;
  return uVar1;
}



/* Entry: 1005ed1f4; end: 1005ed20f;  */

void FUN_1005ed1f4(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1005ed210; end: 1005ed23f;  */

void FUN_1005ed210(void)

{
  char in_stack_00000160;
  
  if (in_stack_00000160 == '\x01') {
    FUN_1005ecf78();
  }
  return;
}



/* Entry: 1005ed240; end: 1005ed297;  */

undefined1  [16] FUN_1005ed240(long *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined1 *extraout_x10;
  long extraout_x11;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_98;
  long alStack_38 [2];
  undefined8 uStack_28;
  undefined **ppuVar7;
  
  plVar10 = param_1;
  func_0x0001005ed230();
  uStack_28 = extraout_x8_01;
  FUN_1005ed298();
  lVar14 = *param_1;
  uVar4 = param_1[1] - lVar14 == 0;
  if (!(bool)uVar4) {
    plVar10 = alStack_38;
    func_0x000107c610b8(plVar10,lVar14,param_1[1] - lVar14);
  }
  func_0x0001005ed2a4();
  func_0x0001005ed2b0(uStack_28);
  if ((bool)uVar4) {
    auVar19._8_8_ = lVar14;
    auVar19._0_8_ = plVar10;
    return auVar19;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  if (plVar10[1] - *plVar10 == 0x10) {
    auVar16._8_8_ = lVar14;
    auVar16._0_8_ = 0x10;
    return auVar16;
  }
  ppuVar6 = (undefined **)0x20;
  func_0x000107c60e30();
  func_0x000107c29ed0();
  ppuVar11 = &PTR_DAT_110a7a910;
  func_0x000107c60e54(ppuVar6,&PTR_DAT_110a7a910,&DAT_108848184);
  func_0x000107c60e40();
  func_0x000107c34088();
  ppuVar7 = ppuVar6;
  FUN_1004a5d98();
  iVar5 = (int)ppuVar7;
  uStack_98 = extraout_x8;
  FUN_100553518();
  cVar3 = iVar5 < 0;
  uVar4 = iVar5 == 0;
  cVar2 = '\0';
  ppuVar7 = ppuVar11;
  if ((bool)uVar4) {
    ppuVar7 = ppuVar6;
    ppuVar6 = ppuVar11;
  }
  FUN_100553540(auStack_c8,ppuVar7,ppuVar7 + 2);
  FUN_1005535dc();
  lVar14 = extraout_x11;
  puVar12 = extraout_x10;
  if (cVar3 == cVar2) {
    lVar14 = extraout_x8_00;
    puVar12 = auStack_c8;
  }
  ppuVar11 = ppuVar6 + 2;
  func_0x0001005535f0(auStack_c8,puVar12 + lVar14);
  uStack_a8 = 0x20cdf33f5c44e0a2;
  uStack_b0 = 0x47454b94a1269407;
  puVar8 = &uStack_b0;
  puVar12 = auStack_c8;
  FUN_100553bf0();
  puVar9 = auStack_c8;
  puVar13 = puVar12;
  func_0x000107c60ca0();
  FUN_1004a5f34(uStack_98);
  if (!(bool)uVar4) {
    func_0x000107c60e78();
    func_0x000107c34790();
    func_0x000107c34794();
    lVar14 = (long)puVar13 - (long)puVar9;
    lVar15 = (long)ppuVar11 - (long)ppuVar6;
    func_0x000107c610b0();
    bVar1 = lVar14 < lVar15;
    if ((int)puVar9 != 0) {
      bVar1 = (int)puVar9 < 0;
    }
    auVar18._1_7_ = 0;
    auVar18[0] = bVar1;
    auVar18._8_8_ = ppuVar6;
    return auVar18;
  }
  auVar17._8_8_ = puVar12;
  auVar17._0_8_ = puVar8;
  return auVar17;
}



/* Entry: 1005ed298; end: 1005ed2df;  */

undefined1  [16] FUN_1005ed298(long *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined **ppuVar6;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined1 *extraout_x10;
  long extraout_x11;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined **ppuVar7;
  
  if (param_1[1] - *param_1 == 0x10) {
    auVar15._8_8_ = param_2;
    auVar15._0_8_ = 0x10;
    return auVar15;
  }
  ppuVar6 = (undefined **)0x20;
  func_0x000107c60e30();
  func_0x000107c29ed0();
  ppuVar10 = &PTR_DAT_110a7a910;
  func_0x000107c60e54(ppuVar6,&PTR_DAT_110a7a910,&DAT_108848184);
  func_0x000107c60e40();
  func_0x000107c34088();
  ppuVar7 = ppuVar6;
  FUN_1004a5d98();
  iVar5 = (int)ppuVar7;
  uStack_58 = extraout_x8;
  FUN_100553518();
  cVar3 = iVar5 < 0;
  uVar4 = iVar5 == 0;
  cVar2 = '\0';
  ppuVar7 = ppuVar10;
  if ((bool)uVar4) {
    ppuVar7 = ppuVar6;
    ppuVar6 = ppuVar10;
  }
  FUN_100553540(auStack_88,ppuVar7,ppuVar7 + 2);
  FUN_1005535dc();
  lVar13 = extraout_x11;
  puVar11 = extraout_x10;
  if (cVar3 == cVar2) {
    lVar13 = extraout_x8_00;
    puVar11 = auStack_88;
  }
  ppuVar10 = ppuVar6 + 2;
  func_0x0001005535f0(auStack_88,puVar11 + lVar13);
  uStack_68 = 0x20cdf33f5c44e0a2;
  uStack_70 = 0x47454b94a1269407;
  puVar8 = &uStack_70;
  puVar11 = auStack_88;
  FUN_100553bf0();
  puVar9 = auStack_88;
  puVar12 = puVar11;
  func_0x000107c60ca0();
  FUN_1004a5f34(uStack_58);
  if (!(bool)uVar4) {
    func_0x000107c60e78();
    func_0x000107c34790();
    func_0x000107c34794();
    lVar13 = (long)puVar12 - (long)puVar9;
    lVar14 = (long)ppuVar10 - (long)ppuVar6;
    func_0x000107c610b0();
    bVar1 = lVar13 < lVar14;
    if ((int)puVar9 != 0) {
      bVar1 = (int)puVar9 < 0;
    }
    auVar17._1_7_ = 0;
    auVar17[0] = bVar1;
    auVar17._8_8_ = ppuVar6;
    return auVar17;
  }
  auVar16._8_8_ = puVar11;
  auVar16._0_8_ = puVar8;
  return auVar16;
}



/* Entry: 1005ed2e0; end: 1005ed30f;  */

void FUN_1005ed2e0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puStack_28;
  
  puVar2 = param_1 + 2;
  uVar1 = *param_1;
  FUN_1005e3518();
  puStack_28 = puVar2;
  FUN_1005ed31c(uVar1,&puStack_28);
  return;
}



/* Entry: 1005ed310; end: 1005ed31b;  */

undefined8 FUN_1005ed310(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [72];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((bRam0000000113828028 & 1) == 0) {
    iVar1 = 0x13828028;
    uStack_20 = param_1;
    uStack_18 = param_2;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_1005e3618(auStack_68);
      puVar2 = auStack_68;
      FUN_10028f4b0();
      puRam0000000113828020 = puVar2;
      FUN_100164334(auStack_68);
      func_0x000107c60e4c(0x113828028);
    }
  }
  return 0x113828020;
}


