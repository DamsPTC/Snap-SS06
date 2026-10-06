/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1078b136c; end: 1078b142b;  */

void FUN_1078b136c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 1078b1698; end: 1078b18f3;  */

void FUN_1078b1698(undefined8 *param_1,long param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined2 uStack_1f8;
  undefined1 uStack_1f6;
  undefined1 uStack_1f5;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  undefined1 auStack_1b8 [128];
  long *plStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [132];
  undefined4 uStack_a4;
  
  puVar4 = (undefined8 *)(param_2 + 0x60);
  iVar1 = (int)*puVar4;
  func_0x0001078b1914();
  if (iVar1 == 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    plVar2 = *(long **)(param_2 + 0x60);
    if (plVar2 != *(long **)(lVar3 + 0x168)) {
      if (((plVar2 != (long *)0x0) && ((*(byte *)(param_2 + 0x5a) & 1) == 0)) &&
         (*(char *)(param_2 + 0x59) == '\x01')) {
        (**(code **)(*plVar2 + 0x28))();
        lVar3 = *(long *)(param_2 + 0x18);
      }
      *(undefined1 *)(param_2 + 0x59) = 0;
      func_0x000107893a7c(puVar4,lVar3 + 0x168);
    }
    lVar3 = *param_3;
    lVar5 = param_3[5];
    uStack_a4 = *(undefined4 *)(lVar3 + 0xf4);
    uStack_1f8 = 0;
    uStack_1f6 = 0;
    uStack_1f5 = 0;
    func_0x0001078ad66c(lVar3 + 400,&uStack_1f8);
    uStack_1f8 = 0;
    uStack_1f6 = 0;
    uStack_1f5 = 0;
    func_0x0001078adef4(lVar3 + 0x17c,&uStack_1f8);
    uStack_1f0 = 0;
    plVar2 = param_3;
    func_0x0001074d5bec(param_3,0,0);
    uStack_1f8 = SUB82(plVar2,0);
    uStack_1f6 = (undefined1)((ulong)plVar2 >> 0x10);
    uStack_1f5 = (undefined1)((ulong)plVar2 >> 0x18);
    uStack_1f4 = (undefined4)((ulong)plVar2 >> 0x20);
    func_0x0001078b1934();
    func_0x0001078acaf0();
    uStack_1f4 = 7;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    uStack_1e8 = CONCAT53(uStack_1e8._3_5_,0x10101);
    func_0x0001078b1934();
    func_0x0001078acc04();
    func_0x0001074d6810(&uStack_1f8,param_3);
    func_0x0001078b1934();
    func_0x0001078acd2c();
    uStack_1f6 = 1;
    uStack_1f8 = 0x100;
    func_0x0001078b1934();
    func_0x0001078aca24();
    if ((*(byte *)(param_2 + 0x59) & 1) == 0) {
      (**(code **)(**(long **)(param_2 + 0x60) + 0x10))();
      *(undefined1 *)(param_2 + 0x59) = 1;
    }
    func_0x00010741607c(param_3[5],auStack_128,1,0);
    uVar6 = (ulong)*(uint *)(lVar5 + 0x4c);
    uVar10 = (ulong)*(uint *)(lVar5 + 0x50);
    uVar11 = NEON_ucvtf(uVar6);
    uVar12 = NEON_ucvtf(uVar10);
    func_0x0001078b1928();
    func_0x0001078b1928();
    uVar7 = *(undefined8 *)(lVar5 + 0x78);
    _log2();
    dVar8 = *(double *)(lVar5 + 0x70);
    dVar13 = dVar8 * -57.29577951308232;
    func_0x0001074163dc(lVar5);
    dVar9 = dVar8;
    func_0x00010741653c(lVar5);
    _memcpy(auStack_1b8,auStack_128,0x80);
    uStack_1f8 = (undefined2)uVar11;
    uStack_1f6 = (undefined1)((ulong)uVar11 >> 0x10);
    uStack_1f5 = (undefined1)((ulong)uVar11 >> 0x18);
    uStack_1f4 = (undefined4)((ulong)uVar11 >> 0x20);
    uStack_1f0 = (undefined4)uVar12;
    uStack_1ec = (undefined4)((ulong)uVar12 >> 0x20);
    uStack_130 = 0;
    uStack_1e8 = uVar6;
    uStack_1e0 = uVar10;
    uStack_1d8 = uVar7;
    dStack_1d0 = dVar13;
    dStack_1c8 = dVar8;
    dStack_1c0 = (double)SUB84(dVar9,0);
    plStack_138 = param_3;
    (**(code **)(*(long *)*puVar4 + 0x18))((long *)*puVar4,&uStack_1f8);
    func_0x0001078abfa8((undefined4 *)(lVar3 + 0xf4),&uStack_a4);
    func_0x0001078ac784(lVar3);
  }
  else if ((*(byte *)(param_2 + 0x5b) & 1) == 0) {
    func_0x0001078b15b4();
    *(undefined1 *)(param_2 + 0x5b) = 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1078b1c40; end: 1078b1db3;  */

void FUN_1078b1c40(long param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = *(long *)(param_1 + 0x28);
  if (*(long *)(lVar2 + 8) != 0) {
    uVar1 = *(uint *)(lVar2 + 0x10);
    uVar3 = (ulong)uVar1;
    if (uVar1 == *param_2) {
      lVar4 = *(long *)(lVar2 + 0x18);
      if (lVar4 == *(long *)(param_2 + 2)) {
        plVar5 = *(long **)(lVar2 + 0x20);
        plVar6 = *(long **)(param_2 + 4);
        do {
          if (uVar3 == 0) {
            if ((lVar4 == 0) ||
               (*(int *)(*(long *)(lVar4 + 0x28) + 8) ==
                *(int *)(*(long *)(*(long *)(param_2 + 2) + 0x28) + 8))) goto LAB_1078b1ccc;
            break;
          }
          lVar7 = *plVar5;
          lVar8 = *plVar6;
          uVar3 = uVar3 - 1;
          plVar5 = plVar5 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar7 == lVar8);
      }
    }
    uVar10 = *(undefined8 *)(param_2 + 2);
    uVar9 = *(undefined8 *)param_2;
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(lVar2 + 0x18) = uVar10;
    *(undefined8 *)(lVar2 + 0x10) = uVar9;
    lVar2 = *(long *)(param_1 + 0x28);
    *(undefined1 *)(lVar2 + 0x30) = 1;
LAB_1078b1ccc:
    if (*(int *)(lVar2 + 0x28) != *param_3) {
      *(int *)(lVar2 + 0x28) = *param_3;
      *(undefined1 *)(lVar2 + 0x30) = 1;
    }
    if (*(int *)(lVar2 + 0x2c) != param_3[2]) {
      *(int *)(lVar2 + 0x2c) = param_3[2];
      *(undefined1 *)(lVar2 + 0x30) = 1;
    }
  }
  return;
}



/* Entry: 1078b2628; end: 1078b26cb;  */

void FUN_1078b2628(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong extraout_x8;
  long extraout_x9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((lVar3 != 0) &&
     (func_0x0001078b287c(*(undefined8 *)(lVar3 + 200)),
     ((extraout_x8 | extraout_x9 << 0x20) >> 0x20 & 1) != 0)) {
    if (((extraout_x8 & 1) == 0) && ((*(byte *)(param_1 + 0x21) & 1) != 0)) {
      uVar2 = param_1;
      func_0x0001078b2890(0x437f0000,*(undefined4 *)param_3,*(undefined4 *)((long)param_3 + 4));
      uVar1 = uVar2 & 0xffffffff;
      func_0x0001078b2890(*(undefined4 *)(param_3 + 1),*(undefined4 *)((long)param_3 + 0xc));
      uStack_50 = CONCAT44((float)(uVar2 & 0xffffffff),(float)uVar1);
      uStack_48 = CONCAT44((float)(uVar2 & 0xffffffff),(float)uVar1);
    }
    else {
      uStack_48 = param_3[1];
      uStack_50 = *param_3;
    }
    func_0x0001078b25b0(param_1,param_2,&uStack_50);
  }
  return;
}



/* Entry: 1078b3d48; end: 1078b3dfb;  */

undefined4 * FUN_1078b3d48(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  FUN_1078aeb94();
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(param_2 + 6) = 0;
  return param_1;
}



/* Entry: 1078b401c; end: 1078b4027;  */

void FUN_1078b401c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  func_0x0001078b45e8();
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



/* Entry: 1078b41ec; end: 1078b41f7;  */

/* WARNING: Possible PIC construction at 0x0001078b42c4: Changing call to branch */

undefined1  [16] FUN_1078b41ec(ulong *param_1,ulong *param_2,ulong param_3)

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
  
  func_0x0001078b45e8();
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 < (undefined4 *)param_1[2]) {
    puVar13 = puVar1 + 1;
    *puVar1 = (int)param_2;
    puVar4 = param_1;
code_r0x0001078b42a8:
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
      goto code_r0x0001078b42a8;
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



/* Entry: 1078b4934; end: 1078b495b;  */

void FUN_1078b4934(long param_1,undefined4 param_2)

{
  func_0x0001073caeb8();
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xf4) = param_2;
  return;
}



/* Entry: 1078b4e24; end: 1078b4e2b;  */

void FUN_1078b4e24(void)

{
  return;
}



/* Entry: 1078b5008; end: 1078b5057;  */

void FUN_1078b5008(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_1078b5288(param_1,&uStack_18);
  return;
}



/* Entry: 1078b5288; end: 1078b52c7;  */

long * FUN_1078b5288(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001078b5298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x30))();
    return plVar4;
  }
  func_0x000104bfeb48();
  plVar4 = (long *)plVar4[3];
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001078b52b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x30))();
    return plVar4;
  }
  func_0x000104bfeb48();
  *plVar4 = (long)&PTR_DAT_1109e7e38;
  lVar5 = plVar4[7];
  plVar1 = (long *)(plVar4[3] + 0x80);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 - lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x0001078ae5e4(plVar4 + 2);
  *plVar4 = (long)&PTR_FUN_1109e4228;
  func_0x00010724e5b8(plVar4 + 1);
  return plVar4;
}



/* Entry: 1078b53ac; end: 1078b53bf;  */

void FUN_1078b53ac(void)

{
  func_0x0001078b5358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078b55f8; end: 1078b5703;  */

void FUN_1078b55f8(void)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined4 uStack_44;
  
  func_0x0001078b62f0();
  uStack_44 = 0;
  _glGenBuffers(1,&uStack_44);
  func_0x0001078b62b8();
  piVar1 = (int *)(extraout_x8 + 0x70);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  func_0x0001078b62b8();
  plVar2 = (long *)(extraout_x8_00 + 0x88);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 + unaff_x19;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  func_0x0001078b62b8();
  uVar5 = uStack_44;
  auStack_60[0] = uStack_44;
  uStack_50 = 1;
  uStack_58 = extraout_x8_01;
  func_0x0001078b636c();
  func_0x0001078b62b8();
  func_0x0001078b5704(extraout_x8_02 + 0x1b8,uVar5);
  func_0x0001078b6394();
  func_0x0001078b6308(0x8893);
  puVar6 = (undefined8 *)0x28;
  __Znwm();
  *puVar6 = &PTR_DAT_1109e7760;
  *(undefined4 *)(puVar6 + 1) = auStack_60[0];
  puVar6[2] = uStack_58;
  *(undefined1 *)(puVar6 + 3) = uStack_50;
  uStack_50 = 0;
  puVar6[4] = unaff_x19;
  *unaff_x20 = puVar6;
  func_0x0001078ae59c(auStack_60);
  return;
}



/* Entry: 1078b5e8c; end: 1078b6183;  */

void FUN_1078b5e8c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined1 auStack_98 [4];
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  func_0x0001078ab49c(auStack_80,lVar4,1);
  func_0x0001078b6330();
  lStack_88 = lVar4 * 6;
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x80);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + lStack_88;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x0001078ab8f8(&lStack_90,auStack_80,&lStack_88);
  lVar4 = *(long *)(param_2 + 0x20);
  func_0x0001078b6378(param_5,param_7,param_6);
  uVar7 = param_5 >> 0x20 & 0xff;
  *(char *)(lStack_90 + 0x30) = (char)param_5;
  *(char *)(lStack_90 + 0x31) = (char)(param_5 >> 8);
  *(char *)(lStack_90 + 0x32) = (char)(param_5 >> 0x10);
  *(char *)(lStack_90 + 0x33) = (char)(param_5 >> 0x18);
  *(char *)(lStack_90 + 0x34) = (char)(param_5 >> 0x20);
  auStack_98[0] = 0;
  func_0x0001078ab940(*(long *)(lVar4 + 8) + 0xf0,auStack_98);
  auStack_98[0] = 1;
  uStack_94 = *(undefined4 *)(lStack_90 + 0x10);
  func_0x0001078ab97c(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x114,auStack_98);
  func_0x0001078af888(param_6);
  for (lVar4 = 0; lVar4 != 0x30; lVar4 = lVar4 + 8) {
    if (((int)param_6 - 0x10U & 0xff) < 0x1c) {
      func_0x0001078b6330();
      func_0x0001078b63bc();
      _glCompressedTexImage2D();
    }
    else {
      func_0x0001078b63bc();
      _glTexImage2D();
    }
  }
  func_0x0001078b6358(0x8513);
  func_0x0001078b6344(0x8513);
  func_0x0001078af7e4((uint)param_5 & 0xff);
  func_0x0001078b6328(0x8513);
  uVar6 = 0x2600;
  if (((uint)(param_5 >> 8) & 0xff) - 3 < 3) {
    uVar6 = 0x2601;
  }
  _glTexParameteri(0x8513,0x2800,uVar6);
  if ((int)uVar7 == 0) {
    uVar7 = 0;
    uVar5 = 0x884c;
  }
  else {
    func_0x0001078b62ac(0x8513);
    func_0x0001078af874(uVar7);
    uVar5 = 0x884d;
  }
  _glTexParameteri(0x8513,uVar5,uVar7);
  if (((int)param_7 != 0) && (((int)param_6 - 0x2cU & 0xff) < 0xe4)) {
    _glGenerateMipmap(0x8513);
    *(undefined1 *)(lStack_90 + 0x35) = 1;
  }
  *param_1 = lStack_90;
  func_0x0001078ae5e4(auStack_80);
  return;
}



/* Entry: 1078b64a8; end: 1078b64bf;  */

void FUN_1078b64a8(undefined1 *param_1)

{
  func_0x0001078af834(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glDepthFunc_11034b4f8)();
  return;
}



/* Entry: 1078b66b4; end: 1078b66d3;  */

bool FUN_1078b66b4(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  _glIsBuffer(iVar1);
  return iVar1 != 0;
}



/* Entry: 1078b6914; end: 1078b699b;  */

undefined8 FUN_1078b6914(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x00010724ef84(auStack_38,param_2);
  func_0x00010724ef84(auStack_50,param_3);
  func_0x0001078b68f0(uVar1,auStack_38,auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  return uVar1;
}



/* Entry: 1078b6c28; end: 1078b6c2b;  */

void FUN_1078b6c28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e7fc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078b7004; end: 1078b7013;  */

void FUN_1078b7004(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1078b7c30; end: 1078b8c63;  */

void FUN_1078b7c30(long param_1,long param_2,undefined8 ***param_3,long param_4)

{
  ulong uVar1;
  byte bVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ***pppuVar12;
  undefined8 ***pppuVar13;
  undefined8 ***pppuVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined8 ***pppuVar17;
  long lVar18;
  undefined1 auStack_300 [32];
  undefined1 auStack_2e0 [32];
  undefined8 **ppuStack_2c0;
  undefined8 **ppuStack_2b8;
  undefined1 uStack_2a8;
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [16];
  undefined7 uStack_270;
  undefined1 uStack_269;
  undefined1 uStack_268;
  undefined1 uStack_267;
  undefined1 uStack_266;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 **ppuStack_250;
  byte bStack_248;
  undefined8 **ppuStack_240;
  byte bStack_238;
  undefined1 auStack_230 [24];
  undefined1 uStack_218;
  uint uStack_210;
  byte bStack_20c;
  undefined8 uStack_208;
  undefined1 auStack_200 [32];
  undefined8 **ppuStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 **ppuStack_1d0;
  ulong uStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_1b8;
  ulong uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_198;
  undefined1 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 auStack_d8 [3];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 **ppuStack_90;
  undefined1 *puStack_88;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  
  _objc_retain(param_2);
  func_0x0001078b9eec();
  lVar6 = param_4;
  _objc_retain();
  __ZNSt3__16chrono12steady_clock3nowEv();
  lVar18 = *(long *)(param_1 + 0x40);
  lVar16 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar7 = *(undefined8 *)(lVar16 + 0x28);
  *(undefined8 *)(lVar16 + 0x28) = 0;
  _objc_release(uVar7);
  if ((param_4 != 0) && (lVar16 = param_4, func_0x00010bf3ec40(), lVar16 == -999)) {
    func_0x0001078b8da0(auStack_200,*(undefined8 *)(param_1 + 0x48));
    func_0x0001078b8c64(0x1132308a8,auStack_200);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_200);
    func_0x00010c22bc20(PTR_PTR_1126d5590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e280();
    func_0x0001078b9d00();
    goto LAB_1078b88a8;
  }
  func_0x00010c22bc20(PTR_PTR_1126d5590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c255ec0();
  func_0x0001078b9d00();
  auStack_280[0] = 1;
  bStack_248 = 0;
  ppuStack_240 = (undefined8 **)((ulong)ppuStack_240 & 0xffffffffffffff00);
  bStack_238 = 0;
  auStack_230[0] = 0;
  uStack_218 = 0;
  uStack_210 = uStack_210 & 0xffffff00;
  bStack_20c = 0;
  uStack_208 = 0;
  uStack_270 = 0;
  uStack_269 = 0;
  uStack_268 = 0;
  uStack_267 = 0;
  uStack_266 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  ppuStack_250 = (undefined8 **)((ulong)ppuStack_250 & 0xffffffffffffff00);
  if (param_4 == 0) {
    pppuVar10 = (undefined8 ***)PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
    _objc_opt_class();
    pppuVar17 = param_3;
    _objc_opt_isKindOfClass();
    if (((ulong)pppuVar17 & 1) != 0) {
      pppuVar17 = param_3;
      func_0x00010c252ee0();
      puVar8 = PTR_PTR_1126d5590;
      func_0x00010c22bc20(PTR_PTR_1126d5590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf66280(puVar8);
      func_0x0001078b9d18();
      func_0x0001078b9d70();
      func_0x0001078b9d00();
      func_0x00010bf001c0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = param_3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (pppuVar9 != (undefined8 ***)0x0) {
        pppuVar10 = pppuVar9;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        func_0x0001078b9e9c();
        func_0x0001078b9ea4();
        func_0x0001078b9d10();
        func_0x000107873828(&ppuStack_1e0);
        func_0x0001078b9f18();
      }
      pppuVar11 = param_3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (pppuVar11 == (undefined8 ***)0x0) {
        pppuVar11 = *(undefined8 ****)(param_1 + 0x20);
        if ((pppuVar11 != (undefined8 ***)0x0) && ((bStack_238 & 1) == 0)) {
          _objc_retainAutorelease();
          func_0x00010bdc3520();
          func_0x0001078b9e9c();
          func_0x0001078b9ea4();
          func_0x0001078b9d10();
          func_0x000107873828(&ppuStack_1e0);
          func_0x0001078b9f18();
          pppuVar10 = pppuVar11;
        }
      }
      else {
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        FUN_10785d474();
        ppuStack_240 = pppuVar11;
        if ((bStack_238 & 1) == 0) {
          bStack_238 = 1;
        }
      }
      pppuVar11 = param_3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      if (pppuVar11 != (undefined8 ***)0x0) {
        pppuVar12 = pppuVar11;
        _objc_retainAutorelease();
        func_0x00010bdc3520();
        FUN_10785d474();
        ppuStack_250 = pppuVar12;
        if ((bStack_248 & 1) == 0) {
          bStack_248 = 1;
        }
      }
      pppuVar13 = param_3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      pppuVar12 = (undefined8 ***)0x0;
      if (pppuVar13 != (undefined8 ***)0x0) {
        _objc_retainAutorelease(pppuVar13);
        func_0x00010bdc3520();
        func_0x0001078b9d9c();
        pppuVar12 = (undefined8 ***)auStack_230;
        pppuVar10 = &ppuStack_1e0;
        func_0x000100602604();
        func_0x0001078b9da4();
      }
      if (pppuVar17 == (undefined8 ***)0x1ad) {
        ppuStack_1e0 = (undefined8 **)((ulong)ppuStack_1e0 & 0xffffffffffffff00);
        uStack_1c8 = uStack_1c8 & 0xffffffffffffff00;
        pppuVar10 = param_3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (pppuVar10 != (undefined8 ***)0x0) {
          _objc_retainAutorelease(pppuVar10);
          func_0x00010bdc3520();
          func_0x0001078b9e9c();
          func_0x000100602604(&ppuStack_1e0,&ppuStack_2c0);
          func_0x0001078b9d10();
        }
        ppuStack_2c0 = (undefined8 **)((ulong)ppuStack_2c0 & 0xffffffffffffff00);
        uStack_2a8 = 0;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (param_3 != (undefined8 ***)0x0) {
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
          func_0x0001078b9e68();
          func_0x000100602604(&ppuStack_2c0,&ppuStack_80);
          func_0x0001078b9d94();
        }
        pppuVar10 = &ppuStack_1e0;
        pppuVar17 = &ppuStack_2c0;
        func_0x00010787386c();
        pppuVar12 = pppuVar10;
        func_0x0001078b9e28();
        func_0x0001078b9e68();
        *(undefined1 *)pppuVar12 = 5;
        pppuVar12[2] = uStack_78;
        pppuVar12[1] = ppuStack_80;
        puVar4 = puStack_70;
        ppuStack_80 = (undefined8 ***)0x0;
        uStack_78 = (undefined8 ***)0x0;
        puStack_70 = (undefined8 **)0x0;
        pppuVar12[3] = (undefined8 **)puVar4;
        pppuVar12[4] = pppuVar10;
        pppuVar12[5] = (undefined8 **)((ulong)pppuVar17 & 0xff);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        uStack_a8 = 0;
        func_0x00010724b300(&uStack_270,pppuVar12);
        func_0x0001072d6f8c(&uStack_a8);
        func_0x0001078b9d50();
        func_0x0001001148fc(&ppuStack_2c0);
        func_0x0001078b9d08();
        func_0x0001001148fc(&ppuStack_1e0);
LAB_1078b87f8:
        if (CONCAT17(uStack_269,uStack_270) != 0) goto LAB_1078b8800;
        func_0x0001078b8da0(auStack_300,*(undefined8 *)(param_1 + 0x48));
        puVar15 = auStack_300;
        func_0x0001078b8c64(0x113230978,auStack_300);
      }
      else {
        if (pppuVar17 == (undefined8 ***)0xcc) {
LAB_1078b8570:
          uStack_268 = 1;
          goto LAB_1078b87f8;
        }
        if (pppuVar17 == (undefined8 ***)0x130) {
          uStack_267 = 1;
          goto LAB_1078b87f8;
        }
        if (pppuVar17 == (undefined8 ***)0x194) {
          if (*(char *)(param_1 + 0x58) == '\x01') goto LAB_1078b8570;
          func_0x0001078b9e28();
          func_0x0001078b9d9c();
          *(undefined1 *)pppuVar12 = 2;
          pppuVar12[2] = (undefined8 **)puStack_1d8;
          pppuVar12[1] = ppuStack_1e0;
          ppuVar3 = ppuStack_1d0;
          ppuStack_1e0 = (undefined8 **)0x0;
          puStack_1d8 = (undefined8 **)0x0;
          ppuStack_1d0 = (undefined8 ***)0x0;
          pppuVar12[4] = (undefined8 **)0x0;
          pppuVar12[5] = (undefined8 **)0x0;
          pppuVar12[3] = ppuVar3;
          func_0x0001078b9da4();
          ppuStack_2c0 = (undefined8 ***)0x0;
          func_0x00010724b300(&uStack_270,pppuVar12);
          func_0x0001072d6f8c(&ppuStack_2c0);
          goto LAB_1078b87f8;
        }
        if (pppuVar17 != (undefined8 ***)0xc8) {
          if ((undefined1 *)((long)pppuVar17 + -500) < (undefined1 *)0x64) {
            if (param_2 == 0) {
              func_0x0001078b9d9c();
            }
            else {
              func_0x0001078b9dac();
              func_0x00010bf25f00();
              func_0x0001078b9d8c();
              func_0x0001078b9de0();
              pppuVar17 = &ppuStack_2c0;
              func_0x0001005d466c();
              ppuStack_80 = pppuVar17;
              uStack_78 = pppuVar10;
              func_0x0001078b9e90();
              func_0x0001078b9df0();
              func_0x0001078b9d10();
            }
            auStack_f0[0] = 3;
            func_0x0001078b9dc8();
            func_0x0001078b9e5c();
            func_0x0001078b9e30();
            func_0x0001078b9e00();
            func_0x0001078b9e18();
          }
          else {
            if (param_2 == 0) {
              func_0x0001078b9d9c();
            }
            else {
              func_0x0001078b9dac();
              func_0x00010bf25f00();
              func_0x0001078b9d8c();
              func_0x0001078b9de0();
              pppuVar17 = &ppuStack_2c0;
              func_0x0001005d466c();
              ppuStack_80 = pppuVar17;
              uStack_78 = pppuVar10;
              func_0x0001078b9e90();
              func_0x0001078b9df0();
              func_0x0001078b9d10();
            }
            auStack_f0[0] = 6;
            func_0x0001078b9dc8();
            func_0x0001078b9e5c();
            func_0x0001078b9e30();
            func_0x0001078b9e00();
            func_0x0001078b9e18();
          }
          auStack_d8[0] = 0;
          func_0x0001078b9d80();
          func_0x0001072d6f8c(auStack_d8);
          func_0x0001078b9d10();
          func_0x0001078b9d94();
          func_0x0001078b9dd8();
          func_0x0001078b9dc0();
          func_0x0001078b9da4();
          goto LAB_1078b87f8;
        }
        pppuVar17 = *(undefined8 ****)(param_1 + 0x28);
        func_0x0001078b9d8c();
        lVar16 = *(long *)(param_1 + 0x48);
        func_0x0001072ab574(lVar16 + 0x18);
        bVar2 = *(byte *)(lVar16 + 0x58);
        __ZNSt3__15mutex6unlockEv(lVar16 + 0x18);
        _objc_retain(pppuVar17);
        _objc_retain(param_3);
        pppuVar10 = param_3;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        if ((pppuVar10 != (undefined8 ***)0x0) &&
           (pppuVar14 = pppuVar10, func_0x00010c0b4ca0(), pppuVar14 != (undefined8 ***)0x0)) {
          if ((bStack_20c & 1) == 0) {
            bStack_20c = 1;
          }
          uStack_210 = (uint)pppuVar14;
          if (pppuVar14 != pppuVar12) {
            puStack_1d8 = (undefined8 *)0x0;
            uStack_1c8 = 0;
            ppuStack_1c0 = (undefined **)((lVar6 - lVar18) / 1000000 & 0xffffffff);
            uStack_1b8 = 0;
            uStack_1a8 = 0;
            ppuStack_1e0 = pppuVar14;
            ppuStack_1d0 = pppuVar12;
            uStack_1b0 = (ulong)bVar2;
            func_0x0001003a91d4(&UNK_10f4339b8);
            func_0x0001003a9204(auStack_108);
            ppuStack_2c0 = (undefined8 **)CONCAT71(ppuStack_2c0._1_7_,3);
            func_0x0001072fb044(&ppuStack_1e0,&ppuStack_2c0,auStack_108);
            ppuStack_1e0 = (undefined8 **)0x0;
            func_0x0001078b9d80();
            func_0x0001072d6f8c(&ppuStack_1e0);
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_110 = 0;
            pppuVar12 = pppuVar17;
            func_0x00010bdc16c0();
            iVar5 = (int)pppuVar12;
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c071ae0();
            func_0x0001078b9d08();
            if (iVar5 != 0) {
              pppuVar12 = pppuVar17;
              func_0x00010bdc1620();
              _objc_retainAutoreleasedReturnValue();
              pppuVar14 = pppuVar12;
              _objc_retainAutorelease();
              func_0x00010bf25f00();
              func_0x00010c08fa60();
              ppuStack_2c0 = pppuVar14;
              ppuStack_2b8 = pppuVar12;
              func_0x0001003a91d4(&UNK_10f433a0c);
              func_0x0001003a9204(&ppuStack_1e0);
              func_0x000100066230(&uStack_120,&ppuStack_1e0);
              func_0x0001078b9da4();
              func_0x0001078b9d08();
            }
            func_0x00010bf6e340();
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            func_0x00010bdc3520();
            puStack_1d8 = (undefined8 **)0x0;
            ppuStack_1e0 = param_3;
            func_0x0001003a91d4(&UNK_10f433a1a);
            func_0x0001003a9204(auStack_138);
            func_0x0001078b9d08();
            func_0x00010bdc2b80(pppuVar17);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010beec820();
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            func_0x00010bdc3520();
            puVar15 = auStack_150;
            func_0x00010002b838(puVar15,pppuVar17);
            func_0x0001078b9d70();
            func_0x0001078b9d08();
            __ZNSt3__16chrono12steady_clock3nowEv();
            ppuStack_90 = &puStack_88;
            puStack_88 = puVar15;
            func_0x0001078b9e68();
            func_0x0001078b90a8(&ppuStack_2c0,auStack_150,&ppuStack_90,0x113230978,&ppuStack_80);
            func_0x00010002b838(auStack_c0,"cancelled");
            func_0x0001078b90a8(&uStack_a8,auStack_150,&ppuStack_90,0x1132308a8,auStack_c0);
            func_0x00010002b838(auStack_f0,&DAT_10f2cf69e);
            func_0x0001078b90a8(auStack_d8,auStack_150,&ppuStack_90,0x113230910,auStack_f0);
            func_0x000105989090(&ppuStack_1e0,&ppuStack_2c0,&uStack_a8,auStack_d8);
            func_0x0001003a91d4(&UNK_10f433a35);
            func_0x0001003a9204(auStack_168);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
            func_0x0001078b9dc0();
            func_0x0001078b9dd8();
            func_0x0001078b9d10();
            func_0x0001078b9d94();
            func_0x000106890abc(&ppuStack_1e0,auStack_150,auStack_108,auStack_138,auStack_168,
                                &uStack_120);
            func_0x0001003a91d4(&UNK_10f433a26);
            func_0x0001003a9204(&ppuStack_2c0);
            lVar18 = 6;
            func_0x00010786df04(6,&ppuStack_2c0,0,0);
            func_0x0001077f3c4c();
            func_0x0001077f3790();
            ppuStack_1e0 = (undefined8 **)CONCAT44(ppuStack_1e0._4_4_,0x172);
            uStack_1c8 = uStack_1c8 & 0xffffffff00000000;
            uStack_1b0 = 0;
            uStack_1a8 = 0;
            ppuStack_1c0 = &PTR_DAT_110996720;
            uStack_1b8 = 0;
            uStack_1a0 = 0x172;
            uStack_198 = 0;
            uStack_194 = 1;
            uStack_188 = 0;
            uStack_180 = 0;
            uStack_190 = 0;
            ppuStack_80 = (undefined8 **)CONCAT44(ppuStack_80._4_4_,1);
            uStack_78 = (undefined8 ***)((ulong)uStack_78._4_4_ << 0x20);
            uStack_a8 = *(undefined8 *)(lVar18 + 8);
            uStack_a0 = 3;
            func_0x00010743fa9c((undefined8 *)(lVar18 + 8),&ppuStack_1e0,&ppuStack_80,&uStack_a8,7);
            func_0x000107262330(&ppuStack_1e0);
            func_0x0001078b9d10();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_120);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
          }
        }
        _objc_release();
        func_0x0001078b9d00();
        func_0x0001078b9d18();
        if (CONCAT17(uStack_269,uStack_270) == 0) {
          func_0x0001078b9dac();
          func_0x00010bf25f00();
          ppuStack_2c0 = pppuVar10;
          func_0x0001078b9d8c();
          ppuStack_80 = pppuVar10;
          func_0x0001078b9d30();
          func_0x0001078b9d20();
          func_0x0001078b9e88();
          goto LAB_1078b87f8;
        }
LAB_1078b8800:
        func_0x0001078b8da0(auStack_2e0,*(undefined8 *)(param_1 + 0x48));
        puVar15 = auStack_2e0;
        func_0x0001078b8c64(0x113230910,auStack_2e0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar15);
      _objc_release(pppuVar13);
      _objc_release(pppuVar11);
      func_0x0001078b9ef4();
      _objc_release(pppuVar9);
      goto LAB_1078b8868;
    }
    pppuVar10 = *(undefined8 ****)(param_1 + 0x30);
    func_0x00010c072e60();
    if ((int)pppuVar10 == 0) {
      func_0x0001078b9e28();
      func_0x0001078b9d9c();
      ppuVar3 = ppuStack_1d0;
      *(undefined1 *)pppuVar10 = 6;
      pppuVar10[2] = (undefined8 **)puStack_1d8;
      pppuVar10[1] = ppuStack_1e0;
      ppuStack_1e0 = (undefined8 **)0x0;
      puStack_1d8 = (undefined8 **)0x0;
      ppuStack_1d0 = (undefined8 ***)0x0;
      pppuVar10[4] = (undefined8 **)0x0;
      pppuVar10[5] = (undefined8 **)0x0;
      pppuVar10[3] = ppuVar3;
      func_0x0001078b9da4();
      ppuStack_2c0 = (undefined8 ***)0x0;
      func_0x00010724b300(&uStack_270,pppuVar10);
      func_0x0001072d6f8c(&ppuStack_2c0);
    }
    else {
      func_0x0001078b9dac();
      func_0x00010bf25f00();
      ppuStack_2c0 = pppuVar10;
      func_0x0001078b9d8c();
      ppuStack_80 = pppuVar10;
      func_0x0001078b9d30();
      func_0x0001078b9d20();
      func_0x0001078b9e88();
    }
  }
  else {
    func_0x0001078b8da0(auStack_2a0,*(undefined8 *)(param_1 + 0x48));
    func_0x0001078b8c64(0x113230910,auStack_2a0);
    func_0x0001078b9d78();
    pppuVar10 = (undefined8 ***)PTR_PTR_1126d5590;
    func_0x00010c22bc20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98d40();
    func_0x0001078b9d70();
    func_0x0001078b9d08();
    func_0x0001078b9d00();
    if (param_2 != 0) {
      func_0x0001078b9dac();
      func_0x00010bf25f00();
      ppuStack_2c0 = pppuVar10;
      func_0x0001078b9d8c();
      ppuStack_80 = pppuVar10;
      func_0x0001078b9d30();
      func_0x0001078b9d20();
      func_0x0001078b9e88();
    }
    lVar18 = param_4;
    func_0x00010bf3ec40();
    uVar1 = lVar18 + 0x3fc;
    if (uVar1 < 0x14) {
      if ((1L << (uVar1 & 0x3f) & 0xbc807U) == 0) {
        if (uVar1 != 9) goto LAB_1078b8538;
        func_0x00010c09e4e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001078b9ebc();
        func_0x00010bdc3520();
        func_0x0001078b8dc8(&ppuStack_1e0,3,param_4);
      }
      else {
        func_0x00010c09e4e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001078b9ebc();
        func_0x00010bdc3520();
        func_0x0001078b8dc8(&ppuStack_1e0,4,param_4);
      }
    }
    else {
LAB_1078b8538:
      func_0x00010c09e4e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001078b9ebc();
      func_0x00010bdc3520();
      func_0x0001078b8dc8(&ppuStack_1e0,6,param_4);
    }
    ppuStack_1e0 = (undefined8 **)0x0;
    func_0x0001078b9d80();
    func_0x0001072d6f8c(&ppuStack_1e0);
LAB_1078b8868:
    func_0x0001078b9d00();
  }
  lVar18 = *(long *)(param_1 + 0x48);
  func_0x0001072ab574(lVar18 + 0x18);
  if ((*(byte *)(lVar18 + 0x58) & 1) == 0) {
    func_0x000107528250(*(undefined8 *)(lVar18 + 0x60),auStack_280);
    func_0x000107897e94(*(undefined8 *)(lVar18 + 0x68));
  }
  __ZNSt3__15mutex6unlockEv(lVar18 + 0x18);
  func_0x00010724b340(auStack_280);
LAB_1078b88a8:
  func_0x0001078b9cf8();
  func_0x0001078b9d68();
  _objc_release(param_2);
  return;
}



/* Entry: 1078b904c; end: 1078b9093;  */

long * FUN_1078b904c(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x20;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078b9a6c; end: 1078b9a97;  */

undefined8 * FUN_1078b9a6c(undefined8 *param_1)

{
  _objc_release(param_1[1]);
  _objc_release(*param_1);
  return param_1;
}



/* Entry: 1078b9b3c; end: 1078b9b67;  */

void FUN_1078b9b3c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1109e8150;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1078ba054; end: 1078ba077;  */

void FUN_1078ba054(void)

{
  func_0x0001078ba988();
  _CGDataProviderRelease();
  return;
}



/* Entry: 1078ba7c8; end: 1078ba953;  */

void FUN_1078ba7c8(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar2 = param_2;
  _CGImageGetWidth();
  uVar3 = param_2;
  _CGImageGetHeight();
  lVar6 = uVar2 * 4 * uVar3;
  lVar4 = lVar6;
  __Znam();
  lVar5 = lVar4;
  _bzero();
  lStack_58 = lVar4;
  _CGColorSpaceCreateDeviceRGB();
  lStack_60 = lVar5;
  if (lVar5 == 0) {
    func_0x0001078ba978();
    func_0x0001078baa08();
    func_0x0001078ba964();
    ___cxa_throw(lVar5);
  }
  else {
    _CGBitmapContextCreate(lVar4,uVar2,uVar3,8,uVar2 * 4,lVar5,1);
    lStack_68 = lVar4;
    if (lVar4 != 0) {
      _CGContextSetBlendMode(lVar4,0x11);
      _CGContextDrawImage(0,0,(double)uVar2,(double)uVar3,lVar4,param_2);
      func_0x0001073c8f68(param_1,uVar2 & 0xffffffff | uVar3 << 0x20,1,0,&lStack_58,lVar6,0);
      func_0x0001078ba1c8(&lStack_68);
      func_0x0001078ba9b0();
      func_0x00010724e5b8(&lStack_58);
      return;
    }
    func_0x0001078ba978();
    func_0x0001078ba9dc();
    func_0x0001078ba964();
    ___cxa_throw(lVar4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1078ba910);
  (*pcVar1)();
}



/* Entry: 1078bab84; end: 1078baf17;  */

/* WARNING: Possible PIC construction at 0x0001078bad34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001078baedc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078bad38) */
/* WARNING: Removing unreachable block (ram,0x0001078bae44) */
/* WARNING: Removing unreachable block (ram,0x0001078baed4) */
/* WARNING: Removing unreachable block (ram,0x0001078bad70) */
/* WARNING: Removing unreachable block (ram,0x0001078baee0) */
/* WARNING: Type propagation algorithm not settling */

long FUN_1078bab84(long param_1,undefined2 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  double adStack_b0 [2];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined2 uStack_6a;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  uStack_6a = param_2;
  _CFStringCreateWithCharacters(0,&uStack_6a,1);
  lStack_78 = lVar2;
  if (lVar2 == 0) {
    func_0x0001078bb6d0();
    __ZNSt13runtime_errorC1EPKc();
    func_0x0001078bb690();
  }
  else {
    uStack_60 = *(undefined8 *)PTR__kCTFontAttributeName_11034a070;
    lVar6 = *(long *)PTR__kCFAllocatorDefault_11034ab78;
    uStack_68 = param_3;
    func_0x0001078bb718();
    lVar3 = lVar6;
    _CFDictionaryCreate(lVar6,&uStack_60,&uStack_68,1);
    lStack_80 = lVar3;
    if (lVar3 == 0) {
      func_0x0001078bb6d0();
      __ZNSt13runtime_errorC1EPKc();
      func_0x0001078bb690();
    }
    else {
      _CFAttributedStringCreate(lVar6,lVar2);
      lStack_88 = lVar6;
      if (lVar6 == 0) {
        func_0x0001078bb6d0();
        __ZNSt13runtime_errorC1EPKc();
        func_0x0001078bb690();
      }
      else {
        _CTLineCreateWithAttributedString();
        lStack_90 = lVar6;
        if (lVar6 == 0) {
          func_0x0001078bb6d0();
          __ZNSt13runtime_errorC1EPKc();
          func_0x0001078bb690();
        }
        else {
          *param_4 = 0x2300000023;
          lVar2 = param_1;
          func_0x00010724e0f8(param_1,0x2300000023);
          _CGColorSpaceCreateDeviceRGB();
          lStack_98 = lVar2;
          if (lVar2 == 0) {
            func_0x0001078bb6d0();
            __ZNSt13runtime_errorC1EPKc();
            func_0x0001078bb6a8();
            ___cxa_throw(lVar2);
          }
          else {
            lVar3 = *(long *)(param_1 + 8);
            _CGBitmapContextCreate(lVar3,0x23,0x23,8,0x8c,lVar2,1);
            lStack_a0 = lVar3;
            if (lVar3 != 0) {
              lVar2 = lVar6;
              _CTLineGetGlyphRuns();
              _CFArrayGetValueAtIndex();
              lVar4 = lVar2;
              _CTRunGetGlyphCount();
              lVar5 = lVar4;
              (*(code *)PTR____chkstk_darwin_11034bd40)();
              _CTRunGetAdvances(lVar2,0,lVar4,adStack_b0 + lVar5 * -2);
              *(int *)(param_4 + 2) = (int)adStack_b0[lVar5 * -2];
              param_4[1] = 0x400000003;
              _CTRunGetTypographicBounds(lVar2,0,lVar4,0,adStack_b0 + 1,0);
              _CGContextSetTextPosition(0,adStack_b0[1],lVar3);
              _CTLineDraw(lVar6,lVar3);
              func_0x0001078bb6d8(&lStack_a0);
              _CGContextRelease();
              return param_1;
            }
            func_0x0001078bb6d0();
            __ZNSt13runtime_errorC1EPKc();
            func_0x0001078bb6a8();
            ___cxa_throw(lVar3);
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1078bae44);
  (*pcVar1)();
}



/* Entry: 1078bb4f8; end: 1078bb51b;  */

void FUN_1078bb4f8(void)

{
  func_0x0001078bb6d8();
  _CFRelease();
  return;
}



/* Entry: 1078bb804; end: 1078bb883; -[MGLNativeNetworkManager skuToken] */

void FUN_1078bb804(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  func_0x0001078bba64();
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23e700();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001078bba64();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1078bba38; end: 1078bba43; -[MGLNativeNetworkManager setDelegate:] */

void FUN_1078bba38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 1078bbe2c; end: 1078bbe33;  */

void FUN_1078bbe2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1078bc030; end: 1078bc037;  */

void FUN_1078bc030(undefined8 *param_1)

{
  long unaff_x19;
  
  func_0x0001078bd6f8(*param_1);
  if ((*(byte *)(unaff_x19 + 0x50) & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x50) = 1;
    func_0x0001078bd6e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1078bc160; end: 1078bc167;  */

void FUN_1078bc160(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  
  func_0x0001078bd6f8(*param_1);
  func_0x0001078bc504(unaff_x19 + 0x78,param_2,param_3);
  func_0x0001078bd6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 1078bc28c; end: 1078bc2d7;  */

undefined8 * FUN_1078bc28c(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001078bd79c();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001072adb2c(&uStack_30);
  return param_1;
}



/* Entry: 1078bc5e8; end: 1078bc64f;  */

/* WARNING: Removing unreachable block (ram,0x0001078bc684) */

void FUN_1078bc5e8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  func_0x0001078bd6e8();
  param_2[1] = 0;
  param_2[2] = 0;
  puVar1 = param_2 + 3;
  *param_2 = &PTR_DAT_1109e8250;
  func_0x00010028b0c8(puVar1,param_3);
  *(undefined4 *)(param_2 + 8) = 0;
  *param_1 = puVar1;
  param_1[1] = param_2;
  return;
}



/* Entry: 1078bc74c; end: 1078bc76f;  */

void FUN_1078bc74c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001078bc770(&uStack_11,param_1);
  return;
}



/* Entry: 1078bcbdc; end: 1078bcc33;  */

long * FUN_1078bcbdc(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar1);
    func_0x0001078bd7b4();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078bcefc; end: 1078bcf13;  */

void FUN_1078bcefc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078bd1a4; end: 1078bd1af;  */

void FUN_1078bd1a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e82f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078bd338; end: 1078bd39b;  */

undefined8 * FUN_1078bd338(undefined8 *param_1)

{
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x49) = 0;
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  func_0x0001078bd39c(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0x15) = 0;
  return param_1;
}



/* Entry: 1078bd5d8; end: 1078bd5fb;  */

undefined8 FUN_1078bd5d8(undefined8 param_1)

{
  func_0x0001078bd5fc(param_1,0);
  return param_1;
}



/* Entry: 1078bda74; end: 1078bda8f;  */

ulong FUN_1078bda74(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  func_0x0001078bda90(uVar1);
  return uVar1 & 0xffffffffff;
}



/* Entry: 1078bdbc4; end: 1078bdd83;  */

long * FUN_1078bdbc4(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  ulong uVar6;
  undefined8 auStack_70 [3];
  int *piStack_58;
  int *piStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  ulong uStack_38;
  
  func_0x0001081405c4();
  uStack_38 = param_2[1];
  puStack_40 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uStack_38 = (ulong)*(byte *)((long)param_2 + 0x17);
    puStack_40 = param_2;
  }
  auStack_70[0] = 0;
  uStack_48 = 0;
  func_0x0001003adc18(auStack_70);
  func_0x00010813f954(&piStack_50,&uStack_48,1);
  if (piStack_50 != (int *)0x0) {
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piStack_50,0x10);
      if (bVar3) {
        *piStack_50 = *piStack_50 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  piStack_58 = piStack_50;
  func_0x00010821b4d4(param_1,&piStack_58,0);
  func_0x0001078bddf8(&piStack_58);
  func_0x0001078bddf8(&piStack_50);
  func_0x0001003adc18(&uStack_48);
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  func_0x0001078bde1c(auStack_70,*param_1 + 8);
  func_0x0001078bdd84(&uStack_48,auStack_70,4);
  func_0x0001078bddd4(param_1 + 1,&uStack_48);
  func_0x00010810a400(&uStack_48);
  func_0x0001078be084();
  func_0x00010821c0b4(&uStack_48,*param_1);
  func_0x0001078bdf04(param_1 + 4,&uStack_48);
  func_0x0001078bdf70(&uStack_48);
  iVar5 = 0;
  uVar1 = (uint)((param_1[5] - param_1[4]) / 0x2c);
  *(undefined4 *)(param_1 + 7) = 0;
  piVar4 = (int *)(param_1[4] + 4);
  for (uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar6 != 0; uVar6 = uVar6 - 1) {
    iVar5 = *piVar4 + iVar5;
    *(int *)(param_1 + 7) = iVar5;
    piVar4 = piVar4 + 0xb;
  }
  return param_1;
}



/* Entry: 1078be010; end: 1078be027;  */

void FUN_1078be010(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001078be044(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078be2e0; end: 1078be7f3;  */

void FUN_1078be2e0(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  int iVar2;
  code *pcVar3;
  undefined1 in_ZR;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 extraout_x8;
  undefined8 *puVar8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long lStack_130;
  ulong uStack_128;
  long lStack_120;
  undefined1 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_a0 [56];
  undefined8 uStack_68;
  
  func_0x0001078bf500();
  lVar14 = *param_3;
  lStack_140 = param_3[1];
  lStack_148 = lVar14;
  uStack_68 = extraout_x8;
  if (lStack_140 != 0) {
    do {
      func_0x0001078bf580();
    } while (extraout_w10 != 0);
  }
  func_0x000104c2fe00(auStack_a0,*(long *)(lVar14 + 0x330) + 0x1c8);
  param_4 = param_4 + 0x38;
  puVar7 = auStack_a0;
  func_0x0001078be7f4();
  if ((param_4 == 0) || (*(long *)(puVar7 + 0x38) == 0)) {
    func_0x00010724ef84(&lStack_110,auStack_a0);
    func_0x0001004c3cd0(&lStack_d8,&UNK_10f433c6a,&lStack_110);
    param_1[1] = lStack_d0;
    *param_1 = lStack_d8;
    param_1[2] = lStack_c8;
    lStack_d0 = 0;
    lStack_c8 = 0;
    lStack_d8 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_110);
  }
  else {
    func_0x000104c2f64c(&lStack_d8);
    lStack_120 = lVar14 + 0x208;
    uStack_118 = 1;
    func_0x00010724e404();
    lVar10 = *(long *)(lVar14 + 0x330);
    if (lVar10 != 0) {
      if (*(long *)(lVar10 + 8) == 0) {
        if (*(long *)(lVar10 + 0x10) != 0) {
          do {
            func_0x0001078bf580();
          } while (extraout_w10_01 != 0);
        }
      }
      else {
        func_0x0001003ae9f0(&lStack_110);
        if (lStack_110 == 0) {
          lVar10 = 0;
          lStack_130 = 0;
          uStack_128 = 0;
        }
        else {
          uStack_128 = lStack_108;
          lStack_130 = lVar10;
          if (lStack_108 != 0) {
            do {
              func_0x0001078bf580();
            } while (extraout_w10_00 != 0);
          }
        }
        func_0x0001003a90c4(&lStack_110);
      }
    }
    lStack_130 = 0;
    uStack_128 = 0;
    func_0x0001078be830(&lStack_130);
    func_0x0001077805c4(&lStack_110,*(undefined8 *)(lVar14 + 0x2b0));
    func_0x000104c2f1f0(&lStack_d8,&lStack_110);
    func_0x000104c2f714(&lStack_110);
    func_0x00010724e49c(&lStack_120);
    uVar18 = *(undefined4 *)(lVar14 + 800);
    puVar1 = (ulong *)(lVar10 + 0x210);
    uVar4 = *(ulong *)(lVar10 + 0x210);
    if (uVar4 == 0) {
      uVar12 = *(undefined8 *)(puVar7 + 0x38);
      uVar5 = 8;
      __Znwm(8);
      func_0x0001078bd81c(uVar5,uVar12);
      lStack_110 = 0;
      func_0x0001078be880(puVar1,uVar5);
      func_0x0001078be8a8(&lStack_110);
      uVar4 = *puVar1;
    }
    FUN_1078bda74(uVar18);
    if ((uVar4 >> 0x20 & 1) == 0) {
      func_0x00010002b838(&lStack_110,&UNK_10f433c8d);
      func_0x0001078bf530();
    }
    else {
      lStack_120 = lVar10 + 0x218;
      uStack_118 = 1;
      func_0x0001072ab574();
      puVar13 = (undefined8 *)(lVar10 + 0x260);
      puVar8 = puVar13;
      puVar6 = puVar13;
      while( true ) {
        puVar9 = (undefined8 *)*puVar8;
        iVar11 = (int)uVar4;
        if (puVar9 == (undefined8 *)0x0) break;
        lVar14 = 8;
        if (iVar11 <= *(int *)(puVar9 + 4)) {
          lVar14 = 0;
        }
        puVar8 = (undefined8 *)((long)puVar9 + lVar14);
        if (iVar11 <= *(int *)(puVar9 + 4)) {
          puVar6 = puVar9;
        }
      }
      if ((puVar13 == puVar6) ||
         (in_ZR = *(int *)(puVar6 + 4) == iVar11, iVar11 < *(int *)(puVar6 + 4))) {
        func_0x0001078986fc(&lStack_120);
        func_0x0001078bd86c(&lStack_130,*puVar1,uVar4);
        in_ZR = (char)uStack_128 == '\x01';
        if ((bool)in_ZR) {
          func_0x000107898738(&lStack_120);
          if ((uStack_128 & 1) == 0) goto LAB_1078be724;
          func_0x00010811e74c(*(undefined8 *)(lVar10 + 0x1b0),&lStack_130);
          uVar5 = *(undefined8 *)(lVar10 + 0x1b8);
          fVar19 = *(float *)(lVar10 + 0x208);
          fVar20 = *(float *)(lVar10 + 0x20c);
          func_0x000107473514(&lStack_110);
          uStack_138 = 0;
          func_0x0001078d3484(param_1,uVar5,&lStack_d8,lVar10,(ulong)(uint)(int)fVar19 | 0x100000000
                              ,(ulong)(uint)(int)fVar20 | 0x100000000,&lStack_110,&uStack_138);
          func_0x0001073c5f18(&lStack_110);
          in_ZR = (int)param_1[4] == 1;
          if ((bool)in_ZR) {
            lStack_110 = CONCAT44(lStack_110._4_4_,iVar11);
            lVar17 = param_1[1];
            lVar16 = *param_1;
            lVar15 = param_1[3];
            lVar14 = param_1[2];
            lStack_100 = param_1[1];
            *param_1 = 0;
            param_1[1] = 0;
            lStack_f0 = param_1[3];
            param_1[2] = 0;
            param_1[3] = 0;
            puVar8 = (undefined8 *)*puVar13;
            puVar9 = puVar13;
            lStack_108 = lVar16;
            lStack_f8 = lVar14;
            if ((undefined8 *)*puVar13 != (undefined8 *)0x0) {
              do {
                while( true ) {
                  puVar6 = puVar8;
                  iVar2 = *(int *)(puVar6 + 4);
                  in_ZR = iVar2 == iVar11;
                  puVar9 = puVar6;
                  if (iVar2 <= iVar11) break;
                  puVar8 = (undefined8 *)*puVar6;
                  puVar13 = puVar6;
                  if ((undefined8 *)*puVar6 == (undefined8 *)0x0) goto LAB_1078be628;
                }
                if (iVar11 <= iVar2) goto LAB_1078be6a4;
                puVar8 = (undefined8 *)puVar6[1];
              } while ((undefined8 *)puVar6[1] != (undefined8 *)0x0);
              puVar13 = puVar6 + 1;
            }
LAB_1078be628:
            puVar6 = (undefined8 *)0x48;
            __Znwm();
            *(int *)(puVar6 + 4) = iVar11;
            lStack_108 = 0;
            lStack_100 = 0;
            puVar6[8] = lVar15;
            puVar6[7] = lVar14;
            puVar6[6] = lVar17;
            puVar6[5] = lVar16;
            lStack_f8 = 0;
            lStack_f0 = 0;
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = puVar9;
            *puVar13 = puVar6;
            if (**(long **)(lVar10 + 600) != 0) {
              *(long *)(lVar10 + 600) = **(long **)(lVar10 + 600);
            }
            func_0x00010002c5b0(*(undefined8 *)(lVar10 + 0x260),puVar6);
            *(long *)(lVar10 + 0x268) = *(long *)(lVar10 + 0x268) + 1;
LAB_1078be6a4:
            func_0x000107470508(&lStack_108);
            func_0x000107473200(param_1);
            func_0x0001078bf5a0();
            goto LAB_1078be6b8;
          }
        }
        else {
          func_0x00010002b838(&lStack_110,&UNK_10f433ca7);
          func_0x0001078bf530();
        }
        func_0x0001078bf5a0();
      }
      else {
LAB_1078be6b8:
        func_0x000107471ec0(param_1,puVar6 + 5);
        *(undefined4 *)(param_1 + 4) = 1;
      }
      func_0x00010735fc14(&lStack_120);
    }
    func_0x0001078be8ec(lVar10);
    func_0x000104c2f714(&lStack_d8);
  }
  func_0x000104c2f714(auStack_a0);
  func_0x0001078be164(&lStack_148);
  func_0x0001078bf4d4(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1078be724:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1078be72c);
  (*pcVar3)();
}



/* Entry: 1078be920; end: 1078be92b;  */

void FUN_1078be920(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e83f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078bec58; end: 1078bec6b;  */

void FUN_1078bec58(void)

{
  func_0x0001078bec4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078bee2c; end: 1078bee4f;  */

void FUN_1078bee2c(void)

{
  func_0x0001078bf5b4();
  func_0x0001078bee50();
  return;
}



/* Entry: 1078befbc; end: 1078befdb;  */

void FUN_1078befbc(undefined8 param_1)

{
  undefined1 uStack_11;
  
  func_0x0001078befdc(&uStack_11,param_1);
  return;
}



/* Entry: 1078bf10c; end: 1078bf123;  */

void FUN_1078bf10c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078bf520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078bf29c; end: 1078bf2cb;  */

undefined8 * FUN_1078bf29c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x6522c3f35ba782) {
    puVar1 = (undefined8 *)(param_2 * 0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e85b8;
  param_1[1] = 0;
  func_0x00010811e1f4(param_1 + 3);
  return param_1;
}



/* Entry: 1078bf3c0; end: 1078bf3db;  */

void FUN_1078bf3c0(long param_1)

{
  func_0x000104c318bc();
  *(undefined4 *)(param_1 + 0x78) = 2;
  return;
}



/* Entry: 1078c163c; end: 1078c1793;  */

/* WARNING: Possible PIC construction at 0x0001078c16a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078c16a4) */
/* WARNING: Removing unreachable block (ram,0x0001078c1704) */
/* WARNING: Removing unreachable block (ram,0x0001078c1708) */
/* WARNING: Removing unreachable block (ram,0x0001078c1718) */
/* WARNING: Removing unreachable block (ram,0x0001078c171c) */
/* WARNING: Removing unreachable block (ram,0x0001078c1758) */
/* WARNING: Removing unreachable block (ram,0x0001078c176c) */
/* WARNING: Removing unreachable block (ram,0x0001078c1780) */
/* WARNING: Removing unreachable block (ram,0x0001078c1738) */

undefined8 * FUN_1078c163c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  long lStack_d8;
  undefined1 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_70 [64];
  
  func_0x0001078c5bdc();
  uStack_b8 = 0;
  lStack_b0 = 0;
  func_0x000104c2f64c(auStack_70);
  lVar1 = *param_2;
  lStack_c0 = param_2[1];
  lStack_c8 = lVar1;
  if (lStack_c0 != 0) {
    do {
      func_0x0001078c5d48();
    } while (extraout_w10 != 0);
  }
  lStack_d8 = lVar1 + 0x208;
  uStack_d0 = 1;
  func_0x00010724e404();
  uVar2 = *(undefined8 *)(lVar1 + 0x330);
  lVar3 = *(long *)(lVar1 + 0x338);
  uStack_e8 = 0x1078c16a4;
  lStack_100 = lVar1;
  plStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  if (lVar3 != 0) {
    do {
      func_0x0001078c5d48();
    } while (extraout_w10_00 != 0);
  }
  uStack_108 = lStack_b0;
  uStack_110 = uStack_b8;
  uStack_b8 = uVar2;
  lStack_b0 = lVar3;
  func_0x0001078c17e0(&uStack_110);
  return &uStack_b8;
}



/* Entry: 1078c2250; end: 1078c225f;  */

void FUN_1078c2250(void)

{
  return;
}



/* Entry: 1078c2bec; end: 1078c2c4f;  */

void FUN_1078c2bec(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x68;
    func_0x0001078c2c24();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1078c3174; end: 1078c31cb;  */

void FUN_1078c3174(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001078c5e7c();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3d != 0) {
      func_0x000104bd35f4();
      func_0x0001078c5f54();
      if (param_1 != 0) {
        __ZdlPv();
      }
      return;
    }
    lVar2 = unaff_x20 << 3;
    __Znwm();
  }
  lVar1 = lVar2 + param_3 * 8;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 8;
  return;
}



/* Entry: 1078c33c4; end: 1078c33e7;  */

undefined8 FUN_1078c33c4(undefined8 param_1)

{
  func_0x0001078c3694(param_1,0);
  return param_1;
}



/* Entry: 1078c3de4; end: 1078c3def;  */

void FUN_1078c3de4(long param_1)

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



/* Entry: 1078c4338; end: 1078c43cf;  */

long FUN_1078c4338(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001078c5e7c();
  func_0x0001077de50c();
  func_0x0001077dea24(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x88,unaff_x19 + 2);
  func_0x0001077de69c(lStack_48 + 8,unaff_x20 + 8);
  lStack_48 = lStack_48 + 0x88;
  func_0x0001078c43d0();
  lVar1 = unaff_x19[1];
  func_0x0001077deaf0(auStack_58);
  return lVar1;
}



/* Entry: 1078c4674; end: 1078c4687;  */

void FUN_1078c4674(void)

{
  func_0x0001078c4688();
  return;
}



/* Entry: 1078c4888; end: 1078c492b;  */

void FUN_1078c4888(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar1 = 0x158;
  __Znwm();
  func_0x00010002b838(auStack_58,param_2);
  func_0x00010002b838(auStack_70,param_3);
  func_0x0001078c495c(uVar1,auStack_58,auStack_70,param_4);
  *param_1 = uVar1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  func_0x0001078c5f34();
  return;
}



/* Entry: 1078c5654; end: 1078c568b;  */

void FUN_1078c5654(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_2 + 0x60) == '\x01') {
    func_0x00010727a484(param_1,param_2);
    func_0x000104c2fe00();
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(unaff_x20 + 0x38);
    func_0x00010028af84(param_1 + 0x40,unaff_x20 + 0x40);
    return;
  }
  func_0x000104c318bc();
  uVar1 = *(undefined1 *)(param_3 + 0x38);
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x38) = uVar1;
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_3 + 0x58) == '\x01') {
    uVar3 = *(undefined8 *)(param_3 + 0x48);
    uVar2 = *(undefined8 *)(param_3 + 0x40);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_3 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_3 + 0x48) = 0;
    *(undefined8 *)(param_3 + 0x50) = 0;
    *(undefined8 *)(param_3 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}



/* Entry: 1078c58f8; end: 1078c590b;  */

void FUN_1078c58f8(void)

{
  func_0x0001078c58ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078c5ae0; end: 1078c5b0f;  */

long FUN_1078c5ae0(long param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  
  func_0x0001078c2260(param_1 + 0x158);
  func_0x000107276ba4(param_1 + 0xb0);
  lVar1 = param_1 + 0x18;
  func_0x0001077ef118(&UNK_1109de828);
  func_0x000104c2f714(lVar1 + 0x58);
  FUN_1077e2904(unaff_x20);
  return param_1 + 0x18;
}



/* Entry: 1078cab7c; end: 1078cac37;  */

void FUN_1078cab7c(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined1 uStack_38;
  
  lStack_40 = param_1 + 0x1b8;
  uStack_38 = 1;
  __ZNSt3__119__shared_mutex_base4lockEv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x0001078d1bf8(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    lVar2 = *(long *)(param_1 + 0x20);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar1 * 8) = 0;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x128);
  while (lVar1 != param_1 + 0x130) {
    lVar2 = *(long *)(lVar1 + 0x40);
    func_0x000104c2f714(lVar1);
    func_0x0001078d29c0();
    lVar1 = lVar2;
  }
  *(long *)(param_1 + 0x128) = param_1 + 0x130;
  *(long *)(param_1 + 0x168) = param_1 + 0xe8;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000104c305a0(&lStack_40);
  return;
}



/* Entry: 1078cb644; end: 1078cb65b;  */

undefined8 FUN_1078cb644(undefined8 param_1,long param_2)

{
  undefined8 uStack_18;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    uStack_18 = 0;
    func_0x0001077ab248(&uStack_18,param_2);
    return uStack_18;
  }
  uStack_18 = 0;
  func_0x0001073ca0ec(&uStack_18,param_2);
  return uStack_18;
}



/* Entry: 1078cd040; end: 1078cd107;  */

long FUN_1078cd040(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010726364c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000104c32db4(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1078cdaa4; end: 1078cdc07;  */

void FUN_1078cdaa4(undefined1 *param_1,long param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 uStack_70;
  
  if ((*(char *)(param_3 + 1) == '\x01') && ((*(byte *)(param_4 + 1) & 1) != 0)) {
    if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
      do {
        func_0x0001078d2394();
      } while (extraout_w10 != 0);
    }
    lStack_88 = param_2;
    func_0x00010726a954();
    uVar1 = *param_3;
    func_0x00010726a954();
    uStack_7c = *param_4;
    uStack_78 = 0;
    uStack_80 = uVar1;
    func_0x0001078ce27c();
    uStack_74 = SUB84(param_5,0);
    uStack_70 = (undefined1)((ulong)param_5 >> 0x20);
    func_0x0001078ce27c(param_6);
    func_0x0001078d2b48();
    func_0x0001078d2914();
  }
  else {
    if ((*(char *)(param_5 + 1) != '\x01') || ((*(byte *)(param_6 + 1) & 1) == 0)) {
      *param_1 = 0;
      param_1[0x48] = 0;
      return;
    }
    if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
      do {
        func_0x0001078d2394();
      } while (extraout_w10_00 != 0);
    }
    puVar2 = param_5;
    lStack_88 = param_2;
    func_0x00010726a954();
    uVar1 = *puVar2;
    puVar2 = param_6;
    func_0x00010726a954();
    uStack_7c = *puVar2;
    uStack_78 = 1;
    uStack_80 = uVar1;
    func_0x0001078ce27c();
    uStack_74 = SUB84(param_5,0);
    uStack_70 = (undefined1)((ulong)param_5 >> 0x20);
    func_0x0001078ce27c(param_6);
    func_0x0001078d2b48();
    func_0x0001078d2914();
  }
  func_0x0001078ce2ac(param_1,&lStack_88);
  func_0x0001078ce2c8(&lStack_88);
  return;
}



/* Entry: 1078cdeb0; end: 1078cdedb;  */

void FUN_1078cdeb0(void)

{
  undefined1 in_ZR;
  
  func_0x0001078d2bd8();
  if (!(bool)in_ZR) {
    func_0x0001078d2480();
    func_0x0001078ce624();
  }
  return;
}



/* Entry: 1078ce1f0; end: 1078ce20f;  */

void FUN_1078ce1f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001078d2430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1078ce3cc; end: 1078ce3cf;  */

void FUN_1078ce3cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8b48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078ce4e0; end: 1078ce507;  */

void FUN_1078ce4e0(long param_1,long param_2)

{
  func_0x000104c318bc();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}



/* Entry: 1078ce5c0; end: 1078ce613;  */

void FUN_1078ce5c0(long param_1,long param_2)

{
  int extraout_w11;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    if (*(long *)(param_1 + 8) != 0) {
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



/* Entry: 1078ce78c; end: 1078ce79f;  */

void FUN_1078ce78c(void)

{
  func_0x0001078ce740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078cec84; end: 1078cef7f;  */

void FUN_1078cec84(long param_1,long param_2)

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
  
  func_0x0001078d25ec();
  func_0x0001078cef80();
  if (param_1 != 0) goto LAB_1078cee70;
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
      func_0x0001078cf0ac();
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
          func_0x0001078cf0ac();
          puStack_78 = puVar13 + lVar8;
          puStack_90 = puVar13;
          puStack_88 = puVar13;
          puStack_80 = puVar13;
          func_0x0001078cf084(&puStack_90,puVar9,puVar9);
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
          func_0x0001078d2a18();
          puVar6 = puVar13;
          puVar9 = puVar12;
          puVar10 = puVar1;
        }
        else {
          func_0x0001078d2c40((long)puVar9 - (long)puVar6);
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
            func_0x0001078d2c40((long)puVar10 - (long)puVar13);
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
            func_0x0001078cf0ac(lVar8);
            func_0x0001078d2870(lVar8 * 2 + 6);
            func_0x0001078cf084(&puStack_90,puVar6,puVar13);
            puVar3 = puStack_78;
            puVar2 = puStack_80;
            puVar7 = puStack_88;
            puVar1 = puStack_90;
            puStack_90 = puVar6;
            puStack_88 = puVar9;
            puStack_80 = puVar13;
            puStack_78 = puVar10;
            func_0x0001078d2a18();
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
      func_0x0001078cf0e0(&uStack_d0);
      func_0x0001078cf108(&puStack_b8);
      goto LAB_1078cee70;
    }
    uVar4 = 0x1000;
    __Znwm();
    if (puVar9 != puVar12) {
      *puVar12 = uVar4;
      unaff_x19[2] = (long)(puVar12 + 1);
      goto LAB_1078cee70;
    }
    if (puVar13 == puVar10) {
      lVar8 = (long)puVar9 - (long)puVar13 >> 2;
      if (puVar12 == puVar13) {
        lVar8 = 1;
      }
      plStack_70 = plVar5;
      func_0x0001078cf0ac();
      func_0x0001078d2870(lVar8 * 2 + 6);
      func_0x0001078cf084(&puStack_90,unaff_x19[1],unaff_x19[2]);
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
      func_0x0001078d2a18();
      puVar13 = (undefined8 *)unaff_x19[1];
    }
    puVar13[-1] = uVar4;
    unaff_x19[1] = (long)puVar13;
  }
  else {
    func_0x0001078d2840(unaff_x19[4] - 0x200);
  }
  func_0x0001078cefc0();
LAB_1078cee70:
  plVar5 = unaff_x19;
  func_0x0001078cef94();
  *plVar5 = unaff_x20;
  unaff_x19[5] = unaff_x19[5] + 1;
  return;
}



/* Entry: 1078cf224; end: 1078cf2c3;  */

long FUN_1078cf224(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 uStack_39;
  long lStack_38;
  
  func_0x0001078cf2c4(param_1,&UNK_10f433d1d,&UNK_10f433d1d,param_2);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar1 = &UNK_10f433d1e;
  func_0x0001078c492c(param_2,&UNK_10f433d1e);
  if (param_2 != 0) {
    lStack_38 = param_1;
    func_0x0001078cf360(puVar1 + 0x38,&lStack_38,&uStack_39);
  }
  return param_1;
}



/* Entry: 1078d1874; end: 1078d18fb;  */

void FUN_1078d1874(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [32];
  
  if (*(int *)(param_1 + 0x68) == 8) {
    lVar4 = *param_2;
    lVar1 = (*(long **)(param_1 + 8))[1];
    for (lVar3 = **(long **)(param_1 + 8); lVar3 != lVar1; lVar3 = lVar3 + 0x70) {
      if (*(int *)(lVar3 + 0x68) == 9) {
        lVar2 = lVar3;
        func_0x0001074d2730(lVar3);
        FUN_1078cf224(auStack_50,lVar2);
        func_0x0001077e90e8(lVar4 + 8,auStack_50);
        func_0x0001078d2a88();
      }
    }
  }
  return;
}



/* Entry: 1078d1b40; end: 1078d1b53;  */

void FUN_1078d1b40(void)

{
  func_0x0001078d1b34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078d1c7c; end: 1078d1cb7;  */

undefined8 * FUN_1078d1c7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8ab8;
  func_0x0001078cab50(param_1 + 0x68);
  func_0x0001078caf08(param_1 + 0x66);
  *param_1 = &PTR_DAT_1109b2960;
  func_0x0001078bebf8(param_1 + 0x5e);
  func_0x0001078bebf8(param_1 + 0x58);
  func_0x0001074734f0(param_1 + 0x56);
  func_0x000107276ba4(param_1 + 0x41);
  func_0x00010747396c(param_1 + 0x3d);
  func_0x00010746fdb4(param_1 + 4);
  func_0x000107473948(param_1 + 2);
  return param_1;
}



/* Entry: 1078d1f0c; end: 1078d1f63;  */

undefined8 FUN_1078d1f0c(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  func_0x0001073ca0ec(&uStack_18,param_1);
  return uStack_18;
}



/* Entry: 1078d3434; end: 1078d3483;  */

undefined8 FUN_1078d3434(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001078d345c(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1078d3a0c; end: 1078d3a2b;  */

void FUN_1078d3a0c(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x0001078d3a2c();
  }
  return;
}



/* Entry: 1078d3c24; end: 1078d3cc7;  */

void FUN_1078d3c24(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001078d4ae0();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0xb0) {
    func_0x0001078d4b4c();
  }
  return;
}



/* Entry: 1078d3e0c; end: 1078d3e7b;  */

void FUN_1078d3e0c(long param_1)

{
  long *unaff_x19;
  
  func_0x0001078d4a98();
  while (param_1 != unaff_x19[1]) {
    func_0x0001078d3d64();
    param_1 = *unaff_x19 + 0xb0;
    *unaff_x19 = param_1;
  }
  return;
}



/* Entry: 1078d4038; end: 1078d4083;  */

long FUN_1078d4038(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    func_0x0001078d3c54(param_4,param_2);
    param_2 = param_2 + 0xb0;
    param_4 = param_4 + 0xb0;
    lVar1 = lVar1 + 0xb0;
  }
  return lVar1;
}



/* Entry: 1078d4368; end: 1078d4397;  */

void FUN_1078d4368(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x19;
  
  func_0x0001078d4ae0();
  while (param_3 != 0) {
    func_0x0001078d4b4c();
    unaff_x19 = unaff_x19 + -1;
    param_3 = unaff_x19;
  }
  return;
}



/* Entry: 1078d4530; end: 1078d456b;  */

void FUN_1078d4530(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001078d4afc();
  func_0x0001078d4590();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  func_0x00010090c1cc(unaff_x20 + 0x38,unaff_x19 + 0x38);
  return;
}



/* Entry: 1078d468c; end: 1078d46af;  */

undefined8 * FUN_1078d468c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_1109e8b98;
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  func_0x0001078d3edc(param_2 + 4,param_1 + 0x20);
  return param_2;
}



/* Entry: 1078d4980; end: 1078d4b93;  */

void FUN_1078d4980(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001078d49f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1078d509c; end: 1078d50c3;  */

long FUN_1078d509c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078d52e0; end: 1078d52ef;  */

void FUN_1078d52e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8d08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078d545c; end: 1078d5517;  */

/* WARNING: Possible PIC construction at 0x0001078d54e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001078d54e4) */
/* WARNING: Removing unreachable block (ram,0x0001078d5504) */
/* WARNING: Removing unreachable block (ram,0x0001078d54f0) */
/* WARNING: Removing unreachable block (ram,0x0001078d5530) */

undefined1 * FUN_1078d545c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 *puStack_40;
  
  func_0x0001078d6b74();
  uStack_48 = 1;
  puVar1 = (undefined8 *)0x350;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e8e50;
  puStack_40 = puVar1;
  func_0x0001074698a0(puVar1 + 3,param_3);
  puVar1[3] = &PTR_FUN_1109e8ea0;
  puVar1[0x69] = 0;
  puStack_40 = (undefined8 *)0x0;
  func_0x0001078d5ea0(auStack_50);
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  return auStack_50;
}



/* Entry: 1078d5d64; end: 1078d5dcb;  */

float FUN_1078d5d64(float *param_1,long param_2)

{
  float fVar1;
  float unaff_s8;
  
  if (param_2 != 0) {
    func_0x0001078d6bcc();
    fVar1 = *param_1;
    func_0x0001078d6bdc(fVar1);
    return unaff_s8 / fVar1;
  }
  return 0.0;
}



/* Entry: 1078d5ef4; end: 1078d5f27;  */

undefined8 * FUN_1078d5ef4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e8ea0;
  func_0x0001078d56f8(param_1 + 0x66);
  *param_1 = &PTR_DAT_1109b2960;
  func_0x0001078bebf8(param_1 + 0x5e);
  func_0x0001078bebf8(param_1 + 0x58);
  func_0x0001074734f0(param_1 + 0x56);
  func_0x000107276ba4(param_1 + 0x41);
  func_0x00010747396c(param_1 + 0x3d);
  func_0x00010746fdb4(param_1 + 4);
  func_0x000107473948(param_1 + 2);
  return param_1;
}



/* Entry: 1078d60d0; end: 1078d64c3;  */

undefined8 * FUN_1078d60d0(undefined8 *param_1,float *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  float extraout_s1;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  float fVar24;
  long lStack_a8;
  
  lStack_a8 = *(long *)(param_2 + 6);
  if (lStack_a8 != 0) {
    plVar1 = (long *)(lStack_a8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000108122a10(param_1,&lStack_a8);
  func_0x000107475310(&lStack_a8);
  *param_1 = &PTR_DAT_1109e8f30;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  fVar16 = *param_2;
  func_0x000107278acc(param_1 + 0x3e,param_3 + 8);
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_3 + 0x68);
  *(undefined4 *)((long)param_1 + 0x254) = *(undefined4 *)(param_3 + 0x6c);
  param_1[0x4b] = *(undefined8 *)(param_3 + 0x70);
  func_0x000107278acc(param_1 + 0x4c,param_3 + 0x78);
  uVar17 = *(undefined8 *)(param_3 + 0xd8);
  param_1[0x59] = *(undefined8 *)(param_3 + 0xe0);
  param_1[0x58] = uVar17;
  uVar17 = *(undefined8 *)(param_3 + 0xe8);
  param_1[0x5b] = *(undefined8 *)(param_3 + 0xf0);
  param_1[0x5a] = uVar17;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_3 + 0xf8);
  *(undefined4 *)((long)param_1 + 0x2e4) = *(undefined4 *)(param_3 + 0xfc);
  *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_3 + 0x100);
  *(undefined4 *)((long)param_1 + 0x2ec) = *(undefined4 *)(param_3 + 0x104);
  *(undefined4 *)(param_1 + 0x5e) = *(undefined4 *)(param_3 + 0x108);
  *(undefined8 *)((long)param_1 + 0x2f4) = *(undefined8 *)(param_3 + 0x10c);
  *(undefined4 *)((long)param_1 + 0x2fc) = *(undefined4 *)(param_3 + 0x114);
  uVar17 = *(undefined8 *)(param_3 + 0x118);
  param_1[0x61] = *(undefined8 *)(param_3 + 0x120);
  param_1[0x60] = uVar17;
  *(undefined4 *)(param_1 + 0x62) = *(undefined4 *)(param_3 + 0x128);
  *(undefined4 *)((long)param_1 + 0x314) = *(undefined4 *)(param_3 + 300);
  param_1[0x3d] = &PTR_DAT_1109ddfe0;
  param_1[99] = *(undefined8 *)(param_3 + 0x130);
  puVar7 = param_1 + 100;
  func_0x000104c2fe00(puVar7,param_3 + 0x138);
  iVar6 = (int)puVar7;
  *(float *)(param_1 + 0x6b) = fVar16;
  param_1[0x6c] = param_1 + 0x3e;
  param_1[0x6d] = param_1 + 0x4c;
  fVar21 = (float)((ulong)param_1[0x4a] >> 0x20) * fVar16;
  fVar19 = (float)((ulong)param_1[0x4b] >> 0x20) * fVar16;
  auVar18._0_8_ = (double)(fVar16 * (float)*(undefined8 *)((long)param_1 + 0x2ec));
  auVar18._8_8_ = (double)(fVar16 * (float)((ulong)*(undefined8 *)((long)param_1 + 0x2ec) >> 0x20));
  auVar18 = NEON_ext(auVar18,auVar18,8,1);
  param_1[0x6f] =
       CONCAT17((char)((uint)fVar19 >> 0x18),
                CONCAT16((char)((uint)fVar19 >> 0x10),
                         CONCAT15((char)((uint)fVar19 >> 8),
                                  CONCAT14(SUB41(fVar19,0),(float)param_1[0x4b] * fVar16))));
  param_1[0x6e] =
       CONCAT17((char)((uint)fVar21 >> 0x18),
                CONCAT16((char)((uint)fVar21 >> 0x10),
                         CONCAT15((char)((uint)fVar21 >> 8),
                                  CONCAT14(SUB41(fVar21,0),(float)param_1[0x4a] * fVar16))));
  param_1[0x71] = auVar18._8_8_;
  param_1[0x70] = auVar18._0_8_;
  fVar21 = fVar16 * (float)((ulong)param_1[0x5c] >> 0x20);
  uVar17 = NEON_rev64(CONCAT17((char)((uint)fVar21 >> 0x18),
                               CONCAT16((char)((uint)fVar21 >> 0x10),
                                        CONCAT15((char)((uint)fVar21 >> 8),
                                                 CONCAT14(SUB41(fVar21,0),
                                                          fVar16 * (float)param_1[0x5c])))),4);
  param_1[0x72] = uVar17;
  *(undefined4 *)(param_1 + 0x73) = *(undefined4 *)(param_1 + 0x5d);
  func_0x0001078d6cd0();
  func_0x0001078d5dcc();
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar13 = 0;
  if (iVar6 != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x73);
    uVar8 = (undefined1)uVar5;
    uVar9 = (undefined1)((uint)uVar5 >> 8);
    uVar10 = (undefined1)((uint)uVar5 >> 0x10);
    uVar13 = (undefined1)((uint)uVar5 >> 0x18);
  }
  *(uint *)((long)param_1 + 0x39c) = CONCAT13(uVar13,CONCAT12(uVar10,CONCAT11(uVar9,uVar8)));
  uVar8 = 0x9a;
  uVar9 = 0x99;
  uVar10 = 0x99;
  uVar13 = 0x3e;
  param_1[0x74] = 0x3e99999a3e99999a;
  func_0x0001078d6b98();
  FUN_1078d5d64();
  fVar21 = (float)CONCAT13(uVar13,CONCAT12(uVar10,CONCAT11(uVar9,uVar8)));
  fVar19 = *(float *)(param_1 + 0x74);
  func_0x0001078d6b98();
  func_0x0001078d5d98();
  *(float *)(param_1 + 0x75) = fVar21 * fVar19;
  *(float *)((long)param_1 + 0x3ac) =
       (float)CONCAT13(uVar13,CONCAT12(uVar10,CONCAT11(uVar9,uVar8))) *
       *(float *)((long)param_1 + 0x3a4);
  fVar21 = *(float *)((long)param_1 + 0x2fc);
  uVar8 = SUB41(fVar21,0);
  uVar9 = (undefined1)((uint)fVar21 >> 8);
  uVar10 = (undefined1)((uint)fVar21 >> 0x10);
  uVar13 = (undefined1)((uint)fVar21 >> 0x18);
  fVar19 = (float)*(undefined8 *)((long)param_1 + 0x2f4) * fVar16;
  fVar16 = (float)((ulong)*(undefined8 *)((long)param_1 + 0x2f4) >> 0x20) * fVar16;
  param_1[0x76] = CONCAT44(fVar16,fVar19);
  uVar17 = NEON_fmov(0x40800000,4);
  param_1[0x77] =
       CONCAT44(-fVar16 + (float)((ulong)uVar17 >> 0x20) * fVar21,-fVar19 + (float)uVar17 * fVar21);
  fVar19 = *(float *)(param_1 + 0x72);
  dVar20 = (double)param_1[0x70];
  func_0x0001078d6b98();
  func_0x0001078d6a98();
  fVar16 = (float)CONCAT13(uVar13,CONCAT12(uVar10,CONCAT11(uVar9,uVar8)));
  fVar21 = *(float *)(param_1 + 0x77);
  dVar22 = (double)param_1[0x71];
  fVar24 = *(float *)((long)param_1 + 0x394);
  dVar23 = (double)param_1[0x70];
  func_0x0001078d6cd0();
  func_0x0001078d6a98();
  if (fVar21 <= fVar16) {
    fVar21 = fVar16;
  }
  fVar16 = *(float *)((long)param_1 + 0x3bc);
  if (fVar16 <= extraout_s1) {
    fVar16 = extraout_s1;
  }
  *(float *)(param_1 + 0x78) = (float)((double)fVar19 + dVar20 * 2.0 + (double)fVar21);
  *(float *)((long)param_1 + 0x3c4) =
       (float)(dVar22 + (double)fVar24 + dVar23 * 2.0 + (double)fVar16);
  fVar16 = *(float *)(param_1 + 0x72);
  uVar8 = SUB41(fVar16,0);
  uVar10 = (undefined1)((uint)fVar16 >> 8);
  uVar11 = (undefined1)((uint)fVar16 >> 0x10);
  uVar14 = (undefined1)((uint)fVar16 >> 0x18);
  func_0x0001078d6cd0();
  func_0x0001078d5c68();
  fVar21 = *(float *)(param_1 + 0x6f);
  fVar19 = *(float *)((long)param_1 + 0x394);
  uVar9 = SUB41(fVar19,0);
  uVar13 = (undefined1)((uint)fVar19 >> 8);
  uVar12 = (undefined1)((uint)fVar19 >> 0x10);
  uVar15 = (undefined1)((uint)fVar19 >> 0x18);
  func_0x0001078d6cd0();
  func_0x0001078d5ce4();
  fVar16 = fVar16 - (float)CONCAT13(uVar14,CONCAT12(uVar11,CONCAT11(uVar10,uVar8)));
  fVar19 = fVar19 - (float)CONCAT13(uVar15,CONCAT12(uVar12,CONCAT11(uVar13,uVar9)));
  auVar18 = NEON_fmov(0x3fe0000000000000,8);
  dVar20 = (double)fVar16 * auVar18._0_8_ + (double)fVar21;
  dVar22 = (double)(float)(CONCAT17((char)((uint)fVar19 >> 0x18),
                                    CONCAT16((char)((uint)fVar19 >> 0x10),
                                             CONCAT15((char)((uint)fVar19 >> 8),
                                                      CONCAT14(SUB41(fVar19,0),fVar16)))) >> 0x20) *
           auVar18._8_8_ + (double)*(float *)((long)param_1 + 0x37c);
  auVar4[8] = SUB81(dVar22,0);
  auVar4._0_8_ = dVar20;
  auVar4[9] = (char)((ulong)dVar22 >> 8);
  auVar4[10] = (char)((ulong)dVar22 >> 0x10);
  auVar4[0xb] = (char)((ulong)dVar22 >> 0x18);
  auVar4[0xc] = (char)((ulong)dVar22 >> 0x20);
  auVar4[0xd] = (char)((ulong)dVar22 >> 0x28);
  auVar4[0xe] = (char)((ulong)dVar22 >> 0x30);
  auVar4[0xf] = (char)((ulong)dVar22 >> 0x38);
  fVar16 = (float)dVar20;
  uVar8 = SUB41(fVar16,0);
  uVar9 = (undefined1)((uint)fVar16 >> 8);
  uVar10 = (undefined1)((uint)fVar16 >> 0x10);
  uVar13 = (undefined1)((uint)fVar16 >> 0x18);
  fVar21 = (float)auVar4._8_8_;
  param_1[0x79] =
       CONCAT17((char)((uint)fVar21 >> 0x18),
                CONCAT16((char)((uint)fVar21 >> 0x10),
                         CONCAT15((char)((uint)fVar21 >> 8),CONCAT14(SUB41(fVar21,0),fVar16))));
  fVar21 = *(float *)(param_1 + 0x72);
  fVar19 = *(float *)(param_1 + 0x74);
  func_0x0001078d6b98();
  FUN_1078d5d64();
  fVar16 = (float)CONCAT13(uVar13,CONCAT12(uVar10,CONCAT11(uVar9,uVar8)));
  fVar24 = *(float *)((long)param_1 + 0x3a4);
  func_0x0001078d6b98();
  func_0x0001078d5d98();
  *(float *)(param_1 + 0x7a) = fVar21 - fVar16 * (1.0 - fVar19);
  *(float *)((long)param_1 + 0x3d4) =
       -(fVar24 * (float)CONCAT13(uVar13,CONCAT12(uVar10,CONCAT11(uVar9,uVar8))));
  param_1[0x7b] = param_2;
  return param_1;
}



/* Entry: 1078d6de8; end: 1078d6e8b;  */

void FUN_1078d6de8(undefined8 param_1,long *param_2)

{
  long lVar1;
  int extraout_w10;
  long lStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *param_2;
  lStack_38 = param_2[1];
  lStack_40 = lVar1;
  if (lStack_38 != 0) {
    do {
      func_0x0001078d7850();
    } while (extraout_w10 != 0);
  }
  lStack_50 = lVar1 + 0x208;
  uStack_48 = 1;
  func_0x00010724e404();
  func_0x0001078d6e8c(*(undefined8 *)(lVar1 + 0x330));
  func_0x00010724e49c(&lStack_50);
  func_0x0001078d6dc0(&lStack_40);
  return;
}



/* Entry: 1078d7434; end: 1078d745b;  */

long FUN_1078d7434(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078d768c; end: 1078d769b;  */

void FUN_1078d768c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e90b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1078d7968; end: 1078d798f;  */

long FUN_1078d7968(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1078d7d4c; end: 1078d7d73;  */

long FUN_1078d7d4c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1078d7fa8; end: 1078d7fb7;  */

void FUN_1078d7fa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e9290;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}


