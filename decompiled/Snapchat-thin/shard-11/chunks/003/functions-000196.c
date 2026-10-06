/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083b4660; end: 1083b467f;  */

undefined8 FUN_1083b4660(void)

{
  return 0;
}



/* Entry: 1083b4680; end: 1083b47b3;  */

undefined1  [16]
FUN_1083b4680(undefined8 param_1,long param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined1 ***pppuVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 **ppuStack_200;
  undefined1 *puStack_1f8;
  undefined1 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined1 *puStack_1e0;
  ulong uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 **ppuStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined1 auStack_19c [16];
  undefined1 uStack_18c;
  undefined1 auStack_188 [104];
  undefined1 *puStack_120;
  undefined1 auStack_118 [152];
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = auStack_118;
  puStack_68 = auStack_70;
  uVar1 = *(uint *)(param_2 + 0x30);
  uStack_78 = 0x200000000;
  uStack_60 = 0x200000000;
  puVar6 = param_3;
  puStack_120 = param_3;
  for (uVar10 = 0; (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != uVar10; uVar10 = uVar10 + 1) {
    FUN_108355e28(auStack_188,param_2,uVar10,param_3);
    auStack_19c[0] = 0;
    uStack_18c = 0;
    puVar6 = auStack_188;
    param_4 = auStack_19c;
    param_5 = 0;
    FUN_1083afa20(&puStack_120);
    FUN_1083414c4(auStack_188);
  }
  FUN_10835a4e8(param_1,&puStack_120);
  ppuVar3 = &puStack_120;
  FUN_108359fc8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    FUN_108359fc8(&puStack_120);
    ppuVar4 = ppuVar3;
    __Unwind_Resume();
    puStack_1d0 = (undefined1 *)&ppuStack_200;
    pcStack_1a8 = FUN_1083b47b4;
    iVar2 = *(int *)(ppuVar4 + 6);
    if (iVar2 < 1) {
      uStack_1c8 = 0;
      puStack_1d0 = (undefined1 *)0x0;
    }
    else {
      uVar7 = 0;
      ppuStack_200 = ppuVar4;
      puStack_1f8 = puVar6;
      puStack_1f0 = param_4;
      uStack_1e8 = param_5;
      puStack_1c0 = param_3;
      ppuStack_1b8 = ppuVar3;
      puStack_1b0 = &stack0xfffffffffffffff0;
      FUN_1083b48f0();
      uVar9 = 1;
      uStack_1c8 = uVar7;
      while (iVar8 = (int)uVar9, iVar2 != iVar8) {
        pppuVar5 = &ppuStack_200;
        FUN_1083b48f0();
        puStack_1e0 = (undefined1 *)pppuVar5;
        uStack_1d8 = uVar9;
        FUN_10838eae0(&puStack_1d0,&puStack_1e0);
        uVar9 = (ulong)(iVar8 + 1);
      }
    }
    auVar12._8_8_ = uStack_1c8;
    auVar12._0_8_ = puStack_1d0;
    return auVar12;
  }
  auVar11._8_8_ = puVar6;
  auVar11._0_8_ = ppuVar3;
  return auVar11;
}



/* Entry: 1083b47b4; end: 1083b4837;  */

undefined1  [16]
FUN_1083b47b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_40;
  ulong uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  plVar2 = &lStack_60;
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 < 1) {
    uStack_28 = 0;
    puStack_30 = (undefined1 *)0x0;
  }
  else {
    uVar3 = 0;
    lStack_60 = param_1;
    uStack_58 = param_2;
    uStack_50 = param_3;
    uStack_48 = param_4;
    FUN_1083b48f0();
    uVar5 = 1;
    puStack_30 = (undefined1 *)plVar2;
    uStack_28 = uVar3;
    while (iVar4 = (int)uVar5, iVar1 != iVar4) {
      plVar2 = &lStack_60;
      FUN_1083b48f0();
      puStack_40 = (undefined1 *)plVar2;
      uStack_38 = uVar5;
      FUN_10838eae0(&puStack_30,&puStack_40);
      uVar5 = (ulong)(iVar4 + 1);
    }
  }
  auVar6._8_8_ = uStack_28;
  auVar6._0_8_ = puStack_30;
  return auVar6;
}



/* Entry: 1083b4838; end: 1083b48ef;  */

void FUN_1083b4838(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  char cStack_51;
  long *plStack_50;
  ulong uStack_48;
  long *plStack_40;
  long lStack_38;
  
  iVar1 = *(int *)(param_2 + 0x30);
  cStack_51 = '\0';
  pcStack_60 = &cStack_51;
  if (iVar1 < 1) {
    plStack_40 = (long *)0x0;
    lStack_38 = 0;
  }
  else {
    plVar2 = &lStack_78;
    lVar3 = 0;
    lStack_78 = param_2;
    uStack_70 = param_3;
    uStack_68 = param_4;
    FUN_1083b492c();
    uVar6 = 1;
    plStack_40 = plVar2;
    lStack_38 = lVar3;
    while (iVar5 = (int)uVar6, iVar1 != iVar5) {
      plVar2 = &lStack_78;
      FUN_1083b492c();
      plStack_50 = plVar2;
      uStack_48 = uVar6;
      FUN_10838eae0(&plStack_40,&plStack_50);
      uVar6 = (ulong)(iVar5 + 1);
    }
    if (cStack_51 == '\x01') {
      uVar4 = 0;
      *(undefined1 *)param_1 = 0;
      goto LAB_1083b48d8;
    }
  }
  param_1[1] = lStack_38;
  *param_1 = (long)plStack_40;
  uVar4 = 1;
LAB_1083b48d8:
  *(undefined1 *)(param_1 + 2) = uVar4;
  return;
}



/* Entry: 1083b48f0; end: 1083b492b;  */

void FUN_1083b48f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  puVar1 = (undefined8 *)param_1[3];
  uStack_20 = *(undefined4 *)(puVar1 + 2);
  uStack_28 = puVar1[1];
  uStack_30 = *puVar1;
  FUN_108355d18(*param_1,param_2,param_1[1],param_1[2],&uStack_30);
  return;
}



/* Entry: 1083b492c; end: 1083b499b;  */

undefined1  [16] FUN_1083b492c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  puVar1 = (undefined8 *)param_1[2];
  uStack_48 = puVar1[1];
  uStack_50 = *puVar1;
  uStack_40 = *(undefined4 *)(puVar1 + 2);
  func_0x000108355db4(&uStack_38,*param_1,param_2,param_1[1],&uStack_50);
  if (cStack_28 != '\x01') {
    uStack_38 = 0;
    uStack_30 = 0;
    *(undefined1 *)param_1[3] = 1;
  }
  auVar2._8_8_ = uStack_30;
  auVar2._0_8_ = uStack_38;
  return auVar2;
}



/* Entry: 1083b499c; end: 1083b49d3;  */

void FUN_1083b499c(void)

{
  undefined1 auStack_28 [8];
  
  func_0x0001083b5670();
  FUN_1083b49d4(1,auStack_28);
  func_0x0001083b5588();
  return;
}



/* Entry: 1083b49d4; end: 1083b4b43;  */

void FUN_1083b49d4(undefined8 *param_1,float param_2,float param_3,undefined4 param_4,
                  undefined8 *param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((param_2 < 0.0) || (param_3 < 0.0)) {
    *param_1 = 0;
  }
  else {
    uVar2 = *param_5;
    *param_5 = 0;
    *param_1 = uVar2;
    if ((0.0 < param_2) || (0.0 < param_3)) {
      puVar1 = (undefined8 *)0x50;
      __Znwm();
      *param_1 = 0;
      uStack_60 = uVar2;
      FUN_108355794();
      *puVar1 = &PTR_FUN_110a416b0;
      *(undefined4 *)(puVar1 + 8) = param_4;
      *(float *)((long)puVar1 + 0x44) = param_2;
      *(float *)(puVar1 + 9) = param_3;
      uStack_58 = 0;
      FUN_108167c3c(param_1,puVar1);
      func_0x0001083b5604();
      FUN_10811e834(&uStack_60);
    }
    if (*(char *)(param_6 + 0x10) == '\x01') {
      uStack_68 = *param_1;
      *param_1 = 0;
      FUN_1083af024(&uStack_58,param_6,&uStack_68);
      uVar2 = uStack_58;
      uStack_58 = 0;
      FUN_108167c3c(param_1,uVar2);
      func_0x0001083b5604();
      func_0x0001083b5588();
    }
  }
  return;
}



/* Entry: 1083b4b44; end: 1083b4b7b;  */

void FUN_1083b4b44(void)

{
  undefined1 auStack_28 [8];
  
  func_0x0001083b5670();
  FUN_1083b49d4(0,auStack_28);
  func_0x0001083b5588();
  return;
}



/* Entry: 1083b4b7c; end: 1083b4b7f;  */

undefined8 * FUN_1083b4b7c(undefined8 *param_1)

{
  long *plStack_28;
  
  *param_1 = &PTR_DAT_110a3e8e8;
  FUN_108355f9c(&plStack_28,1);
  (**(code **)(*plStack_28 + 0x30))(plStack_28,param_1);
  func_0x000108355ecc();
  FUN_108355e78(param_1 + 2);
  return param_1;
}



/* Entry: 1083b4b80; end: 1083b4b93;  */

void FUN_1083b4b80(void)

{
  FUN_10835594c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083b4b94; end: 1083b4ba7;  */

undefined8 FUN_1083b4b94(void)

{
  return 0;
}



/* Entry: 1083b4ba8; end: 1083b4c8f;  */

void FUN_1083b4ba8(long param_1,long *param_2)

{
  FUN_1083559b0();
  func_0x0001083b55f4(*(undefined4 *)(param_1 + 0x44));
  func_0x0001083b55f4(*(undefined4 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0001083b4be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,*(undefined4 *)(param_1 + 0x40));
  return;
}



/* Entry: 1083b4c90; end: 1083b4e63;  */

void FUN_1083b4c90(undefined8 *param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  undefined1 auStack_298 [104];
  ulong uStack_230;
  long lStack_228;
  ulong uStack_218;
  long lStack_210;
  ulong auStack_208 [25];
  ulong uStack_140;
  long lStack_138;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar4 = param_3 + 8;
  uVar2 = param_2;
  FUN_1083b4f5c(param_2,lVar4,*(undefined8 *)(param_3 + 200),*(undefined8 *)(param_3 + 0xd0));
  func_0x0001083b5590();
  uStack_140 = uVar2;
  lStack_138 = lVar4;
  FUN_108355e28(&uStack_b8,param_2,0,auStack_208);
  func_0x0001083b55d8();
  lVar4 = param_3 + 8;
  uVar2 = param_2;
  FUN_1083b4f90(param_2,lVar4,uStack_60,uStack_58);
  puVar3 = &uStack_218;
  uStack_218 = uVar2;
  lStack_210 = lVar4;
  func_0x00010821b838(puVar3,(undefined8 *)(param_3 + 200));
  if (((ulong)puVar3 & 1) == 0) {
    FUN_10833dd8c(param_1);
  }
  else {
    uVar2 = param_2;
    FUN_1083b4fe4(param_2,param_3 + 8);
    lStack_228 = lStack_210;
    uStack_230 = uStack_218;
    auStack_208[0] = uVar2 & 0xffffffff00000000;
    FUN_10833e0cc(&uStack_230,auStack_208);
    func_0x0001083b5590();
    lStack_138 = lStack_228;
    uStack_140 = uStack_230;
    FUN_1083b5034(auStack_298,auStack_208,&uStack_b8,*(undefined4 *)(param_2 + 0x40),0,uVar2);
    func_0x0001083b565c();
    func_0x0001083b5648();
    func_0x0001083b55d8();
    func_0x0001083b5590();
    lStack_138 = lStack_210;
    uStack_140 = uStack_218;
    FUN_1083b5034(auStack_298,auStack_208,&uStack_b8,*(undefined4 *)(param_2 + 0x40),1,uVar2 >> 0x20
                 );
    func_0x0001083b565c();
    func_0x0001083b5648();
    func_0x0001083b55d8();
    uVar1 = uStack_b8;
    uStack_b8 = 0;
    *param_1 = uVar1;
    _memcpy(param_1 + 1,auStack_b0,0x48);
    uVar1 = uStack_68;
    uStack_68 = 0;
    param_1[10] = uVar1;
    param_1[0xc] = uStack_58;
    param_1[0xb] = uStack_60;
  }
  FUN_1083414c4(&uStack_b8);
  return;
}



/* Entry: 1083b4e64; end: 1083b4f5b;  */

void FUN_1083b4e64(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  uVar2 = param_2;
  FUN_1083b4f5c(param_1,param_2,*param_3,param_3[1]);
  uStack_58 = param_4[1];
  uStack_60 = *param_4;
  uStack_50 = *(undefined4 *)(param_4 + 2);
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  FUN_108355d18(param_1,0,param_2,&uStack_40,&uStack_60);
  return;
}



/* Entry: 1083b4f5c; end: 1083b4f8f;  */

undefined1  [16]
FUN_1083b4f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_4;
  FUN_1083b4fe4();
  uStack_28 = param_1;
  FUN_10833e0cc(&uStack_20,&uStack_28);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 1083b4f90; end: 1083b4fe3;  */

undefined1  [16]
FUN_1083b4f90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  long lVar2;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = param_1;
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_1083b4fe4();
  lStack_38 = lVar2;
  if (*(int *)(param_1 + 0x40) == 1) {
    FUN_10833e0cc();
  }
  else {
    FUN_108357d10(&uStack_30,&lStack_38);
  }
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = uStack_30;
  return auVar1;
}



/* Entry: 1083b4fe4; end: 1083b5033;  */

undefined8 FUN_1083b4fe4(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_1083b0774(param_4,param_3 + 0x44);
  puVar2 = &uStack_18;
  uStack_18 = param_1;
  uStack_14 = param_2;
  FUN_10835782c();
  iVar1 = (int)puVar2;
  if (0xff < (int)puVar2) {
    iVar1 = 0x100;
  }
  iVar3 = (int)((ulong)puVar2 >> 0x20);
  if (0xff < iVar3) {
    iVar3 = 0x100;
  }
  return CONCAT44(iVar3,iVar1);
}



/* Entry: 1083b5034; end: 1083b5587;  */

long ** FUN_1083b5034(long *param_1,long param_2,undefined8 param_3,int param_4,int param_5,
                     int param_6)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int **ppiVar12;
  long lVar13;
  long **pplVar14;
  undefined1 *puVar15;
  int ***pppiVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  undefined4 uVar21;
  long *plStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 uStack_480;
  undefined8 auStack_420 [25];
  undefined8 uStack_358;
  undefined8 uStack_350;
  int iStack_2cc;
  long *plStack_2c8;
  undefined1 auStack_2c0 [72];
  long lStack_278;
  long lStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  int iStack_24c;
  int **ppiStack_248;
  undefined1 *puStack_240;
  int *piStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [16];
  int *piStack_218;
  long lStack_210;
  undefined1 auStack_208 [16];
  undefined1 uStack_1f8;
  int *piStack_1e0;
  undefined1 auStack_1d8 [152];
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [8];
  undefined1 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_258 = *(undefined8 *)(param_2 + 0xd0);
  uStack_260 = *(undefined8 *)(param_2 + 200);
  bVar11 = param_5 == 0;
  iVar20 = param_6;
  if (!bVar11) {
    iVar20 = 0;
  }
  iVar5 = 0;
  if (!bVar11) {
    iVar5 = param_6;
  }
  auStack_420[0] = CONCAT44(iVar5,iVar20);
  plStack_498 = param_1;
  iStack_24c = param_6;
  FUN_10833e0cc(&uStack_260,auStack_420);
  FUN_108341774(&plStack_2c8,param_3);
  iStack_2cc = 0;
  uVar21 = 0x3f800000;
  if (param_4 != 1) {
    uVar21 = 0xbf800000;
  }
  piVar2 = &iStack_24c;
  if (0xd < param_6) {
    piVar2 = (int *)&UNK_10df201f0;
  }
  iVar20 = 0;
  do {
    plVar6 = plStack_2c8;
    plVar1 = plStack_498;
    iVar5 = param_6 - iVar20;
    if (iVar5 == 0 || param_6 < iVar20) {
      plStack_2c8 = (long *)0x0;
      *plStack_498 = (long)plVar6;
      _memcpy(plStack_498 + 1,auStack_2c0,0x48);
      lVar13 = lStack_278;
      lStack_278 = 0;
      plVar1[10] = lVar13;
      plVar1[0xc] = lStack_268;
      plVar1[0xb] = lStack_270;
LAB_1083b546c:
      pplVar14 = &plStack_2c8;
      FUN_1083414c4();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
        return pplVar14;
      }
      ___stack_chk_fail();
      FUN_1083414c4(&plStack_2c8);
      func_0x0001083b55ec();
      if (plStack_498 != (long *)0x0) {
        plVar1 = plStack_498 + 1;
        do {
          iVar20 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *(int *)plVar1 = iVar20;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar20 == 0) {
          (**(code **)(*plStack_498 + 0x10))();
        }
      }
      return &plStack_498;
    }
    if (plStack_2c8 == (long *)0x0) {
      FUN_10833dd8c(plStack_498);
      goto LAB_1083b546c;
    }
    piVar19 = piVar2;
    if (iVar20 != 0) {
      auStack_420[0] = CONCAT44(auStack_420[0]._4_4_,iVar5);
      piVar19 = &iStack_2cc;
      if (iVar5 <= iVar20) {
        piVar19 = (int *)auStack_420;
      }
    }
    iVar3 = *piVar19;
    FUN_1083415ec(auStack_420,param_2);
    iVar5 = iVar3 + iVar20;
    if (iVar5 < param_6) {
      uStack_488 = uStack_258;
      uStack_490 = uStack_260;
      iVar17 = iVar3;
      if (param_5 != 0) {
        iVar17 = 0;
      }
      iVar18 = 0;
      if (param_5 != 0) {
        iVar18 = iVar3;
      }
      piStack_1e0 = (int *)CONCAT44(iVar18,iVar17);
      FUN_108357d10(&uStack_490,&piStack_1e0);
      FUN_1083415ec(&piStack_1e0,param_2);
      uStack_110 = uStack_488;
      uStack_118 = uStack_490;
      FUN_10833dee0(auStack_420,&piStack_1e0);
      FUN_108341670(&piStack_1e0);
    }
    uStack_138 = 0x200000000;
    uStack_120 = 0x200000000;
    uStack_488 = uStack_258;
    uStack_490 = uStack_260;
    uStack_480 = 1;
    piStack_1e0 = (int *)auStack_420;
    puStack_140 = auStack_1d8;
    puStack_128 = auStack_130;
    FUN_1083afa20(&piStack_1e0,&plStack_2c8,&uStack_490,1,&UNK_10df1cb00);
    auStack_208[0] = 0;
    uStack_1f8 = 0;
    ppiVar12 = &piStack_1e0;
    puVar15 = auStack_208;
    FUN_10835a390();
    bVar8 = false;
    bVar9 = true;
    bVar10 = false;
    if ((int)ppiVar12 < (int)puVar15) {
      iVar17 = (int)((ulong)ppiVar12 >> 0x20);
      iVar18 = (int)((ulong)puVar15 >> 0x20);
      bVar10 = SBORROW4(iVar18,iVar17);
      bVar8 = iVar18 - iVar17 < 0;
      bVar9 = iVar18 == iVar17;
    }
    ppiStack_248 = ppiVar12;
    puStack_240 = puVar15;
    if (bVar9 || bVar8 != bVar10) {
      FUN_10833dd8c(&uStack_490);
    }
    else {
      ppiVar12 = &piStack_1e0;
      pppiVar16 = &ppiStack_248;
      FUN_108359ff4(ppiVar12,pppiVar16,0);
      if (iVar20 == 0) {
        if (pppiVar16 == (int ***)0x0) goto LAB_1083b54b4;
        piStack_238 = *ppiVar12;
        if (piStack_238 != (int *)0x0) {
          piVar19 = piStack_238 + 2;
          do {
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar8) {
              *piVar19 = *piVar19 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar13 = 0x205;
        FUN_10835c894();
        if (lVar13 != 0) {
          piVar19 = (int *)(lVar13 + 8);
          do {
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar8) {
              *piVar19 = *piVar19 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lStack_210 = lVar13;
        func_0x0001083b5628();
        func_0x0001083b5668();
        piStack_218 = piStack_238;
        piStack_238 = (int *)0x0;
        func_0x0001083b55c4();
        func_0x0001083b55e0();
        func_0x0001083b5650();
        func_0x0001083b5640();
        uStack_230 = CONCAT44(-(uint)((int)((uint)bVar11 << 0x1f) < 0),
                              -(uint)((int)((uint)bVar11 << 0x1f) < 0)) & 0x3f8000003f800000 ^
                     0x3f80000000000000;
        func_0x0001083b55b0();
        func_0x0001083b55e0();
        func_0x0001083b561c();
        FUN_10816a4f0();
        uStack_230._0_4_ = (float)uVar21;
        func_0x0001083b559c();
        func_0x0001083b55e0();
        func_0x0001083b561c();
        func_0x000108165c7c();
        uStack_230 = CONCAT44(uStack_230._4_4_,iVar3);
        func_0x000108165c0c(auStack_208,"radius",6);
        func_0x0001083b55e0();
        func_0x0001083b561c();
        FUN_1083b3f20();
        func_0x0001083b560c();
      }
      else {
        if (pppiVar16 == (int ***)0x0) {
LAB_1083b54b4:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1083b54b8);
          (*pcVar7)();
        }
        piStack_238 = *ppiVar12;
        if (piStack_238 != (int *)0x0) {
          piVar19 = piStack_238 + 2;
          do {
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar8) {
              *piVar19 = *piVar19 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar13 = 0x20b;
        FUN_10835c894();
        if (lVar13 != 0) {
          piVar19 = (int *)(lVar13 + 8);
          do {
            cVar4 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar8) {
              *piVar19 = *piVar19 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lStack_210 = lVar13;
        func_0x0001083b5628();
        func_0x0001083b5668();
        piStack_218 = piStack_238;
        piStack_238 = (int *)0x0;
        func_0x0001083b55c4();
        func_0x0001083b55e0();
        func_0x0001083b5650();
        func_0x0001083b5640();
        uStack_230._4_4_ = 0.0;
        uStack_230._0_4_ = (float)iVar3;
        if (param_5 != 0) {
          uStack_230._4_4_ = (float)iVar3;
          uStack_230._0_4_ = 0.0;
        }
        func_0x0001083b55b0();
        func_0x0001083b55e0();
        func_0x0001083b561c();
        FUN_10816a4f0();
        uStack_230 = CONCAT44(uStack_230._4_4_,uVar21);
        func_0x0001083b559c();
        func_0x0001083b55e0();
        func_0x0001083b561c();
        func_0x000108165c7c();
        func_0x0001083b560c();
      }
      FUN_108166068(auStack_208);
      func_0x000106f47224(&piStack_238);
      FUN_10835a3d8(&uStack_490,&piStack_1e0,auStack_228,&ppiStack_248,0);
      func_0x000106f47224(auStack_228);
    }
    FUN_10833de08(&plStack_2c8,&uStack_490);
    FUN_1083414c4(&uStack_490);
    uStack_258 = uStack_350;
    uStack_260 = uStack_358;
    iStack_2cc = iVar5;
    FUN_108359fc8(&piStack_1e0);
    FUN_108341670(auStack_420);
    iVar20 = iVar5;
  } while( true );
}



/* Entry: 1083b5588; end: 1083b5683;  */

undefined8 * FUN_1083b5588(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *in_stack_00000008;
  
  if (in_stack_00000008 != (long *)0x0) {
    plVar1 = in_stack_00000008 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*in_stack_00000008 + 0x10))();
    }
  }
  return &stack0x00000008;
}



/* Entry: 1083b5684; end: 1083b57b7;  */

void FUN_1083b5684(undefined8 *param_1,long *param_2,undefined1 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)0x50;
    __Znwm();
    *param_2 = 0;
    lStack_48 = lVar3;
    FUN_108355794();
    *puVar2 = &PTR_FUN_110a41750;
    lStack_48 = 0;
    puVar2[8] = lVar3;
    *(undefined1 *)(puVar2 + 9) = param_3;
    *param_1 = puVar2;
    func_0x000106f47224(&lStack_48);
    if (*(char *)(param_4 + 0x10) == '\x01') {
      *param_1 = 0;
      puStack_58 = puVar2;
      FUN_1083af024(&uStack_50,param_4,&puStack_58);
      uVar1 = uStack_50;
      uStack_50 = 0;
      FUN_108167c3c(param_1,uVar1);
      FUN_10811e834(&uStack_50);
      FUN_10811e834(&puStack_58);
    }
    return;
  }
  FUN_1083b0cc8(param_1,&stack0xffffffffffffffd0,3,&stack0xffffffffffffffc8);
  FUN_1083b119c();
  return;
}



/* Entry: 1083b57b8; end: 1083b57df;  */

undefined8 * FUN_1083b57b8(undefined8 *param_1)

{
  long *plStack_28;
  
  func_0x000106f47224(param_1 + 8);
  *param_1 = &PTR_DAT_110a3e8e8;
  FUN_108355f9c(&plStack_28,1);
  (**(code **)(*plStack_28 + 0x30))(plStack_28,param_1);
  func_0x000108355ecc();
  FUN_108355e78(param_1 + 2);
  return param_1;
}



/* Entry: 1083b57e0; end: 1083b57f3;  */

void FUN_1083b57e0(void)

{
  FUN_1083b57b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083b57f4; end: 1083b5807;  */

undefined8 FUN_1083b57f4(void)

{
  return 0;
}



/* Entry: 1083b5808; end: 1083b584f;  */

void FUN_1083b5808(long param_1,long *param_2)

{
  FUN_1083559b0();
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001083b584c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2,*(undefined1 *)(param_1 + 0x48));
  return;
}



/* Entry: 1083b5850; end: 1083b5873;  */

undefined8 FUN_1083b5850(void)

{
  return 0xce000000ce000000;
}



/* Entry: 1083b5874; end: 1083b58e3;  */

void FUN_1083b5874(long param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  long lStack_28;
  
  uVar2 = *(undefined1 *)(param_1 + 0x48);
  lStack_28 = *(long *)(param_1 + 0x40);
  if (lStack_28 != 0) {
    piVar1 = (int *)(lStack_28 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_108359b5c(param_2,&lStack_28,uVar2);
  func_0x000106f47224(&lStack_28);
  return;
}



/* Entry: 1083b58e4; end: 1083b58fb;  */

undefined1  [16] FUN_1083b58e4(void)

{
  return ZEXT816(0);
}



/* Entry: 1083b58fc; end: 1083b594b;  */

undefined8 * FUN_1083b58fc(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 1) = 1;
  iVar1 = (int)param_1 + 0x10;
  *param_1 = &PTR_FUN_110a41808;
  FUN_10814102c();
  if (param_3 == 0) {
    param_3 = iVar1;
    func_0x000108383c38();
  }
  *(int *)(param_1 + 5) = param_3;
  return param_1;
}



/* Entry: 1083b594c; end: 1083b59af;  */

long * FUN_1083b594c(long *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  puVar1 = &uStack_50;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = (undefined8 *)param_2;
  }
  (**(code **)(*param_1 + 0x68))(param_1,puVar1);
  FUN_10810a400(&uStack_40);
  return param_1;
}



/* Entry: 1083b59b0; end: 1083b5a27;  */

void FUN_1083b59b0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x0001083b5f74();
                    /* WARNING: Could not recover jumptable at 0x0001083b5a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1083b5a28; end: 1083b5b57;  */

long * FUN_1083b5a28(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long alStack_a0 [6];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar3 = alStack_a0;
  plVar1 = param_1;
  func_0x0001083b5f74();
  if (((int)param_1[4] == *(int *)(param_2 + 4)) &&
     (*(int *)((long)param_1 + 0x24) == *(int *)((long)param_2 + 0x24))) {
                    /* WARNING: Could not recover jumptable at 0x0001083b5f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x78))(param_1,plVar1,param_2 + 2,*param_2,param_2[1],0,0,param_4);
    return param_1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  (**(code **)(*param_1 + 0xd0))(param_1,plVar1,&uStack_70,param_4);
  if ((int)param_1 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    alStack_a0[4] = 0;
    alStack_a0[1] = 0;
    alStack_a0[0] = 0;
    alStack_a0[3] = 0;
    alStack_a0[2] = 0;
    puVar2 = &uStack_70;
    FUN_108330de8(puVar2,alStack_a0);
    if ((int)puVar2 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      FUN_10838463c(alStack_a0,param_2,param_3);
    }
    FUN_10810a400(alStack_a0 + 2);
  }
  FUN_108330548(&uStack_70);
  return plVar3;
}



/* Entry: 1083b5b58; end: 1083b5b6b;  */

void FUN_1083b5b58(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0001083b5f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))
            (param_1,param_2,param_3 + 2,*param_3,param_3[1],param_4,param_5,param_6);
  return;
}



/* Entry: 1083b5b6c; end: 1083b5bbb;  */

void FUN_1083b5b6c(long param_1)

{
  int extraout_w11;
  long lStack_28;
  
  if (param_1 != 0) {
    do {
      func_0x0001083b5f44();
    } while (extraout_w11 != 0);
  }
  lStack_28 = param_1;
  func_0x0001083b5f54(&lStack_28,0,0);
  func_0x0001083b5f34();
  return;
}



/* Entry: 1083b5bbc; end: 1083b5bfb;  */

void FUN_1083b5bbc(long param_1)

{
  int extraout_w11;
  long lStack_28;
  
  if (param_1 != 0) {
    do {
      func_0x0001083b5f44();
    } while (extraout_w11 != 0);
  }
  lStack_28 = param_1;
  func_0x0001083b5f54(&lStack_28);
  func_0x0001083b5f34();
  return;
}



/* Entry: 1083b5bfc; end: 1083b5c3b;  */

void FUN_1083b5bfc(long param_1)

{
  int extraout_w11;
  long lStack_28;
  
  if (param_1 != 0) {
    do {
      func_0x0001083b5f44();
    } while (extraout_w11 != 0);
  }
  lStack_28 = param_1;
  func_0x0001083b5f54(&lStack_28);
  func_0x0001083b5f34();
  return;
}



/* Entry: 1083b5c3c; end: 1083b5c8b;  */

void FUN_1083b5c3c(long param_1)

{
  int extraout_w11;
  long lStack_28;
  
  if (param_1 != 0) {
    do {
      func_0x0001083b5f44();
    } while (extraout_w11 != 0);
  }
  lStack_28 = param_1;
  FUN_1083bb2b0(&lStack_28,0,0);
  func_0x0001083b5f34();
  return;
}



/* Entry: 1083b5c8c; end: 1083b5e67;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083b5c8c(ulong *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long alStack_d8 [4];
  long lStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long alStack_88 [7];
  
  alStack_88[5] = 0;
  alStack_88[2] = 0;
  alStack_88[1] = 0;
  alStack_88[4] = 0;
  alStack_88[3] = 0;
  plVar5 = param_2;
  FUN_1083b594c(param_2,alStack_88 + 1);
  if ((int)plVar5 == 0) {
    plVar5 = param_2 + 2;
    func_0x0001078bdb50(plVar5);
    plVar6 = param_2 + 2;
    func_0x00010835c6b0(plVar6,plVar5);
    if (plVar6 == (long *)0xffffffffffffffff) {
      *param_1 = 0;
    }
    else {
      if (param_3 == (long *)0x0) {
        param_3 = param_2;
        (**(code **)(*param_2 + 0xc0))(param_2);
      }
      FUN_1083464d4(alStack_88,plVar6);
      alStack_d8[1] = 0;
      alStack_d8[2] = 0;
      lVar1 = param_2[3];
      lVar2 = param_2[4];
      uVar7 = *(undefined8 *)(alStack_88[0] + 0x18);
      plVar6 = param_2 + 2;
      alStack_d8[3] = lVar1;
      lStack_b8 = lVar2;
      func_0x0001078bdb50();
      uStack_a0 = 0;
      uStack_b0 = uVar7;
      plStack_a8 = plVar6;
      lStack_98 = lVar1;
      lStack_90 = lVar2;
      FUN_10827c3e4(alStack_88 + 1,&uStack_b0);
      FUN_10810a400(&uStack_a0);
      FUN_10810a400(alStack_d8 + 2);
      FUN_10810a400(alStack_d8 + 1);
      plVar6 = param_2;
      FUN_1083b5b58(param_2,param_3,alStack_88 + 1,0,0,param_4);
      lVar1 = alStack_88[0];
      if (((ulong)plVar6 & 1) == 0) {
        *param_1 = 0;
      }
      else {
        alStack_88[0] = 0;
        alStack_d8[0] = lVar1;
        FUN_1083b81f0(param_1,param_2 + 2,alStack_d8,plVar5);
        func_0x0001078bddf8(alStack_d8);
      }
      func_0x0001078bddf8(alStack_88);
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      plVar5 = param_2 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *(int *)plVar5 = (int)*plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    *param_1 = (ulong)param_2;
  }
  func_0x0001083b5f5c();
  return;
}



/* Entry: 1083b5e68; end: 1083b5f13;  */

void FUN_1083b5e68(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lStack_38;
  
  lVar5 = *param_3;
  if ((lVar5 == 0) || (lVar4 = lVar5, FUN_108368a58(lVar5,param_2 + 2), (int)lVar4 != 0)) {
    *param_3 = 0;
    lStack_38 = lVar5;
    (**(code **)(*param_2 + 0x110))(param_1,param_2,&lStack_38);
    FUN_1082a619c(&lStack_38);
    if (*param_1 != 0) {
      return;
    }
    func_0x000106f47184(param_1);
  }
  plVar1 = param_2 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *param_1 = (long)param_2;
  return;
}



/* Entry: 1083b5f14; end: 1083b5f7f;  */

void FUN_1083b5f14(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1083b5f18);
  (*pcVar1)();
}



/* Entry: 1083b5f80; end: 1083b5fa3;  */

void FUN_1083b5f80(undefined8 *param_1)

{
  FUN_1083b58fc();
  *param_1 = &PTR_DAT_110a41880;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  return;
}



/* Entry: 1083b5fa4; end: 1083b5feb;  */

undefined8 * FUN_1083b5fa4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a41880;
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    func_0x0001083313e0(*(undefined4 *)(param_1 + 5));
  }
  *param_1 = &PTR_FUN_110a41808;
  FUN_10810a400(param_1 + 2);
  return param_1;
}



/* Entry: 1083b5fec; end: 1083b601f;  */

undefined8 * FUN_1083b5fec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a41808;
  FUN_10810a400(param_1 + 2);
  return param_1;
}



/* Entry: 1083b6020; end: 1083b61ff;  */

void FUN_1083b6020(long *param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined1 auStack_138 [56];
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  plVar2 = param_1;
  FUN_1083b594c(param_1,&uStack_d0);
  if ((int)plVar2 == 0) {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0xc0))(param_1);
    uStack_f8 = 0;
    if (param_1[2] != 0) {
      do {
        func_0x0001083b6684();
        uStack_f8 = extraout_x8;
      } while (extraout_w10 != 0);
    }
    lStack_f0 = param_1[3];
    uStack_e8 = param_4 - (param_3 & 0xffffffff00000000) & 0xffffffff00000000 |
                (ulong)(uint)((int)param_4 - (int)param_3);
    FUN_1083306e4(&uStack_a0,&uStack_f8,0);
    FUN_10810a400(&uStack_f8);
    FUN_1083309b4(&uStack_a0);
    FUN_1083b5b58(param_1,plVar2,(ulong)&uStack_a0 | 8,param_3,param_3 >> 0x20,0);
    if (((ulong)param_1 & 1) == 0) {
      lStack_100 = 0;
      (*param_7)(param_8,&lStack_100);
      lVar1 = lStack_100;
      lStack_100 = 0;
      if (lVar1 != 0) {
        func_0x0001083b6658();
      }
      goto LAB_1083b6160;
    }
    param_3 = 0;
    param_4 = lStack_78;
  }
  else {
    FUN_108330c70(&uStack_a0,&uStack_d0);
  }
  uStack_e0 = param_3;
  lStack_d8 = param_4;
  FUN_10833043c(auStack_138,&uStack_a0);
  FUN_1083b85a0(auStack_138,param_2,&uStack_e0,param_5,param_6,param_7,param_8);
  FUN_108330548(auStack_138);
LAB_1083b6160:
  func_0x0001083b6694();
  FUN_108330548(&uStack_a0);
  return;
}



/* Entry: 1083b6200; end: 1083b62db;  */

undefined8 FUN_1083b6200(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001078bdd84(auStack_60,param_1 + 2,4);
  uStack_48 = 0;
  uStack_38 = uStack_50;
  uStack_40 = uStack_58;
  func_0x0001083b666c();
  FUN_10810a400(auStack_60);
  plVar1 = param_3;
  func_0x00010821afec(param_3,&uStack_48);
  if (((ulong)plVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3 + 3,param_3[1],param_3[2],0,0,0);
    if (((ulong)param_1 & 1) != 0) {
      if (*param_3 != 0) {
        *(undefined1 *)(*param_3 + 0x59) = 2;
      }
      uVar2 = 1;
      goto LAB_1083b62ac;
    }
    func_0x0001083306b0(param_3);
  }
  uVar2 = 0;
LAB_1083b62ac:
  FUN_10810a400(&uStack_48);
  return uVar2;
}



/* Entry: 1083b62dc; end: 1083b637f;  */

void FUN_1083b62dc(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int extraout_w10;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = param_4;
  FUN_10821a6d8();
  if ((int)uVar1 == 0) {
    lStack_38 = param_2[4];
    uStack_40 = 0;
    puVar2 = &uStack_40;
    func_0x000108219544(puVar2,param_4);
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = &uStack_40;
      FUN_108279bb8(puVar2,param_4);
      if ((int)puVar2 != 0) {
        do {
          func_0x0001083b6684();
        } while (extraout_w10 != 0);
        func_0x0001083b6674();
        return;
      }
      (**(code **)(*param_2 + 0xd8))(param_1,param_2,param_3,param_4);
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1083b6380; end: 1083b640f;  */

void FUN_1083b6380(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = 0;
  uVar1 = param_4;
  FUN_10821a6d8();
  if ((int)uVar1 == 0) {
    lStack_48 = param_2[4];
    uStack_50 = 0;
    func_0x000108219544(&uStack_50,param_4);
    if ((uVar2 & 1) != 0) {
      (**(code **)(*param_2 + 0x118))(param_1,param_2,param_3,param_4,param_5);
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1083b6410; end: 1083b645f;  */

void FUN_1083b6410(void)

{
  long lVar1;
  code *in_stack_00000008;
  undefined8 in_stack_00000010;
  long lStack_28;
  
  lStack_28 = 0;
  (*in_stack_00000008)(in_stack_00000010,&lStack_28);
  lVar1 = lStack_28;
  lStack_28 = 0;
  if (lVar1 != 0) {
    func_0x0001083b6658();
  }
  return;
}



/* Entry: 1083b6460; end: 1083b64ab;  */

void FUN_1083b6460(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = param_1[3];
  uStack_28 = *param_3;
  *param_3 = 0;
  (**(code **)(*param_1 + 0x58))(param_1,param_2,(int)lVar1,&uStack_28);
  func_0x0001083b666c();
  return;
}



/* Entry: 1083b64ac; end: 1083b64ff;  */

void FUN_1083b64ac(long *param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uStack_28;
  
  lVar1 = param_1[3];
  uStack_28 = *param_3;
  *param_3 = 0;
  (**(code **)(*param_1 + 0x60))(param_1,param_2,(int)lVar1,&uStack_28,param_4);
  func_0x0001083b666c();
  return;
}



/* Entry: 1083b6500; end: 1083b6603;  */

void FUN_1083b6500(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  int extraout_w10;
  long alStack_60 [2];
  
  if (((int)param_4 == 0) || (alStack_60[0] = *param_5, alStack_60[0] == 0)) {
    *param_1 = 0;
    return;
  }
  lVar1 = param_2[3];
  uVar3 = param_2[2];
  if (uVar3 == 0) {
    FUN_108343afc();
    alStack_60[0] = *param_5;
  }
  if ((int)lVar1 == (int)param_4) {
    FUN_108343f98();
    if ((uVar3 & 1) == 0) {
      if (0x1a < *(uint *)(param_2 + 3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1083b65f4);
        (*pcVar2)();
      }
      if ((1 << (ulong)(*(uint *)(param_2 + 3) & 0x1f) & 0x7affffdU) != 0) goto LAB_1083b65a4;
    }
    do {
      func_0x0001083b6684();
    } while (extraout_w10 != 0);
    func_0x0001083b6674();
  }
  else {
LAB_1083b65a4:
    *param_5 = 0;
    (**(code **)(*param_2 + 0x100))(param_1,param_2,param_4,alStack_60,param_3);
    FUN_10810a400(alStack_60);
  }
  return;
}



/* Entry: 1083b6604; end: 1083b664b;  */

void FUN_1083b6604(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_4;
  *param_4 = 0;
  (**(code **)(*param_1 + 0x58))(param_1,0,param_3,&uStack_28);
  func_0x0001083b666c();
  return;
}



/* Entry: 1083b664c; end: 1083b669f;  */

void FUN_1083b664c(void)

{
  return;
}



/* Entry: 1083b66a0; end: 1083b66f7;  */

void FUN_1083b66a0(undefined8 *param_1,long *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)0x20;
    __Znwm();
    *param_2 = 0;
    *puVar1 = 1;
    *(long *)(puVar1 + 2) = lVar2;
    puVar1[4] = 1;
    *(undefined1 *)(puVar1 + 5) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 1083b66f8; end: 1083b6843;  */

long * FUN_1083b66f8(long *param_1,long *param_2,int *param_3,long *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  int extraout_w10;
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  
  lVar4 = *param_2;
  *param_2 = 0;
  *param_1 = lVar4;
  plVar3 = param_1 + 1;
  param_1[2] = 0;
  *plVar3 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  if (lVar4 == 0) {
    return param_1;
  }
  plVar2 = plVar3;
  func_0x000108152830(plVar3,*(long *)(lVar4 + 8) + 8);
  if (((int)param_1[3] < 1) || (*(int *)((long)param_1 + 0x1c) < 1)) {
    lVar4 = *param_1;
    *param_1 = 0;
    func_0x0001083b7318(lVar4);
    return param_1;
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(*(long *)(*param_1 + 8) + 0x20);
  if ((param_3 == (int *)0x0) || (*param_3 == (int)param_1[2])) {
    plVar3 = plVar2;
    if (*param_4 == 0) {
      return param_1;
    }
  }
  else {
    func_0x0001078bdd84(auStack_48);
    func_0x0001083b744c();
    func_0x0001083b7444();
    uVar1 = SUB84(plVar3,0);
    if (*param_4 == 0) goto LAB_1083b67dc;
  }
  do {
    func_0x0001083b7394();
    uVar1 = SUB84(plVar3,0);
  } while (extraout_w10 != 0);
  lStack_38 = param_1[3];
  lStack_40 = param_1[2];
  func_0x0001083b744c();
  func_0x0001083b7444();
  func_0x0001083b7430();
LAB_1083b67dc:
  func_0x000108383c38();
  *(undefined4 *)(param_1 + 5) = uVar1;
  return param_1;
}



/* Entry: 1083b6844; end: 1083b68b3;  */

void FUN_1083b6844(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_1083b5f80(param_1,param_2 + 1,*(undefined4 *)(param_2 + 5));
  *param_1 = &PTR_FUN_110a419c8;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  param_1[0xb] = 0;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0x200000000;
  return;
}



/* Entry: 1083b68b4; end: 1083b6a6f;  */

void FUN_1083b68b4(long *param_1,undefined8 param_2,long *param_3,int param_4)

{
  undefined4 *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_88;
  long *plStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = param_1[4];
  uStack_54 = (undefined4)param_1[5];
  uStack_50 = 0;
  puVar1 = &uStack_54;
  FUN_108331598(puVar1,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    if (param_4 == 0) {
      uStack_60 = 0;
      lStack_78 = 0;
      plStack_80 = (long *)0x0;
      uStack_68 = 0;
      uStack_70 = 0;
      FUN_1083313f4(&lStack_88,&uStack_54,param_1 + 2,&plStack_80);
      if (lStack_88 != 0) {
        func_0x0001081efc58();
        uVar3 = *(ulong *)(param_1[6] + 8);
        FUN_1083b6a70(uVar3,&plStack_80);
        uVar4 = 0;
        FUN_1081efc78();
        if (((uVar3 & 1) != 0) ||
           (func_0x0001083b740c(*(undefined8 *)(*param_1 + 0x120)), (uVar4 & 1) != 0)) {
          FUN_1083923d8(lStack_88,param_3);
          (**(code **)(*param_1 + 0xf8))(param_1);
          func_0x0001083b7380();
          return;
        }
        func_0x0001083b73fc();
      }
      func_0x0001083b7380();
    }
    else {
      plVar2 = param_3;
      func_0x00010821afec(param_3,param_1 + 2);
      if ((int)plVar2 != 0) {
        plVar2 = param_1 + 6;
        lStack_78 = *plVar2 + 0x10;
        plStack_80 = plVar2;
        func_0x0001081efc58();
        uVar3 = *(ulong *)(*plVar2 + 8);
        FUN_1083b6a70(uVar3,param_3 + 1);
        uVar4 = uVar3;
        func_0x0001083b73f4();
        if ((((uVar3 & 1) != 0) ||
            (func_0x0001083b740c(*(undefined8 *)(*param_1 + 0x120)), (uVar4 & 1) != 0)) &&
           (*param_3 != 0)) {
          *(undefined1 *)(*param_3 + 0x59) = 2;
        }
      }
    }
  }
  return;
}



/* Entry: 1083b6a70; end: 1083b6a77;  */

void FUN_1083b6a70(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined1 uStack_31;
  
  lVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  if (((lVar1 != 0) && ((int)param_2[3] != 0)) &&
     (plVar3 = param_2 + 2, func_0x0001078bdb50(), plVar3 <= plVar2)) {
    (**(code **)(*param_1 + 0x20))(param_1,param_2 + 2,lVar1,plVar2,&uStack_31);
  }
  return;
}



/* Entry: 1083b6a78; end: 1083b6adf;  */

long FUN_1083b6a78(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x30) + 0x10;
  lStack_28 = lVar1;
  func_0x0001081efc58();
  func_0x0001083b7464(*(long *)(param_1 + 0x30));
  (**(code **)(extraout_x8 + 0x30))();
  FUN_1081efc78(&lStack_28);
  return lVar1;
}



/* Entry: 1083b6ae0; end: 1083b6b8f;  */

undefined1 *
FUN_1083b6ae0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = &uStack_80;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  (**(code **)(*param_1 + 0xd0))(param_1,param_2,&uStack_80,param_8);
  if ((int)param_1 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_108330ff0(&uStack_80,param_3,param_4,param_5,param_6,param_7);
  }
  FUN_108330548(&uStack_80);
  return (undefined1 *)puVar1;
}



/* Entry: 1083b6b90; end: 1083b6bfb;  */

void FUN_1083b6b90(undefined8 *param_1,long param_2)

{
  long extraout_x8;
  
  if (*(int *)(*(long *)(*(long *)(param_2 + 0x30) + 8) + 0x20) == *(int *)(param_2 + 0x28)) {
    func_0x0001083b73e4();
    func_0x0001083b7464(*(long *)(param_2 + 0x30));
    (**(code **)(extraout_x8 + 0x18))(param_1);
    func_0x0001083b73bc();
  }
  else {
    *param_1 = 0;
  }
  return;
}



/* Entry: 1083b6bfc; end: 1083b6c5f;  */

long FUN_1083b6bfc(long param_1)

{
  long extraout_x8;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x30);
  func_0x0001083b73e4(*puVar1);
  func_0x0001083b7464(*puVar1);
  (**(code **)(extraout_x8 + 0x28))();
  func_0x0001083b73bc();
  return param_1;
}



/* Entry: 1083b6c60; end: 1083b6cb3;  */

void FUN_1083b6c60(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_28;
  
  func_0x0001083b73a4();
  if (uStack_28 == (long *)0x0) {
    *unaff_x20 = 0;
  }
  else {
    (**(code **)(*uStack_28 + 0x30))(uStack_28,0);
  }
  func_0x0001083b73dc();
  return;
}



/* Entry: 1083b6cb4; end: 1083b6d13;  */

void FUN_1083b6cb4(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_38;
  
  func_0x0001083b73a4();
  if (uStack_38 == (long *)0x0) {
    *unaff_x20 = 0;
  }
  else {
    (**(code **)(*uStack_38 + 0x38))(uStack_38,0);
  }
  func_0x0001083b73dc();
  return;
}



/* Entry: 1083b6d14; end: 1083b6d23;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083b6d14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_48;
  long alStack_40 [2];
  
  alStack_40[1] = 0;
  uVar2 = param_4;
  FUN_1083b93cc(param_4,0xffffffffffffffff);
  if ((uVar2 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    FUN_108360070(alStack_40,param_4,0);
    if (alStack_40[0] == 0) {
      *param_1 = 0;
    }
    else {
      FUN_1083b9ae8(&uStack_48,param_4,alStack_40,alStack_40 + 1);
      uVar1 = uStack_48;
      uStack_48 = 0;
      *param_1 = uVar1;
      FUN_1083b9bc8(&uStack_48);
    }
    FUN_1083312cc(alStack_40);
  }
  return;
}



/* Entry: 1083b6d24; end: 1083b6e8b;  */

void FUN_1083b6d24(long *param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long alStack_80 [6];
  long lStack_50;
  int iStack_44;
  
  lStack_50 = param_2 + 0x38;
  iStack_44 = param_3;
  func_0x0001081efc58();
  lVar2 = *(long *)(param_2 + 0x48);
  if ((lVar2 != 0) && (param_3 == *(int *)(lVar2 + 0x18))) {
    lVar1 = *param_4;
    FUN_108343f98(lVar1,*(undefined8 *)(lVar2 + 0x10));
    if ((int)lVar1 != 0) {
      do {
        func_0x0001083b7394();
      } while (extraout_w10 != 0);
      *param_1 = lVar2;
      goto LAB_1083b6e1c;
    }
  }
  uStack_88 = 0;
  if (*(long *)(param_2 + 0x30) != 0) {
    do {
      func_0x0001083b7394();
      uStack_88 = extraout_x8;
    } while (extraout_w10_00 != 0);
  }
  uStack_90 = 0;
  if (*param_4 != 0) {
    do {
      func_0x0001083b7394();
      uStack_90 = extraout_x8_00;
    } while (extraout_w10_01 != 0);
  }
  FUN_1083b66f8(alStack_80,&uStack_88,&iStack_44,&uStack_90);
  func_0x0001083b7430();
  func_0x0001083b7318(uStack_88);
  if (alStack_80[0] == 0) {
    *param_1 = 0;
  }
  else {
    lVar2 = 0x78;
    __Znwm();
    FUN_1083b6844();
    *param_1 = lVar2;
    FUN_1081fbfc4((long *)(param_2 + 0x48),param_1);
  }
  FUN_1082e4418(alStack_80);
LAB_1083b6e1c:
  FUN_1081efc78(&lStack_50);
  return;
}



/* Entry: 1083b6e8c; end: 1083b6ff3;  */

void FUN_1083b6e8c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_78;
  long alStack_70 [8];
  
  alStack_70[6] = 0;
  alStack_70[3] = 0;
  alStack_70[2] = 0;
  alStack_70[5] = 0;
  alStack_70[4] = 0;
  alStack_70[1] = 0;
  alStack_70[0] = 0;
  uStack_a0 = *param_3;
  *param_3 = 0;
  uStack_78 = 0;
  uStack_90 = *(undefined8 *)(param_2 + 0x20);
  uStack_98 = *(undefined8 *)(param_2 + 0x18);
  plVar1 = alStack_70;
  func_0x00010821afec(plVar1,&uStack_a0);
  FUN_10810a400(&uStack_a0);
  FUN_10810a400(&uStack_78);
  if ((int)plVar1 != 0) {
    FUN_10814105c(&uStack_a0,(ulong)alStack_70 | 8);
    uStack_a8 = 0;
    if (*(long *)(param_2 + 0x10) != 0) {
      do {
        func_0x0001083b7394();
        uStack_a8 = extraout_x8;
      } while (extraout_w10 != 0);
    }
    FUN_108384050(&uStack_a0,&uStack_a8);
    func_0x0001083b73c4();
    func_0x0001081efc58();
    uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x30) + 8);
    FUN_1083b6a70(uVar2,&uStack_a0);
    func_0x0001083b73bc();
    if ((int)uVar2 != 0) {
      if (alStack_70[0] != 0) {
        *(undefined1 *)(alStack_70[0] + 0x59) = 2;
      }
      func_0x0001083b812c(param_1,alStack_70);
      func_0x0001083b7380();
      goto LAB_1083b6f84;
    }
    func_0x0001083b7380();
  }
  *param_1 = 0;
LAB_1083b6f84:
  FUN_108330548(alStack_70);
  return;
}



/* Entry: 1083b6ff4; end: 1083b718b;  */

void FUN_1083b6ff4(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long extraout_x8;
  long *plVar3;
  undefined1 auStack_1e0 [208];
  long alStack_110 [21];
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  
  plVar3 = (long *)(param_2 + 0x30);
  lStack_58 = *plVar3 + 0x10;
  plStack_60 = plVar3;
  func_0x0001081efc58();
  plVar3 = (long *)(ulong)*(uint *)(*(long *)(*plVar3 + 8) + 0x20);
  FUN_1083ab504(plVar3,param_4,0);
  if (plVar3 == (long *)0x0) {
    plStack_68 = plVar3;
    FUN_1083ab3f0(alStack_110);
    uVar2 = *(undefined8 *)(*plStack_60 + 8);
    FUN_10835c548(uVar2,param_3,alStack_110);
    if (((int)uVar2 == 0) || (alStack_110[0] != *(long *)(param_2 + 0x20))) {
      *param_1 = 0;
    }
    else {
      plVar3 = alStack_110;
      FUN_1083ab128(plVar3,0);
      FUN_108392334();
      plVar1 = plStack_68;
      plStack_68 = plVar3;
      func_0x0001083b7324(plVar1);
      plVar3 = alStack_110;
      FUN_1083ab278(auStack_1e0,plVar3,plStack_68[4]);
      func_0x0001083b7464(*plStack_60);
      (**(code **)(extraout_x8 + 0x40))();
      if (((ulong)plVar3 & 1) == 0) {
        plVar3 = (long *)0x0;
      }
      else {
        FUN_1083ab66c(param_4,auStack_1e0);
        FUN_1083ab6b4(*(undefined4 *)(param_2 + 0x28),plStack_68,param_4,0);
        plVar3 = plStack_68;
        plStack_68 = (long *)0x0;
      }
      *param_1 = plVar3;
      FUN_1081527b0(auStack_1e0);
    }
    func_0x0001083b7438();
  }
  else {
    plStack_68 = (long *)0x0;
    *param_1 = plVar3;
  }
  FUN_1082e1a40(&plStack_68);
  func_0x0001083b73f4();
  return;
}



/* Entry: 1083b718c; end: 1083b71d3;  */

void FUN_1083b718c(long param_1,undefined8 *param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  *param_2 = 0;
  FUN_1083551f8(param_1 + 0x50,&uStack_28);
  FUN_1082b91e4(&uStack_28);
  return;
}



/* Entry: 1083b71d4; end: 1083b72af;  */

void FUN_1083b71d4(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long alStack_50 [6];
  
  lStack_60 = *param_2;
  *param_2 = 0;
  FUN_1083b66a0(&uStack_58,&lStack_60);
  uStack_68 = 0;
  FUN_1083b66f8(alStack_50,&uStack_58,0,&uStack_68);
  func_0x0001083b73c4();
  func_0x0001083b7318(uStack_58);
  if (lStack_60 != 0) {
    func_0x0001083b7458();
  }
  uVar1 = 0;
  if (alStack_50[0] != 0) {
    plStack_78 = alStack_50;
    FUN_1083b72b0(&uStack_70,&plStack_78);
    uVar1 = uStack_70;
  }
  uStack_70 = 0;
  *param_1 = uVar1;
  FUN_1083b7330(&uStack_70);
  FUN_1082e4418(alStack_50);
  return;
}



/* Entry: 1083b72b0; end: 1083b72f7;  */

void FUN_1083b72b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x78;
  __Znwm();
  FUN_1083b6844();
  *param_1 = uVar1;
  return;
}



/* Entry: 1083b72f8; end: 1083b72fb;  */

undefined8 * FUN_1083b72f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a419c8;
  FUN_108355184(param_1 + 10);
  func_0x000106f47184(param_1 + 9);
  FUN_108410074(param_1 + 7);
  FUN_1082e1adc(param_1 + 6);
  *param_1 = &PTR_DAT_110a41880;
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    func_0x0001083313e0(*(undefined4 *)(param_1 + 5));
  }
  *param_1 = &PTR_FUN_110a41808;
  FUN_10810a400(param_1 + 2);
  return param_1;
}



/* Entry: 1083b72fc; end: 1083b730f;  */

void FUN_1083b72fc(void)

{
  func_0x0001082e4448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083b7310; end: 1083b732f;  */

undefined8 FUN_1083b7310(void)

{
  return 0;
}



/* Entry: 1083b7330; end: 1083b737f;  */

long * FUN_1083b7330(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1083b7380; end: 1083b746f;  */

undefined8 * FUN_1083b7380(void)

{
  long in_stack_00000030;
  
  if (in_stack_00000030 != 0) {
    func_0x0001078bdee8();
  }
  return &stack0x00000030;
}



/* Entry: 1083b7470; end: 1083b74b7;  */

long FUN_1083b7470(long param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  
  piVar3 = *(int **)(param_1 + 0x30);
  if (piVar3 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  lVar4 = *(long *)(piVar3 + 2);
  func_0x0001083b757c();
  return lVar4 + 0xb0;
}



/* Entry: 1083b74b8; end: 1083b755b;  */

void FUN_1083b74b8(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int *piStack_30;
  int *piStack_28;
  
  piVar4 = *(int **)(param_1 + 0x30);
  if (piVar4 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  piStack_30 = piVar4 + 4;
  piStack_28 = piVar4;
  func_0x0001081efc58();
  lVar5 = *(long *)(piVar4 + 2);
  func_0x000108143790(param_2,&UNK_10df20244);
  lVar3 = lVar5 + 0x58;
  func_0x0001083b7564(lVar3);
  func_0x0001083b755c(param_2,lVar5 + 0x28,lVar5 + 0x30,lVar3);
  FUN_1081efc78(&piStack_30);
  func_0x0001083b757c();
  return;
}



/* Entry: 1083b755c; end: 1083b7583;  */

void FUN_1083b755c(int param_1,long *param_2,long param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  code *extraout_x8_00;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 auStack_40 [16];
  
  if (*param_2 != 0) {
    lVar1 = param_3;
    func_0x000108341d9c();
    if (lVar1 != 0) {
      func_0x0001081420b8();
      param_1 = (int)param_3;
    }
    func_0x000108341ef4();
    (*extraout_x8)();
    if (1 < param_1) {
      UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x20 + 0x160);
      func_0x000108341e90();
                    /* WARNING: Could not recover jumptable at 0x000108340f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    (**(code **)(*unaff_x19 + 0x20))();
    func_0x000108341f64();
    func_0x000108342278(auStack_40);
    func_0x000108342034(*(undefined8 *)(*unaff_x19 + 0x18));
    (*extraout_x8_00)();
    FUN_1083424c8(auStack_40);
  }
  return;
}



/* Entry: 1083b7584; end: 1083b7637;  */

undefined8 *
FUN_1083b7584(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  
  puVar1 = param_1;
  FUN_1083b5f80(param_1,param_2,param_5);
  *puVar1 = &PTR_FUN_110a41b18;
  plVar3 = puVar1 + 6;
  puVar1[7] = 0;
  *plVar3 = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xc] = 0;
  uVar2 = *(undefined8 *)(*param_3 + 0x18);
  *param_3 = 0;
  FUN_108330bac(plVar3,param_2,uVar2,param_4,FUN_1083b7638);
  if (*plVar3 != 0) {
    *(undefined1 *)(*plVar3 + 0x59) = 2;
  }
  return param_1;
}



/* Entry: 1083b7638; end: 1083b763f;  */

void FUN_1083b7638(undefined8 param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = *param_2;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
    if (bVar3) {
      *param_2 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_2 != (int *)0x0) && (iVar1 == 1)) {
    if (*(code **)(param_2 + 2) != (code *)0x0) {
      (**(code **)(param_2 + 2))(*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 4));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 1083b7640; end: 1083b76c3;  */

undefined8 * FUN_1083b7640(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (*(int *)(*param_2 + 0xc) == (int)param_2[5] &&
      *(int *)(*param_2 + 0x10) == *(int *)((long)param_2 + 0x2c)) {
    plVar2 = param_2;
    func_0x000108330c80(param_2);
  }
  else {
    plVar2 = (long *)0x0;
  }
  puVar1 = param_1;
  FUN_1083b5f80(param_1,param_2 + 3,plVar2);
  *puVar1 = &PTR_FUN_110a41b18;
  FUN_10833043c(puVar1 + 6,param_2);
  return param_1;
}



/* Entry: 1083b76c4; end: 1083b76f3;  */

undefined8 * FUN_1083b76c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a41b18;
  FUN_108330548(param_1 + 6);
  *param_1 = &PTR_DAT_110a41880;
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    func_0x0001083313e0(*(undefined4 *)(param_1 + 5));
  }
  *param_1 = &PTR_FUN_110a41808;
  FUN_10810a400(param_1 + 2);
  return param_1;
}



/* Entry: 1083b76f4; end: 1083b76f7;  */

undefined8 * FUN_1083b76f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a41b18;
  FUN_108330548(param_1 + 6);
  *param_1 = &PTR_DAT_110a41880;
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    func_0x0001083313e0(*(undefined4 *)(param_1 + 5));
  }
  *param_1 = &PTR_FUN_110a41808;
  FUN_10810a400(param_1 + 2);
  return param_1;
}



/* Entry: 1083b76f8; end: 1083b770b;  */

void FUN_1083b76f8(void)

{
  FUN_1083b76c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083b770c; end: 1083b7793;  */

undefined1 *
FUN_1083b770c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [56];
  
  FUN_10833043c(auStack_78,param_1 + 0x30);
  puVar1 = auStack_78;
  FUN_108330ff0(puVar1,param_3,param_4,param_5,param_6,param_7);
  func_0x0001083b80f0();
  return puVar1;
}



/* Entry: 1083b7794; end: 1083b779b;  */

bool FUN_1083b7794(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if ((param_2 != 0) && (lVar1 != 0)) {
    FUN_1082b0634(param_2,(long *)(param_1 + 0x38));
  }
  return lVar1 != 0;
}



/* Entry: 1083b779c; end: 1083b77bb;  */

undefined8 FUN_1083b779c(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000108330578(param_3,param_1 + 0x30);
  return 1;
}



/* Entry: 1083b77bc; end: 1083b77cb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083b77bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_48;
  long alStack_40 [2];
  
  alStack_40[1] = 0;
  uVar2 = param_4;
  FUN_1083b93cc(param_4,0xffffffffffffffff);
  if ((uVar2 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    FUN_108360070(alStack_40,param_4,0);
    if (alStack_40[0] == 0) {
      *param_1 = 0;
    }
    else {
      FUN_1083b9ae8(&uStack_48,param_4,alStack_40,alStack_40 + 1);
      uVar1 = uStack_48;
      uStack_48 = 0;
      *param_1 = uVar1;
      FUN_1083b9bc8(&uStack_48);
    }
    FUN_1083312cc(alStack_40);
  }
  return;
}



/* Entry: 1083b77cc; end: 1083b782b;  */

void FUN_1083b77cc(undefined8 *param_1,long param_2)

{
  long alStack_58 [7];
  
  FUN_1083b782c(alStack_58,param_2 + 0x30);
  if (alStack_58[0] == 0) {
    *param_1 = 0;
  }
  else {
    func_0x0001083b812c(param_1,alStack_58);
  }
  func_0x0001083b80f0();
  return;
}



/* Entry: 1083b782c; end: 1083b797f;  */

void FUN_1083b782c(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined1 in_register_00005008;
  undefined1 in_register_00005009;
  undefined1 in_register_0000500a;
  undefined1 in_register_0000500b;
  undefined1 in_register_0000500c;
  undefined1 in_register_0000500d;
  undefined1 in_register_0000500e;
  undefined1 in_register_0000500f;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  int *piStack_58;
  undefined8 uStack_50;
  undefined4 *puStack_48;
  
  uVar6 = 0;
  puVar5 = param_3;
  func_0x00010821a0c0();
  piStack_58 = *(int **)(param_2 + 0x18);
  if (piStack_58 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piStack_58,0x10);
      if (bVar3) {
        *piStack_58 = *piStack_58 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_50 = *(undefined8 *)(param_2 + 0x20);
  puStack_48 = puVar5;
  func_0x0001083b8110();
  lStack_88 = CONCAT17(in_register_0000500f,
                       CONCAT16(in_register_0000500e,
                                CONCAT15(in_register_0000500d,
                                         CONCAT14(in_register_0000500c,
                                                  CONCAT13(in_register_0000500b,
                                                           CONCAT12(in_register_0000500a,
                                                                    CONCAT11(in_register_00005009,
                                                                             in_register_00005008)))
                                                 ))));
  lStack_90 = CONCAT17(in_register_00005007,
                       CONCAT16(in_register_00005006,
                                CONCAT15(in_register_00005005,
                                         CONCAT14(in_register_00005004,
                                                  CONCAT13(in_register_00005003,
                                                           CONCAT12(in_register_00005002,
                                                                    CONCAT11(in_register_00005001,
                                                                             in_b0)))))));
  func_0x00010821afec(&lStack_90,&piStack_58);
  if ((((uVar6 & 1) == 0) ||
      (lVar7 = param_2, FUN_108330d14(param_2,*param_3,param_3[1]), lStack_88 == 0)) || (lVar7 == 0)
     ) {
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    lVar8 = *(long *)(param_2 + 0x10);
    uVar4 = param_3[3] - param_3[1];
    if (lStack_80 == lVar8) {
      _memcpy(lStack_88,lVar7,lStack_80 * (int)uVar4);
    }
    else {
      lVar1 = lStack_88;
      for (uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU); uVar4 != 0; uVar4 = uVar4 - 1) {
        _memcpy(lVar1,lVar7,lStack_80);
        lVar1 = lVar1 + lStack_80;
        lVar7 = lVar7 + lVar8;
      }
    }
    if (lStack_90 != 0) {
      *(undefined1 *)(lStack_90 + 0x59) = 2;
    }
    FUN_1083304b8(param_1,&lStack_90);
  }
  FUN_108330548(&lStack_90);
  FUN_10810a400(&piStack_58);
  return;
}



/* Entry: 1083b7980; end: 1083b7c0f;  */

void FUN_1083b7980(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  long lStack_98;
  long alStack_90 [2];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_58;
  
  lStack_98 = 0;
  if ((param_5 & 1) == 0) {
    FUN_1083b782c(&lStack_e0,param_2 + 0x30,param_4);
    if (lStack_e0 != 0) {
      func_0x0001083b812c(alStack_90,&lStack_e0);
      lVar4 = lStack_98;
      lStack_98 = alStack_90[0];
      alStack_90[0] = 0;
      func_0x0001083b806c(lVar4);
      func_0x0001083b80f8();
    }
    func_0x0001083b8108();
  }
  else {
    uStack_d8 = *(undefined8 *)(param_2 + 0x58);
    lStack_e0 = 0;
    uVar1 = param_4;
    FUN_108279bb8(param_4,&lStack_e0);
    if (((int)uVar1 == 0) || (lVar4 = *(long *)(param_2 + 0x60), lVar4 == 0)) {
      lStack_a0 = 0;
    }
    else {
      lStack_58 = 0;
      lVar2 = param_2 + 0x38;
      FUN_1083686ac(lVar2,0,0);
      lStack_58 = lVar2;
      if (lVar2 != 0) {
        iVar5 = 0;
        while( true ) {
          lVar2 = lStack_58;
          if (*(int *)(lStack_58 + 0x50) <= iVar5) break;
          func_0x0001083b8110();
          uStack_70 = 0;
          alStack_90[0] =
               CONCAT17(in_register_00005007,
                        CONCAT16(in_register_00005006,
                                 CONCAT15(in_register_00005005,
                                          CONCAT14(in_register_00005004,
                                                   CONCAT13(in_register_00005003,
                                                            CONCAT12(in_register_00005002,
                                                                     CONCAT11(in_register_00005001,
                                                                              in_b0)))))));
          FUN_108368b58(lVar4,iVar5,&lStack_e0);
          FUN_108368b58(lStack_58,iVar5,alStack_90);
          func_0x0001082a53c8(&lStack_e0,alStack_90);
          FUN_10810a400(auStack_80);
          FUN_10810a400(&uStack_d0);
          iVar5 = iVar5 + 1;
        }
        lStack_58 = 0;
      }
      lStack_a0 = lVar2;
      FUN_1082a619c(&lStack_58);
    }
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_d8 = 0;
    lStack_e0 = 0;
    uVar3 = param_2 + 0x30;
    FUN_108330e64(uVar3,&lStack_e0,param_4);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
    }
    else {
      lVar4 = 0x68;
      __Znwm();
      FUN_1083b7640();
      lStack_e8 = lStack_a0;
      lStack_a0 = 0;
      alStack_90[0] = lVar4;
      FUN_1083b5e68(&lStack_58,lVar4,&lStack_e8);
      lVar2 = lStack_58;
      lVar4 = lStack_98;
      lStack_58 = 0;
      lStack_98 = lVar2;
      func_0x0001083b806c(lVar4);
      func_0x000106f47184(&lStack_58);
      FUN_1082a619c(&lStack_e8);
      func_0x0001083b80f8();
    }
    func_0x0001083b8108();
    FUN_1082a619c(&lStack_a0);
    if ((uVar3 & 1) == 0) goto LAB_1083b7b54;
  }
  lVar4 = lStack_98;
  lStack_98 = 0;
  *param_1 = lVar4;
LAB_1083b7b54:
  func_0x000106f47184(&lStack_98);
  return;
}



/* Entry: 1083b7c10; end: 1083b7cdb;  */

void FUN_1083b7c10(undefined8 *param_1,long *param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined1 uStack_61;
  undefined8 auStack_60 [6];
  
  if (param_3 != 1) {
    bVar2 = false;
    if (*param_2 != 0) {
      bVar2 = *(char *)(*param_2 + 0x59) != '\0';
    }
    if ((param_3 == 2) || (bVar2)) {
      uStack_61 = param_3 == 2;
      FUN_1083b7cdc(auStack_60,param_2,&uStack_61);
      uVar1 = auStack_60[0];
      auStack_60[0] = 0;
      *param_1 = uVar1;
      FUN_1083b8098(auStack_60);
      return;
    }
  }
  func_0x0001083b8110();
  iVar3 = (int)param_2;
  FUN_108330de8();
  if (iVar3 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_1083b814c(param_1,auStack_60,param_4);
  }
  func_0x0001083b8100(auStack_60);
  return;
}



/* Entry: 1083b7cdc; end: 1083b7d23;  */

void FUN_1083b7cdc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x68;
  __Znwm();
  FUN_1083b7640();
  *param_1 = uVar1;
  return;
}



/* Entry: 1083b7d24; end: 1083b7db7;  */

void FUN_1083b7d24(undefined8 *param_1,long *param_2,int param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uStack_61;
  undefined8 auStack_60 [6];
  
  if ((((0 < (int)*(uint *)(param_2 + 5)) &&
       ((0 < (int)*(uint *)((long)param_2 + 0x2c) && *(uint *)(param_2 + 5) >> 0x1d == 0) &&
        *(uint *)((long)param_2 + 0x2c) >> 0x1d == 0)) && ((int)param_2[4] != 0)) &&
     (*(int *)((long)param_2 + 0x24) != 0)) {
    plVar5 = (long *)param_2[2];
    plVar4 = param_2 + 3;
    func_0x0001078bdb50();
    if (plVar4 <= plVar5) {
      if (param_3 != 1) {
        bVar2 = false;
        if (*param_2 != 0) {
          bVar2 = *(char *)(*param_2 + 0x59) != '\0';
        }
        if ((param_3 == 2) || (bVar2)) {
          uStack_61 = param_3 == 2;
          FUN_1083b7cdc(auStack_60,param_2,&uStack_61);
          uVar1 = auStack_60[0];
          auStack_60[0] = 0;
          *param_1 = uVar1;
          FUN_1083b8098(auStack_60);
          return;
        }
      }
      func_0x0001083b8110();
      iVar3 = (int)param_2;
      FUN_108330de8();
      if (iVar3 == 0) {
        *param_1 = 0;
      }
      else {
        FUN_1083b814c(param_1,auStack_60,0);
      }
      func_0x0001083b8100(auStack_60);
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1083b7db8; end: 1083b7e83;  */

undefined8 FUN_1083b7db8(long *param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  plVar4 = param_1 + 6;
  if ((*plVar4 != 0) && (*(char *)(*plVar4 + 0x59) != '\0')) {
    func_0x000108330824();
    FUN_1083306e4(param_3,param_1 + 9,param_1[8]);
    lStack_38 = param_1[6];
    if (lStack_38 != 0) {
      piVar1 = (int *)(lStack_38 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_108330884(param_3,&lStack_38,plVar4,(ulong)plVar4 >> 0x20);
    FUN_1083312cc(&lStack_38);
    return 1;
  }
  func_0x0001078bdd84(auStack_60,param_1 + 2,4);
  uStack_48 = 0;
  lStack_38 = lStack_50;
  uStack_40 = uStack_58;
  func_0x0001083b666c();
  FUN_10810a400(auStack_60);
  plVar4 = param_3;
  func_0x00010821afec(param_3,&uStack_48);
  if (((ulong)plVar4 & 1) != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,0,param_3 + 3,param_3[1],param_3[2],0,0,0);
    if (((ulong)param_1 & 1) != 0) {
      if (*param_3 != 0) {
        *(undefined1 *)(*param_3 + 0x59) = 2;
      }
      uVar5 = 1;
      goto LAB_1083b62ac;
    }
    func_0x0001083306b0(param_3);
  }
  uVar5 = 0;
LAB_1083b62ac:
  FUN_10810a400(&uStack_48);
  return uVar5;
}



/* Entry: 1083b7e84; end: 1083b7fd3;  */

void FUN_1083b7e84(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  int *piStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long alStack_a0 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_108330de8(param_2 + 0x30,&uStack_60);
  alStack_a0[6] = 0;
  alStack_a0[3] = 0;
  alStack_a0[2] = 0;
  alStack_a0[5] = 0;
  alStack_a0[4] = 0;
  alStack_a0[1] = 0;
  alStack_a0[0] = 0;
  func_0x0001078bdd84(auStack_d0,param_2 + 0x48,param_3);
  piStack_b8 = (int *)*param_4;
  if (piStack_b8 != (int *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piStack_b8,0x10);
      if (bVar2) {
        *piStack_b8 = *piStack_b8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_d8 = 0;
  uStack_a8 = uStack_c0;
  uStack_b0 = uStack_c8;
  plVar3 = alStack_a0;
  func_0x00010821afec(plVar3,&piStack_b8);
  FUN_10810a400(&piStack_b8);
  FUN_10810a400(&uStack_d8);
  FUN_10810a400(auStack_d0);
  if (((ulong)plVar3 & 1) == 0) {
    *param_1 = 0;
  }
  else {
    FUN_1083310a0(alStack_a0,&uStack_60,0,0);
    if (alStack_a0[0] != 0) {
      *(undefined1 *)(alStack_a0[0] + 0x59) = 2;
    }
    func_0x0001083b812c(param_1,alStack_a0);
  }
  FUN_108330548(alStack_a0);
  func_0x0001083b8100(&uStack_60);
  return;
}



/* Entry: 1083b7fd4; end: 1083b8063;  */

void FUN_1083b7fd4(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [24];
  
  FUN_10814105c(auStack_48,param_2 + 0x38);
  uStack_50 = *param_3;
  *param_3 = 0;
  FUN_108384050(auStack_48,&uStack_50);
  FUN_10810a400(&uStack_50);
  func_0x0001083b8144(param_1,auStack_48);
  FUN_10810a400(auStack_38);
  return;
}



/* Entry: 1083b8064; end: 1083b8097;  */

undefined8 FUN_1083b8064(void)

{
  return 0;
}



/* Entry: 1083b8098; end: 1083b80e7;  */

long * FUN_1083b8098(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}


