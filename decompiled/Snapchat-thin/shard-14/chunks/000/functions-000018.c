/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af208b8; end: 10af209ab;  */

undefined1 *
FUN_10af208b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_4);
  _objc_retain(param_9);
  puVar4 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_68 = PTR_PTR_112702190;
    lStack_70 = param_2;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar4 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 0x10) = param_3;
      uVar2 = param_4;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = uVar2;
      _objc_release(uVar3);
      *(undefined1 *)((long)plVar1 + 8) = param_5;
      *(undefined8 *)((long)plVar1 + 0x20) = param_6;
      *(undefined8 *)((long)plVar1 + 0x28) = param_7;
      *(undefined8 *)((long)plVar1 + 0x30) = param_8;
      *(undefined8 *)((long)plVar1 + 0x38) = param_1;
      uVar2 = param_9;
      func_0x00010bf51e00();
      uVar3 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = uVar2;
      _objc_release(uVar3);
    }
  }
  _objc_release(param_9);
  _objc_release(param_4);
  return puVar4;
}



/* Entry: 10af209ac; end: 10af209cf; -[SCVideoTranscodingRequestAnalyticsInfo copyWithZone:] */

undefined8 FUN_10af209ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af209d0; end: 10af20a83; -[SCVideoTranscodingRequestAnalyticsInfo hash] */

long * FUN_10af209d0(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  double dVar9;
  double dVar10;
  long lStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lStack_68 = -lVar6;
  if (-1 < lVar6) {
    lStack_68 = lVar6;
  }
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  plVar4 = &lStack_68;
  uStack_30 = uVar3;
  func_0x000107c3191c(plVar4,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar4 == param_3) {
LAB_10af20b88:
    plVar8 = (long *)0x1;
  }
  else {
    plVar8 = (long *)0x0;
    if ((plVar4 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10af20b94;
    plVar8 = plVar4;
    _objc_opt_class(plVar4);
    plVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar8);
    if ((((ulong)plVar5 & 1) != 0) &&
       ((((plVar4[2] == param_3[2] && ((char)plVar4[1] == (char)param_3[1])) &&
         (plVar4[4] == param_3[4])) && ((plVar4[5] == param_3[5] && (plVar4[6] == param_3[6])))))) {
      dVar10 = ABS((double)plVar4[7] - (double)param_3[7]);
      dVar9 = ABS((double)plVar4[7] + (double)param_3[7]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if ((bVar1) &&
         ((lVar6 = plVar4[3], lVar6 == param_3[3] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        plVar8 = (long *)plVar4[8];
        if (plVar8 != (long *)param_3[8]) {
          func_0x00010c071ae0();
          goto LAB_10af20b94;
        }
        goto LAB_10af20b88;
      }
    }
    plVar8 = (long *)0x0;
  }
LAB_10af20b94:
  _objc_release(param_3);
  return plVar8;
}



/* Entry: 10af20a84; end: 10af20baf; -[SCVideoTranscodingRequestAnalyticsInfo isEqual:] */

long FUN_10af20a84(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af20b88:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af20b94;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
          (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        ((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
      dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x40);
        if (lVar4 != *(long *)(param_3 + 0x40)) {
          func_0x00010c071ae0();
          goto LAB_10af20b94;
        }
        goto LAB_10af20b88;
      }
    }
    lVar4 = 0;
  }
LAB_10af20b94:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af20bb0; end: 10af20bdf; -[SCVideoTranscodingRequestAnalyticsInfo .cxx_destruct] */

void FUN_10af20bb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10af20be0; end: 10af20bff;  */

void FUN_10af20be0(void)

{
  _objc_opt_self();
  _objc_alloc_init(PTR_PTR_1126bf7b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af20c00; end: 10af20d2f;  */

void FUN_10af20c00(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10af20d30; end: 10af20d5f; -[SCVideoTranscodingRequestAnalyticsInfoBuilder .cxx_destruct] */

void FUN_10af20d30(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af20d60; end: 10af2122f;  */

long * FUN_10af20d60(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                    long param_7,long param_8,long param_9,long param_10,long param_11,long param_12
                    ,long param_13,long param_14,long param_15,long param_16,long param_17,
                    long param_18,long param_19,long param_20,long param_21,undefined4 param_22,
                    undefined4 param_23,long param_24,long param_25,long param_26,long param_27,
                    long param_28,long param_29,long param_30,long param_31,undefined1 param_32,
                    undefined4 param_33,long param_34,undefined1 param_35,undefined4 param_36,
                    long param_37,long param_38,long param_39,long param_40,long param_41,
                    undefined4 param_42,undefined4 param_43,long param_44)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_b8;
  undefined *puStack_b0;
  
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_44);
  if (param_8 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    puStack_b0 = PTR_PTR_112702198;
    plVar3 = &lStack_b8;
    lStack_b8 = param_8;
    _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
    if (plVar3 != (long *)0x0) {
      plVar3[2] = param_9;
      plVar3[3] = param_10;
      lVar1 = param_11;
      func_0x00010bf51e00();
      lVar2 = plVar3[4];
      plVar3[4] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_12;
      func_0x00010bf51e00();
      lVar2 = plVar3[5];
      plVar3[5] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_13;
      func_0x00010bf51e00();
      lVar2 = plVar3[6];
      plVar3[6] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_14;
      func_0x00010bf51e00();
      lVar2 = plVar3[7];
      plVar3[7] = lVar1;
      _objc_release(lVar2);
      plVar3[8] = param_15;
      plVar3[9] = param_16;
      plVar3[0x1f] = param_1;
      plVar3[0x20] = param_2;
      plVar3[0x21] = param_3;
      plVar3[0x22] = param_4;
      plVar3[10] = param_17;
      plVar3[0xb] = param_18;
      plVar3[0xc] = param_19;
      lVar1 = param_20;
      func_0x00010bf51e00();
      lVar2 = plVar3[0xd];
      plVar3[0xd] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_21;
      func_0x00010bf51e00();
      lVar2 = plVar3[0xe];
      plVar3[0xe] = lVar1;
      _objc_release(lVar2);
      *(undefined1 *)(plVar3 + 1) = (undefined1)param_22;
      *(undefined1 *)((long)plVar3 + 9) = param_22._1_1_;
      plVar3[0xf] = param_5;
      plVar3[0x10] = param_6;
      plVar3[0x11] = param_24;
      lVar1 = param_25;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x12];
      plVar3[0x12] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_26;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x13];
      plVar3[0x13] = lVar1;
      _objc_release(lVar2);
      _objc_retain(param_27);
      lVar1 = plVar3[0x14];
      plVar3[0x14] = param_27;
      _objc_release(lVar1);
      plVar3[0x15] = param_7;
      plVar3[0x23] = param_28;
      plVar3[0x24] = param_29;
      lVar1 = param_30;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x16];
      plVar3[0x16] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_31;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x17];
      plVar3[0x17] = lVar1;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar3 + 10) = param_32;
      *(undefined1 *)((long)plVar3 + 0xb) = param_35;
      plVar3[0x18] = param_34;
      plVar3[0x19] = param_37;
      lVar1 = param_38;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x1a];
      plVar3[0x1a] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_39;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x1b];
      plVar3[0x1b] = lVar1;
      _objc_release(lVar2);
      _objc_retain(param_40);
      lVar1 = plVar3[0x1c];
      plVar3[0x1c] = param_40;
      _objc_release(lVar1);
      lVar1 = param_41;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x1d];
      plVar3[0x1d] = lVar1;
      _objc_release(lVar2);
      *(undefined1 *)((long)plVar3 + 0xc) = (undefined1)param_42;
      *(undefined1 *)((long)plVar3 + 0xd) = param_42._1_1_;
      *(undefined1 *)((long)plVar3 + 0xe) = param_42._2_1_;
      lVar1 = param_44;
      func_0x00010bf51e00();
      lVar2 = plVar3[0x1e];
      plVar3[0x1e] = lVar1;
      _objc_release(lVar2);
    }
  }
  _objc_release(param_44);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  return plVar3;
}



/* Entry: 10af21230; end: 10af21253; -[SCVideoTranscodingRequestBasicConfiguration copyWithZone:] */

undefined8 FUN_10af21230(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af21254; end: 10af21503; -[SCVideoTranscodingRequestBasicConfiguration hash] */

undefined8 * FUN_10af21254(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  puVar3 = &uStack_190;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_188 = *(undefined8 *)(param_1 + 0x18);
  uStack_190 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_180 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_178 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_170 = uVar1;
  func_0x00010bfde980();
  uStack_160 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_158 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uVar6 = ~*(ulong *)(param_1 + 0xf8) + *(ulong *)(param_1 + 0xf8) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_150 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_150 = uStack_150 ^ uStack_150 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x100) + *(ulong *)(param_1 + 0x100) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_148 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_148 = uStack_148 ^ uStack_148 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x108) + *(ulong *)(param_1 + 0x108) * 0x40000;
  uStack_140 = *(undefined8 *)(param_1 + 0x50);
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_138 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_138 = uStack_138 ^ uStack_138 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x110) + *(ulong *)(param_1 + 0x110) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_130 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_130 = uStack_130 ^ uStack_130 >> 0x16;
  uStack_128 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x58));
  uStack_120 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uStack_168 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_118 = uVar1;
  func_0x00010bfde980();
  uStack_108 = (ulong)*(byte *)(param_1 + 8);
  uVar6 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uStack_100 = (ulong)*(byte *)(param_1 + 9);
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_f8 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_f8 = uStack_f8 ^ uStack_f8 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x80) + *(ulong *)(param_1 + 0x80) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_f0 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_f0 = uStack_f0 ^ uStack_f0 >> 0x16;
  lVar5 = *(long *)(param_1 + 0x88);
  uStack_e0 = *(undefined8 *)(param_1 + 0x90);
  lStack_e8 = -lVar5;
  if (-1 < lVar5) {
    lStack_e8 = lVar5;
  }
  uStack_110 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uStack_d8 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  uVar6 = ~*(ulong *)(param_1 + 0xa8) + *(ulong *)(param_1 + 0xa8) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_c8 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_c8 = uStack_c8 ^ uStack_c8 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x118) + *(ulong *)(param_1 + 0x118) * 0x40000;
  uVar7 = ~*(ulong *)(param_1 + 0x120) + *(ulong *)(param_1 + 0x120) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_c0 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_c0 = uStack_c0 ^ uStack_c0 >> 0x16;
  uStack_b8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_b8 = uStack_b8 ^ uStack_b8 >> 0x16;
  uStack_d0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b0 = uVar1;
  func_0x00010bfde980();
  uStack_a0 = (ulong)*(byte *)(param_1 + 10);
  uStack_90 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  lVar5 = *(long *)(param_1 + 200);
  lStack_88 = -lVar5;
  if (-1 < lVar5) {
    lStack_88 = lVar5;
  }
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xe8);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  uStack_60 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_58 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_50 = (ulong)*(byte *)(param_1 + 0xe);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uStack_48 = uVar1;
  func_0x000107c3191c(&uStack_190,0x2a);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10af21900:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10af21904;
    puVar8 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((((ulong)puVar4 & 1) != 0) &&
        (((((*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)((long)puVar3 + 0x40) == *(long *)(param_3 + 0x40))) &&
          ((*(long *)((long)puVar3 + 0x48) == *(long *)(param_3 + 0x48) &&
           (*(long *)((long)puVar3 + 0x50) == *(long *)(param_3 + 0x50))))) &&
         (*(long *)((long)puVar3 + 0x58) == *(long *)(param_3 + 0x58))))) &&
       (((((*(long *)((long)puVar3 + 0x60) == *(long *)(param_3 + 0x60) &&
           (*(char *)((long)puVar3 + 8) == param_3[8])) &&
          (*(char *)((long)puVar3 + 9) == param_3[9])) &&
         ((((*(long *)((long)puVar3 + 0x88) == *(long *)(param_3 + 0x88) &&
            (*(char *)((long)puVar3 + 10) == param_3[10])) &&
           (*(long *)((long)puVar3 + 0xc0) == *(long *)(param_3 + 0xc0))) &&
          ((*(char *)((long)puVar3 + 0xb) == param_3[0xb] &&
           (*(long *)((long)puVar3 + 200) == *(long *)(param_3 + 200))))))) &&
        ((*(char *)((long)puVar3 + 0xc) == param_3[0xc] &&
         ((*(char *)((long)puVar3 + 0xd) == param_3[0xd] &&
          (*(char *)((long)puVar3 + 0xe) == param_3[0xe])))))))) {
      puVar8 = (undefined1 *)0x0;
      if ((*(double *)((long)puVar3 + 0xf8) != *(double *)(param_3 + 0xf8)) ||
         (((*(double *)((long)puVar3 + 0x100) != *(double *)(param_3 + 0x100) ||
           (puVar8 = (undefined1 *)0x0,
           *(double *)((long)puVar3 + 0x108) != *(double *)(param_3 + 0x108))) ||
          (*(double *)((long)puVar3 + 0x110) != *(double *)(param_3 + 0x110))))) goto LAB_10af21904;
      dVar9 = ABS(*(double *)((long)puVar3 + 0x78) - *(double *)(param_3 + 0x78));
      if ((dVar9 < 2.2250738585072014e-308) ||
         (dVar9 < ABS(*(double *)((long)puVar3 + 0x78) + *(double *)(param_3 + 0x78)) *
                  2.220446049250313e-16)) {
        dVar9 = ABS(*(double *)((long)puVar3 + 0x80) - *(double *)(param_3 + 0x80));
        if ((dVar9 < 2.2250738585072014e-308) ||
           (dVar9 < ABS(*(double *)((long)puVar3 + 0x80) + *(double *)(param_3 + 0x80)) *
                    2.220446049250313e-16)) {
          dVar9 = ABS(*(double *)((long)puVar3 + 0xa8) - *(double *)(param_3 + 0xa8));
          if ((dVar9 < 2.2250738585072014e-308) ||
             (dVar9 < ABS(*(double *)((long)puVar3 + 0xa8) + *(double *)(param_3 + 0xa8)) *
                      2.220446049250313e-16)) {
            puVar8 = (undefined1 *)0x0;
            if ((*(double *)((long)puVar3 + 0x118) != *(double *)(param_3 + 0x118)) ||
               (*(double *)((long)puVar3 + 0x120) != *(double *)(param_3 + 0x120)))
            goto LAB_10af21904;
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if (((((((lVar5 == *(long *)(param_3 + 0x20)) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                   ((lVar5 = *(long *)((long)puVar3 + 0x28), lVar5 == *(long *)(param_3 + 0x28) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                  (((lVar5 = *(long *)((long)puVar3 + 0x30), lVar5 == *(long *)(param_3 + 0x30) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                   ((lVar5 = *(long *)((long)puVar3 + 0x38), lVar5 == *(long *)(param_3 + 0x38) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
                 ((((lVar5 = *(long *)((long)puVar3 + 0x68), lVar5 == *(long *)(param_3 + 0x68) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                   ((lVar5 = *(long *)((long)puVar3 + 0x70), lVar5 == *(long *)(param_3 + 0x70) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                  ((lVar5 = *(long *)((long)puVar3 + 0x90), lVar5 == *(long *)(param_3 + 0x90) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)))))) &&
                ((lVar5 = *(long *)((long)puVar3 + 0x98), lVar5 == *(long *)(param_3 + 0x98) ||
                 (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
               ((((lVar5 = *(long *)((long)puVar3 + 0xa0), lVar5 == *(long *)(param_3 + 0xa0) ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                 ((lVar5 = *(long *)((long)puVar3 + 0xb0), lVar5 == *(long *)(param_3 + 0xb0) ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                (((lVar5 = *(long *)((long)puVar3 + 0xb8), lVar5 == *(long *)(param_3 + 0xb8) ||
                  (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                 (((lVar5 = *(long *)((long)puVar3 + 0xd0), lVar5 == *(long *)(param_3 + 0xd0) ||
                   (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                  ((((lVar5 = *(long *)((long)puVar3 + 0xd8), lVar5 == *(long *)(param_3 + 0xd8) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) &&
                    ((lVar5 = *(long *)((long)puVar3 + 0xe0), lVar5 == *(long *)(param_3 + 0xe0) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
                   ((lVar5 = *(long *)((long)puVar3 + 0xe8), lVar5 == *(long *)(param_3 + 0xe8) ||
                    (func_0x00010c071ae0(), (int)lVar5 != 0)))))))))))) {
              puVar8 = *(undefined1 **)((long)puVar3 + 0xf0);
              if (puVar8 != *(undefined1 **)(param_3 + 0xf0)) {
                func_0x00010c071ae0();
                goto LAB_10af21904;
              }
              goto LAB_10af21900;
            }
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_10af21904:
  _objc_release(param_3);
  return (undefined8 *)puVar8;
}



/* Entry: 10af21504; end: 10af2191f; -[SCVideoTranscodingRequestBasicConfiguration isEqual:] */

long FUN_10af21504(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af21900:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af21904;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
          ((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
           (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))) &&
         (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))))) &&
       (((((*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
          (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
         ((((*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88) &&
            (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))) &&
           (*(long *)(param_1 + 0xc0) == *(long *)(param_3 + 0xc0))) &&
          ((*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb) &&
           (*(long *)(param_1 + 200) == *(long *)(param_3 + 200))))))) &&
        ((*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc) &&
         ((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
          (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))))))))) {
      lVar3 = 0;
      if ((*(double *)(param_1 + 0xf8) != *(double *)(param_3 + 0xf8)) ||
         (((*(double *)(param_1 + 0x100) != *(double *)(param_3 + 0x100) ||
           (lVar3 = 0, *(double *)(param_1 + 0x108) != *(double *)(param_3 + 0x108))) ||
          (*(double *)(param_1 + 0x110) != *(double *)(param_3 + 0x110))))) goto LAB_10af21904;
      dVar4 = ABS(*(double *)(param_1 + 0x78) - *(double *)(param_3 + 0x78));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 0x78) + *(double *)(param_3 + 0x78)) *
                  2.220446049250313e-16)) {
        dVar4 = ABS(*(double *)(param_1 + 0x80) - *(double *)(param_3 + 0x80));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x80) + *(double *)(param_3 + 0x80)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0xa8) - *(double *)(param_3 + 0xa8));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0xa8) + *(double *)(param_3 + 0xa8)) *
                      2.220446049250313e-16)) {
            lVar3 = 0;
            if ((*(double *)(param_1 + 0x118) != *(double *)(param_3 + 0x118)) ||
               (*(double *)(param_1 + 0x120) != *(double *)(param_3 + 0x120))) goto LAB_10af21904;
            lVar3 = *(long *)(param_1 + 0x20);
            if (((((((lVar3 == *(long *)(param_3 + 0x20)) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                   ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                  (((lVar3 = *(long *)(param_1 + 0x30), lVar3 == *(long *)(param_3 + 0x30) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                   ((lVar3 = *(long *)(param_1 + 0x38), lVar3 == *(long *)(param_3 + 0x38) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                 ((((lVar3 = *(long *)(param_1 + 0x68), lVar3 == *(long *)(param_3 + 0x68) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                   ((lVar3 = *(long *)(param_1 + 0x70), lVar3 == *(long *)(param_3 + 0x70) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                  ((lVar3 = *(long *)(param_1 + 0x90), lVar3 == *(long *)(param_3 + 0x90) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)))))) &&
                ((lVar3 = *(long *)(param_1 + 0x98), lVar3 == *(long *)(param_3 + 0x98) ||
                 (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
               ((((lVar3 = *(long *)(param_1 + 0xa0), lVar3 == *(long *)(param_3 + 0xa0) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                 ((lVar3 = *(long *)(param_1 + 0xb0), lVar3 == *(long *)(param_3 + 0xb0) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                (((lVar3 = *(long *)(param_1 + 0xb8), lVar3 == *(long *)(param_3 + 0xb8) ||
                  (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                 (((lVar3 = *(long *)(param_1 + 0xd0), lVar3 == *(long *)(param_3 + 0xd0) ||
                   (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                  ((((lVar3 = *(long *)(param_1 + 0xd8), lVar3 == *(long *)(param_3 + 0xd8) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
                    ((lVar3 = *(long *)(param_1 + 0xe0), lVar3 == *(long *)(param_3 + 0xe0) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                   ((lVar3 = *(long *)(param_1 + 0xe8), lVar3 == *(long *)(param_3 + 0xe8) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))))))))))) {
              lVar3 = *(long *)(param_1 + 0xf0);
              if (lVar3 != *(long *)(param_3 + 0xf0)) {
                func_0x00010c071ae0();
                goto LAB_10af21904;
              }
              goto LAB_10af21900;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10af21904:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10af21920; end: 10af219f7; -[SCVideoTranscodingRequestBasicConfiguration .cxx_destruct] */

void FUN_10af21920(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 10af219f8; end: 10af21a17;  */

void FUN_10af219f8(void)

{
  _objc_opt_self();
  _objc_alloc_init(PTR_PTR_1126bf7a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af21a18; end: 10af2227b;  */

void FUN_10af21a18(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar1 = PTR_PTR_1126bf7a8;
  FUN_10af219f8();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    if (param_2 == 0) {
      *(undefined8 *)(puVar1 + 8) = 0;
      _objc_retain(puVar1);
      uVar3 = 0;
    }
    else {
      *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_2 + 0x10);
      _objc_retain(puVar1);
      uVar3 = *(undefined8 *)(param_2 + 0x18);
    }
    *(undefined8 *)(puVar1 + 0x10) = uVar3;
    _objc_retain(puVar1);
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
  }
  _objc_retain(uVar3);
  func_0x00010af222dc(puVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x28);
  }
  _objc_retain(uVar8);
  func_0x00010af22320(puVar1,uVar8);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_2 + 0x30);
  }
  _objc_retain(uVar9);
  func_0x00010af22364(puVar1,uVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 0x38);
  }
  _objc_retain(uVar11);
  func_0x00010af223a8(puVar1,uVar11);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    if (param_2 == 0) {
      *(undefined8 *)(puVar1 + 0x38) = 0;
      _objc_retain(puVar1);
      uVar4 = 0;
    }
    else {
      *(undefined8 *)(puVar1 + 0x38) = *(undefined8 *)(param_2 + 0x40);
      _objc_retain(puVar1);
      uVar4 = *(undefined8 *)(param_2 + 0x48);
    }
    *(undefined8 *)(puVar1 + 0x40) = uVar4;
    _objc_retain(puVar1);
  }
  if (param_2 == 0) {
    uVar4 = 0;
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(param_2 + 0xf8);
    uVar4 = *(undefined8 *)(param_2 + 0x100);
  }
  func_0x00010af2241c(uVar17,uVar4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (param_2 == 0) {
      uVar4 = 0;
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined8 *)(param_2 + 0x108);
      uVar4 = *(undefined8 *)(param_2 + 0x110);
    }
    func_0x00010af2244c(uVar17,uVar4,0);
    _objc_retainAutoreleasedReturnValue();
    if (param_2 != 0) goto LAB_10af21bbc;
LAB_10af220c8:
    uVar4 = 0;
  }
  else {
    if (param_2 == 0) {
      *(undefined8 *)(puVar1 + 0x58) = 0;
      _objc_retain(puVar1);
      uVar4 = 0;
      uVar17 = 0;
    }
    else {
      *(undefined8 *)(puVar1 + 0x58) = *(undefined8 *)(param_2 + 0x50);
      _objc_retain(puVar1);
      uVar17 = *(undefined8 *)(param_2 + 0x108);
      uVar4 = *(undefined8 *)(param_2 + 0x110);
    }
    func_0x00010af2244c(uVar17,uVar4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (param_2 == 0) {
      *(undefined8 *)(puVar1 + 0x70) = 0;
      _objc_retain(puVar1);
      uVar4 = 0;
    }
    else {
      *(undefined8 *)(puVar1 + 0x70) = *(undefined8 *)(param_2 + 0x58);
      _objc_retain(puVar1);
      uVar4 = *(undefined8 *)(param_2 + 0x60);
    }
    *(undefined8 *)(puVar1 + 0x78) = uVar4;
    _objc_retain(puVar1);
    if (param_2 == 0) goto LAB_10af220c8;
LAB_10af21bbc:
    uVar4 = *(undefined8 *)(param_2 + 0x68);
  }
  _objc_retain(uVar4);
  if (puVar1 != (undefined *)0x0) {
    uVar17 = uVar4;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)(puVar1 + 0x80);
    *(undefined8 *)(puVar1 + 0x80) = uVar17;
    _objc_release(uVar5);
    _objc_retain(puVar1);
  }
  if (param_2 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = *(undefined8 *)(param_2 + 0x70);
  }
  _objc_retain(uVar17);
  func_0x00010af224ac(puVar1,uVar17);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_2 + 8);
  }
  if (puVar1 != (undefined *)0x0) {
    puVar1[0x90] = bVar2 & 1;
    _objc_retain(puVar1);
  }
  if (param_2 == 0) {
    func_0x00010af224f0(puVar1,0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      *(undefined8 *)(puVar1 + 0x98) = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0xa0) = 0;
      _objc_retain(puVar1);
      uVar5 = 0;
      goto LAB_10af21c6c;
    }
  }
  else {
    func_0x00010af224f0(puVar1,*(undefined1 *)(param_2 + 9));
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      *(undefined8 *)(puVar1 + 0x98) = *(undefined8 *)(param_2 + 0x78);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0xa0) = *(undefined8 *)(param_2 + 0x80);
      _objc_retain(puVar1);
      uVar5 = *(undefined8 *)(param_2 + 0x88);
LAB_10af21c6c:
      *(undefined8 *)(puVar1 + 0xa8) = uVar5;
      _objc_retain(puVar1);
    }
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x90);
  }
  _objc_retain(uVar5);
  func_0x00010af22580(puVar1,uVar5);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(param_2 + 0x98);
  }
  _objc_retain(uVar12);
  func_0x00010af225c4(puVar1,uVar12);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_2 + 0xa0);
  }
  _objc_retain(uVar7);
  func_0x00010af22608(puVar1,uVar7);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    if (param_2 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(param_2 + 0xa8);
    }
    *(undefined8 *)(puVar1 + 200) = uVar18;
    _objc_retain(puVar1);
  }
  if (param_2 == 0) {
    func_0x00010af2265c(0,0,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = 0;
  }
  else {
    func_0x00010af2265c(*(undefined8 *)(param_2 + 0x118),*(undefined8 *)(param_2 + 0x120),puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar18 = *(undefined8 *)(param_2 + 0xb0);
  }
  _objc_retain(uVar18);
  func_0x00010af2268c(puVar1,uVar18);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0xb8);
  }
  _objc_retain(uVar10);
  func_0x00010af226d0(puVar1,uVar10);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    if (puVar1 != (undefined *)0x0) {
      puVar1[0xf0] = 0;
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0xf8) = 0;
      _objc_retain(puVar1);
      func_0x00010af22714(puVar1,0);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0;
      goto LAB_10af21da8;
    }
    bVar2 = 0;
  }
  else {
    if (puVar1 != (undefined *)0x0) {
      puVar1[0xf0] = *(undefined1 *)(param_2 + 10);
      _objc_retain(puVar1);
      *(undefined8 *)(puVar1 + 0xf8) = *(undefined8 *)(param_2 + 0xc0);
      _objc_retain(puVar1);
      func_0x00010af22714(puVar1,*(undefined1 *)(param_2 + 0xb));
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_2 + 200);
LAB_10af21da8:
      *(undefined8 *)(puVar1 + 0x108) = uVar6;
      _objc_retain(puVar1);
      goto joined_r0x00010af2225c;
    }
    bVar2 = *(byte *)(param_2 + 0xb);
  }
  func_0x00010af22714(puVar1,bVar2 & 1);
  _objc_retainAutoreleasedReturnValue();
joined_r0x00010af2225c:
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0xd0);
  }
  _objc_retain(uVar6);
  func_0x00010af22744(puVar1,uVar6);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(param_2 + 0xd8);
  }
  _objc_retain(uVar13);
  func_0x00010af22788(puVar1,uVar13);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(param_2 + 0xe0);
  }
  _objc_retain(uVar14);
  func_0x00010af227cc(puVar1,uVar14);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(param_2 + 0xe8);
  }
  _objc_retain(uVar15);
  func_0x00010af22820(puVar1,uVar15);
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    func_0x00010af22864(puVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af22894();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af228c4();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = 0;
  }
  else {
    func_0x00010af22864(puVar1,*(undefined1 *)(param_2 + 0xc));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af22894();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010af228c4();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_2 + 0xf0);
  }
  _objc_retain(uVar16);
  func_0x00010af228f4(puVar1,uVar16);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar15);
  _objc_release(puVar1);
  _objc_release(uVar14);
  _objc_release(puVar1);
  _objc_release(uVar13);
  _objc_release(puVar1);
  _objc_release(uVar6);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar10);
  _objc_release(puVar1);
  _objc_release(uVar18);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(puVar1);
  _objc_release(uVar12);
  _objc_release(puVar1);
  _objc_release(uVar5);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar17);
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(puVar1);
  _objc_release(uVar8);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af2227c; end: 10af22937;  */

void FUN_10af2227c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10af22938; end: 10af22a3b;  */

void FUN_10af22938(long param_1)

{
  if (param_1 != 0) {
    _objc_alloc(PTR_PTR_1126dea00);
    FUN_10af20d60(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                  *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                  *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa0),
                  *(undefined8 *)(param_1 + 200));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af22a3c; end: 10af22b13; -[SCVideoTranscodingRequestBasicConfigurationBuilder .cxx_destruct] */

void FUN_10af22a3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10af22b14; end: 10af22daf;  */

long * FUN_10af22b14(long param_1,long param_2,long param_3,undefined1 param_4,long param_5,
                    long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                    long param_12,long param_13,long param_14,long param_15)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  if (param_3 == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    puStack_78 = PTR_PTR_1127021a0;
    plVar3 = &lStack_80;
    lStack_80 = param_3;
    _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
    if (plVar3 != (long *)0x0) {
      *(undefined1 *)(plVar3 + 1) = param_4;
      lVar1 = param_5;
      func_0x00010bf51e00();
      lVar2 = plVar3[2];
      plVar3[2] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_6;
      func_0x00010bf51e00();
      lVar2 = plVar3[3];
      plVar3[3] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_7;
      func_0x00010bf51e00();
      lVar2 = plVar3[4];
      plVar3[4] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_8;
      func_0x00010bf51e00();
      lVar2 = plVar3[5];
      plVar3[5] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_9;
      func_0x00010bf51e00();
      lVar2 = plVar3[6];
      plVar3[6] = lVar1;
      _objc_release(lVar2);
      plVar3[7] = param_1;
      _objc_retain(param_10);
      lVar1 = plVar3[8];
      plVar3[8] = param_10;
      _objc_release(lVar1);
      plVar3[9] = param_2;
      _objc_retain(param_11);
      lVar1 = plVar3[10];
      plVar3[10] = param_11;
      _objc_release(lVar1);
      lVar1 = param_12;
      func_0x00010bf51e00();
      lVar2 = plVar3[0xb];
      plVar3[0xb] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_13;
      func_0x00010bf51e00();
      lVar2 = plVar3[0xc];
      plVar3[0xc] = lVar1;
      _objc_release(lVar2);
      lVar1 = param_14;
      func_0x00010bf51e00();
      lVar2 = plVar3[0xd];
      plVar3[0xd] = lVar1;
      _objc_release(lVar2);
      _objc_retain(param_15);
      lVar1 = plVar3[0xe];
      plVar3[0xe] = param_15;
      _objc_release(lVar1);
    }
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return plVar3;
}



/* Entry: 10af22db0; end: 10af22dd3; -[SCVideoTranscodingRequestImageProcessData copyWithZone:] */

undefined8 FUN_10af22db0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10af22dd4; end: 10af22eff; -[SCVideoTranscodingRequestImageProcessData hash] */

ulong * FUN_10af22dd4(long param_1,undefined8 param_2,ulong *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  double dVar9;
  double dVar10;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_98 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_90 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_68 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uStack_70 = uVar4;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar7 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar5 = &uStack_98;
  uStack_30 = uVar3;
  func_0x000107c3191c(puVar5,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_10af230d0:
    puVar8 = (ulong *)0x1;
  }
  else {
    puVar8 = (ulong *)0x0;
    if ((puVar5 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_10af230dc;
    puVar8 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar6 & 1) != 0) && ((char)puVar5[1] == (char)param_3[1])) {
      dVar10 = ABS((double)puVar5[7] - (double)param_3[7]);
      dVar9 = ABS((double)puVar5[7] + (double)param_3[7]) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar1 = dVar10 < dVar9;
      }
      if (bVar1) {
        dVar10 = ABS((double)puVar5[9] - (double)param_3[9]);
        dVar9 = ABS((double)puVar5[9] + (double)param_3[9]) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar1 = dVar10 < dVar9;
        }
        if (((((bVar1) &&
              ((uVar7 = puVar5[2], uVar7 == param_3[2] || (func_0x00010c071ae0(), (int)uVar7 != 0)))
              ) && ((uVar7 = puVar5[3], uVar7 == param_3[3] ||
                    (func_0x00010c071ae0(), (int)uVar7 != 0)))) &&
            ((((uVar7 = puVar5[4], uVar7 == param_3[4] || (func_0x00010c071ae0(), (int)uVar7 != 0))
              && ((uVar7 = puVar5[5], uVar7 == param_3[5] ||
                  (func_0x00010c071ae0(), (int)uVar7 != 0)))) &&
             ((uVar7 = puVar5[6], uVar7 == param_3[6] || (func_0x00010c071ae0(), (int)uVar7 != 0))))
            )) && (((uVar7 = puVar5[8], uVar7 == param_3[8] ||
                    (func_0x00010c071ae0(), (int)uVar7 != 0)) &&
                   ((((uVar7 = puVar5[10], uVar7 == param_3[10] ||
                      (func_0x00010c071ae0(), (int)uVar7 != 0)) &&
                     ((uVar7 = puVar5[0xb], uVar7 == param_3[0xb] ||
                      (func_0x00010c071ae0(), (int)uVar7 != 0)))) &&
                    (((uVar7 = puVar5[0xc], uVar7 == param_3[0xc] ||
                      (func_0x00010c071ae0(), (int)uVar7 != 0)) &&
                     ((uVar7 = puVar5[0xd], uVar7 == param_3[0xd] ||
                      (func_0x00010c071ae0(), (int)uVar7 != 0)))))))))) {
          puVar8 = (ulong *)puVar5[0xe];
          if (puVar8 != (ulong *)param_3[0xe]) {
            func_0x00010c071ae0();
            goto LAB_10af230dc;
          }
          goto LAB_10af230d0;
        }
      }
    }
    puVar8 = (ulong *)0x0;
  }
LAB_10af230dc:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10af22f00; end: 10af230f7; -[SCVideoTranscodingRequestImageProcessData isEqual:] */

long FUN_10af22f00(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10af230d0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10af230dc;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
      dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
        dVar5 = ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (((((bVar1) &&
              ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
           (((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((((lVar4 = *(long *)(param_1 + 0x50), lVar4 == *(long *)(param_3 + 0x50) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + 0x58), lVar4 == *(long *)(param_3 + 0x58) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
             (((lVar4 = *(long *)(param_1 + 0x60), lVar4 == *(long *)(param_3 + 0x60) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
              ((lVar4 = *(long *)(param_1 + 0x68), lVar4 == *(long *)(param_3 + 0x68) ||
               (func_0x00010c071ae0(), (int)lVar4 != 0)))))))))) {
          lVar4 = *(long *)(param_1 + 0x70);
          if (lVar4 != *(long *)(param_3 + 0x70)) {
            func_0x00010c071ae0();
            goto LAB_10af230dc;
          }
          goto LAB_10af230d0;
        }
      }
    }
    lVar4 = 0;
  }
LAB_10af230dc:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10af230f8; end: 10af23193; -[SCVideoTranscodingRequestImageProcessData .cxx_destruct] */

void FUN_10af230f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af23194; end: 10af231b3;  */

void FUN_10af23194(void)

{
  _objc_opt_self();
  _objc_alloc_init(PTR_PTR_1126c4a90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af231b4; end: 10af23563;  */

void FUN_10af231b4(long param_1,undefined1 param_2)

{
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 8) = param_2;
    _objc_retain(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10af23564; end: 10af235ff; -[SCVideoTranscodingRequestImageProcessDataBuilder .cxx_destruct] */

void FUN_10af23564(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10af23600; end: 10af2360b; -[SCVideoTranscodingParameterProviderServices .cxx_destruct] */

void FUN_10af23600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af2360c; end: 10af2360f; -[SCCMemoriesBackupDeviceNetworkState__Enum init] */

void FUN_10af2360c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10af23610; end: 10af23617; -[SCCMemoriesBackupErrorCode__Enum init] */

void FUN_10af23610(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10af23618; end: 10af2361b; -[SCCMemoriesBackupJobConfigAppLifeCycleConstraint__Enum init] */

void FUN_10af23618(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10af2361c; end: 10af2361f; -[SCCMemoriesBackupJobConfigExistingJobPolicy__Enum init] */

void FUN_10af2361c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10af23620; end: 10af23623; -[SCCMemoriesBackupJobConfigNetworkConstraint__Enum init] */

void FUN_10af23620(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10af23624; end: 10af23627; -[SCCMemoriesBackupJobPersistence__Enum init] */

void FUN_10af23624(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10af23628; end: 10af2362b; -[SCCMemoriesBackupJobRetryType__Enum init] */

void FUN_10af23628(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10af2362c; end: 10af2362f; -[SCCMemoriesBackupOperationOrigin__Enum init] */

void FUN_10af2362c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10af23630; end: 10af2363f; -[SCCMemoriesBackupOperationType__Enum init] */

void FUN_10af23630(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithEnumCases_count__1125e1b50,0x11332ec08,0x18);
  return;
}



/* Entry: 10af23640; end: 10af23643; -[SCCMemoriesBackupStepErrorOperationPolicy__Enum init] */

void FUN_10af23640(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10af23644; end: 10af2364b; -[SCCMemoriesCleanupErrorCode__Enum init] */

void FUN_10af23644(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x11);
  return;
}



/* Entry: 10af2364c; end: 10af23653; -[SCCMemoriesDeleteEntriesErrorCode__Enum init] */

void FUN_10af2364c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x1d);
  return;
}



/* Entry: 10af23654; end: 10af2365b; -[SCCMemoriesGenerateThumbnailErrorCode__Enum init] */

void FUN_10af23654(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0xc);
  return;
}



/* Entry: 10af2365c; end: 10af23663; -[SCCMemoriesSnapDocRenderErrorCode__Enum init] */

void FUN_10af2365c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x43);
  return;
}



/* Entry: 10af23664; end: 10af2366b; -[SCCMemoriesTranscodeErrorCode__Enum init] */

void FUN_10af23664(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x16);
  return;
}



/* Entry: 10af2366c; end: 10af2367b; -[SCCMemoriesUpdateEntriesErrorCode__Enum init] */

void FUN_10af2366c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithEnumCases_count__1125e1b50,0x11332ecc8,0x56);
  return;
}



/* Entry: 10af2367c; end: 10af23683; -[SCCMemoriesUploadErrorCode__Enum init] */

void FUN_10af2367c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0x36);
  return;
}



/* Entry: 10af23684; end: 10af2368b; -[SCCMemoriesUploadTagsErrorCode__Enum init] */

void FUN_10af23684(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10af2368c; end: 10af236b7; -[SCCMemoriesBackupError initWithCode:message:] */

void FUN_10af2368c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af23e10(PTR_PTR_1127021b0);
  func_0x00010af23de8(auStack_20);
  return;
}



/* Entry: 10af236b8; end: 10af236cb; +[SCCMemoriesBackupError valdiMarshallableObjectDescriptor] */

void FUN_10af236b8(undefined8 *param_1)

{
  *param_1 = &PTR_s_code_110c91be8;
  param_1[1] = &PTR_DAT_110c91c30;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af236cc; end: 10af23717; -[SCCMemoriesBackupJobConfig initWithSerializedBackupRequest:] */

void FUN_10af236cc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af23dcc(PTR_PTR_1127021b8);
  func_0x00010af23de8(auStack_20);
  return;
}



/* Entry: 10af23718; end: 10af2372b; +[SCCMemoriesBackupJobConfig valdiMarshallableObjectDescriptor] */

void FUN_10af23718(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c91c40;
  param_1[1] = &PTR_DAT_110c91d78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af2372c; end: 10af2375f; -[SCCMemoriesBackupJobRetryConfig initWithRetryType:retryDelaySec:maxBackoffExponent:maxNumRetries:] */

void FUN_10af2372c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af23dcc(PTR_PTR_1127021c0);
  func_0x00010af23de8(auStack_20);
  return;
}



/* Entry: 10af23760; end: 10af23773; +[SCCMemoriesBackupJobRetryConfig valdiMarshallableObjectDescriptor] */

void FUN_10af23760(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c91da8;
  param_1[1] = &PTR_DAT_110c91e20;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23774; end: 10af237ab; -[SCCMemoriesBackupLocalNotificationData initWithTitle:subtitle:pageName:type:secondsFromNow:] */

void FUN_10af23774(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af23dcc(PTR_PTR_1127021c8);
  func_0x00010af23de8(auStack_20);
  return;
}



/* Entry: 10af237ac; end: 10af237bb; +[SCCMemoriesBackupLocalNotificationData valdiMarshallableObjectDescriptor] */

void FUN_10af237ac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_title_110c91e30;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af237bc; end: 10af237f7; -[SCCMemoriesBackupOperationParams initWithGalleryEntryId:operationType:] */

void FUN_10af237bc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af23dcc(PTR_PTR_1127021d0);
  func_0x00010af23de8(auStack_20);
  return;
}



/* Entry: 10af237f8; end: 10af2380b; +[SCCMemoriesBackupOperationParams valdiMarshallableObjectDescriptor] */

void FUN_10af237f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c91ec0;
  param_1[1] = &PTR_DAT_110c91f98;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af2380c; end: 10af23837; -[SCCMemoriesBackupOptions initWithSerializedBackupRequest:] */

void FUN_10af2380c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af23e10(PTR_PTR_1127021d8);
  func_0x00010af23de8(auStack_20);
  return;
}



/* Entry: 10af23838; end: 10af23847; +[SCCMemoriesBackupOptions valdiMarshallableObjectDescriptor] */

void FUN_10af23838(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c91fb0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23848; end: 10af23867; -[SCCMemoriesBackupResult init] */

void FUN_10af23848(void)

{
  func_0x00010af23d98(PTR_PTR_1127021e0);
  return;
}



/* Entry: 10af23868; end: 10af2387b; +[SCCMemoriesBackupResult valdiMarshallableObjectDescriptor] */

void FUN_10af23868(undefined8 *param_1)

{
  *param_1 = &PTR_s_error_110c91fe0;
  param_1[1] = &PTR_DAT_110c92010;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af2387c; end: 10af238ff; -[SCCMemoriesBackupServiceDependencies initWithBlizzardLogger:cleanupService:cofStore:flipperService:jobSchedulingDelegate:memoriesService:notificationPresenter:runtimeConditionsDelegate:statusDelegate:supRepo:tacomaVersion:thumbnailGenerationService:transcodeService:uploadService:snapDocRenderService:snapDocUploader:snapDocClaimManager:snapDocTranscoder:serializedWorker:faceTaggingNativeBridge:contentUnderstandBackfillProxy:] */

void FUN_10af2387c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127021e8;
  uStack_30 = param_1;
  func_0x00010af23de8(&uStack_30,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10af23900; end: 10af23913; +[SCCMemoriesBackupServiceDependencies valdiMarshallableObjectDescriptor] */

void FUN_10af23900(undefined8 *param_1)

{
  *param_1 = &PTR_s_application_110c92020;
  param_1[1] = &PTR_s_SCComposerFoundationApplicationP_110c92278;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23914; end: 10af23957; -[SCCMemoriesBackupStepData initWithEntryId:operationCreatedAtEpochMs:triggerLegacyImmediately:operationType:] */

void FUN_10af23914(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af23dcc(PTR_PTR_1127021f0);
  func_0x00010af23de8(auStack_20);
  return;
}



/* Entry: 10af23958; end: 10af2396b; +[SCCMemoriesBackupStepData valdiMarshallableObjectDescriptor] */

void FUN_10af23958(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c92340;
  param_1[1] = &PTR_DAT_110c92418;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af2396c; end: 10af2399b; -[SCCMemoriesBackupSummary initWithTotalEntries:unbackedUpEntries:inProgressEntries:] */

void FUN_10af2396c(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af23dcc(PTR_PTR_1127021f8);
  func_0x00010af23de8(auStack_20);
  return;
}



/* Entry: 10af2399c; end: 10af239ab; +[SCCMemoriesBackupSummary valdiMarshallableObjectDescriptor] */

void FUN_10af2399c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110c92428;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af239ac; end: 10af239d7; -[SCCMemoriesCleanupError initWithCode:] */

void FUN_10af239ac(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af23e10(PTR_PTR_112702200);
  func_0x00010af23de8(auStack_20);
  return;
}



/* Entry: 10af239d8; end: 10af239eb; +[SCCMemoriesCleanupError valdiMarshallableObjectDescriptor] */

void FUN_10af239d8(undefined8 *param_1)

{
  *param_1 = &PTR_s_code_110c92488;
  param_1[1] = &PTR_DAT_110c924d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af239ec; end: 10af23a0b; -[SCCMemoriesCleanupResult init] */

void FUN_10af239ec(void)

{
  func_0x00010af23d98(PTR_PTR_112702208);
  return;
}



/* Entry: 10af23a0c; end: 10af23a1f; +[SCCMemoriesCleanupResult valdiMarshallableObjectDescriptor] */

void FUN_10af23a0c(undefined8 *param_1)

{
  *param_1 = &PTR_s_error_110c924e0;
  param_1[1] = &PTR_DAT_110c92510;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23a20; end: 10af23a4f; -[SCCMemoriesContentUnderstandBackfillCursorResult initWithSnapId:entryId:captureTime:] */

void FUN_10af23a20(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af23dcc(PTR_PTR_112702210);
  func_0x00010af23de8(auStack_20);
  return;
}



/* Entry: 10af23a50; end: 10af23a5f; +[SCCMemoriesContentUnderstandBackfillCursorResult valdiMarshallableObjectDescriptor] */

void FUN_10af23a50(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_snapId_110c92520;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23a60; end: 10af23a7f; -[SCCMemoriesDeleteEntriesError initWithCode:] */

void FUN_10af23a60(void)

{
  func_0x00010af23dac(PTR_PTR_112702218);
  return;
}



/* Entry: 10af23a80; end: 10af23a93; +[SCCMemoriesDeleteEntriesError valdiMarshallableObjectDescriptor] */

void FUN_10af23a80(undefined8 *param_1)

{
  *param_1 = &PTR_s_code_110c92580;
  param_1[1] = &PTR_DAT_110c925f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23a94; end: 10af23ab3; -[SCCMemoriesDeleteEntriesResult init] */

void FUN_10af23a94(void)

{
  func_0x00010af23d98(PTR_PTR_112702220);
  return;
}



/* Entry: 10af23ab4; end: 10af23ac7; +[SCCMemoriesDeleteEntriesResult valdiMarshallableObjectDescriptor] */

void FUN_10af23ab4(undefined8 *param_1)

{
  *param_1 = &PTR_s_error_110c92610;
  param_1[1] = &PTR_DAT_110c92640;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23ac8; end: 10af23af7; -[SCCMemoriesGenerateThumbnailError initWithCode:] */

void FUN_10af23ac8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af23dcc(PTR_PTR_112702228);
  func_0x00010af23de8(auStack_20);
  return;
}



/* Entry: 10af23af8; end: 10af23b0b; +[SCCMemoriesGenerateThumbnailError valdiMarshallableObjectDescriptor] */

void FUN_10af23af8(undefined8 *param_1)

{
  *param_1 = &PTR_s_code_110c92650;
  param_1[1] = &PTR_DAT_110c926b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23b0c; end: 10af23b2b; -[SCCMemoriesGenerateThumbnailResult init] */

void FUN_10af23b0c(void)

{
  func_0x00010af23d98(PTR_PTR_112702230);
  return;
}



/* Entry: 10af23b2c; end: 10af23b3f; +[SCCMemoriesGenerateThumbnailResult valdiMarshallableObjectDescriptor] */

void FUN_10af23b2c(undefined8 *param_1)

{
  *param_1 = &PTR_s_error_110c926c0;
  param_1[1] = &PTR_DAT_110c926f0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23b40; end: 10af23b5f; -[SCCMemoriesSnapDocRenderError initWithCode:] */

void FUN_10af23b40(void)

{
  func_0x00010af23dac(PTR_PTR_112702238);
  return;
}



/* Entry: 10af23b60; end: 10af23b73; +[SCCMemoriesSnapDocRenderError valdiMarshallableObjectDescriptor] */

void FUN_10af23b60(undefined8 *param_1)

{
  *param_1 = &PTR_s_code_110c92700;
  param_1[1] = &PTR_DAT_110c92778;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23b74; end: 10af23b93; -[SCCMemoriesSnapDocRenderResult init] */

void FUN_10af23b74(void)

{
  func_0x00010af23d98(PTR_PTR_112702240);
  return;
}



/* Entry: 10af23b94; end: 10af23ba7; +[SCCMemoriesSnapDocRenderResult valdiMarshallableObjectDescriptor] */

void FUN_10af23b94(undefined8 *param_1)

{
  *param_1 = &PTR_s_error_110c92790;
  param_1[1] = &PTR_DAT_110c927c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23ba8; end: 10af23bc7; -[SCCMemoriesTranscodeError initWithCode:] */

void FUN_10af23ba8(void)

{
  func_0x00010af23dac(PTR_PTR_112702248);
  return;
}



/* Entry: 10af23bc8; end: 10af23bdb; +[SCCMemoriesTranscodeError valdiMarshallableObjectDescriptor] */

void FUN_10af23bc8(undefined8 *param_1)

{
  *param_1 = &PTR_s_code_110c927d0;
  param_1[1] = &PTR_DAT_110c92848;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23bdc; end: 10af23bfb; -[SCCMemoriesTranscodeMediaMetadata init] */

void FUN_10af23bdc(void)

{
  func_0x00010af23d98(PTR_PTR_112702250);
  return;
}



/* Entry: 10af23bfc; end: 10af23c0b; +[SCCMemoriesTranscodeMediaMetadata valdiMarshallableObjectDescriptor] */

void FUN_10af23bfc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_width_110c92860;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23c0c; end: 10af23c2b; -[SCCMemoriesTranscodeResult init] */

void FUN_10af23c0c(void)

{
  func_0x00010af23d98(PTR_PTR_112702258);
  return;
}



/* Entry: 10af23c2c; end: 10af23c3f; +[SCCMemoriesTranscodeResult valdiMarshallableObjectDescriptor] */

void FUN_10af23c2c(undefined8 *param_1)

{
  *param_1 = &PTR_s_error_110c928c0;
  param_1[1] = &PTR_DAT_110c92908;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23c40; end: 10af23c5f; -[SCCMemoriesUpdateEntriesError initWithCode:] */

void FUN_10af23c40(void)

{
  func_0x00010af23dac(PTR_PTR_112702260);
  return;
}



/* Entry: 10af23c60; end: 10af23c73; +[SCCMemoriesUpdateEntriesError valdiMarshallableObjectDescriptor] */

void FUN_10af23c60(undefined8 *param_1)

{
  *param_1 = &PTR_s_code_110c92920;
  param_1[1] = &PTR_DAT_110c92998;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23c74; end: 10af23c93; -[SCCMemoriesUpdateEntriesResult init] */

void FUN_10af23c74(void)

{
  func_0x00010af23d98(PTR_PTR_112702268);
  return;
}



/* Entry: 10af23c94; end: 10af23ca7; +[SCCMemoriesUpdateEntriesResult valdiMarshallableObjectDescriptor] */

void FUN_10af23c94(undefined8 *param_1)

{
  *param_1 = &PTR_s_error_110c929b0;
  param_1[1] = &PTR_DAT_110c929e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23ca8; end: 10af23cc7; -[SCCMemoriesUploadError initWithCode:] */

void FUN_10af23ca8(void)

{
  func_0x00010af23dac(PTR_PTR_112702270);
  return;
}



/* Entry: 10af23cc8; end: 10af23cdb; +[SCCMemoriesUploadError valdiMarshallableObjectDescriptor] */

void FUN_10af23cc8(undefined8 *param_1)

{
  *param_1 = &PTR_s_code_110c929f0;
  param_1[1] = &PTR_DAT_110c92a68;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23cdc; end: 10af23cfb; -[SCCMemoriesUploadResult init] */

void FUN_10af23cdc(void)

{
  func_0x00010af23d98(PTR_PTR_112702278);
  return;
}



/* Entry: 10af23cfc; end: 10af23d0f; +[SCCMemoriesUploadResult valdiMarshallableObjectDescriptor] */

void FUN_10af23cfc(undefined8 *param_1)

{
  *param_1 = &PTR_s_error_110c92a80;
  param_1[1] = &PTR_DAT_110c92ac8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23d10; end: 10af23d3f; -[SCCMemoriesUploadTagsError initWithCode:] */

void FUN_10af23d10(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010af23dcc(PTR_PTR_112702280);
  func_0x00010af23de8(auStack_20);
  return;
}



/* Entry: 10af23d40; end: 10af23d53; +[SCCMemoriesUploadTagsError valdiMarshallableObjectDescriptor] */

void FUN_10af23d40(undefined8 *param_1)

{
  *param_1 = &PTR_s_code_110c92ad8;
  param_1[1] = &PTR_DAT_110c92b38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10af23d54; end: 10af23d73; -[SCCMemoriesUploadTagsResult init] */

void FUN_10af23d54(void)

{
  func_0x00010af23d98(PTR_PTR_112702288);
  return;
}


