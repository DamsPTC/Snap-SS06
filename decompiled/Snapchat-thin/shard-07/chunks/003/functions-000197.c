/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053941e4; end: 10539424f;  */

void FUN_1053941e4(long param_1)

{
  long alStack_30 [2];
  
  FUN_1053942a8(alStack_30);
  if ((alStack_30[0] != 0) && ((*(byte *)(alStack_30[0] + 0x34) & 1) == 0)) {
    func_0x00010046a75c(*(undefined8 *)(alStack_30[0] + 0x18),param_1 + 0x10);
    if ((*(byte *)(alStack_30[0] + 0x35) & 1) == 0) {
      func_0x00010055fa80();
    }
  }
  func_0x000100561e48(alStack_30);
  return;
}



/* Entry: 105394250; end: 1053942a7;  */

void FUN_105394250(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 auStack_88 [12];
  undefined8 uStack_28;
  
  func_0x000100601ad8();
  puVar1 = auStack_88;
  uStack_28 = extraout_x8;
  func_0x0001053942e4();
  func_0x000100629d3c();
  func_0x000100629d48();
  func_0x000100629d7c();
  func_0x000100601c64(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000100629d7c();
  func_0x0001053953cc();
  *extraout_x8_00 = 0;
  extraout_x8_00[1] = 0;
  lVar2 = puVar1[1];
  if (lVar2 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    extraout_x8_00[1] = lVar2;
    if (lVar2 != 0) {
      *extraout_x8_00 = *puVar1;
    }
  }
  return;
}



/* Entry: 1053942a8; end: 10539430f;  */

void FUN_1053942a8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 105394310; end: 105394327;  */

void FUN_105394310(long param_1)

{
  long lVar1;
  long alStack_30 [2];
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_1053942a8(alStack_30);
  if ((alStack_30[0] != 0) && ((*(byte *)(alStack_30[0] + 0x34) & 1) == 0)) {
    func_0x00010046a75c(*(undefined8 *)(alStack_30[0] + 0x18),lVar1 + 0x10);
    if ((*(byte *)(alStack_30[0] + 0x35) & 1) == 0) {
      func_0x00010055fa80();
    }
  }
  func_0x000100561e48(alStack_30);
  return;
}



/* Entry: 105394328; end: 105394347;  */

void FUN_105394328(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1053943c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105394348; end: 10539434b;  */

void FUN_105394348(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10539434c; end: 105394387;  */

void FUN_10539434c(void)

{
  func_0x00010060918c();
  __Znwm(0x28);
  FUN_105394388();
  func_0x0001006092d8();
  return;
}



/* Entry: 105394388; end: 1053943bf;  */

undefined8 * FUN_105394388(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1053943c0; end: 1053943e7;  */

undefined8 FUN_1053943c0(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  func_0x000100450bd8();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1053943e8; end: 1053943eb;  */

void FUN_1053943e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087fdc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053943ec; end: 1053943ff;  */

void FUN_1053943ec(void)

{
  FUN_105394d4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105394400; end: 10539440f;  */

void FUN_105394400(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [184];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [256];
  undefined1 auStack_c8 [4];
  int iStack_c4;
  long alStack_10 [2];
  
  lVar8 = *(long *)(param_2 + 0x10);
  func_0x000100601d74(lVar8,param_1);
  func_0x000100164f28();
  FUN_1053942a8(auStack_1c8,lVar8 + 0x1b0);
  FUN_105394678(alStack_10,auStack_1c8);
  func_0x000100561e48(auStack_1c8);
  if ((alStack_10[0] == 0) || (*(char *)(alStack_10[0] + 0x34) == '\x01')) {
    func_0x00010002b838(auStack_c8,"Service disposed");
    func_0x0001053953ec(auStack_1c8);
    func_0x00010539544c();
    func_0x0001053953b0();
  }
  else {
    if ((*(char **)(unaff_x19 + 0xf0) == (char *)0x0) || (**(char **)(unaff_x19 + 0xf0) != '\x01'))
    {
      func_0x000100603bac(auStack_c8);
      iStack_c4 = iStack_c4 + 1;
      uVar4 = *(undefined1 *)(unaff_x19 + 0x98);
      uVar5 = *(undefined1 *)(unaff_x19 + 0x70);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x74);
      uVar9 = *(undefined8 *)(unaff_x19 + 0xb8);
      uVar3 = *(undefined4 *)(unaff_x19 + 0xc0);
      func_0x00010028af84(auStack_1e8,unaff_x19 + 0xd0);
      uStack_1f8 = *(undefined8 *)(unaff_x19 + 0xf8);
      uStack_200 = *(undefined8 *)(unaff_x19 + 0xf0);
      if (*(long *)(unaff_x19 + 0xf8) != 0) {
        plVar1 = (long *)(*(long *)(unaff_x19 + 0xf8) + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      FUN_1053946cc(auStack_1c8,unaff_x19 + 0x18,unaff_x19 + 0x30,unaff_x19 + 0xa0,uVar4,uVar5,uVar2
                    ,unaff_x19 + 0x78,unaff_x19 + 0x48,uVar9,uVar3);
      func_0x000100608514(&uStack_200);
      func_0x0001001148fc(auStack_1e8);
      func_0x000100601fc0(auStack_2c8,unaff_x20 + 0xb8);
      func_0x000100608910(alStack_10[0],auStack_2c8,unaff_x20 + 0x198,auStack_1c8,auStack_c8,
                          unaff_x20 + 0x1a0);
      func_0x000100609698(auStack_2b8);
      func_0x00010060867c(auStack_1c8);
      func_0x0001006038cc(auStack_c8);
      goto LAB_1006088f0;
    }
    func_0x00010002b838(auStack_c8,"Request cancelled");
    func_0x0001053953ec(auStack_1c8);
    func_0x00010539544c();
    func_0x0001053953b0();
  }
  func_0x000100601c8c(auStack_1c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
LAB_1006088f0:
  FUN_1053947d8(alStack_10);
  return;
}



/* Entry: 105394410; end: 105394677;  */

void FUN_105394410(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [184];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [256];
  undefined1 auStack_c8 [4];
  int iStack_c4;
  long alStack_10 [2];
  
  func_0x000100601d74();
  func_0x000100164f28();
  FUN_1053942a8(auStack_1c8,param_1 + 0x1b0);
  FUN_105394678(alStack_10,auStack_1c8);
  func_0x000100561e48(auStack_1c8);
  if ((alStack_10[0] == 0) || (*(char *)(alStack_10[0] + 0x34) == '\x01')) {
    func_0x00010002b838(auStack_c8,"Service disposed");
    func_0x0001053953ec(auStack_1c8);
    func_0x00010539544c();
    func_0x0001053953b0();
  }
  else {
    if ((*(char **)(unaff_x19 + 0xf0) == (char *)0x0) || (**(char **)(unaff_x19 + 0xf0) != '\x01'))
    {
      func_0x000100603bac(auStack_c8);
      iStack_c4 = iStack_c4 + 1;
      uVar4 = *(undefined1 *)(unaff_x19 + 0x98);
      uVar5 = *(undefined1 *)(unaff_x19 + 0x70);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x74);
      uVar8 = *(undefined8 *)(unaff_x19 + 0xb8);
      uVar3 = *(undefined4 *)(unaff_x19 + 0xc0);
      func_0x00010028af84(auStack_1e8,unaff_x19 + 0xd0);
      uStack_1f8 = *(undefined8 *)(unaff_x19 + 0xf8);
      uStack_200 = *(undefined8 *)(unaff_x19 + 0xf0);
      if (*(long *)(unaff_x19 + 0xf8) != 0) {
        plVar1 = (long *)(*(long *)(unaff_x19 + 0xf8) + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = *plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      FUN_1053946cc(auStack_1c8,unaff_x19 + 0x18,unaff_x19 + 0x30,unaff_x19 + 0xa0,uVar4,uVar5,uVar2
                    ,unaff_x19 + 0x78,unaff_x19 + 0x48,uVar8,uVar3);
      func_0x000100608514(&uStack_200);
      func_0x0001001148fc(auStack_1e8);
      func_0x000100601fc0(auStack_2c8,unaff_x20 + 0xb8);
      func_0x000100608910(alStack_10[0],auStack_2c8,unaff_x20 + 0x198,auStack_1c8,auStack_c8,
                          unaff_x20 + 0x1a0);
      func_0x000100609698(auStack_2b8);
      func_0x00010060867c(auStack_1c8);
      func_0x0001006038cc(auStack_c8);
      goto LAB_1006088f0;
    }
    func_0x00010002b838(auStack_c8,"Request cancelled");
    func_0x0001053953ec(auStack_1c8);
    func_0x00010539544c();
    func_0x0001053953b0();
  }
  func_0x000100601c8c(auStack_1c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
LAB_1006088f0:
  FUN_1053947d8(alStack_10);
  return;
}



/* Entry: 105394678; end: 1053946cb;  */

void FUN_105394678(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (___dynamic_cast(lVar1,&PTR_DAT_1107e9c58,&PTR_DAT_1107e9c40,0), lVar1 != 0))
  {
    lVar2 = param_2[1];
    *param_1 = lVar1;
    param_1[1] = lVar2;
    param_1 = param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1053946cc; end: 1053947d7;  */

void FUN_1053946cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 *param_14,undefined8 *param_15)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100608134();
  func_0x0001006084e0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(unaff_x19 + 0x30,param_3)
  ;
  func_0x00010028b0c8(unaff_x19 + 0x48,param_9);
  *(undefined1 *)(unaff_x19 + 0x70) = param_6;
  *(undefined4 *)(unaff_x19 + 0x74) = param_7;
  func_0x0001006084ec();
  *(undefined1 *)(unaff_x19 + 0x98) = param_5;
  func_0x0001006084f8(unaff_x19 + 0xa0);
  *(undefined1 *)(unaff_x19 + 0xd0) = 0;
  *(undefined8 *)(unaff_x19 + 0xb8) = param_10;
  *(undefined4 *)(unaff_x19 + 0xc0) = param_11;
  *(undefined8 *)(unaff_x19 + 0xc4) = param_13;
  *(undefined1 *)(unaff_x19 + 0xe8) = 0;
  if (*(char *)(param_14 + 3) == '\x01') {
    uVar2 = param_14[1];
    uVar1 = *param_14;
    *(undefined8 *)(unaff_x19 + 0xe0) = param_14[2];
    *(undefined8 *)(unaff_x19 + 0xd8) = uVar2;
    *(undefined8 *)(unaff_x19 + 0xd0) = uVar1;
    param_14[1] = 0;
    param_14[2] = 0;
    *param_14 = 0;
    *(undefined1 *)(unaff_x19 + 0xe8) = 1;
  }
  uVar1 = *param_15;
  *(undefined8 *)(unaff_x19 + 0xf8) = param_15[1];
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar1;
  *param_15 = 0;
  param_15[1] = 0;
  return;
}



/* Entry: 1053947d8; end: 1053947fb;  */

void FUN_1053947d8(long param_1)

{
  func_0x000100601d10();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1053947fc; end: 10539480f;  */

void FUN_1053947fc(void)

{
  func_0x0001008369d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105394810; end: 105394aab;  */

long * FUN_105394810(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long unaff_x19;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [16];
  long alStack_188 [32];
  undefined8 uStack_88;
  undefined1 auStack_80 [40];
  undefined8 uStack_58;
  
  func_0x000100601ad8();
  uStack_58 = extraout_x8;
  if (((*(byte *)(param_1 + 0x110) & 1) == 0) &&
     (((*(byte **)(param_2 + 0xf0) == (byte *)0x0 || ((**(byte **)(param_2 + 0xf0) & 1) == 0)) &&
      (uVar6 = param_3, func_0x00010b28236c(param_3,unaff_x19 + 0x58), (int)uVar6 != 0)))) {
    lVar3 = unaff_x19 + 0x58;
    FUN_105394aac(lVar3);
    uVar6 = *(undefined8 *)(unaff_x19 + 8);
    func_0x0001006099c0(alStack_188,param_2);
    uStack_88 = *(undefined8 *)(unaff_x19 + 0x18);
    puVar4 = auStack_80;
    func_0x00010060981c(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x10),puVar4);
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_105394b18(auStack_198,uVar6,alStack_188,puVar4 + lVar3 * 1000000);
    func_0x000100688f2c(auStack_198);
    plVar5 = alStack_188;
    func_0x000105394c88();
  }
  else {
    __ZNSt3__19to_stringEi(auStack_1c8,param_4);
    func_0x000105394cb8(alStack_188,&PTR_s_fromServer_11087fe80,auStack_1c8);
    func_0x000100607634(auStack_1b0,alStack_188,1);
    func_0x000105395474();
    func_0x0001006b1fc4();
    func_0x000100835984();
    if ((bool)in_ZR) {
      func_0x000105395460();
      func_0x00010082a8bc(auStack_1b0,alStack_188);
      func_0x000105395474();
      func_0x000105395460();
      func_0x00010082a8bc(auStack_1c8,alStack_188);
      func_0x000105395474();
    }
    puVar2 = puRam000000011383a240;
    if (puRam000000011383a240 != (undefined8 *)0x0) {
      func_0x0001008342d4(alStack_188,auStack_1b0);
      func_0x0001053954c4(*(undefined8 *)*puVar2);
      (*extraout_x8_00)();
      func_0x0001053954a4();
    }
    puVar2 = puRam000000011383a240;
    if (puRam000000011383a240 != (undefined8 *)0x0) {
      func_0x00010539550c();
      func_0x0001053954c4(*(undefined8 *)*puVar2);
      (*extraout_x8_01)();
      func_0x0001053954a4();
    }
    puVar2 = puRam000000011383a240;
    if (puRam000000011383a240 != (undefined8 *)0x0) {
      func_0x00010539550c();
      func_0x0001053954c4(*(undefined8 *)*puVar2);
      (*extraout_x8_02)();
      func_0x0001053954a4();
    }
    func_0x000100835b80(0xf,param_2,0,auStack_1c8);
    plVar5 = *(long **)(unaff_x19 + 0x48);
    (**(code **)(*plVar5 + 0x30))(plVar5,param_2,param_3,param_4);
    func_0x00010083697c();
    func_0x000100836984();
  }
  func_0x000100601c64(uStack_58);
  if ((bool)in_ZR) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar5 = alStack_188;
  func_0x000105394c88();
  func_0x0001053953cc();
  iVar1 = (int)plVar5[1];
  if (iVar1 == 3) {
    iVar1 = *(int *)((long)plVar5 + 4);
    if (iVar1 != 0) goto LAB_105394af0;
  }
  else {
    if (iVar1 == 2) {
      iVar1 = *(int *)((long)plVar5 + 4);
LAB_105394af0:
      dVar7 = 1.0;
      _ldexp(0x3ff0000000000000,iVar1);
      return (long *)(long)(dVar7 * (double)plVar5[2]);
    }
    if (iVar1 == 1) {
      return (long *)plVar5[2];
    }
  }
  return (long *)0x0;
}



/* Entry: 105394aac; end: 105394b17;  */

long FUN_105394aac(long param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 3) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 0) goto LAB_105394af0;
  }
  else {
    if (iVar1 == 2) {
      iVar1 = *(int *)(param_1 + 4);
LAB_105394af0:
      dVar2 = 1.0;
      _ldexp(0x3ff0000000000000,iVar1);
      return (long)(dVar2 * (double)*(long *)(param_1 + 0x10));
    }
    if (iVar1 == 1) {
      return *(long *)(param_1 + 0x10);
    }
  }
  return 0;
}



/* Entry: 105394b18; end: 105394b9f;  */

undefined8 *
FUN_105394b18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined1 auStack_98 [8];
  undefined8 auStack_90 [11];
  undefined8 uStack_38;
  
  func_0x000100608e7c();
  uStack_38 = extraout_x8;
  FUN_105394ba0(auStack_98);
  func_0x00010bcce9b8(param_1,param_2,auStack_98,param_4);
  func_0x0001006093d8();
  puVar1 = auStack_90;
  (*extraout_x8_00)();
  func_0x000100601c64(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001006093d8();
  puVar1 = auStack_90;
  (*extraout_x8_01)();
  func_0x0001053953cc();
  *puVar1 = 0x105394bcc;
  func_0x000105394bdc(puVar1 + 1);
  return puVar1;
}



/* Entry: 105394ba0; end: 105394bcb;  */

undefined8 * FUN_105394ba0(undefined8 *param_1)

{
  *param_1 = 0x105394bcc;
  func_0x000105394bdc(param_1 + 1);
  return param_1;
}



/* Entry: 105394bcc; end: 105394beb;  */

void FUN_105394bcc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000105394bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x100))(lVar1,lVar1 + 0x100);
  return;
}



/* Entry: 105394bec; end: 105394c0b;  */

void FUN_105394bec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000105394c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105394c0c; end: 105394c0f;  */

void FUN_105394c0c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 105394c10; end: 105394c4b;  */

void FUN_105394c10(void)

{
  func_0x00010060918c();
  __Znwm(0x130);
  FUN_105394c4c();
  func_0x0001006092d8();
  return;
}



/* Entry: 105394c4c; end: 105394cef;  */

void FUN_105394c4c(long param_1)

{
  long unaff_x19;
  
  func_0x000100164f28();
  func_0x0001006099c0();
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(unaff_x19 + 0x100);
  (**(code **)(*(long *)(unaff_x19 + 0x108) + 0x10))(param_1 + 0x108,unaff_x19 + 0x108);
  return;
}



/* Entry: 105394cf0; end: 105394cfb;  */

void FUN_105394cf0(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000105395518();
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x0001003b0614();
  }
  return;
}



/* Entry: 105394cfc; end: 105394d1b;  */

void FUN_105394cfc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x0001003b0614();
  }
  return;
}



/* Entry: 105394d1c; end: 105394d4b;  */

void FUN_105394d1c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x30;
    func_0x0001003b0614();
  }
  return;
}



/* Entry: 105394d4c; end: 105394d5b;  */

void FUN_105394d4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087fdc0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105394d5c; end: 105394db3;  */

void FUN_105394d5c(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 auStack_88 [12];
  undefined8 uStack_28;
  
  func_0x000100601ad8();
  puVar1 = auStack_88;
  uStack_28 = extraout_x8;
  FUN_105394f98();
  func_0x000100629d3c();
  func_0x000100629d48();
  func_0x000100629d7c();
  func_0x000100601c64(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000100629d7c();
  func_0x0001053953cc();
  *puVar1 = &PTR_FUN_11087feb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105394db4; end: 105394db7;  */

void FUN_105394db4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087feb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105394db8; end: 105394ddf;  */

void FUN_105394db8(void)

{
  FUN_105394f8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105394de0; end: 105394e13;  */

long * FUN_105394de0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(*param_1 + 0x18) == 0) {
    plVar2 = *(long **)param_1[2];
                    /* WARNING: Could not recover jumptable at 0x000105394e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))(plVar2,param_1[1],param_2,0);
    return plVar2;
  }
  plVar2 = *(long **)(*param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105394e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))();
    return plVar2;
  }
  func_0x000104bfeb48(0,param_1[1]);
  plVar1 = plVar2;
  func_0x00010060d428();
  func_0x00010061cd5c(plVar1 + 0x65);
  *plVar2 = (long)&PTR_DAT_11087ffd8;
  if (plVar2[0x22] != 0) {
    func_0x000100836a88(plVar2[0x22],plVar2 + 0x24);
  }
  func_0x000100601aa4(plVar2 + 99);
  func_0x000100601c8c(plVar2 + 0x5c);
  func_0x000100836b24(plVar2 + 0x24);
  func_0x00010060867c(plVar2 + 4);
  *plVar2 = (long)&PTR_DAT_110880018;
  func_0x000100450be4(plVar2 + 1);
  return plVar2;
}



/* Entry: 105394e14; end: 105394e33;  */

long * FUN_105394e14(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105394e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))();
    return plVar2;
  }
  func_0x000104bfeb48();
  plVar1 = plVar2;
  func_0x00010060d428();
  func_0x00010061cd5c(plVar1 + 0x65);
  *plVar2 = (long)&PTR_DAT_11087ffd8;
  if (plVar2[0x22] != 0) {
    func_0x000100836a88(plVar2[0x22],plVar2 + 0x24);
  }
  func_0x000100601aa4(plVar2 + 99);
  func_0x000100601c8c(plVar2 + 0x5c);
  func_0x000100836b24(plVar2 + 0x24);
  func_0x00010060867c(plVar2 + 4);
  *plVar2 = (long)&PTR_DAT_110880018;
  func_0x000100450be4(plVar2 + 1);
  return plVar2;
}



/* Entry: 105394e34; end: 105394e37;  */

undefined8 * FUN_105394e34(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x00010060d428();
  func_0x00010061cd5c(puVar1 + 0x65);
  *param_1 = &PTR_DAT_11087ffd8;
  if (param_1[0x22] != 0) {
    func_0x000100836a88(param_1[0x22],param_1 + 0x24);
  }
  func_0x000100601aa4(param_1 + 99);
  func_0x000100601c8c(param_1 + 0x5c);
  func_0x000100836b24(param_1 + 0x24);
  func_0x00010060867c(param_1 + 4);
  *param_1 = &PTR_DAT_110880018;
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 105394e38; end: 105394ebf;  */

void FUN_105394e38(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [56];
  
  uVar1 = *(undefined8 *)(param_1 + 0x328);
  func_0x00010002b838(auStack_70,"Service was shutdown");
  func_0x0001053953ec(auStack_58);
  func_0x00010539544c();
  func_0x000105395400(uVar1,param_1 + 0x20,auStack_58);
  func_0x00010539548c();
  func_0x000105395444();
  FUN_105394ee4(param_1 + 0x328);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 105394ec0; end: 105394ee3;  */

undefined1 FUN_105394ec0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 105394ee4; end: 105394f0b;  */

void FUN_105394ee4(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010061cd5c(&uStack_20);
  return;
}



/* Entry: 105394f0c; end: 105394f4b;  */

bool FUN_105394f0c(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  
  if (*(ulong *)(param_1 + 8) < param_3) {
    bVar1 = false;
  }
  else {
    FUN_105394f4c(param_1,0,param_3,param_2,param_3);
    bVar1 = (int)param_1 == 0;
  }
  return bVar1;
}



/* Entry: 105394f4c; end: 105394f8b;  */

void FUN_105394f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001000671d4();
  uStack_30 = param_1;
  uStack_28 = param_2;
  func_0x000100067218(&uStack_30,param_4,param_5);
  return;
}



/* Entry: 105394f8c; end: 105394f97;  */

void FUN_105394f8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11087feb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105394f98; end: 105394fc3;  */

undefined8 * FUN_105394f98(undefined8 *param_1)

{
  *param_1 = FUN_105394fc4;
  FUN_105395058(param_1 + 1);
  return param_1;
}



/* Entry: 105394fc4; end: 105394fcb;  */

void FUN_105394fc4(long param_1)

{
  long lVar1;
  undefined1 auStack_58 [56];
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_10539501c(auStack_58);
  func_0x00010060d064(lVar1,auStack_58,0,lVar1 + 0x108);
  func_0x0001004a21bc(auStack_58);
  return;
}



/* Entry: 105394fcc; end: 10539501b;  */

void FUN_105394fcc(long param_1)

{
  undefined1 auStack_58 [56];
  
  FUN_10539501c(auStack_58);
  func_0x00010060d064(param_1,auStack_58,0,param_1 + 0x108);
  func_0x0001004a21bc(auStack_58);
  return;
}



/* Entry: 10539501c; end: 105395057;  */

void FUN_10539501c(undefined8 *param_1)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_28 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  func_0x0001004a21bc(&uStack_28);
  return;
}



/* Entry: 105395058; end: 105395067;  */

void FUN_105395058(undefined8 param_1,undefined8 param_2)

{
  func_0x00010060918c(param_1,&PTR_FUN_110880060,param_2);
  __Znwm(0x208);
  FUN_1053950c8();
  func_0x0001006092d8();
  return;
}



/* Entry: 105395068; end: 105395087;  */

void FUN_105395068(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_105395100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 105395088; end: 10539508b;  */

void FUN_105395088(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10539508c; end: 1053950c7;  */

void FUN_10539508c(void)

{
  func_0x00010060918c();
  __Znwm(0x208);
  FUN_1053950c8();
  func_0x0001006092d8();
  return;
}



/* Entry: 1053950c8; end: 1053950ff;  */

void FUN_1053950c8(long param_1)

{
  long unaff_x20;
  
  func_0x000100603768();
  func_0x0001006098dc();
  func_0x0001006099c0(param_1 + 0x108,unaff_x20 + 0x108);
  return;
}



/* Entry: 105395100; end: 105395127;  */

undefined8 FUN_105395100(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010060867c(param_1 + 0x108);
  func_0x00010061cd5c(param_1 + 0xf8);
  func_0x000107c60ca0(param_1 + 0xe0);
  func_0x00010061cdb4();
  func_0x00010061ce60();
  func_0x000100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 105395128; end: 1053951fb;  */

/* WARNING: Removing unreachable block (ram,0x0001053951c0) */

bool FUN_105395128(void)

{
  int iVar1;
  long *plVar2;
  code *extraout_x8;
  int unaff_w19;
  long unaff_x20;
  
  func_0x000100164f28();
  (**(code **)(*plRam0000000113815c70 + 0x1c0))(plRam0000000113815c70,1);
  do {
    plVar2 = plRam0000000113815c70;
    (**(code **)(*plRam0000000113815c70 + 0x48))
              (plRam0000000113815c70,*(undefined8 *)(unaff_x20 + 0x10));
    func_0x000100629d3c();
    iVar1 = unaff_w19;
    (*extraout_x8)();
  } while (iVar1 == 0);
  return ((ulong)plVar2 & 0xffffffff00000000) != 0;
}



/* Entry: 1053951fc; end: 1053951ff;  */

void FUN_1053951fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880098;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105395200; end: 105395213;  */

void FUN_105395200(void)

{
  FUN_105395380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105395214; end: 10539521f;  */

void FUN_105395214(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010061db00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 105395220; end: 105395233;  */

void FUN_105395220(void)

{
  func_0x000100850ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105395234; end: 10539537f;  */

void FUN_105395234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  long *plVar1;
  long unaff_x20;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [56];
  long *plStack_170;
  long lStack_168;
  undefined4 uStack_108;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_a0;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100164f28();
  ppuStack_70 = &PTR_FUN_11087fb18;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x00010084f180(param_3,&ppuStack_70);
  if ((int)param_3 == 0) {
    plVar1 = *(long **)(unaff_x20 + 8);
    _bzero(&plStack_170,0xf0);
    uStack_108 = 0x3f800000;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    uStack_a0 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    func_0x00010002b838(auStack_1c0,"Failed to deserialize response");
    func_0x000105394120(auStack_1a8,0xd,auStack_1c0);
    func_0x00010539552c(*(undefined8 *)(*plVar1 + 0x30));
    func_0x00010539548c();
    func_0x000105395444();
    func_0x00010060867c(&plStack_170);
  }
  else {
    plVar1 = *(long **)(unaff_x20 + 8);
    lStack_168 = *(long *)(unaff_x20 + 0x10);
    plStack_170 = plVar1;
    if (lStack_168 != 0) {
      do {
        func_0x0001004b6e78();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar1 + 0x38))();
    func_0x00010538dffc(&plStack_170);
  }
  FUN_105393228(&ppuStack_70);
  return;
}



/* Entry: 105395380; end: 10539538b;  */

void FUN_105395380(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880098;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10539538c; end: 1053953af;  */

void FUN_10539538c(long param_1)

{
  func_0x000100601d10();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1053953b0; end: 10539555f;  */

void FUN_1053953b0(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001053953bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 105395560; end: 10539570f; -[SCCameraDataSourceFactoryImpl initWithCameraRequestHandler:cameraCaptureRequestHandler:cameraHardwareOwnershipRequester:cameraHardwareResource:captureDeviceManager:cameraConfigurationServices:audioSessionServices:userSession:circumstanceEngine:] */

undefined1 *
FUN_105395560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e7cb0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_9);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_10);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),param_11);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105395710; end: 10539577f; -[SCCameraDataSourceFactoryImpl dataSourceWithDevicePosition:context:] */

void FUN_105395710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afed0;
  _objc_retain(param_4);
  func_0x00010c0db140(puVar1);
  func_0x00010bf646c0(param_1,param_2,param_3,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105395780; end: 10539587f; -[SCCameraDataSourceFactoryImpl dataSourceWithPrimaryDevicePosition:secondaryDevicePositions:context:] */

void FUN_105395780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar5 = PTR_PTR_1126b7ed8;
  _objc_retain(param_5);
  _objc_alloc();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  lVar6 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar7 = param_1 + 0x38;
  _objc_loadWeakRetained();
  lVar8 = param_1 + 0x40;
  _objc_loadWeakRetained();
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  func_0x00010bffb980(puVar5,param_2,uVar1,uVar3,uVar2,uVar4,uVar9,param_3,param_4,lVar6,lVar7,lVar8
                      ,param_5,param_1);
  _objc_release(param_5);
  _objc_release(param_1);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105395880; end: 1053958f3; -[SCCameraDataSourceFactoryImpl .cxx_destruct] */

void FUN_105395880(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053958f4; end: 10539592f; -[SCCameraLegacyDataSourceFactoryImpl .cxx_destruct] */

void FUN_1053958f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105395930; end: 1053959fb; -[SCPlainBuffersDataSourceFactoryImpl initWithPerformer:audioDataSource:audioConfigurationFactory:] */

undefined1 *
FUN_105395930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e7cc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053959fc; end: 105395b1f; -[SCPlainBuffersDataSourceFactoryImpl dataSourceWithBufferTargetSize:orientation:startTime:timeIntervalMsec:leewayMsec:context:screenLifecycleEvents:pixelBufferProvider:capturePosition:] */

void FUN_1053959fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  
  puVar1 = PTR_PTR_1126b7ee8;
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x7);
  _objc_retain(in_x6);
  _objc_retain(in_x4);
  _objc_alloc(puVar1);
  func_0x00010c0323e0(param_1,param_2);
  puVar2 = PTR_PTR_1126b7ef0;
  _objc_alloc(PTR_PTR_1126b7ef0);
  func_0x00010c050b40(param_1,param_2);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105395b20; end: 105395b5b; -[SCPlainBuffersDataSourceFactoryImpl .cxx_destruct] */

void FUN_105395b20(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105395b5c; end: 105395bcb; -[SCPlainBuffersMetadataProvider initWithOrientation:bufferSize:devicePosition:] */

void FUN_105395b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7cc8;
  uStack_40 = param_3;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    *(undefined2 *)((long)puVar1 + 0x20) = 0x101;
    *(undefined1 *)((long)puVar1 + 0x22) = 0;
  }
  return;
}



/* Entry: 105395bcc; end: 105395bdb; -[SCPlainBuffersMetadataProvider shouldFlipSavingImage] */

bool FUN_105395bcc(long param_1)

{
  return *(long *)(param_1 + 0x18) == 0;
}



/* Entry: 105395bdc; end: 105395be3; -[SCPlainBuffersMetadataProvider imageOrientation] */

undefined8 FUN_105395bdc(void)

{
  return 0;
}



/* Entry: 105395be4; end: 105395c4f; -[SCPlainBuffersMetadataProvider fieldOfViewObservable] */

void FUN_105395be4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf69620(PTR_PTR_1126b2930);
  func_0x00010c0df740(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105395c50; end: 105395cb3; -[SCPlainBuffersMetadataProvider captureDevicePositionObservable] */

void FUN_105395c50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105395cb4; end: 105395d2f; -[SCPlainBuffersMetadataProvider bufferDimensionObservable] */

void FUN_105395cb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = PTR_PTR_1126ae6b8;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_30,"{CGSize=dd}");
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105395d30; end: 105395d9b; -[SCPlainBuffersMetadataProvider cameraRenderRegionObservable] */

void FUN_105395d30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae6b8;
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971a0(0,0,0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___NSValue_1126afdf8)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0860a0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105395d9c; end: 105395da3; -[SCPlainBuffersMetadataProvider orientation] */

undefined8 FUN_105395d9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105395da4; end: 105395dab; -[SCPlainBuffersMetadataProvider opaqueSampleBuffer] */

undefined1 FUN_105395da4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 105395dac; end: 105395db3; -[SCPlainBuffersMetadataProvider isFileStream] */

undefined1 FUN_105395dac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 105395db4; end: 105395dbb; -[SCPlainBuffersMetadataProvider isLiveStreaming] */

undefined1 FUN_105395db4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22);
}



/* Entry: 105395dbc; end: 105395fc7;  */

void FUN_105395dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b7ef8;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126b7f00;
  _objc_alloc(PTR_PTR_1126b7f00);
  uVar3 = param_1;
  func_0x00010c135d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b7f08;
  _objc_alloc_init(PTR_PTR_1126b7f08);
  func_0x00010c03f280(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b7f10;
  _objc_alloc(PTR_PTR_1126b7f10);
  uVar3 = param_2;
  func_0x0001003b5640(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c231740();
  puVar6 = PTR_PTR_1126b7f20;
  _objc_alloc();
  func_0x00010c028300();
  _objc_release(param_7);
  func_0x00010c0347a0(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105395fc8; end: 105396077;  */

void FUN_105395fc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_1);
  puVar1 = PTR_PTR_1126b7f28;
  _objc_alloc(PTR_PTR_1126b7f28);
  uVar2 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c11e0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c003200(puVar1);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105396078; end: 1053962b7;  */

void FUN_105396078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_1);
  uVar1 = param_1;
  FUN_105395dbc(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_retain(param_2);
  _objc_retain(param_7);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1053962b8; end: 10539640f;  */

void FUN_1053962b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  pcVar5 = "ContentManager:_contentDeliveryInstance";
  func_0x0001000ba800("ContentManager:_contentDeliveryInstance");
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf106e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf5c580();
  _objc_retainAutoreleasedReturnValue();
  FUN_105396788(uVar11,0,uVar3,uVar1,uVar4,0,uVar2,uVar7,uVar10,*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x0001000e2a84(pcVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
  return;
}



/* Entry: 105396410; end: 10539644f;  */

void FUN_105396410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7f30;
  FUN_105395dbc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfee220(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105396450; end: 1053964bb; -[SCBoltCOFShims initWithCircumstanceEngine:] */

undefined1 * FUN_105396450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7cd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c17c5e0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053964bc; end: 1053965f3; -[SCBoltCOFShims getNetworkRulesWithSignals:] */

void FUN_1053964bc(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b7f38;
    _objc_alloc(PTR_PTR_1126b7f38);
    func_0x00010c008360();
    puVar3 = PTR_PTR_1126ae780;
    _objc_alloc_init(PTR_PTR_1126ae780);
    func_0x00010c172f00();
    _objc_release(puVar1);
  }
  puVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf9300(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c1195e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd5cd8,param_1,puVar3
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_alloc_init(PTR__OBJC_CLASS___NSData_1126ae778);
  }
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053965f4; end: 105396643; -[SCBoltCOFShims _defaultConfig] */

void FUN_1053965f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af7d0;
  _objc_alloc_init(PTR_PTR_1126af7d0);
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc_init(PTR__OBJC_CLASS___NSData_1126ae778);
  func_0x00010c220160(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105396644; end: 10539665b; -[SCBoltCOFShims circumstanceEngine] */

void FUN_105396644(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10539665c; end: 105396667; -[SCBoltCOFShims setCircumstanceEngine:] */

void FUN_10539665c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 105396668; end: 10539666f; -[SCBoltCOFShims .cxx_destruct] */

void FUN_105396668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105396670; end: 105396673; -[SCNContentResolutionContentResolver nativeContentResolver] */

void FUN_105396670(void)

{
  return;
}



/* Entry: 105396674; end: 1053966b7; -[SCNContentResolutionContentResolver resolveContentUrl:mediaId:] */

void FUN_105396674(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c13aec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053966b8; end: 1053966bb; -[SCNContentResolutionContentResolver convertUrlToContentObject:] */

void FUN_1053966b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf50e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_convertContentUrlToContentObject_1125b1d48);
  return;
}



/* Entry: 1053966bc; end: 1053966bf; -[SCNContentManagerCacheController getTotalDiskSizeInBytes] */

void FUN_1053966bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_estimateTotalDiskUsage_1125c3f48);
  return;
}



/* Entry: 1053966c0; end: 105396773; -[SCNContentManagerCacheController clearAllCachedContentWithCompletion:] */

void FUN_1053966c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7f40;
  _objc_alloc(PTR_PTR_1126b7f40);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105396774;
  puStack_40 = &UNK_110849530;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bffada0(puVar1,param_2,&puStack_58);
  func_0x00010bf3a780(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105396774; end: 105396787;  */

void FUN_105396774(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105396780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105396788; end: 105396b47;  */

void FUN_105396788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b7f48;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_1);
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5a280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_1);
  _objc_release(param_7);
  puVar2 = PTR_PTR_1126b7f50;
  _objc_alloc(PTR_PTR_1126b7f50);
  func_0x00010bffe1e0();
  func_0x00010bf6ace0(puVar1);
  puVar3 = PTR_PTR_1126b7f18;
  _objc_alloc(PTR_PTR_1126b7f18);
  if (param_5 == 0) {
    func_0x00010c04fe20();
  }
  else {
    func_0x00010c05a8c0();
  }
  func_0x00010bf6acc0(puVar1);
  func_0x00010bf1f440(param_3);
  puVar4 = PTR_PTR_1126b7f58;
  _objc_alloc(PTR_PTR_1126b7f58);
  func_0x00010c0037c0();
  _objc_release(param_10);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105396b48; end: 105396c9f;  */

void FUN_105396b48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b7f08;
  _objc_alloc_init(PTR_PTR_1126b7f08);
  puVar2 = puVar1;
  func_0x0001003b52dc();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_105396788();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105396ca0; end: 105396de7;  */

void FUN_105396ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  puVar1 = PTR_PTR_1126b7f50;
  _objc_alloc(PTR_PTR_1126b7f50);
  func_0x00010bffe1e0();
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b7f18;
  _objc_alloc(PTR_PTR_1126b7f18);
  func_0x00010c04fe20();
  _objc_release(param_2);
  puVar3 = PTR_PTR_1126b7f78;
  func_0x00010c231740(PTR_PTR_1126b7f18);
  func_0x00010bf5a200(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befb080();
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b7f80;
  _objc_alloc(PTR_PTR_1126b7f80);
  uVar4 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0039a0(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}


