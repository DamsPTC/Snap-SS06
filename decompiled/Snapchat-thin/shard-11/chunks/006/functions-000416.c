/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108788a14; end: 108788a87;  */

void FUN_108788a14(undefined8 param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 auStack_30 [16];
  
  func_0x0001008651f8(auStack_30);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0x3f800000;
  func_0x00010086554c(param_1,auStack_30,&uStack_60);
  func_0x000100864b68(&uStack_60);
  func_0x000100865288(auStack_30);
  return;
}



/* Entry: 108788a88; end: 108788ab7;  */

undefined8 FUN_108788a88(void)

{
  return 0;
}



/* Entry: 108788ab8; end: 108788b03;  */

void FUN_108788ab8(undefined8 param_1)

{
  undefined1 auStack_398 [888];
  
  func_0x000107c296f4(auStack_398);
  func_0x000107c28c10(param_1,auStack_398);
  func_0x000107c27b1c(auStack_398);
  return;
}



/* Entry: 108788b04; end: 108788b2f;  */

undefined8 FUN_108788b04(void)

{
  return 0;
}



/* Entry: 108788b30; end: 108788b53;  */

void FUN_108788b30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110a6f1e0;
  return;
}



/* Entry: 108788b54; end: 108788b73;  */

void FUN_108788b54(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110a6f1e0;
  return;
}



/* Entry: 108788b74; end: 108788b8b;  */

void FUN_108788b74(void)

{
  func_0x0001087894c8();
  return;
}



/* Entry: 108788b8c; end: 108788bc3;  */

long FUN_108788b8c(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6f240);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108788bc4; end: 108788bd7;  */

undefined ** FUN_108788bc4(void)

{
  return &PTR_DAT_110a6f240;
}



/* Entry: 108788bd8; end: 108788bfb;  */

void FUN_108788bd8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110a6f260;
  return;
}



/* Entry: 108788bfc; end: 108788c1b;  */

void FUN_108788bfc(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110a6f260;
  return;
}



/* Entry: 108788c1c; end: 108788c33;  */

void FUN_108788c1c(void)

{
  func_0x0001087894c8();
  return;
}



/* Entry: 108788c34; end: 108788c6b;  */

long FUN_108788c34(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6f2c0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108788c6c; end: 108788c77;  */

undefined ** FUN_108788c6c(void)

{
  return &PTR_DAT_110a6f2c0;
}



/* Entry: 108788c78; end: 108788cb3;  */

void FUN_108788c78(long *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (param_2 != param_1) {
    func_0x000107c33448();
    FUN_108788cb4();
    if ((int)unaff_x19[1] != 0) {
      func_0x000108789894();
      func_0x000100361ce4();
      plVar2 = param_1;
      func_0x00010064e8bc();
      plVar3 = (long *)*unaff_x25;
      func_0x000100361e44();
      plVar5 = unaff_x25;
      if (0 < (int)plVar2) {
        func_0x000107c39cb4();
        param_1 = param_1 + (int)plVar2;
        plVar5 = unaff_x25 + (int)plVar2;
      }
      lVar4 = unaff_x19[2];
      for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
        plVar2 = plVar3;
        (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
        *param_1 = (long)plVar2;
        func_0x00010064e8d4();
        param_1 = param_1 + 1;
      }
      func_0x000100361e74();
      if (iVar1 < unaff_w20) {
        *(int *)(*unaff_x19 + -1) = unaff_w20;
      }
      return;
    }
  }
  return;
}



/* Entry: 108788cb4; end: 108788cc7;  */

void FUN_108788cb4(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 108788cc8; end: 108788d03;  */

undefined8 * FUN_108788cc8(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_108788d04();
  return param_1;
}



/* Entry: 108788d04; end: 108788d3f;  */

void FUN_108788d04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  
  func_0x0001087893e8();
  for (; unaff_x20 != param_3; unaff_x20 = unaff_x20 + 8) {
    FUN_10867c274();
  }
  return;
}



/* Entry: 108788d40; end: 108788e17;  */

void FUN_108788d40(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001087895d8();
  *param_1 = *param_2;
  func_0x000107c3194c(param_1 + 1,param_2 + 1);
  func_0x000107c28960(unaff_x19 + 0x20,unaff_x20 + 0x20);
  func_0x0001087898c0();
  func_0x0001052b2b60();
  *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
  func_0x000107c3194c(unaff_x19 + 0x70,unaff_x20 + 0x70);
  func_0x000107c27b9c(unaff_x19 + 0x88,unaff_x20 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x19 + 0xb0) = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar1;
  FUN_10865f9c0(unaff_x19 + 0xb8,unaff_x20 + 0xb8);
  func_0x00010878967c();
  func_0x0001052b2b60();
  func_0x0001052b2b60(unaff_x19 + 0x108,unaff_x20 + 0x108);
  func_0x0001052b2b60(unaff_x19 + 0x128,unaff_x20 + 0x128);
  func_0x000108789880();
  func_0x000107c28908();
  FUN_1086ac3c8(unaff_x19 + 0x170,unaff_x20 + 0x170);
  func_0x00010878986c();
  func_0x000107c28908();
  func_0x0001052b2b60(unaff_x19 + 0x260,unaff_x20 + 0x260);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x291);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x289);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x280);
  *(undefined8 *)(unaff_x19 + 0x288) = *(undefined8 *)(unaff_x20 + 0x288);
  *(undefined8 *)(unaff_x19 + 0x280) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x291) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x289) = uVar1;
  return;
}



/* Entry: 108788e18; end: 108788e33;  */

void FUN_108788e18(long param_1)

{
  FUN_108788e34();
  *(undefined1 *)(param_1 + 0x2a0) = 1;
  return;
}



/* Entry: 108788e34; end: 108788f53;  */

void FUN_108788e34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001087895d8();
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  func_0x000107c28978(param_1 + 4,param_2 + 4);
  func_0x0001087898c0();
  func_0x000107c27b7c();
  *(undefined4 *)(unaff_x19 + 0x68) = *(undefined4 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x19 + 0xb8) = 0;
  *(undefined8 *)(unaff_x19 + 0xc0) = 0;
  *(undefined8 *)(unaff_x19 + 200) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xc0);
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar1;
  *(undefined8 *)(unaff_x19 + 200) = *(undefined8 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  func_0x00010878967c();
  func_0x000107c27b7c();
  func_0x000107c27b7c(unaff_x19 + 0x108,unaff_x20 + 0x108);
  func_0x000107c27b7c(unaff_x19 + 0x128,unaff_x20 + 0x128);
  func_0x000108789880();
  func_0x000107c27afc();
  FUN_1086ac390(unaff_x19 + 0x170,unaff_x20 + 0x170);
  func_0x00010878986c();
  func_0x000107c27afc();
  func_0x000107c27b7c(unaff_x19 + 0x260,unaff_x20 + 0x260);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x288);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x289);
  *(undefined8 *)(unaff_x19 + 0x291) = *(undefined8 *)(unaff_x20 + 0x291);
  *(undefined8 *)(unaff_x19 + 0x289) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x288) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x280) = uVar1;
  return;
}



/* Entry: 108788f54; end: 108788feb;  */

long * FUN_108788f54(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 0x55) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_50,*param_1 + 0x58);
    func_0x000107c27f54(auStack_38,&UNK_10f2e0451,auStack_50);
    func_0x00010bcc7444(uVar1,0x65,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  }
  return param_1 + 1;
}



/* Entry: 108788fec; end: 10878903f;  */

void FUN_108788fec(void)

{
  undefined1 auStack_2d0 [672];
  
  func_0x000107c33448();
  FUN_108788e34(auStack_2d0);
  func_0x000108789894();
  FUN_108788d40();
  FUN_108788d40();
  func_0x000108788648(auStack_2d0);
  return;
}



/* Entry: 108789040; end: 10878905b;  */

void FUN_108789040(long param_1)

{
  FUN_108788e34();
  *(undefined1 *)(param_1 + 0x2a0) = 1;
  return;
}



/* Entry: 10878905c; end: 108789083;  */

long FUN_10878905c(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x0001086b074c(lVar1,param_1);
  if ((bool)in_CY) {
    FUN_1086aa61c();
  }
  else {
    FUN_1086aa5ec();
    lVar1 = unaff_x20 + 0x1a8;
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return lVar1 + -0x1a8;
}



/* Entry: 108789084; end: 1087890ef;  */

void FUN_108789084(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  long *plVar2;
  
  func_0x000107c33448();
  plVar1 = (long *)(*(undefined8 **)(param_2 + 0x10))[1];
  for (plVar2 = (long *)**(undefined8 **)(param_2 + 0x10); plVar2 != plVar1; plVar2 = plVar2 + 2) {
    if ((((*(int *)(unaff_x20 + 0xb8) == 0) && ((*(byte *)(unaff_x20 + 0x28) & 1) != 0)) &&
        (*plVar2 < *(long *)(unaff_x20 + 0x20))) && (*(long *)(unaff_x20 + 0x20) <= plVar2[1])) {
      func_0x0001086aa5b8(*(undefined8 *)(unaff_x19 + 0x18));
    }
  }
  return;
}



/* Entry: 1087890f0; end: 10878910b;  */

void FUN_1087890f0(void)

{
  return;
}



/* Entry: 10878910c; end: 1087891d3;  */

void FUN_10878910c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  
  func_0x000107c33448();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107c291f4();
    unaff_x20[2] = 0;
    lVar3 = unaff_x20[1];
    for (lVar2 = 0; lVar3 != lVar2; lVar2 = lVar2 + 1) {
      *(undefined8 *)(*unaff_x20 + lVar2 * 8) = 0;
    }
    unaff_x20[3] = 0;
  }
  *unaff_x19 = 0;
  func_0x000107c29878();
  lVar2 = unaff_x19[2];
  lVar3 = unaff_x19[1];
  unaff_x20[2] = lVar2;
  unaff_x20[1] = lVar3;
  unaff_x19[1] = 0;
  lVar3 = unaff_x19[3];
  unaff_x20[3] = lVar3;
  *(undefined4 *)(unaff_x20 + 4) = *(undefined4 *)(unaff_x19 + 4);
  if (lVar3 != 0) {
    uVar4 = *(ulong *)(lVar2 + 8);
    uVar5 = unaff_x20[1];
    if ((uVar5 & uVar5 - 1) == 0) {
      uVar4 = uVar5 - 1 & uVar4;
    }
    else if (uVar5 <= uVar4) {
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = uVar4 / uVar5;
      }
      uVar4 = uVar4 - uVar1 * uVar5;
    }
    *(long **)(*unaff_x20 + uVar4 * 8) = unaff_x20 + 2;
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 1087891d4; end: 108789253;  */

void FUN_1087891d4(long param_1,long param_2)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(int *)(param_1 + 0x200) == 0) &&
     (FUN_1086e1e9c(), *(long *)(param_1 + 0x1d0) != *(long *)(param_1 + 0x1d8))) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    (**(code **)**(undefined8 **)(param_2 + 0x10))
              (*(undefined8 **)(param_2 + 0x10),param_1,param_1,0,param_1 + 0x1d0,&uStack_38);
    func_0x000104be1274(&uStack_38);
  }
  return;
}



/* Entry: 108789254; end: 108789917;  */

long FUN_108789254(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 8;
}



/* Entry: 108789918; end: 108789eeb;  */

void FUN_108789918(undefined1 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong *puVar6;
  float *pfVar7;
  undefined **ppuVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong *unaff_x21;
  ulong uVar16;
  long *plVar17;
  long lStack_1c0;
  ulong *puStack_1b8;
  long *plStack_1b0;
  ulong uStack_1a8;
  float afStack_1a0 [2];
  undefined1 auStack_198 [24];
  ulong uStack_180;
  int iStack_178;
  undefined8 uStack_b8;
  long *plStack_80;
  long **pplStack_78;
  undefined8 uStack_70;
  
  func_0x000107c28dc8(auStack_198,param_2);
  uStack_b8 = *(undefined8 *)(param_3 + 0x40);
  FUN_1086a4a3c(auStack_198);
  FUN_1088bf0ac();
  puStack_1b8 = (ulong *)0x0;
  lStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  afStack_1a0[0] = 1.0;
  puVar15 = &uStack_180;
  if ((uStack_180 & 1) != 0) {
    puVar15 = (ulong *)(uStack_180 + 7);
  }
  puVar1 = puVar15 + iStack_178;
  for (; puVar15 != puVar1; puVar15 = puVar15 + 1) {
    uVar14 = *puVar15;
    ppuVar8 = *(undefined ***)(uVar14 + 0x18);
    ppuVar2 = &PTR_PTR_11326cb58;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar2 = ppuVar8;
    }
    puVar11 = &uStack_1a8;
    FUN_1086a9f1c(puVar11,ppuVar2);
    puVar10 = puStack_1b8;
    if (puStack_1b8 != (ulong *)0x0) {
      uVar16 = (long)puStack_1b8 - 1;
      if (((ulong)puStack_1b8 & uVar16) == 0) {
        unaff_x21 = (ulong *)(uVar16 & (ulong)puVar11);
      }
      else {
        unaff_x21 = puVar11;
        if (puStack_1b8 <= puVar11) {
          uVar3 = 0;
          if (puStack_1b8 != (ulong *)0x0) {
            uVar3 = (ulong)puVar11 / (ulong)puStack_1b8;
          }
          unaff_x21 = (ulong *)((long)puVar11 - uVar3 * (long)puStack_1b8);
        }
      }
      plVar17 = *(long **)(lStack_1c0 + (long)unaff_x21 * 8);
      if (plVar17 != (long *)0x0) {
        do {
          while( true ) {
            plVar17 = (long *)*plVar17;
            if (plVar17 == (long *)0x0) goto LAB_108789a74;
            puVar9 = (ulong *)plVar17[1];
            if (puVar9 != puVar11) break;
            pfVar7 = afStack_1a0;
            FUN_1086a9f40(pfVar7,plVar17 + 2,ppuVar2);
            if (((ulong)pfVar7 & 1) != 0) goto LAB_108789d28;
          }
          if (((ulong)puVar10 & uVar16) == 0) {
            puVar9 = (ulong *)((ulong)puVar9 & uVar16);
          }
          else if (puVar10 <= puVar9) {
            uVar3 = 0;
            if (puVar10 != (ulong *)0x0) {
              uVar3 = (ulong)puVar9 / (ulong)puVar10;
            }
            puVar9 = (ulong *)((long)puVar9 - uVar3 * (long)puVar10);
          }
        } while (puVar9 == unaff_x21);
      }
    }
LAB_108789a74:
    plVar17 = (long *)0x38;
    __Znwm();
    uStack_70 = 0;
    *plVar17 = 0;
    plVar17[1] = (long)puVar11;
    plStack_80 = plVar17;
    pplStack_78 = &plStack_1b0;
    FUN_10865ecd8(plVar17 + 2,ppuVar2);
    plVar17[6] = uVar14;
    uStack_70 = CONCAT71(uStack_70._1_7_,1);
    if ((puVar10 == (ulong *)0x0) || (afStack_1a0[0] * (float)puVar10 < (float)(uStack_1a8 + 1))) {
      uVar14 = 1;
      if ((ulong *)0x2 < puVar10) {
        uVar14 = (ulong)(((ulong)puVar10 & (long)puVar10 - 1U) != 0);
      }
      puVar10 = (ulong *)(uVar14 | (long)puVar10 << 1);
      puVar9 = (ulong *)(long)((float)(uStack_1a8 + 1) / afStack_1a0[0]);
      if (puVar10 <= puVar9) {
        puVar10 = puVar9;
      }
      if ((long)puVar10 - 1U == 0) {
        puVar10 = (ulong *)0x2;
      }
      else if (((ulong)puVar10 & (long)puVar10 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      puVar9 = puStack_1b8;
      if (puStack_1b8 < puVar10) {
LAB_108789b24:
        if ((ulong)puVar10 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x108789ea4);
          (*pcVar4)();
        }
        lVar5 = (long)puVar10 << 3;
        __Znwm(lVar5);
        FUN_108789fe0(&lStack_1c0,lVar5);
        for (puVar9 = (ulong *)0x0; puVar10 != puVar9; puVar9 = (ulong *)((long)puVar9 + 1)) {
          *(undefined8 *)(lStack_1c0 + (long)puVar9 * 8) = 0;
        }
        puStack_1b8 = puVar10;
        if (plStack_1b0 != (long *)0x0) {
          puVar9 = (ulong *)plStack_1b0[1];
          uVar16 = (long)puVar10 - 1;
          uVar14 = 0;
          if (puVar10 != (ulong *)0x0) {
            uVar14 = (ulong)puVar9 / (ulong)puVar10;
          }
          puVar6 = puVar9;
          if (puVar10 <= puVar9) {
            puVar6 = (ulong *)((long)puVar9 - uVar14 * (long)puVar10);
          }
          if (((ulong)puVar10 & uVar16) == 0) {
            puVar6 = (ulong *)((ulong)puVar9 & uVar16);
          }
          *(long ***)(lStack_1c0 + (long)puVar6 * 8) = &plStack_1b0;
          plVar13 = plStack_1b0;
          while (plVar12 = plVar13, plVar13 = (long *)*plVar12, plVar13 != (long *)0x0) {
            puVar9 = (ulong *)plVar13[1];
            if (((ulong)puVar10 & uVar16) == 0) {
              puVar9 = (ulong *)((ulong)puVar9 & uVar16);
            }
            else if (puVar10 <= puVar9) {
              uVar14 = 0;
              if (puVar10 != (ulong *)0x0) {
                uVar14 = (ulong)puVar9 / (ulong)puVar10;
              }
              puVar9 = (ulong *)((long)puVar9 - uVar14 * (long)puVar10);
            }
            if (puVar9 != puVar6) {
              if (*(long *)(lStack_1c0 + (long)puVar9 * 8) == 0) {
                *(long **)(lStack_1c0 + (long)puVar9 * 8) = plVar12;
                puVar6 = puVar9;
              }
              else {
                *plVar12 = *plVar13;
                *plVar13 = **(long **)(lStack_1c0 + (long)puVar9 * 8);
                **(undefined8 **)(lStack_1c0 + (long)puVar9 * 8) = plVar13;
                plVar13 = plVar12;
              }
            }
          }
        }
      }
      else if (puVar10 < puStack_1b8) {
        puVar6 = (ulong *)(long)((float)uStack_1a8 / afStack_1a0[0]);
        if ((puStack_1b8 < (ulong *)0x3) || (((ulong)puStack_1b8 & (long)puStack_1b8 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((ulong *)0x1 < puVar6) {
          puVar6 = (ulong *)(1L << (-LZCOUNT((long)puVar6 + -1) & 0x3fU));
        }
        if (puVar10 <= puVar6) {
          puVar10 = puVar6;
        }
        if (puVar10 < puVar9) {
          if (puVar10 != (ulong *)0x0) goto LAB_108789b24;
          FUN_108789fe0(&lStack_1c0,0);
          puStack_1b8 = (ulong *)0x0;
        }
      }
      puVar10 = puStack_1b8;
      if (((ulong)puStack_1b8 & (long)puStack_1b8 - 1U) == 0) {
        unaff_x21 = (ulong *)((long)puStack_1b8 - 1U & (ulong)puVar11);
      }
      else {
        unaff_x21 = puVar11;
        if (puStack_1b8 <= puVar11) {
          uVar14 = 0;
          if (puStack_1b8 != (ulong *)0x0) {
            uVar14 = (ulong)puVar11 / (ulong)puStack_1b8;
          }
          unaff_x21 = (ulong *)((long)puVar11 - uVar14 * (long)puStack_1b8);
        }
      }
    }
    plVar13 = *(long **)(lStack_1c0 + (long)unaff_x21 * 8);
    if (plVar13 == (long *)0x0) {
      *plVar17 = (long)plStack_1b0;
      *(long ***)(lStack_1c0 + (long)unaff_x21 * 8) = &plStack_1b0;
      plStack_1b0 = plVar17;
      if (*plVar17 != 0) {
        puVar11 = *(ulong **)(*plVar17 + 8);
        if (((ulong)puVar10 & (long)puVar10 - 1U) == 0) {
          puVar11 = (ulong *)((ulong)puVar11 & (long)puVar10 - 1U);
        }
        else if (puVar10 <= puVar11) {
          uVar14 = 0;
          if (puVar10 != (ulong *)0x0) {
            uVar14 = (ulong)puVar11 / (ulong)puVar10;
          }
          puVar11 = (ulong *)((long)puVar11 - uVar14 * (long)puVar10);
        }
        *(long **)(lStack_1c0 + (long)puVar11 * 8) = plVar17;
      }
    }
    else {
      *plVar17 = *plVar13;
      *plVar13 = (long)plVar17;
    }
    plStack_80 = (long *)0x0;
    uStack_1a8 = uStack_1a8 + 1;
    FUN_108789ff8(&plStack_80);
LAB_108789d28:
  }
  uVar14 = *(ulong *)(param_3 + 0x18);
  puVar15 = (ulong *)(param_3 + 0x18);
  if ((uVar14 & 1) != 0) {
    puVar15 = (ulong *)(uVar14 + 7);
  }
  puVar1 = puVar15 + *(int *)(param_3 + 0x20);
  do {
    puVar11 = puStack_1b8;
    if (puVar15 == puVar1) {
      FUN_108789f68(param_1,auStack_198);
LAB_108789e5c:
      FUN_108789f84(&lStack_1c0);
      func_0x000107c2a3a8(auStack_198);
      return;
    }
    uVar14 = *puVar15;
    ppuVar2 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(uVar14 + 0x18) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(uVar14 + 0x18);
    }
    if ((puStack_1b8 == (ulong *)0x0) || (uStack_1a8 == 0)) {
LAB_108789e50:
      *param_1 = 0;
      param_1[0x118] = 0;
      goto LAB_108789e5c;
    }
    puVar10 = &uStack_1a8;
    FUN_1086a9f1c(puVar10,ppuVar2);
    uVar16 = (long)puVar11 - 1;
    if (((ulong)puVar11 & uVar16) == 0) {
      puVar9 = (ulong *)((ulong)puVar10 & uVar16);
    }
    else {
      puVar9 = puVar10;
      if (puVar11 <= puVar10) {
        uVar3 = 0;
        if (puVar11 != (ulong *)0x0) {
          uVar3 = (ulong)puVar10 / (ulong)puVar11;
        }
        puVar9 = (ulong *)((long)puVar10 - uVar3 * (long)puVar11);
      }
    }
    plVar17 = *(long **)(lStack_1c0 + (long)puVar9 * 8);
    if (plVar17 == (long *)0x0) goto LAB_108789e50;
    do {
      while( true ) {
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) goto LAB_108789e50;
        puVar6 = (ulong *)plVar17[1];
        if (puVar6 == puVar10) break;
        if (((ulong)puVar11 & uVar16) == 0) {
          puVar6 = (ulong *)((ulong)puVar6 & uVar16);
        }
        else if (puVar11 <= puVar6) {
          uVar3 = 0;
          if (puVar11 != (ulong *)0x0) {
            uVar3 = (ulong)puVar6 / (ulong)puVar11;
          }
          puVar6 = (ulong *)((long)puVar6 - uVar3 * (long)puVar11);
        }
        if (puVar6 != puVar9) goto LAB_108789e50;
      }
      pfVar7 = afStack_1a0;
      FUN_1086a9f40(pfVar7,plVar17 + 2,ppuVar2);
    } while (((ulong)pfVar7 & 1) == 0);
    *(undefined8 *)(plVar17[6] + 0x50) = *(undefined8 *)(uVar14 + 0x30);
    *(undefined8 *)(plVar17[6] + 0x28) = *(undefined8 *)(uVar14 + 0x20);
    *(undefined8 *)(plVar17[6] + 0x48) = *(undefined8 *)(uVar14 + 0x28);
    *(undefined8 *)(plVar17[6] + 0x30) = *(undefined8 *)(uVar14 + 0x38);
    puVar15 = puVar15 + 1;
  } while( true );
}



/* Entry: 108789eec; end: 108789f2b;  */

uint FUN_108789eec(long param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x48) != 0 || *(long *)(param_1 + 0x38) != 1) ||
      *(int *)(param_1 + 0x70) != 3) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  FUN_10868ee00(uVar1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 108789f2c; end: 108789f67;  */

void FUN_108789f2c(undefined1 *param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  undefined **ppuVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong *puVar6;
  float *pfVar7;
  undefined **ppuVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *unaff_x21;
  ulong uVar17;
  long *plVar18;
  long lStack_1c0;
  ulong *puStack_1b8;
  long *plStack_1b0;
  ulong uStack_1a8;
  float afStack_1a0 [2];
  undefined1 auStack_198 [24];
  ulong uStack_180;
  int iStack_178;
  undefined8 uStack_b8;
  long *plStack_80;
  long **pplStack_78;
  undefined8 uStack_70;
  
  if (*(int *)(param_2 + 0x70) != 8) {
    if (*(int *)(param_2 + 0x70) == 3) {
      func_0x000107c28dc8(param_1,*(undefined8 *)(param_2 + 0x60));
      param_1[0x118] = 1;
      return;
    }
    *param_1 = 0;
    param_1[0x118] = 0;
    return;
  }
  lVar12 = *(long *)(param_2 + 0x60);
  func_0x000107c28dc8(auStack_198,param_3);
  uStack_b8 = *(undefined8 *)(lVar12 + 0x40);
  FUN_1086a4a3c(auStack_198);
  FUN_1088bf0ac();
  puStack_1b8 = (ulong *)0x0;
  lStack_1c0 = 0;
  uStack_1a8 = 0;
  plStack_1b0 = (long *)0x0;
  afStack_1a0[0] = 1.0;
  puVar16 = &uStack_180;
  if ((uStack_180 & 1) != 0) {
    puVar16 = (ulong *)(uStack_180 + 7);
  }
  puVar1 = puVar16 + iStack_178;
  for (; puVar16 != puVar1; puVar16 = puVar16 + 1) {
    uVar15 = *puVar16;
    ppuVar8 = *(undefined ***)(uVar15 + 0x18);
    ppuVar2 = &PTR_PTR_11326cb58;
    if (ppuVar8 != (undefined **)0x0) {
      ppuVar2 = ppuVar8;
    }
    puVar11 = &uStack_1a8;
    FUN_1086a9f1c(puVar11,ppuVar2);
    puVar10 = puStack_1b8;
    if (puStack_1b8 != (ulong *)0x0) {
      uVar17 = (long)puStack_1b8 - 1;
      if (((ulong)puStack_1b8 & uVar17) == 0) {
        unaff_x21 = (ulong *)(uVar17 & (ulong)puVar11);
      }
      else {
        unaff_x21 = puVar11;
        if (puStack_1b8 <= puVar11) {
          uVar3 = 0;
          if (puStack_1b8 != (ulong *)0x0) {
            uVar3 = (ulong)puVar11 / (ulong)puStack_1b8;
          }
          unaff_x21 = (ulong *)((long)puVar11 - uVar3 * (long)puStack_1b8);
        }
      }
      plVar18 = *(long **)(lStack_1c0 + (long)unaff_x21 * 8);
      if (plVar18 != (long *)0x0) {
        do {
          while( true ) {
            plVar18 = (long *)*plVar18;
            if (plVar18 == (long *)0x0) goto LAB_108789a74;
            puVar9 = (ulong *)plVar18[1];
            if (puVar9 != puVar11) break;
            pfVar7 = afStack_1a0;
            FUN_1086a9f40(pfVar7,plVar18 + 2,ppuVar2);
            if (((ulong)pfVar7 & 1) != 0) goto LAB_108789d28;
          }
          if (((ulong)puVar10 & uVar17) == 0) {
            puVar9 = (ulong *)((ulong)puVar9 & uVar17);
          }
          else if (puVar10 <= puVar9) {
            uVar3 = 0;
            if (puVar10 != (ulong *)0x0) {
              uVar3 = (ulong)puVar9 / (ulong)puVar10;
            }
            puVar9 = (ulong *)((long)puVar9 - uVar3 * (long)puVar10);
          }
        } while (puVar9 == unaff_x21);
      }
    }
LAB_108789a74:
    plVar18 = (long *)0x38;
    __Znwm();
    uStack_70 = 0;
    *plVar18 = 0;
    plVar18[1] = (long)puVar11;
    plStack_80 = plVar18;
    pplStack_78 = &plStack_1b0;
    FUN_10865ecd8(plVar18 + 2,ppuVar2);
    plVar18[6] = uVar15;
    uStack_70 = CONCAT71(uStack_70._1_7_,1);
    if ((puVar10 == (ulong *)0x0) || (afStack_1a0[0] * (float)puVar10 < (float)(uStack_1a8 + 1))) {
      uVar15 = 1;
      if ((ulong *)0x2 < puVar10) {
        uVar15 = (ulong)(((ulong)puVar10 & (long)puVar10 - 1U) != 0);
      }
      puVar10 = (ulong *)(uVar15 | (long)puVar10 << 1);
      puVar9 = (ulong *)(long)((float)(uStack_1a8 + 1) / afStack_1a0[0]);
      if (puVar10 <= puVar9) {
        puVar10 = puVar9;
      }
      if ((long)puVar10 - 1U == 0) {
        puVar10 = (ulong *)0x2;
      }
      else if (((ulong)puVar10 & (long)puVar10 - 1U) != 0) {
        __ZNSt3__112__next_primeEm();
      }
      puVar9 = puStack_1b8;
      if (puStack_1b8 < puVar10) {
LAB_108789b24:
        if ((ulong)puVar10 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x108789ea4);
          (*pcVar4)();
        }
        lVar5 = (long)puVar10 << 3;
        __Znwm(lVar5);
        FUN_108789fe0(&lStack_1c0,lVar5);
        for (puVar9 = (ulong *)0x0; puVar10 != puVar9; puVar9 = (ulong *)((long)puVar9 + 1)) {
          *(undefined8 *)(lStack_1c0 + (long)puVar9 * 8) = 0;
        }
        puStack_1b8 = puVar10;
        if (plStack_1b0 != (long *)0x0) {
          puVar9 = (ulong *)plStack_1b0[1];
          uVar17 = (long)puVar10 - 1;
          uVar15 = 0;
          if (puVar10 != (ulong *)0x0) {
            uVar15 = (ulong)puVar9 / (ulong)puVar10;
          }
          puVar6 = puVar9;
          if (puVar10 <= puVar9) {
            puVar6 = (ulong *)((long)puVar9 - uVar15 * (long)puVar10);
          }
          if (((ulong)puVar10 & uVar17) == 0) {
            puVar6 = (ulong *)((ulong)puVar9 & uVar17);
          }
          *(long ***)(lStack_1c0 + (long)puVar6 * 8) = &plStack_1b0;
          plVar14 = plStack_1b0;
          while (plVar13 = plVar14, plVar14 = (long *)*plVar13, plVar14 != (long *)0x0) {
            puVar9 = (ulong *)plVar14[1];
            if (((ulong)puVar10 & uVar17) == 0) {
              puVar9 = (ulong *)((ulong)puVar9 & uVar17);
            }
            else if (puVar10 <= puVar9) {
              uVar15 = 0;
              if (puVar10 != (ulong *)0x0) {
                uVar15 = (ulong)puVar9 / (ulong)puVar10;
              }
              puVar9 = (ulong *)((long)puVar9 - uVar15 * (long)puVar10);
            }
            if (puVar9 != puVar6) {
              if (*(long *)(lStack_1c0 + (long)puVar9 * 8) == 0) {
                *(long **)(lStack_1c0 + (long)puVar9 * 8) = plVar13;
                puVar6 = puVar9;
              }
              else {
                *plVar13 = *plVar14;
                *plVar14 = **(long **)(lStack_1c0 + (long)puVar9 * 8);
                **(undefined8 **)(lStack_1c0 + (long)puVar9 * 8) = plVar14;
                plVar14 = plVar13;
              }
            }
          }
        }
      }
      else if (puVar10 < puStack_1b8) {
        puVar6 = (ulong *)(long)((float)uStack_1a8 / afStack_1a0[0]);
        if ((puStack_1b8 < (ulong *)0x3) || (((ulong)puStack_1b8 & (long)puStack_1b8 - 1U) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if ((ulong *)0x1 < puVar6) {
          puVar6 = (ulong *)(1L << (-LZCOUNT((long)puVar6 + -1) & 0x3fU));
        }
        if (puVar10 <= puVar6) {
          puVar10 = puVar6;
        }
        if (puVar10 < puVar9) {
          if (puVar10 != (ulong *)0x0) goto LAB_108789b24;
          FUN_108789fe0(&lStack_1c0,0);
          puStack_1b8 = (ulong *)0x0;
        }
      }
      puVar10 = puStack_1b8;
      if (((ulong)puStack_1b8 & (long)puStack_1b8 - 1U) == 0) {
        unaff_x21 = (ulong *)((long)puStack_1b8 - 1U & (ulong)puVar11);
      }
      else {
        unaff_x21 = puVar11;
        if (puStack_1b8 <= puVar11) {
          uVar15 = 0;
          if (puStack_1b8 != (ulong *)0x0) {
            uVar15 = (ulong)puVar11 / (ulong)puStack_1b8;
          }
          unaff_x21 = (ulong *)((long)puVar11 - uVar15 * (long)puStack_1b8);
        }
      }
    }
    plVar14 = *(long **)(lStack_1c0 + (long)unaff_x21 * 8);
    if (plVar14 == (long *)0x0) {
      *plVar18 = (long)plStack_1b0;
      *(long ***)(lStack_1c0 + (long)unaff_x21 * 8) = &plStack_1b0;
      plStack_1b0 = plVar18;
      if (*plVar18 != 0) {
        puVar11 = *(ulong **)(*plVar18 + 8);
        if (((ulong)puVar10 & (long)puVar10 - 1U) == 0) {
          puVar11 = (ulong *)((ulong)puVar11 & (long)puVar10 - 1U);
        }
        else if (puVar10 <= puVar11) {
          uVar15 = 0;
          if (puVar10 != (ulong *)0x0) {
            uVar15 = (ulong)puVar11 / (ulong)puVar10;
          }
          puVar11 = (ulong *)((long)puVar11 - uVar15 * (long)puVar10);
        }
        *(long **)(lStack_1c0 + (long)puVar11 * 8) = plVar18;
      }
    }
    else {
      *plVar18 = *plVar14;
      *plVar14 = (long)plVar18;
    }
    plStack_80 = (long *)0x0;
    uStack_1a8 = uStack_1a8 + 1;
    FUN_108789ff8(&plStack_80);
LAB_108789d28:
  }
  uVar15 = *(ulong *)(lVar12 + 0x18);
  puVar16 = (ulong *)(lVar12 + 0x18);
  if ((uVar15 & 1) != 0) {
    puVar16 = (ulong *)(uVar15 + 7);
  }
  puVar1 = puVar16 + *(int *)(lVar12 + 0x20);
  do {
    puVar11 = puStack_1b8;
    if (puVar16 == puVar1) {
      FUN_108789f68(param_1,auStack_198);
LAB_108789e5c:
      FUN_108789f84(&lStack_1c0);
      func_0x000107c2a3a8(auStack_198);
      return;
    }
    uVar15 = *puVar16;
    ppuVar2 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(uVar15 + 0x18) != (undefined **)0x0) {
      ppuVar2 = *(undefined ***)(uVar15 + 0x18);
    }
    if ((puStack_1b8 == (ulong *)0x0) || (uStack_1a8 == 0)) {
LAB_108789e50:
      *param_1 = 0;
      param_1[0x118] = 0;
      goto LAB_108789e5c;
    }
    puVar10 = &uStack_1a8;
    FUN_1086a9f1c(puVar10,ppuVar2);
    uVar17 = (long)puVar11 - 1;
    if (((ulong)puVar11 & uVar17) == 0) {
      puVar9 = (ulong *)((ulong)puVar10 & uVar17);
    }
    else {
      puVar9 = puVar10;
      if (puVar11 <= puVar10) {
        uVar3 = 0;
        if (puVar11 != (ulong *)0x0) {
          uVar3 = (ulong)puVar10 / (ulong)puVar11;
        }
        puVar9 = (ulong *)((long)puVar10 - uVar3 * (long)puVar11);
      }
    }
    plVar18 = *(long **)(lStack_1c0 + (long)puVar9 * 8);
    if (plVar18 == (long *)0x0) goto LAB_108789e50;
    do {
      while( true ) {
        plVar18 = (long *)*plVar18;
        if (plVar18 == (long *)0x0) goto LAB_108789e50;
        puVar6 = (ulong *)plVar18[1];
        if (puVar6 == puVar10) break;
        if (((ulong)puVar11 & uVar17) == 0) {
          puVar6 = (ulong *)((ulong)puVar6 & uVar17);
        }
        else if (puVar11 <= puVar6) {
          uVar3 = 0;
          if (puVar11 != (ulong *)0x0) {
            uVar3 = (ulong)puVar6 / (ulong)puVar11;
          }
          puVar6 = (ulong *)((long)puVar6 - uVar3 * (long)puVar11);
        }
        if (puVar6 != puVar9) goto LAB_108789e50;
      }
      pfVar7 = afStack_1a0;
      FUN_1086a9f40(pfVar7,plVar18 + 2,ppuVar2);
    } while (((ulong)pfVar7 & 1) == 0);
    *(undefined8 *)(plVar18[6] + 0x50) = *(undefined8 *)(uVar15 + 0x30);
    *(undefined8 *)(plVar18[6] + 0x28) = *(undefined8 *)(uVar15 + 0x20);
    *(undefined8 *)(plVar18[6] + 0x48) = *(undefined8 *)(uVar15 + 0x28);
    *(undefined8 *)(plVar18[6] + 0x30) = *(undefined8 *)(uVar15 + 0x38);
    puVar16 = puVar16 + 1;
  } while( true );
}



/* Entry: 108789f68; end: 108789f83;  */

void FUN_108789f68(long param_1)

{
  func_0x000107c28dec();
  *(undefined1 *)(param_1 + 0x118) = 1;
  return;
}



/* Entry: 108789f84; end: 108789fdf;  */

long * FUN_108789f84(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c2a2e0(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108789fe0; end: 108789ff7;  */

void FUN_108789fe0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108789ff8; end: 10878a03f;  */

long * FUN_108789ff8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c2a2e0(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10878a040; end: 10878a28f;  */

void FUN_10878a040(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined ***pppuVar1;
  code *extraout_x8;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 auStack_160 [40];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [40];
  
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_FUN_110a609a8;
  uStack_88 = 0;
  uStack_70 = 0x3b;
  func_0x000107c278b8(auStack_a8,"error_code");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_c0,param_2);
  pppuVar1 = &ppuStack_90;
  func_0x000107c28820(pppuVar1,auStack_a8,auStack_c0);
  func_0x000107c278b8(auStack_d8,"error_source");
  FUN_10868157c(param_3);
  func_0x000107c28824(pppuVar1,auStack_d8,param_3);
  func_0x000107c2884c(auStack_68,pppuVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  func_0x000100864e80();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
  func_0x000107c2882c(&ppuStack_90);
  if (*(char *)(param_4 + 0x40) == '\x01') {
    func_0x000107c278b8(auStack_f0,&DAT_10f4ba64a);
    puVar3 = auStack_f0;
    func_0x000107c2881c(auStack_68,auStack_f0,*(undefined4 *)(param_4 + 0x38));
  }
  else {
    func_0x000107c278b8(auStack_108,&DAT_10f4ba64a);
    puVar3 = auStack_108;
    func_0x000107c28824(auStack_68,auStack_108,"none");
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
  func_0x000100864c30();
  func_0x000107c278b8(auStack_120);
  func_0x000100864c3c();
  func_0x000107c28824(auStack_68,auStack_120);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
  func_0x000107c278b8(auStack_138,&DAT_10f3811b7);
  func_0x000107c28824(auStack_68,auStack_138,(&PTR_DAT_110a6f638)[*(int *)(param_1 + 0xd4)]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
  plVar2 = *(long **)(param_1 + 0x88);
  func_0x000107c2884c(auStack_160,auStack_68);
  func_0x00010878b200(*(undefined8 *)(*plVar2 + 0x50));
  (*extraout_x8)();
  func_0x000107c2882c(auStack_160);
  func_0x000107c2882c(auStack_68);
  return;
}



/* Entry: 10878a290; end: 10878a2d3;  */

void FUN_10878a290(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [64];
  undefined1 uStack_28;
  
  auStack_68[0] = 0;
  uStack_28 = 0;
  FUN_10878a2d4(param_1,param_2,0,auStack_68);
  func_0x00010878b130();
  return;
}



/* Entry: 10878a2d4; end: 10878a3b7;  */

void FUN_10878a2d4(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long alStack_60 [3];
  byte bStack_48;
  
  func_0x000107c28b08(alStack_60,param_2 & 0xffffffff | 0x100000000);
  if ((bStack_48 & 1) != 0) {
    func_0x00010878b200();
    FUN_10878a040();
    func_0x000107c279a4(alStack_60);
    func_0x000107c3347c(alStack_60);
    uVar2 = param_2;
    FUN_108770c94(param_2);
    func_0x00010878b198(uVar2 & 0xffffffff,*(undefined8 *)(alStack_60[0] + 0x130),
                        *(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd0));
    func_0x000107c297b0(alStack_60);
    func_0x000108681904(*(undefined8 *)(param_1 + 0x58),param_2);
    func_0x00010878b170();
    func_0x00010878b1d4();
    func_0x00010878b108();
    func_0x00010878b120(*(undefined8 *)(param_1 + 0x128));
    func_0x00010878b1cc();
    return;
  }
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10878a394);
  (*pcVar1)();
}



/* Entry: 10878a3b8; end: 10878a477;  */

void FUN_10878a3b8(long param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_48;
  undefined1 auStack_40 [28];
  undefined4 uStack_24;
  
  puVar1 = &uStack_24;
  uStack_24 = param_2;
  FUN_108843ae8(puVar1);
  func_0x000107c278b8(auStack_40,puVar1);
  uStack_88 = 0;
  uStack_48 = 0;
  FUN_10878a040(param_1,auStack_40,4,&uStack_88);
  func_0x00010878b130();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
  func_0x000107c29820(&uStack_88,param_1);
  func_0x00010878b198(param_2,*(undefined8 *)(CONCAT71(uStack_87,uStack_88) + 0x130),
                      *(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd0));
  func_0x000107c297b0(&uStack_88);
  func_0x00010878b150();
  return;
}



/* Entry: 10878a478; end: 10878a4db;  */

void FUN_10878a478(long param_1,undefined8 *param_2,undefined8 param_3)

{
  func_0x000108681930(*(undefined8 *)(param_1 + 0x58),param_3);
  func_0x00010878b170();
  func_0x00010878b1d4();
  func_0x00010878b108();
  (**(code **)(*(long *)*param_2 + 8))((long *)*param_2,param_3);
  func_0x00010878b1cc();
  return;
}



/* Entry: 10878a4dc; end: 10878a517;  */

long FUN_10878a4dc(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = param_3;
  FUN_1086995ac();
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    if (uVar2 < *(ulong *)(param_2 + 0x10)) {
      func_0x00010065cfd4();
      lVar1 = uVar2 + 0x18;
    }
    else {
      lVar1 = param_2;
      FUN_108659f7c(param_2,param_3);
    }
    *(long *)(param_2 + 8) = lVar1;
    return lVar1 + -0x18;
  }
  return param_1;
}



/* Entry: 10878a518; end: 10878a75f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10878a518(long param_1,long param_2,long param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  long lStack_598;
  undefined1 auStack_590 [424];
  byte bStack_3e8;
  long alStack_3e0 [54];
  byte bStack_230;
  long alStack_228 [56];
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    lStack_68 = 0;
    lStack_60 = 0;
    uStack_58 = 0;
    func_0x00010878b1dc();
    plVar1 = *(long **)(alStack_228[0] + 0x150);
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    func_0x000107c297b0(alStack_228);
    if ((uint)plVar1 != 0) {
      alStack_3e0[0] = 0;
      alStack_3e0[1] = 0;
      alStack_3e0[2] = 0;
      FUN_108860924(alStack_228,*(undefined8 *)(param_1 + 0xa8),param_2,alStack_3e0);
      func_0x000107c288bc(alStack_3e0,alStack_228);
      _bzero(&lStack_598,0x1b8);
      while ((((bStack_230 & 1) != 0 || ((bStack_3e8 & 1) != 0)) && (alStack_3e0[0] != lStack_598)))
      {
        plVar2 = alStack_3e0;
        func_0x000107c288c0(plVar2);
        FUN_10867d0d8(&lStack_68,plVar2,plVar2 + 3);
        func_0x000107c28980(alStack_3e0);
      }
      func_0x000107c288dc(auStack_590);
      func_0x000107c288dc(alStack_3e0 + 1);
      func_0x000107c28948(alStack_228);
    }
    FUN_108866b68(*(undefined8 *)(param_1 + 0xa8),param_2);
    FUN_108866468(*(undefined8 *)(param_1 + 0xa8),param_2);
    FUN_108868114(*(undefined8 *)(param_1 + 0xa8),param_2);
    if ((param_4 | (uint)plVar1) == 1) {
      func_0x00010878b1dc();
      (**(code **)(**(long **)(alStack_228[0] + 0x170) + 0x38))
                (*(long **)(alStack_228[0] + 0x170),param_2);
      func_0x000107c297b0(alStack_228);
      if (lStack_68 != lStack_60) {
        func_0x000107c29820(alStack_3e0,param_1);
        alStack_228[1] = 0;
        alStack_228[0] = 0;
        alStack_228[2] = 0;
        (**(code **)(**(long **)(alStack_3e0[0] + 0x170) + 8))
                  (*(long **)(alStack_3e0[0] + 0x170),param_2,alStack_228,&lStack_68);
        func_0x00010867b9fc(alStack_228);
        func_0x000107c297b0(alStack_3e0);
      }
    }
    func_0x000104be1274(&lStack_68);
  }
  return;
}



/* Entry: 10878a760; end: 10878a7ef;  */

long * FUN_10878a760(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_50,*param_1 + 0x58);
    func_0x000107c27f54(auStack_38,&UNK_10f4ba68d,auStack_50);
    func_0x00010bcc7444(uVar1,0x65,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  }
  return param_1 + 1;
}



/* Entry: 10878a7f0; end: 10878a803;  */

void FUN_10878a7f0(void)

{
  func_0x000100870bd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878a804; end: 10878a807;  */

void FUN_10878a804(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6f438;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10878a808; end: 10878a81b;  */

void FUN_10878a808(void)

{
  func_0x00010878aae4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878a81c; end: 10878a837;  */

void FUN_10878a81c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a6f478;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 10878a838; end: 10878a89b;  */

void FUN_10878a838(long param_1,undefined8 *param_2,undefined8 param_3)

{
  func_0x00010868195c(*(undefined8 *)(param_1 + 0x58),param_3);
  func_0x000108848514(param_3);
  func_0x00010878b170();
  func_0x00010878b1d4();
  func_0x00010878b108();
  func_0x00010878b120(*param_2);
  func_0x00010878b1cc();
  return;
}



/* Entry: 10878a89c; end: 10878a8eb;  */

void FUN_10878a89c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a6f490;
  uVar1 = 0x78;
  __Znwm();
  func_0x0001008694a8();
  param_1[1] = uVar1;
  return;
}



/* Entry: 10878a8ec; end: 10878a95f;  */

void FUN_10878a8ec(undefined8 param_1,long param_2)

{
  code *extraout_x8;
  long lVar1;
  undefined8 auStack_40 [2];
  
  lVar1 = *(long *)(param_2 + 0x10);
  if (*(long *)(lVar1 + 0x18) != *(long *)(lVar1 + 0x20)) {
    func_0x000107c29820(auStack_40,*(undefined8 *)(lVar1 + 0x10));
    func_0x00010878b180(auStack_40[0]);
    (*extraout_x8)();
    func_0x000107c297b0(auStack_40);
  }
  func_0x00010878b150();
  return;
}



/* Entry: 10878a960; end: 10878a9ab;  */

void FUN_10878a960(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_110a6f4b0;
  puVar1 = param_1;
  func_0x000107c334c8();
  func_0x000100869560();
  param_1[1] = puVar1;
  return;
}



/* Entry: 10878a9ac; end: 10878a9cf;  */

void FUN_10878a9ac(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a6f4d0;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 10878a9d0; end: 10878a9e3;  */

void FUN_10878a9d0(void)

{
  func_0x000100870b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878a9e4; end: 10878aa8f;  */

void FUN_10878a9e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  puVar1 = (undefined8 *)(param_1 + 0x68);
  (*(code *)*puVar1)();
  if ((int)puVar1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(param_1 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(param_1 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(param_1 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(param_1 + 0x38));
    func_0x00010878b138();
  }
  return;
}



/* Entry: 10878aa90; end: 10878aa93;  */

undefined8 * FUN_10878aa90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6f580;
  func_0x000100870b38(param_1[8]);
  func_0x000100870b38(param_1[2]);
  return param_1;
}



/* Entry: 10878aa94; end: 10878aaa7;  */

void FUN_10878aa94(void)

{
  func_0x000100870b7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878aaa8; end: 10878aaf3;  */

void FUN_10878aaa8(void)

{
  return;
}



/* Entry: 10878aaf4; end: 10878ad43;  */

void FUN_10878aaf4(long param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined ***pppuVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 extraout_x8;
  long lVar10;
  long alStack_190 [3];
  byte bStack_178;
  undefined1 *puStack_160;
  long *plStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined1 auStack_130 [72];
  long lStack_e8;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [72];
  undefined1 auStack_90 [24];
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_48;
  
  func_0x000107c334a8();
  lVar10 = *(long *)(param_4 + 0x10);
  uStack_48 = extraout_x8;
  FUN_10875bc3c(auStack_130,param_3);
  FUN_10875bbdc(auStack_130,*(undefined4 *)(lVar10 + 0x28),lVar10 + 0x18);
  lVar10 = *(long *)(lVar10 + 0x10);
  if ((int)param_1 == 0xe) {
    uVar3 = *(long *)(lVar10 + 0x48) == 1;
    if ((bool)uVar3) {
      plVar5 = *(long **)(lVar10 + 0x88);
      plStack_68 = (long *)0x0;
      uStack_60 = 0;
      ppuStack_78 = &PTR_FUN_110a609a8;
      ppuStack_70 = (undefined **)0x0;
      uStack_58 = 0x47;
      func_0x000100864c30();
      func_0x000107c278b8(auStack_90);
      pppuVar4 = &ppuStack_78;
      func_0x000107c28824(pppuVar4,auStack_90,(&PTR_DAT_110a6f5e8)[*(int *)(lVar10 + 0xd0)]);
      func_0x000107c2884c(&lStack_e8,pppuVar4);
      (**(code **)(*plVar5 + 0x50))(plVar5,&lStack_e8);
      func_0x000107c2882c(&lStack_e8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
      func_0x000107c2882c(&ppuStack_78);
    }
  }
  else {
    uVar3 = 0;
    if ((int)param_1 == 5) {
      uVar1 = *(int *)(lVar10 + 0x124) - 1;
      uVar3 = uVar1 == 3;
      if (uVar1 < 4) {
        uVar9 = *(undefined4 *)(&UNK_10dee0a70 + (ulong)uVar1 * 4);
      }
      else {
        uVar9 = 0;
      }
      FUN_108866be4(*(undefined8 *)(lVar10 + 0xa8),uVar9);
    }
  }
  lStack_e8 = lVar10;
  uStack_e0 = param_2;
  FUN_10875bc3c(auStack_d8,auStack_130);
  ppuStack_78 = (undefined **)FUN_10878ad44;
  ppuStack_70 = &PTR_FUN_110a6f5b8;
  plVar5 = (long *)0x58;
  __Znwm();
  *plVar5 = lStack_e8;
  *(undefined4 *)(plVar5 + 1) = uStack_e0;
  FUN_10875bc3c(plVar5 + 2,auStack_d8);
  lVar8 = param_1;
  plStack_68 = plVar5;
  FUN_108765ee8(lVar10,param_1,&UNK_10f4ba6b8,&ppuStack_78);
  func_0x0001008707a0(ppuStack_70);
  puVar6 = auStack_d8;
  func_0x000107c29564();
  func_0x00010878b138();
  func_0x000107c33484(uStack_48);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c2882c(&lStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  func_0x000107c2882c(&ppuStack_78);
  func_0x00010878b138();
  puVar7 = puVar6;
  __Unwind_Resume(puVar6);
  lVar8 = **(long **)(lVar8 + 0x10);
  pcStack_138 = FUN_10878ad44;
  puStack_160 = puVar6;
  plStack_158 = plVar5;
  lStack_150 = lVar10;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x000107c28b08(alStack_190,(ulong)puVar7 & 0xffffffff | 0x100000000);
  if ((bStack_178 & 1) != 0) {
    func_0x00010878b200();
    FUN_10878a040();
    func_0x000107c279a4(alStack_190);
    func_0x000107c3347c(alStack_190);
    puVar6 = puVar7;
    FUN_108770c94(puVar7);
    func_0x00010878b198((ulong)puVar6 & 0xffffffff,*(undefined8 *)(alStack_190[0] + 0x130),
                        *(undefined4 *)(lVar8 + 0xd4),*(undefined4 *)(lVar8 + 0xd0));
    func_0x000107c297b0(alStack_190);
    func_0x000108681904(*(undefined8 *)(lVar8 + 0x58),puVar7);
    func_0x00010878b170();
    func_0x00010878b1d4();
    func_0x00010878b108();
    func_0x00010878b120(*(undefined8 *)(lVar8 + 0x128));
    func_0x00010878b1cc();
    return;
  }
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10878a394);
  (*pcVar2)();
}



/* Entry: 10878ad44; end: 10878ad5f;  */

void FUN_10878ad44(ulong param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long alStack_60 [3];
  byte bStack_48;
  
  lVar3 = **(long **)(param_2 + 0x10);
  func_0x000107c28b08(alStack_60,param_1 & 0xffffffff | 0x100000000);
  if ((bStack_48 & 1) != 0) {
    func_0x00010878b200();
    FUN_10878a040();
    func_0x000107c279a4(alStack_60);
    func_0x000107c3347c(alStack_60);
    uVar2 = param_1;
    FUN_108770c94(param_1);
    func_0x00010878b198(uVar2 & 0xffffffff,*(undefined8 *)(alStack_60[0] + 0x130),
                        *(undefined4 *)(lVar3 + 0xd4),*(undefined4 *)(lVar3 + 0xd0));
    func_0x000107c297b0(alStack_60);
    func_0x000108681904(*(undefined8 *)(lVar3 + 0x58),param_1);
    func_0x00010878b170();
    func_0x00010878b1d4();
    func_0x00010878b108();
    func_0x00010878b120(*(undefined8 *)(lVar3 + 0x128));
    func_0x00010878b1cc();
    return;
  }
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10878a394);
  (*pcVar1)();
}



/* Entry: 10878ad60; end: 10878ad93;  */

void FUN_10878ad60(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x000107c29564(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10878ad94; end: 10878ad97;  */

void FUN_10878ad94(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10878ad98; end: 10878ade3;  */

void FUN_10878ad98(long param_1,long param_2)

{
  func_0x000107c27994();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 10878ade4; end: 10878adf7;  */

void FUN_10878ade4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar6;
  
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000107c334b0();
  lVar6 = *plVar3;
  lVar2 = plVar3[1];
  lVar1 = *(long *)(param_2 + 8) + (lVar6 - lVar2);
  lVar4 = lVar1;
  for (lVar5 = lVar6; lVar5 != lVar2; lVar5 = lVar5 + 0x20) {
    FUN_10878af00(lVar4,lVar5);
    lVar4 = lVar4 + 0x20;
  }
  for (; lVar6 != lVar2; lVar6 = lVar6 + 0x20) {
    func_0x000107c27914(lVar6);
  }
  unaff_x19[1] = lVar1;
  lVar5 = *unaff_x20;
  *unaff_x20 = lVar1;
  unaff_x20[1] = lVar5;
  unaff_x19[1] = lVar5;
  lVar5 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar5;
  lVar5 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar5;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10878adf8; end: 10878aea3;  */

void FUN_10878adf8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar5;
  
  func_0x000107c334b0();
  lVar5 = *param_1;
  lVar2 = param_1[1];
  lVar1 = *(long *)(param_2 + 8) + (lVar5 - lVar2);
  lVar3 = lVar1;
  for (lVar4 = lVar5; lVar4 != lVar2; lVar4 = lVar4 + 0x20) {
    FUN_10878af00(lVar3,lVar4);
    lVar3 = lVar3 + 0x20;
  }
  for (; lVar5 != lVar2; lVar5 = lVar5 + 0x20) {
    func_0x000107c27914(lVar5);
  }
  unaff_x19[1] = lVar1;
  lVar4 = *unaff_x20;
  *unaff_x20 = lVar1;
  unaff_x20[1] = lVar4;
  unaff_x19[1] = lVar4;
  lVar4 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar4;
  lVar4 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar4;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10878aea4; end: 10878aeff;  */

long * FUN_10878aea4(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    if ((ulong)param_2 >> 0x3b != 0) {
      func_0x000104bd35f4();
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      lVar2 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar2;
      lVar2 = param_2[3];
      param_1[2] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_1[3] = lVar2;
      return param_1;
    }
    lVar2 = (long)param_2 << 5;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 0x20;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = lVar2 + (long)param_2 * 0x20;
  return param_1;
}



/* Entry: 10878af00; end: 10878af27;  */

void FUN_10878af00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 10878af28; end: 10878af97;  */

long * FUN_10878af28(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x20;
    func_0x000107c27914();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10878af98; end: 10878afb3;  */

void FUN_10878af98(long param_1)

{
  FUN_10878af00();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 10878afb4; end: 10878b033;  */

void FUN_10878afb4(undefined8 *param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_30 = param_1[2];
  uStack_28 = param_1[3];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  func_0x00010878af70();
  func_0x00010878b200();
  func_0x00010878af70();
  func_0x000107c27914(&uStack_40);
  return;
}



/* Entry: 10878b034; end: 10878b07f;  */

void FUN_10878b034(long param_1,undefined8 param_2)

{
  func_0x000107c313f8();
  func_0x000107c2879c(param_1);
  func_0x000107c313d8(param_2,1);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



/* Entry: 10878b080; end: 10878b097;  */

void FUN_10878b080(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10878b098; end: 10878b0d7;  */

long * FUN_10878b098(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010878adbc(lVar1 + 0x10);
    }
    func_0x00010878b148();
  }
  return param_1;
}



/* Entry: 10878b0d8; end: 10878b20b;  */

void FUN_10878b0d8(void)

{
  return;
}



/* Entry: 10878b20c; end: 10878b3ab;  */

undefined8 *
FUN_10878b20c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 extraout_x8;
  undefined8 uVar9;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  undefined4 uStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  code *pcStack_360;
  undefined **ppuStack_358;
  undefined8 uStack_350;
  long alStack_348 [40];
  long lStack_208;
  byte bStack_190;
  code *pcStack_188;
  undefined **ppuStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  long lStack_158;
  code *pcStack_138;
  undefined **ppuStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_108;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined **appuStack_78 [3];
  undefined ***pppuStack_60;
  undefined8 uStack_58;
  
  func_0x00010878bf10();
  uStack_58 = extraout_x8;
  func_0x000107c278b8(auStack_90,&UNK_10f4ba6d5);
  pppuStack_60 = appuStack_78;
  appuStack_78[0] = &PTR_FUN_110a6f840;
  uStack_98 = *param_8;
  *param_8 = 0;
  FUN_10875e9fc(param_1,auStack_90,param_2,param_3,appuStack_78,param_10,&uStack_98,3);
  func_0x000107c29578(&uStack_98);
  func_0x00010865f8f8(appuStack_78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  *param_1 = &PTR_FUN_110a6f668;
  func_0x000107c27994(param_1 + 0x16,param_4);
  func_0x000107c27994(param_1 + 0x19,param_5);
  func_0x00010869fbb8(param_1 + 0x1c,param_6);
  uVar9 = *param_7;
  *param_7 = 0;
  param_1[0x26] = uVar9;
  puVar6 = param_1 + 0x27;
  FUN_1086e76d4(puVar6,param_9);
  func_0x00010878bed4(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x000108763d40(param_1 + 0x26);
  FUN_1088f9cb4(param_1 + 0x1c);
  func_0x000107c27914(param_1 + 0x19);
  func_0x000107c27914(param_1 + 0x16);
  FUN_10875b664(param_1);
  __Unwind_Resume();
  func_0x00010878bf10();
  uStack_108 = extraout_x8_00;
  func_0x000107c297b4(&uStack_3e0,puVar6 + 1);
  puStack_3d0 = puVar6;
  func_0x000107c297b4(&puStack_400,puVar6 + 1);
  puStack_3b8 = puStack_3f8;
  puStack_3c0 = puStack_400;
  puStack_400 = (undefined8 *)0x0;
  puStack_3f8 = (undefined8 *)0x0;
  puStack_3f0 = puVar6;
  puStack_3b0 = puVar6;
  func_0x00010878bf08(&pcStack_360);
  lStack_3a0 = *(long *)(pcStack_360 + 600);
  uStack_3a8 = *(undefined8 *)(pcStack_360 + 0x250);
  if (*(long *)(pcStack_360 + 600) != 0) {
    do {
      func_0x00010878bec4();
    } while (extraout_w10 != 0);
  }
  uStack_398 = *(undefined4 *)(puVar6[0xb] + 0xfc);
  func_0x00010878bf34();
  pcStack_138 = FUN_10878bcc0;
  ppuStack_130 = &PTR_FUN_110a6f818;
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  puVar7[1] = puStack_3b8;
  *puVar7 = puStack_3c0;
  if (puStack_3b8 != (undefined8 *)0x0) {
    do {
      func_0x00010878bec4();
    } while (extraout_w10_00 != 0);
  }
  puVar7[3] = uStack_3a8;
  puVar7[2] = puStack_3b0;
  puVar7[4] = lStack_3a0;
  if (lStack_3a0 != 0) {
    do {
      func_0x00010878bec4();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(puVar7 + 5) = uStack_398;
  uVar9 = puVar6[1];
  lVar1 = puVar6[2];
  uStack_370 = uVar9;
  lStack_368 = lVar1;
  puStack_128 = puVar7;
  if (lVar1 == 0) {
    uVar12 = puVar6[0xb];
  }
  else {
    do {
      func_0x00010878bec4();
    } while (extraout_w10_02 != 0);
    uVar12 = puVar6[0xb];
    do {
      func_0x00010878bec4();
    } while (extraout_w10_03 != 0);
  }
  puVar7 = (undefined8 *)0xb8;
  uStack_390 = uVar9;
  lStack_388 = lVar1;
  __Znwm();
  uVar5 = uStack_3d8;
  uVar4 = uStack_3e0;
  plVar10 = puVar7 + 1;
  *plVar10 = 0;
  puVar7[2] = 0;
  *puVar7 = &PTR_FUN_110a6f6d8;
  pcStack_360 = FUN_10878b978;
  ppuStack_358 = &PTR_FUN_110a6f718;
  uStack_390 = 0;
  lStack_388 = 0;
  puVar11 = puVar7 + 3;
  *puVar11 = &PTR_FUN_110a6f7e0;
  pcStack_188 = FUN_10878b9f8;
  ppuStack_180 = &PTR_FUN_110a6f730;
  uStack_3e0 = 0;
  uStack_3d8 = 0;
  uStack_170 = 0;
  puStack_168 = puStack_3d0;
  puVar7[4] = FUN_10878b9f8;
  puVar7[5] = &PTR_FUN_110a6f730;
  puVar7[7] = uVar5;
  puVar7[6] = uVar4;
  uStack_178 = 0;
  puVar7[8] = puStack_3d0;
  puVar7[10] = FUN_10878bcc0;
  uStack_350 = uVar9;
  alStack_348[0] = lVar1;
  (*(code *)ppuStack_130[2])(puVar7 + 0xb,&ppuStack_130);
  *puVar11 = &PTR_DAT_110a6f758;
  puVar7[0x10] = pcStack_360;
  (*(code *)ppuStack_358[2])(puVar7 + 0x11,&ppuStack_358);
  puVar7[0x16] = uVar12;
  (*(code *)*ppuStack_180)(&ppuStack_180);
  (*(code *)*ppuStack_358)(&ppuStack_358);
  func_0x000107c297a8(&uStack_390);
  uStack_380 = 0;
  uStack_378 = 0;
  puStack_410 = puVar11;
  puStack_408 = puVar7;
  FUN_10878be74(&uStack_380);
  func_0x000107c297a8(&uStack_370);
  func_0x00010878bef8();
  FUN_10878b928(&puStack_3c0);
  func_0x00010869fbb8(&pcStack_188,puVar6 + 0x1c);
  func_0x00010878bf08(&puStack_3c0);
  func_0x000107c29f64(&pcStack_360,puStack_3c0[0xc],puVar6 + 0x16,0);
  func_0x000107c297b0(&puStack_3c0);
  if ((bStack_190 & 1) == 0) {
    (**(code **)(*(long *)puVar6[0x26] + 8))((long *)puVar6[0x26],5);
    FUN_10875edc8(puVar6,7);
  }
  else {
    uVar9 = puVar6[0xb];
    func_0x000107c278b8(&puStack_3c0,&DAT_10f4b36ec);
    plVar8 = alStack_348;
    func_0x000107c29e74();
    func_0x000107c278b8(&pcStack_138,(&PTR_DAT_110a6f8b0)[(ulong)plVar8 & 0xffffffff]);
    func_0x000107c28b34(uVar9,&puStack_3c0,&pcStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_3c0);
    in_ZR = lStack_208 == 1;
    if (0 < lStack_208) {
      lStack_158 = lStack_208;
    }
  }
  func_0x000107c288c8(&pcStack_360);
  if ((bStack_190 & 1) != 0) {
    func_0x00010878bf08(&pcStack_360);
    plVar8 = *(long **)(pcStack_360 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_3c0 = puVar11;
    puStack_3b8 = puVar7;
    (**(code **)(*plVar8 + 0x38))(plVar8,&pcStack_188,&puStack_3c0,puVar6 + 0x27);
    func_0x00010878be9c(&puStack_3c0);
    func_0x00010878bf34();
  }
  FUN_1088f9cb4(&pcStack_188);
  FUN_10878be74(&puStack_410);
  func_0x000107c297a4(&puStack_400);
  puVar6 = &uStack_3e0;
  func_0x000107c297a4(puVar6);
  func_0x00010878bed4(uStack_108);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010878be9c(&puStack_3c0);
    func_0x00010878bf34();
    FUN_1088f9cb4(&pcStack_188);
    FUN_10878be74(&puStack_410);
    func_0x000107c297a4(&puStack_400);
    do {
      func_0x000107c297a4(&uStack_3e0);
      __Unwind_Resume(puVar6);
    } while( true );
  }
  return puVar6;
}



/* Entry: 10878b3ac; end: 10878b897;  */

void FUN_10878b3ac(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 in_ZR;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  long lStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  long lStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined4 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  code *pcStack_2c0;
  undefined **ppuStack_2b8;
  undefined8 uStack_2b0;
  long alStack_2a8 [40];
  long lStack_168;
  byte bStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_b8;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_68;
  
  func_0x00010878bf10();
  uStack_68 = extraout_x8;
  func_0x000107c297b4(&uStack_340,param_1 + 8);
  lStack_330 = param_1;
  func_0x000107c297b4(&puStack_360,param_1 + 8);
  puStack_318 = puStack_358;
  puStack_320 = puStack_360;
  puStack_360 = (undefined8 *)0x0;
  puStack_358 = (undefined8 *)0x0;
  lStack_350 = param_1;
  lStack_310 = param_1;
  func_0x00010878bf08(&pcStack_2c0);
  lStack_300 = *(long *)(pcStack_2c0 + 600);
  uStack_308 = *(undefined8 *)(pcStack_2c0 + 0x250);
  if (*(long *)(pcStack_2c0 + 600) != 0) {
    do {
      func_0x00010878bec4();
    } while (extraout_w10 != 0);
  }
  uStack_2f8 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x00010878bf34();
  pcStack_98 = FUN_10878bcc0;
  ppuStack_90 = &PTR_FUN_110a6f818;
  puVar6 = (undefined8 *)0x30;
  __Znwm();
  puVar6[1] = puStack_318;
  *puVar6 = puStack_320;
  if (puStack_318 != (undefined8 *)0x0) {
    do {
      func_0x00010878bec4();
    } while (extraout_w10_00 != 0);
  }
  puVar6[3] = uStack_308;
  puVar6[2] = lStack_310;
  puVar6[4] = lStack_300;
  if (lStack_300 != 0) {
    do {
      func_0x00010878bec4();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(puVar6 + 5) = uStack_2f8;
  uVar8 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_2d0 = uVar8;
  lStack_2c8 = lVar1;
  puStack_88 = puVar6;
  if (lVar1 == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    do {
      func_0x00010878bec4();
    } while (extraout_w10_02 != 0);
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x00010878bec4();
    } while (extraout_w10_03 != 0);
  }
  puVar6 = (undefined8 *)0xb8;
  uStack_2f0 = uVar8;
  lStack_2e8 = lVar1;
  __Znwm();
  uVar5 = uStack_338;
  uVar4 = uStack_340;
  plVar9 = puVar6 + 1;
  *plVar9 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_110a6f6d8;
  pcStack_2c0 = FUN_10878b978;
  ppuStack_2b8 = &PTR_FUN_110a6f718;
  uStack_2f0 = 0;
  lStack_2e8 = 0;
  puVar10 = puVar6 + 3;
  *puVar10 = &PTR_FUN_110a6f7e0;
  pcStack_e8 = FUN_10878b9f8;
  ppuStack_e0 = &PTR_FUN_110a6f730;
  uStack_340 = 0;
  uStack_338 = 0;
  uStack_d0 = 0;
  lStack_c8 = lStack_330;
  puVar6[4] = FUN_10878b9f8;
  puVar6[5] = &PTR_FUN_110a6f730;
  puVar6[7] = uVar5;
  puVar6[6] = uVar4;
  uStack_d8 = 0;
  puVar6[8] = lStack_330;
  puVar6[10] = FUN_10878bcc0;
  uStack_2b0 = uVar8;
  alStack_2a8[0] = lVar1;
  (*(code *)ppuStack_90[2])(puVar6 + 0xb,&ppuStack_90);
  *puVar10 = &PTR_DAT_110a6f758;
  puVar6[0x10] = pcStack_2c0;
  (*(code *)ppuStack_2b8[2])(puVar6 + 0x11,&ppuStack_2b8);
  puVar6[0x16] = uVar11;
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  (*(code *)*ppuStack_2b8)(&ppuStack_2b8);
  func_0x000107c297a8(&uStack_2f0);
  uStack_2e0 = 0;
  uStack_2d8 = 0;
  puStack_370 = puVar10;
  puStack_368 = puVar6;
  FUN_10878be74(&uStack_2e0);
  func_0x000107c297a8(&uStack_2d0);
  func_0x00010878bef8();
  FUN_10878b928(&puStack_320);
  func_0x00010869fbb8(&pcStack_e8,param_1 + 0xe0);
  func_0x00010878bf08(&puStack_320);
  func_0x000107c29f64(&pcStack_2c0,puStack_320[0xc],param_1 + 0xb0,0);
  func_0x000107c297b0(&puStack_320);
  if ((bStack_f0 & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x130) + 8))(*(long **)(param_1 + 0x130),5);
    FUN_10875edc8(param_1,7);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c278b8(&puStack_320,&DAT_10f4b36ec);
    plVar7 = alStack_2a8;
    func_0x000107c29e74();
    func_0x000107c278b8(&pcStack_98,(&PTR_DAT_110a6f8b0)[(ulong)plVar7 & 0xffffffff]);
    func_0x000107c28b34(uVar8,&puStack_320,&pcStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_98);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_320);
    in_ZR = lStack_168 == 1;
    if (0 < lStack_168) {
      lStack_b8 = lStack_168;
    }
  }
  func_0x000107c288c8(&pcStack_2c0);
  if ((bStack_f0 & 1) != 0) {
    func_0x00010878bf08(&pcStack_2c0);
    plVar7 = *(long **)(pcStack_2c0 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puStack_320 = puVar10;
    puStack_318 = puVar6;
    (**(code **)(*plVar7 + 0x38))(plVar7,&pcStack_e8,&puStack_320,param_1 + 0x138);
    func_0x00010878be9c(&puStack_320);
    func_0x00010878bf34();
  }
  FUN_1088f9cb4(&pcStack_e8);
  FUN_10878be74(&puStack_370);
  func_0x000107c297a4(&puStack_360);
  puVar6 = &uStack_340;
  func_0x000107c297a4(puVar6);
  func_0x00010878bed4(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010878be9c(&puStack_320);
    func_0x00010878bf34();
    FUN_1088f9cb4(&pcStack_e8);
    FUN_10878be74(&puStack_370);
    func_0x000107c297a4(&puStack_360);
    do {
      func_0x000107c297a4(&uStack_340);
      __Unwind_Resume(puVar6);
    } while( true );
  }
  return;
}



/* Entry: 10878b898; end: 10878b89b;  */

undefined8 * FUN_10878b898(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6f668;
  func_0x00010086ab34(param_1 + 0x27);
  func_0x000108763d40(param_1 + 0x26);
  FUN_1088f9cb4(param_1 + 0x1c);
  func_0x000107c27914(param_1 + 0x19);
  func_0x000107c27914(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10878b89c; end: 10878b8af;  */

void FUN_10878b89c(void)

{
  FUN_10878bd80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878b8b0; end: 10878b927;  */

undefined1 * FUN_10878b8b0(undefined1 *param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long extraout_x9;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x00010878bf10();
  uStack_28 = extraout_x8;
  func_0x000107c27994(auStack_40,extraout_x9 + 0xb0);
  func_0x00010868c9c4(param_1,auStack_40,1);
  func_0x000107c27914();
  func_0x00010878bed4(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010878bf48();
  func_0x000107c27914();
  func_0x00010878bee8();
  func_0x000107c297ac(puVar1 + 0x18);
  func_0x000100562400();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10878b928; end: 10878b94f;  */

undefined8 FUN_10878b928(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10878b950; end: 10878b953;  */

void FUN_10878b950(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6f6d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10878b954; end: 10878b967;  */

void FUN_10878b954(void)

{
  FUN_10878bcb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878b968; end: 10878b977;  */

void FUN_10878b968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010878b970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10878b978; end: 10878b9d3;  */

long FUN_10878b978(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 10878b9d4; end: 10878b9f7;  */

void FUN_10878b9d4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10878b9f8; end: 10878baa3;  */

void FUN_10878b9f8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_30 [2];
  
  lVar1 = *(long *)(param_2 + 0x20);
  (**(code **)**(undefined8 **)(lVar1 + 0x130))(*(undefined8 **)(lVar1 + 0x130),param_1);
  if ((*(int *)(param_1 + 0x30) == 3) &&
     ((*(byte *)(*(long *)(param_1 + 0x28) + 0x10) >> 2 & 1) != 0)) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
    func_0x00010878bf08(alStack_30);
    (**(code **)(**(long **)(alStack_30[0] + 0x250) + 0x10))
              (*(long **)(alStack_30[0] + 0x250),uVar2,
               *(undefined4 *)(*(long *)(lVar1 + 0x58) + 0xfc));
    func_0x000107c297b0(alStack_30);
    FUN_108681988(*(undefined8 *)(lVar1 + 0x58),uVar2,1);
  }
  FUN_10875ec20(lVar1);
  return;
}



/* Entry: 10878baa4; end: 10878bad3;  */

void FUN_10878baa4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10878bad4; end: 10878bae7;  */

void FUN_10878bad4(void)

{
  func_0x00010878bc7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878bae8; end: 10878baff;  */

void FUN_10878bae8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 10878bb00; end: 10878bb43;  */

void FUN_10878bb00(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010878bf3c();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010878bb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 10878bb44; end: 10878bbeb;  */

void FUN_10878bb44(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x00010878bf3c();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 10878bbec; end: 10878bbef;  */

undefined8 * FUN_10878bbec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6f7e0;
  func_0x00010878bf2c(param_1[8]);
  func_0x00010878bf2c(param_1[2]);
  return param_1;
}



/* Entry: 10878bbf0; end: 10878bc03;  */

void FUN_10878bbf0(void)

{
  FUN_10878bc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10878bc04; end: 10878bc3f;  */

void FUN_10878bc04(void)

{
  return;
}



/* Entry: 10878bc40; end: 10878bcaf;  */

undefined8 * FUN_10878bc40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6f7e0;
  func_0x00010878bf2c(param_1[8]);
  func_0x00010878bf2c(param_1[2]);
  return param_1;
}



/* Entry: 10878bcb0; end: 10878bcbf;  */

void FUN_10878bcb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6f6d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10878bcc0; end: 10878bd47;  */

void FUN_10878bcc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_68 [72];
  
  lVar2 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_68,param_3);
  FUN_10875bbdc(auStack_68,*(undefined4 *)(lVar2 + 0x28),lVar2 + 0x18);
  lVar2 = *(long *)(lVar2 + 0x10);
  plVar1 = *(long **)(lVar2 + 0x130);
  (**(code **)(*plVar1 + 8))(plVar1,param_1);
  FUN_108770c94(param_1);
  FUN_10875ebcc(lVar2,param_1);
  func_0x000107c29564(auStack_68);
  return;
}



/* Entry: 10878bd48; end: 10878bd67;  */

void FUN_10878bd48(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10878b928();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10878bd68; end: 10878bd7f;  */

void FUN_10878bd68(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}


