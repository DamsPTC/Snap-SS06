/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082e6aec; end: 1082e6aff;  */

void FUN_1082e6aec(void)

{
  func_0x00010828e388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082e6b00; end: 1082e6b1b;  */

undefined1 (*) [16]
FUN_1082e6b00(long param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],long param_4,
             undefined8 param_5,long param_6,undefined4 *param_7,long param_8)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  ulong uVar10;
  undefined4 *puVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  long lVar14;
  undefined1 (*pauVar15) [16];
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar26 [16];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  puVar1 = (uint *)(param_1 + 0x58);
  pauVar8 = (undefined1 (*) [16])(param_4 + 0x90);
  pauVar15 = (undefined1 (*) [16])(param_1 + 0x30);
  uStack_40 = (undefined4)unaff_x24;
  uStack_3c = (undefined4)((ulong)unaff_x24 >> 0x20);
  uStack_38 = (undefined4)unaff_x23;
  uStack_34 = (undefined4)((ulong)unaff_x23 >> 0x20);
  uStack_30 = (undefined4)unaff_x22;
  uStack_2c = (undefined4)((ulong)unaff_x22 >> 0x20);
  uStack_28 = (undefined4)unaff_x21;
  uStack_24 = (undefined4)((ulong)unaff_x21 >> 0x20);
  uStack_20 = (undefined4)unaff_x20;
  uStack_1c = (undefined4)((ulong)unaff_x20 >> 0x20);
  pcStack_48 = *(code **)PTR____stack_chk_guard_11034bdc0;
  uVar6 = *puVar1 == 0xffffffff;
  pauVar7 = param_2;
  pauVar9 = param_3;
  if (!(bool)uVar6) {
    pauVar12 = pauVar8;
    pauVar13 = pauVar15;
    if (pauVar15 != (undefined1 (*) [16])0x0) {
      pauVar7 = pauVar15;
      pauVar9 = pauVar8;
      FUN_10829dddc();
      if (((ulong)pauVar7 & 1) != 0) goto LAB_10829dd84;
      uVar3 = *(undefined8 *)*pauVar8;
      uVar4 = *(undefined8 *)(param_4 + 0x98);
      uVar21 = *(undefined8 *)(param_4 + 0xa8);
      uVar2 = *(undefined8 *)(param_4 + 0xa0);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_4 + 0xb0);
      *(undefined8 *)(param_1 + 0x38) = uVar4;
      *(undefined8 *)*pauVar15 = uVar3;
      *(undefined8 *)(param_1 + 0x48) = uVar21;
      *(undefined8 *)(param_1 + 0x40) = uVar2;
    }
    pauVar7 = pauVar8;
    FUN_1082878d0();
    if (((int)pauVar7 == 0) || ((param_3[6][3] & 1) != 0)) {
      pauVar9 = (undefined1 (*) [16])(ulong)*puVar1;
      func_0x00010829edd0(pcStack_48);
      if ((bool)uVar6) {
        lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
        auVar18 = *pauVar8;
        pauVar8 = (undefined1 (*) [16])(param_4 + 0xa0);
        auVar22 = NEON_ext(*pauVar8,auVar18,4,1);
        auVar26._4_12_ = auVar22._4_12_;
        auVar26._0_4_ = auVar22._4_4_;
        auVar24._0_8_ = auVar26._0_8_;
        auVar24._8_4_ = auVar22._12_4_;
        auVar24._12_4_ = auVar22._12_4_;
        auVar23._8_8_ = auVar24._8_8_;
        auVar23._4_4_ = auVar18._4_4_;
        auVar23._0_4_ = auVar22._4_4_;
        auVar25._0_12_ = auVar23._0_12_;
        auVar25._12_4_ = auVar18._12_4_;
        auVar26 = NEON_ext(auVar25,auVar25,8,1);
        auVar18 = NEON_ext(auVar18,*pauVar8,4,1);
        auVar22._4_12_ = auVar18._4_12_;
        auVar22._0_4_ = auVar18._4_4_;
        auVar20._0_8_ = auVar22._0_8_;
        auVar20._8_4_ = auVar18._12_4_;
        auVar20._12_4_ = auVar18._12_4_;
        auVar19._8_8_ = auVar20._8_8_;
        auVar19._4_4_ = (int)((ulong)*(undefined8 *)*pauVar8 >> 0x20);
        auVar19._0_4_ = auVar18._4_4_;
        auVar18._0_12_ = auVar19._0_12_;
        auVar18._12_4_ = (int)((ulong)*(undefined8 *)(param_4 + 0xa8) >> 0x20);
        auVar18 = NEON_ext(auVar18,auVar18,8,1);
        uStack_24 = auVar18._8_4_;
        uStack_20 = auVar18._12_4_;
        uStack_2c = auVar18._0_4_;
        uStack_28 = auVar18._4_4_;
        uStack_34 = auVar26._8_4_;
        uStack_30 = auVar26._12_4_;
        uStack_3c = auVar26._0_4_;
        uStack_38 = auVar26._4_4_;
        uStack_1c = *(undefined4 *)(param_4 + 0xb0);
        uVar10 = (ulong)pauVar9 & 0xffffffff;
        puVar11 = &uStack_3c;
        (**(code **)(*(long *)*param_2 + 0x98))();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
          return param_2;
        }
        ___stack_chk_fail();
        pcStack_48 = FUN_1082dc350;
        puVar16 = (undefined4 *)0x0;
        pauVar15 = (undefined1 (*) [16])0x0;
        puVar17 = (undefined4 *)(uVar10 + 0x1c);
        pauVar8 = param_2;
        puStack_50 = &stack0xfffffffffffffff0;
        do {
          if (puVar11 == puVar16) {
            return pauVar8;
          }
          if (param_7 == (undefined4 *)0x0) {
LAB_1082dc3bc:
            if (pauVar13 <= pauVar15) {
LAB_1082dc428:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1082dc42c);
              (*pcVar5)();
            }
            pauVar7 = (undefined1 (*) [16])(*pauVar15 + 1);
            if ((uint)puVar17[-1] < 0xb) {
              pauVar8 = param_2;
              (**(code **)(*(long *)*param_2 +
                          *(long *)(&UNK_10df166b8 + (ulong)(uint)puVar17[-1] * 8)))
                        (param_2,*(undefined4 *)(*pauVar12 + (long)pauVar15 * 4),*puVar17,
                         param_8 + *(long *)(puVar17 + -3));
            }
          }
          else {
            if (param_7 <= puVar16) goto LAB_1082dc428;
            pauVar7 = pauVar15;
            if ((*(byte *)(param_6 + (long)puVar16) & 1) == 0) goto LAB_1082dc3bc;
          }
          pauVar15 = pauVar7;
          puVar16 = (undefined4 *)((long)puVar16 + 1);
          puVar17 = puVar17 + 10;
        } while( true );
      }
      goto LAB_10829ddd8;
    }
    _uStack_58 = CONCAT44(*(undefined4 *)(param_4 + 0x98),*(undefined4 *)*pauVar8);
    puStack_50 = *(undefined1 **)(param_4 + 0xa0);
    pauVar9 = (undefined1 (*) [16])(ulong)*puVar1;
    (**(code **)(*(long *)*param_2 + 0x88))(param_2,pauVar9,1,&uStack_58);
    pauVar7 = param_2;
  }
LAB_10829dd84:
  func_0x00010829edd0(pcStack_48);
  if ((bool)uVar6) {
    return pauVar7;
  }
LAB_10829ddd8:
  ___stack_chk_fail();
  if (pauVar7 == pauVar9) {
    return (undefined1 (*) [16])0x1;
  }
  _memcmp();
  return (undefined1 (*) [16])(ulong)((int)pauVar7 == 0);
}



/* Entry: 1082e6b1c; end: 1082e6d43;  */

void FUN_1082e6b1c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [4];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  lVar3 = param_2[5];
  uVar1 = *param_2;
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  FUN_1082dd9a4(uVar4,lVar3);
  auStack_78[0] = 0x10;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_64 = 0;
  FUN_1082dd868(uVar4,&UNK_10f487ed2,auStack_78,0);
  FUN_10828bae8(uVar1,&UNK_10f481e56);
  func_0x0001082e72b0();
  func_0x0001082e7288();
  func_0x00010828e8b0(auStack_a0,lVar3 + 0x60);
  FUN_1082dd7c8(uVar4,auStack_a0,param_2[6],0);
  func_0x00010827024c(auStack_a0);
  FUN_10829de0c(uVar1,param_3,*(undefined8 *)(lVar3 + 0x48));
  if (*(char *)(lVar3 + 0xb8) == '\x01') {
    uVar4 = param_2[4];
    func_0x00010828e8b0(auStack_c8,(undefined8 *)(lVar3 + 0x48));
    FUN_10829e1b8(uVar1,uVar2,uVar4,param_3,auStack_c8,lVar3 + 0x90,param_1 + 0x58);
    func_0x00010827024c(auStack_c8);
  }
  func_0x0001082e72b0();
  func_0x0001082e7288();
  func_0x0001082e72b0();
  func_0x0001082e7288();
  func_0x0001082e72b0();
  func_0x0001082e7288();
  func_0x0001082e72b0();
  func_0x0001082e7288();
  func_0x0001082e72b0();
  func_0x0001082e7288();
  func_0x0001082e72b0();
  func_0x0001082e7288();
  func_0x0001082e72b0();
  func_0x0001082e7288();
  func_0x0001082e72b0();
  func_0x0001082e7288();
  func_0x0001082e72b0();
  func_0x0001082e7288();
  func_0x0001082e72b0();
  func_0x0001082e7288();
  return;
}



/* Entry: 1082e6d44; end: 1082e6dbb;  */

void FUN_1082e6d44(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined2 param_5,undefined2 param_6,undefined1 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  FUN_10826c938();
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined2 *)(param_1 + 0x18) = param_5;
  *(undefined2 *)(param_1 + 0x1a) = param_6;
  *(undefined1 *)(param_1 + 0x1c) = param_7;
  FUN_10826c938(param_1 + 0x20,param_8);
  *(undefined4 *)(param_1 + 0x2c) = param_9;
  return;
}



/* Entry: 1082e6dbc; end: 1082e6ff3;  */

long FUN_1082e6dbc(long param_1)

{
  if ((*(byte *)(param_1 + 0x2c) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x20));
  }
  return param_1;
}



/* Entry: 1082e6ff4; end: 1082e7087;  */

long FUN_1082e6ff4(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  lVar1 = param_1;
  if ((int)(*(uint *)(param_1 + 0xc) >> 1) <= iVar2) {
    if (iVar2 == 0x7fffffff) {
      func_0x00010bdb1a68();
      if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
        func_0x0001082e7314();
      }
      return param_1;
    }
    func_0x0001082e72e0(0x2c);
    if (*(int *)(param_1 + 8) != 0) {
      func_0x0001082e72d4();
    }
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
      func_0x0001082e7314();
    }
    func_0x0001082e7268(param_2 / 0x2c);
    iVar2 = *(int *)(param_1 + 8);
  }
  *(int *)(param_1 + 8) = iVar2 + 1;
  return lVar1;
}



/* Entry: 1082e7088; end: 1082e70eb;  */

long FUN_1082e7088(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001082e7314();
  }
  return param_1;
}



/* Entry: 1082e70ec; end: 1082e7187;  */

void FUN_1082e70ec(float *param_1,float *param_2,uint param_3,long param_4,long param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = param_1[2];
  if ((int)fVar2 < (int)((uint)param_1[3] >> 1)) {
    pfVar1 = *(float **)param_1;
  }
  else {
    if (fVar2 == NAN) {
      func_0x00010bdb1a68();
      fVar2 = *param_1;
      fVar3 = param_1[1];
      fVar4 = param_1[2];
      fVar5 = param_1[3];
      fVar6 = param_1[4];
      fVar7 = param_1[5];
      for (param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU); param_3 != 0;
          param_3 = param_3 - 1) {
        fVar8 = param_2[1];
        *(float *)(param_5 + (long)param_2) = fVar4 + fVar3 * fVar8 + *param_2 * fVar2;
        *(float *)((long)param_2 + param_5 + 4) = fVar7 + fVar6 * fVar8 + *param_2 * fVar5;
        param_2 = (float *)((long)param_2 + param_4);
      }
      return;
    }
    pfVar1 = param_1;
    func_0x0001082e72e0(8);
    if (param_1[2] != 0.0) {
      func_0x0001082e72d4();
    }
    if (((uint)param_1[3] & 1) != 0) {
      func_0x0001082e7314();
    }
    func_0x0001082e7268((ulong)param_2 >> 3);
    fVar2 = param_1[2];
  }
  param_1[2] = (float)((int)fVar2 + 1);
  (pfVar1 + (long)(int)fVar2 * 2)[0] = 0.0;
  (pfVar1 + (long)(int)fVar2 * 2)[1] = 0.0;
  return;
}



/* Entry: 1082e7188; end: 1082e71d7;  */

void FUN_1082e7188(float *param_1,float *param_2,uint param_3,long param_4,long param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = param_1[4];
  fVar6 = param_1[5];
  for (param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU); param_3 != 0; param_3 = param_3 - 1
      ) {
    fVar7 = param_2[1];
    *(float *)(param_5 + (long)param_2) = fVar3 + fVar2 * fVar7 + *param_2 * fVar1;
    *(float *)((long)param_2 + param_5 + 4) = fVar6 + fVar5 * fVar7 + *param_2 * fVar4;
    param_2 = (float *)((long)param_2 + param_4);
  }
  return;
}



/* Entry: 1082e71d8; end: 1082e7267;  */

uint * FUN_1082e71d8(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)(param_1 + -0xd);
  puVar2 = (uint *)(param_1 + -0xd) + uVar3 * -0xc;
  puVar1 = puVar2;
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    func_0x0001082e7214(puVar1);
    puVar1 = puVar1 + 0xc;
  }
  return puVar2;
}



/* Entry: 1082e7268; end: 1082e73eb;  */

void FUN_1082e7268(ulong param_1)

{
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  if (0x7ffffffe < param_1) {
    param_1 = 0x7fffffff;
  }
  *unaff_x19 = unaff_x20;
  *(uint *)((long)unaff_x19 + 0xc) = (int)param_1 << 1 | 1;
  return;
}



/* Entry: 1082e73ec; end: 1082e7467;  */

long FUN_1082e73ec(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  if ((int)param_2[7] == 1) {
    lVar1 = param_2[4] + 0x40;
    FUN_1082b65d4(lVar1,param_2[3],0);
    if ((int)lVar1 != 0) {
      lVar1 = param_2[4];
      if (*(long *)(lVar1 + 0x50) == 0) {
        func_0x0001082d8650();
        if ((int)lVar1 == 1) {
          lVar1 = 2;
        }
        else {
          lVar1 = (ulong)*(byte *)(*(long *)(*param_2 + 0x10) + 5) << 1;
        }
      }
      else {
        lVar1 = 0;
      }
    }
    return lVar1;
  }
  return 0;
}



/* Entry: 1082e7468; end: 1082e769b;  */

undefined8 FUN_1082e7468(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 extraout_x8;
  long lStack_d0;
  undefined8 auStack_c8 [2];
  undefined8 auStack_b8 [2];
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar6 = param_2;
  func_0x0001082e9c68();
  uStack_68 = extraout_x8;
  if (*(char *)(*(long *)(*plVar6 + 0x20) + 0x54) == '\x01') {
    FUN_10827b938(*(long *)(*plVar6 + 0x20),&UNK_10f4880e4);
  }
  FUN_108376ad8(auStack_c8);
  FUN_108287e50(param_2[7],auStack_c8);
  puVar1 = (undefined8 *)param_2[6];
  lVar2 = param_2[1];
  lVar4 = param_2[7] + 0x40;
  FUN_1082b65d4(lVar4,puVar1,&fStack_a4);
  if ((int)lVar4 != 0) {
    NEON_fminnm((float)(double)(long)(fStack_a4 * 255.0 + 0.5),0x4effffff);
  }
  uStack_88 = puVar1[1];
  uStack_90 = *puVar1;
  uStack_78 = puVar1[3];
  uStack_80 = puVar1[2];
  uStack_70 = puVar1[4];
  func_0x000108376b14(auStack_b8,auStack_c8);
  uStack_98 = *(undefined8 *)(lVar2 + 0x24);
  uStack_a0 = *(undefined8 *)(lVar2 + 0x1c);
  uVar3 = *(char *)(lVar2 + 0x18) == '\x01';
  if ((bool)uVar3) {
    lVar4 = 0xf0;
    __Znwm();
    func_0x0001082e9d9c();
    func_0x0001082e9cbc();
  }
  else {
    lVar4 = 0x110;
    __Znwm();
    FUN_1082a3af0(lVar4 + 0xf0,lVar2);
    func_0x0001082e9d9c();
    func_0x0001082e9cbc(lVar4);
  }
  FUN_10837ca5c(auStack_b8[0]);
  uStack_78 = 0;
  lStack_d0 = lVar4;
  FUN_1082c0f08(param_2[3],param_2[4],&lStack_d0,&uStack_90);
  FUN_10827fb18(&uStack_90);
  lVar2 = lStack_d0;
  lStack_d0 = 0;
  if (lVar2 != 0) {
    func_0x0001082e9d90();
  }
  uVar5 = auStack_c8[0];
  FUN_10837ca5c(auStack_c8[0]);
  func_0x0001082e9bc8(uStack_68);
  if ((bool)uVar3) {
    return 1;
  }
  ___stack_chk_fail();
  __ZdlPv(lVar4);
  FUN_10837ca5c(auStack_b8[0]);
  FUN_10837ca5c(auStack_c8[0]);
  __Unwind_Resume(uVar5);
  return uVar5;
}



/* Entry: 1082e769c; end: 1082e76af;  */

void FUN_1082e769c(void)

{
  return;
}



/* Entry: 1082e76b0; end: 1082e78fb;  */

undefined8 *
FUN_1082e76b0(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined *param_10)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 auStack_98 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  if ((bRam000000011372a838 & 1) == 0) {
    iVar2 = 0x1372a838;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1082e6880();
      iRam000000011372a834 = iVar2;
      ___cxa_guard_release(0x11372a838);
    }
  }
  iVar2 = iRam000000011372a834;
  param_2[2] = 0;
  param_2[1] = 0;
  *(short *)(param_2 + 3) = (short)iVar2;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined8 *)((long)param_2 + 0x1c) = 0;
  *(undefined4 *)((long)param_2 + 0x2c) = 0;
  *param_2 = &PTR_FUN_110a39438;
  plVar5 = param_2 + 0x10;
  *plVar5 = (long)(param_2 + 6);
  param_2[0x11] = 0x200000000;
  param_2[0x12] = param_3;
  *(undefined1 *)(param_2 + 0x13) = 0;
  *(byte *)((long)param_2 + 0x99) = *(byte *)((long)param_2 + 0x99) & 0xf0 | 1;
  puVar1 = &UNK_10df14cb4;
  if (param_10 != (undefined *)0x0) {
    puVar1 = param_10;
  }
  param_2[0x14] = puVar1;
  uVar4 = *param_4;
  param_2[0x16] = param_4[1];
  param_2[0x15] = uVar4;
  *(undefined1 *)(param_2 + 0x17) = param_5;
  *(undefined1 *)((long)param_2 + 0xb9) = 0;
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  param_2[0x1d] = 0;
  param_2[0x1c] = 0;
  uStack_b8 = param_6[1];
  uStack_c0 = *param_6;
  uStack_a8 = param_6[3];
  uStack_b0 = param_6[2];
  uStack_a0 = param_6[4];
  func_0x000108376b14(auStack_98,param_7);
  iVar2 = *(int *)(param_2 + 0x11);
  lVar3 = (long)iVar2;
  uStack_88 = param_8;
  uStack_80 = param_9;
  uStack_78 = param_1;
  if (iVar2 < (int)(*(uint *)((long)param_2 + 0x8c) >> 1)) {
    FUN_1082e9088(*plVar5 + (long)iVar2 * 0x50,&uStack_c0);
  }
  else {
    uVar4 = 1;
    FUN_1082e90d0(lVar3,1);
    FUN_1082e9088(lVar3 + (long)*(int *)(param_2 + 0x11) * 0x50,&uStack_c0);
    FUN_1082e9118(plVar5,lVar3,uVar4);
  }
  *(int *)(param_2 + 0x11) = *(int *)(param_2 + 0x11) + 1;
  FUN_10837ca5c(auStack_98[0]);
  func_0x0001083773e0(param_7);
  FUN_108364f90(param_6,param_2 + 4,param_7,1);
  *(undefined2 *)((long)param_2 + 0x1a) = 3;
  return param_2;
}



/* Entry: 1082e78fc; end: 1082e795b;  */

long FUN_1082e78fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x50);
    uVar2 = uVar1 + (long)*(int *)(param_1 + 0x58) * 0x50;
    do {
      FUN_10837ca38(uVar1 + 0x28);
      uVar1 = uVar1 + 0x50;
    } while (uVar1 < uVar2);
  }
  if ((*(byte *)(param_1 + 0x5c) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x50));
  }
  return param_1;
}



/* Entry: 1082e795c; end: 1082e798b;  */

undefined8 * FUN_1082e795c(undefined8 *param_1)

{
  FUN_1082fc320(param_1 + 0x12);
  FUN_1082e78fc(param_1 + 6);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1082e798c; end: 1082e799f;  */

void FUN_1082e798c(void)

{
  FUN_1082e795c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082e79a0; end: 1082e79ab;  */

undefined * FUN_1082e79a0(void)

{
  return &UNK_10f488107;
}



/* Entry: 1082e79ac; end: 1082e7a13;  */

void FUN_1082e79ac(long param_1)

{
  undefined1 uVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  long *plVar4;
  bool bVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined **ppuStack_48;
  
  func_0x0001082e9ddc();
  bVar5 = false;
  for (lVar7 = 0; uVar1 = lVar7 == 0x18, !(bool)uVar1; lVar7 = lVar7 + 8) {
    if (*(long *)(param_1 + 0xd8 + lVar7) != 0) {
      func_0x0001082e69b0();
      bVar5 = true;
    }
  }
  if (bVar5) {
    return;
  }
  plVar4 = *(long **)(unaff_x20 + 0x90);
  if (plVar4 == (long *)0x0) {
    return;
  }
  if (*plVar4 != 0) {
    FUN_108296038();
  }
  if (plVar4[1] == 0) {
    return;
  }
  uVar6 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR_FUN_110a35a10;
  FUN_1082960a8(plVar4[1],&ppuStack_48);
  pppuVar2 = &ppuStack_48;
  FUN_10826e20c();
  func_0x000108298c3c(uVar6);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    pppuVar3 = &ppuStack_48;
    FUN_10826e20c();
    func_0x000108298a0c();
    func_0x000108298c90();
    if ((pppuVar3 != (undefined ***)0x0) && (*(int *)(unaff_x20 + 8) == 0x2d)) {
      func_0x0001082987ac(pppuVar2,unaff_x20);
    }
    plVar4 = *(long **)(unaff_x20 + 0x18);
    for (lVar7 = (long)*(int *)(unaff_x20 + 0x20) << 3; lVar7 != 0; lVar7 = lVar7 + -8) {
      if (*plVar4 != 0) {
        FUN_1082960a8(*plVar4,pppuVar2);
      }
      plVar4 = plVar4 + 1;
    }
    return;
  }
  return;
}



/* Entry: 1082e7a14; end: 1082e7bb3;  */

undefined8 FUN_1082e7a14(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  lVar13 = param_1 + 0x90;
  FUN_1082fcb80(lVar13,param_2 + 0x90,param_4,param_1 + 0x20,param_2 + 0x20,0);
  if ((int)lVar13 == 0) {
    return 2;
  }
  func_0x0001082e9dd0();
  if (!(bool)in_ZR && in_NG == in_OV) {
    puVar11 = (undefined8 *)(param_1 + 0x80);
    iVar6 = (int)*puVar11;
    FUN_10828e338();
    func_0x0001082e9d34();
    if (!(bool)in_ZR && in_NG == in_OV) {
      iVar5 = (int)*(undefined8 *)(param_2 + 0x80);
      FUN_10828e338();
      cVar2 = SBORROW4(iVar6,iVar5);
      cVar3 = iVar6 - iVar5 < 0;
      uVar4 = iVar6 == iVar5;
      if (!(bool)uVar4) {
        return 2;
      }
      func_0x0001082e9dd0();
      if (!(bool)uVar4 && cVar3 == cVar2) {
        iVar6 = (int)*puVar11;
        FUN_10828e338();
        if (iVar6 != 0) {
          func_0x0001082e9dd0();
          if (((bool)uVar4 || cVar3 != cVar2) ||
             (func_0x0001082e9d34(), (bool)uVar4 || cVar3 != cVar2)) goto LAB_1082e7bb0;
          func_0x0001082e9d40();
          if (iVar6 == 0) {
            return 2;
          }
        }
        uVar8 = (uint)*(byte *)(param_1 + 0xb8);
        uVar9 = (uint)*(byte *)(param_2 + 0xb8);
        cVar2 = SBORROW4(uVar8,uVar9);
        cVar3 = (int)(uVar8 - uVar9) < 0;
        uVar4 = uVar8 == uVar9;
        if ((bool)uVar4) {
          uVar10 = param_1 + 0xa8;
          FUN_10828e84c(uVar10,param_2 + 0xa8);
          iVar6 = (int)uVar10;
          if ((uVar10 & 1) == 0) {
            if ((*(byte *)(param_1 + 0x99) >> 2 & 1) != 0) {
              func_0x0001082e9dd0();
              if (((bool)uVar4 || cVar3 != cVar2) ||
                 (func_0x0001082e9d34(), (bool)uVar4 || cVar3 != cVar2)) goto LAB_1082e7bb0;
              func_0x0001082e9d40();
              if (iVar6 == 0) {
                return 2;
              }
            }
            uVar9 = *(uint *)(param_2 + 0x88);
            uVar12 = (ulong)uVar9;
            lVar13 = *(long *)(param_2 + 0x80);
            uVar8 = *(uint *)(param_1 + 0x88);
            uVar10 = (ulong)uVar8;
            if ((int)((*(uint *)(param_1 + 0x8c) >> 1) - uVar8) < (int)uVar9) {
              FUN_1082e90d0(uVar10,uVar12);
              FUN_1082e9118(puVar11,uVar10,uVar12);
              uVar8 = *(uint *)(param_1 + 0x88);
            }
            *(uint *)(param_1 + 0x88) = uVar8 + uVar9;
            lVar7 = *(long *)(param_1 + 0x80) + (long)(int)uVar8 * 0x50 + 0x28;
            lVar13 = lVar13 + 0x28;
            for (uVar10 = (ulong)(uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)); uVar10 != 0;
                uVar10 = uVar10 - 1) {
              uVar15 = *(undefined8 *)(lVar13 + -0x20);
              uVar14 = *(undefined8 *)(lVar13 + -0x28);
              uVar17 = *(undefined8 *)(lVar13 + -0x10);
              uVar16 = *(undefined8 *)(lVar13 + -0x18);
              *(undefined8 *)(lVar7 + -8) = *(undefined8 *)(lVar13 + -8);
              *(undefined8 *)(lVar7 + -0x10) = uVar17;
              *(undefined8 *)(lVar7 + -0x18) = uVar16;
              *(undefined8 *)(lVar7 + -0x20) = uVar15;
              *(undefined8 *)(lVar7 + -0x28) = uVar14;
              func_0x000108376b14(lVar7,lVar13);
              uVar15 = *(undefined8 *)(lVar13 + 0x18);
              uVar14 = *(undefined8 *)(lVar13 + 0x10);
              *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar13 + 0x20);
              *(undefined8 *)(lVar7 + 0x18) = uVar15;
              *(undefined8 *)(lVar7 + 0x10) = uVar14;
              lVar7 = lVar7 + 0x50;
              lVar13 = lVar13 + 0x50;
            }
            return 0;
          }
        }
        return 2;
      }
    }
  }
LAB_1082e7bb0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082e7bb4);
  (*pcVar1)();
}



/* Entry: 1082e7bb4; end: 1082e7c3f;  */

void FUN_1082e7bb4(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  FUN_1082fbcfc(param_1,lVar2);
  plVar1 = (long *)(param_1 + 0xd8);
  lVar2 = 3;
  do {
    if ((*plVar1 != 0) && (plVar1[-3] != 0)) {
      FUN_1082a1068(param_2,*plVar1,param_3);
      FUN_1082a10b4(param_2,*(undefined8 *)(*plVar1 + 0x98),0,*(undefined8 *)(*plVar1 + 0x88));
      FUN_1082a10bc(param_2,plVar1[-3]);
    }
    plVar1 = plVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



/* Entry: 1082e7c40; end: 1082e7c5f;  */

/* WARNING: Removing unreachable block (ram,0x0001082fcb58) */

uint FUN_1082e7c40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x90;
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  func_0x0001082fbad4(lVar1);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  return (uint)lVar1 & 0xffff;
}



/* Entry: 1082e7c60; end: 1082e7e1f;  */

undefined8 * FUN_1082e7c60(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  long *unaff_x19;
  long *unaff_x20;
  long lVar10;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001082e9ddc();
  func_0x0001082e9c68();
  uStack_68 = extraout_x8;
  func_0x0001082a6e68(param_2 + 0x28);
  lVar10 = *(long *)(unaff_x19[2] + 0xb8);
  param_3 = (long *)*param_3;
  (**(code **)(*param_3 + 0x28))();
  lVar4 = param_3[1];
  if (param_4 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0x2000000020000000;
    uStack_a0 = 0x2000000020000000;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    FUN_1082a191c(&uStack_b0,param_4);
  }
  bVar8 = 1;
  lVar9 = 0x28;
  for (uVar7 = (ulong)(*(uint *)(unaff_x20 + 0x11) &
                      ((int)*(uint *)(unaff_x20 + 0x11) >> 0x1f ^ 0xffffffffU)); uVar7 != 0;
      uVar7 = uVar7 - 1) {
    bVar3 = *(byte *)(*(long *)(unaff_x20[0x10] + lVar9) + 0xc3);
    bVar1 = bVar8;
    if ((bVar3 & 10) != 0) {
      bVar1 = bVar8 | 2;
    }
    bVar2 = bVar1 | 4;
    if (*(char *)(*(long *)(lVar10 + 0x10) + 0x11) == '\0') {
      bVar2 = bVar8 | 2;
    }
    bVar8 = bVar1;
    if ((bVar3 & 4) != 0) {
      bVar8 = bVar2;
    }
    lVar9 = lVar9 + 0x50;
  }
  uVar5 = (char)lVar4 == '\x01';
  *(byte *)((long)unaff_x20 + 0xb9) = bVar8;
  (**(code **)(*unaff_x20 + 0x78))();
  func_0x0001082e9d7c(*(undefined8 *)(*unaff_x19 + 0x48));
  func_0x0001082e9d7c(*(undefined8 *)(*unaff_x19 + 0x48));
  func_0x0001082e9d7c(*(undefined8 *)(*unaff_x19 + 0x48));
  puVar6 = &uStack_b0;
  FUN_1082c3a7c(puVar6);
  func_0x0001082e9bc8(uStack_68);
  if (!(bool)uVar5) {
    ___stack_chk_fail();
    __Unwind_Resume(puVar6);
    return (undefined8 *)0x0;
  }
  return puVar6;
}



/* Entry: 1082e7e20; end: 1082e7e27;  */

undefined8 FUN_1082e7e20(void)

{
  return 0;
}



/* Entry: 1082e7e28; end: 1082e8077;  */

void FUN_1082e7e28(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  uint auStack_88 [2];
  undefined8 *puStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_b8 = 0;
  uStack_c0 = 0x3f800000;
  uStack_a8 = 0;
  uStack_b0 = 0x3f800000;
  uStack_a0 = 0x103f800000;
  iVar5 = *(int *)(param_1 + 0x88);
  cVar3 = iVar5 < 0;
  uVar4 = iVar5 == 0;
  cVar2 = '\0';
  if (iVar5 < 1) {
LAB_1082e8074:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082e8078);
    (*pcVar1)();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  FUN_10818cfd0(uVar6,&uStack_c0);
  if ((int)uVar6 != 0) {
    func_0x0001082e9d34();
    if ((bool)uVar4 || cVar3 != cVar2) goto LAB_1082e8074;
    iVar5 = (int)*(undefined8 *)(param_1 + 0x80);
    FUN_10828e338();
    if (iVar5 == 0) {
      uStack_c8 = 0x113254e20;
      puVar9 = &uStack_c0;
    }
    else {
      func_0x0001082e9d34();
      if ((bool)uVar4 || cVar3 != cVar2) goto LAB_1082e8074;
      uStack_c8 = *(undefined8 *)(param_1 + 0x80);
      puVar9 = (undefined8 *)0x113254e20;
    }
    lVar7 = param_1 + 0x90;
    FUN_1082fc708(lVar7,param_2,param_3,*(undefined2 *)(param_4 + 0xc),param_6,param_7);
    uVar8 = (uint)*(byte *)(param_1 + 0xb9);
    if (((*(byte *)(param_1 + 0xb9) & 1) != 0) && (*(long *)(param_1 + 0xd8) == 0)) {
      uStack_74 = 0;
      uStack_68 = *(undefined8 *)(param_1 + 0xb0);
      uStack_70 = *(undefined8 *)(param_1 + 0xa8);
      auStack_88[0] = *(byte *)(param_1 + 0x99) >> 2 & 1;
      uStack_90 = 2;
      uStack_8c = 0xff;
      lVar7 = param_3;
      puStack_80 = puVar9;
      func_0x00010828dd54(param_3,&uStack_74,&uStack_90,auStack_88,uStack_c8);
      func_0x0001082e9b6c();
      func_0x0001082e9c50();
      *(long *)(param_1 + 0xd8) = lVar7;
      uVar8 = (uint)*(byte *)(param_1 + 0xb9);
    }
    if (((uVar8 >> 1 & 1) != 0) && (*(long *)(param_1 + 0xe0) == 0)) {
      if (*(char *)(*(long *)(param_2 + 0x10) + 5) == '\x01') {
        func_0x0001082e9d04();
        iVar5 = *(int *)(param_3 + 8);
        *(long *)(param_3 + 8) = lVar7 + 0xa8;
        func_0x0001082e9c24((int)lVar7 - iVar5);
        func_0x0001082c5774();
      }
      func_0x0001082e9b6c();
      func_0x0001082e9c50();
      *(long *)(param_1 + 0xe0) = lVar7;
      uVar8 = (uint)*(byte *)(param_1 + 0xb9);
    }
    if (((uVar8 >> 2 & 1) != 0) && (*(long *)(param_1 + 0xe8) == 0)) {
      if (*(char *)(*(long *)(param_2 + 0x10) + 5) == '\x01') {
        func_0x0001082e9d04();
        iVar5 = *(int *)(param_3 + 8);
        *(long *)(param_3 + 8) = lVar7 + 0xa8;
        func_0x0001082e9c24((int)lVar7 - iVar5);
        func_0x0001082c5490();
      }
      func_0x0001082e9b6c();
      func_0x0001082e9c50();
      *(long *)(param_1 + 0xe8) = lVar7;
    }
  }
  return;
}



/* Entry: 1082e8078; end: 1082e9087;  */

void FUN_1082e8078(undefined8 param_1,ulong param_2,float param_3,ulong param_4,undefined8 param_5,
                  float param_6,float param_7,float *param_8,float *param_9)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  float *pfVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 uVar11;
  long **pplVar12;
  undefined8 *puVar13;
  long *plVar14;
  float **ppfVar15;
  undefined1 **ppuVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  float *pfVar19;
  undefined1 *puVar20;
  undefined8 extraout_x8;
  long lVar21;
  float *extraout_x8_00;
  long *extraout_x8_01;
  long *plVar22;
  ulong extraout_x9;
  ulong extraout_x9_00;
  float fVar23;
  long lVar24;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x11;
  long extraout_x11_00;
  long lVar25;
  float *pfVar26;
  int unaff_w20;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  uint unaff_w26;
  long lVar31;
  int iVar32;
  float *unaff_x27;
  float *unaff_x28;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float *pfStack_1028;
  undefined8 uStack_1008;
  undefined8 *puStack_1000;
  float *pfStack_ff8;
  undefined1 **ppuStack_fe8;
  undefined1 **ppuStack_fe0;
  int iStack_fcc;
  float *pfStack_f90;
  long *plStack_f88;
  float *pfStack_f80;
  long *plStack_f78;
  float *pfStack_f70;
  undefined1 uStack_f61;
  long lStack_f60;
  undefined8 uStack_f58;
  long lStack_f50;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  undefined8 uStack_f30;
  undefined8 uStack_f28;
  undefined8 uStack_f20;
  float *pfStack_f10;
  byte bStack_f02;
  char acStack_f01 [17];
  undefined8 uStack_ef0;
  undefined8 uStack_ee8;
  undefined4 uStack_edc;
  long *plStack_ed8;
  long lStack_ed0;
  long lStack_ec8;
  undefined4 *puStack_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined2 uStack_ea8;
  long *plStack_ea0;
  undefined1 **ppuStack_e98;
  undefined1 **ppuStack_e90;
  undefined1 auStack_e84 [4];
  undefined1 auStack_e80 [1024];
  undefined1 *puStack_a80;
  ulong uStack_a78;
  undefined1 auStack_a70 [1024];
  undefined1 *puStack_670;
  undefined8 uStack_668;
  undefined1 auStack_660 [1024];
  undefined1 *puStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  float fStack_248;
  float fStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  float fStack_238;
  float fStack_234;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  int iStack_1c0;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  undefined1 ***pppuStack_110;
  byte *pbStack_108;
  float **ppfStack_100;
  char *pcStack_f8;
  undefined1 ***pppuStack_f0;
  long **pplStack_e8;
  undefined4 *puStack_e0;
  float *pfStack_d8;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  undefined1 auStack_bc [24];
  uint uStack_a4;
  undefined8 uStack_a0;
  
  func_0x0001082e9c68();
  uStack_f38 = 0;
  uStack_f40 = 0x3f800000;
  uStack_f28 = 0;
  uStack_f30 = 0x3f800000;
  uStack_f20 = 0x103f800000;
  uVar9 = param_8[0x22] == 0.0;
  if (0 < (int)param_8[0x22]) {
    uVar11 = *(undefined8 *)(param_8 + 0x20);
    uStack_a0 = extraout_x8;
    FUN_10818cfd0(uVar11,&uStack_f40);
    pfVar26 = param_9;
    if ((int)uVar11 == 0) goto LAB_1082e8d00;
    if (0 < (int)param_8[0x22]) {
      iVar10 = (int)*(undefined8 *)(param_8 + 0x20);
      FUN_10828e338();
      fVar37 = param_8[0x22];
      if (iVar10 == 0) {
        uStack_1008 = 0;
        puStack_1000 = (undefined8 *)0x0;
      }
      else {
        if ((int)fVar37 < 1) goto LAB_1082e8f04;
        uStack_1008 = *(undefined8 *)(param_8 + 0x20);
        puStack_1000 = &uStack_f40;
      }
      puStack_260 = auStack_660;
      ppuStack_fe0 = &puStack_260;
      uStack_258 = 0x10000000000;
      puStack_670 = auStack_a70;
      ppuStack_fe8 = &puStack_670;
      uStack_668 = 0x10000000000;
      puStack_a80 = auStack_e80;
      uStack_a78 = 0x10000000000;
      lStack_f50 = 0;
      uStack_f48 = 0x100000000;
      lStack_f60 = 0;
      uStack_f58 = 0x100000000;
      (**(code **)(*(long *)param_9 + 0xd0))();
      lVar24 = 0;
      iStack_fcc = 0;
      bVar2 = *(byte *)(*(long *)(pfVar26 + 4) + 0x11);
      uStack_f61 = 1;
code_r0x0001082e81f4:
      uVar9 = lVar24 == (int)fVar37;
      if ((lVar24 < (int)fVar37) && ((uStack_f61 & 1) != 0)) {
        if (lVar24 < (int)param_8[0x22]) {
          lVar31 = *(long *)(param_8 + 0x20) + lVar24 * 0x50;
          fVar36 = *(float *)(lVar31 + 0x48);
          plStack_ea0 = &lStack_f50;
          plVar22 = (long *)(lVar31 + 0x28);
          lVar21 = *plVar22;
          plStack_ed8 = *(long **)(lVar21 + 0x28);
          lStack_ed0 = *(long *)(lVar21 + 0x40);
          lStack_ec8 = lStack_ed0 + *(int *)(lVar21 + 0x48);
          puStack_ec0 = (undefined4 *)0x0;
          if (*(long *)(lVar21 + 0x58) != 0) {
            puStack_ec0 = (undefined4 *)(*(long *)(lVar21 + 0x58) + -4);
          }
          uStack_eb8 = 0;
          uStack_eb0 = 0;
          uStack_ea8 = 0;
          uStack_edc = 0;
          uStack_ef0 = 0;
          uStack_ee8 = 0;
          acStack_f01[1] = '\0';
          acStack_f01[2] = '\0';
          acStack_f01[3] = '\0';
          acStack_f01[4] = '\0';
          acStack_f01[5] = '\0';
          acStack_f01[6] = '\0';
          acStack_f01[7] = '\0';
          acStack_f01[8] = '\0';
          acStack_f01[9] = '\0';
          acStack_f01[10] = '\0';
          acStack_f01[0xb] = '\0';
          acStack_f01[0xc] = '\0';
          acStack_f01[0xd] = '\0';
          acStack_f01[0xe] = '\0';
          acStack_f01[0xf] = '\0';
          acStack_f01[0x10] = '\0';
          lVar21 = lVar31;
          ppuStack_e98 = ppuStack_fe8;
          ppuStack_e90 = ppuStack_fe0;
          FUN_10828e338();
          iVar10 = 0;
          acStack_f01[0] = (char)lVar21;
          unaff_x28 = (float *)(lVar31 + 0x38);
          bStack_f02 = 0;
          pppuStack_110 = &ppuStack_e90;
          pbStack_108 = &bStack_f02;
          ppfStack_100 = &pfStack_f10;
          pcStack_f8 = acStack_f01;
          pppuStack_f0 = &ppuStack_e98;
          pplStack_e8 = &plStack_ea0;
          puStack_e0 = &uStack_edc;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_118 = unaff_x28;
LAB_1082e82dc:
          pplVar12 = &plStack_ed8;
          FUN_108379cc8(pplVar12,&uStack_140);
          switch((ulong)pplVar12 & 0xffffffff) {
          case 0:
            if (((0.0 < fVar36) && ((bStack_f02 & 1) != 0)) && (iVar10 == 1)) {
              func_0x0001082e9ca0(ppuStack_e90);
              func_0x0001082e9b90();
            }
            iVar10 = 0;
            bStack_f02 = 0;
            goto LAB_1082e82dc;
          case 1:
            lVar21 = lVar31;
            FUN_1083645e0(lVar31,&uStack_250,&uStack_140,2);
            iVar32 = (int)lVar21;
            func_0x0001082e9d14();
            func_0x0001082e9bb4();
            func_0x0001082e9be8();
            func_0x0001082e9bdc();
            if (iVar32 != 0) {
              ppuVar16 = ppuStack_e90;
              func_0x0001082e9ca0();
              *ppuVar16 = (undefined1 *)uStack_250;
              ppuVar16[1] = (undefined1 *)CONCAT44(fStack_244,fStack_248);
              if (iVar10 == 0) {
                fVar23 = (float)((ulong)uStack_250 >> 0x20);
                param_2 = (ulong)(uint)fVar23;
                param_4 = (ulong)uStack_250 & 0xffffffff;
                bVar7 = false;
                if ((SUB84(uStack_250,0) == fStack_248) &&
                   (bVar7 = false, !NAN(fVar23) && !NAN(fStack_244))) {
                  bVar7 = fVar23 == fStack_244;
                }
                param_3 = fStack_248;
                if (bVar7) {
                  bStack_f02 = 1;
                  pfStack_f10 = uStack_250;
                }
              }
            }
            break;
          case 2:
            puVar13 = &uStack_140;
            FUN_108351820(puVar13,&uStack_250);
            for (uVar27 = 0; ((ulong)puVar13 & 0xffffffff) != uVar27; uVar27 = uVar27 + 1) {
              func_0x0001082e9ce4();
            }
            break;
          case 3:
            if ((bVar2 & 1) == 0) {
              iStack_1c0 = 0;
              param_2 = 0x3e800000;
              uStack_250 = &fStack_248;
              FUN_1082d25dc(*puStack_ec0,&uStack_250,&uStack_140);
              for (lVar21 = 0; lVar21 < iStack_1c0; lVar21 = lVar21 + 1) {
                func_0x0001082e9ce4();
              }
              FUN_1082d2744(&uStack_250);
            }
            else {
              puVar13 = &uStack_140;
              FUN_1082e9470(*puStack_ec0,puVar13,&pfStack_d8);
              if ((int)puVar13 == 2) {
                ppfVar15 = &pfStack_d8;
                FUN_1082e9470(fStack_c0,ppfVar15,&uStack_250);
                uVar27 = (ulong)uStack_a4;
                puVar18 = auStack_bc;
                FUN_1082e9470(puVar18,(long)&uStack_250 + ((ulong)ppfVar15 & 0xffffffff) * 0x1c);
                uVar28 = (ulong)(uint)((int)puVar18 + (int)ppfVar15);
              }
              else {
                fStack_248 = fStack_d0;
                uStack_250 = pfStack_d8;
                uVar27 = CONCAT44(uStack_c8,fStack_cc);
                uStack_23c = uStack_c4;
                fStack_238 = fStack_c0;
                fStack_244 = fStack_cc;
                uStack_240 = uStack_c8;
                uVar28 = 1;
              }
              puVar13 = (undefined8 *)&uStack_240;
              for (uVar29 = 0; uVar28 != uVar29; uVar29 = uVar29 + 1) {
                FUN_1083645e0(lVar31,&pfStack_d8,puVar13 + -2,3);
                puVar17 = &uStack_ef0;
                FUN_10838eb84(puVar17,&pfStack_d8,3);
                iVar32 = (int)puVar17;
                func_0x0001082e9bb4();
                func_0x0001082e9be8();
                func_0x0001082e9bdc();
                if (iVar32 != 0) {
                  ppfVar15 = &pfStack_d8;
                  FUN_1082e9520(ppfVar15,auStack_e84);
                  cVar4 = acStack_f01[0];
                  if ((int)ppfVar15 == 0) {
                    ppuVar16 = &puStack_a80;
                    FUN_1082d3644(ppuVar16,3);
                    bVar7 = cVar4 == '\0';
                    ppfVar15 = (float **)(puVar13 + -2);
                    if (bVar7) {
                      ppfVar15 = &pfStack_d8;
                    }
                    *ppuVar16 = (undefined1 *)*ppfVar15;
                    pfVar26 = (float *)(puVar13 + -1);
                    if (bVar7) {
                      pfVar26 = &fStack_d0;
                    }
                    ppuVar16[1] = *(undefined1 **)pfVar26;
                    puVar17 = puVar13;
                    if (bVar7) {
                      puVar17 = (undefined8 *)&uStack_c8;
                    }
                    ppuVar16[2] = (undefined1 *)*puVar17;
                    uVar35 = *(undefined4 *)(puVar13 + 1);
                    plVar14 = &lStack_f60;
                    FUN_108184cd4(plVar14,1);
                    *(undefined4 *)plVar14 = uVar35;
                  }
                  else {
                    ppuVar16 = ppuStack_e90;
                    FUN_1082d3644(ppuStack_e90,4);
                    *ppuVar16 = (undefined1 *)pfStack_d8;
                    ppuVar16[1] = (undefined1 *)CONCAT44(fStack_cc,fStack_d0);
                    ppuVar16[2] = (undefined1 *)CONCAT44(fStack_cc,fStack_d0);
                    ppuVar16[3] = (undefined1 *)CONCAT44(uStack_c4,uStack_c8);
                    if (iVar10 == 0 && (int)uVar29 == 0) {
                      func_0x0001082e9bf4();
                      bVar7 = false;
                      if (SUB84(extraout_x8_00,0) == param_7) {
                        bVar7 = false;
                        if (!NAN(param_6) && !NAN((float)param_5)) {
                          bVar7 = param_6 == (float)param_5;
                        }
                      }
                      bVar8 = false;
                      if (bVar7) {
                        bVar8 = false;
                        if (!NAN((float)uVar27) && !NAN((float)param_2)) {
                          bVar8 = (float)uVar27 == (float)param_2;
                        }
                      }
                      bVar7 = false;
                      if (bVar8) {
                        bVar7 = false;
                        if (!NAN(param_3) && !NAN((float)param_4)) {
                          bVar7 = param_3 == (float)param_4;
                        }
                      }
                      if (bVar7) {
                        bStack_f02 = 1;
                        pfStack_f10 = extraout_x8_00;
                      }
                    }
                  }
                }
                puVar13 = (undefined8 *)((long)puVar13 + 0x1c);
              }
            }
            break;
          case 4:
            FUN_1083645e0(lVar31,&pfStack_d8,&uStack_140,4);
            puVar13 = &uStack_ef0;
            FUN_10838eb84(puVar13,&pfStack_d8,4);
            iVar32 = (int)puVar13;
            func_0x0001082e9bb4();
            func_0x0001082e9be8();
            func_0x0001082e9bdc();
            if (iVar32 != 0) {
              uStack_148 = 0x4000000000;
              puStack_150 = &uStack_250;
              if (acStack_f01[0] == '\x01') {
                plVar14 = plVar22;
                func_0x0001083773e0(plVar22);
                FUN_1082d2908(0x3f800000,lVar31,plVar14);
                FUN_1082d3008(&uStack_140,&puStack_150);
              }
              else {
                FUN_1082d3008(0x3f800000,&pfStack_d8,&puStack_150);
              }
              lVar25 = 0;
              for (lVar21 = 0; lVar21 < (int)uStack_148; lVar21 = lVar21 + 3) {
                if (acStack_f01[0] == '\x01') {
                  FUN_1082e9278(lVar31,&uStack_118,(long)puStack_150 + lVar25,
                                iVar10 == 0 && (int)lVar21 == 0);
                }
                else {
                  func_0x0001082e92e0(&uStack_118,0,(long)puStack_150 + lVar25,
                                      iVar10 == 0 && (int)lVar21 == 0);
                }
                lVar25 = lVar25 + 0x18;
              }
              FUN_1082e7088(&puStack_150);
            }
            break;
          case 5:
            goto code_r0x0001082e84b0;
          case 6:
            goto code_r0x0001082e876c;
          default:
            goto LAB_1082e82dc;
          }
          iVar10 = iVar10 + 1;
          goto LAB_1082e82dc;
        }
        goto LAB_1082e8f04;
      }
      unaff_w20 = (int)uStack_258;
      uVar27 = uStack_258 & 0xffffffff;
      pfVar26 = (float *)(uStack_a78 & 0xffffffff);
      unaff_w26 = (int)uStack_a78 / 3;
      unaff_x27 = (float *)&uStack_f61;
      FUN_1082e91c4(unaff_x27,unaff_w26,iStack_fcc);
      pfVar19 = (float *)&UNK_10df16b54;
      pfStack_1028 = param_9;
      pfStack_ff8 = param_8;
      if ((uStack_f61 & 1) == 0) goto LAB_1082e8cdc;
      bVar7 = false;
      uVar9 = false;
      bVar8 = false;
      if (unaff_w20 < 0x2aaaaaac) {
        iVar10 = (int)unaff_x27;
        bVar8 = SBORROW4(iVar10,0x19999999);
        bVar7 = iVar10 + -0x19999999 < 0;
        uVar9 = iVar10 == 0x19999999;
      }
      pfVar19 = unaff_x27;
      if (!(bool)uVar9 && bVar7 == bVar8) goto LAB_1082e8cdc;
      if (2 < unaff_w20 + 1U) {
        unaff_x28 = param_9;
        (**(code **)(*(long *)param_9 + 0xb0))();
        if ((bRam000000011372a840 & 1) == 0) goto LAB_1082e8f0c;
        goto LAB_1082e8834;
      }
      uVar27 = 0;
      do {
        iVar10 = (int)pfVar26;
        if ((iStack_fcc == 0) && (uVar9 = iVar10 - 3U == 0xfffffffa, 0xfffffffa < iVar10 - 3U)) {
LAB_1082e8abc:
          *(char *)((long)param_8 + 0xb9) = (char)uVar27;
          pfVar19 = unaff_x27;
        }
        else {
          pfStack_d8 = (float *)0x0;
          pfVar19 = pfStack_1028;
          (**(code **)(*(long *)pfStack_1028 + 0xb0))();
          if ((bRam000000011372a858 & 1) == 0) {
            iVar32 = 0x1372a858;
            ___cxa_guard_acquire();
            if (iVar32 != 0) {
              ___cxa_guard_release(0x11372a858);
            }
          }
          uStack_250 = (float *)0x11372a8a8;
          func_0x0001082e9ccc();
          if ((bRam000000011372a868 & 1) == 0) {
            iVar32 = 0x1372a868;
            ___cxa_guard_acquire();
            if (iVar32 != 0) {
              uRam000000011372a860 = 0x11372a8a8;
              ___cxa_guard_release(0x11372a868);
            }
          }
          FUN_1082e96e8(&uStack_250,pfVar19,&UNK_10df16bce,9,0x100,5,uRam000000011372a860);
          lVar24 = (long)uStack_250;
          uStack_250 = (float *)0x0;
          uVar9 = lVar24 == 0;
          plStack_ed8 = (long *)0x0;
          if (!(bool)uVar9) {
            plStack_ed8 = (long *)(lVar24 + 0xb0);
          }
          FUN_10828f708(&uStack_250);
          iVar32 = (int)unaff_x27;
          unaff_x27 = pfStack_1028;
          (**(code **)(*(long *)pfStack_1028 + 0x18))
                    (pfStack_1028,0x18,iVar32 * 5,&pfStack_d8,&uStack_140);
          if ((unaff_x27 != (float *)0x0) && (plStack_ed8 != (long *)0x0)) {
            uVar3 = (int)uStack_668 / 3;
            for (uVar28 = 0; uVar28 != (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
                uVar28 = uVar28 + 1) {
              iVar32 = (int)uVar28 * 3;
              bVar7 = SBORROW4((int)uStack_668,iVar32);
              uVar9 = (int)uStack_668 == iVar32;
              if ((int)uStack_668 <= iVar32) goto LAB_1082e8f04;
              func_0x0001082e9d24(*(undefined4 *)(puStack_670 + uVar28 * 0x18),
                                  *(undefined4 *)((long)(puStack_670 + uVar28 * 0x18) + 4));
              if (bVar7) goto LAB_1082e8cd0;
              uVar29 = extraout_x10 + 1;
              bVar7 = SBORROW8(uVar29,extraout_x9);
              uVar9 = uVar29 == extraout_x9;
              if (extraout_x9 <= uVar29) goto LAB_1082e8f04;
              puVar1 = (undefined4 *)(extraout_x11 + uVar29 * 8);
              func_0x0001082e9d24(*puVar1,puVar1[1]);
              if (bVar7) goto LAB_1082e8cd0;
              uVar29 = extraout_x10_00 + 2;
              bVar7 = SBORROW8(uVar29,extraout_x9_00);
              uVar9 = uVar29 == extraout_x9_00;
              if (extraout_x9_00 <= uVar29) goto LAB_1082e8f04;
              puVar1 = (undefined4 *)(extraout_x11_00 + uVar29 * 8);
              func_0x0001082e9d24(*puVar1,puVar1[1]);
              if (bVar7) goto LAB_1082e8cd0;
              if ((long)(int)uStack_f48 <= (long)uVar28) goto LAB_1082e8f04;
              uStack_1e0 = 0;
              uStack_1e8 = 0;
              uStack_1f0 = 0;
              uStack_1f8 = 0;
              uStack_200 = 0;
              uStack_208 = 0;
              uStack_210 = 0;
              uStack_218 = 0;
              uStack_220 = 0;
              uStack_228 = 0;
              uStack_230 = 0;
              fStack_238 = 0.0;
              fStack_234 = 0.0;
              uStack_240 = 0;
              uStack_23c = 0;
              fStack_248 = 0.0;
              fStack_244 = 0.0;
              uStack_250 = (float *)0x0;
              ppfStack_100 = (float **)extraout_x8_01[1];
              pbStack_108 = (byte *)*extraout_x8_01;
              pcStack_f8 = (char *)extraout_x8_01[2];
              for (uVar30 = 1 << (ulong)(*(uint *)(lStack_f50 + uVar28 * 4) & 0x1f); 1 < (int)uVar30
                  ; uVar30 = uVar30 - 1) {
                func_0x00010835154c(1.0 / (float)uVar30,&pbStack_108,&uStack_118);
                iVar32 = (int)&uStack_118;
                func_0x0001082e9d58();
                if (iVar32 != 0) {
                  FUN_1082e9a94(&uStack_118,&uStack_250);
                  func_0x0001082e9cf4();
                  unaff_x27 = unaff_x27 + 0x1e;
                }
              }
              iVar32 = (int)&pbStack_108;
              func_0x0001082e9d58();
              if (iVar32 != 0) {
                FUN_1082e9a94(&pbStack_108,&uStack_250);
                func_0x0001082e9cf4();
                unaff_x27 = unaff_x27 + 0x1e;
              }
              unaff_x28 = param_8;
            }
            for (uVar28 = 0; uVar28 != (unaff_w26 & ((int)unaff_w26 >> 0x1f ^ 0xffffffffU));
                uVar28 = uVar28 + 1) {
              if (((int)uStack_a78 <= (int)uVar28 * 3) || ((long)(int)uStack_f58 <= (long)uVar28))
              goto LAB_1082e8f04;
              puVar18 = puStack_a80 + uVar28 * 0x18;
              uVar35 = *(undefined4 *)(lStack_f60 + uVar28 * 4);
              puVar20 = puVar18;
              FUN_1082e9868(puVar18,uStack_1008,puStack_1000,unaff_x27);
              if ((int)puVar20 != 0) {
                fStack_248 = 0.0;
                fStack_244 = 0.0;
                uStack_250 = (float *)0x3f800000;
                uStack_240 = 0x3f800000;
                uStack_23c = 0;
                uStack_230 = 0x103f800000;
                fStack_238 = fStack_248;
                fStack_234 = fStack_244;
                func_0x0001082d2ef4(uVar35,puVar18,&uStack_250);
                pfVar19 = unaff_x27 + 2;
                lVar24 = 5;
                do {
                  uStack_118 = *(float **)(pfVar19 + -2);
                  pppuStack_110 = (undefined1 ***)CONCAT44(pppuStack_110._4_4_,0x3f800000);
                  FUN_108364cdc(&uStack_250,pfVar19,&uStack_118,1);
                  pfVar19 = pfVar19 + 6;
                  lVar24 = lVar24 + -1;
                } while (lVar24 != 0);
                unaff_x27 = unaff_x27 + 0x1e;
                unaff_x28 = (float *)0x0;
              }
            }
            if (0 < iStack_fcc) {
              pfVar19 = pfStack_1028;
              FUN_1082e91fc();
              plVar22 = plStack_ed8;
              *(float **)(pfStack_ff8 + 0x32) = pfVar19;
              if (plStack_ed8 != (long *)0x0) {
                (**(code **)(*plStack_ed8 + 0x10))(plStack_ed8);
              }
              pfVar5 = pfStack_d8;
              plStack_f78 = plVar22;
              if (pfStack_d8 != (float *)0x0) {
                (**(code **)(*(long *)pfStack_d8 + 0x10))(pfStack_d8);
              }
              pfStack_f80 = pfVar5;
              func_0x0001082e9d84(pfVar19,&plStack_f78,9,iStack_fcc);
              uVar27 = (ulong)((uint)uVar27 | 2);
              FUN_1082647e4(&pfStack_f80);
              FUN_1082647e4(&plStack_f78);
              uStack_140 = CONCAT44(uStack_140._4_4_,(int)uStack_140 + iStack_fcc * 5);
            }
            uVar9 = iVar10 == 3;
            if (2 < iVar10) {
              pfVar19 = pfStack_1028;
              FUN_1082e91fc();
              pfStack_f90 = pfStack_d8;
              plStack_f88 = plStack_ed8;
              *(float **)(pfStack_ff8 + 0x34) = pfVar19;
              plStack_ed8 = (long *)0x0;
              pfStack_d8 = (float *)0x0;
              func_0x0001082e9d84();
              uVar27 = (ulong)((uint)uVar27 | 4);
              FUN_1082647e4(&pfStack_f90);
              FUN_1082647e4(&plStack_f88);
            }
            FUN_1082647e4(&plStack_ed8);
            func_0x0001082e9cdc();
            param_8 = pfStack_ff8;
            goto LAB_1082e8abc;
          }
          func_0x0001082e9d4c();
LAB_1082e8cd0:
          FUN_1082647e4(&plStack_ed8);
          func_0x0001082e9cdc();
          pfVar19 = unaff_x27;
        }
LAB_1082e8cdc:
        do {
          unaff_w20 = (int)uVar27;
          FUN_1081842d4(&lStack_f60);
          FUN_1081f8340(&lStack_f50);
          func_0x0001082e9d70();
          FUN_1082e7088(ppuStack_fe8);
          FUN_1082e7088(ppuStack_fe0);
          unaff_x27 = pfVar19;
LAB_1082e8d00:
          func_0x0001082e9bc8(uStack_a0);
          if ((bool)uVar9) {
            return;
          }
          ___stack_chk_fail();
LAB_1082e8f0c:
          iVar10 = 0x1372a840;
          ___cxa_guard_acquire();
          if (iVar10 != 0) {
            ___cxa_guard_release(0x11372a840);
          }
LAB_1082e8834:
          uStack_250 = (float *)0x11372a870;
          func_0x0001082e9ccc();
          if ((bRam000000011372a850 & 1) == 0) {
            iVar10 = 0x1372a850;
            ___cxa_guard_acquire();
            if (iVar10 != 0) {
              uRam000000011372a848 = 0x11372a870;
              ___cxa_guard_release(0x11372a850);
            }
          }
          FUN_1082e96e8(&uStack_250,unaff_x28,&UNK_10df16baa,0x12,0x100,6,uRam000000011372a848);
          lVar24 = (long)uStack_250;
          uStack_250 = (float *)0x0;
          uVar9 = lVar24 == 0;
          pfStack_d8 = (float *)0x0;
          if (!(bool)uVar9) {
            pfStack_d8 = (float *)(lVar24 + 0xb0);
          }
          uVar3 = unaff_w20 / 2;
          FUN_10828f708(&uStack_250);
          pfStack_f70 = pfStack_d8;
          pfStack_d8 = (float *)0x0;
          FUN_1082fbf74(&uStack_250,pfStack_1028,0,0xc,&pfStack_f70,6,0x12,uVar3,0x100);
          FUN_1082647e4(&pfStack_f70);
          pfVar5 = uStack_250;
          if (uStack_250 == (float *)0x0) {
            func_0x0001082e9d4c();
          }
          else {
            unaff_x28 = uStack_250;
            for (uVar27 = 0; uVar9 = uVar27 == (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)),
                !(bool)uVar9; uVar27 = uVar27 + 1) {
              if ((long)(int)uStack_258 <= (long)(uVar27 * 2)) goto LAB_1082e8f04;
              pfVar19 = (float *)(puStack_260 + uVar27 * 0x10);
              bVar2 = *(byte *)(param_8 + 0x2e);
              fVar37 = pfVar19[2] - *pfVar19;
              fVar36 = pfVar19[3] - pfVar19[1];
              uStack_118 = (float *)CONCAT44(fVar36,fVar37);
              uVar28 = 0;
              func_0x000108384970(0x3f000000);
              if ((uVar28 & 1) == 0) {
                for (lVar24 = 0; lVar24 != 0x48; lVar24 = lVar24 + 0xc) {
                  *(undefined8 *)((long)unaff_x28 + lVar24) = 0x7f7fffff7f7fffff;
                }
              }
              else {
                fVar37 = fVar36 * fVar36 + fVar37 * fVar37;
                fVar36 = (float)bVar2 * 0.003921569;
                fVar23 = SUB84(uStack_118,0);
                fVar33 = (float)((ulong)uStack_118 >> 0x20);
                if (1.0 <= fVar37) {
                  *(ulong *)unaff_x28 =
                       CONCAT44(fVar33 + (float)((ulong)*(undefined8 *)pfVar19 >> 0x20),
                                fVar23 + (float)*(undefined8 *)pfVar19);
                  uVar11 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) - fVar33,
                                    (float)*(undefined8 *)(pfVar19 + 2) - fVar23);
                }
                else {
                  *(ulong *)unaff_x28 =
                       CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) - fVar33,
                                (float)*(undefined8 *)(pfVar19 + 2) - fVar23);
                  fVar36 = fVar36 * SQRT(fVar37);
                  uVar11 = CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) + fVar33,
                                    (float)*(undefined8 *)pfVar19 + fVar23);
                }
                fVar34 = fVar33 + fVar33;
                fVar37 = fVar23 * -2.0;
                unaff_x28[2] = fVar36;
                *(undefined8 *)(unaff_x28 + 3) = uVar11;
                unaff_x28[5] = fVar36;
                fVar36 = pfVar19[1];
                unaff_x28[6] = fVar34 + (*pfVar19 - fVar23);
                unaff_x28[7] = fVar37 + (fVar36 - fVar33);
                unaff_x28[8] = 0.0;
                fVar36 = pfVar19[3];
                unaff_x28[9] = fVar34 + fVar23 + pfVar19[2];
                unaff_x28[10] = fVar37 + fVar33 + fVar36;
                unaff_x28[0xb] = 0.0;
                fVar36 = pfVar19[1];
                unaff_x28[0xc] = (*pfVar19 - fVar23) - fVar34;
                unaff_x28[0xd] = (fVar36 - fVar33) - fVar37;
                unaff_x28[0xe] = 0.0;
                fVar36 = pfVar19[3];
                unaff_x28[0xf] = (fVar23 + pfVar19[2]) - fVar34;
                unaff_x28[0x10] = (fVar33 + fVar36) - fVar37;
                unaff_x28[0x11] = 0.0;
                if (puStack_1000 != (undefined8 *)0x0) {
                  FUN_1082e97a8(puStack_1000,unaff_x28,0xc,6);
                }
              }
              unaff_x28 = unaff_x28 + 0x12;
            }
            *(ulong *)(param_8 + 0x30) = CONCAT44(fStack_244,fStack_248);
          }
          func_0x0001082e9cdc();
          uVar27 = 0;
          pfVar19 = unaff_x27;
        } while (pfVar5 == (float *)0x0);
        uVar27 = 1;
      } while( true );
    }
  }
LAB_1082e8f04:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1082e8f08);
  (*pcVar6)();
code_r0x0001082e876c:
  if (((0.0 < fVar36) && ((bStack_f02 & 1) != 0)) && (iVar10 == 1)) {
    func_0x0001082e9ca0(ppuStack_e90);
    func_0x0001082e9b90();
  }
  puVar18 = &uStack_f61;
  FUN_1082e91c4(puVar18,iStack_fcc,uStack_edc);
  iStack_fcc = (int)puVar18;
  lVar24 = lVar24 + 1;
  goto code_r0x0001082e81f4;
code_r0x0001082e84b0:
  if (0.0 < fVar36) {
    if (bStack_f02 == 1 && iVar10 == 1) {
      func_0x0001082e9ca0(ppuStack_e90);
      func_0x0001082e9b90();
      iVar10 = 1;
    }
    else if (iVar10 == 0) {
      lVar21 = lVar31;
      FUN_1083645e0(lVar31,&uStack_250,&uStack_140,1);
      iVar10 = (int)lVar21;
      fStack_248 = SUB84(uStack_250,0);
      fStack_244 = (float)((ulong)uStack_250 >> 0x20);
      func_0x0001082e9d14();
      func_0x0001082e9bb4();
      func_0x0001082e9be8();
      func_0x0001082e9bdc();
      if (iVar10 != 0) {
        ppuVar16 = ppuStack_e90;
        func_0x0001082e9ca0();
        *(float *)ppuVar16 = (float)uStack_250 - fVar36;
        *(undefined4 *)((long)ppuVar16 + 4) = uStack_250._4_4_;
        param_2 = (ulong)(uint)fStack_244;
        *(float *)(ppuVar16 + 1) = fVar36 + fStack_248;
        *(float *)((long)ppuVar16 + 0xc) = fStack_244;
      }
      iVar10 = 0;
    }
  }
  goto LAB_1082e82dc;
}



/* Entry: 1082e9088; end: 1082e90cf;  */

void FUN_1082e9088(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001082e9ddc();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  func_0x000108376b14(param_1 + 5,param_2 + 5);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x38);
  *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(unaff_x19 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  return;
}



/* Entry: 1082e90d0; end: 1082e9117;  */

void FUN_1082e90d0(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((int)((uint)param_1 ^ 0x7fffffff) < (int)param_2) {
    func_0x00010bdb1a68();
    if (*(int *)(param_1 + 1) != 0) {
      _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) * 0x50);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      _free(*param_1);
    }
    param_3 = param_3 / 0x50;
    if (0x7ffffffe < param_3) {
      param_3 = 0x7fffffff;
    }
    *param_1 = param_2;
    *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
    return;
  }
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x50;
  FUN_10840fe24(0x3ff8000000000000,&uStack_20,(int)param_2 + (uint)param_1);
  return;
}



/* Entry: 1082e9118; end: 1082e918b;  */

void FUN_1082e9118(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) * 0x50);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 / 0x50;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1082e918c; end: 1082e91c3;  */

void FUN_1082e918c(void)

{
  func_0x0001082e9c84();
  return;
}



/* Entry: 1082e91c4; end: 1082e91fb;  */

ulong FUN_1082e91c4(undefined1 *param_1,ulong param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if ((int)param_3 < 0) {
    if ((int)(-0x80000000 - param_3) <= iVar1) goto LAB_1082e91f0;
  }
  else if ((param_3 == 0) || (iVar1 <= (int)(param_3 ^ 0x7fffffff))) {
LAB_1082e91f0:
    return (ulong)(param_3 + iVar1);
  }
  *param_1 = 0;
  return param_2;
}



/* Entry: 1082e91fc; end: 1082e9217;  */

void FUN_1082e91fc(long *param_1)

{
  (**(code **)(*param_1 + 0xe0))();
  FUN_1082e9afc();
  return;
}



/* Entry: 1082e9218; end: 1082e9277;  */

void FUN_1082e9218(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_10826c938();
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_7;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_10826c938(param_1 + 0x20,param_6);
  *(undefined4 *)(param_1 + 0x2c) = param_8;
  return;
}



/* Entry: 1082e9278; end: 1082e946f;  */

/* WARNING: Possible PIC construction at 0x0001082e92b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082e92bc) */
/* WARNING: Removing unreachable block (ram,0x0001082e92dc) */
/* WARNING: Removing unreachable block (ram,0x0001082e92c8) */

void FUN_1082e9278(undefined8 param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  int in_w3;
  float extraout_w8;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_84;
  undefined1 auStack_50 [32];
  
  puVar9 = auStack_50;
  func_0x0001082e9dc4();
  func_0x0001082e9c68();
  FUN_1083645e0();
  puVar5 = unaff_x21;
  func_0x0001082e9dc4();
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  FUN_10838eb84(&uStack_a0,puVar9,3);
  fVar12 = -1.0;
  uVar6 = CONCAT44((float)((ulong)uStack_a0 >> 0x20) + -1.0,(float)uStack_a0 + -1.0);
  uStack_98 = CONCAT44((float)((ulong)uStack_98 >> 0x20) + 1.0,(float)uStack_98 + 1.0);
  uStack_a0 = uVar6;
  func_0x00010812f1a8(&uStack_a0,&uStack_b0);
  fVar11 = (float)uVar6;
  uVar6 = *puVar5;
  FUN_10821a044(uVar6,&uStack_b0);
  if ((int)uVar6 != 0) {
    puVar7 = unaff_x20;
    FUN_1082e9520();
    if ((int)puVar7 == 0) {
      if (fStack_84 <= 30625.0) {
        uVar10 = 0;
      }
      else {
        uVar2 = (uint)(fStack_84 / 30625.0) >> 0x17 & 0xff;
        uVar10 = 0;
        if (0x7d < uVar2) {
          uVar10 = uVar2 - 0x7e;
        }
        if (3 < uVar10) {
          uVar10 = 4;
        }
      }
      if (*(char *)puVar5[4] == '\0') {
        unaff_x21 = unaff_x20;
      }
      puVar7 = *(undefined8 **)puVar5[5];
      FUN_1082d3644(puVar7,3);
      *puVar7 = *unaff_x21;
      puVar7[1] = unaff_x21[1];
      puVar7[2] = unaff_x21[2];
      puVar8 = *(uint **)puVar5[6];
      FUN_1082e95f0(puVar8,1);
      *puVar8 = uVar10;
      *(int *)puVar5[7] = *(int *)puVar5[7] + (1 << (ulong)(uVar10 & 0x1f));
    }
    else {
      puVar7 = *(undefined8 **)puVar5[1];
      FUN_1082d3644(puVar7,4);
      *puVar7 = *unaff_x20;
      puVar7[1] = unaff_x20[1];
      puVar7[2] = unaff_x20[1];
      puVar7[3] = unaff_x20[2];
      if (in_w3 != 0) {
        func_0x0001082e9bf4();
        bVar3 = false;
        if ((extraout_w8 == param_7) && (bVar3 = false, !NAN(param_6) && !NAN(param_5))) {
          bVar3 = param_6 == param_5;
        }
        bVar4 = false;
        if ((bVar3) && (bVar4 = false, !NAN(fVar11) && !NAN(fVar12))) {
          bVar4 = fVar11 == fVar12;
        }
        bVar3 = false;
        if ((bVar4) && (bVar3 = false, !NAN(param_3) && !NAN(param_4))) {
          bVar3 = param_3 == param_4;
        }
        if (bVar3) {
          puVar1 = (undefined8 *)puVar5[3];
          *(undefined1 *)puVar5[2] = 1;
          *puVar1 = *puVar7;
        }
      }
    }
  }
  return;
}



/* Entry: 1082e9470; end: 1082e951f;  */

undefined8 FUN_1082e9470(float param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  long unaff_x19;
  float fVar5;
  float fVar6;
  
  uVar4 = 0;
  fVar5 = param_1;
  func_0x0001082e9ddc();
  FUN_1083517c0();
  fVar6 = 1.0;
  bVar1 = false;
  if ((0.0 < fVar5) && (bVar1 = false, !NAN(fVar5))) {
    bVar1 = fVar5 < 1.0;
  }
  if (bVar1) {
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (!NAN(param_1 - param_1)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < 0.0;
        bVar2 = param_1 == 0.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      param_1 = 1.0;
    }
    FUN_108352a8c();
    if ((uVar4 & 1) != 0) {
      return 2;
    }
    func_0x0001082e9db0();
    *(float *)(unaff_x19 + 0x18) = param_1;
  }
  else {
    func_0x0001082e9db0();
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (!NAN(param_1 - param_1)) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_1)) {
        bVar1 = param_1 < 0.0;
        bVar2 = param_1 == 0.0;
        bVar3 = false;
      }
    }
    if (bVar2 || bVar1 != bVar3) {
      param_1 = fVar6;
    }
    *(float *)(unaff_x19 + 0x18) = param_1;
  }
  return 1;
}



/* Entry: 1082e9520; end: 1082e95ef;  */

bool FUN_1082e9520(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  pfVar1 = param_1 + 2;
  fVar4 = *param_1 - *pfVar1;
  fVar3 = param_1[1] - param_1[3];
  if (0.0625 <= fVar3 * fVar3 + fVar4 * fVar4) {
    pfVar2 = param_1 + 4;
    fVar3 = *pfVar1 - *pfVar2;
    fVar4 = param_1[3] - param_1[5];
    fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
    if (0.0625 <= fVar3) {
      func_0x000108384a68(pfVar1,param_1,pfVar2,0);
      *param_2 = fVar3;
      if (0.0625 <= fVar3) {
        func_0x000108384a68(pfVar2,pfVar1,param_1,0);
        return fVar3 < 0.0625;
      }
    }
  }
  return true;
}



/* Entry: 1082e95f0; end: 1082e9627;  */

long FUN_1082e95f0(long *param_1,int param_2)

{
  long lVar1;
  
  FUN_1081f848c(0x3ff8000000000000);
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + param_2;
  return *param_1 + (long)(int)lVar1 * 4;
}



/* Entry: 1082e9628; end: 1082e96a3;  */

void FUN_1082e9628(char *param_1,code *param_2,undefined8 *param_3)

{
  char *pcVar1;
  char cStack_31;
  
  cStack_31 = *param_1;
  if (cStack_31 != '\0') goto LAB_1082e9688;
  pcVar1 = param_1;
  FUN_10825bc50(param_1,&cStack_31,1,0,0);
  if ((int)pcVar1 == 0) {
    do {
      cStack_31 = *param_1;
LAB_1082e9688:
    } while (cStack_31 != '\x02');
  }
  else {
    (*param_2)(*param_3);
    *param_1 = '\x02';
  }
  return;
}



/* Entry: 1082e96a4; end: 1082e96e7;  */

void FUN_1082e96a4(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  FUN_10827a1fc();
  func_0x000108320d60();
  FUN_10827a280(auStack_28,param_1,lVar1,0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_10827a320(auStack_28);
  return;
}



/* Entry: 1082e96e8; end: 1082e976f;  */

void FUN_1082e96e8(long *param_1,undefined8 param_2,short *param_3,ulong param_4,uint param_5,
                  short param_6,long param_7)

{
  uint uVar1;
  short *psVar2;
  short *psVar3;
  bool bVar4;
  short *psVar5;
  uint uVar6;
  short *psVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  short *psStack_78;
  undefined8 uStack_70;
  short *psStack_68;
  
  FUN_1082e9770(param_2,param_7);
  if (*param_1 != 0) {
    return;
  }
  FUN_10828f708(param_1);
  uVar6 = (uint)param_4;
  uVar1 = param_5 * uVar6;
  uVar10 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
  func_0x0001082afdd0(&psStack_68,param_2,uVar10,1);
  if (psStack_68 == (short *)0x0) {
    *param_1 = 0;
    goto LAB_1082af38c;
  }
  psVar7 = psStack_68;
  FUN_1082a0214();
  psStack_78 = (short *)0x0;
  uStack_70 = 0;
  if (psVar7 == (short *)0x0) {
    FUN_1082af3b0(&psStack_78,(long)(int)uVar1);
    bVar4 = psStack_78 == (short *)0x0;
    psVar7 = psStack_78;
  }
  else {
    bVar4 = true;
  }
  psVar5 = psVar7;
  for (uVar8 = 0; uVar8 != (param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU)); uVar8 = uVar8 + 1) {
    psVar2 = psVar5;
    psVar3 = param_3;
    for (uVar9 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)); uVar9 != 0; uVar9 = uVar9 - 1)
    {
      *psVar2 = *psVar3 + param_6 * (short)uVar8;
      psVar2 = psVar2 + 1;
      psVar3 = psVar3 + 1;
    }
    psVar5 = (short *)((long)psVar5 +
                      (-(param_4 >> 0x1f & 1) & 0xfffffffe00000000 | (param_4 & 0xffffffff) << 1));
  }
  if (bVar4) {
    func_0x0001082a0268();
LAB_1082af35c:
    if (param_7 != 0) {
      func_0x0001082aedbc(param_2,param_7,psStack_68);
    }
    psVar7 = psStack_68;
    psStack_68 = (short *)0x0;
  }
  else {
    psVar5 = psStack_68;
    func_0x0001082a02d0(psStack_68,psVar7,0,uVar10,0);
    if (((ulong)psVar5 & 1) != 0) goto LAB_1082af35c;
    psVar7 = (short *)0x0;
  }
  *param_1 = (long)psVar7;
  func_0x0001081a3a7c(&psStack_78);
LAB_1082af38c:
  func_0x0001082afd78();
  return;
}



/* Entry: 1082e9770; end: 1082e97a7;  */

void FUN_1082e9770(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  FUN_1082aedd4(&uStack_28);
  uVar1 = uStack_28;
  uStack_28 = 0;
  *param_1 = uVar1;
  FUN_1082837dc(&uStack_28);
  return;
}



/* Entry: 1082e97a8; end: 1082e9843;  */

void FUN_1082e97a8(code *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar2;
  float fVar3;
  
  func_0x0001082e9dc4();
  pcVar1 = param_1;
  func_0x0001081421e0();
  if ((int)pcVar1 != 0) {
    if ((int)pcVar1 == 1) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      fVar3 = *(float *)(param_1 + 0x14);
      for (; param_4 != 0; param_4 = param_4 + -1) {
        *unaff_x21 = CONCAT44(fVar3 + (float)((ulong)*unaff_x21 >> 0x20),
                              (float)uVar2 + (float)*unaff_x21);
        unaff_x21 = (undefined8 *)(unaff_x20 + (long)unaff_x21);
      }
    }
    else {
      pcVar1 = param_1;
      FUN_1082e9844();
      for (; param_4 != 0; param_4 = param_4 + -1) {
        (*pcVar1)(*(undefined4 *)unaff_x21,*(undefined4 *)((long)unaff_x21 + 4),param_1,unaff_x21);
        unaff_x21 = (undefined8 *)(unaff_x20 + (long)unaff_x21);
      }
    }
  }
  return;
}



/* Entry: 1082e9844; end: 1082e9867;  */

undefined * FUN_1082e9844(uint param_1)

{
  func_0x0001081421e0();
  return (&PTR_DAT_110a3ed90)[param_1 & 0x1f];
}



/* Entry: 1082e9868; end: 1082e9a93;  */

void FUN_1082e9868(undefined8 *param_1,long param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  long unaff_x20;
  long unaff_x21;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001082e9dc4();
  uStack_58 = *param_1;
  uStack_60 = param_1[1];
  uStack_68 = param_1[2];
  if (param_2 == 0) {
    fVar11 = (float)uStack_58;
    fVar4 = (float)((ulong)uStack_58 >> 0x20);
    fVar8 = (float)uStack_68;
    fVar9 = (float)((ulong)uStack_68 >> 0x20);
  }
  else {
    func_0x0001082e9c78();
    func_0x0001082e9c78();
    func_0x0001082e9c78();
    fVar11 = (float)uStack_58;
    fVar4 = uStack_58._4_4_;
    fVar8 = (float)uStack_68;
    fVar9 = uStack_68._4_4_;
  }
  fStack_70 = (float)uStack_60 - fVar11;
  fStack_74 = (float)((ulong)uStack_60 >> 0x20);
  fStack_6c = fStack_74 - fVar4;
  fStack_78 = (float)uStack_60 - fVar8;
  fStack_74 = fStack_74 - fVar9;
  uVar3 = 0;
  func_0x000108384954();
  iVar2 = (int)&fStack_78;
  func_0x000108384954();
  if ((uVar3 & 1) == 0) {
    fStack_70 = fStack_78;
    fStack_6c = fStack_74;
    if (iVar2 == 0) {
      return;
    }
  }
  else if (iVar2 == 0) {
    fStack_78 = fStack_70;
    fStack_74 = fStack_6c;
  }
  fVar8 = fVar8 - fVar11;
  fVar9 = fVar9 - fVar4;
  fVar11 = -fStack_6c;
  fVar4 = fStack_70;
  if (-(fStack_70 * fVar9) + fVar8 * fStack_6c <= 0.0) {
    fVar11 = fStack_6c;
    fVar4 = -fStack_70;
  }
  fVar5 = -fStack_74;
  fVar1 = fStack_78;
  if (0.0 <= -(fStack_78 * fVar9) + fVar8 * fStack_74) {
    fVar5 = fStack_74;
    fVar1 = -fStack_78;
  }
  fVar6 = fVar11 + (float)uStack_58;
  fVar7 = fVar4 + uStack_58._4_4_;
  *param_4 = fVar6;
  param_4[1] = fVar7;
  param_4[6] = (float)uStack_58 - fVar11;
  param_4[7] = uStack_58._4_4_ - fVar4;
  if ((unaff_x21 != 0) && (fVar9 * fVar9 + fVar8 * fVar8 <= 5.9604645e-08)) {
    uStack_68 = uStack_60;
  }
  fVar9 = fVar5 + (float)uStack_68;
  fVar10 = fVar1 + uStack_68._4_4_;
  param_4[0x12] = fVar9;
  param_4[0x13] = fVar10;
  param_4[0x18] = (float)uStack_68 - fVar5;
  param_4[0x19] = uStack_68._4_4_ - fVar1;
  fVar8 = 1.0 / (-(fVar5 * fVar4) + fVar1 * fVar11);
  if (NAN(fVar8 - fVar8)) {
    fVar9 = fVar11 + (fVar6 + fVar9) * 0.5;
    fVar8 = fVar4 + (fVar7 + fVar10) * 0.5;
  }
  else {
    fVar10 = fVar1 * fVar10 + fVar9 * fVar5;
    fVar6 = fVar4 * fVar7 + fVar6 * fVar11;
    fVar9 = fVar8 * (fVar1 * fVar6 - fVar10 * fVar4);
    fVar8 = fVar8 * (fVar11 * fVar10 - fVar5 * fVar6);
  }
  param_4[0xc] = fVar9;
  param_4[0xd] = fVar8;
  if (unaff_x20 != 0) {
    FUN_1082e97a8();
  }
  return;
}



/* Entry: 1082e9a94; end: 1082e9adb;  */

void FUN_1082e9a94(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  FUN_1082d2d74(auStack_38,param_1);
  FUN_1082e7188(auStack_38,param_2,5,0x18,8);
  return;
}



/* Entry: 1082e9adc; end: 1082e9afb;  */

void FUN_1082e9adc(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1082e9afc(param_1,&uStack_11);
  return;
}



/* Entry: 1082e9afc; end: 1082e9b63;  */

void FUN_1082e9afc(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = SUB84(param_1,0);
  FUN_10840f8d0(uVar3,0x39,8);
  lVar2 = param_1[1];
  param_1[1] = CONCAT44(uVar4,uVar3) + 0x30;
  *(code **)(CONCAT44(uVar4,uVar3) + 0x30) = FUN_1082e9b64;
  lVar5 = param_1[1];
  param_1[1] = lVar5 + 8;
  *(char *)(lVar5 + 8) = (char)uVar3 - (char)(int)lVar2;
  *param_1 = param_1[1] + 1;
  param_1[1] = param_1[1] + 1;
  puVar1 = (undefined8 *)CONCAT44(uVar4,uVar3);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(CONCAT44(uVar4,uVar3) + 0x28) = 0;
  *(undefined8 *)(CONCAT44(uVar4,uVar3) + 0x20) = 0;
  return;
}



/* Entry: 1082e9b64; end: 1082e9de7;  */

long * FUN_1082e9b64(long param_1)

{
  long *plVar1;
  
  FUN_1082647e4(param_1 + -0x19);
  plVar1 = *(long **)(param_1 + -0x39);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return (long *)(param_1 + -0x39);
}



/* Entry: 1082e9de8; end: 1082e9f2f;  */

ulong FUN_1082e9de8(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                   long param_6)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  
  if (*(int *)(param_6 + 0x38) != 1) {
    return 0;
  }
  uVar3 = *(ulong *)(param_6 + 0x20);
  func_0x0001082e4e70();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  lVar4 = *(long *)(param_6 + 0x20);
  if (*(long *)(lVar4 + 0x50) == 0) {
    if (*(char *)(lVar4 + 0x38) == '\x04') {
      bVar1 = *(byte *)(lVar4 + 0xe) >> 1;
    }
    else {
      bVar1 = *(byte *)(lVar4 + 0x3b);
    }
    if (((bVar1 & 1) == 0) &&
       ((FUN_1082d8588(), 0.0 < param_3 - param_1 ||
        (FUN_1082d8588(*(undefined8 *)(param_6 + 0x20)), 0.0 < param_4 - param_2)))) {
      lVar4 = *(long *)(param_6 + 0x20);
      uVar3 = lVar4 + 0x40;
      func_0x0001083a630c();
      if (1 < (int)uVar3 - 2U) {
        if ((int)uVar3 != 0) {
          iVar2 = (int)*(undefined8 *)(param_6 + 0x18);
          FUN_10828e338();
          uVar5 = 0;
          if (iVar2 == 0) {
            uVar5 = 2;
          }
          return (ulong)uVar5;
        }
        return uVar3;
      }
      uVar3 = *(ulong *)(param_6 + 0x18);
      fVar6 = 0.00024414062;
      FUN_108363c84();
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      FUN_108365614(*(undefined8 *)(param_6 + 0x18));
      fVar6 = fVar6 * *(float *)(lVar4 + 0x44);
      if (fVar6 < 1.0) {
        iVar2 = (int)lVar4 + 0x40;
        func_0x0001083a630c();
        if (iVar2 == 2) {
          return 0;
        }
      }
      uVar3 = *(ulong *)(param_6 + 0x20);
      if ((fVar6 <= 20.0) || (*(char *)(uVar3 + 0x38) == '\x02')) {
        FUN_1082d8438();
        if ((int)uVar3 != 0) {
          uVar5 = 0;
          if (*(char *)(lVar4 + 0x4e) != '\x01') {
            uVar5 = 2;
          }
          return (ulong)uVar5;
        }
        return uVar3;
      }
    }
  }
  return 0;
}



/* Entry: 1082e9f30; end: 1082ea143;  */

undefined8 FUN_1082e9f30(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lStack_b8;
  undefined8 auStack_b0 [2];
  undefined8 auStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(*(long *)(*param_2 + 0x20) + 0x54) == '\x01') {
    FUN_10827b938(*(long *)(*param_2 + 0x20),&UNK_10f48811f);
  }
  FUN_108376ad8(auStack_b0);
  FUN_108287e50(param_2[7],auStack_b0);
  uVar1 = param_2[7] + 0x40;
  FUN_10828786c();
  lVar2 = param_2[7];
  if ((uVar1 & 1) == 0) {
    uVar5 = *(undefined4 *)(lVar2 + 0x44);
  }
  else {
    uVar5 = 0xbf800000;
  }
  uVar6 = *(undefined4 *)(lVar2 + 0x48);
  lVar4 = param_2[1];
  func_0x0001083a630c(lVar2 + 0x40);
  puVar3 = (undefined8 *)param_2[6];
  uStack_78 = puVar3[1];
  uStack_80 = *puVar3;
  uStack_68 = puVar3[3];
  uStack_70 = puVar3[2];
  uStack_60 = puVar3[4];
  func_0x000108376b14(auStack_a0,auStack_b0);
  uStack_88 = *(undefined8 *)(lVar4 + 0x24);
  uStack_90 = *(undefined8 *)(lVar4 + 0x1c);
  if (*(char *)(lVar4 + 0x18) == '\x01') {
    lVar2 = 0xd8;
    __Znwm();
    func_0x0001082eaf94();
    FUN_1082ea158(uVar5,uVar6);
  }
  else {
    lVar2 = 0xf8;
    __Znwm();
    FUN_1082a3af0(lVar2 + 0xd8,lVar4);
    func_0x0001082eaf94();
    FUN_1082ea158(uVar5,uVar6,lVar2);
  }
  FUN_10837ca5c(auStack_a0[0]);
  uStack_68 = 0;
  lStack_b8 = lVar2;
  FUN_1082c0f08(param_2[3],param_2[4],&lStack_b8,&uStack_80);
  FUN_10827fb18(&uStack_80);
  lVar4 = lStack_b8;
  lStack_b8 = 0;
  if (lVar4 != 0) {
    func_0x0001082eaf80();
  }
  FUN_10837ca5c(auStack_b0[0]);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return 1;
  }
  ___stack_chk_fail();
  __ZdlPv(lVar2);
  FUN_10837ca5c(auStack_a0[0]);
  FUN_10837ca5c(auStack_b0[0]);
  func_0x0001082eaf60();
  return auStack_b0[0];
}



/* Entry: 1082ea144; end: 1082ea157;  */

void FUN_1082ea144(void)

{
  return;
}



/* Entry: 1082ea158; end: 1082ea3fb;  */

undefined8 *
FUN_1082ea158(float param_1,float param_2,undefined8 *param_3,undefined8 param_4,undefined8 *param_5
             ,undefined8 *param_6,undefined8 *param_7,undefined4 param_8,int param_9,
             undefined *param_10)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  
  if ((bRam000000011372a8e8 & 1) == 0) {
    iVar2 = 0x1372a8e8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1082e6880();
      iRam000000011372a8e0 = iVar2;
      ___cxa_guard_release(0x11372a8e8);
    }
  }
  iVar2 = iRam000000011372a8e0;
  param_3[2] = 0;
  param_3[1] = 0;
  *(short *)(param_3 + 3) = (short)iVar2;
  *(undefined8 *)((long)param_3 + 0x24) = 0;
  *(undefined8 *)((long)param_3 + 0x1c) = 0;
  *(undefined4 *)((long)param_3 + 0x2c) = 0;
  *param_3 = &PTR_FUN_110a39550;
  plVar5 = param_3 + 0x11;
  *plVar5 = (long)(param_3 + 6);
  param_3[0x12] = 0x200000000;
  param_3[0x13] = param_4;
  *(byte *)((long)param_3 + 0xa1) = *(byte *)((long)param_3 + 0xa1) & 0xf0 | 1;
  *(undefined1 *)(param_3 + 0x14) = 0;
  puVar1 = &UNK_10df14cb4;
  if (param_10 != (undefined *)0x0) {
    puVar1 = param_10;
  }
  param_3[0x15] = puVar1;
  *(undefined4 *)(param_3 + 0x17) = 8;
  param_3[0x19] = 0;
  param_3[0x1a] = 0;
  param_3[0x18] = 0;
  uStack_c8 = param_6[1];
  uStack_d0 = *param_6;
  uStack_b8 = param_6[3];
  uStack_c0 = param_6[2];
  uStack_b0 = param_6[4];
  func_0x000108376b14(auStack_a8,param_7);
  uStack_90 = param_5[1];
  uStack_98 = *param_5;
  uStack_7c = (undefined1)param_9;
  iVar2 = *(int *)(param_3 + 0x12);
  lVar3 = (long)iVar2;
  fStack_88 = param_1;
  fStack_84 = param_2;
  uStack_80 = param_8;
  if (iVar2 < (int)(*(uint *)((long)param_3 + 0x94) >> 1)) {
    FUN_1082eabc4(*plVar5 + (long)iVar2 * 0x58,&uStack_d0);
  }
  else {
    uVar4 = 1;
    FUN_1082eac14(lVar3,1);
    FUN_1082eabc4(lVar3 + (long)*(int *)(param_3 + 0x12) * 0x58,&uStack_d0);
    FUN_1082eac5c(plVar5,lVar3,uVar4);
  }
  *(int *)(param_3 + 0x12) = *(int *)(param_3 + 0x12) + 1;
  FUN_10837ca5c(auStack_a8[0]);
  func_0x0001083773e0();
  uStack_c8 = param_7[1];
  uVar4 = *param_7;
  uStack_d0 = uVar4;
  if (0.0 < param_1) {
    FUN_108365614(param_6);
    if (param_1 * 0.5 * (float)uVar4 <= 1.0 || param_9 != 0) {
      param_2 = 1.0;
    }
    param_2 = param_1 * 0.5 * param_2;
    func_0x00010816882c(param_2,param_2,&uStack_d0);
  }
  FUN_108364f90(param_6,param_3 + 4,&uStack_d0,1);
  *(undefined2 *)((long)param_3 + 0x1a) = 1;
  return param_3;
}



/* Entry: 1082ea3fc; end: 1082ea45b;  */

long FUN_1082ea3fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x58);
    uVar2 = uVar1 + (long)*(int *)(param_1 + 0x60) * 0x58;
    do {
      FUN_10837ca38(uVar1 + 0x28);
      uVar1 = uVar1 + 0x58;
    } while (uVar1 < uVar2);
  }
  if ((*(byte *)(param_1 + 100) & 1) != 0) {
    _free(*(undefined8 *)(param_1 + 0x58));
  }
  return param_1;
}



/* Entry: 1082ea45c; end: 1082ea493;  */

undefined8 * FUN_1082ea45c(undefined8 *param_1)

{
  FUN_10840f118(param_1 + 0x17);
  FUN_1082fc320(param_1 + 0x13);
  FUN_1082ea3fc(param_1 + 6);
  *param_1 = &PTR_FUN_110a39358;
  func_0x0001082e723c(param_1 + 1);
  return param_1;
}



/* Entry: 1082ea494; end: 1082ea4a7;  */

void FUN_1082ea494(void)

{
  FUN_1082ea45c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082ea4a8; end: 1082ea4cb;  */

undefined * FUN_1082ea4a8(void)

{
  return &UNK_10f48814b;
}



/* Entry: 1082ea4cc; end: 1082ea5db;  */

undefined8 FUN_1082ea4cc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = param_1 + 0x98;
  FUN_1082fcb80(lVar7,param_2 + 0x98,param_4,param_1 + 0x20,param_2 + 0x20,0);
  if ((int)lVar7 == 0) {
    uVar4 = 2;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x90);
    uVar5 = (ulong)uVar1;
    lVar7 = *(long *)(param_2 + 0x88);
    uVar2 = *(uint *)(param_1 + 0x90);
    uVar6 = (ulong)uVar2;
    if ((int)((*(uint *)(param_1 + 0x94) >> 1) - uVar2) < (int)uVar1) {
      FUN_1082eac14(uVar6,uVar5);
      FUN_1082eac5c(param_1 + 0x88,uVar6,uVar5);
      uVar2 = *(uint *)(param_1 + 0x90);
    }
    *(uint *)(param_1 + 0x90) = uVar2 + uVar1;
    lVar3 = *(long *)(param_1 + 0x88) + (long)(int)uVar2 * 0x58 + 0x28;
    lVar7 = lVar7 + 0x28;
    for (uVar6 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar6 != 0; uVar6 = uVar6 - 1)
    {
      uVar8 = *(undefined8 *)(lVar7 + -0x20);
      uVar4 = *(undefined8 *)(lVar7 + -0x28);
      uVar10 = *(undefined8 *)(lVar7 + -0x10);
      uVar9 = *(undefined8 *)(lVar7 + -0x18);
      *(undefined8 *)(lVar3 + -8) = *(undefined8 *)(lVar7 + -8);
      *(undefined8 *)(lVar3 + -0x10) = uVar10;
      *(undefined8 *)(lVar3 + -0x18) = uVar9;
      *(undefined8 *)(lVar3 + -0x20) = uVar8;
      *(undefined8 *)(lVar3 + -0x28) = uVar4;
      func_0x000108376b14(lVar3,lVar7);
      uVar8 = *(undefined8 *)(lVar7 + 0x18);
      uVar4 = *(undefined8 *)(lVar7 + 0x10);
      uVar9 = *(undefined8 *)(lVar7 + 0x1d);
      *(undefined8 *)(lVar3 + 0x25) = *(undefined8 *)(lVar7 + 0x25);
      *(undefined8 *)(lVar3 + 0x1d) = uVar9;
      *(undefined8 *)(lVar3 + 0x18) = uVar8;
      *(undefined8 *)(lVar3 + 0x10) = uVar4;
      lVar3 = lVar3 + 0x58;
      lVar7 = lVar7 + 0x58;
    }
    uVar4 = 0;
    *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | *(byte *)(param_2 + 0xb0);
  }
  return uVar4;
}



/* Entry: 1082ea5dc; end: 1082ea653;  */

void FUN_1082ea5dc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0xd0) != 0) && (*(int *)(param_1 + 0xcc) != 0)) {
    FUN_1082a1068(param_2);
    FUN_1082a10b4(param_2,*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x98),0,
                  *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x88));
    for (lVar1 = 0; lVar1 < *(int *)(param_1 + 0xcc); lVar1 = lVar1 + 1) {
      FUN_1082a10bc(param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar1 * 8));
    }
  }
  return;
}



/* Entry: 1082ea654; end: 1082ea693;  */

uint FUN_1082ea654(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 0x90) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ea684);
    (*pcVar1)();
  }
  lVar4 = *(long *)(param_1 + 0x88) + (long)*(int *)(param_1 + 0x90) * 0x58;
  puVar3 = (undefined8 *)(lVar4 + -0x20);
  lVar2 = param_1 + 0x98;
  uVar6 = *(undefined8 *)(lVar4 + -0x18);
  uVar5 = *puVar3;
  func_0x0001082fbad4(lVar2);
  *(undefined8 *)(lVar4 + -0x18) = uVar6;
  *puVar3 = uVar5;
  if ((byte *)(param_1 + 0xb0) != (byte *)0x0) {
    FUN_1082fc488();
    *(byte *)(param_1 + 0xb0) = (byte)puVar3 ^ 1;
  }
  return (uint)lVar2 & 0xffff;
}



/* Entry: 1082ea694; end: 1082ea78b;  */

void FUN_1082ea694(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  long lVar1;
  long lVar2;
  uint auStack_80 [2];
  undefined8 uStack_78;
  undefined4 uStack_6c;
  undefined1 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_6c = 2;
  if ((*(byte *)(param_1 + 0xa1) & 8) != 0) {
    uStack_6c = 3;
  }
  uStack_64 = 1;
  if (*(char *)(param_1 + 0xb0) != '\0') {
    uStack_64 = 2;
  }
  uStack_58 = 0xff800000ff800000;
  uStack_60 = 0xff800000ff800000;
  uStack_68 = 0xff;
  auStack_80[0] = *(byte *)(param_1 + 0xa1) >> 1 & 2;
  uStack_78 = 0;
  lVar1 = param_3;
  func_0x00010828dd54(param_3,&uStack_64,&uStack_6c,auStack_80,0x113254e20);
  if (lVar1 == 0) {
    FUN_10841076c(&UNK_10f488164);
  }
  else {
    lVar2 = param_1 + 0x98;
    FUN_1082fcbb8(lVar2,param_2,param_3,param_4,param_5,param_6,param_7,lVar1,0,param_8,param_9);
    *(long *)(param_1 + 0xd0) = lVar2;
  }
  return;
}



/* Entry: 1082ea78c; end: 1082eabc3;  */

void FUN_1082ea78c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  uint uVar2;
  short *psVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lStack_220;
  ulong uStack_210;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  char cStack_1f4;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 auStack_1c8 [2];
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_130;
  short *psStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  uint uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  lVar8 = *(long *)(param_1 + 0xd0);
  if (lVar8 == 0) {
    FUN_1082fbcfc(param_1,param_2);
    lVar8 = *(long *)(param_1 + 0xd0);
    if (lVar8 == 0) {
      return;
    }
  }
  lVar9 = *(long *)(*(long *)(lVar8 + 0x98) + 0x20);
  uVar2 = *(uint *)(param_1 + 0x90);
  uVar16 = 100;
  lVar5 = lVar9 * 100;
  FUN_1082eacd0();
  lVar6 = 200;
  FUN_1082eacd0();
  uVar17 = 0;
  uStack_210 = 0;
  lVar8 = 0;
  lStack_220 = 100;
  do {
    if (uVar17 == (uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU))) {
      if (lVar8 < 0x80000000 && (long)uStack_210 < 0x80000000) {
        func_0x0001082eaf68(param_1,param_2,lVar8,lVar9);
      }
      _free(lVar5);
      _free(lVar6);
      return;
    }
    if ((long)*(int *)(param_1 + 0x90) <= (long)uVar17) {
LAB_1082eaba4:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1082eaba8);
      (*pcVar4)();
    }
    uVar19 = *(long *)(param_1 + 0x88) + uVar17 * 0x58;
    uStack_b4 = *(undefined4 *)(uVar19 + 0x50);
    uStack_b0 = *(undefined1 *)(uVar19 + 0x54);
    uStack_b8 = *(undefined4 *)(uVar19 + 0x48);
    uStack_ac = *(undefined4 *)(uVar19 + 0x4c);
    lStack_1c0 = 0;
    uStack_1b8 = 0;
    auStack_1c8[0] = 8;
    uStack_1b0 = 4;
    lStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_198 = 1;
    uStack_180 = 4;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_168 = 8;
    uStack_150 = 8;
    uStack_138 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    psStack_128 = (short *)0x0;
    uStack_120 = 0;
    uStack_130 = 4;
    uStack_118 = 0x18;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0x18;
    uStack_e8 = 0x18;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0x14;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_a0 = 8;
    uStack_98 = 0;
    uStack_90 = 0;
    puVar7 = auStack_1c8;
    FUN_1082d10cc(puVar7,uVar19,uVar19 + 0x28);
    if (((ulong)puVar7 & 1) != 0) {
      lVar13 = (long)uStack_1b8._4_4_;
      lVar18 = lVar8;
      if (0xffff < lVar8 + lVar13) {
        func_0x0001082eaf68(param_1,param_2,lVar8,lVar9,param_5,uStack_210);
        uStack_210 = 0;
        lVar18 = 0;
      }
      lVar8 = lVar18 + lVar13;
      if (lStack_220 < lVar8) {
        lVar10 = lStack_220 << 1;
        lVar13 = lStack_220 * 2;
        lStack_220 = lVar8;
        if (lVar8 <= lVar13) {
          lStack_220 = lVar10;
        }
        if ((ulong)(lStack_220 * lVar9) >> 0x1f != 0) goto LAB_1082eab70;
        FUN_1084107a4();
      }
      uVar1 = uStack_210 + (long)(int)uStack_120._4_4_;
      if ((long)uVar16 < (long)uVar1) {
        uVar11 = uVar16 << 1;
        lVar13 = uVar16 * 2;
        uVar16 = uVar1;
        if ((long)uVar1 <= lVar13) {
          uVar16 = uVar11;
        }
        if ((uVar16 >> 0x1e & 0x1ffffffff) != 0) {
LAB_1082eab70:
          _free(lVar5);
          _free(lVar6);
          func_0x0001082eaf8c();
          return;
        }
        FUN_1084107a4(lVar6,uVar16 << 1);
      }
      uStack_1e8 = 0;
      uStack_1f0 = 0x3f800000;
      uStack_1d8 = 0;
      uStack_1e0 = 0x3f800000;
      uStack_1d0 = 0x103f800000;
      if ((*(byte *)(param_1 + 0xa1) >> 2 & 1) == 0) {
        puVar20 = (undefined8 *)0x0;
      }
      else {
        uVar11 = uVar19;
        FUN_10818cfd0(uVar19,&uStack_1f0);
        if ((uVar11 & 1) == 0) {
          uStack_1e8 = uRam0000000113254e28;
          uStack_1f0 = uRam0000000113254e20;
          uStack_1d8 = uRam0000000113254e38;
          uStack_1e0 = uRam0000000113254e30;
          uStack_1d0 = uRam0000000113254e40;
        }
        puVar20 = &uStack_1f0;
      }
      func_0x0001082e70b0(&uStack_204,uVar19 + 0x38,*(undefined1 *)(param_1 + 0xb0));
      lVar10 = 0;
      lVar13 = 0;
      puVar14 = (undefined8 *)(lVar5 + lVar18 * lVar9);
      while( true ) {
        lVar12 = (long)uStack_1b8._4_4_;
        if (lVar12 <= lVar13) break;
        if (puVar20 != (undefined8 *)0x0) {
          FUN_1083645e0(puVar20,&uStack_78,lStack_1c0 + lVar10,1);
          lVar12 = (long)uStack_1b8._4_4_;
        }
        if (lVar12 <= lVar13) goto LAB_1082eaba4;
        *puVar14 = *(undefined8 *)(lStack_1c0 + lVar13 * 8);
        *(undefined4 *)(puVar14 + 1) = uStack_204;
        if (cStack_1f4 == '\x01') {
          *(undefined8 *)((long)puVar14 + 0xc) = uStack_200;
          *(undefined4 *)((long)puVar14 + 0x14) = uStack_1f8;
          puVar14 = puVar14 + 3;
        }
        else {
          puVar14 = (undefined8 *)((long)puVar14 + 0xc);
        }
        uStack_80 = uStack_74;
        uStack_88 = (uint)(puVar20 != (undefined8 *)0x0);
        puVar15 = puVar14;
        if (puVar20 != (undefined8 *)0x0) {
          puVar15 = puVar14 + 1;
          *puVar14 = CONCAT44(uStack_74,uStack_78);
        }
        if (uStack_1a0._4_4_ <= lVar13) goto LAB_1082eaba4;
        puVar14 = (undefined8 *)((long)puVar15 + 4);
        *(undefined4 *)puVar15 = *(undefined4 *)(lStack_1a8 + lVar13 * 4);
        lVar13 = lVar13 + 1;
        lVar10 = lVar10 + 8;
      }
      lVar13 = uStack_210 << 1;
      psVar3 = psStack_128;
      for (uVar19 = (ulong)(uStack_120._4_4_ & ((int)uStack_120._4_4_ >> 0x1f ^ 0xffffffffU));
          uStack_210 = uVar1, uVar19 != 0; uVar19 = uVar19 - 1) {
        *(short *)(lVar6 + lVar13) = *psVar3 + (short)lVar18;
        lVar13 = lVar13 + 2;
        psVar3 = psVar3 + 2;
      }
    }
    func_0x0001082eaf8c();
    uVar17 = uVar17 + 1;
  } while( true );
}



/* Entry: 1082eabc4; end: 1082eac13;  */

undefined8 * FUN_1082eabc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  func_0x000108376b14(param_1 + 5,param_2 + 5);
  uVar2 = param_2[8];
  uVar1 = param_2[7];
  uVar3 = *(undefined8 *)((long)param_2 + 0x45);
  *(undefined8 *)((long)param_1 + 0x4d) = *(undefined8 *)((long)param_2 + 0x4d);
  *(undefined8 *)((long)param_1 + 0x45) = uVar3;
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  return param_1;
}



/* Entry: 1082eac14; end: 1082eac5b;  */

void FUN_1082eac14(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((int)((uint)param_1 ^ 0x7fffffff) < (int)param_2) {
    func_0x00010bdb1a68();
    if (*(int *)(param_1 + 1) != 0) {
      _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) * 0x58);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      _free(*param_1);
    }
    param_3 = param_3 / 0x58;
    if (0x7ffffffe < param_3) {
      param_3 = 0x7fffffff;
    }
    *param_1 = param_2;
    *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
    return;
  }
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x58;
  FUN_10840fe24(0x3ff8000000000000,&uStack_20,(int)param_2 + (uint)param_1);
  return;
}



/* Entry: 1082eac5c; end: 1082eaccf;  */

void FUN_1082eac5c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) * 0x58);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 / 0x58;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1082eacd0; end: 1082eacd7;  */

/* WARNING: Removing unreachable block (ram,0x00010841082c) */

undefined8 FUN_1082eacd0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _malloc();
  FUN_1084107ec(param_1,uVar1);
  return uVar1;
}



/* Entry: 1082eacd8; end: 1082eae57;  */

void FUN_1082eacd8(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined1 auStack_6c [4];
  undefined8 uStack_68;
  undefined1 auStack_5c [4];
  undefined8 uStack_58;
  
  if (((int)param_3 != 0) && ((int)param_6 != 0)) {
    uStack_58 = 0;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x18))(param_2,param_4,param_3,&uStack_58,auStack_5c);
    if (plVar1 == (long *)0x0) {
      FUN_10841076c(&UNK_10f488006);
    }
    else {
      _memcpy();
      uStack_68 = 0;
      plVar1 = param_2;
      (**(code **)(*param_2 + 0x20))(param_2,param_6,&uStack_68,auStack_6c);
      if (plVar1 == (long *)0x0) {
        FUN_10841076c(&UNK_10f488023);
      }
      else {
        _memcpy();
        FUN_1082e91fc();
        uStack_88 = uStack_58;
        uStack_80 = uStack_68;
        uStack_68 = 0;
        uStack_58 = 0;
        plStack_78 = param_2;
        FUN_1082e6d44();
        FUN_1082647e4(&uStack_88);
        FUN_1082647e4(&uStack_80);
        FUN_1082eae58(param_1 + 0xb8,&plStack_78);
      }
      FUN_1082647e4(&uStack_68);
    }
    FUN_1082647e4(&uStack_58);
  }
  return;
}



/* Entry: 1082eae58; end: 1082eaf47;  */

void FUN_1082eae58(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  
  func_0x0001082eae98();
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x14) * 8 + -8) = *param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082eae98);
  (*pcVar1)();
}



/* Entry: 1082eaf48; end: 1082eafa7;  */

void FUN_1082eaf48(void)

{
  return;
}



/* Entry: 1082eafa8; end: 1082eb027;  */

void FUN_1082eafa8(long param_1,undefined8 param_2)

{
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  undefined1 uStack_25;
  undefined4 uStack_24;
  
  uStack_24 = 3;
  uStack_25 = 0x10;
  FUN_1082eb028(param_2,&UNK_10f48819f,&uStack_24,&uStack_25);
  if ((*(byte *)(param_1 + 0xc) >> 1 & 1) != 0) {
    uStack_2c = 1;
    uStack_2d = 0xe;
    func_0x0001082eb098(param_2,&UNK_10f4881a9,&uStack_2c,&uStack_2d);
  }
  return;
}



/* Entry: 1082eb028; end: 1082eb107;  */

long FUN_1082eb028(long param_1)

{
  char in_NG;
  char in_OV;
  int extraout_w8;
  int extraout_w8_00;
  int iVar1;
  long *unaff_x19;
  long lVar2;
  
  func_0x0001082eb4cc();
  if (in_NG == in_OV) {
    func_0x0001082eb4a8();
    lVar2 = param_1 + (long)(int)unaff_x19[1] * 0x18;
    func_0x0001082eb480(param_1);
    func_0x0001082eb4e8();
    iVar1 = (int)unaff_x19[1];
  }
  else {
    lVar2 = *unaff_x19 + (long)extraout_w8 * 0x18;
    func_0x0001082eb480();
    *(undefined4 *)(lVar2 + 0x10) = 1;
    iVar1 = extraout_w8_00;
  }
  *(int *)(unaff_x19 + 1) = iVar1 + 1;
  return lVar2;
}



/* Entry: 1082eb108; end: 1082eb1af;  */

void FUN_1082eb108(long param_1,long *param_2,short *param_3)

{
  uint uVar1;
  int *piVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  float *pfVar4;
  
  uVar1 = ~(int)*param_3;
  if ((char)param_3[10] == '\0') {
    uVar1 = (int)*param_3 + 1;
  }
  *(float *)*param_2 = (float)(int)uVar1;
  plVar3 = param_2;
  func_0x0001082eb4f8();
  *(float *)(extraout_x8 + 4) = (float)(int)param_3[1];
  func_0x0001082eb4f8();
  piVar2 = (int *)(param_3 + 2);
  *(float *)(extraout_x8_00 + 4) = (float)*piVar2;
  func_0x0001082eb4f8();
  *(float *)(extraout_x8_01 + 4) = (float)piVar2[1];
  *plVar3 = *plVar3 + 4;
  uVar1 = *(uint *)(param_1 + 0xc);
  func_0x00010821a0c0();
  if ((uVar1 >> 1 & 1) != 0) {
    pfVar4 = (float *)*param_2;
    *pfVar4 = (float)(int)piVar2;
    pfVar4[1] = (float)(int)((ulong)piVar2 >> 0x20);
    *param_2 = *param_2 + 8;
  }
  return;
}



/* Entry: 1082eb1b0; end: 1082eb35f;  */

void FUN_1082eb1b0(long param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  auStack_48[0] = 0xe;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_34 = 0;
  FUN_1082dd868(param_2[2],&UNK_10f4881b5,auStack_48,0);
  uVar2 = param_2[3];
  func_0x00010828bb5c(uVar2,0,1,0xe,&UNK_10f4881c0,auStack_50);
  *param_4 = (int)uVar2;
  FUN_10828bae8(*param_2,&UNK_10f4881cd);
  if ((*(byte *)(param_1 + 0xc) >> 1 & 1) == 0) {
    func_0x0001082eb498();
    func_0x0001082eb508();
    func_0x0001082eb498();
    func_0x0001082eb510();
    func_0x0001082eb498();
  }
  else {
    auStack_68[0] = 0x10;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_54 = 0;
    FUN_1082dd868(param_2[2],&UNK_10f4882d2,auStack_68,1);
    FUN_10828bae8(*param_2,&UNK_10f4882de);
    func_0x0001082eb498();
    func_0x0001082eb508();
    func_0x0001082eb498();
    func_0x0001082eb510();
    func_0x0001082eb498();
  }
  func_0x0001082eb508();
  puVar1 = &UNK_10f488441;
  if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
    puVar1 = &UNK_10f488426;
  }
  FUN_10828bae8((long)param_2[1] + *(long *)(*(long *)param_2[1] + -0x18),puVar1);
  return;
}



/* Entry: 1082eb360; end: 1082eb3af;  */

void FUN_1082eb360(undefined8 *param_1,long *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1082b1dfc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001082eb3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x40))
            (1.0 / (float)(int)uVar1,1.0 / (float)(int)((ulong)uVar1 >> 0x20),param_2,*param_3);
  return;
}



/* Entry: 1082eb3b0; end: 1082eb3d3;  */

void FUN_1082eb3b0(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)(*(uint *)(param_1 + 1) ^ 0x7fffffff) < (int)param_2) {
    func_0x00010bdb1a68();
    pcStack_18 = FUN_1082eb3d4;
    puStack_20 = &stack0xfffffffffffffff0;
    if (*(int *)(param_1 + 1) != 0) {
      puStack_20 = &stack0xfffffffffffffff0;
      _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) * 0x18);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      _free(*param_1);
    }
    param_3 = param_3 / 0x18;
    if (0x7ffffffe < param_3) {
      param_3 = 0x7fffffff;
    }
    *param_1 = param_2;
    *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
    return;
  }
  pcStack_18 = (code *)0x7fffffff;
  puStack_20 = (undefined1 *)0x18;
  FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + (int)param_2);
  return;
}



/* Entry: 1082eb3d4; end: 1082eb44f;  */

void FUN_1082eb3d4(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) * 0x18);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 / 0x18;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1082eb450; end: 1082eb47f;  */

void FUN_1082eb450(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x18;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1082eb480; end: 1082eb51b;  */

void FUN_1082eb480(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 unaff_x20;
  undefined1 *unaff_x21;
  undefined4 *unaff_x22;
  undefined8 *unaff_x23;
  
  uVar1 = *unaff_x22;
  uVar2 = *unaff_x21;
  *unaff_x23 = unaff_x20;
  *(undefined4 *)(unaff_x23 + 1) = uVar1;
  *(undefined1 *)((long)unaff_x23 + 0xc) = uVar2;
  return;
}



/* Entry: 1082eb51c; end: 1082eb60f;  */

long * FUN_1082eb51c(long *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *plVar4;
  undefined1 auStack_98 [88];
  char cStack_40;
  undefined8 uStack_28;
  
  func_0x0001082ecdc8();
  uStack_28 = extraout_x8;
  if (*(int *)(param_1[2] + 0xc) == 0) {
    plVar4 = (long *)0x0;
    goto LAB_1082eb5cc;
  }
  plVar4 = *(long **)(param_1[2] + 0xb8);
  FUN_10828a818(auStack_98,plVar4,1,1);
  (**(code **)(*param_1 + 0x18))();
  bVar1 = param_1 == (long *)0x0;
  param_1 = (long *)0x0;
  if (bVar1) {
LAB_1082eb5b0:
    plVar4 = (long *)0x0;
  }
  else {
    param_1 = plVar4;
    (**(code **)(*plVar4 + 0x30))(plVar4,auStack_98);
    iVar2 = (int)param_1;
    if (*(int *)((long)plVar4 + 0x44) <= (int)param_1) {
      iVar2 = *(int *)((long)plVar4 + 0x44);
    }
    if (iVar2 < 2) goto LAB_1082eb5b0;
    plVar4 = (long *)(ulong)((plVar4[3] & 0xc000000200U) == 0x200);
  }
  in_ZR = cStack_40 == '\x01';
  if ((bool)in_ZR) {
    func_0x0001082ecde4();
  }
LAB_1082eb5cc:
  func_0x0001082ecdb4(uStack_28);
  if ((bool)in_ZR) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x0001082ecda0();
  plVar4 = param_1;
  FUN_1082eb51c();
  if ((int)plVar4 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)0x68;
    __Znwm();
    (**(code **)(*param_1 + 0x18))(param_1);
    plVar4 = plVar3;
    FUN_1082eb67c(plVar3,param_1);
  }
  *extraout_x8_00 = (long)plVar3;
  return plVar4;
}



/* Entry: 1082eb610; end: 1082eb67b;  */

void FUN_1082eb610(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = param_2;
  FUN_1082eb51c();
  if ((int)plVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x68;
    __Znwm();
    (**(code **)(*param_2 + 0x18))(param_2);
    FUN_1082eb67c(uVar2,param_2);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1082eb67c; end: 1082eb76f;  */

void FUN_1082eb67c(undefined8 *param_1,long param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &PTR_DAT_110a39600;
  param_1[2] = &PTR_DAT_110a39658;
  param_1[9] = param_1 + 5;
  param_1[10] = 0x800000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  fVar2 = (float)NEON_fminnm((float)*(int *)(*(long *)(*(long *)(param_2 + 0x10) + 0xb8) + 0x34),
                             0x45000000);
  fVar2 = (float)(1 << (ulong)(-(int)LZCOUNT((uint)(int)fVar2 >> 1) & 0x1f));
  uVar3 = NEON_fminnm(fVar2,0x44800000);
  *(float *)(param_1 + 3) = fVar2;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
  iVar1 = (int)fVar2;
  if (0x1ff < iVar1) {
    iVar1 = 0x200;
  }
  *(int *)(param_1 + 4) = 1 << (ulong)(-(int)LZCOUNT(iVar1 + -1) & 0x1f);
  return;
}



/* Entry: 1082eb770; end: 1082ebce3;  */

undefined8
FUN_1082eb770(long param_1,long param_2,undefined8 *param_3,long param_4,undefined8 param_5,
             int *param_6,uint *param_7,undefined1 *param_8,long param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long **pplVar16;
  undefined8 *puVar17;
  int iVar18;
  int *piVar19;
  uint *puVar20;
  long lVar21;
  int iStack_104;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  uint uStack_90;
  long alStack_80 [2];
  
  func_0x00010812f1a8(param_5,param_6);
  iStack_104 = param_6[2] - *param_6;
  iVar18 = param_6[3] - param_6[1];
  if (1 << (ulong)(-(int)LZCOUNT(iStack_104 + -1) & 0x1f) ==
      1 << (ulong)(-(int)LZCOUNT(iVar18 + -1) & 0x1f)) {
    bVar9 = SBORROW4(iStack_104,iVar18);
    iVar3 = iStack_104 - iVar18;
  }
  else {
    bVar9 = SBORROW4(iVar18,iStack_104);
    iVar3 = iVar18 - iStack_104;
  }
  *param_8 = iStack_104 != iVar18 && iVar3 < 0 == bVar9;
  iVar7 = iVar18;
  if (iStack_104 != iVar18 && iVar3 < 0 == bVar9) {
    iVar7 = iStack_104;
    iStack_104 = iVar18;
  }
  if ((*(byte *)(param_4 + 0xe) >> 2 & 1) == 0) {
    lVar21 = param_4;
    func_0x0001083772e0();
    uStack_d0 = (undefined4)lVar21;
    uStack_c4 = (undefined4)param_3[1];
    uStack_c0 = (undefined4)((ulong)param_3[1] >> 0x20);
    uStack_cc = (undefined4)*param_3;
    uStack_c8 = (undefined4)((ulong)*param_3 >> 0x20);
    uStack_bc = (undefined4)param_3[2];
    uStack_b8 = (undefined4)((ulong)param_3[2] >> 0x20);
    lVar21 = param_4;
    func_0x0001082eb764();
    uStack_b4 = (undefined4)lVar21;
    uVar10 = (uint)&uStack_d0;
    FUN_1082ec87c();
    uVar5 = *(uint *)(param_1 + 0x5c);
    uVar1 = uVar5 - 1 & uVar10;
    for (uVar2 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU); uVar2 != 0; uVar2 = uVar2 - 1) {
      puVar20 = (uint *)(*(long *)(param_1 + 0x60) + (long)(int)uVar1 * 0x28);
      if (*puVar20 == 0) break;
      if (uVar10 == *puVar20) {
        puVar11 = &uStack_d0;
        func_0x0001082ec8a0(puVar11,puVar20 + 1);
        if (((ulong)puVar11 & 1) != 0) {
          *param_7 = puVar20[9];
          return 1;
        }
      }
      uVar4 = 0;
      if ((int)uVar1 < 1) {
        uVar4 = uVar5;
      }
      uVar1 = (uVar1 + uVar4) - 1;
    }
  }
  if (*(int *)(param_1 + 0x50) == 0) {
LAB_1082eb988:
    lVar21 = 0;
  }
  else {
    uVar12 = *(ulong *)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x50) * 8 + -8);
    FUN_1082ecf88(uVar12,param_3,param_4,*(undefined8 *)param_6,iStack_104,iVar7,*param_8,param_7);
    if ((uVar12 & 1) != 0) goto LAB_1082ebb4c;
    if (*(int *)(param_1 + 0x50) == 0) goto LAB_1082eb988;
    lVar21 = *(long *)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x50) * 8 + -8);
    if ((lVar21 != 0) && (plVar13 = *(long **)(param_9 + 0x18), plVar13 != (long *)0x0)) {
      plStack_b0 = *(long **)(*(long *)(lVar21 + 0x8e8) + 0x260);
      if (plStack_b0 != (long *)0x0) {
        plStack_b0 = (long *)((long)plStack_b0 + *(long *)(*plStack_b0 + -0x18));
      }
      (**(code **)(*plVar13 + 0x30))(plVar13,&plStack_b0);
      if (((ulong)plVar13 & 1) != 0) {
        return 0;
      }
    }
  }
  lVar14 = 0x270;
  __Znwm();
  FUN_108295020();
  FUN_1082c39c4(&plStack_e0);
  plVar13 = (long *)0xe40;
  __Znwm();
  plStack_b0 = plStack_e0;
  plStack_e0 = (long *)0x0;
  alStack_80[0] = lVar14;
  FUN_1082ece90();
  plStack_d8 = plVar13;
  if (alStack_80[0] != 0) {
    func_0x0001082ecd7c();
  }
  func_0x0001082ec844(plStack_b0);
  func_0x0001082ec844(plStack_e0);
  uVar15 = *(undefined8 *)(param_2 + 0x40);
  if (plStack_d8 != (long *)0x0) {
    plVar13 = plStack_d8 + 1;
    do {
      cVar6 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar9) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plStack_e8 = plStack_d8;
  FUN_108293574(uVar15,&plStack_e8,lVar21);
  FUN_10828ea04(&plStack_e8);
  FUN_1082ecf88(plStack_d8,param_3,param_4,*(undefined8 *)param_6,iStack_104,iVar7,*param_8,param_7)
  ;
  plVar13 = plStack_d8;
  iVar18 = *(int *)(param_1 + 0x50);
  if (iVar18 < (int)(*(uint *)(param_1 + 0x54) >> 1)) {
    plStack_d8 = (long *)0x0;
    *(long **)(*(long *)(param_1 + 0x48) + (long)iVar18 * 8) = plVar13;
  }
  else {
    if (iVar18 == 0x7fffffff) {
      func_0x00010bdb1a68();
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1082ebc58);
      (*pcVar8)();
    }
    uStack_a8 = 0x7fffffff;
    plStack_b0 = (long *)0x8;
    pplVar16 = &plStack_b0;
    uVar12 = (ulong)(iVar18 + 1);
    FUN_10840fe24(0x3ff8000000000000);
    plVar13 = plStack_d8;
    iVar18 = *(int *)(param_1 + 0x50);
    plStack_d8 = (long *)0x0;
    pplVar16[iVar18] = plVar13;
    if (iVar18 != 0) {
      _memcpy(pplVar16,*(undefined8 *)(param_1 + 0x48),(long)iVar18 << 3);
    }
    if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
      _free(*(undefined8 *)(param_1 + 0x48));
    }
    uVar12 = uVar12 >> 3;
    if (0x7ffffffe < uVar12) {
      uVar12 = 0x7fffffff;
    }
    *(long ***)(param_1 + 0x48) = pplVar16;
    *(uint *)(param_1 + 0x54) = (int)uVar12 << 1 | 1;
    iVar18 = *(int *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x50) = iVar18 + 1;
  FUN_1082ec90c(param_1 + 0x58);
  FUN_1082ec8c0(&plStack_d8);
LAB_1082ebb4c:
  if ((*(byte *)(param_4 + 0xe) >> 2 & 1) == 0) {
    piVar19 = (int *)(param_1 + 0x58);
    uVar10 = *(uint *)(param_1 + 0x5c);
    uStack_a8 = CONCAT44(uStack_c4,uStack_c8);
    plStack_b0 = (long *)CONCAT44(uStack_cc,uStack_d0);
    uStack_98 = CONCAT44(uStack_b4,uStack_b8);
    uStack_a0 = CONCAT44(uStack_bc,uStack_c0);
    uStack_90 = *param_7;
    if ((int)(uVar10 * 3) <= *piVar19 * 4) {
      uVar1 = uVar10 << 1;
      if ((int)uVar10 < 1) {
        uVar1 = 4;
      }
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(uint *)(param_1 + 0x5c) = uVar1;
      plVar13 = (long *)(param_1 + 0x60);
      lVar21 = *plVar13;
      *plVar13 = 0;
      puVar17 = (undefined8 *)((ulong)uVar1 * 0x28 + 0x10);
      alStack_80[0] = lVar21;
      __Znam();
      *puVar17 = 0x28;
      puVar17[1] = (ulong)uVar1;
      if (uVar1 != 0) {
        lVar14 = (ulong)uVar1 * 0x28;
        puVar17 = puVar17 + 2;
        do {
          *(undefined4 *)puVar17 = 0;
          lVar14 = lVar14 + -0x28;
          puVar17 = puVar17 + 5;
        } while (lVar14 != 0);
      }
      FUN_1082ec95c(plVar13);
      lVar21 = lVar21 + 4;
      for (uVar12 = (ulong)(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)); uVar12 != 0;
          uVar12 = uVar12 - 1) {
        if (*(int *)(lVar21 + -4) != 0) {
          FUN_1082ec974(piVar19,lVar21);
        }
        lVar21 = lVar21 + 0x28;
      }
      FUN_1082ec754(alStack_80);
    }
    FUN_1082ec974(piVar19,&plStack_b0);
  }
  return 1;
}



/* Entry: 1082ebce4; end: 1082ebda7;  */

void FUN_1082ebce4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar2 = (int)*(undefined8 *)(param_6 + 0x20) + 0x40;
  FUN_10828786c();
  if ((iVar2 != 0) && (*(int *)(param_6 + 0x38) != 0)) {
    if (*(char *)(*(long *)(param_6 + 8) + 8) != '\x01') {
      uVar3 = *(ulong *)(param_6 + 0x20);
      func_0x0001082e4e70();
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    if (*(long *)(*(long *)(param_6 + 0x20) + 0x50) == 0) {
      uVar3 = *(ulong *)(param_6 + 0x18);
      FUN_10828e338();
      if ((uVar3 & 1) == 0) {
        uVar1 = *(undefined8 *)(param_6 + 0x18);
        FUN_1082d8588(*(undefined8 *)(param_6 + 0x20));
        uStack_50 = param_1;
        uStack_4c = param_2;
        uStack_48 = param_3;
        uStack_44 = param_4;
        func_0x0001082ece58(uVar1,&uStack_50);
        uStack_40 = param_1;
        uStack_3c = param_2;
        uStack_38 = param_3;
        uStack_34 = param_4;
        func_0x0001082eb718(*(undefined4 *)(param_5 + 0x1c),&uStack_40,
                            *(undefined4 *)(param_6 + 0x38));
      }
    }
  }
  return;
}



/* Entry: 1082ebda8; end: 1082ec1e7;  */

undefined8
FUN_1082ebda8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             long param_5,long *param_6)

{
  code *pcVar1;
  undefined1 in_ZR;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 extraout_x8;
  long lVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined2 uStack_d4;
  long *plStack_d0;
  long lStack_c8;
  byte bStack_bd;
  undefined4 uStack_bc;
  long *plStack_b8;
  long lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  byte bStack_8a;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001082ecdc8();
  uStack_58 = extraout_x8;
  FUN_108376ad8(&uStack_98);
  FUN_108287e50(param_6[7],&uStack_98);
  lVar6 = param_6[6];
  FUN_1082d8588(param_6[7]);
  uStack_78 = CONCAT44(param_2,param_1);
  uVar14 = SUB84(&uStack_78,0);
  uStack_70 = param_3;
  uStack_6c = param_4;
  func_0x0001082ece58(lVar6);
  plVar3 = (long *)param_6[4];
  uStack_a8 = param_1;
  uStack_a4 = param_2;
  uStack_a0 = param_3;
  uStack_9c = param_4;
  (**(code **)(*plVar3 + 0x10))();
  uVar13 = SUB84(plVar3,0);
  uVar12 = uStack_a0;
  FUN_1082ec1e8(CONCAT44(uStack_a4,uStack_a8));
  if (((ulong)plVar3 & 1) == 0) {
    if ((bStack_8a >> 1 & 1) != 0) {
      FUN_1082c0440(param_6[3],param_6[4],param_6[1],param_6[6]);
    }
  }
  else {
    plStack_b8 = (long *)0x0;
    lStack_b0 = 0;
    lVar6 = *param_6;
    uStack_60 = 0;
    FUN_1082eb770(param_5,lVar6,param_6[6],&uStack_98,&uStack_a8,&plStack_b8,&uStack_bc,&bStack_bd,
                  &uStack_78);
    FUN_1082eca58(&uStack_78);
    lVar8 = param_6[7];
    if (*(char *)(lVar8 + 0x38) == '\x04') {
      if ((*(byte *)(lVar8 + 0xe) >> 1 & 1) != 0) goto LAB_1082ebe84;
LAB_1082ebec8:
      lStack_c8 = lStack_b0;
      plStack_d0 = plStack_b8;
    }
    else {
      if (*(char *)(lVar8 + 0x3b) != '\x01') goto LAB_1082ebec8;
LAB_1082ebe84:
      plVar3 = (long *)param_6[4];
      if (plVar3 == (long *)0x0) {
        lVar6 = *(long *)(param_6[3] + 0x10);
        FUN_1082b1dfc();
        plStack_d0 = (long *)0x0;
        lStack_c8 = lVar6;
      }
      else {
        (**(code **)(*plVar3 + 0x10))();
        plStack_d0 = plVar3;
        lStack_c8 = lVar6;
      }
    }
    plVar3 = (long *)param_6[3];
    uVar10 = *(undefined8 *)(*(long *)(plVar3[1] + 0x10) + 0xb8);
    FUN_1082c225c();
    if (*(int *)(param_5 + 0x50) == 0) goto LAB_1082ec118;
    puVar11 = (undefined4 *)param_6[6];
    lVar8 = param_6[1];
    FUN_10829537c(&uStack_e0,
                  *(undefined8 *)
                   (*(long *)(*(long *)(param_5 + 0x48) + (long)*(int *)(param_5 + 0x50) * 8 + -8) +
                   0x8e8),uVar10);
    lVar6 = param_6[7];
    if (*(char *)(lVar6 + 0x38) == '\x04') {
      bVar9 = *(byte *)(lVar6 + 0xe) >> 1 & 1;
    }
    else {
      bVar9 = *(byte *)(lVar6 + 0x3b);
    }
    puVar4 = (undefined8 *)0x98;
    __Znwm();
    uStack_88 = uStack_e0;
    uStack_e0 = 0;
    uStack_80 = uStack_d8;
    uStack_7c = uStack_d4;
    if ((bRam000000011372a8f8 & 1) == 0) {
      iVar2 = 0x1372a8f8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_1082e6880();
        iRam000000011372a8f0 = iVar2;
        ___cxa_guard_release(0x11372a8f8);
      }
    }
    iVar2 = iRam000000011372a8f0;
    puVar4[2] = 0;
    *(short *)(puVar4 + 3) = (short)iVar2;
    *(undefined8 *)((long)puVar4 + 0x24) = 0;
    *(undefined8 *)((long)puVar4 + 0x1c) = 0;
    *(undefined4 *)((long)puVar4 + 0x2c) = 0;
    *puVar4 = &PTR_DAT_110a39ef0;
    puVar4[1] = 0;
    plVar5 = plVar3;
    func_0x0001081865e0(plVar3,0x58,8);
    uVar10 = uStack_88;
    plVar3[1] = (long)(plVar5 + 0xb);
    plVar5[1] = lStack_c8;
    *plVar5 = (long)plStack_d0;
    *(undefined4 *)(plVar5 + 2) = *puVar11;
    *(undefined4 *)((long)plVar5 + 0x14) = puVar11[3];
    *(undefined4 *)(plVar5 + 3) = puVar11[1];
    *(undefined4 *)((long)plVar5 + 0x1c) = puVar11[4];
    *(undefined4 *)(plVar5 + 4) = puVar11[2];
    *(undefined4 *)((long)plVar5 + 0x24) = puVar11[5];
    lVar6 = *(long *)(lVar8 + 0x1c);
    plVar5[6] = *(long *)(lVar8 + 0x24);
    plVar5[5] = lVar6;
    *(undefined4 *)(plVar5 + 7) = uStack_bc;
    *(long *)((long)plVar5 + 0x44) = lStack_b0;
    *(long **)((long)plVar5 + 0x3c) = plStack_b8;
    *(byte *)((long)plVar5 + 0x4c) = bStack_bd & 1;
    plVar5[10] = 0;
    puVar4[6] = plVar5;
    puVar4[7] = plVar5 + 10;
    uStack_88 = 0;
    uStack_70 = uStack_80;
    uStack_6c = CONCAT22(uStack_6c._2_2_,uStack_7c);
    in_ZR = (bVar9 & 1) == 0;
    uVar7 = 3;
    if ((bool)in_ZR) {
      uVar7 = 0;
    }
    uStack_78 = 0;
    puVar4[8] = uVar10;
    *(undefined2 *)(puVar4 + 9) = uStack_7c;
    *(undefined4 *)((long)puVar4 + 0x4c) = uVar7;
    plVar3 = plStack_b8;
    FUN_1082764bc(&uStack_78);
    uVar7 = SUB84(plVar3,0);
    *(undefined1 *)(puVar4 + 10) = 0;
    *(undefined4 *)((long)puVar4 + 0x54) = 1;
    puVar4[0xe] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    FUN_1082a3af0(puVar4 + 0xf,lVar8);
    FUN_10817500c(&plStack_d0);
    *(undefined4 *)(puVar4 + 4) = uVar7;
    *(undefined4 *)((long)puVar4 + 0x24) = uVar12;
    *(undefined4 *)(puVar4 + 5) = uVar13;
    *(undefined4 *)((long)puVar4 + 0x2c) = uVar14;
    *(undefined2 *)((long)puVar4 + 0x1a) = 1;
    FUN_1082764bc(&uStack_88);
    func_0x0001082ece10();
    uStack_60 = 0;
    puStack_e8 = puVar4;
    FUN_1082c0f08(param_6[3],param_6[4],&puStack_e8,&uStack_78);
    FUN_10827fb18(&uStack_78);
    puVar4 = puStack_e8;
    puStack_e8 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      func_0x0001082ecd7c();
    }
  }
  FUN_10837ca5c(uStack_98);
  func_0x0001082ecdb4(uStack_58);
  if ((bool)in_ZR) {
    return 1;
  }
  ___stack_chk_fail();
LAB_1082ec118:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ec11c);
  (*pcVar1)();
}



/* Entry: 1082ec1e8; end: 1082ec22b;  */

bool FUN_1082ec1e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  fVar2 = (float)((ulong)param_2 >> 0x20);
  fVar1 = (float)((ulong)param_1 >> 0x20);
  uVar3 = CONCAT44(-(uint)(fVar1 < fVar2),-(uint)((float)param_1 < (float)param_2));
  uVar3 = NEON_uminp(uVar3,uVar3,4);
  if ((int)uVar3 != 0) {
    uVar3 = NEON_scvtf(param_4,4);
    uVar3 = CONCAT44(-(uint)(fVar1 < (float)((ulong)uVar3 >> 0x20)),
                     -(uint)((float)param_1 < (float)uVar3));
    uVar3 = NEON_uminp(uVar3,uVar3,4);
    if ((int)uVar3 != 0) {
      uVar3 = NEON_scvtf(param_3,4);
      uVar3 = CONCAT44(-(uint)((float)((ulong)uVar3 >> 0x20) < fVar2),
                       -(uint)((float)uVar3 < (float)param_2));
      uVar3 = NEON_uminp(uVar3,uVar3,4);
      return (int)uVar3 != 0;
    }
  }
  return false;
}



/* Entry: 1082ec22c; end: 1082ec50f;  */

void FUN_1082ec22c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,ulong param_6,long param_7,undefined8 param_8,long *param_9,
                  undefined8 *param_10,ulong param_11,long param_12)

{
  byte bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  ulong uVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 extraout_x8;
  long lVar10;
  undefined4 uVar11;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c4;
  byte bStack_bd;
  undefined1 auStack_bc [2];
  short sStack_ba;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  long lStack_88;
  undefined **ppuStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined ***pppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = param_11;
  func_0x0001082ecdc8();
  iVar8 = (int)uVar3;
  uStack_58 = extraout_x8;
  FUN_10828e338();
  if (iVar8 != 0) goto LAB_1082ec27c;
  lVar10 = param_12;
  func_0x0001083773e0(param_12);
  uVar3 = param_11;
  func_0x0001082ece58(param_11,lVar10);
  uVar7 = CONCAT44(param_5,param_4);
  uStack_a8 = param_2;
  uStack_a4 = param_3;
  uStack_a0 = param_4;
  uStack_9c = param_5;
  FUN_1082ec1e8(CONCAT44(param_3,param_2),uVar7,*param_10,param_10[1]);
  uVar11 = (undefined4)uVar7;
  if ((uVar3 & 1) == 0) {
    bVar1 = *(byte *)(param_12 + 0xe);
    lVar10 = *param_9;
    *param_9 = 0;
    if ((bVar1 >> 1 & 1) == 0) goto LAB_1082ec284;
    *param_1 = 1;
LAB_1082ec288:
    *(long *)(param_1 + 8) = lVar10;
  }
  else {
    plVar4 = *(long **)(param_7 + 0x10);
    (**(code **)(*plVar4 + 0x28))();
    in_ZR = (char)plVar4[1] == '\x01';
    if ((char)plVar4[1] < '\x02') {
      in_ZR = *(char *)(param_7 + 0x60) == '\0';
      uVar9 = 1;
      if (!(bool)in_ZR) {
        uVar9 = 2;
      }
    }
    else {
      uVar9 = 2;
    }
    puVar5 = &uStack_a8;
    func_0x0001082eb718(*(undefined4 *)(param_6 + 0x1c),puVar5,uVar9);
    if (((ulong)puVar5 & 1) == 0) {
LAB_1082ec27c:
      lVar10 = *param_9;
      *param_9 = 0;
LAB_1082ec284:
      *param_1 = 0;
      goto LAB_1082ec288;
    }
    uStack_b8 = 0;
    uStack_b0 = 0;
    ppuStack_80 = &PTR_FUN_110a396d8;
    uStack_78 = (undefined4)param_8;
    uStack_74 = (undefined4)((ulong)param_8 >> 0x20);
    pppuStack_68 = &ppuStack_80;
    uStack_70 = SUB84(param_9,0);
    uStack_6c = (undefined4)((ulong)param_9 >> 0x20);
    uVar3 = param_6;
    FUN_1082eb770(param_6,*(undefined8 *)(param_7 + 8),param_11,param_12,&uStack_a8,&uStack_b8,
                  auStack_bc,&bStack_bd,pppuStack_68);
    FUN_1082eca58(&ppuStack_80);
    if ((uVar3 & 1) == 0) goto LAB_1082ec27c;
    uStack_78 = 0;
    uStack_74 = 0;
    ppuStack_80 = (undefined **)0x3f800000;
    pppuStack_68 = (undefined ***)0x0;
    uStack_70 = 0x3f800000;
    uStack_6c = 0;
    uStack_60 = 0x103f800000;
    if ((bStack_bd & 1) == 0) {
      func_0x0001082ece68((long)sStack_ba);
      FUN_10814bdfc(&ppuStack_80);
    }
    else {
      uVar9 = 0x3f800000;
      func_0x0001082ece68((long)sStack_ba);
      uStack_78 = uVar9;
      ppuStack_80 = (undefined **)0x3f80000000000000;
      uStack_74 = 0x3f800000;
      uStack_70 = 0;
      pppuStack_68 = (undefined ***)((ulong)pppuStack_68 & 0xffffffff);
      uStack_60 = CONCAT44(0x80,(undefined4)uStack_60);
      uStack_6c = uVar11;
    }
    puVar6 = &uStack_b8;
    func_0x000108219544(puVar6,param_10);
    in_ZR = (int)puVar6 == 0;
    if (*(int *)(param_6 + 0x50) == 0) goto LAB_1082ec4c4;
    FUN_10829537c(&uStack_d0,
                  *(undefined8 *)
                   (*(long *)(*(long *)(param_6 + 0x48) + (long)*(int *)(param_6 + 0x50) * 8 + -8) +
                   0x8e8),*(undefined8 *)(*(long *)(*(long *)(param_7 + 8) + 0x10) + 0xb8));
    uVar7 = 0x50;
    FUN_1082a37b0();
    uStack_98 = uStack_d0;
    lStack_88 = *param_9;
    *param_9 = 0;
    uStack_d0 = 0;
    uStack_90 = uStack_c8;
    uStack_8c = uStack_c4;
    FUN_1082c9020();
    FUN_1082764bc(&uStack_98);
    if (lStack_88 != 0) {
      func_0x0001082ecd7c();
    }
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = uVar7;
    func_0x0001082ece10();
  }
  func_0x0001082ecdb4(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1082ec4c4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082ec4c8);
  (*pcVar2)();
}



/* Entry: 1082ec510; end: 1082ec6b7;  */

uint FUN_1082ec510(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long **pplVar11;
  long lVar12;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar9 = 1;
LAB_1082ec670:
    return uVar9 & 1;
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    uStack_48 = 0;
    uVar5 = *(ulong *)(**(long **)(param_1 + 0x48) + 0x8e8);
    FUN_1082ec6b8(uVar5,param_2,&uStack_48);
    uVar9 = (uint)uVar5;
    FUN_108283764(&uStack_48);
    if (0 < *(int *)(param_1 + 0x50)) {
      plVar7 = *(long **)(*(long *)(**(long **)(param_1 + 0x48) + 0x8e8) + 0x260);
      plVar7 = *(long **)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0x10);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar7 + 0x58))();
      }
      for (lVar12 = 1;
          ((uVar5 & 1) != 0 && (uVar9 = (uint)uVar5, lVar12 < *(int *)(param_1 + 0x50)));
          lVar12 = lVar12 + 1) {
        lVar10 = *(long *)(*(long *)(param_1 + 0x48) + lVar12 * 8);
        plVar8 = *(long **)(*(long *)(lVar10 + 0x8e8) + 0x260);
        lVar6 = (long)plVar8 + *(long *)(*plVar8 + -0x18);
        FUN_1082b1dfc();
        if (lVar6 == *(long *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0xb0)) {
          piVar1 = (int *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar5 = *(ulong *)(lVar10 + 0x8e8);
          pplVar11 = &plStack_50;
          plStack_50 = plVar7;
          FUN_1082ec6b8(uVar5,param_2,&plStack_50);
        }
        else {
          plStack_58 = (long *)0x0;
          uVar5 = *(ulong *)(lVar10 + 0x8e8);
          pplVar11 = &plStack_58;
          FUN_1082ec6b8(uVar5,param_2,&plStack_58);
        }
        uVar9 = (uint)uVar5;
        FUN_108283764(pplVar11);
      }
      FUN_1082ec7f8(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x50) = 0;
      FUN_1082ec90c(param_1 + 0x58);
      goto LAB_1082ec670;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1082ec690);
  (*pcVar4)();
}



/* Entry: 1082ec6b8; end: 1082ec70b;  */

undefined8 FUN_1082ec6b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_28;
  
  uStack_28 = *param_3;
  *param_3 = 0;
  func_0x000108295660(param_1,param_2,&uStack_28);
  FUN_108283764(&uStack_28);
  return param_1;
}



/* Entry: 1082ec70c; end: 1082ec717;  */

uint FUN_1082ec70c(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long **pplVar11;
  long lVar12;
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar9 = 1;
LAB_1082ec670:
    return uVar9 & 1;
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    uStack_48 = 0;
    uVar5 = *(ulong *)(**(long **)(param_1 + 0x38) + 0x8e8);
    FUN_1082ec6b8(uVar5,param_2,&uStack_48);
    uVar9 = (uint)uVar5;
    FUN_108283764(&uStack_48);
    if (0 < *(int *)(param_1 + 0x40)) {
      plVar7 = *(long **)(*(long *)(**(long **)(param_1 + 0x38) + 0x8e8) + 0x260);
      plVar7 = *(long **)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0x10);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        (**(code **)(*plVar7 + 0x58))();
      }
      for (lVar12 = 1;
          ((uVar5 & 1) != 0 && (uVar9 = (uint)uVar5, lVar12 < *(int *)(param_1 + 0x40)));
          lVar12 = lVar12 + 1) {
        lVar10 = *(long *)(*(long *)(param_1 + 0x38) + lVar12 * 8);
        plVar8 = *(long **)(*(long *)(lVar10 + 0x8e8) + 0x260);
        lVar6 = (long)plVar8 + *(long *)(*plVar8 + -0x18);
        FUN_1082b1dfc();
        if (lVar6 == *(long *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 0xb0)) {
          piVar1 = (int *)((long)plVar7 + *(long *)(*plVar7 + -0x18) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          uVar5 = *(ulong *)(lVar10 + 0x8e8);
          pplVar11 = &plStack_50;
          plStack_50 = plVar7;
          FUN_1082ec6b8(uVar5,param_2,&plStack_50);
        }
        else {
          plStack_58 = (long *)0x0;
          uVar5 = *(ulong *)(lVar10 + 0x8e8);
          pplVar11 = &plStack_58;
          FUN_1082ec6b8(uVar5,param_2,&plStack_58);
        }
        uVar9 = (uint)uVar5;
        FUN_108283764(pplVar11);
      }
      FUN_1082ec7f8(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x40) = 0;
      FUN_1082ec90c(param_1 + 0x48);
      goto LAB_1082ec670;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1082ec690);
  (*pcVar4)();
}



/* Entry: 1082ec718; end: 1082ec72b;  */

void FUN_1082ec718(void)

{
  FUN_1082ec850();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082ec72c; end: 1082ec753;  */

undefined * FUN_1082ec72c(void)

{
  return &UNK_10f488456;
}



/* Entry: 1082ec754; end: 1082ec777;  */

undefined8 FUN_1082ec754(undefined8 param_1)

{
  FUN_1082ec778(param_1,0);
  return param_1;
}



/* Entry: 1082ec778; end: 1082ec7c3;  */

void FUN_1082ec778(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x28;
      do {
        if (*(int *)(lVar1 + -0x28 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x28 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x28;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1082ec7c4; end: 1082ec7f7;  */

undefined8 * FUN_1082ec7c4(undefined8 *param_1)

{
  FUN_1082ec7f8();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 1082ec7f8; end: 1082ec82f;  */

void FUN_1082ec7f8(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      FUN_1082ec8c0();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 1082ec830; end: 1082ec84f;  */

uint FUN_1082ec830(uint param_1)

{
  code *pcVar1;
  
  if (param_1 < 4) {
    return param_1 & 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ec844);
  (*pcVar1)();
}



/* Entry: 1082ec850; end: 1082ec87b;  */

long FUN_1082ec850(long param_1)

{
  FUN_1082ec754(param_1 + 0x60);
  FUN_1082ec7c4(param_1 + 0x48);
  return param_1;
}



/* Entry: 1082ec87c; end: 1082ec8bf;  */

uint FUN_1082ec87c(undefined8 param_1)

{
  uint uVar1;
  
  FUN_108343308(param_1,0x20,0);
  uVar1 = (uint)param_1;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1082ec8c0; end: 1082ec90b;  */

long * FUN_1082ec8c0(long *param_1)

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



/* Entry: 1082ec90c; end: 1082ec95b;  */

void FUN_1082ec90c(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  if (param_1 != &uStack_30) {
    *param_1 = 0;
    FUN_1082ec95c(param_1 + 1,0);
  }
  uStack_30 = 0;
  FUN_1082ec754(&uStack_28);
  return;
}


