/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078b0544; end: 1078b055b;  */

void FUN_1078b0544(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001078b01ec(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078b094c; end: 1078b09ff;  */

void FUN_1078b094c(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x10;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  long lVar4;
  ulong uVar5;
  long unaff_x22;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x0001078b0ca8();
  uVar5 = param_1[1];
  bVar1 = *param_1 <= uVar5;
  uVar2 = uVar5 == *param_1;
  if ((bool)uVar2) {
    func_0x0001078b0cc4();
    if (bVar1) {
      lVar3 = (long)(extraout_x10 - uVar5) >> 2;
      if (extraout_x10 - uVar5 == 0) {
        lVar3 = 1;
      }
      lVar4 = lVar3 * 2;
      func_0x0001078b0b7c();
      lStack_58 = lVar3 + (lVar4 + 6U & 0xfffffffffffffff8);
      lStack_48 = lVar3 + uVar5 * 8;
      lStack_60 = lVar3;
      lStack_50 = lStack_58;
      func_0x0001078b0b54(&lStack_60,*(undefined8 *)(unaff_x19 + 8),
                          *(undefined8 *)(unaff_x19 + 0x10));
      func_0x0001078b0c1c();
      uVar5 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x0001078b0c84();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar5 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar5 - 8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar5 - 8);
  return;
}



/* Entry: 1078b0e20; end: 1078b0e5b;  */

void FUN_1078b0e20(void)

{
  func_0x0001078b13f8();
  return;
}



/* Entry: 1078b10bc; end: 1078b10d3;  */

void FUN_1078b10bc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001078b10f0(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078b1214; end: 1078b1227;  */

undefined ** FUN_1078b1214(void)

{
  return &PTR_DAT_1109e7870;
}



/* Entry: 1078b142c; end: 1078b14bf;  */

undefined8 * FUN_1078b142c(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x0001073ad228(auStack_40,param_2);
  func_0x0001073ad7c8(auStack_30,auStack_40);
  func_0x0001074e3a1c(param_1,auStack_30);
  func_0x0001073ad37c(auStack_30);
  func_0x0001073ad3a0(auStack_40);
  *param_1 = &PTR_DAT_1109e7920;
  *(undefined2 *)((long)param_1 + 0x59) = 0;
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  lVar2 = *(long *)(param_1[3] + 0x170);
  param_1[0xc] = *(undefined8 *)(param_1[3] + 0x168);
  param_1[0xd] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return param_1;
}



/* Entry: 1078b18f4; end: 1078b193f;  */

void FUN_1078b18f4(long param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1078b1db4; end: 1078b1fa3;  */

void FUN_1078b1db4(long param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined1 uStack_31;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((lVar2 != 0) &&
     (uVar1 = *(uint *)(*(long *)(lVar2 + 0x80) + (param_2 & 0xffffffff) * 4),
     (uVar1 >> 0x10 & 1) != 0)) {
    lVar2 = *(long *)(param_3 + 0x10);
    uStack_31 = (undefined1)uVar1;
    func_0x0001078ab940(*(long *)(*(long *)(param_1 + 8) + 8) + 0xf0,&uStack_31);
    auStack_3c[0] = *param_3;
    uStack_38 = *(undefined4 *)(lVar2 + 0x10);
    func_0x0001078b28a4();
    func_0x0001078ab97c(extraout_x8 + (ulong)(uVar1 & 0xffff) * 0xc + 0x114,auStack_3c);
  }
  return;
}



/* Entry: 1078b26cc; end: 1078b26ef;  */

int FUN_1078b26cc(float param_1,float param_2)

{
  return (int)((float)(uint)(int)param_2 + (float)(uint)(int)param_1 * 256.0);
}



/* Entry: 1078b3dfc; end: 1078b3dff;  */

undefined8 * FUN_1078b3dfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e7bb0;
  func_0x0001078b3f68(param_1 + 0x19);
  func_0x0001078b3f8c(param_1 + 0x16);
  func_0x0001078b3f68(param_1 + 0x13);
  func_0x0001078b3fb0(param_1 + 0x10);
  func_0x0001078b3fd4(param_1 + 0xd);
  func_0x0001078b3ff8(param_1 + 10);
  func_0x0001057f951c(param_1 + 7);
  func_0x0001078aeb94(param_1 + 2);
  return param_1;
}



/* Entry: 1078b4028; end: 1078b411b;  */

void FUN_1078b4028(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -5) * 5;
  _memcpy(lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1078b41f8; end: 1078b42cb;  */

/* WARNING: Possible PIC construction at 0x0001078b42c4: Changing call to branch */

undefined1  [16] FUN_1078b41f8(ulong *param_1,ulong *param_2,ulong param_3)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  byte bVar14;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar15;
  byte bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 < (undefined4 *)param_1[2]) {
    puVar13 = puVar1 + 1;
    *puVar1 = (int)param_2;
    puVar4 = param_1;
LAB_1078b42a8:
    param_1[1] = (ulong)puVar13;
    auVar22._8_8_ = param_2;
    auVar22._0_8_ = puVar4;
    return auVar22;
  }
  puVar10 = (ulong *)*param_1;
  lVar11 = (long)puVar1 - (long)puVar10;
  uVar7 = (lVar11 >> 2) + 1;
  if (uVar7 >> 0x3e == 0) {
    uVar5 = (long)param_1[2] - (long)puVar10;
    uVar6 = (long)uVar5 >> 1;
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar6 = 0x3fffffffffffffff;
    }
    if (uVar6 >> 0x3e == 0) {
      lVar3 = uVar6 << 2;
      __Znwm();
      puVar1 = (undefined4 *)(lVar3 + lVar11);
      puVar12 = puVar1 + -(lVar11 >> 2);
      puVar13 = puVar1 + 1;
      *puVar1 = (int)param_2;
      puVar4 = (ulong *)puVar12;
      param_2 = puVar10;
      _memcpy(puVar12,puVar10,lVar11);
      *param_1 = (ulong)puVar12;
      param_1[1] = (ulong)puVar13;
      param_1[2] = lVar3 + uVar6 * 4;
      if (puVar10 != (ulong *)0x0) {
        __ZdlPv(puVar10);
        puVar4 = puVar10;
      }
      goto LAB_1078b42a8;
    }
    func_0x000104bd35f4();
  }
  func_0x0001078b45e8();
  lVar11 = 0;
  uVar6 = *param_1;
  uVar7 = uVar6 >> 0xc ^ param_3 >> 7;
  bVar8 = (byte)param_3 & 0x7f;
  while( true ) {
    uVar7 = uVar7 & param_1[2];
    uVar15 = *(undefined8 *)(uVar6 + uVar7);
    bVar14 = (byte)((ulong)uVar15 >> 8);
    bVar16 = (byte)((ulong)uVar15 >> 0x10);
    bVar17 = (byte)((ulong)uVar15 >> 0x18);
    bVar18 = (byte)((ulong)uVar15 >> 0x20);
    bVar19 = (byte)((ulong)uVar15 >> 0x28);
    bVar20 = (byte)((ulong)uVar15 >> 0x30);
    bVar21 = (byte)((ulong)uVar15 >> 0x38);
    for (uVar5 = CONCAT17(-(bVar21 == bVar8),
                          CONCAT16(-(bVar20 == bVar8),
                                   CONCAT15(-(bVar19 == bVar8),
                                            CONCAT14(-(bVar18 == bVar8),
                                                     CONCAT13(-(bVar17 == bVar8),
                                                              CONCAT12(-(bVar16 == bVar8),
                                                                       CONCAT11(-(bVar14 == bVar8),
                                                                                -((byte)uVar15 ==
                                                                                 bVar8)))))))) &
                 0x8080808080808080; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar9 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar7 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & param_1[2];
      if (*(ulong **)(param_1[1] + uVar9 * 0x10) == param_2) {
        auVar23._8_8_ = param_1[1] + uVar9 * 0x10;
        auVar23._0_8_ = uVar6 + uVar9;
        return auVar23;
      }
    }
    bVar14 = NEON_umaxv(CONCAT17(-(bVar21 == 0x80),
                                 CONCAT16(-(bVar20 == 0x80),
                                          CONCAT15(-(bVar19 == 0x80),
                                                   CONCAT14(-(bVar18 == 0x80),
                                                            CONCAT13(-(bVar17 == 0x80),
                                                                     CONCAT12(-(bVar16 == 0x80),
                                                                              CONCAT11(-(bVar14 ==
                                                                                        0x80),-((
                                                  byte)uVar15 == 0x80)))))))),1);
    if ((bVar14 & 1) != 0) break;
    lVar11 = lVar11 + 8;
    uVar7 = lVar11 + uVar7;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  return auVar2 << 0x40;
}



/* Entry: 1078b495c; end: 1078b499f;  */

void FUN_1078b495c(long param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  func_0x0001073caeb8();
  uVar1 = *param_4;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0xfc) = param_2;
  *(undefined4 *)(param_1 + 0x100) = param_3;
  *(undefined8 *)(param_1 + 0x104) = uVar1;
  return;
}



/* Entry: 1078b4e2c; end: 1078b4e67;  */

void FUN_1078b4e2c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_1109e7cb8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 1078b5058; end: 1078b50c7;  */

bool FUN_1078b5058(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  lVar2 = *param_1;
  uStack_31 = 5;
  func_0x0001078b50c8(lVar2,param_1[1],&uStack_31);
  lVar3 = *param_1;
  lVar1 = param_1[1];
  uStack_32 = 3;
  func_0x0001078b50c8(lVar3,lVar1,&uStack_32);
  return lVar1 != lVar2 || param_1[1] != lVar3;
}



/* Entry: 1078b52c8; end: 1078b5317;  */

undefined8 * FUN_1078b52c8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_DAT_1109e7e38;
  lVar4 = param_1[7];
  plVar1 = (long *)(param_1[3] + 0x80);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 - lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x0001078ae5e4(param_1 + 2);
  *param_1 = &PTR_DAT_1109e4228;
  func_0x00010724e5b8(param_1 + 1);
  return param_1;
}



/* Entry: 1078b53c0; end: 1078b53c3;  */

void FUN_1078b53c0(void)

{
  return;
}



/* Entry: 1078b5704; end: 1078b5743;  */

int * FUN_1078b5704(int *param_1,int param_2)

{
  if (((*(byte *)(param_1 + 1) & 1) != 0) || (*param_1 != param_2)) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = param_2;
    func_0x0001078b65e0(param_1);
  }
  return param_1;
}



/* Entry: 1078b6184; end: 1078b6233;  */

void FUN_1078b6184(long param_1)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  func_0x0001078b6294();
  func_0x0001078b62e0(*(undefined8 *)(param_1 + 0x20));
  func_0x0001078af888(in_x5);
  if ((int)in_x5 - 0x10U < 0x1c) {
    func_0x0001078b5334(in_x4,in_x5);
    func_0x0001078b63d0(0x8515);
    _glCompressedTexImage2D();
  }
  else {
    func_0x0001078b63d0(0x8515);
    _glTexImage2D();
  }
  return;
}



/* Entry: 1078b64c0; end: 1078b64e3;  */

void FUN_1078b64c0(byte *param_1)

{
  undefined4 uVar1;
  
  if ((ulong)*param_1 < 3) {
    uVar1 = *(undefined4 *)(&UNK_10deb544c + (ulong)*param_1 * 4);
  }
  else {
    uVar1 = 0x500;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBlendEquation_11034b3a8)(uVar1);
  return;
}



/* Entry: 1078b66d4; end: 1078b6793;  */

undefined8 FUN_1078b66d4(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_38 [24];
  
  if ((bRam0000000113824518 & 1) == 0) {
    iVar2 = 0x13824518;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm
                (auStack_38,&UNK_10deb5488,0x23973);
      func_0x0001078a8cd4(0x113824500,auStack_38);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
      ___cxa_guard_release(0x113824518);
    }
  }
  uVar1 = uRam0000000113824500;
  if (-1 < cRam0000000113824517) {
    uVar1 = 0x113824500;
  }
  return uVar1;
}



/* Entry: 1078b699c; end: 1078b69a3;  */

void FUN_1078b699c(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(*param_2 + 8);
  func_0x00010c09e220(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x00010002b838(param_1,uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1078b6c2c; end: 1078b6c3f;  */

void FUN_1078b6c2c(void)

{
  func_0x0001078b6d14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078b7014; end: 1078b7043;  */

undefined8 * FUN_1078b7014(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e8018;
  func_0x0001078b7044(param_1 + 1);
  return param_1;
}



/* Entry: 1078b8c64; end: 1078b8d9f;  */

void FUN_1078b8c64(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  __ZNSt3__15mutex4lockEv(param_1 + 1);
  puVar7 = param_1 + 9;
  puVar3 = (undefined8 *)param_1[10];
  uVar4 = (long)((long)puVar3 - *puVar7) >> 5;
  if (uVar4 < *param_1) {
    if (puVar3 < (undefined8 *)param_1[0xb]) {
      uVar8 = param_2[1];
      uVar6 = *param_2;
      puVar3[2] = param_2[2];
      puVar3[1] = uVar8;
      *puVar3 = uVar6;
      func_0x0001078b9f40();
      uVar4 = extraout_x8 + 0x20;
    }
    else {
      puVar2 = puVar7;
      func_0x0001078b8ef4(puVar7,uVar4 + 1);
      func_0x0001078b8f34(auStack_58,puVar2,(long)(param_1[10] - param_1[9]) >> 5,param_1 + 0xb);
      uVar6 = param_2[2];
      uVar8 = *param_2;
      puStack_48[1] = param_2[1];
      *puStack_48 = uVar8;
      puStack_48[2] = uVar6;
      func_0x0001078b9f40();
      puStack_48 = (undefined8 *)(extraout_x8_00 + 0x20);
      func_0x0001078b8f90(puVar7,auStack_58);
      uVar4 = param_1[10];
      func_0x0001078b904c(auStack_58);
    }
    param_1[10] = uVar4;
  }
  else {
    lVar1 = *puVar7 + param_1[0xc] * 0x20;
    func_0x000100066230(lVar1,param_2);
    *(undefined8 *)(lVar1 + 0x18) = param_2[3];
    uVar5 = *param_1;
    uVar4 = 0;
    if (uVar5 != 0) {
      uVar4 = (param_1[0xc] + 1) / uVar5;
    }
    param_1[0xc] = (param_1[0xc] + 1) - uVar4 * uVar5;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 1);
  return;
}



/* Entry: 1078b9094; end: 1078b90a7;  */

void FUN_1078b9094(undefined8 param_1,undefined8 ***param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 ***pppuVar8;
  undefined8 **ppuVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auStack_100 [24];
  ulong *puStack_e8;
  ulong *puStack_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  ulong **ppuStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  ulong *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8(&DAT_10f62a4d8);
  puStack_e8 = (ulong *)0x0;
  puStack_e0 = (ulong *)0x0;
  puStack_d8 = (ulong *)0x0;
  pppuVar8 = param_2;
  __ZNSt3__15mutex4lockEv(param_4 + 8);
  lVar1 = *(long *)(param_4 + 0x50);
  for (lVar10 = *(long *)(param_4 + 0x48); lVar10 != lVar1; lVar10 = lVar10 + 0x20) {
    lVar5 = lVar10;
    pppuVar8 = param_2;
    func_0x0001000e107c();
    puVar2 = puStack_e0;
    if ((int)lVar5 != 0) {
      if (puStack_e0 < puStack_d8) {
        func_0x0001078b9eb0();
        puStack_e0 = puVar2 + 4;
      }
      else {
        ppuVar6 = &puStack_e8;
        func_0x0001078b8ef4(ppuVar6,((long)puStack_e0 - (long)puStack_e8 >> 5) + 1);
        func_0x0001078b8f34(&puStack_d0,ppuVar6,(long)puStack_e0 - (long)puStack_e8 >> 5,&puStack_d8
                           );
        puVar3 = puStack_c0;
        func_0x0001078b9eb0();
        puStack_c0 = (undefined *)((long)puVar3 + 0x20);
        pppuVar8 = (undefined8 ***)&puStack_d0;
        func_0x0001078b8f90(&puStack_e8);
        puVar2 = puStack_e0;
        func_0x0001078b904c(&puStack_d0);
        puStack_e0 = puVar2;
      }
    }
  }
  __ZNSt3__15mutex6unlockEv(param_4 + 8);
  puVar2 = puStack_e0;
  puStack_88 = (ulong *)0x0;
  uStack_80 = 0;
  uStack_78 = 0;
  for (ppuVar9 = (undefined8 **)puStack_e8; ppuVar9 != (undefined8 **)puVar2; ppuVar9 = ppuVar9 + 4)
  {
    lVar10 = *(long *)*param_3;
    puVar11 = ppuVar9[3];
    ppuVar7 = ppuVar9;
    func_0x0001005d466c();
    puStack_c0 = (undefined *)((lVar10 - (long)puVar11) / 1000000);
    uStack_b8 = 0;
    puStack_d0 = (ulong *)ppuVar7;
    ppuStack_c8 = (ulong **)pppuVar8;
    func_0x0001003a91d4(&UNK_10f433a4e);
    func_0x0001003a9204(&ppuStack_a0);
    pppuVar8 = &ppuStack_a0;
    func_0x0001000fecf4(&puStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_a0);
  }
  puStack_d0 = puStack_88;
  ppuStack_c8 = (ulong **)uStack_80;
  puStack_c0 = &DAT_10f68f19e;
  uStack_b8 = 2;
  ppuStack_a0 = &puStack_d0;
  puStack_98 = &UNK_1072ac1a8;
  func_0x0001003a91d4(&DAT_10f2fb62f);
  func_0x0001003a9204(auStack_100);
  func_0x0001000e30f4(&puStack_88);
  func_0x000105988308(&puStack_d0,param_5,auStack_100);
  func_0x0001003a91d4(&UNK_10f433a3e);
  func_0x0001003a9204(puVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  func_0x0001078b9328(&puStack_e8);
  return;
}



/* Entry: 1078b9a98; end: 1078b9a9b;  */

undefined8 * FUN_1078b9a98(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1109e80c8;
  lVar1 = param_1[0x11];
  func_0x0001072ab574(lVar1 + 0x18);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x18);
  if (param_1[0x13] != 0) {
    func_0x00010bf2dba0();
  }
  func_0x000107898014(param_1 + 0x18);
  func_0x0001072ad0c8(param_1 + 0x14);
  _objc_release(param_1[0x13]);
  func_0x0001078b9394(param_1 + 0x11);
  func_0x00010724b340(param_1 + 1);
  return param_1;
}



/* Entry: 1078b9b68; end: 1078b9c2b;  */

undefined1 * FUN_1078b9b68(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_148 [128];
  undefined1 auStack_c8 [128];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 8);
  func_0x0001072fb714(auStack_48,lVar3 + 0xa0);
  func_0x0001075281c8(auStack_c8,lVar3 + 8);
  func_0x0001075281c8(auStack_148,auStack_c8);
  puVar2 = auStack_148;
  func_0x0001072fb768(auStack_48);
  func_0x00010724b340(auStack_148);
  func_0x00010724b340(auStack_c8);
  puVar1 = auStack_48;
  func_0x0001072ad0c8();
  func_0x0001078b9f2c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010724b340(auStack_148);
  func_0x00010724b340(auStack_c8);
  puVar1 = auStack_48;
  func_0x0001072ad0c8(puVar1);
  func_0x0001078b9e10();
  func_0x0001004a5364(puVar2,&PTR_DAT_1109e81b0);
  puVar1 = puVar1 + 8;
  if ((int)puVar2 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



/* Entry: 1078ba078; end: 1078ba1c7;  */

void FUN_1078ba078(long param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  uVar2 = param_2;
  _CGImageGetWidth();
  uVar3 = param_2;
  _CGImageGetHeight(param_2);
  lVar4 = param_1;
  func_0x00010724e0f8(param_1,uVar2 & 0xffffffff | uVar3 << 0x20);
  _CGColorSpaceCreateDeviceRGB();
  lStack_48 = lVar4;
  if (lVar4 == 0) {
    func_0x0001078ba978();
    func_0x0001078baa08();
    func_0x0001078ba964();
    ___cxa_throw(lVar4);
  }
  else {
    lVar5 = *(long *)(param_1 + 8);
    _CGBitmapContextCreate(lVar5,uVar2,uVar3,8,uVar2 << 2,lVar4,1);
    lStack_50 = lVar5;
    if (lVar5 != 0) {
      _CGContextSetBlendMode(lVar5,0x11);
      _CGContextDrawImage(0,0,(double)uVar2,(double)uVar3,lVar5,param_2);
      *(undefined1 *)(param_1 + 0x10) = 0;
      func_0x0001078ba1c8(&lStack_50);
      func_0x0001078ba030(&lStack_48);
      return;
    }
    func_0x0001078ba978();
    func_0x0001078ba9dc();
    func_0x0001078ba964();
    ___cxa_throw(lVar5);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1078ba180);
  (*pcVar1)();
}



/* Entry: 1078ba954; end: 1078baa3b;  */

void FUN_1078ba954(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(param_2);
    return;
  }
  return;
}



/* Entry: 1078baf18; end: 1078baf3b;  */

void FUN_1078baf18(void)

{
  func_0x0001078bb6d8();
  _CGContextRelease();
  return;
}



/* Entry: 1078bb51c; end: 1078bb53f;  */

void FUN_1078bb51c(void)

{
  func_0x0001078bb6d8();
  _CFRelease();
  return;
}



/* Entry: 1078bb884; end: 1078bb8d7; -[MGLNativeNetworkManager sessionConfiguration] */

void FUN_1078bb884(long param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)(param_1 + 8);
  _objc_loadWeakRetained();
  func_0x00010c15fb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001078bba64();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126d5590;
    func_0x00010c26b6c0(PTR_PTR_1126d5590);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1078bba44; end: 1078bba87; -[MGLNativeNetworkManager .cxx_destruct] */

void FUN_1078bba44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1078bbe34; end: 1078bbeab;  */

void FUN_1078bbe34(undefined8 param_1)

{
  func_0x0001078bbf24();
  func_0x0001078bbf60();
  func_0x0001078bbf78();
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bf260e0();
  func_0x0001078bbf38();
  func_0x0001078bbf48();
  func_0x0001078bbf58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1078bc038; end: 1078bc06f;  */

void FUN_1078bc038(void)

{
  long unaff_x19;
  
  func_0x0001078bd6f8();
  if ((*(byte *)(unaff_x19 + 0x50) & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x50) = 1;
    func_0x0001078bd6e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1078bc168; end: 1078bc1ab;  */

void FUN_1078bc168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  
  func_0x0001078bd6f8();
  func_0x0001078bc504(unaff_x19 + 0x78,param_2,param_3);
  func_0x0001078bd6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1078bc2d8; end: 1078bc35b;  */

void FUN_1078bc2d8(long param_1)

{
  long *plVar1;
  undefined1 auStack_38 [24];
  
  if (((*(char *)(param_1 + 0x50) == '\x01') && (*(long *)(param_1 + 0x40) != 0)) &&
     (*(int *)(param_1 + 0xa8) == 0)) {
    plVar1 = *(long **)(param_1 + 0x40);
    func_0x0001078bc35c(auStack_38,param_1 + 0x58);
    (**(code **)(*plVar1 + 0x10))(plVar1,0x1132309e0,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  }
  return;
}



/* Entry: 1078bc650; end: 1078bc653;  */

void FUN_1078bc650(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8250;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078bc770; end: 1078bca07;  */

void FUN_1078bc770(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x28;
  
  func_0x0001078bd6e8();
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_DAT_1109e82a0;
  plVar7 = param_2 + 3;
  param_2[4] = 0;
  *plVar7 = 0;
  param_2[6] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_3 + 0x20);
  func_0x0001078bca2c(plVar7,*(undefined8 *)(param_3 + 8));
  plVar10 = (long *)(param_3 + 0x10);
  plVar1 = param_2 + 5;
LAB_1078bc7e0:
  do {
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      *(undefined4 *)(param_2 + 8) = 0;
      *param_1 = plVar7;
      param_1[1] = param_2;
      func_0x0001078bcc40(0);
      return;
    }
    puVar6 = param_2 + 6;
    func_0x000100102e7c(puVar6,plVar10 + 2);
    puVar11 = (undefined8 *)param_2[4];
    if (puVar11 != (undefined8 *)0x0) {
      uVar9 = (long)puVar11 - 1;
      if (((ulong)puVar11 & uVar9) == 0) {
        unaff_x28 = (undefined8 *)(uVar9 & (ulong)puVar6);
      }
      else {
        unaff_x28 = puVar6;
        if (puVar11 <= puVar6) {
          uVar2 = 0;
          if (puVar11 != (undefined8 *)0x0) {
            uVar2 = (ulong)puVar6 / (ulong)puVar11;
          }
          unaff_x28 = (undefined8 *)((long)puVar6 - uVar2 * (long)puVar11);
        }
      }
      plVar8 = *(long **)(*plVar7 + (long)unaff_x28 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_1078bc884;
            puVar3 = (undefined8 *)plVar8[1];
            if (puVar3 != puVar6) break;
            uVar2 = (ulong)(plVar8 + 2);
            func_0x0001000e107c(uVar2,plVar10 + 2);
            if ((uVar2 & 1) != 0) goto LAB_1078bc7e0;
          }
          if (((ulong)puVar11 & uVar9) == 0) {
            puVar3 = (undefined8 *)((ulong)puVar3 & uVar9);
          }
          else if (puVar11 <= puVar3) {
            uVar2 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              uVar2 = (ulong)puVar3 / (ulong)puVar11;
            }
            puVar3 = (undefined8 *)((long)puVar3 - uVar2 * (long)puVar11);
          }
        } while (puVar3 == unaff_x28);
      }
    }
LAB_1078bc884:
    plVar8 = (long *)0x30;
    __Znwm();
    *plVar8 = 0;
    plVar8[1] = (long)puVar6;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar8 + 2,plVar10 + 2)
    ;
    plVar8[5] = plVar10[5];
    if ((puVar11 == (undefined8 *)0x0) ||
       (*(float *)(param_2 + 7) * (float)puVar11 < (float)(param_2[6] + 1))) {
      func_0x0001078bd784((long)puVar11 << 1);
      func_0x0001078bca2c(plVar7);
      puVar11 = (undefined8 *)param_2[4];
      if (((ulong)puVar11 & (long)puVar11 - 1U) == 0) {
        unaff_x28 = (undefined8 *)((long)puVar11 - 1U & (ulong)puVar6);
      }
      else {
        unaff_x28 = puVar6;
        if (puVar11 <= puVar6) {
          uVar9 = 0;
          if (puVar11 != (undefined8 *)0x0) {
            uVar9 = (ulong)puVar6 / (ulong)puVar11;
          }
          unaff_x28 = (undefined8 *)((long)puVar6 - uVar9 * (long)puVar11);
        }
      }
    }
    lVar4 = *plVar7;
    plVar5 = *(long **)(lVar4 + (long)unaff_x28 * 8);
    if (plVar5 == (long *)0x0) {
      *plVar8 = *plVar1;
      *plVar1 = (long)plVar8;
      *(long **)(lVar4 + (long)unaff_x28 * 8) = plVar1;
      if (*plVar8 != 0) {
        puVar6 = *(undefined8 **)(*plVar8 + 8);
        if (((ulong)puVar11 & (long)puVar11 - 1U) == 0) {
          puVar6 = (undefined8 *)((ulong)puVar6 & (long)puVar11 - 1U);
        }
        else if (puVar11 <= puVar6) {
          uVar9 = 0;
          if (puVar11 != (undefined8 *)0x0) {
            uVar9 = (ulong)puVar6 / (ulong)puVar11;
          }
          puVar6 = (undefined8 *)((long)puVar6 - uVar9 * (long)puVar11);
        }
        *(long **)(lVar4 + (long)puVar6 * 8) = plVar8;
      }
    }
    else {
      *plVar8 = *plVar5;
      *plVar5 = (long)plVar8;
    }
    param_2[6] = param_2[6] + 1;
    func_0x0001078bd76c();
  } while( true );
}



/* Entry: 1078bcc34; end: 1078bcc4b;  */

void FUN_1078bcc34(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e82a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078bcf14; end: 1078bcfc3;  */

void FUN_1078bcf14(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *plVar4;
  long *extraout_x9_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_1078bcf5c:
    if (param_2 == 0) {
      func_0x0001078bd090(param_1);
      param_1[1] = 0;
    }
    else {
      plVar5 = param_1 + 1;
      func_0x0001078bd0a8(plVar5);
      func_0x0001078bd090(param_1,plVar5);
      param_1[1] = param_2;
      lVar3 = *param_1;
      for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
        *(undefined8 *)(lVar3 + uVar7 * 8) = 0;
      }
      if (param_1[2] != 0) {
        func_0x0001078bd808();
        func_0x0001078bd7f4();
        lVar3 = extraout_x8;
        plVar5 = extraout_x9;
        uVar7 = extraout_x10;
        uVar2 = extraout_x11;
        while (plVar4 = plVar5, plVar5 = (long *)*plVar4, plVar5 != (long *)0x0) {
          uVar6 = plVar5[1];
          if ((param_2 & uVar7) == 0) {
            uVar6 = uVar6 & uVar7;
          }
          else if (param_2 <= uVar6) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar6 / param_2;
            }
            uVar6 = uVar6 - uVar1 * param_2;
          }
          if (uVar6 != uVar2) {
            if (*(long *)(lVar3 + uVar6 * 8) == 0) {
              *(long **)(lVar3 + uVar6 * 8) = plVar4;
              uVar2 = uVar6;
            }
            else {
              func_0x0001078bd700();
              lVar3 = extraout_x8_00;
              plVar5 = extraout_x9_00;
              uVar7 = extraout_x10_00;
              uVar2 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar2 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001078bd720();
    }
    if (param_2 <= uVar2) {
      param_2 = uVar2;
    }
    if (param_2 < uVar7) goto LAB_1078bcf5c;
  }
  return;
}



/* Entry: 1078bd1b0; end: 1078bd20b;  */

undefined8 * FUN_1078bd1b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  func_0x0001078bd20c(param_1 + 4,param_2 + 4);
  func_0x0001078bd270(param_1 + 6,param_2 + 6);
  func_0x0001078bd2d4(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 1078bd39c; end: 1078bd3eb;  */

undefined8 * FUN_1078bd39c(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x0001078bd3ec(param_1 + 4);
  func_0x0001078bd490(param_1 + 6);
  func_0x0001078bd534(param_1 + 8);
  return param_1;
}



/* Entry: 1078bd5fc; end: 1078bd613;  */

void FUN_1078bd5fc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001078bd630(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078bda90; end: 1078bdb17;  */

ulong FUN_1078bda90(float param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  
  uVar7 = 0;
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if (0.0 <= param_1) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(param_1)) {
      bVar4 = param_1 < 1.0;
      bVar5 = param_1 == 1.0;
      bVar6 = false;
    }
  }
  if (bVar5 || bVar4 != bVar6) {
    lVar2 = *(long *)(param_2 + 0x20);
    iVar3 = (int)((*(long *)(param_2 + 0x28) - lVar2) / 0x2c);
    if (iVar3 != 0) {
      fVar10 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x38));
      uVar8 = 0;
      for (uVar9 = *(uint *)(lVar2 + 4); uVar9 <= (uint)(int)(param_1 * fVar10);
          uVar9 = *(int *)(lVar2 + (ulong)uVar1 * 0x2c + 4) + uVar9) {
        uVar1 = 0;
        if (uVar8 + 1 != iVar3) {
          uVar1 = uVar8 + 1;
        }
        uVar8 = uVar1;
      }
      uVar7 = (ulong)uVar8 | 0x100000000;
    }
  }
  return uVar7;
}



/* Entry: 1078bdd84; end: 1078bddd3;  */

void FUN_1078bdd84(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  
  uVar4 = param_2[2];
  uVar1 = *(undefined4 *)((long)param_2 + 0xc);
  piVar5 = (int *)*param_2;
  if (piVar5 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = piVar5;
  param_1[1] = CONCAT44(uVar1,param_3);
  param_1[2] = uVar4;
  func_0x0001078be084();
  return;
}



/* Entry: 1078be028; end: 1078be043;  */

void FUN_1078be028(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078be044(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078be7f4; end: 1078be877;  */

long FUN_1078be7f4(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  ulong uStack_90;
  ulong *puStack_88;
  
  Hint_Prefetch(*param_1,0,2,0);
  uVar8 = param_2;
  func_0x000104c2fe38(*param_1);
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_1;
  uVar5 = uVar7 >> 0xc ^ uVar8 >> 7;
  bVar3 = (byte)uVar8;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      uStack_90 = param_2;
      puStack_88 = param_1;
      iVar4 = (int)&uStack_90;
      func_0x000107473c00(&uStack_90,uVar1 + uVar9 * 0x48);
      if (iVar4 != 0) {
        return *param_1 + uVar9;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 1078be92c; end: 1078be93f;  */

void FUN_1078be92c(void)

{
  func_0x0001078be920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078bec6c; end: 1078bec73;  */

void FUN_1078bec6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078bf520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078bee50; end: 1078bee5b;  */

void FUN_1078bee50(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1078befdc; end: 1078bf04b;  */

/* WARNING: Possible PIC construction at 0x0001078bf010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078bf014) */
/* WARNING: Removing unreachable block (ram,0x0001078bf030) */
/* WARNING: Removing unreachable block (ram,0x0001078bf048) */
/* WARNING: Removing unreachable block (ram,0x0001078bf028) */
/* WARNING: Removing unreachable block (ram,0x0001078bf524) */

void FUN_1078befdc(undefined8 param_1,long param_2)

{
  long lVar1;
  long *extraout_x8;
  int extraout_w11;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  func_0x0001078bf4e8();
  func_0x0001078bf068(auStack_40,1);
  func_0x0001078bf0c0();
  func_0x0001078bf5d4();
  *extraout_x8 = lStack_30;
  extraout_x8[1] = param_2;
  lVar1 = 0;
  if (lStack_30 != 0) {
    lVar1 = lStack_30 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    uStack_48 = 0x1078bf014;
    lStack_58 = extraout_x8[1];
    puStack_50 = &stack0xfffffffffffffff0;
    if (lStack_58 != 0) {
      do {
        func_0x0001078bf55c();
      } while (extraout_w11 != 0);
    }
    func_0x0001078bf5a8();
    func_0x0001003a90c4(auStack_60);
    return;
  }
  return;
}



/* Entry: 1078bf124; end: 1078bf17b;  */

void FUN_1078bf124(long param_1,long param_2,undefined8 param_3)

{
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        func_0x0001078bf55c();
      } while (extraout_w11 != 0);
    }
    func_0x0001078bf5a8();
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1078bf2cc; end: 1078bf2ff;  */

undefined8 * FUN_1078bf2cc(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e85b8;
  param_1[1] = 0;
  func_0x00010811e1f4(param_1 + 3);
  return param_1;
}



/* Entry: 1078bf3dc; end: 1078bf4d3;  */

long FUN_1078bf3dc(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  uint6 uVar11;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar12;
  byte bVar18;
  undefined8 uStack_90;
  ulong *puStack_88;
  
  lVar6 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_1;
  uVar5 = uVar7 >> 0xc ^ param_3 >> 7;
  bVar3 = (byte)param_3;
  uVar11 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar5 = uVar5 & uVar2;
    uVar12 = *(undefined8 *)(uVar7 + uVar5);
    cVar13 = (char)((ulong)uVar12 >> 8);
    cVar14 = (char)((ulong)uVar12 >> 0x10);
    cVar15 = (char)((ulong)uVar12 >> 0x18);
    cVar16 = (char)((ulong)uVar12 >> 0x20);
    cVar17 = (char)((ulong)uVar12 >> 0x28);
    bVar10 = (byte)((ulong)uVar12 >> 0x30);
    bVar18 = (byte)((ulong)uVar12 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar18 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar10 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar17 == (char)(uVar11 >> 0x28)),
                                            CONCAT14(-(cVar16 == (char)(uVar11 >> 0x20)),
                                                     CONCAT13(-(cVar15 == (char)(uVar11 >> 0x18)),
                                                              CONCAT12(-(cVar14 ==
                                                                        (char)(uVar11 >> 0x10)),
                                                                       CONCAT11(-(cVar13 ==
                                                                                 (char)(uVar11 >> 8)
                                                                                 ),-((char)uVar12 ==
                                                                                    (char)uVar11))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar5 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      uStack_90 = param_2;
      puStack_88 = param_1;
      iVar4 = (int)&uStack_90;
      func_0x000107473c00(&uStack_90,uVar1 + uVar9 * 0x48);
      if (iVar4 != 0) {
        return *param_1 + uVar9;
      }
    }
    bVar10 = NEON_umaxv(CONCAT17(-(bVar18 == 0x80),
                                 CONCAT16(-(bVar10 == 0x80),
                                          CONCAT15(-(cVar17 == -0x80),
                                                   CONCAT14(-(cVar16 == -0x80),
                                                            CONCAT13(-(cVar15 == -0x80),
                                                                     CONCAT12(-(cVar14 == -0x80),
                                                                              CONCAT11(-(cVar13 ==
                                                                                        -0x80),-((
                                                  char)uVar12 == -0x80)))))))),1);
    if ((bVar10 & 1) != 0) break;
    lVar6 = lVar6 + 8;
    uVar5 = lVar6 + uVar5;
  }
  return 0;
}



/* Entry: 1078c1794; end: 1078c1807;  */

undefined8 * FUN_1078c1794(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 != 0) {
    do {
      func_0x0001078c5d48();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x0001078c17e0(&uStack_30);
  return param_1;
}



/* Entry: 1078c2260; end: 1078c22ab;  */

undefined8 * FUN_1078c2260(undefined8 *param_1)

{
  func_0x0001078c3de4(*param_1);
  return param_1;
}



/* Entry: 1078c2c50; end: 1078c2c73;  */

double FUN_1078c2c50(float param_1,undefined8 *param_2)

{
  return (double)((float)*param_2 / param_1);
}



/* Entry: 1078c31cc; end: 1078c322f;  */

void FUN_1078c31cc(long param_1)

{
  func_0x0001078c5f54();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1078c33e8; end: 1078c3693;  */

/* WARNING: Possible PIC construction at 0x0001078c37c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c37fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c383c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c38e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c391c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c3794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c3b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c3bcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c3c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c3c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078c35c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078c3c8c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3c68) */
/* WARNING: Removing unreachable block (ram,0x0001078c3bd0) */
/* WARNING: Removing unreachable block (ram,0x0001078c3bf4) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b20) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b3c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b48) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b54) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b80) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b84) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b70) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b7c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b8c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b94) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b30) */
/* WARNING: Removing unreachable block (ram,0x0001078c3b34) */
/* WARNING: Removing unreachable block (ram,0x0001078c3798) */
/* WARNING: Removing unreachable block (ram,0x0001078c3920) */
/* WARNING: Removing unreachable block (ram,0x0001078c38e8) */
/* WARNING: Removing unreachable block (ram,0x0001078c3840) */
/* WARNING: Removing unreachable block (ram,0x0001078c3800) */
/* WARNING: Removing unreachable block (ram,0x0001078c380c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3848) */
/* WARNING: Removing unreachable block (ram,0x0001078c3820) */
/* WARNING: Removing unreachable block (ram,0x0001078c3830) */
/* WARNING: Removing unreachable block (ram,0x0001078c384c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3854) */
/* WARNING: Removing unreachable block (ram,0x0001078c37cc) */
/* WARNING: Removing unreachable block (ram,0x0001078c37d8) */
/* WARNING: Removing unreachable block (ram,0x0001078c37e4) */
/* WARNING: Removing unreachable block (ram,0x0001078c3838) */
/* WARNING: Removing unreachable block (ram,0x0001078c37fc) */
/* WARNING: Removing unreachable block (ram,0x0001078c35c4) */
/* WARNING: Removing unreachable block (ram,0x0001078c35f4) */
/* WARNING: Removing unreachable block (ram,0x0001078c364c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3654) */
/* WARNING: Removing unreachable block (ram,0x0001078c363c) */
/* WARNING: Removing unreachable block (ram,0x0001078c35fc) */
/* WARNING: Removing unreachable block (ram,0x0001078c366c) */
/* WARNING: Removing unreachable block (ram,0x0001078c3658) */
/* WARNING: Removing unreachable block (ram,0x0001078c3674) */
/* WARNING: Removing unreachable block (ram,0x0001078c3604) */
/* WARNING: Removing unreachable block (ram,0x0001078c3628) */
/* WARNING: Removing unreachable block (ram,0x0001078c3618) */
/* WARNING: Removing unreachable block (ram,0x0001078c3634) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1078c33e8(undefined8 *******param_1,undefined8 *******param_2,undefined8 *******param_3,
                  undefined8 *******param_4,undefined8 *******param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined8 *******pppppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  ulong uVar8;
  undefined8 *******pppppppuVar9;
  long lVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar11;
  ulong uVar12;
  undefined8 *******unaff_x19;
  undefined8 *******unaff_x20;
  undefined8 *******unaff_x21;
  undefined8 *******unaff_x22;
  undefined8 *******pppppppuVar13;
  undefined8 *******unaff_x23;
  long lVar14;
  undefined8 *******unaff_x24;
  long lVar15;
  undefined8 *******unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 *******unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined *puVar16;
  undefined8 ******ppppppuVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined8 *puStack_b8;
  uint uStack_80;
  undefined8 uStack_58;
  
  puVar2 = auStack_d0;
  func_0x0001078c5bdc();
  uStack_58 = extraout_x8;
  uVar3 = param_3 == (undefined8 *******)0x2;
  pppppppuVar6 = param_2;
  if ((undefined8 *******)0x1 < param_3) {
    if ((bool)uVar3) {
      uVar3 = *(uint *)(param_2 + -5) == *(uint *)(param_1 + 8);
      if (*(uint *)(param_2 + -5) < *(uint *)(param_1 + 8)) {
        func_0x0001078c5b3c(extraout_x8);
        if (!(bool)uVar3) goto LAB_1078c3680;
        unaff_x28 = param_2 + -0xd;
        param_2 = param_3;
        pppppppuVar9 = param_4;
        pppppppuVar7 = unaff_x20;
        param_3 = unaff_x23;
        param_5 = unaff_x24;
code_r0x0001078c36ac:
        puVar2 = (undefined1 *)((long)register0x00000008 + -0x90);
        pppppppuVar4 = (undefined8 *******)((long)register0x00000008 + -0x90);
        pppppppuVar6 = (undefined8 *******)((long)register0x00000008 + -0x90);
        *(undefined8 ********)((long)register0x00000008 + -0x20) = pppppppuVar7;
        *(undefined8 ********)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
        func_0x0001078c5e98(param_1,unaff_x28);
        func_0x0001078c5bdc();
        *(undefined8 *)((long)register0x00000008 + -0x28) = extraout_x8_00;
        func_0x0001078c6064((undefined1 *)((long)register0x00000008 + -0x90));
        func_0x0001078c3da8(pppppppuVar7,unaff_x19);
        func_0x0001078c3da8(unaff_x19);
        func_0x0001078c2c24();
        func_0x0001078c5b3c(*(undefined8 *)((long)register0x00000008 + -0x28));
        if ((bool)uVar3) {
          return;
        }
        puVar16 = &SUB_1078c3710;
        ___stack_chk_fail();
        param_1 = pppppppuVar6;
        pppppppuVar13 = param_2;
        param_4 = pppppppuVar7;
        param_2 = unaff_x21;
code_r0x0001078c3710:
        *(long *)(puVar2 + -0x50) = unaff_x26;
        *(undefined8 ********)(puVar2 + -0x48) = unaff_x25;
        *(undefined8 ********)(puVar2 + -0x40) = param_5;
        *(undefined8 ********)(puVar2 + -0x38) = param_3;
        *(undefined8 ********)(puVar2 + -0x30) = unaff_x22;
        *(undefined8 ********)(puVar2 + -0x28) = param_2;
        *(undefined8 ********)(puVar2 + -0x20) = param_4;
        *(undefined8 ********)(puVar2 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar2 + -0x10) = (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)(puVar2 + -8) = puVar16;
        unaff_x29 = puVar2 + -0x10;
        if (pppppppuVar13 == (undefined8 *******)0x0) {
          return;
        }
        if (pppppppuVar13 == (undefined8 *******)0x2) {
          *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x58;
          *(undefined8 *)(puVar2 + -0x58) = 0;
          pppppppuVar7 = param_1;
          unaff_x28 = pppppppuVar4 + -0xd;
          if (*(uint *)(param_1 + 8) <= *(uint *)(pppppppuVar4 + -5)) {
            pppppppuVar7 = pppppppuVar4 + -0xd;
            unaff_x28 = param_1;
          }
          puVar16 = &UNK_1078c3798;
          puVar1 = puVar2 + -0x70;
          param_4 = pppppppuVar9;
        }
        else {
          if (pppppppuVar13 != (undefined8 *******)0x1) {
            pppppppuVar7 = pppppppuVar4;
            unaff_x28 = pppppppuVar4;
            if ((long)pppppppuVar13 < 9) {
              if (param_1 != pppppppuVar4) {
                *(undefined8 ********)(puVar2 + -0x68) = pppppppuVar9;
                *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x58;
                *(undefined8 *)(puVar2 + -0x58) = 0;
                func_0x0001078c5f10();
                puVar16 = &UNK_1078c37cc;
                puVar1 = puVar2 + -0x70;
                param_4 = param_1;
                goto code_r0x0001078c3378;
              }
            }
            else {
              uVar8 = (ulong)pppppppuVar13 >> 1;
              pppppppuVar13 = param_1 + uVar8 * 0xd;
              FUN_1078c33e8(param_1,pppppppuVar13,uVar8,pppppppuVar9,uVar8);
              param_4 = pppppppuVar13;
              FUN_1078c33e8();
              *(undefined8 ********)(puVar2 + -0x68) = pppppppuVar9;
              *(undefined1 **)(puVar2 + -0x60) = puVar2 + -0x58;
              *(undefined8 *)(puVar2 + -0x58) = 0;
              pppppppuVar6 = pppppppuVar13;
              while (param_1 != pppppppuVar13) {
                if (pppppppuVar6 == pppppppuVar4) {
                  if (param_1 == pppppppuVar13) goto code_r0x0001078c3934;
                  func_0x0001078c5f10();
                  puVar16 = &UNK_1078c3920;
                  puVar1 = puVar2 + -0x70;
                  goto code_r0x0001078c3378;
                }
                param_4 = pppppppuVar9;
                if (*(uint *)(param_1 + 8) <= *(uint *)(pppppppuVar6 + 8)) {
                  puVar16 = &UNK_1078c38e8;
                  puVar1 = puVar2 + -0x70;
                  unaff_x28 = param_1;
                  goto code_r0x0001078c3378;
                }
                func_0x0001078c60b8();
                pppppppuVar6 = pppppppuVar6 + 0xd;
                func_0x0001078c5c88();
                pppppppuVar9 = pppppppuVar9 + 0xd;
              }
              for (; pppppppuVar6 != pppppppuVar4; pppppppuVar6 = pppppppuVar6 + 0xd) {
                func_0x0001078c60b8(pppppppuVar9);
                pppppppuVar9 = pppppppuVar9 + 0xd;
                func_0x0001078c5c88();
              }
code_r0x0001078c3934:
              *(undefined8 *)(puVar2 + -0x68) = 0;
              func_0x0001078c395c(puVar2 + -0x68);
            }
            return;
          }
          func_0x0001078c5f10();
          unaff_x29 = *(undefined1 **)(puVar2 + -0x10);
          puVar16 = *(undefined **)(puVar2 + -8);
          puVar1 = puVar2;
          param_4 = param_1;
          unaff_x28 = pppppppuVar4;
          pppppppuVar9 = *(undefined8 ********)(puVar2 + -0x18);
          pppppppuVar7 = *(undefined8 ********)(puVar2 + -0x20);
        }
code_r0x0001078c3378:
        *(undefined8 ********)(puVar1 + -0x20) = pppppppuVar7;
        *(undefined8 ********)(puVar1 + -0x18) = pppppppuVar9;
        *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
        *(undefined **)(puVar1 + -8) = puVar16;
        func_0x000104c318bc();
        param_4[7] = unaff_x28[7];
        unaff_x28[7] = (undefined8 ******)0x0;
        ppppppuVar17 = unaff_x28[9];
        ppppppuVar5 = unaff_x28[8];
        ppppppuVar19 = unaff_x28[0xb];
        ppppppuVar18 = unaff_x28[10];
        param_4[0xc] = unaff_x28[0xc];
        param_4[9] = ppppppuVar17;
        param_4[8] = ppppppuVar5;
        param_4[0xb] = ppppppuVar19;
        param_4[10] = ppppppuVar18;
        return;
      }
    }
    else {
      if (0 < (long)param_3) {
        pppppppuVar13 = (undefined8 *******)((ulong)param_3 >> 1);
        pppppppuVar4 = param_1 + (long)pppppppuVar13 * 0xd;
        uVar3 = param_3 == param_5;
        if ((long)param_5 < (long)param_3) {
          func_0x0001078c606c(param_1,pppppppuVar4,pppppppuVar13);
          lVar14 = (long)param_3 - (long)pppppppuVar13;
          func_0x0001078c606c(pppppppuVar4,param_2,lVar14);
          func_0x0001078c5b3c(uStack_58);
          pppppppuVar7 = param_1;
          pppppppuVar9 = pppppppuVar13;
          if ((bool)uVar3) {
            do {
              puVar1 = (undefined1 *)((long)register0x00000008 + -0xb0);
              *(undefined8 ********)((long)register0x00000008 + -0x60) = unaff_x28;
              *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
              *(long *)((long)register0x00000008 + -0x50) = unaff_x26;
              *(undefined8 ********)((long)register0x00000008 + -0x48) = unaff_x25;
              *(undefined8 ********)((long)register0x00000008 + -0x40) = unaff_x24;
              *(undefined8 ********)((long)register0x00000008 + -0x38) = unaff_x23;
              *(undefined8 ********)((long)register0x00000008 + -0x30) = unaff_x22;
              *(undefined8 ********)((long)register0x00000008 + -0x28) = unaff_x21;
              *(undefined8 ********)((long)register0x00000008 + -0x20) = unaff_x20;
              *(undefined8 ********)((long)register0x00000008 + -0x18) = unaff_x19;
              *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
              *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
              unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
              lVar10 = lVar14;
              unaff_x28 = pppppppuVar4;
              unaff_x24 = param_2;
              while( true ) {
                if (lVar10 == 0) {
                  return;
                }
                if (lVar10 <= (long)param_5 || (long)pppppppuVar9 <= (long)param_5) {
                  *(undefined8 ********)((long)register0x00000008 + -0x78) = param_4;
                  *(undefined1 **)((long)register0x00000008 + -0x70) =
                       (undefined1 *)((long)register0x00000008 + -0x68);
                  *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
                  if (lVar10 < (long)pppppppuVar9) {
                    pppppppuVar6 = param_4;
                    if (unaff_x28 == unaff_x24) goto code_r0x0001078c3d04;
                    puVar16 = &UNK_1078c3c68;
                    puVar1 = (undefined1 *)((long)register0x00000008 + -0xb0);
                    pppppppuVar9 = (undefined8 *******)0x0;
                  }
                  else {
                    pppppppuVar6 = param_4;
                    if (pppppppuVar7 == unaff_x28) goto code_r0x0001078c3ccc;
                    puVar16 = &UNK_1078c3c8c;
                    unaff_x28 = pppppppuVar7;
                    pppppppuVar9 = pppppppuVar7;
                  }
                  goto code_r0x0001078c3378;
                }
                unaff_x27 = 0;
                unaff_x26 = -(long)pppppppuVar9;
                while( true ) {
                  if (unaff_x26 == 0) {
                    return;
                  }
                  unaff_x25 = (undefined8 *******)((long)pppppppuVar7 + unaff_x27);
                  if (*(uint *)(unaff_x28 + 8) < *(uint *)(unaff_x25 + 8)) break;
                  unaff_x27 = unaff_x27 + 0x68;
                  unaff_x26 = unaff_x26 + 1;
                }
                *(undefined8 ********)((long)register0x00000008 + -0x80) = unaff_x24;
                if (-unaff_x26 < lVar10) {
                  lVar14 = lVar10 / 2;
                  unaff_x19 = unaff_x28 + lVar14 * 0xd;
                  param_1 = unaff_x25;
                  uVar8 = (long)((long)unaff_x28 + (-unaff_x27 - (long)pppppppuVar7)) / 0x68;
                  while (uVar8 != 0) {
                    uVar11 = uVar8 >> 1;
                    uVar12 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
                    uVar8 = uVar11;
                    if (*(uint *)(param_1 + uVar11 * 0xd + 8) <= *(uint *)(unaff_x19 + 8)) {
                      param_1 = param_1 + uVar11 * 0xd + 0xd;
                      uVar8 = uVar12;
                    }
                  }
                  pppppppuVar9 = (undefined8 *******)
                                 ((long)((long)param_1 + (-unaff_x27 - (long)pppppppuVar7)) / 0x68);
                }
                else {
                  if (unaff_x26 == -1) {
                    param_1 = (undefined8 *******)((long)pppppppuVar7 + unaff_x27);
                    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
                    unaff_x30 = *(undefined **)((long)register0x00000008 + -8);
                    pppppppuVar7 = *(undefined8 ********)((long)register0x00000008 + -0x20);
                    unaff_x19 = *(undefined8 ********)((long)register0x00000008 + -0x18);
                    unaff_x22 = *(undefined8 ********)((long)register0x00000008 + -0x30);
                    unaff_x21 = *(undefined8 ********)((long)register0x00000008 + -0x28);
                    param_5 = *(undefined8 ********)((long)register0x00000008 + -0x40);
                    param_3 = *(undefined8 ********)((long)register0x00000008 + -0x38);
                    unaff_x26 = *(long *)((long)register0x00000008 + -0x50);
                    unaff_x25 = *(undefined8 ********)((long)register0x00000008 + -0x48);
                    uVar3 = 1;
                    goto code_r0x0001078c36ac;
                  }
                  pppppppuVar9 = (undefined8 *******)(-unaff_x26 / 2);
                  param_1 = (undefined8 *******)
                            ((long)pppppppuVar7 + unaff_x27 + (long)pppppppuVar9 * 0x68);
                  pppppppuVar6 = unaff_x28;
                  uVar8 = ((long)unaff_x24 - (long)unaff_x28) / 0x68;
                  while (unaff_x19 = pppppppuVar6, uVar8 != 0) {
                    uVar12 = uVar8 >> 1;
                    pppppppuVar6 = unaff_x19 + uVar12 * 0xd + 0xd;
                    uVar8 = uVar8 + (uVar8 >> 1 ^ 0xffffffffffffffff);
                    if (*(uint *)(param_1 + 8) <= *(uint *)(unaff_x19 + uVar12 * 0xd + 8)) {
                      pppppppuVar6 = unaff_x19;
                      uVar8 = uVar12;
                    }
                  }
                  lVar14 = ((long)unaff_x19 - (long)unaff_x28) / 0x68;
                }
                unaff_x24 = unaff_x19;
                unaff_x21 = param_1;
                if ((param_1 != unaff_x28) &&
                   (uVar3 = unaff_x28 == unaff_x19, unaff_x24 = param_1, !(bool)uVar3)) {
                  *(undefined8 ********)((long)register0x00000008 + -0xa0) = pppppppuVar9;
                  *(long *)((long)register0x00000008 + -0x98) = lVar14;
                  *(long *)((long)register0x00000008 + -0x90) = lVar10;
                  *(undefined8 ********)((long)register0x00000008 + -0x88) = param_5;
                  unaff_x30 = &UNK_1078c3b20;
                  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
                  unaff_x22 = unaff_x28;
                  param_3 = param_4;
                  param_5 = param_1;
                  goto code_r0x0001078c36ac;
                }
                unaff_x22 = (undefined8 *******)(lVar10 - lVar14);
                if ((long)((long)pppppppuVar9 + lVar14) <
                    (lVar10 - ((long)pppppppuVar9 + lVar14)) - unaff_x26) break;
                param_2 = *(undefined8 ********)((long)register0x00000008 + -0x80);
                func_0x0001078c39a4(unaff_x24,unaff_x19,param_2,
                                    -(long)((long)pppppppuVar9 + unaff_x26),unaff_x22,param_4);
                pppppppuVar7 = (undefined8 *******)((long)pppppppuVar7 + unaff_x27);
                lVar10 = lVar14;
                unaff_x28 = param_1;
              }
              unaff_x26 = -(long)((long)pppppppuVar9 + unaff_x26);
              unaff_x30 = &UNK_1078c3bd0;
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
              pppppppuVar7 = unaff_x25;
              pppppppuVar4 = param_1;
              param_2 = unaff_x24;
              unaff_x20 = param_5;
              unaff_x23 = param_4;
            } while( true );
          }
          goto LAB_1078c3680;
        }
        uStack_c8 = 0;
        pppppppuStack_c0 = param_4;
        puStack_b8 = &uStack_c8;
        puVar16 = (undefined *)0x1078c35c4;
        pppppppuVar9 = param_4;
        unaff_x19 = param_1;
        unaff_x22 = pppppppuVar13;
        unaff_x25 = pppppppuVar4;
        goto code_r0x0001078c3710;
      }
      uVar3 = param_1 == param_2;
      if (!(bool)uVar3) {
        lVar14 = 0;
        pppppppuVar4 = param_1;
        while( true ) {
          uVar3 = true;
          if (pppppppuVar4 + 0xd == param_2) break;
          if (*(uint *)(pppppppuVar4 + 0x15) < *(uint *)(pppppppuVar4 + 8)) {
            func_0x0001078c6064(&pppppppuStack_c0);
            lVar10 = lVar14;
            do {
              lVar15 = lVar10;
              puVar1 = (undefined1 *)((long)param_1 + lVar15);
              func_0x0001078c3da8(puVar1 + 0x68,puVar1);
              pppppppuVar13 = param_1;
              if (lVar15 == 0) goto LAB_1078c3588;
              lVar10 = lVar15 + -0x68;
            } while (uStack_80 < *(uint *)(puVar1 + -0x28));
            pppppppuVar13 = (undefined8 *******)((long)param_1 + lVar15);
LAB_1078c3588:
            pppppppuVar6 = &pppppppuStack_c0;
            func_0x0001078c3da8(pppppppuVar13);
            func_0x0001078c2c24(&pppppppuStack_c0);
          }
          lVar14 = lVar14 + 0x68;
          pppppppuVar4 = pppppppuVar4 + 0xd;
        }
      }
    }
  }
  func_0x0001078c5b3c(uStack_58);
  if ((bool)uVar3) {
    return;
  }
LAB_1078c3680:
  ___stack_chk_fail();
  pppppppuVar4 = &pppppppuStack_c0;
  func_0x0001078c395c();
  func_0x0001078c5cc8();
  ppppppuVar5 = *pppppppuVar4;
  *pppppppuVar4 = pppppppuVar6;
  if (ppppppuVar5 == (undefined8 ******)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
code_r0x0001078c3d04:
  unaff_x24 = unaff_x24 + -0xd;
  if (pppppppuVar6 == param_4) goto code_r0x0001078c3d58;
  if (unaff_x28 == pppppppuVar7) goto code_r0x0001078c3d50;
  pppppppuVar4 = pppppppuVar6;
  pppppppuVar9 = unaff_x28 + -0xd;
  pppppppuVar13 = unaff_x28 + -0xd;
  if (*(uint *)(unaff_x28 + -5) <= *(uint *)(pppppppuVar6 + -5)) {
    pppppppuVar4 = pppppppuVar6 + -0xd;
    pppppppuVar9 = unaff_x28;
    pppppppuVar13 = pppppppuVar6 + -0xd;
  }
  unaff_x28 = pppppppuVar9;
  func_0x0001078c3da8(unaff_x24,pppppppuVar13);
  pppppppuVar6 = pppppppuVar4;
  goto code_r0x0001078c3d04;
code_r0x0001078c3d50:
  while (pppppppuVar6 != param_4) {
    pppppppuVar6 = pppppppuVar6 + -0xd;
    func_0x0001078c3da8(unaff_x24,pppppppuVar6);
    unaff_x24 = unaff_x24 + -0xd;
  }
  goto code_r0x0001078c3d58;
code_r0x0001078c3ccc:
  if (param_4 == pppppppuVar6) goto code_r0x0001078c3d58;
  if (unaff_x28 == unaff_x24) goto code_r0x0001078c3cf4;
  if (*(uint *)(unaff_x28 + 8) < *(uint *)(pppppppuVar6 + 8)) {
    func_0x0001078c3da8(pppppppuVar7,unaff_x28);
    unaff_x28 = unaff_x28 + 0xd;
  }
  else {
    func_0x0001078c3da8(pppppppuVar7,pppppppuVar6);
    pppppppuVar6 = pppppppuVar6 + 0xd;
  }
  pppppppuVar7 = pppppppuVar7 + 0xd;
  goto code_r0x0001078c3ccc;
code_r0x0001078c3cf4:
  for (; param_4 != pppppppuVar6; pppppppuVar6 = pppppppuVar6 + 0xd) {
    func_0x0001078c3da8(pppppppuVar7,pppppppuVar6);
    pppppppuVar7 = pppppppuVar7 + 0xd;
  }
code_r0x0001078c3d58:
  func_0x0001078c395c((undefined1 *)((long)register0x00000008 + -0x78));
  return;
}



/* Entry: 1078c3df0; end: 1078c40e7;  */

void FUN_1078c3df0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long extraout_x8;
  undefined8 *puVar7;
  long extraout_x8_00;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long *plStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  
  func_0x0001078c5e7c();
  func_0x0001078c40e8();
  if (param_1 != 0) goto LAB_1078c3fdc;
  if ((ulong)unaff_x19[4] < 0x200) {
    puVar13 = (undefined8 *)unaff_x19[1];
    puVar12 = (undefined8 *)unaff_x19[2];
    puVar10 = (undefined8 *)*unaff_x19;
    uVar11 = (long)puVar12 - (long)puVar13;
    plVar5 = unaff_x19 + 3;
    puVar9 = (undefined8 *)*plVar5;
    if ((ulong)((long)puVar9 - (long)puVar10) <= uVar11) {
      puVar6 = (undefined8 *)((long)puVar9 - (long)puVar10 >> 2);
      if (puVar9 == puVar10) {
        puVar6 = (undefined8 *)0x1;
      }
      plStack_98 = plVar5;
      func_0x0001078c4218();
      puVar9 = (undefined8 *)((long)puVar6 + uVar11);
      puVar10 = puVar6 + param_2;
      uVar4 = 0x1000;
      lVar8 = param_2;
      puStack_b8 = puVar6;
      puStack_b0 = puVar9;
      puStack_a8 = puVar9;
      puStack_a0 = puVar10;
      __Znwm();
      plStack_c8 = unaff_x19 + 5;
      uStack_c0 = 0x200;
      puVar7 = puVar9;
      if (uVar11 == param_2 * 8) {
        uStack_d0 = uVar4;
        if (puVar12 == puVar13) {
          puVar13 = (undefined8 *)0x1;
          plStack_70 = plVar5;
          func_0x0001078c4218();
          puStack_78 = puVar13 + lVar8;
          puStack_90 = puVar13;
          puStack_88 = puVar13;
          puStack_80 = puVar13;
          func_0x0001078c41f0(&puStack_90,puVar9,puVar9);
          puVar1 = puStack_78;
          puVar7 = puStack_80;
          puVar12 = puStack_88;
          puVar13 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a0 = puStack_78;
          puStack_90 = puVar6;
          puStack_88 = puVar9;
          puStack_80 = puVar9;
          puStack_78 = puVar10;
          func_0x0001078c5ffc();
          puVar6 = puVar13;
          puVar9 = puVar12;
          puVar10 = puVar1;
        }
        else {
          func_0x0001078c6128((long)puVar9 - (long)puVar6);
          puVar9 = puVar9 + extraout_x8 / -2;
          puVar7 = puVar9;
          puStack_b0 = puVar9;
        }
      }
      puVar13 = puVar7 + 1;
      *puVar7 = uVar4;
      uStack_d0 = 0;
      puVar12 = (undefined8 *)unaff_x19[2];
      puStack_a8 = puVar13;
      while (puVar7 = (undefined8 *)unaff_x19[1], puVar12 != puVar7) {
        puVar7 = puVar9;
        if (puVar9 == puVar6) {
          if (puVar13 < puVar10) {
            func_0x0001078c6128((long)puVar10 - (long)puVar13);
            lVar8 = (long)puVar13 - (long)puVar6;
            puVar1 = puVar13 + extraout_x8_00 / 2;
            puVar7 = (undefined8 *)((long)puVar1 - ((long)puVar13 - (long)puVar6));
            puVar13 = puVar1;
            if (lVar8 != 0) {
              _memmove(puVar7,puVar9,lVar8);
            }
          }
          else {
            lVar8 = (long)puVar10 - (long)puVar6 >> 2;
            if ((long)puVar10 - (long)puVar6 == 0) {
              lVar8 = 1;
            }
            plStack_70 = plVar5;
            func_0x0001078c4218(lVar8);
            func_0x0001078c5fc8(lVar8 * 2 + 6);
            func_0x0001078c41f0(&puStack_90,puVar6,puVar13);
            puVar3 = puStack_78;
            puVar2 = puStack_80;
            puVar7 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar6;
            puStack_88 = puVar9;
            puStack_80 = puVar13;
            puStack_78 = puVar10;
            func_0x0001078c5ffc();
            puVar6 = puVar1;
            puVar13 = puVar2;
            puVar10 = puVar3;
          }
        }
        puVar12 = puVar12 + -1;
        puVar9 = puVar7 + -1;
        *puVar9 = *puVar12;
      }
      puStack_b8 = (undefined8 *)*unaff_x19;
      *unaff_x19 = (long)puVar6;
      unaff_x19[1] = (long)puVar9;
      puStack_a0 = (undefined8 *)unaff_x19[3];
      puStack_a8 = (undefined8 *)unaff_x19[2];
      unaff_x19[2] = (long)puVar13;
      unaff_x19[3] = (long)puVar10;
      puStack_b0 = puVar7;
      func_0x0001078c424c(&uStack_d0);
      func_0x0001078c4270(&puStack_b8);
      goto LAB_1078c3fdc;
    }
    uVar4 = 0x1000;
    __Znwm();
    if (puVar9 != puVar12) {
      *puVar12 = uVar4;
      unaff_x19[2] = (long)(puVar12 + 1);
      goto LAB_1078c3fdc;
    }
    if (puVar13 == puVar10) {
      lVar8 = (long)puVar9 - (long)puVar13 >> 2;
      if (puVar12 == puVar13) {
        lVar8 = 1;
      }
      plStack_70 = plVar5;
      func_0x0001078c4218();
      func_0x0001078c5fc8(lVar8 * 2 + 6);
      func_0x0001078c41f0(&puStack_90,unaff_x19[1],unaff_x19[2]);
      puVar12 = (undefined8 *)unaff_x19[1];
      puVar13 = (undefined8 *)*unaff_x19;
      puVar10 = (undefined8 *)unaff_x19[3];
      puVar9 = (undefined8 *)unaff_x19[2];
      unaff_x19[1] = (long)puStack_88;
      *unaff_x19 = (long)puStack_90;
      unaff_x19[3] = (long)puStack_78;
      unaff_x19[2] = (long)puStack_80;
      puStack_90 = puVar13;
      puStack_88 = puVar12;
      puStack_80 = puVar9;
      puStack_78 = puVar10;
      func_0x0001078c5ffc();
      puVar13 = (undefined8 *)unaff_x19[1];
    }
    puVar13[-1] = uVar4;
    unaff_x19[1] = (long)puVar13;
    func_0x0001078c5f10();
  }
  else {
    func_0x0001078c5fb0(unaff_x19[4] - 0x200);
  }
  func_0x0001078c412c();
LAB_1078c3fdc:
  plVar5 = unaff_x19;
  func_0x0001078c40fc();
  *plVar5 = unaff_x20;
  unaff_x19[5] = unaff_x19[5] + 1;
  return;
}



/* Entry: 1078c43d0; end: 1078c44f3;  */

void FUN_1078c43d0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001078c5e98();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x88) * 0x88;
  func_0x0001077dea58(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1078c4688; end: 1078c4713;  */

long FUN_1078c4688(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x38) {
    func_0x0001078c4714(param_4,param_2);
    param_4 = lStack_38 + 0x38;
  }
  uStack_48 = 1;
  func_0x0001074c5fb4(&uStack_60);
  return param_4;
}



/* Entry: 1078c492c; end: 1078c4933;  */

void FUN_1078c492c(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong unaff_x27;
  byte bVar2;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  
  uVar1 = *param_1;
  func_0x0001078c5e28();
  func_0x0001072cb490();
  func_0x0001078c5f64();
  func_0x0001078c6140();
  func_0x0001078c5dc8();
  do {
    func_0x0001078c5f98();
    for (; unaff_x27 != 0; unaff_x27 = unaff_x27 - 1 & unaff_x27) {
      func_0x0001078c5ea4();
      func_0x0001078c57b0();
      if ((int)uVar1 != 0) {
        func_0x0001078c6114();
        return;
      }
    }
    bVar2 = NEON_umaxv(CONCAT17(-((char)((ulong)unaff_d10 >> 0x38) ==
                                 (char)((ulong)unaff_d9 >> 0x38)),
                                CONCAT16(-((char)((ulong)unaff_d10 >> 0x30) ==
                                          (char)((ulong)unaff_d9 >> 0x30)),
                                         CONCAT15(-((char)((ulong)unaff_d10 >> 0x28) ==
                                                   (char)((ulong)unaff_d9 >> 0x28)),
                                                  CONCAT14(-((char)((ulong)unaff_d10 >> 0x20) ==
                                                            (char)((ulong)unaff_d9 >> 0x20)),
                                                           CONCAT13(-((char)((ulong)unaff_d10 >>
                                                                            0x18) ==
                                                                     (char)((ulong)unaff_d9 >> 0x18)
                                                                     ),CONCAT12(-((char)((ulong)
                                                  unaff_d10 >> 0x10) ==
                                                  (char)((ulong)unaff_d9 >> 0x10)),
                                                  CONCAT11(-((char)((ulong)unaff_d10 >> 8) ==
                                                            (char)((ulong)unaff_d9 >> 8)),
                                                           -((char)unaff_d10 == (char)unaff_d9))))))
                                        )),1);
  } while ((bVar2 & 1) == 0);
  return;
}



/* Entry: 1078c568c; end: 1078c5747;  */

void FUN_1078c568c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x0001078c5e98();
  func_0x00010726ccd4();
  func_0x000104c318bc(param_1 + 0x60,unaff_x19 + 0x60);
  func_0x000104c318bc(unaff_x20 + 0x98,unaff_x19 + 0x98);
  *(undefined4 *)(unaff_x20 + 0xd0) = *(undefined4 *)(unaff_x19 + 0xd0);
  *(undefined4 *)(unaff_x20 + 0xd4) = *(undefined4 *)(unaff_x19 + 0xd4);
  *(undefined8 *)(unaff_x20 + 0xd8) = *(undefined8 *)(unaff_x19 + 0xd8);
  *(undefined4 *)(unaff_x20 + 0xe0) = *(undefined4 *)(unaff_x19 + 0xe0);
  *(undefined4 *)(unaff_x20 + 0xe4) = *(undefined4 *)(unaff_x19 + 0xe4);
  *(undefined4 *)(unaff_x20 + 0xe8) = *(undefined4 *)(unaff_x19 + 0xe8);
  *(undefined1 *)(unaff_x20 + 0xec) = *(undefined1 *)(unaff_x19 + 0xec);
  *(undefined1 *)(unaff_x20 + 0xed) = *(undefined1 *)(unaff_x19 + 0xed);
  *(undefined4 *)(unaff_x20 + 0xf0) = *(undefined4 *)(unaff_x19 + 0xf0);
  *(undefined4 *)(unaff_x20 + 0xf4) = *(undefined4 *)(unaff_x19 + 0xf4);
  uVar1 = *(undefined8 *)(unaff_x19 + 0xf8);
  *(undefined8 *)(unaff_x20 + 0x100) = *(undefined8 *)(unaff_x19 + 0x100);
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar1;
  *(undefined4 *)(unaff_x20 + 0x108) = *(undefined4 *)(unaff_x19 + 0x108);
  return;
}



/* Entry: 1078c590c; end: 1078c5913;  */

void FUN_1078c590c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078c6054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078c5b10; end: 1078c6163;  */

void FUN_1078c5b10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078cac38; end: 1078cad33;  */

/* WARNING: Possible PIC construction at 0x0001078cad00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078cad04) */
/* WARNING: Removing unreachable block (ram,0x0001078cad18) */
/* WARNING: Removing unreachable block (ram,0x0001078cad10) */
/* WARNING: Removing unreachable block (ram,0x0001078d229c) */

long * FUN_1078cac38(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  
  func_0x0001078d2214();
  uStack_58 = 1;
  puVar3 = (undefined8 *)0x368;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_1109e8a68;
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  puStack_50 = puVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001078d2394();
    } while (extraout_w10 != 0);
  }
  func_0x0001074698a0(puVar3 + 3,param_3);
  puVar3[3] = &PTR_SUB_1109e8ab8;
  puVar3[0x6a] = 0;
  puVar3[0x69] = 0;
  puVar3[0x6b] = uVar1;
  puVar3[0x6c] = lVar2;
  if (lVar2 != 0) {
    do {
      func_0x0001078d2394();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001078d26e0();
  puStack_50 = (undefined8 *)0x0;
  func_0x0001078d1c30(&uStack_60);
  *param_1 = (long)(puVar3 + 3);
  param_1[1] = (long)puVar3;
  uStack_60 = 0;
  uStack_58 = 0;
  puVar3 = &uStack_60;
  func_0x0001078d2be4();
  if (puVar3 != (undefined8 *)0x0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078cb65c; end: 1078cb68b;  */

void FUN_1078cb65c(void)

{
  func_0x0001078cf1f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078cd108; end: 1078cd113;  */

void FUN_1078cd108(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1078cdc08; end: 1078cdc97;  */

void FUN_1078cdc08(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078d25ec();
  cVar1 = *(char *)(param_1 + 0x48);
  if (cVar1 == *(char *)(param_2 + 0x48)) {
    if (cVar1 != '\0') {
      func_0x0001078beedc();
      uVar2 = *(undefined8 *)(unaff_x20 + 8);
      *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(unaff_x20 + 0x10);
      *(undefined8 *)(unaff_x19 + 8) = uVar2;
      uVar2 = *(undefined8 *)(unaff_x20 + 0x19);
      *(undefined8 *)(unaff_x19 + 0x14) = *(undefined8 *)(unaff_x20 + 0x14);
      *(undefined8 *)(unaff_x19 + 0x19) = uVar2;
      func_0x0001002a8208(unaff_x19 + 0x28,unaff_x20 + 0x28);
    }
  }
  else if (cVar1 == '\0') {
    func_0x0001078ce2f0();
    *(undefined1 *)(unaff_x19 + 0x48) = 1;
  }
  else {
    func_0x0001078ce2c8();
    *(undefined1 *)(unaff_x19 + 0x48) = 0;
  }
  return;
}



/* Entry: 1078cdedc; end: 1078cdfef;  */

long * FUN_1078cdedc(long *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar4 = (long *)(param_1[1] + ((ulong)param_1[4] / 0xaa) * 8);
  if (param_1[2] == param_1[1]) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)(*plVar4 + ((ulong)param_1[4] % 0xaa) * 0x18);
  }
  plVar2 = param_1;
  func_0x0001078ce00c();
  do {
    plVar6 = plVar5 + -0x1fe;
    do {
      uVar1 = plVar2 <= plVar5;
      if (plVar5 == plVar2) {
        param_1[5] = 0;
        plVar5 = (long *)param_1[1];
        while (func_0x0001078d2ab8(), (bool)uVar1) {
          __ZdlPv(*plVar5);
          plVar5 = (long *)(param_1[1] + 8);
          param_1[1] = (long)plVar5;
        }
        if (extraout_x8 == 1) {
          lVar3 = 0x55;
        }
        else {
          if (extraout_x8 != 2) goto LAB_1078cdfb8;
          lVar3 = 0xaa;
        }
        param_1[4] = lVar3;
LAB_1078cdfb8:
        for (; plVar5 != plVar4; plVar5 = plVar5 + 1) {
          __ZdlPv(*plVar5);
        }
        lVar3 = param_1[2];
        while (lVar3 != param_1[1]) {
          lVar3 = lVar3 + -8;
          param_1[2] = lVar3;
        }
        if (*param_1 != 0) {
          __ZdlPv();
        }
        return param_1;
      }
      func_0x0001078d2960();
      plVar5 = plVar5 + 3;
      plVar6 = plVar6 + 3;
    } while ((long *)*plVar4 != plVar6);
    plVar4 = plVar4 + 1;
    plVar5 = (long *)*plVar4;
  } while( true );
}



/* Entry: 1078ce210; end: 1078ce22f;  */

void FUN_1078ce210(void)

{
  func_0x0001078d26f0();
  func_0x0001078ce204();
  return;
}



/* Entry: 1078ce3d0; end: 1078ce3e3;  */

void FUN_1078ce3d0(void)

{
  func_0x0001078ce3ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078ce508; end: 1078ce51b;  */

void FUN_1078ce508(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *extraout_x8;
  int extraout_w11;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  *extraout_x8 = puVar2;
  extraout_x8[1] = param_2;
  puVar1 = (undefined *)0x0;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2 + 8;
  }
  if ((puVar1 != (undefined *)0x0) &&
     ((*(long *)(puVar1 + 8) == 0 || (*(long *)(*(long *)(puVar1 + 8) + 8) == -1)))) {
    if (extraout_x8[1] != 0) {
      do {
        func_0x0001078d2300();
      } while (extraout_w11 != 0);
    }
    func_0x0001078d2a6c();
    func_0x0001078d2a80();
    return;
  }
  return;
}



/* Entry: 1078ce614; end: 1078ce62f;  */

void FUN_1078ce614(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078ce7a0; end: 1078ce82f;  */

void FUN_1078ce7a0(long param_1)

{
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [160];
  
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  func_0x0001078cbdbc(auStack_c0,*(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x1b0),0
                      ,&uStack_e0,*(undefined1 *)(param_1 + 0x1b8));
  func_0x0001057f951c(&uStack_e0);
  func_0x0001078bee2c(&uStack_c8);
  func_0x0001078ccdac(param_1,auStack_c0);
  func_0x0001078ccfc8(auStack_c0);
  return;
}



/* Entry: 1078cef80; end: 1078cefbf;  */

long FUN_1078cef80(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) * 0x40 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 1078cf2c4; end: 1078cf35f;  */

void FUN_1078cf2c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar1 = 0x268;
  __Znwm();
  func_0x00010002b838(auStack_58,param_2);
  func_0x00010002b838(auStack_70,param_3);
  func_0x0001078cf384(uVar1,auStack_58,auStack_70,param_4);
  *param_1 = uVar1;
  func_0x0001078d27e0();
  func_0x0001078d2724();
  return;
}



/* Entry: 1078d18fc; end: 1078d1917;  */

void FUN_1078d18fc(long param_1)

{
  func_0x0001077e620c();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 1078d1b54; end: 1078d1ba7;  */

long * FUN_1078d1b54(long param_1)

{
  long lVar1;
  long *unaff_x19;
  
  func_0x0001078cab7c(param_1 + 0x18);
  func_0x000107276ba4(param_1 + 0x1d0);
  __ZNSt3__15mutexD1Ev(param_1 + 400);
  func_0x000104c2f714(param_1 + 0x148);
  func_0x000104c2f714(param_1 + 0x100);
  func_0x000107276ba4(param_1 + 0x58);
  func_0x0001078d28a0(param_1 + 0x30);
  func_0x0001078d1bf8();
  lVar1 = *unaff_x19;
  *unaff_x19 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return unaff_x19;
}



/* Entry: 1078d1cb8; end: 1078d1ccb;  */

void FUN_1078d1cb8(void)

{
  func_0x0001078d1c7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d1f64; end: 1078d2caf;  */

void FUN_1078d1f64(undefined8 param_1,long param_2)

{
  long unaff_x29;
  long lStack_20;
  long lStack_18;
  
  lStack_20 = unaff_x29 + -0x100;
  lStack_18 = lStack_20;
  func_0x000107775930(unaff_x29 + -0xa0,param_2 + 0x38,&lStack_18,&lStack_20);
  return;
}



/* Entry: 1078d3484; end: 1078d37fb;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 **
FUN_1078d3484(long param_1,float *param_2,undefined8 param_3,long param_4,ulong param_5,
             ulong param_6,undefined8 param_7,undefined8 *param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 extraout_x8;
  undefined8 **ppuVar7;
  undefined8 unaff_x20;
  undefined8 *puVar8;
  float fVar9;
  undefined8 **ppuStack_1f8;
  undefined8 uStack_1f0;
  undefined8 **ppuStack_1e8;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long *plStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 *puStack_140;
  undefined1 auStack_134 [16];
  undefined1 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong auStack_e0 [5];
  undefined1 auStack_b8 [16];
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  ulong auStack_90 [5];
  undefined8 uStack_68;
  
  func_0x0001078d4a0c();
  fVar9 = *param_2;
  uVar4 = fVar9 == 0.0;
  uStack_68 = extraout_x8;
  if (fVar9 <= 0.0) {
    auStack_e0[0] = (ulong)(uint)fVar9;
    auStack_e0[1] = 0;
    func_0x0001003a91d4(&UNK_10f433dd2);
    func_0x0001003a9204(&puStack_a0);
    func_0x0001078d4b80();
    puStack_a0 = (undefined8 *)0x0;
    puStack_98 = (undefined8 *)0x0;
    auStack_90[0] = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    ppuVar5 = &puStack_a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  else {
    func_0x000108123340(*param_8,param_4);
    puVar8 = *(undefined8 **)(param_4 + 0x1a0);
    if (puVar8 != (undefined8 *)0x0) {
      plVar1 = puVar8 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    fVar9 = *(float *)(puVar8 + 0xd);
    puStack_140 = puVar8;
    func_0x00010724e0f8(auStack_158,CONCAT44((int)*(float *)((long)puVar8 + 0x6c),(int)fVar9));
    auStack_90[0] = (ulong)(uint)((int)fVar9 << 2);
    puStack_a0 = (undefined8 *)
                 CONCAT44((int)(float)((ulong)puVar8[0xd] >> 0x20),(int)(float)puVar8[0xd]);
    puStack_98 = (undefined8 *)0x100000001;
    func_0x000108113cb0(&plStack_170,auStack_168,&puStack_a0,uStack_150);
    uStack_148 = 0;
    (**(code **)(*plStack_170 + 0x28))(auStack_e0);
    uVar4 = auStack_e0[0] == 1;
    if ((bool)uVar4) {
      func_0x00010810f508(puStack_140,auStack_e0 + 1,0,1);
      uStack_1a0 = 0;
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      func_0x000107273b60(auStack_b8,1);
      puVar8 = puStack_a8;
      puStack_a8[2] = 0;
      *puStack_a8 = &PTR_DAT_110996440;
      puStack_a8[1] = 0;
      func_0x000104c2fe00(&puStack_a0,param_3);
      uStack_f8 = uStack_198;
      uStack_100 = uStack_1a0;
      uStack_f0 = uStack_190;
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_1a0 = 0;
      uStack_118 = uStack_1b8;
      uStack_120 = uStack_1c0;
      uStack_110 = uStack_1b0;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      auStack_134[0] = 0;
      uStack_124 = 0;
      uStack_1d0 = param_5 & 0xffffffffff;
      uStack_1c8 = param_6 & 0xffffffffff;
      func_0x0001077814e8(*param_2,puVar8 + 3,&puStack_a0,auStack_158,0,&uStack_100,&uStack_120,
                          auStack_134);
      func_0x00010724e0ac(&uStack_120);
      func_0x00010724e0ac(&uStack_100);
      func_0x000104c2f714(&puStack_a0);
      puVar8 = puStack_a8;
      puStack_a8 = (undefined8 *)0x0;
      func_0x000107273c84(auStack_b8);
      puStack_a0 = (undefined8 *)0x0;
      puStack_98 = (undefined8 *)0x0;
      func_0x000107272e90(&puStack_a0);
      func_0x00010724e0ac(&uStack_1c0);
      func_0x00010724e0ac(&uStack_1a0);
      puStack_98 = puVar8;
      uStack_180 = 0;
      uStack_178 = 0;
      puStack_a0 = puVar8 + 3;
      func_0x0001073c67e4(auStack_90,param_7);
      func_0x0001078c476c(param_1,&puStack_a0);
      func_0x000107470508(&puStack_a0);
      func_0x000107272e90(&uStack_180);
    }
    else {
      func_0x00010002b838(&puStack_a0,&UNK_10f433dea);
      func_0x0001078d4b80();
      puStack_98 = (undefined8 *)0x0;
      auStack_90[0] = 0;
      puStack_a0 = (undefined8 *)0x0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    }
    func_0x0001078d49a4(auStack_e0);
    func_0x0001078d495c(&plStack_170);
    func_0x00010724e5f4(auStack_158);
    ppuVar5 = &puStack_140;
    func_0x0001078d4914();
    unaff_x20 = param_7;
  }
  func_0x0001078d49d0(uStack_68);
  if ((bool)uVar4) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  func_0x00010725af58(&puStack_a0);
  func_0x000107272e90(&uStack_180);
  func_0x0001078d49a4(auStack_e0);
  func_0x0001078d495c(&plStack_170);
  func_0x00010724e5f4(auStack_158);
  ppuVar6 = &puStack_140;
  func_0x0001078d4914();
  func_0x0001078d4a1c();
  puStack_1d8 = &UNK_1078d37fc;
  ppuVar7 = (undefined8 **)(*ppuVar6 + (long)ppuVar6[1] * 0x16);
  uStack_1f0 = unaff_x20;
  ppuStack_1e8 = ppuVar5;
  puStack_1e0 = &stack0xfffffffffffffff0;
  if (ppuVar6[1] == ppuVar6[2]) {
    func_0x0001078d38c4(&ppuStack_1f8,ppuVar6,ppuVar7,1,0);
  }
  else {
    _bzero(ppuVar7,0xb0);
    func_0x0001078d3950(ppuVar7);
    ppuVar6[1] = (undefined8 *)((long)ppuVar6[1] + 1);
    ppuStack_1f8 = ppuVar7;
  }
  return ppuStack_1f8;
}



/* Entry: 1078d3a2c; end: 1078d3a53;  */

void FUN_1078d3a2c(long param_1)

{
  func_0x0001003a8c94(param_1 + 0x38);
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001003a8c94();
  }
  return;
}



/* Entry: 1078d3cc8; end: 1078d3cf3;  */

undefined1 * FUN_1078d3cc8(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x40] = 0;
  func_0x0001078d3cf4();
  return param_1;
}



/* Entry: 1078d3e7c; end: 1078d3ea7;  */

undefined8 * FUN_1078d3e7c(undefined8 *param_1)

{
  func_0x0001078d3bd8(param_1,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    func_0x0001078d3c08(param_1,param_1);
  }
  return param_1;
}



/* Entry: 1078d4084; end: 1078d40bf;  */

long * FUN_1078d4084(long *param_1,undefined8 param_2)

{
  *param_1 = (long)(param_1 + 3);
  param_1[2] = 4;
  param_1[1] = 0;
  func_0x0001078d40c0(param_1,param_2,param_2);
  return param_1;
}



/* Entry: 1078d4398; end: 1078d43df;  */

long FUN_1078d4398(long param_1,long param_2,long param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    func_0x0001078d43e0(param_3,param_1);
    param_1 = param_1 + 0xb0;
    param_3 = param_3 + 0xb0;
  }
  return param_3;
}



/* Entry: 1078d456c; end: 1078d458f;  */

void FUN_1078d456c(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    FUN_1078d3a2c();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}



/* Entry: 1078d46b0; end: 1078d485b;  */

long ** FUN_1078d46b0(long param_1,undefined *param_2)

{
  undefined1 in_ZR;
  long **pplVar1;
  undefined8 extraout_x8;
  long lVar2;
  long *plStack_2c8;
  undefined8 uStack_2c0;
  undefined4 auStack_2b8 [6];
  undefined4 uStack_2a0;
  undefined **ppuStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined4 uStack_270;
  undefined1 uStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 uStack_230;
  long *plStack_140;
  undefined8 auStack_138 [32];
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x0001078d4a0c();
  uStack_38 = extraout_x8;
  func_0x00010726fc00(&plStack_140,lVar2 + 8);
  if (plStack_140 != (long *)0x0) {
    func_0x00010726fc3c();
    uStack_2c0 = auStack_138[0];
    plStack_2c8 = plStack_140;
    in_ZR = *plStack_140 == -1;
    if (!(bool)in_ZR) {
      plStack_140 = (long *)0x0;
      auStack_138[0] = 0;
      uStack_248 = 0;
      uStack_240 = 0;
      func_0x0001072508cc(&uStack_248);
      goto LAB_1078d4728;
    }
    func_0x00010726fc88();
  }
  func_0x0001078d4ab4();
  plStack_2c8 = (long *)0x0;
  uStack_2c0 = 0;
  plStack_140 = (long *)0x0;
  auStack_138[0] = 0;
LAB_1078d4728:
  func_0x0001078d4ab4();
  func_0x00010726fc00(&plStack_140,param_1 + 8);
  if (plStack_140 == (long *)0x0) {
    func_0x0001078d4ab4();
  }
  else {
    lVar2 = *plStack_140;
    func_0x0001078d4ab4();
    in_ZR = lVar2 == -1;
    if (!(bool)in_ZR) {
      auStack_2b8[0] = 0x12f;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_280 = 0;
      ppuStack_298 = &PTR_DAT_110996720;
      uStack_290 = 0;
      uStack_278 = 0x12f;
      uStack_270 = 0;
      uStack_26c = 1;
      uStack_260 = 0;
      uStack_258 = 0;
      uStack_268 = 0;
      func_0x00010743cc34(&uStack_248,auStack_2b8,7);
      func_0x00010743d7bc(&plStack_140,&uStack_248);
      func_0x000107288cd8(&uStack_248);
      func_0x000107262330(auStack_2b8);
      func_0x00010812b7c8(&uStack_248,*(undefined8 *)(param_1 + 0x40));
      param_2 = &UNK_10f433e03;
      func_0x0001072bbe40(auStack_138,&UNK_10f433e03,uStack_230);
      func_0x000104bdd014(&uStack_248);
      func_0x00010743d7e4(&plStack_140);
      func_0x000104c003e8(param_1 + 0x20);
    }
  }
  pplVar1 = &plStack_2c8;
  func_0x000107270b00();
  func_0x0001078d49d0(uStack_38);
  if ((bool)in_ZR) {
    return pplVar1;
  }
  ___stack_chk_fail();
  pplVar1 = &plStack_2c8;
  func_0x000107270b00(pplVar1);
  func_0x0001078d4a1c();
  func_0x0001004a5364(param_2,&PTR_DAT_1109e8bf8);
  pplVar1 = pplVar1 + 1;
  if ((int)param_2 == 0) {
    pplVar1 = (long **)0x0;
  }
  return pplVar1;
}



/* Entry: 1078d4b94; end: 1078d4c57;  */

/* WARNING: Possible PIC construction at 0x0001078d4c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d4c1c) */
/* WARNING: Removing unreachable block (ram,0x0001078d4c3c) */
/* WARNING: Removing unreachable block (ram,0x0001078d4c28) */
/* WARNING: Removing unreachable block (ram,0x0001078d4c70) */

undefined1 * FUN_1078d4b94(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 *puStack_40;
  
  func_0x0001078d5418();
  uStack_48 = 1;
  puVar1 = (undefined8 *)0x350;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_1109e8c78;
  puStack_40 = puVar1;
  func_0x0001074698a0(puVar1 + 3,param_3);
  puVar1[3] = &PTR_DAT_1109e8cc8;
  puVar1[0x69] = 0;
  puStack_40 = (undefined8 *)0x0;
  func_0x0001078d509c(auStack_50);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return auStack_50;
}



/* Entry: 1078d50c4; end: 1078d50d3;  */

void FUN_1078d50c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8c78;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078d52f0; end: 1078d5303;  */

void FUN_1078d52f0(void)

{
  func_0x0001078d52e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d5518; end: 1078d553f;  */

long FUN_1078d5518(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078d5dcc; end: 1078d5e33;  */

bool FUN_1078d5dcc(float param_1,float param_2)

{
  bool bVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078d6cf0();
  func_0x0001078d5e34();
  if (unaff_x20 == 0) {
    bVar1 = false;
  }
  else if (*(double *)(unaff_x19 + 0x198) + (double)param_1 <= (double)*(float *)(unaff_x19 + 0x1a8)
          ) {
    bVar1 = (double)*(float *)(unaff_x19 + 0x1ac) < *(double *)(unaff_x19 + 0x198) + (double)param_2
    ;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1078d5f28; end: 1078d5f3b;  */

void FUN_1078d5f28(void)

{
  func_0x0001078d5ef4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d64c4; end: 1078d6537;  */

undefined8 * FUN_1078d64c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8f30;
  func_0x0001077dda38(param_1 + 0x3d);
  func_0x0001078bee2c(param_1 + 0x3c);
  func_0x0001078ce630(param_1 + 0x3b);
  func_0x0001078bee2c(param_1 + 0x3a);
  func_0x0001078bee2c(param_1 + 0x39);
  func_0x0001078bee2c(param_1 + 0x38);
  func_0x0001078bee2c(param_1 + 0x37);
  func_0x0001078bedfc(param_1 + 0x36);
  func_0x0001078bedfc(param_1 + 0x35);
  *param_1 = &PTR_DAT_110a255a0;
  func_0x0001078d4914(param_1 + 0x34);
  func_0x000108123684(param_1 + 0x33);
  func_0x00010810071c(param_1 + 0x1d);
  func_0x0001078bee2c(param_1 + 0x1c);
  func_0x000108123524(param_1 + 5);
  func_0x000107475310(param_1 + 3);
  func_0x0001003a81d8(param_1 + 1);
  return param_1;
}



/* Entry: 1078d6e8c; end: 1078d6e97;  */

undefined1  [16] FUN_1078d6e8c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x0001078d732c();
  uVar1 = param_1;
  func_0x0001078d73ac(param_2 + 0x1b8,0);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}


