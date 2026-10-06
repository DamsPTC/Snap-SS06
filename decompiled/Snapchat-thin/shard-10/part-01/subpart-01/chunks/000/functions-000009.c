/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107829684; end: 10782977f;  */

void FUN_107829684(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *extraout_x9;
  code *extraout_x9_00;
  long alStack_68 [2];
  long *plStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if (((*(long *)(param_1 + 0x1e8) != 0) &&
      (lVar3 = *(long *)(*(long *)(param_1 + 0x1e8) + 0x30), lVar3 != 0)) &&
     (plVar2 = *(long **)(lVar3 + 0x128), plVar2 != (long *)0x0)) {
    plStack_58 = param_3;
    lStack_50 = param_1;
    uStack_48 = param_2;
    if ((char)param_3[3] == '\x01') {
      lVar1 = param_3[1];
      for (lVar3 = *param_3; lVar3 != lVar1; lVar3 = lVar3 + 0x38) {
        func_0x00010782a3bc();
        (*extraout_x9)(auStack_40);
        func_0x000107829878(&plStack_58,auStack_40,lVar3);
        func_0x00010782a384();
      }
    }
    else {
      (**(code **)(*plVar2 + 0x20))(alStack_68);
      plVar2 = (long *)(alStack_68[0] + 0x10);
      while (plVar2 = (long *)*plVar2, plVar2 != (long *)0x0) {
        func_0x00010782a3bc();
        (*extraout_x9_00)(auStack_40);
        func_0x000107829878(&plStack_58,auStack_40,plVar2 + 2);
        func_0x00010782a384();
      }
      func_0x000107283194(alStack_68);
    }
  }
  return;
}



/* Entry: 107829b30; end: 107829bd7;  */

long FUN_107829b30(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  plVar1 = param_1;
  func_0x000107829c04(param_1,(param_1[1] - *param_1) / 0x108 + 1);
  func_0x000107829cf0(auStack_58,plVar1,(param_1[1] - *param_1) / 0x108,param_1 + 2);
  func_0x000107829bd8(lStack_48,param_2);
  lStack_48 = lStack_48 + 0x108;
  func_0x000107829c64(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x000107829e10(auStack_58);
  return lVar2;
}



/* Entry: 107829e44; end: 107829e7b;  */

void FUN_107829e44(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x108;
    func_0x000107269e60();
  }
  return;
}



/* Entry: 10782a088; end: 10782a09b;  */

void FUN_10782a088(void)

{
  func_0x00010782a05c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10782a1f4; end: 10782a217;  */

void FUN_10782a1f4(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109e0910;
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  lVar1 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010782a364();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10782a920; end: 10782a933;  */

void FUN_10782a920(void)

{
  func_0x00010782a984();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10782aae4; end: 10782abef;  */

void FUN_10782aae4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  long *aplStack_40 [2];
  
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010726fc00(aplStack_40,param_1 + 0x10);
  if (aplStack_40[0] == (long *)0x0) {
    func_0x0001072508cc(aplStack_40);
  }
  else {
    lVar3 = *aplStack_40[0];
    func_0x0001072508cc(aplStack_40);
    if ((lVar3 != -1) && (*(long *)(lVar2 + 0x368) == *(long *)(param_1 + 0x28))) {
      func_0x00010782921c(&plStack_48,&uStack_60,lVar2 + 0x1b8);
      aplStack_40[0] = plStack_48;
      plStack_48 = (long *)0x0;
      func_0x00010782d44c(lVar2,aplStack_40,0,0);
      plVar1 = aplStack_40[0];
      aplStack_40[0] = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        func_0x00010782ac78();
      }
      plVar1 = plStack_48;
      plStack_48 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        func_0x00010782ac78();
      }
    }
  }
  func_0x0001072c8f3c(&uStack_60);
  return;
}



/* Entry: 10782af98; end: 10782b007;  */

undefined1 * FUN_10782af98(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined1 auStack_60 [56];
  undefined8 uStack_28;
  
  puVar1 = auStack_60;
  puVar2 = auStack_60;
  func_0x00010782b658();
  uStack_28 = extraout_x8;
  func_0x000104c2fe00(auStack_60,0x1138369c0);
  func_0x0001072cd9a0();
  func_0x000104c2f714(auStack_60);
  func_0x00010782b644(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000104c2f714();
    func_0x00010782b610();
    return (undefined1 *)
           ((((long *)**(undefined8 **)(puVar2 + 8))[1] - *(long *)**(undefined8 **)(puVar2 + 8)) /
           0x70);
  }
  return puVar1;
}



/* Entry: 10782b394; end: 10782b397;  */

long FUN_10782b394(long param_1)

{
  return (((long *)**(undefined8 **)(param_1 + 8))[1] - *(long *)**(undefined8 **)(param_1 + 8)) /
         0x70;
}



/* Entry: 10782b5a0; end: 10782b5af;  */

void FUN_10782b5a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e0c68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10782bd58; end: 10782bdd3;  */

void FUN_10782bd58(undefined1 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0xe8);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x128) & 1) != 0)) {
    func_0x00010782bdd4(lVar2 + 0x60);
    lVar1 = lVar2 + 0x100;
    func_0x0001073f9894(lVar1,param_3);
    func_0x00010782bdd4(lVar2 + 0x60);
    if (lVar2 + 0x108 != lVar1) {
      func_0x0001073f6580(param_1,lVar1 + 0x58);
      param_1[0x68] = 1;
      return;
    }
  }
  *param_1 = 0;
  param_1[0x68] = 0;
  return;
}



/* Entry: 10782c7f0; end: 10782cb2b;  */

void FUN_10782c7f0(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_a8;
  long lStack_a0;
  int iStack_90;
  int iStack_8c;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar11 = *(long *)(param_1 + 0xe8);
  if (lVar11 != 0) {
    if (*(char *)(lVar11 + 0x128) == '\x01') {
      func_0x000107832f10();
      func_0x000107461028(&puStack_d0,lVar11 + 0x60,*param_2,*(undefined8 *)(param_1 + 0x98));
      puVar15 = puStack_c8;
      for (puVar12 = puStack_d0; puVar12 != puVar15; puVar12 = puVar12 + 3) {
        func_0x00010747b888(*param_2,*puVar12);
        lVar11 = *(long *)(param_1 + 0xe8);
        func_0x00010782bf00(lVar11 + 0x60);
        func_0x0001072eb630(lVar11 + 0xc0,*puVar12);
      }
      if (*(long *)(param_1 + 0x110) != 0) {
        func_0x000107462424(param_1 + 0x110);
        __ZdlPv(*(undefined8 *)(param_1 + 0x110));
        *(undefined8 *)(param_1 + 0x110) = 0;
        *(undefined8 *)(param_1 + 0x118) = 0;
        *(undefined8 *)(param_1 + 0x120) = 0;
      }
      *(undefined8 **)(param_1 + 0x118) = puStack_c8;
      *(undefined8 **)(param_1 + 0x110) = puStack_d0;
      *(undefined8 *)(param_1 + 0x120) = uStack_c0;
      puStack_c8 = (undefined8 *)0x0;
      uStack_c0 = 0;
      puStack_d0 = (undefined8 *)0x0;
      *(bool *)(param_1 + 0x130) = lStack_a0 == 0;
      uStack_78 = uStack_78 & 0xffffffffffffff00;
      lVar11 = *(long *)(param_1 + 0x98) + 0x800;
      func_0x00010724e2c8(lVar11,&uStack_78);
      if ((int)lVar11 != 0) {
        if (((*(long *)(param_1 + 0x110) != *(long *)(param_1 + 0x118)) &&
            (lVar11 = *(long *)(param_1 + 8), lVar11 != 0)) &&
           (*(long *)(lVar11 + 0x58) != *(long *)(lVar11 + 0x60))) {
          lVar11 = *(long *)(param_1 + 0xe8);
          func_0x00010782bf00(lVar11 + 0x60);
          bVar6 = false;
          puVar12 = *(undefined8 **)(param_1 + 0x118);
          for (puVar15 = *(undefined8 **)(param_1 + 0x110); puVar15 != puVar12;
              puVar15 = puVar15 + 3) {
            lVar7 = lVar11 + 0xe8;
            func_0x0001073f9894(lVar7,*puVar15);
            if (lVar11 + 0xf0 != lVar7) {
              lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x58);
              if (((ulong)*(uint *)(lVar7 + 100) <
                   (ulong)(*(long *)(*(long *)(param_1 + 8) + 0x60) - lVar3 >> 5)) &&
                 (puVar2 = (uint *)(lVar3 + (ulong)*(uint *)(lVar7 + 100) * 0x20),
                 (char)puVar2[6] == '\x01')) {
                piVar8 = (int *)*puVar15;
                func_0x00010778196c();
                uVar4 = *(ushort *)(puVar15 + 2);
                uVar5 = *(ushort *)((long)puVar15 + 0x12);
                piVar9 = piVar8;
                func_0x0001074344b4();
                if ((((int)piVar9 == 0) ||
                    ((puVar10 = puVar2, func_0x0001074344b4(), (int)puVar10 == 0 ||
                     (*puVar2 < *piVar8 + uVar4 + 1)))) ||
                   (iVar1 = uVar5 + 1, puVar2[1] < (uint)(piVar8[1] + iVar1))) {
                  uVar13 = *(undefined8 *)(param_1 + 0x90);
                  func_0x00010002b838(&uStack_78,&UNK_10f42af88);
                  func_0x00010724ef84(&iStack_90,*puVar15);
                  func_0x00010782c6c4(uVar13,param_1 + 0xa0,&uStack_78);
                  func_0x00010783318c();
                  func_0x000107833434();
                }
                else {
                  uStack_78 = 0;
                  iStack_90 = uVar4 + 1;
                  iStack_8c = iVar1;
                  func_0x00010746671c(piVar8,puVar2,&uStack_78,&iStack_90,piVar8);
                  bVar6 = true;
                }
              }
            }
          }
          if (bVar6) {
            *(long *)(*(long *)(param_1 + 8) + 0x70) = *(long *)(*(long *)(param_1 + 8) + 0x70) + 1;
          }
        }
        if (lStack_a0 != *(long *)(param_1 + 0x128)) {
          *(long *)(param_1 + 0x128) = lStack_a0;
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_68 = 0;
          lVar11 = 4;
          for (plVar14 = (long *)lStack_a8; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
            if (lVar11 == 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                        (&uStack_78,&DAT_10f2c0b71);
              break;
            }
            func_0x00010724ef84(&iStack_90,plVar14 + 2);
            func_0x0001004c3ca0(&uStack_78,&iStack_90);
            func_0x00010783318c();
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                      (&uStack_78," ");
            lVar11 = lVar11 + -1;
          }
          func_0x000107833434();
        }
      }
      func_0x000107831200(&puStack_d0);
    }
    else {
      *(undefined1 *)(param_1 + 0x130) = 1;
    }
  }
  return;
}



/* Entry: 10782d3a0; end: 10782d3b3;  */

void FUN_10782d3a0(void)

{
  func_0x00010782d270();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10782df18; end: 10782e11f;  */

void FUN_10782df18(ulong param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long extraout_x8;
  undefined8 extraout_x9;
  int extraout_w10;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 in_register_00005008;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long alStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *(undefined1 *)(param_2 + 0x89) = 1;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  func_0x0001074f0fd4(&uStack_d0,param_3[1] - *param_3 >> 4);
  plVar1 = (long *)param_3[1];
  for (param_3 = (long *)*param_3; param_3 != plVar1; param_3 = param_3 + 2) {
    in_register_00005008 = 0;
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)(param_2 + 0xc));
    param_1 = (ulong)(uint)fVar10;
    if (((float)(int)*(float *)(*(long *)(*param_3 + 8) + 0x130) <= fVar10) &&
       (fVar10 < (float)(int)*(float *)(*(long *)(*param_3 + 8) + 0x134))) {
      func_0x0001074f7304(&uStack_d0,param_3);
    }
  }
  func_0x000107833200();
  func_0x000107832ee8();
  uStack_e0 = param_1;
  uStack_d8 = in_register_00005008;
  if (extraout_x8 != 0) {
    do {
      func_0x000107832cb4();
    } while (extraout_w10 != 0);
  }
  lVar8 = *(long *)(param_2 + 0x278);
  func_0x00010724bb70(alStack_b0,&uStack_e0);
  if (alStack_b0[0] != 0) {
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    uStack_90 = uStack_c0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    puVar7 = &uStack_88;
    func_0x0001073dd510(puVar7,lVar8 + 0x70);
    uVar9 = *(undefined8 *)(param_2 + 0x1e0);
    uStack_78 = uVar9;
    func_0x00010783348c();
    uVar6 = uStack_80;
    uVar5 = uStack_88;
    uVar4 = uStack_90;
    uVar3 = uStack_98;
    uVar2 = uStack_a0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    *puVar7 = &PTR_DAT_1109e12a8;
    puVar7[1] = extraout_x9;
    puVar7[2] = &UNK_107845084;
    puVar7[3] = 0;
    puVar7[5] = uVar3;
    puVar7[4] = uVar2;
    puVar7[6] = uVar4;
    puStack_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    puVar7[8] = uVar6;
    puVar7[7] = uVar5;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_48 = uVar9;
    puVar7[9] = uVar9;
    func_0x00010783218c(&puStack_70);
    puStack_70 = puVar7;
    func_0x00010783218c(&uStack_a0);
    func_0x000107833224();
    puVar7 = puStack_70;
    puStack_70 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      func_0x000107832c60();
    }
  }
  func_0x00010724bcd8(alStack_b0);
  func_0x0001078331f8();
  func_0x0001074f4f04(&uStack_d0);
  return;
}



/* Entry: 10782ec4c; end: 10782ecef;  */

void FUN_10782ec4c(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plStack_38;
  long lStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x260);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x270);
    plVar4 = (long *)*param_2;
    plStack_38 = &lStack_30;
    plVar3 = param_2 + 1;
    lStack_30 = *plVar3;
    lStack_28 = param_2[2];
    if (lStack_28 != 0) {
      *(long **)(lStack_30 + 0x10) = plStack_38;
      *param_2 = (long)plVar3;
      *plVar3 = 0;
      param_2[2] = 0;
      lVar1 = *(long *)(param_1 + 0x260);
      plStack_38 = plVar4;
    }
    func_0x00010780df20(uVar2,param_1 + 0x128,&plStack_38,lVar1,param_3);
    func_0x000107810050(&plStack_38);
  }
  return;
}



/* Entry: 10782f3bc; end: 10782f423;  */

void FUN_10782f3bc(int param_1,long param_2)

{
  if ((param_1 == 1) || (param_1 == 2)) {
    func_0x0001078331b4(param_1,PTR_DAT_1131ad580);
    func_0x000107832e90();
    func_0x000107832ec4();
    *(undefined1 *)(param_2 + 0x4c) = 1;
  }
  return;
}



/* Entry: 10782fa18; end: 10782fab3;  */

bool FUN_10782fa18(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x1e8);
  func_0x00010782fab4(lVar1,*(undefined8 *)(*param_2 + 8));
  if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + 0x10), lVar2 != *param_2)) {
    func_0x000107833144();
    (*extraout_x8)();
    lVar3 = *param_2;
    func_0x000107833144();
    (*extraout_x8_00)();
    if (lVar2 == lVar3) {
      lVar3 = param_2[1];
      lVar2 = *param_2;
      if (param_2[1] != 0) {
        do {
          func_0x000107832cb4();
        } while (extraout_w10 != 0);
      }
      uStack_38 = *(undefined8 *)(lVar1 + 0x18);
      uStack_40 = *(undefined8 *)(lVar1 + 0x10);
      *(long *)(lVar1 + 0x18) = lVar3;
      *(long *)(lVar1 + 0x10) = lVar2;
      func_0x0001073ad37c(&uStack_40);
    }
  }
  return lVar1 != 0;
}



/* Entry: 1078300cc; end: 1078301db;  */

void FUN_1078300cc(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 extraout_x8;
  ulong uVar10;
  undefined8 *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [40];
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 auStack_e8 [6];
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  lVar12 = param_1;
  func_0x000107832d74();
  iVar9 = *(int *)(lVar12 + 0x340);
  uVar3 = iVar9 == 1;
  uStack_38 = extraout_x8;
  if ((bool)uVar3) {
    lVar11 = *(long *)(param_1 + 0x360);
    unaff_x20 = *(undefined8 **)(param_1 + 0x80);
    __ZNSt3__16chrono12steady_clock3nowEv();
    lStack_78 = (lVar12 - lVar11) / 1000;
    auStack_e8[0] = 0x40;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107832d10();
    uStack_c0 = 0;
    uStack_a0 = 0;
    uStack_9c = 1;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    func_0x00010783344c(auStack_70);
    func_0x000107832ecc();
    func_0x000107371bc4(auStack_e8);
    func_0x0001078331bc();
    uStack_f8 = *unaff_x20;
    uStack_f0 = 3;
    plVar4 = &lStack_78;
    func_0x00010743f9dc(unaff_x20,auStack_e8,plVar4,&uStack_f8,7);
    param_3 = (int)plVar4;
    func_0x000107262330(auStack_e8);
    iVar9 = *(int *)(param_1 + 0x340);
  }
  plVar4 = (long *)(ulong)(iVar9 - 1U);
  *(uint *)(param_1 + 0x340) = iVar9 - 1U;
  func_0x000107832c6c(uStack_38);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = auStack_e8;
  func_0x000107262330();
  func_0x000107832e28();
  func_0x000107832fc8();
  uStack_1c8 = 0;
  if (*(long *)(puVar5 + 0x7a) != 0) {
    uStack_1c8 = *(undefined8 *)(*(long *)(puVar5 + 0x7a) + 0x1a0);
  }
  lStack_1c0 = plVar4[0x3c];
  func_0x0001074f5878(auStack_1b8,unaff_x20 + 2);
  func_0x0001074f5878(auStack_1a0,unaff_x20 + 5);
  func_0x0001074f5904(auStack_188,unaff_x20 + 8);
  uVar6 = plVar4[0x6a];
  if (uVar6 < (ulong)plVar4[0x6b]) {
    FUN_107832a48(uVar6,&uStack_1c8);
    lVar12 = uVar6 + 0x68;
  }
  else {
    lVar12 = uVar6 - plVar4[0x69];
    uVar6 = lVar12 / 0x68 + 1;
    if (0x276276276276276 < uVar6) {
      func_0x000107832ae4();
code_r0x0001078303c0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1078303c4);
      (*pcVar2)();
    }
    uVar1 = (plVar4[0x6b] - plVar4[0x69]) / 0x68;
    uVar10 = uVar1 * 2;
    if (uVar10 < uVar6 || uVar10 - uVar6 == 0) {
      uVar10 = uVar6;
    }
    if (0x13b13b13b13b13a < uVar1) {
      uVar10 = 0x276276276276276;
    }
    if (uVar10 == 0) {
      lVar11 = 0;
    }
    else {
      if (0x276276276276276 < uVar10) {
        func_0x000104bd35f4();
        goto code_r0x0001078303c0;
      }
      lVar11 = uVar10 * 0x68;
      __Znwm();
    }
    lVar12 = lVar11 + lVar12;
    FUN_107832a48(lVar12,&uStack_1c8);
    lVar14 = plVar4[0x6a];
    lVar13 = plVar4[0x69];
    lVar15 = lVar12 + ((lVar14 - lVar13) / -0x68) * 0x68;
    lVar7 = lVar15;
    for (lVar8 = lVar13; lVar8 != lVar14; lVar8 = lVar8 + 0x68) {
      FUN_107832a48(lVar7,lVar8);
      lVar7 = lVar7 + 0x68;
    }
    for (; lVar13 != lVar14; lVar13 = lVar13 + 0x68) {
      func_0x00010750f290(lVar13 + 0x10);
    }
    lVar12 = lVar12 + 0x68;
    lVar8 = plVar4[0x69];
    plVar4[0x69] = lVar15;
    plVar4[0x6a] = lVar12;
    plVar4[0x6b] = lVar11 + uVar10 * 0x68;
    if (lVar8 != 0) {
      __ZdlPv();
    }
  }
  plVar4[0x6a] = lVar12;
  func_0x00010750f290(auStack_1b8);
  if (param_3 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4,*unaff_x20,unaff_x20[1]);
  }
  return;
}



/* Entry: 107830f20; end: 107830f3f;  */

void FUN_107830f20(void)

{
  func_0x0001078315b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107831074; end: 10783107b;  */

undefined1  [16] FUN_107831074(long *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  func_0x0001074662f4(param_1,param_2,&uStack_38,auStack_40,param_3);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    func_0x00010783110c(alStack_58,param_1,param_3);
    func_0x000107466400(param_1,uStack_38,plVar2,alStack_58[0]);
    lVar3 = alStack_58[0];
    alStack_58[0] = 0;
    func_0x0001074664e0(alStack_58);
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 107831294; end: 1078312d3;  */

void FUN_107831294(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010783323c();
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != unaff_x19; lVar1 = lVar1 + -0x68) {
    func_0x00010750f290(lVar1 + -0x58);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10783147c; end: 1078315e7;  */

void FUN_10783147c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107832fc8();
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107831560(param_1 + 2,param_2 + 2);
  func_0x000107831560(unaff_x19 + 0x28,unaff_x20 + 0x28);
  if (*(long *)(unaff_x19 + 0x58) != 0) {
    func_0x00010747ca00(unaff_x19 + 0x40,*(undefined8 *)(unaff_x19 + 0x50));
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
    lVar4 = *(long *)(unaff_x19 + 0x48);
    for (lVar3 = 0; lVar4 != lVar3; lVar3 = lVar3 + 1) {
      *(undefined8 *)(*(long *)(unaff_x19 + 0x40) + lVar3 * 8) = 0;
    }
    *(undefined8 *)(unaff_x19 + 0x58) = 0;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  func_0x00010747e9e4(unaff_x19 + 0x40,uVar2);
  lVar3 = *(long *)(unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(long *)(unaff_x19 + 0x50) = lVar3;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  lVar4 = *(long *)(unaff_x20 + 0x58);
  *(long *)(unaff_x19 + 0x58) = lVar4;
  *(undefined4 *)(unaff_x19 + 0x60) = *(undefined4 *)(unaff_x20 + 0x60);
  if (lVar4 != 0) {
    uVar5 = *(ulong *)(lVar3 + 8);
    uVar6 = *(ulong *)(unaff_x19 + 0x48);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(*(long *)(unaff_x19 + 0x40) + uVar5 * 8) = (long *)(unaff_x19 + 0x50);
    *(long *)(unaff_x20 + 0x50) = 0;
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
  }
  return;
}



/* Entry: 107831750; end: 107831763;  */

void FUN_107831750(void)

{
  func_0x00010783178c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078319b4; end: 1078319df;  */

void FUN_1078319b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_2[3] = 0;
  param_2[4] = 0;
  param_1[5] = param_2[5];
  return;
}



/* Entry: 107831afc; end: 107831b4b;  */

void FUN_107831afc(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  uint extraout_w11;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107832e7c();
  lVar1 = extraout_x8;
  pcVar2 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    func_0x0001078334f8();
    lVar1 = extraout_x8_00;
    pcVar2 = extraout_x9_00;
  }
  uStack_28 = *(undefined8 *)(lVar1 + 0x30);
  uStack_30 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  (*pcVar2)(param_1,*(undefined8 *)(lVar1 + 0x20),&uStack_30,*(undefined8 *)(lVar1 + 0x38));
  func_0x00010783303c();
  return;
}



/* Entry: 107831d60; end: 107831d77;  */

void FUN_107831d60(long *param_1,long param_2)

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



/* Entry: 1078320a8; end: 1078320b3;  */

void FUN_1078320a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1258;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107832320; end: 1078323bb;  */

long FUN_107832320(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_2;
    }
    else {
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_2 / uVar3;
        }
        uVar5 = param_2 - uVar5 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar2[1];
        if (uVar6 != param_2) break;
        if (plVar2[2] == param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar3 <= uVar6) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar6 / uVar3;
        }
        uVar6 = uVar6 - uVar1 * uVar3;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 107832598; end: 107832617;  */

void FUN_107832598(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_50;
  long *plStack_48;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar2 = (long *)*param_5;
  plStack_48 = &lStack_40;
  plVar1 = param_5 + 1;
  lStack_40 = *plVar1;
  lStack_38 = param_5[2];
  if (lStack_38 != 0) {
    *(long **)(lStack_40 + 0x10) = plStack_48;
    *param_5 = (long)plVar1;
    *plVar1 = 0;
    param_5[2] = 0;
    plStack_48 = plVar2;
  }
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x000107832618(&uStack_50,param_2,&uStack_30,&plStack_48);
  *param_1 = uStack_50;
  func_0x0001078330c8();
  return;
}



/* Entry: 1078327dc; end: 10783284f;  */

void FUN_1078327dc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x22;
  undefined1 auStack_c0 [128];
  
  func_0x000107832f48();
  uVar1 = 0xa0;
  __Znwm();
  func_0x000107832938(auStack_c0);
  func_0x000107832978(uVar1);
  *unaff_x22 = uVar1;
  func_0x000107832a18(auStack_c0);
  return;
}



/* Entry: 107832a48; end: 107832ae3;  */

void FUN_107832a48(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  uVar7 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar7;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar7 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar7;
  lVar4 = param_2[10];
  param_1[4] = param_2[4];
  param_2[6] = 0;
  param_2[5] = 0;
  lVar1 = param_2[8];
  param_2[8] = 0;
  param_1[7] = param_2[7];
  param_1[8] = lVar1;
  uVar7 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar7;
  param_2[9] = 0;
  lVar3 = param_2[0xb];
  param_1[0xb] = lVar3;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[9];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar2 = 0;
      if (uVar6 != 0) {
        uVar2 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar2 * uVar6;
    }
    *(undefined8 **)(lVar1 + uVar5 * 8) = param_1 + 10;
    param_2[10] = 0;
    param_2[0xb] = 0;
  }
  return;
}



/* Entry: 1078336b0; end: 10783376b;  */

bool FUN_1078336b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_120 [208];
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    _bzero(auStack_120,0xd0);
    func_0x000107836398(param_1,auStack_120);
    func_0x000107836a0c(param_1,auStack_120,param_2,param_4,param_5);
    func_0x0001078377b0(auStack_120);
    func_0x0001078415cc(param_3,auStack_120,*(undefined1 *)(param_1 + 0x30));
    FUN_10784193c(auStack_120);
  }
  return lVar1 != 0;
}



/* Entry: 107834100; end: 1078344c7;  */

/* WARNING: Possible PIC construction at 0x000107834620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107834630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107834624) */
/* WARNING: Removing unreachable block (ram,0x000107834634) */

void FUN_107834100(long *param_1,double param_2,int *param_3,long param_4,long *param_5,
                  long *param_6)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 ****ppppuVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined *puVar12;
  undefined8 extraout_x8;
  long extraout_x8_00;
  double extraout_x8_01;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 ****ppppuVar17;
  double unaff_d8;
  undefined1 ***pppuStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  long *plStack_128;
  long lStack_120;
  long lStack_118;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined1 **ppuStack_f0;
  undefined *puStack_e8;
  double *pdStack_e0;
  double *pdStack_d8;
  double *pdStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_68;
  
  piVar6 = param_3;
  func_0x000107842d2c();
  uStack_68 = extraout_x8;
  func_0x000107842688();
  uVar5 = SUB84(piVar6,0);
  dStack_b8 = param_2 * unaff_d8;
  dStack_c0 = (double)NEON_ucvtf((ulong)*(uint *)(param_4 + 4));
  dStack_c0 = unaff_d8 * dStack_c0;
  dStack_c8 = (double)NEON_ucvtf((ulong)*(uint *)(param_4 + 8));
  dStack_c8 = unaff_d8 * dStack_c8;
  pdStack_e0 = &dStack_b8;
  pdStack_d8 = &dStack_c0;
  pdStack_d0 = &dStack_c8;
  iVar2 = *param_3;
  uVar4 = iVar2 == 7;
  if ((bool)uVar4) {
LAB_107834178:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    uVar4 = iVar2 == 6;
    if ((bool)uVar4) {
      func_0x0001078429b4(*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4));
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
      param_5 = (long *)0x1;
      func_0x00010737c664(&uStack_90,&uStack_b0);
      func_0x0001078429e0();
    }
    else {
      if (iVar2 == 5) {
        uStack_90 = 0;
        uStack_88 = 0;
        puStack_80 = (undefined1 *)0x0;
        func_0x000107842f6c(*(undefined8 *)(param_3 + 4));
        func_0x000107842cf4();
        puVar14 = *(undefined8 **)(param_3 + 4);
        for (puVar7 = *(undefined8 **)(param_3 + 2); uVar4 = puVar7 == puVar14, !(bool)uVar4;
            puVar7 = puVar7 + 2) {
          func_0x0001078429b4(*puVar7,puVar7[1]);
          uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)piVar6);
          func_0x0001078426bc();
        }
        func_0x000107842cc0();
        func_0x0001078429e0();
      }
      else {
        if (iVar2 == 4) {
          func_0x0001078425dc();
          func_0x000107843088();
          plVar9 = *(long **)(param_3 + 4);
          for (plVar13 = *(long **)(param_3 + 2); uVar4 = plVar13 == plVar9, !(bool)uVar4;
              plVar13 = plVar13 + 3) {
            uStack_88 = 0;
            puStack_80 = (undefined1 *)0x0;
            uStack_90 = 0;
            func_0x000107842f6c(plVar13[1]);
            func_0x000107842cf4();
            puVar14 = (undefined8 *)plVar13[1];
            for (puVar7 = (undefined8 *)*plVar13; puVar7 != puVar14; puVar7 = puVar7 + 2) {
              func_0x0001078429b4(*puVar7,puVar7[1]);
              uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)piVar6);
              func_0x0001078426bc();
            }
            func_0x0001078430d4();
            func_0x000107842cfc();
          }
          goto LAB_107834264;
        }
        if (iVar2 != 3) {
          if (iVar2 == 2) {
            func_0x0001078425dc();
            func_0x000107843088();
            plVar9 = *(long **)(param_3 + 4);
            for (plVar13 = *(long **)(param_3 + 2); uVar4 = plVar13 == plVar9, !(bool)uVar4;
                plVar13 = plVar13 + 3) {
              uStack_a8 = 0;
              uStack_a0 = 0;
              uStack_b0 = 0;
              func_0x000107842f6c(plVar13[1]);
              puVar7 = &uStack_b0;
              func_0x000104c33d24();
              puVar16 = (undefined8 *)plVar13[1];
              for (puVar14 = (undefined8 *)*plVar13; uVar5 = SUB84(puVar7,0), puVar14 != puVar16;
                  puVar14 = puVar14 + 2) {
                func_0x0001078429b4(*puVar14,puVar14[1]);
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar5);
                puVar7 = &uStack_b0;
                func_0x0001072c7768(puVar7,&uStack_90);
              }
              uVar8 = param_1[1];
              if (uVar8 < (ulong)param_1[2]) {
                func_0x000107842134(uVar8,&uStack_b0);
                lVar15 = uVar8 + 0x18;
              }
              else {
                func_0x000107842ab4((long)(uVar8 - *param_1) / 0x18);
                func_0x00010737ccb4();
                param_5 = (long *)((param_1[1] - *param_1) / 0x18);
                param_6 = param_1 + 2;
                func_0x00010737ca74(&uStack_90,uVar8);
                func_0x000107842134(puStack_80,&uStack_b0);
                puStack_80 = puStack_80 + 0x18;
                func_0x00010737c9f4(param_1,&uStack_90);
                lVar15 = param_1[1];
                func_0x00010737cb7c(&uStack_90);
              }
              param_1[1] = lVar15;
              func_0x0001078430ac();
            }
            goto LAB_107834264;
          }
          uVar4 = false;
          if (iVar2 == 1) {
            func_0x0001078425dc();
            func_0x000107843088();
            puVar14 = *(undefined8 **)(param_3 + 4);
            for (puVar7 = *(undefined8 **)(param_3 + 2); uVar4 = puVar7 == puVar14, !(bool)uVar4;
                puVar7 = puVar7 + 3) {
              plVar9 = (long *)puVar7[1];
              for (plVar13 = (long *)*puVar7; plVar13 != plVar9; plVar13 = plVar13 + 3) {
                uStack_88 = 0;
                puStack_80 = (undefined1 *)0x0;
                uStack_90 = 0;
                func_0x000107842f6c(plVar13[1]);
                func_0x000107842cf4();
                puVar1 = (undefined8 *)plVar13[1];
                for (puVar16 = (undefined8 *)*plVar13; puVar16 != puVar1; puVar16 = puVar16 + 2) {
                  func_0x0001078429b4(*puVar16,puVar16[1]);
                  uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)piVar6);
                  func_0x0001078426bc();
                }
                func_0x0001078430d4();
                func_0x000107842cfc();
              }
            }
            goto LAB_107834264;
          }
          goto LAB_107834178;
        }
        uStack_90 = 0;
        uStack_88 = 0;
        puStack_80 = (undefined1 *)0x0;
        func_0x000107842f6c(*(undefined8 *)(param_3 + 4));
        func_0x000107842cf4();
        puVar14 = *(undefined8 **)(param_3 + 4);
        for (puVar7 = *(undefined8 **)(param_3 + 2); uVar4 = puVar7 == puVar14, !(bool)uVar4;
            puVar7 = puVar7 + 2) {
          func_0x0001078429b4(*puVar7,puVar7[1]);
          uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)piVar6);
          func_0x0001078426bc();
        }
        func_0x000107842cc0();
        func_0x0001078429e0();
      }
      func_0x0001078430ac();
    }
    func_0x000107842cfc();
  }
LAB_107834264:
  func_0x0001078429fc(uStack_68);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072977d0();
  func_0x000107842744();
  puVar12 = &UNK_1078344c8;
  func_0x000107843250();
  plVar13 = param_1;
  puStack_80 = &stack0xfffffffffffffff0;
  puStack_78 = puVar12;
  func_0x000107842d2c();
  dStack_b8 = extraout_x8_01;
  (**(code **)(*plVar13 + 0x48))();
  func_0x0001078428c8(&pdStack_d8);
  func_0x000107833d7c();
  func_0x000100660238();
  func_0x0001078349a8();
  func_0x000104c3365c(&pdStack_d8);
  plVar13 = param_1;
  (**(code **)(*param_1 + 0x20))(param_1);
  func_0x00010729c0e4(extraout_x8_00 + 0x20,plVar13);
  plVar9 = param_1;
  (**(code **)(*param_1 + 0x30))();
  plVar13 = (long *)(extraout_x8_00 + 0x30);
  func_0x00010729c0b0();
  if ((char)param_5[7] == '\x01') {
    plVar9 = param_5;
    func_0x00010725ffc4();
    plVar13 = (long *)(extraout_x8_00 + 0x70);
    func_0x000107262f3c();
  }
  uVar4 = (char)param_6[7] == '\x01';
  if ((bool)uVar4) {
    func_0x00010725ffc4();
    plVar13 = (long *)(extraout_x8_00 + 0xa8);
    func_0x000107262f3c();
    plVar9 = param_6;
  }
  func_0x0001078429fc(dStack_b8);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  plVar10 = plVar13;
  func_0x000107842744();
  ppppuVar3 = (undefined1 ****)auStack_130;
  puStack_e8 = &UNK_1078345cc;
  plVar11 = plVar10 + 2;
  if ((long *)(*plVar11 - *plVar10 >> 3) < plVar9) {
    plStack_100 = plVar13;
    ppuStack_f0 = &puStack_80;
    if ((ulong)plVar9 >> 0x3d == 0) {
      plVar13 = (long *)(plVar10[1] - *plVar10);
      plStack_108 = plVar11;
      func_0x00010783466c();
      lStack_120 = (long)plVar11 + (long)plVar13;
      plStack_110 = plVar11 + (long)plVar9;
      plStack_128 = plVar11;
      lStack_118 = lStack_120;
      func_0x000100660238();
      puVar12 = &UNK_107834624;
      ppppuVar17 = (undefined1 ****)&ppuStack_f0;
    }
    else {
      ppppuVar3 = &pppuStack_140;
      ppppuVar17 = &pppuStack_140;
      puStack_138 = &UNK_107834634;
      puVar12 = &SUB_10783464c;
      pppuStack_140 = &ppuStack_f0;
      func_0x0001078423e8();
    }
    *(long **)((long)ppppuVar3 + -0x30) = param_1;
    *(long **)((long)ppppuVar3 + -0x28) = param_5;
    *(long **)((long)ppppuVar3 + -0x20) = plVar13;
    *(long **)((long)ppppuVar3 + -0x18) = plVar10;
    *(undefined1 *****)((long)ppppuVar3 + -0x10) = ppppuVar17;
    *(undefined **)((long)ppppuVar3 + -8) = puVar12;
    func_0x000107842254();
    func_0x00010784214c();
    return;
  }
  return;
}



/* Entry: 1078346d4; end: 1078346f7;  */

void FUN_1078346d4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10783486c; end: 1078348bb;  */

undefined8 FUN_10783486c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000107842394();
  func_0x00010737ccb4();
  func_0x0001078423f4();
  func_0x00010737ca74();
  func_0x0001078423b4();
  func_0x000100660238();
  func_0x00010737c9f4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107842770();
  return uVar1;
}



/* Entry: 107834afc; end: 107834b1f;  */

void FUN_107834afc(void)

{
  func_0x000107842734();
  func_0x000107834b20();
  return;
}



/* Entry: 1078350c4; end: 1078357a7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1078350c4(long param_1,undefined8 param_2,byte param_3)

{
  int ******ppppppiVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined5 uVar6;
  int7 iVar7;
  code *pcVar8;
  bool bVar9;
  int *******pppppppiVar10;
  long lVar11;
  int ******ppppppiVar12;
  long lVar13;
  ulong uVar14;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x9;
  int *extraout_x9_00;
  int *extraout_x9_01;
  int *piVar15;
  int *******pppppppiVar16;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  int *extraout_x11;
  ulong extraout_x11_00;
  uint extraout_w12;
  uint extraout_w12_00;
  ulong uVar17;
  ulong extraout_x12;
  ulong extraout_x13;
  long extraout_x13_00;
  long *unaff_x19;
  int *******pppppppiVar18;
  int *******pppppppiVar19;
  int *******pppppppiVar20;
  int ******ppppppiVar21;
  int *******pppppppiStack_138;
  int *******pppppppiStack_130;
  int *******pppppppiStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined3 uStack_e8;
  undefined5 uStack_e5;
  undefined3 uStack_e0;
  undefined4 uStack_dd;
  undefined1 uStack_d9;
  undefined1 uStack_d8;
  byte bStack_d7;
  undefined1 uStack_d6;
  int ******ppppppiStack_d0;
  int ******ppppppiStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int *******pppppppiStack_98;
  undefined8 uStack_90;
  undefined3 uStack_88;
  undefined5 uStack_85;
  undefined3 uStack_80;
  undefined8 uStack_7d;
  
  func_0x0001078429a8();
  lVar13 = unaff_x19[1];
  if (param_1 != lVar13) {
    if (2 < (ulong)((lVar13 - param_1) / 0x18)) {
      uVar14 = 0x7ff0000000000000;
      uVar17 = (ulong)((*(ulong *)(lVar13 + -8) & 0x7fffffffffffffff) == 0x7ff0000000000000);
      lVar11 = lVar13 + -0x18;
      for (; (param_1 != lVar13 &&
             (((uVar17 & 1) != 0 || (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) == uVar14 ||
              (*(int *)(param_1 + 8) != *(int *)(lVar11 + 8) ||
               *(int *)(param_1 + 0xc) != *(int *)(lVar11 + 0xc))))); param_1 = param_1 + 0x18) {
        func_0x0001078432ac();
        if ((extraout_x13 != extraout_x8 & extraout_w12) == 1) {
          uVar14 = extraout_x8;
          uVar17 = extraout_x10;
          if ((extraout_x9 & 1) != 0) {
            if ((*(int *)(param_1 + 8) == *extraout_x11 &&
                 *(int *)(param_1 + 0xc) == extraout_x11[1]) ||
               (*(int *)(param_1 + 8) == extraout_x11[2] &&
                *(int *)(param_1 + 0xc) == extraout_x11[3])) break;
          }
        }
        else {
          func_0x0001078432ac();
          uVar14 = extraout_x8_00;
          uVar17 = extraout_x10_00;
        }
        lVar11 = param_1;
      }
      func_0x000107836000();
    }
    pppppppiStack_138 = (int *******)0x0;
    pppppppiVar18 = (int *******)0x0;
    while( true ) {
      ppppppiVar21 = (int ******)*unaff_x19;
      ppppppiVar12 = (int ******)unaff_x19[1];
      if (ppppppiVar21 == ppppppiVar12) break;
      bVar9 = (long)ppppppiVar12 - (long)ppppppiVar21 == 0x18;
      if (bVar9) {
        func_0x000107843108(ppppppiVar21[2]);
        if (bVar9) {
          func_0x000107843284();
        }
        func_0x000107842c40();
        *unaff_x19 = 0;
        unaff_x19[1] = 0;
        lStack_c0 = unaff_x19[2];
        unaff_x19[2] = 0;
        ppppppiStack_d0 = ppppppiVar21;
        ppppppiStack_c8 = ppppppiVar12;
LAB_10783574c:
        func_0x000107842698();
        __ZNSt13runtime_errorC1EPKc();
        func_0x0001078421d4();
LAB_107835764:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x107835768);
        (*pcVar8)();
      }
      bVar9 = ((ulong)ppppppiVar21[2] & 0x7fffffffffffffff) == 0x7ff0000000000000;
      uVar14 = (ulong)bVar9;
      if (bVar9) {
        func_0x000107843284();
        uVar14 = extraout_x12;
      }
      for (lVar13 = 0; ppppppiVar1 = (int ******)((long)ppppppiVar21 + lVar13 + 0x18),
          ppppppiVar1 != ppppppiVar12; lVar13 = lVar13 + 0x18) {
        uVar17 = *(ulong *)((long)ppppppiVar21 + lVar13 + 0x28);
        if (((uVar14 & 1) == 0 && (uVar17 & 0x7fffffffffffffff) != 0x7ff0000000000000) &&
           (piVar15 = (int *)((long)ppppppiVar21 + lVar13),
           *piVar15 == *(int *)ppppppiVar1 && piVar15[1] == piVar15[7])) {
LAB_10783538c:
          uStack_7d = 0;
          uStack_80 = 0;
          pppppppiStack_98 = (int *******)0x0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_85 = 0;
          uStack_90 = 0;
          uStack_b8 = 0;
          lStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          ppppppiStack_c8 = (int ******)0x0;
          ppppppiStack_d0 = (int ******)0x0;
          func_0x000107834c5c(&ppppppiStack_d0,(lVar13 + 0x18) / 0x18);
          func_0x000107836104(*unaff_x19,lVar13 + 0x18 + (long)ppppppiVar21,&ppppppiStack_d0);
          func_0x0001078360c8();
          goto LAB_1078353dc;
        }
        func_0x0001078432ac();
        if ((extraout_w12_00 & extraout_x13_00 != 0x7ff0000000000000) == 1) {
          lVar13 = extraout_x8_01;
          piVar15 = extraout_x9_00;
          uVar14 = extraout_x10_01;
          if ((extraout_x11_00 & 1) != 0) {
            piVar2 = (int *)((long)ppppppiVar21 + extraout_x8_01);
            if ((*extraout_x9_00 == *piVar2 && piVar2[7] == piVar2[1]) ||
               (*extraout_x9_00 == piVar2[2] && piVar2[7] == piVar2[3])) goto LAB_10783538c;
          }
        }
        else {
          func_0x0001078432ac();
          lVar13 = extraout_x8_02;
          piVar15 = extraout_x9_01;
          uVar14 = extraout_x10_02;
        }
        if ((uVar17 & 0x7fffffffffffffff) == 0x7ff0000000000000) {
          iVar3 = *(int *)((long)ppppppiVar21 + lVar13 + 0x20);
          *(int *)((long)ppppppiVar21 + lVar13 + 0x20) = *piVar15;
          *piVar15 = iVar3;
        }
      }
      func_0x000107842c40();
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      lStack_c0 = unaff_x19[2];
      unaff_x19[2] = 0;
      ppppppiStack_d0 = ppppppiVar21;
      ppppppiStack_c8 = ppppppiVar12;
LAB_1078353dc:
      func_0x0001078361ac(ppppppiStack_d0);
      pppppppiVar16 = (int *******)*unaff_x19;
      pppppppiVar10 = (int *******)unaff_x19[1];
      if (pppppppiVar16 == pppppppiVar10) goto LAB_10783574c;
      if ((long)pppppppiVar10 - (long)pppppppiVar16 != 0x18) {
        bVar9 = ((ulong)pppppppiVar16[2] & 0x7fffffffffffffff) == 0x7ff0000000000000;
        pppppppiVar19 = pppppppiVar16;
        bVar4 = false;
LAB_1078354e8:
        bVar5 = bVar4;
        lVar13 = (0x18 - (long)pppppppiVar16) + (long)pppppppiVar19;
        pppppppiVar20 = pppppppiVar19;
        bVar4 = bVar9;
        do {
          pppppppiVar19 = pppppppiVar20 + 3;
          if (pppppppiVar19 == pppppppiVar10) break;
          ppppppiVar21 = pppppppiVar20[5];
          bVar9 = ((ulong)ppppppiVar21 & 0x7fffffffffffffff) == 0x7ff0000000000000;
          if ((!bVar9 && !bVar4) &&
             (*(int *)(pppppppiVar20 + 1) == *(int *)(pppppppiVar20 + 4) &&
              *(int *)((long)pppppppiVar20 + 0xc) == *(int *)((long)pppppppiVar20 + 0x24))) {
LAB_107835694:
            uStack_dd = 0;
            uStack_d9 = 0;
            uStack_d8 = 0;
            bStack_d7 = 0;
            uStack_d6 = 0;
            uStack_e0 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_e8 = 0;
            uStack_e5 = 0;
            uStack_f0 = 0;
            uStack_118 = 0;
            lStack_120 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            pppppppiStack_128 = (int *******)0x0;
            pppppppiStack_130 = (int *******)0x0;
            func_0x000107834c5c(&pppppppiStack_130,lVar13 / 0x18);
            func_0x000107836104(*unaff_x19,pppppppiVar19,&pppppppiStack_130);
            func_0x0001078360c8();
            goto LAB_107835428;
          }
          if ((bool)(((ulong)ppppppiVar21 & 0x7fffffffffffffff) != 0x7ff0000000000000 & bVar4)) {
            bVar4 = false;
            if (bVar5) {
              if ((*(int *)(pppppppiVar20 + 4) == *(int *)pppppppiVar20 &&
                   *(int *)((long)pppppppiVar20 + 0x24) == *(int *)((long)pppppppiVar20 + 4)) ||
                 (bVar4 = true,
                 *(int *)(pppppppiVar20 + 4) == *(int *)(pppppppiVar20 + 1) &&
                 *(int *)((long)pppppppiVar20 + 0x24) == *(int *)((long)pppppppiVar20 + 0xc)))
              goto LAB_107835694;
            }
            goto LAB_1078354e8;
          }
          if ((((ulong)ppppppiVar21 & 0x7fffffffffffffff) == 0x7ff0000000000000) &&
             (!bVar5 && !bVar4)) {
            if ((*(int *)(pppppppiVar20 + 1) == *(int *)(pppppppiVar20 + 4) &&
                 *(int *)((long)pppppppiVar20 + 0xc) == *(int *)((long)pppppppiVar20 + 0x24)) ||
               (*(int *)(pppppppiVar20 + 1) == *(int *)pppppppiVar19 &&
                *(int *)((long)pppppppiVar20 + 0xc) == *(int *)((long)pppppppiVar20 + 0x1c)))
            goto LAB_1078355c4;
          }
          lVar13 = lVar13 + 0x18;
          pppppppiVar20 = pppppppiVar19;
          bVar4 = bVar9;
        } while( true );
      }
      uStack_d8 = 0;
      bStack_d7 = 0;
      uStack_d6 = 0;
      uStack_e0 = 0;
      uStack_dd = 0;
      uStack_d9 = 0;
      uStack_e8 = 0;
      uStack_e5 = 0;
      uStack_f0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_118 = 0;
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      lStack_120 = unaff_x19[2];
      unaff_x19[2] = 0;
      pppppppiStack_130 = pppppppiVar16;
      pppppppiStack_128 = pppppppiVar10;
LAB_107835428:
      func_0x000107835ae0(ppppppiStack_d0,ppppppiStack_c8);
      pppppppiVar10 = pppppppiStack_130;
      func_0x000107835ae0(pppppppiStack_130,pppppppiStack_128);
      bVar9 = false;
      for (pppppppiVar16 = pppppppiStack_130;
          (ppppppiVar21 = ppppppiStack_d0, pppppppiVar16 != pppppppiStack_128 &&
          (((ulong)pppppppiVar16[2] & 0x7fffffffffffffff) == 0x7ff0000000000000));
          pppppppiVar16 = pppppppiVar16 + 3) {
        bVar9 = true;
      }
      while( true ) {
        if (ppppppiVar21 == ppppppiStack_c8) goto LAB_107835708;
        if (ABS((double)ppppppiVar21[2]) != INFINITY) break;
        bVar9 = true;
        ppppppiVar21 = ppppppiVar21 + 3;
      }
      if (pppppppiVar16 == pppppppiStack_128) {
LAB_107835708:
        func_0x000107842698();
        __ZNSt13runtime_errorC1EPKc();
        func_0x0001078421d4();
        goto LAB_107835764;
      }
      if (bVar9) {
        if (*(int *)ppppppiVar21 < *(int *)pppppppiVar16) {
          pppppppiVar10 = &ppppppiStack_d0;
          func_0x000107835b64(pppppppiVar10,&pppppppiStack_130);
          bVar9 = true;
          uVar14 = uStack_7d;
        }
        else {
          pppppppiVar10 = (int *******)&pppppppiStack_130;
          func_0x000107835b64(pppppppiVar10,&ppppppiStack_d0);
          bVar9 = false;
          uVar14 = uStack_7d;
        }
      }
      else {
        bVar9 = (double)pppppppiVar16[2] <= (double)ppppppiVar21[2];
        uVar14 = uStack_7d;
      }
      if (pppppppiVar18 != (int *******)0x0) {
        pppppppiStack_98 = pppppppiVar18;
      }
      uStack_7d._0_7_ = (uint7)param_3 << 0x30;
      iVar7 = (int7)uStack_7d;
      uStack_7d._0_5_ = (undefined5)uVar14;
      uVar6 = (undefined5)uStack_7d;
      bStack_d7 = param_3;
      if (bVar9) {
        uStack_d6 = 1;
        uStack_7d._0_6_ = CONCAT15(0xff,(undefined5)uStack_7d);
        uStack_7d = (ulong)CONCAT16(param_3,(undefined6)uStack_7d);
        uStack_d8 = 1;
        func_0x000107842c20(ppppppiStack_d0);
        func_0x000107842c18();
        pppppppiVar16 = pppppppiVar10;
        if (pppppppiVar18 != (int *******)0x0) {
          pppppppiVar18[7] = (int ******)pppppppiVar10;
          pppppppiVar16 = pppppppiStack_138;
        }
        pppppppiStack_138 = pppppppiVar16;
        func_0x000107842c18();
        pppppppiVar10 = pppppppiVar10 + 0xc;
      }
      else {
        uStack_7d = CONCAT17(1,iVar7);
        uStack_d6 = 0;
        uStack_7d._0_6_ = CONCAT15(0xff,uVar6);
        uStack_d8 = 1;
        func_0x000107842c20(ppppppiStack_d0);
        func_0x000107842c18();
        pppppppiVar16 = pppppppiVar10 + 0xc;
        if (pppppppiVar18 != (int *******)0x0) {
          pppppppiVar18[7] = (int ******)(pppppppiVar10 + 0xc);
          pppppppiVar16 = pppppppiStack_138;
        }
        pppppppiStack_138 = pppppppiVar16;
        func_0x000107842c18();
      }
      FUN_107834afc(&pppppppiStack_130);
      FUN_107834afc(&ppppppiStack_d0);
      pppppppiVar18 = pppppppiVar10;
    }
    pppppppiVar18[7] = (int ******)pppppppiStack_138;
    pppppppiStack_138[7] = (int ******)pppppppiVar18;
  }
  return;
LAB_1078355c4:
  bVar4 = true;
  goto LAB_1078354e8;
}



/* Entry: 10783590c; end: 107835937;  */

void FUN_10783590c(long param_1,long param_2)

{
  param_2 = param_2 + 0x18;
  func_0x000107835aa4(param_2,*(undefined8 *)(param_1 + 8));
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 107835fd4; end: 107835fff;  */

long FUN_107835fd4(long param_1)

{
  ulong uVar1;
  
  uVar1 = (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20)) - 1;
  return *(long *)(*(long *)(param_1 + 8) + (uVar1 / 0x14) * 8) + (uVar1 % 0x14) * 200;
}



/* Entry: 107836290; end: 10783631b;  */

void FUN_107836290(ulong param_1)

{
  undefined8 *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    func_0x00010784298c();
    return;
  }
  func_0x000104bd35f4();
  func_0x0001078429a8();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 107837a38; end: 107837b9b;  */

/* WARNING: Possible PIC construction at 0x000107838008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010783800c) */

void FUN_107837a38(ulong *param_1,ulong *param_2,ulong *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong *puVar7;
  ulong *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  ulong *puVar9;
  long extraout_x9;
  long lVar10;
  long extraout_x9_00;
  long extraout_x10;
  long extraout_x11;
  ulong *extraout_x11_00;
  long extraout_x12;
  undefined8 extraout_x12_00;
  undefined8 *extraout_x13;
  ulong *puVar11;
  long unaff_x21;
  ulong uVar12;
  long unaff_x22;
  ulong uVar13;
  ulong uVar14;
  ulong *unaff_x23;
  long lVar15;
  ulong *puVar16;
  long unaff_x25;
  ulong *puVar17;
  ulong uVar18;
  long unaff_x26;
  ulong uVar19;
  ulong *puVar20;
  undefined8 *unaff_x29;
  ulong *unaff_x30;
  undefined8 *in_stack_00000080;
  ulong *in_stack_00000088;
  ulong *puVar6;
  
  func_0x0001078430f4();
  cVar2 = SBORROW8((long)param_3,2);
  cVar3 = (long)param_3 + -2 < 0;
  bVar4 = param_3 == (ulong *)0x2;
  if ((ulong *)0x1 < param_3) {
    if (bVar4) {
      uVar12 = param_2[-1];
      uVar13 = *param_1;
      puVar6 = param_1;
      func_0x00010784262c();
      iVar5 = (int)puVar6;
      func_0x000107837bd4();
      if (iVar5 != 0) {
        *param_1 = uVar12;
        param_2[-1] = uVar13;
      }
    }
    else {
      puVar7 = param_1;
      puVar6 = param_2;
      puVar8 = unaff_x30;
      func_0x000107842b4c();
      if (bVar4 || cVar3 != cVar2) {
        if (param_1 != param_2) {
          lVar15 = 0;
          puVar6 = param_1;
          while (puVar6 + 1 != param_2) {
            uVar12 = *puVar6;
            uVar13 = puVar6[1];
            func_0x00010784262c();
            func_0x000107837bd4();
            lVar1 = lVar15;
            if ((int)puVar7 != 0) {
              do {
                lVar10 = lVar1;
                *(ulong *)((long)param_1 + lVar10 + 8) = uVar12;
                puVar8 = param_1;
                if (lVar10 == 0) goto LAB_107837af0;
                uVar12 = *(ulong *)((long)param_1 + lVar10 + -8);
                func_0x00010784262c();
                func_0x000107837bd4();
                lVar1 = lVar10 + -8;
              } while (((ulong)puVar7 & 1) != 0);
              puVar8 = (ulong *)((long)param_1 + lVar10);
LAB_107837af0:
              *puVar8 = uVar13;
            }
            lVar15 = lVar15 + 8;
            puVar6 = puVar6 + 1;
          }
        }
      }
      else {
        func_0x000107842190();
        if (!bVar4 && cVar3 == cVar2) {
          FUN_107837a38();
          func_0x000107842314();
          FUN_107837a38();
          func_0x00010784220c();
          func_0x000107842f84();
          do {
            func_0x000107842e6c();
            lVar15 = unaff_x22;
            puVar11 = puVar7;
            puVar17 = puVar6;
            puVar20 = param_3;
            in_stack_00000080 = unaff_x29;
            in_stack_00000088 = unaff_x30;
            while( true ) {
              if (lVar15 == 0) {
                return;
              }
              lVar1 = param_4;
              if (lVar15 <= param_7 || param_4 <= param_7) {
                puVar6 = puVar11;
                puVar16 = puVar8;
                if (lVar15 < param_4) {
                  lVar15 = 0;
                  while ((ulong *)((long)puVar17 + lVar15) != puVar20) {
                    func_0x0001078429ec();
                    lVar15 = extraout_x8_00;
                  }
                  puVar6 = (ulong *)((long)puVar8 + lVar15);
                  while( true ) {
                    puVar20 = puVar20 + -1;
                    if (puVar6 == puVar8) {
                      return;
                    }
                    if (puVar17 == puVar11) break;
                    uVar12 = puVar17[-1];
                    uVar13 = puVar6[-1];
                    func_0x00010784274c();
                    func_0x000107837bd4();
                    puVar16 = puVar17 + -1;
                    if ((int)puVar7 == 0) {
                      uVar12 = uVar13;
                      puVar6 = puVar6 + -1;
                      puVar16 = puVar17;
                    }
                    puVar17 = puVar16;
                    *puVar20 = uVar12;
                  }
                  while (puVar6 != puVar8) {
                    func_0x000107843278();
                  }
                }
                else {
                  for (; puVar6 != puVar17; puVar6 = puVar6 + 1) {
                    *puVar16 = *puVar6;
                    puVar16 = puVar16 + 1;
                  }
                  while (puVar16 != puVar8) {
                    if (puVar17 == puVar20) {
                      func_0x000107842604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*(code *)PTR__memmove_11034c660)();
                      return;
                    }
                    uVar12 = *puVar17;
                    uVar13 = *puVar8;
                    func_0x00010784262c();
                    func_0x000107837bd4();
                    bVar4 = (int)puVar7 == 0;
                    lVar15 = 8;
                    if (bVar4) {
                      lVar15 = 0;
                    }
                    puVar17 = (ulong *)((long)puVar17 + lVar15);
                    lVar15 = 0;
                    if (bVar4) {
                      lVar15 = 8;
                    }
                    puVar8 = (ulong *)((long)puVar8 + lVar15);
                    if (bVar4) {
                      uVar12 = uVar13;
                    }
                    *puVar11 = uVar12;
                    puVar11 = puVar11 + 1;
                  }
                }
                return;
              }
              while( true ) {
                if (lVar1 == 0) {
                  return;
                }
                uVar13 = *puVar17;
                uVar18 = *puVar11;
                uVar12 = uVar13;
                func_0x000107837bd4(uVar13,uVar18);
                if ((uVar12 & 1) != 0) break;
                puVar11 = puVar11 + 1;
                lVar1 = lVar1 + -1;
              }
              if (lVar1 < lVar15) {
                unaff_x22 = lVar15 / 2;
                puVar16 = puVar17 + unaff_x22;
                uVar13 = *puVar16;
                uVar12 = (long)puVar17 - (long)puVar11 >> 3;
                puVar6 = puVar11;
                while (uVar12 != 0) {
                  uVar19 = uVar12 >> 1;
                  uVar14 = uVar13;
                  func_0x000107837bd4(uVar13,puVar6[uVar19]);
                  uVar18 = uVar12 + (uVar12 >> 1 ^ 0xffffffffffffffff);
                  uVar12 = uVar19;
                  if ((int)uVar14 == 0) {
                    uVar12 = uVar18;
                    puVar6 = puVar6 + uVar19 + 1;
                  }
                }
                param_4 = (long)puVar6 - (long)puVar11 >> 3;
              }
              else {
                if (lVar1 == 1) {
                  *puVar11 = uVar13;
                  *puVar17 = uVar18;
                  return;
                }
                param_4 = lVar1 / 2;
                puVar6 = puVar11 + param_4;
                uVar13 = *puVar6;
                uVar12 = (long)puVar20 - (long)puVar17 >> 3;
                puVar7 = puVar17;
                while (puVar16 = puVar7, uVar12 != 0) {
                  uVar14 = uVar12 >> 1;
                  uVar18 = puVar16[uVar14];
                  func_0x000107837bd4(uVar18,uVar13);
                  uVar12 = uVar12 + (uVar12 >> 1 ^ 0xffffffffffffffff);
                  puVar7 = puVar16 + uVar14 + 1;
                  if ((int)uVar18 == 0) {
                    uVar12 = uVar14;
                    puVar7 = puVar16;
                  }
                }
                unaff_x22 = (long)puVar16 - (long)puVar17 >> 3;
              }
              param_3 = puVar16;
              if ((puVar6 != puVar17) && (param_3 = puVar6, puVar17 != puVar16)) {
                if (puVar6 + 1 == puVar17) {
                  uVar12 = *puVar6;
                  func_0x000107842ce4(puVar6);
                  param_3 = (ulong *)((long)puVar6 + ((long)puVar16 - (long)puVar17));
                  *param_3 = uVar12;
                }
                else if (puVar17 + 1 == puVar16) {
                  puVar7 = puVar16 + -1;
                  uVar12 = *puVar7;
                  param_3 = (ulong *)((long)puVar16 - ((long)puVar7 - (long)puVar6));
                  if ((long)puVar7 - (long)puVar6 != 0) {
                    _memmove(param_3,puVar6,(long)puVar7 - (long)puVar6);
                  }
                  *puVar6 = uVar12;
                }
                else {
                  puVar7 = puVar17;
                  puVar9 = puVar6;
                  if ((long)puVar17 - (long)puVar6 >> 3 == (long)puVar16 - (long)puVar17 >> 3) {
                    for (; param_3 = puVar17, puVar9 != puVar17 && puVar7 != puVar16;
                        puVar9 = puVar9 + 1) {
                      uVar12 = *puVar9;
                      *puVar9 = *puVar7;
                      *puVar7 = uVar12;
                      puVar7 = puVar7 + 1;
                    }
                  }
                  else {
                    do {
                      func_0x000107842a28();
                    } while (extraout_x11 != 0);
                    puVar7 = puVar6 + extraout_x12;
                    lVar10 = extraout_x9;
                    while (puVar7 != puVar6) {
                      func_0x000107842d8c();
                      do {
                        func_0x000107842a18();
                        lVar10 = (long)puVar16 - (long)extraout_x13 >> 3;
                        puVar7 = (ulong *)((long)extraout_x13 + extraout_x8);
                        if (lVar10 <= extraout_x10) {
                          puVar7 = puVar6 + (extraout_x10 - lVar10);
                        }
                      } while (puVar7 != extraout_x11_00);
                      *extraout_x13 = extraout_x12_00;
                      lVar10 = extraout_x9_00;
                      puVar7 = extraout_x11_00;
                    }
                    param_3 = (ulong *)(lVar10 + (long)puVar6);
                  }
                }
              }
              if (param_4 + unaff_x22 < (lVar1 - param_4) + (lVar15 - unaff_x22)) break;
              puVar7 = param_3;
              func_0x000107837d68(param_3,puVar16,puVar20,lVar1 - param_4,lVar15 - unaff_x22,puVar8,
                                  param_7);
              lVar15 = unaff_x22;
              puVar17 = puVar6;
              puVar20 = param_3;
            }
            unaff_x30 = (ulong *)&UNK_10783800c;
            puVar7 = puVar11;
            unaff_x29 = &stack0x00000080;
          } while( true );
        }
        func_0x000107837c04();
        func_0x0001078422fc();
        func_0x000107837c04();
        lVar15 = unaff_x21 + (long)unaff_x23 * 8;
        func_0x000107843194();
        while (unaff_x21 != unaff_x22) {
          if (unaff_x25 == lVar15) {
            while (unaff_x21 != unaff_x22) {
              func_0x000107842b20();
            }
            return;
          }
          func_0x000107843180();
          func_0x000107837bd4();
          bVar4 = (int)puVar7 == 0;
          lVar1 = 0;
          if (bVar4) {
            lVar1 = unaff_x26;
          }
          unaff_x21 = unaff_x21 + lVar1;
          lVar1 = unaff_x26;
          if (bVar4) {
            lVar1 = 0;
          }
          unaff_x25 = unaff_x25 + lVar1;
          puVar6 = param_2;
          if (bVar4) {
            puVar6 = unaff_x23;
          }
          *param_1 = (ulong)puVar6;
          param_1 = param_1 + 1;
        }
        while (unaff_x25 != lVar15) {
          func_0x000107843174();
        }
      }
    }
  }
  return;
}



/* Entry: 1078382d0; end: 10783837b;  */

void FUN_1078382d0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  long *unaff_x19;
  undefined8 *unaff_x20;
  ulong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  func_0x00010066015c();
  puVar4 = (ulong *)(param_1 + 0x10);
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 < (undefined8 *)*puVar4) {
    puVar6 = puVar5 + 1;
    *puVar5 = *unaff_x20;
  }
  else {
    func_0x000107842ab4((long)puVar5 - *unaff_x19 >> 3);
    func_0x0001078347d8();
    lVar1 = *unaff_x19;
    lVar2 = unaff_x19[1];
    puVar3 = (ulong *)0x0;
    if (param_1 != 0) {
      func_0x00010783466c();
      puVar3 = puVar4;
    }
    *(undefined8 *)((long)puVar3 + (lVar2 - lVar1)) = *unaff_x20;
    func_0x000100660238();
    func_0x00010783464c();
    puVar6 = (undefined8 *)unaff_x19[1];
    func_0x000107842a10();
  }
  unaff_x19[1] = (long)puVar6;
  return;
}



/* Entry: 1078387bc; end: 1078387fb;  */

void FUN_1078387bc(long param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar3 = puVar1;
  for (puVar2 = (undefined4 *)(param_2 + ((long)puVar1 - (long)param_4)); puVar2 < param_3;
      puVar2 = puVar2 + 1) {
    *puVar3 = *puVar2;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 **)(param_1 + 8) = puVar3;
  if (puVar1 != param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)((long)puVar1 - ((long)puVar1 - (long)param_4));
    return;
  }
  return;
}



/* Entry: 107838b08; end: 107838b27;  */

void FUN_107838b08(void)

{
  func_0x000107842254();
  func_0x00010784214c();
  return;
}



/* Entry: 1078396e8; end: 10783972f;  */

void FUN_1078396e8(long param_1)

{
  func_0x0001078429a8();
  if (param_1 != 0) {
    func_0x00010784303c();
  }
  return;
}



/* Entry: 10783a0b0; end: 10783a0cf;  */

void FUN_10783a0b0(void)

{
  func_0x000107842f30();
  func_0x00010783a098();
  return;
}



/* Entry: 10783b2e0; end: 10783b3ff;  */

uint * FUN_10783b2e0(uint *param_1,uint param_2)

{
  undefined1 in_ZR;
  int iVar1;
  uint uVar3;
  double dVar4;
  double unaff_d8;
  uint *puVar2;
  
  dVar4 = *(double *)(param_1 + 4);
  func_0x000107843108(dVar4);
  if ((bool)in_ZR) {
    uVar3 = *param_1;
    if ((int)param_1[2] <= (int)*param_1) {
      uVar3 = param_1[2];
    }
    return (uint *)(ulong)uVar3;
  }
  if (dVar4 <= 0.0) {
    puVar2 = (uint *)(ulong)*param_1;
    if (param_2 - param_1[1] == 0) {
      return puVar2;
    }
    dVar4 = (double)(int)*param_1 + ((double)(int)(param_2 - param_1[1]) + 0.5) * dVar4;
  }
  else {
    if (param_2 == param_1[3]) {
      return (uint *)(ulong)param_1[2];
    }
    dVar4 = (double)(int)*param_1 + ((double)(int)(param_2 - param_1[1]) + -0.5) * dVar4;
    puVar2 = param_1;
  }
  iVar1 = (int)puVar2;
  func_0x000107842954(dVar4);
  uVar3 = (uint)unaff_d8;
  if (iVar1 == 0) {
    uVar3 = (uint)(long)unaff_d8;
  }
  return (uint *)(ulong)uVar3;
}



/* Entry: 10783b938; end: 10783b9b3;  */

void FUN_10783b938(void)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar3;
  undefined8 *puVar4;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000107843250();
  func_0x000107842588();
  puVar4 = extraout_x8;
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x0001078425c0();
      if (!bVar2) {
        func_0x000107842568();
      }
      func_0x000107842dfc();
      puVar4 = extraout_x8_00;
    }
    else {
      lVar3 = (long)((long)extraout_x8 - uVar1) >> 2;
      if ((long)extraout_x8 - uVar1 == 0) {
        lVar3 = 1;
      }
      func_0x000107838b28(lVar3);
      func_0x00010784251c();
      func_0x00010783b9b4();
      func_0x00010784271c();
      func_0x000107838b50();
      puVar4 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar4 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar4 + 1);
  return;
}



/* Entry: 10783bb6c; end: 10783bc2f;  */

long FUN_10783bb6c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
LAB_10783bb80:
  do {
    lVar2 = param_1;
    param_1 = lVar2;
    lVar4 = 0;
    while( true ) {
      do {
        do {
          param_1 = *(long *)(param_1 + 0x10);
          if (param_1 == lVar2) {
            lVar3 = lVar2;
            if (lVar4 != 0) {
              while (lVar4 != lVar2) {
                lVar1 = param_1;
                func_0x00010783bc30(param_1,lVar4);
                if ((int)lVar1 == 0) {
                  lVar3 = lVar4;
                }
                do {
                  lVar4 = *(long *)(lVar4 + 0x10);
                } while (*(int *)(lVar4 + 8) != *(int *)(lVar3 + 8) ||
                         *(int *)(lVar4 + 0xc) != *(int *)(lVar3 + 0xc));
              }
            }
            return lVar3;
          }
          if (*(int *)(lVar2 + 0xc) < *(int *)(param_1 + 0xc)) goto LAB_10783bb80;
        } while (*(int *)(param_1 + 0xc) != *(int *)(lVar2 + 0xc));
      } while (*(int *)(lVar2 + 8) < *(int *)(param_1 + 8));
      if (*(int *)(param_1 + 8) < *(int *)(lVar2 + 8)) break;
      if ((*(long *)(param_1 + 0x10) != lVar2) && (*(long *)(param_1 + 0x18) != lVar2)) {
        lVar4 = param_1;
      }
    }
  } while( true );
}



/* Entry: 10783bfec; end: 10783bff7;  */

void FUN_10783bfec(ulong param_1)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long *unaff_x19;
  
  func_0x0001078423e8();
  if (param_1 >> 0x3d == 0) {
    func_0x00010784298c();
    return;
  }
  func_0x000104bd35f4();
  func_0x000107842f24();
  lVar1 = extraout_x9;
  while (lVar1 != extraout_x8) {
    lVar1 = lVar1 + -8;
    unaff_x19[2] = lVar1;
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10783c5b0; end: 10783c637;  */

long * FUN_10783c5b0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  
  for (; (plVar1 = param_3, param_2 != param_3 && (plVar1 = param_2, *param_2 != param_1));
      param_2 = param_2 + 1) {
  }
  return plVar1;
}



/* Entry: 10783d8e8; end: 10783d997;  */

void FUN_10783d8e8(void)

{
  char in_NG;
  char in_OV;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  func_0x000107842bbc();
  if (in_NG == in_OV) {
    func_0x00010783d958(auStack_50);
    func_0x00010783d998(auStack_40,auStack_50);
    func_0x00010783db44(auStack_50);
  }
  else {
    func_0x000107842e88();
  }
  func_0x000107842c0c();
  func_0x00010783d9c8();
  func_0x00010783db44(auStack_40);
  return;
}



/* Entry: 10783e16c; end: 10783e1a7;  */

void FUN_10783e16c(double param_1,long param_2)

{
  if (*(long *)(param_2 + 0x48) != 0) {
    func_0x00010783be1c(*(long *)(param_2 + 0x48),param_2 + 8,param_2 + 0x18);
    *(double *)(param_2 + 0x10) = param_1;
    *(bool *)(param_2 + 0x58) = param_1 <= 0.0;
  }
  return;
}



/* Entry: 10783e8ac; end: 10783ed27;  */

/* WARNING: Removing unreachable block (ram,0x00010783ead8) */

undefined8 FUN_10783e8ac(double param_1,undefined8 param_2,long param_3,int param_4)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x9;
  long *extraout_x10;
  int extraout_w11;
  int extraout_w12;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  double dVar16;
  ulong *puStack_b0;
  ulong *puStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long alStack_70 [2];
  
  if (((*(byte *)(param_3 + 0x59) & 1) != 0) || (lVar8 = *(long *)(param_3 + 0x48), lVar8 == 0)) {
    return 0;
  }
  puStack_b0 = (ulong *)0x0;
  puStack_a8 = (ulong *)0x0;
  uStack_a0 = 0;
  plStack_98 = (long *)0x0;
  plStack_90 = (long *)0x0;
  uStack_88 = 0;
  lVar12 = *(long *)(lVar8 + 0x18);
  for (; lVar8 != lVar12; lVar8 = *(long *)(lVar8 + 0x10)) {
    func_0x00010783ba00(&plStack_98,lVar8);
  }
  func_0x00010783ba00(&plStack_98,lVar12);
  lVar8 = (long)plStack_90 - (long)plStack_98 >> 3;
  alStack_70[0] = 0;
  alStack_70[1] = 0;
  if (lVar8 < 0x81) {
    func_0x000107842e88();
  }
  else {
    func_0x00010783d958(auStack_80,lVar8);
    func_0x00010783d998(alStack_70,auStack_80);
    func_0x00010783db44(auStack_80);
  }
  func_0x0001078428c8();
  func_0x00010783f400();
  func_0x00010783db44(alStack_70);
  plVar1 = plStack_98 + 1;
  plVar11 = plStack_98;
LAB_10783e98c:
  plVar9 = plVar1;
  bVar3 = plVar9 == plStack_90;
  if (!bVar3) {
    func_0x000107842e5c(plVar11);
    if (bVar3 && extraout_w11 == extraout_w12) goto LAB_10783e9c0;
    plVar11 = (long *)(extraout_x8 + 8);
    lVar12 = 8;
    lVar8 = extraout_x9;
    goto LAB_10783e9dc;
  }
  func_0x00010783fb64(&plStack_98);
  puVar7 = puStack_a8;
  puVar10 = puStack_b0;
  if (param_4 == 0) goto LAB_10783eb90;
  for (; puVar6 = puVar7, puVar10 != puVar7; puVar10 = puVar10 + 1) {
    iVar4 = (int)*puVar10;
    func_0x00010783fd1c();
    puVar6 = puVar10;
    if (iVar4 != 0) goto LAB_10783ea98;
  }
LAB_10783eabc:
  if (puVar6 != puStack_a8) {
    puStack_a8 = puVar6;
  }
  if (puStack_b0 != puVar6) {
    func_0x00010783e790(param_3);
    if ((long)puStack_a8 - (long)puStack_b0 == 8) {
      bVar3 = 0.0 < param_1;
      func_0x000107842ad4();
      if (bVar3 == param_1 <= 0.0) {
        func_0x0001078430b4(*puStack_b0,param_3);
        lVar8 = *(long *)(param_3 + 0x28);
      }
      else {
        func_0x0001078430b4(*puStack_b0,*(undefined8 *)(param_3 + 0x28));
        lVar8 = param_3;
      }
      func_0x000107842fc4(*puStack_b0,lVar8);
    }
    else {
      lVar8 = (long)puStack_a8 - (long)puStack_b0 >> 3;
      plStack_98 = (long *)0x0;
      plStack_90 = (long *)0x0;
      dVar16 = param_1;
      if (lVar8 < 0x81) {
        func_0x000107842e88();
      }
      else {
        func_0x00010783ede0(alStack_70,lVar8);
        func_0x00010783ee20(&plStack_98,alStack_70);
        func_0x00010783efbc(alStack_70);
      }
      func_0x00010784262c();
      FUN_1078401d4();
      func_0x00010783efbc(&plStack_98);
      for (puVar7 = puStack_b0; puVar7 != puStack_a8; puVar7 = puVar7 + 1) {
        func_0x000107842ad4();
        bVar3 = 0.0 < param_1 == dVar16 <= 0.0;
        for (puVar10 = puStack_b0; lVar8 = param_3, puVar10 != puVar7; puVar10 = puVar10 + 1) {
          uVar5 = *puVar10;
          if (*(long *)(uVar5 + 0x28) == *(long *)(param_3 + 0x28)) {
            if (bVar3) {
              uVar5 = *puVar7;
              func_0x000107842cdc();
              if ((uVar5 & 1) != 0) goto LAB_10783eca8;
            }
            else {
              plVar1 = *(long **)(uVar5 + 0x38);
              for (plVar11 = *(long **)(uVar5 + 0x30); plVar11 != plVar1; plVar11 = plVar11 + 1) {
                if (*plVar11 != 0) {
                  uVar5 = *puVar7;
                  func_0x000107842cdc();
                  if ((uVar5 & 1) != 0) goto LAB_10783ecc0;
                }
              }
            }
          }
        }
        if (bVar3) {
          uVar5 = *puVar7;
          func_0x000107842cdc(uVar5,param_3);
          if ((int)uVar5 == 0) {
            func_0x000107842698();
            __ZNSt13runtime_errorC1EPKc();
            func_0x0001078421d4();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10783ece8);
            (*pcVar2)();
          }
LAB_10783eca8:
          lVar8 = *(long *)(param_3 + 0x28);
        }
        else {
          plVar1 = *(long **)(param_3 + 0x38);
          for (plVar11 = *(long **)(param_3 + 0x30); plVar11 != plVar1; plVar11 = plVar11 + 1) {
            if (*plVar11 != 0) {
              uVar5 = *puVar7;
              func_0x000107842cdc();
              if ((uVar5 & 1) != 0) goto LAB_10783ecc0;
            }
          }
          func_0x0001078430b4(*puVar7,*(undefined8 *)(param_3 + 0x28));
        }
LAB_10783ecc0:
        func_0x000107842fc4(*puVar7,lVar8);
      }
    }
  }
LAB_10783eb90:
  *(undefined1 *)(param_3 + 0x59) = 1;
  func_0x00010784063c(&puStack_b0);
  return 1;
LAB_10783e9c0:
  lVar8 = extraout_x9 + 1;
  plVar11 = (long *)(extraout_x8 + 8);
  plVar1 = plVar9 + 1;
  if (plVar9 + 1 == extraout_x10) {
    plVar11 = (long *)(extraout_x8 + 0x10);
    lVar12 = 0x10;
LAB_10783e9dc:
    plVar1 = plVar9 + 1;
    if (lVar8 != 0) {
      plVar13 = (long *)(extraout_x8 + lVar12 + ((long)((ulong)~(uint)lVar8 << 0x20) >> 0x1d));
      plVar14 = plVar13;
      for (; plVar14 = plVar14 + 1, plVar13 != plVar11; plVar13 = plVar13 + 1) {
        plVar15 = plVar14;
        if (*(long *)*plVar13 != 0) {
          for (; plVar15 != plVar11; plVar15 = plVar15 + 1) {
            if (*(long *)*plVar15 != 0) {
              lVar8 = *plVar13;
              func_0x00010783e278(lVar8,(long *)*plVar15,param_2);
              alStack_70[0] = lVar8;
              if (lVar8 != 0) {
                func_0x00010783bf28(&puStack_b0,alStack_70);
              }
            }
          }
        }
      }
    }
  }
  goto LAB_10783e98c;
LAB_10783ea98:
  while (puVar10 = puVar10 + 1, puVar10 != puVar7) {
    uVar5 = *puVar10;
    func_0x00010783fd1c();
    if ((uVar5 & 1) == 0) {
      *puVar6 = *puVar10;
      puVar6 = puVar6 + 1;
    }
  }
  goto LAB_10783eabc;
}



/* Entry: 10783efdc; end: 10783f02b;  */

bool FUN_10783efdc(double param_1,long param_2,long *param_3)

{
  bool bVar1;
  double unaff_d8;
  
  if ((*(long *)(param_2 + 0x48) == 0) || (*(long *)(*param_3 + 0x48) == 0)) {
    bVar1 = *(long *)(param_2 + 0x48) != 0;
  }
  else {
    func_0x00010783e790();
    func_0x0001078428bc();
    bVar1 = unaff_d8 < ABS(param_1);
  }
  return bVar1;
}



/* Entry: 10783fb88; end: 10783fb9b;  */

void FUN_10783fb88(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1078401d4; end: 107840327;  */

/* WARNING: Possible PIC construction at 0x000107840544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107840558: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107840548) */
/* WARNING: Removing unreachable block (ram,0x000107840550) */
/* WARNING: Removing unreachable block (ram,0x00010784055c) */

void FUN_1078401d4(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x9;
  undefined8 *extraout_x10;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long lVar12;
  undefined8 *unaff_x23;
  undefined8 *puVar13;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined *unaff_x30;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000070;
  undefined *in_stack_00000078;
  
  func_0x0001078430f4();
  cVar4 = SBORROW8(param_3,2);
  cVar5 = (long)(param_3 - 2) < 0;
  bVar6 = param_3 == 2;
  if (param_3 < 2) {
    return;
  }
  if (bVar6) {
    uVar9 = param_2[-1];
    func_0x000107840328(uVar9,param_1);
    if ((int)uVar9 == 0) {
      return;
    }
    func_0x000107842618();
    return;
  }
  puVar11 = param_1;
  func_0x000107842b4c();
  if (!bVar6 && cVar5 == cVar4) {
    func_0x000107842190();
    if (bVar6 || cVar5 != cVar4) {
      func_0x000107840350();
      func_0x0001078422fc();
      func_0x000107840350();
      puVar11 = unaff_x21 + (long)unaff_x23;
      func_0x000107842c9c();
      while( true ) {
        if (unaff_x21 == unaff_x22) {
          while (unaff_x23 != puVar11) {
            func_0x000107842b88();
          }
          return;
        }
        if (unaff_x23 == puVar11) break;
        uVar9 = *unaff_x23;
        func_0x000107840328(uVar9,unaff_x21);
        bVar6 = (int)uVar9 == 0;
        puVar13 = unaff_x23;
        if (bVar6) {
          puVar13 = unaff_x21;
        }
        puVar1 = (undefined8 *)0x0;
        if (bVar6) {
          puVar1 = unaff_x24;
        }
        unaff_x21 = (undefined8 *)((long)unaff_x21 + (long)puVar1);
        puVar1 = unaff_x24;
        if (bVar6) {
          puVar1 = (undefined8 *)0x0;
        }
        unaff_x23 = (undefined8 *)((long)unaff_x23 + (long)puVar1);
        func_0x000107842b70(puVar13);
      }
      while (unaff_x21 != unaff_x22) {
        func_0x000107842b20();
      }
      return;
    }
    FUN_1078401d4();
    func_0x000107842314();
    FUN_1078401d4();
    func_0x00010784220c();
    func_0x000107842f84();
    while( true ) {
      func_0x0001078427d4();
      in_stack_00000070 = unaff_x29;
      in_stack_00000078 = unaff_x30;
      func_0x0001078424cc();
      func_0x00010784292c();
      if (unaff_x23 == (undefined8 *)0x0) {
        return;
      }
      if ((long)unaff_x24 <= (long)unaff_x22 || (long)unaff_x25 <= (long)unaff_x22) break;
      while( true ) {
        if (unaff_x25 == (undefined8 *)0x0) {
          return;
        }
        puVar11 = (undefined8 *)*unaff_x21;
        func_0x000107843078();
        if (((ulong)puVar11 & 1) != 0) break;
        param_2 = param_2 + 1;
        unaff_x25 = (undefined8 *)((long)unaff_x25 + -1);
      }
      cVar4 = SBORROW8((long)unaff_x25,(long)unaff_x24);
      cVar5 = (long)unaff_x25 - (long)unaff_x24 < 0;
      uVar7 = unaff_x25 == unaff_x24;
      if ((long)unaff_x25 < (long)unaff_x24) {
        func_0x0001078424ac();
        while (unaff_x23 != (undefined8 *)0x0) {
          func_0x000107842840();
          func_0x000107840328();
          func_0x0001078426d4();
          unaff_x23 = unaff_x27;
          if ((bool)uVar7) {
            unaff_x23 = extraout_x9;
          }
        }
        func_0x000107842d4c();
      }
      else {
        cVar4 = SBORROW8((long)unaff_x25,1);
        cVar5 = (long)unaff_x25 + -1 < 0;
        uVar7 = unaff_x25 == (undefined8 *)0x1;
        if ((bool)uVar7) {
          func_0x00010784296c();
          return;
        }
        func_0x00010784245c();
        puVar13 = unaff_x22;
        while (unaff_x22 = puVar13, unaff_x27 != (undefined8 *)0x0) {
          func_0x00010784282c();
          func_0x000107840328();
          func_0x000107842818();
          puVar13 = unaff_x28;
          if ((bool)uVar7) {
            puVar13 = unaff_x22;
          }
        }
        func_0x000107842e2c();
      }
      func_0x000107842444();
      func_0x000107842874();
      unaff_x29 = &stack0x00000070;
      if (cVar5 == cVar4) {
        func_0x0001078424fc();
        unaff_x30 = &UNK_10784055c;
      }
      else {
        func_0x00010784241c();
        unaff_x30 = &UNK_107840548;
      }
    }
    if ((long)unaff_x24 < (long)unaff_x25) {
      lVar12 = 0;
      while ((undefined8 *)((long)unaff_x21 + lVar12) != in_stack_00000010) {
        func_0x0001078429ec();
        lVar12 = extraout_x8;
        in_stack_00000010 = extraout_x10;
      }
      puVar13 = (undefined8 *)((long)unaff_x26 + lVar12);
      while( true ) {
        in_stack_00000010 = in_stack_00000010 + -1;
        if (puVar13 == unaff_x26) {
          return;
        }
        if (unaff_x21 == param_2) break;
        func_0x0001078427f0();
        func_0x000107840328();
        puVar1 = puVar13;
        puVar3 = unaff_x22;
        puVar2 = unaff_x21;
        if ((int)puVar11 == 0) {
          puVar1 = unaff_x24;
          puVar3 = unaff_x21;
          puVar2 = puVar13;
        }
        unaff_x21 = puVar3;
        *in_stack_00000010 = puVar2[-1];
        puVar13 = puVar1;
      }
      while (puVar13 != unaff_x26) {
        func_0x000107843278();
      }
      return;
    }
    func_0x000107842e4c();
    puVar11 = extraout_x8_00;
    while (puVar11 != unaff_x21) {
      func_0x000107842e3c();
      puVar11 = extraout_x8_01;
    }
    while( true ) {
      bVar6 = unaff_x22 == unaff_x26;
      if (bVar6) {
        return;
      }
      func_0x0001078431fc();
      if (bVar6) break;
      iVar8 = (int)*unaff_x21;
      func_0x000107840328();
      puVar11 = unaff_x21;
      if (iVar8 == 0) {
        puVar11 = unaff_x26;
      }
      lVar12 = 8;
      if (iVar8 == 0) {
        lVar12 = 0;
      }
      unaff_x21 = (undefined8 *)((long)unaff_x21 + lVar12);
      func_0x000107842d3c(puVar11);
    }
    func_0x000107842604();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memmove_11034c660)();
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  lVar12 = 0;
  puVar11 = param_1;
  do {
    puVar13 = puVar11 + 1;
    if (puVar13 == param_2) {
      return;
    }
    uVar10 = puVar11[1];
    func_0x000107840328();
    if ((int)uVar10 != 0) {
      uVar9 = *puVar13;
      do {
        func_0x000107842d7c();
        puVar11 = param_1;
        if (lVar12 == 0) goto LAB_107840278;
        func_0x000107842dcc();
        func_0x000107840328();
      } while ((uVar10 & 1) != 0);
      puVar11 = (undefined8 *)((long)param_1 + lVar12 + 8);
LAB_107840278:
      *puVar11 = uVar9;
    }
    lVar12 = lVar12 + 8;
    puVar11 = puVar13;
  } while( true );
}



/* Entry: 107840810; end: 10784094f;  */

void FUN_107840810(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  int iVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long lVar6;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *puVar7;
  undefined8 unaff_x30;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001078430f4();
  func_0x0001078422cc();
  if ((bool)in_ZR) {
    iVar4 = (int)unaff_x21[-1];
    func_0x000107843080();
    if (iVar4 == 0) {
      func_0x0001078426c8();
      uVar5 = unaff_x21[-1];
    }
    else {
      func_0x000107842d6c();
      uVar5 = extraout_x8;
    }
    unaff_x19[1] = uVar5;
  }
  else if (unaff_x23 == (undefined8 *)0x1) {
    func_0x0001078426c8();
  }
  else if ((long)unaff_x23 < 9) {
    uVar3 = unaff_x20 == unaff_x21;
    if (!(bool)uVar3) {
      lVar6 = 0;
      func_0x0001078426c8();
      while (func_0x000107842b14(), !(bool)uVar3) {
        func_0x000107842d5c();
        func_0x0001078407c8();
        if ((int)param_1 == 0) {
          *unaff_x24 = *unaff_x20;
        }
        else {
          func_0x000107842e0c();
          lVar2 = lVar6;
          while (puVar7 = unaff_x19, lVar2 != 0) {
            func_0x000107842854();
            func_0x0001078407c8();
            puVar7 = unaff_x26;
            if ((int)param_1 == 0) break;
            func_0x000107842e1c();
            lVar2 = unaff_x25;
          }
          *puVar7 = *unaff_x20;
          unaff_x26 = puVar7;
        }
        lVar6 = lVar6 + 8;
      }
    }
  }
  else {
    func_0x0001078421ec();
    func_0x000107840674();
    func_0x0001078422b4();
    func_0x000107840674();
    func_0x000107842c9c();
    for (; unaff_x20 != unaff_x22; unaff_x20 = (undefined8 *)((long)unaff_x20 + (long)puVar7)) {
      if (unaff_x23 == unaff_x21) goto LAB_107840934;
      iVar4 = (int)*unaff_x23;
      func_0x000107843080();
      puVar7 = unaff_x24;
      puVar1 = unaff_x23;
      if (iVar4 == 0) {
        puVar7 = (undefined8 *)0x0;
        puVar1 = unaff_x20;
      }
      unaff_x23 = (undefined8 *)((long)unaff_x23 + (long)puVar7);
      puVar7 = (undefined8 *)0x0;
      if (iVar4 == 0) {
        puVar7 = unaff_x24;
      }
      func_0x000107842b70(puVar1);
    }
    while (unaff_x23 != unaff_x21) {
      func_0x000107842b88();
    }
  }
LAB_10784093c:
  func_0x000107842f84(unaff_x30);
  return;
LAB_107840934:
  while (unaff_x20 != unaff_x22) {
    func_0x000107842b08();
  }
  goto LAB_10784093c;
}



/* Entry: 107840ffc; end: 1078410bf;  */

long FUN_107840ffc(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    if (param_1[3] == 0) {
      return 0;
    }
    uVar2 = *param_2;
    func_0x0001078410c0();
    uVar4 = uVar7 - 1;
    if ((uVar7 & uVar4) == 0) {
      uVar5 = uVar2 & uVar4;
    }
    else {
      uVar5 = uVar2;
      if (uVar7 <= uVar2) {
        uVar5 = 0;
        if (uVar7 != 0) {
          uVar5 = uVar2 / uVar7;
        }
        uVar5 = uVar2 - uVar5 * uVar7;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar3[1];
        if (uVar6 != uVar2) break;
        if (plVar3[2] == *param_2) {
          return (long)plVar3;
        }
      }
      if ((uVar7 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar7 <= uVar6) {
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = uVar6 / uVar7;
        }
        uVar6 = uVar6 - uVar1 * uVar7;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 10784193c; end: 1078419a7;  */

undefined8 FUN_10784193c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107841984(param_1 + 0xb0);
  func_0x0001078419bc(param_1 + 0x80);
  func_0x000107841ae0(param_1 + 0x50);
  func_0x000107834800(param_1 + 0x30);
  func_0x00010783fb64(param_1 + 0x18);
  func_0x000107842734(param_1);
  func_0x000107840660();
  return unaff_x19;
}



/* Entry: 107841ba0; end: 107841bc3;  */

void FUN_107841ba0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 107841cf8; end: 107841d1b;  */

void FUN_107841cf8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puVar1 = param_2;
  uStack_60 = param_1;
  puStack_40 = param_4;
  while (puStack_38 = param_4, puVar1 != param_3) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    uVar2 = *puVar1;
    param_4[1] = puVar1[1];
    *param_4 = uVar2;
    param_4[2] = puVar1[2];
    func_0x000107842dec();
    param_4 = param_4 + 3;
    puVar1 = extraout_x8;
  }
  uStack_48 = 1;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    func_0x0001072977d0(param_2);
  }
  func_0x000107841db0(&uStack_60);
  return;
}



/* Entry: 107841f50; end: 107841fa3;  */

undefined8 FUN_107841f50(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  
  func_0x000107842394();
  func_0x000104c322d0();
  func_0x0001078423f4();
  func_0x000104c32320();
  func_0x0001078423b4();
  func_0x000100660238();
  func_0x000104c322f0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000104c32474(auStack_58);
  return uVar1;
}



/* Entry: 107843634; end: 1078438cf;  */

void FUN_107843634(long param_1,long *param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  byte *pbVar8;
  undefined1 auStack_f0 [40];
  undefined1 auStack_c8 [24];
  long lStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  long *plStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  char *pcStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  lVar6 = *param_2;
  if ((lVar6 == 0) && (*(char *)(param_1 + 0x2d9) == '\x01')) {
    puVar2 = (undefined8 *)0x18;
    __Znwm();
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    func_0x0001078474fc();
    plStack_a8 = (long *)CONCAT71(plStack_a8._1_7_,1);
    lStack_b0 = 0;
    if (*(char *)(param_1 + 0x110) == '\0') {
      *(undefined8 **)(param_1 + 0x108) = puVar2;
      *(undefined1 *)(param_1 + 0x110) = 1;
    }
    else {
      lVar6 = *(long *)(param_1 + 0x108);
      *(undefined8 **)(param_1 + 0x108) = puVar2;
      if (lVar6 != 0) {
        func_0x000107847c68();
      }
    }
    func_0x000107846e1c(&lStack_b0);
    if (*(char *)(param_1 + 0x2d8) == '\x01') {
      func_0x00010784b468(auStack_c8,param_1 + 0x30);
      if (*(uint *)(param_1 + 0xc0) < 4) {
        pcVar7 = (&PTR_DAT_1109e1808)[*(uint *)(param_1 + 0xc0)];
      }
      else {
        pcVar7 = "unknown";
      }
      pbVar8 = *(byte **)(param_1 + 0x78);
      lVar6 = param_1 + 0x40;
      func_0x0001072bb3b4();
      puVar4 = auStack_c8;
      plVar5 = param_2;
      func_0x0001005d466c();
      uStack_90 = (ulong)*pbVar8;
      uStack_70 = (ulong)*(byte *)(param_1 + 0x2b9);
      uStack_88 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      lStack_b0 = lVar6;
      plStack_a8 = param_2;
      puStack_a0 = puVar4;
      plStack_98 = plVar5;
      pcStack_80 = pcVar7;
      func_0x0001003a91d4(&UNK_10f42b1e1);
      func_0x0001003a9204(auStack_f0);
      func_0x00010786df04(0xc,auStack_f0,0,0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x110);
    *param_2 = 0;
    if (cVar1 == '\x01') {
      lVar3 = *(long *)(param_1 + 0x108);
      *(long *)(param_1 + 0x108) = lVar6;
      if (lVar3 != 0) {
        func_0x000107847c68();
      }
    }
    else {
      *(long *)(param_1 + 0x108) = lVar6;
      *(undefined1 *)(param_1 + 0x110) = 1;
    }
  }
  *(undefined8 *)(param_1 + 200) = param_6;
  func_0x000107476efc(param_1 + 0x228,param_5);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
  *(undefined1 *)(param_1 + 0xe0) = param_4;
  if (*(int *)(param_1 + 0xc0) - 1U < 3) {
    func_0x0001078481c0();
  }
  else if (*(int *)(param_1 + 0xc0) == 0) {
    func_0x000107847ed8();
    func_0x000107847e4c();
  }
  return;
}



/* Entry: 107845314; end: 1078453b3;  */

void FUN_107845314(long param_1)

{
  if (*(int *)(param_1 + 0xc0) == 1) {
    if (*(long *)(param_1 + 0x118) != *(long *)(param_1 + 0x120)) {
      *(undefined4 *)(param_1 + 0xc0) = 3;
    }
  }
  else if ((*(int *)(param_1 + 0xc0) == 0) &&
          (*(long *)(param_1 + 0x118) != *(long *)(param_1 + 0x120))) {
    func_0x000107848088();
    func_0x000107847e4c();
  }
  return;
}



/* Entry: 107846d6c; end: 107846ddb;  */

undefined8 FUN_107846d6c(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000107846da0(&uStack_28);
  return param_1;
}



/* Entry: 107846f2c; end: 107846f37;  */

long * FUN_107846f2c(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  func_0x0001078480c8();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x18;
        func_0x0001074f4f04();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = param_2 * 0x18;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x18;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x18;
  return param_1;
}



/* Entry: 1078470dc; end: 1078470e7;  */

undefined ** FUN_1078470dc(void)

{
  return &PTR_DAT_1109e14e8;
}



/* Entry: 1078474a8; end: 1078474c3;  */

void FUN_1078474a8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x0001078474c4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107847650; end: 10784767b;  */

undefined8 * FUN_107847650(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1588;
  func_0x0001073787dc(param_1 + 4);
  return param_1;
}



/* Entry: 10784785c; end: 10784786f;  */

void FUN_10784785c(void)

{
  func_0x0001078478d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10784798c; end: 1078479bf;  */

long FUN_10784798c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010784814c(param_2,param_1,&PTR_DAT_1109e16c8);
  param_1 = param_1 + 0x18;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107847a9c; end: 107847abb;  */

void FUN_107847a9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107847b94; end: 107847ba7;  */

void FUN_107847b94(void)

{
  func_0x000107847c04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1078486cc; end: 10784882f;  */

void FUN_1078486cc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int extraout_w10;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_2 + 0x3c8);
  uVar4 = *(undefined8 *)(param_2 + 0x3c8);
  uVar3 = *(undefined8 *)(param_2 + 0x3c0);
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_1109e1a38;
  if (lVar2 != 0) {
    do {
      func_0x00010784969c();
    } while (extraout_w10 != 0);
  }
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 10) = 0x3f800000;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0x3f800000;
  puVar1[0x11] = 0;
  puVar1[0x10] = 0;
  puVar1[0x13] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0x3f800000;
  puVar1[3] = &PTR_DAT_1109e1a88;
  puVar1[0x16] = uVar4;
  puVar1[0x15] = uVar3;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00010750db08(&uStack_40);
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  return;
}



/* Entry: 107848ba0; end: 107848ba7;  */

void FUN_107848ba0(void)

{
  return;
}



/* Entry: 1078490dc; end: 107849107;  */

void FUN_1078490dc(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001078497ac();
  *param_1 = &PTR_DAT_1109e19b8;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 1078493fc; end: 107849417;  */

void FUN_1078493fc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107849418(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107849550; end: 107849577;  */

bool FUN_107849550(long param_1)

{
  return *(long *)(param_1 + 0x90) != 0;
}



/* Entry: 107849634; end: 10784963b;  */

void FUN_107849634(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001074563e8(*(long *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107849cc4; end: 107849d9f;  */

void FUN_107849cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x22;
  undefined8 uVar3;
  long lStack_a0;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [48];
  
  func_0x000107849f80();
  if (lStack_a0 != 0) {
    uVar3 = *unaff_x22;
    func_0x0001078475c8(auStack_90,param_2,param_3);
    puVar1 = (undefined8 *)0x50;
    __Znwm();
    func_0x0001078475ec(auStack_60,auStack_90);
    *puVar1 = &PTR_FUN_1109e1c38;
    puVar1[1] = uVar3;
    puVar1[2] = &UNK_107848830;
    puVar1[3] = 0;
    func_0x0001078475ec(puVar1 + 4,auStack_60);
    func_0x0001073787dc(auStack_60);
    puVar2 = auStack_90;
    func_0x0001073787dc();
    func_0x000107849fe4();
    func_0x00010784a018();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x000107849f1c();
    }
  }
  func_0x000107849fb0();
  return;
}



/* Entry: 107849eb0; end: 107849eb3;  */

undefined8 * FUN_107849eb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e1c38;
  func_0x0001073787dc(param_1 + 4);
  return param_1;
}



/* Entry: 10784a2c4; end: 10784a4ef;  */

void FUN_10784a2c4(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar7;
  undefined4 uVar8;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  ulong *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  char cStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 auStack_230 [64];
  undefined1 auStack_1f0 [32];
  undefined1 auStack_1d0 [208];
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [64];
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  lVar4 = param_1;
  func_0x00010784a844();
  uStack_f8 = *(undefined8 *)(lVar4 + 0x68);
  uStack_100 = *(ulong *)(lVar4 + 0x60);
  uStack_38 = extraout_x8;
  func_0x00010740eff4(&uStack_250,&uStack_100,1);
  uVar8 = NEON_ucvtf((uint)*(byte *)(param_1 + 0x50));
  uStack_100 = CONCAT44(uStack_100._4_4_,uVar8);
  func_0x0001072f8f08(&uStack_270,&uStack_100,1);
  plVar7 = *(long **)(param_1 + 8);
  func_0x00010724cbe8(auStack_1f0,param_2);
  func_0x00010028b26c(&uStack_290,&PTR_DAT_1109e1cb0);
  uStack_2a8 = uStack_268;
  uStack_2b0 = uStack_270;
  uStack_2a0 = uStack_260;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_270 = 0;
  uStack_298 = 1;
  uStack_2c8 = uStack_248;
  uStack_2d0 = uStack_250;
  uStack_2c0 = uStack_240;
  uStack_250 = 0;
  uStack_248 = 0;
  uStack_240 = 0;
  uStack_2b8 = 1;
  func_0x00010729d1b0(auStack_230,param_1 + 0x18);
  func_0x000105302f48(auStack_58,auStack_1f0);
  uStack_100 = uStack_100 & 0xffffffffffffff00;
  uVar3 = cStack_278 == '\x01';
  if ((bool)uVar3) {
    uStack_f8 = uStack_288;
    uStack_100 = uStack_290;
    uStack_f0 = uStack_280;
    uStack_288 = 0;
    uStack_280 = 0;
    uStack_290 = 0;
  }
  uStack_e8 = uVar3;
  func_0x000107273e7c(auStack_e0,&uStack_2b0);
  func_0x000107273ebc(auStack_c0,&uStack_2d0);
  func_0x0001072649c8(auStack_a0,auStack_230);
  uStack_5c = 0;
  uStack_60 = 0;
  func_0x000107273dcc(auStack_1d0,auStack_58,&uStack_100);
  func_0x000107273f24(&uStack_100);
  func_0x0001006393ec(auStack_58);
  (**(code **)(*plVar7 + 0x18))(plVar7,auStack_1d0);
  func_0x000107273efc(auStack_1d0);
  func_0x00010724b3d8(auStack_230);
  func_0x000107273f5c(&uStack_2d0);
  func_0x000107273f7c(&uStack_2b0);
  func_0x0001001148fc(&uStack_290);
  func_0x0001006393ec(auStack_1f0);
  func_0x0001056d1ce4(&uStack_270);
  puVar5 = &uStack_250;
  func_0x00010725aef4();
  func_0x00010784a830(uStack_38);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107273efc(auStack_1d0);
  func_0x00010724b3d8(auStack_230);
  func_0x000107273f5c(&uStack_2d0);
  func_0x000107273f7c(&uStack_2b0);
  func_0x0001001148fc(&uStack_290);
  func_0x0001006393ec(auStack_1f0);
  func_0x0001056d1ce4(&uStack_270);
  puVar6 = &uStack_250;
  func_0x00010725aef4();
  func_0x00010784a854();
  puStack_2d8 = &DAT_10784a4f0;
  uStack_2f8 = puVar6[0xf];
  uStack_300 = puVar6[0xe];
  if (puVar6[0xf] != 0) {
    plVar7 = (long *)(puVar6[0xf] + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puStack_2f0 = &uStack_100;
  puStack_2e8 = puVar5;
  puStack_2e0 = &stack0xfffffffffffffff0;
  func_0x000107314188(extraout_x8_00,&uStack_300,puVar6[0x10]);
  func_0x00010731486c();
  return;
}



/* Entry: 10784a6b8; end: 10784a6df;  */

long FUN_10784a6b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  func_0x00010784a6e0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10784a808; end: 10784a82f;  */

long FUN_10784a808(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10784abac; end: 10784ac43;  */

void FUN_10784abac(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long lStack_38;
  
  if (((*(char *)(param_1 + 0x8b) == '\x01') && ((*(byte *)(param_1 + 0x110) & 1) == 0)) &&
     (*(char *)(param_1 + 0x120) == '\x01')) {
    uVar1 = **(undefined1 **)(param_1 + 0x98);
    lVar2 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    plVar3 = (long *)(param_1 + 0x118);
    func_0x00010725d8e8();
    lStack_38 = (lVar2 - *plVar3) / 1000;
    func_0x00010784a9f0(*(undefined8 *)(param_1 + 0x80),param_1 + 0x20,
                        *(undefined1 *)(param_1 + 0x10),uVar1,&lStack_38);
  }
  *(undefined1 *)(param_1 + 0x110) = 1;
  return;
}



/* Entry: 10784aff0; end: 10784b087;  */

void FUN_10784aff0(long param_1,long *param_2,long param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_4 != param_5) {
    lVar3 = *param_5;
    if (param_1 != param_3) {
      plVar1 = param_4;
      func_0x00010784b0bc(param_4,lVar3);
      *(long *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) - ((long)plVar1 + 1);
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (long)plVar1 + 1;
    }
    plVar1 = *(long **)(lVar3 + 8);
    lVar2 = *param_4;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    lVar2 = *param_2;
    *(long **)(lVar2 + 8) = param_4;
    *param_4 = lVar2;
    *param_2 = lVar3;
    *(long **)(lVar3 + 8) = param_2;
  }
  return;
}



/* Entry: 10784b2bc; end: 10784b337;  */

ulong FUN_10784b2bc(long param_1)

{
  byte *unaff_x19;
  ulong uVar1;
  
  func_0x00010784b338();
  uVar1 = param_1 + 0x9e3779b97f4a7c15;
  uVar1 = uVar1 * 0x1000 + (uVar1 >> 4) + (ulong)*unaff_x19 + 0x9e3779b97f4a7c15 ^ uVar1;
  func_0x0001073b724c();
  func_0x00010784b274();
  return (ulong)(unaff_x19 + (uVar1 >> 4) + uVar1 * 0x1000 + -0x61c8864680b583eb) ^ uVar1;
}



/* Entry: 10784b6b4; end: 10784b74f;  */

void FUN_10784b6b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lStack_40;
  undefined1 uStack_38;
  
  func_0x00010784d97c();
  lStack_40 = *(long *)(param_1 + 0x10) + 0xe0;
  uStack_38 = 1;
  func_0x000107279a5c();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010784b750(uVar1,param_2);
  if ((int)uVar1 != 0) {
    func_0x00010784bd54(*(undefined8 *)(param_1 + 0x10),param_2);
    *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x260) = 1;
  }
  func_0x000107279ee0(&lStack_40);
  func_0x00010784d8cc();
  return;
}



/* Entry: 10784bd44; end: 10784bd83;  */

void FUN_10784bd44(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_2 + 0x88);
  uStack_30 = *(undefined8 *)(param_2 + 0x80);
  if (*(long *)(param_2 + 0x88) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 0x88) + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107314188(param_1,&uStack_30,*(undefined8 *)(param_2 + 0x90));
  func_0x00010731486c();
  return;
}



/* Entry: 10784bf80; end: 10784bfaf;  */

undefined8 * FUN_10784bf80(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x5c0b81702e05c1) {
    puVar1 = (undefined8 *)(param_2 * 0x2c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109e1e98;
  func_0x00010784c060(param_1 + 3);
  return param_1;
}



/* Entry: 10784c10c; end: 10784c11b;  */

void FUN_10784c10c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109e1e98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10784c2c0; end: 10784c2c3;  */

void FUN_10784c2c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109e1ee8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10784c430; end: 10784c45b;  */

void FUN_10784c430(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = &PTR_DAT_1109e1f38;
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
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  param_2[3] = uVar5;
  return;
}



/* Entry: 10784cf38; end: 10784cf4f;  */

void FUN_10784cf38(long *param_1,long param_2)

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



/* Entry: 10784d9fc; end: 10784daaf;  */

long FUN_10784d9fc(long param_1)

{
  long lVar1;
  long *in_x4;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010782cbd4();
  func_0x00010784e30c();
  *(undefined8 *)(lVar1 + 0x370) = 0;
  *(undefined8 *)(lVar1 + 0x368) = 0;
  func_0x00010726ed14(lVar1 + 0x378);
  *(long *)(param_1 + 0x388) = param_1;
  lStack_40 = *in_x4;
  if (lStack_40 != 0) {
    lStack_38 = in_x4[1];
    *in_x4 = 0;
    in_x4[1] = 0;
    func_0x00010784dab0(param_1,&lStack_40);
    func_0x00010784e34c();
  }
  return param_1;
}



/* Entry: 10784dfa8; end: 10784dfdb;  */

undefined8 * FUN_10784dfa8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010784e30c();
  func_0x00010784dfdc(puVar1 + 0x6f);
  func_0x000107510994(param_1 + 0x6d);
  *param_1 = &PTR_DAT_1109e0d50;
  param_1[0x25] = &PTR_DAT_1109e0e60;
  param_1[0x26] = &PTR_DAT_1109e0e88;
  param_1[0x31] = &PTR_DAT_1109e0eb0;
  param_1[0x33] = &PTR_DAT_1109e0ed8;
  param_1[0x35] = &PTR_DAT_1109e0f00;
  *(undefined1 *)(param_1[0x47] + 0x30) = 1;
  func_0x0001073ada2c(*(undefined8 *)(param_1[0x47] + 0x18));
  func_0x00010780f2c0(param_1[0x4e],param_1 + 0x25);
  func_0x000107831228(param_1 + 0x69);
  func_0x0001078312d4(param_1 + 100);
  func_0x000107518510(param_1 + 0x5f);
  func_0x000107518478(param_1 + 0x5a);
  func_0x0001075183b4(param_1 + 0x55);
  func_0x00010751838c(param_1 + 0x53);
  func_0x0001074f9d98(param_1 + 0x51);
  func_0x00010724bd50(param_1 + 0x4c);
  func_0x000107831700(param_1 + 0x49);
  func_0x0001078316dc(param_1 + 0x47);
  func_0x000107831374(param_1 + 0x3f);
  func_0x000107831640(param_1 + 0x3d);
  func_0x0001072c9240(param_1 + 0x37);
  func_0x000107432200(param_1 + 0x35);
  func_0x0001074321c8(param_1 + 0x33);
  func_0x000107432190(param_1 + 0x31);
  func_0x00010747c918(param_1 + 0x26);
  *param_1 = &PTR_DAT_1109e1d40;
  func_0x00010750bcd8(param_1 + 0x13);
  func_0x000104c2f714(param_1 + 4);
  return param_1;
}



/* Entry: 10784e258; end: 10784e2a3;  */

undefined ** FUN_10784e258(void)

{
  return &PTR_DAT_1109e2218;
}



/* Entry: 10784e5d4; end: 10784e677;  */

void FUN_10784e5d4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0x3f800000;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010737efb4(&uStack_50);
  param_2 = param_2 + 8;
  func_0x0001077c2714();
  lStack_60 = param_2;
  uStack_58 = uVar1;
  while (lStack_60 != 0) {
    func_0x000107373114(&uStack_50,uStack_58);
    func_0x0001077c27b4(&lStack_60);
  }
  func_0x00010737efc8(param_1,&uStack_50);
  func_0x0001072981bc(&uStack_50);
  return;
}



/* Entry: 10784e830; end: 10784e84b;  */

long FUN_10784e830(long param_1)

{
  return (((long *)**(undefined8 **)(param_1 + 0x40))[1] -
         *(long *)**(undefined8 **)(param_1 + 0x40)) / 0x70;
}


