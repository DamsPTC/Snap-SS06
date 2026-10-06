/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105637b44; end: 105637c33;  */

void FUN_105637b44(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000105637b88(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 105637c34; end: 105637ce7;  */

void FUN_105637c34(long *param_1)

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



/* Entry: 105637ce8; end: 105637f5b;  */

undefined8 * FUN_105637ce8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined4 auStack_80 [2];
  long lStack_78;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  
  *param_1 = &PTR_FUN_1108a1658;
  param_1[1] = 0;
  param_1[2] = 0;
  auStack_80[0] = 4;
  puVar5 = param_1;
  func_0x00010046e484();
  func_0x000104bfecb0(auStack_50,&DAT_10f2e01fb,auStack_80,puVar5);
  func_0x00010055c758(&uStack_58);
  func_0x0001004695d8(&lStack_68);
  lVar4 = lStack_68;
  func_0x00010002b838(auStack_80,"aws.api.snapchat.com");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar4 + 0x98,auStack_80);
  func_0x0001056386dc();
  lVar4 = lStack_68;
  *(undefined8 *)(lStack_68 + 0x90) = 100000;
  *(undefined8 *)(lStack_68 + 0x68) = 100000;
  *(undefined1 *)(lStack_68 + 0x70) = 1;
  func_0x00010002b838(auStack_80,&UNK_10f2e0200);
  func_0x0001002a8234(lVar4 + 8,auStack_80);
  func_0x0001056386dc();
  if ((param_4 & 1) == 0) {
    *(undefined4 *)(lStack_68 + 0x8c) = 3;
    func_0x00010046a890(uStack_58,3);
  }
  else {
    *(undefined8 *)(lStack_68 + 0x78) = param_3;
    *(undefined1 *)(lStack_68 + 0x80) = 1;
  }
  lStack_78 = lStack_60;
  if (lStack_60 != 0) {
    plVar1 = (long *)(lStack_60 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010046a2d4(uStack_58,auStack_80);
  func_0x00010046e224(auStack_80);
  func_0x0001004896c8(auStack_a0,param_2);
  func_0x00010061a77c(auStack_b0);
  uStack_b4 = 0;
  func_0x000105637f7c(auStack_90,auStack_50,auStack_a0,auStack_b0,&uStack_58,&uStack_b4);
  func_0x000105637f5c(auStack_80,auStack_90);
  FUN_105637fac(param_1 + 1,auStack_80);
  func_0x000105638260(auStack_80);
  func_0x000100561f40(auStack_90);
  func_0x000100561d44(auStack_b0);
  func_0x00010048b4e8(auStack_a0);
  func_0x00010046e248(&lStack_68);
  func_0x00010055f5a0(&uStack_58);
  func_0x000100450be4(auStack_50);
  return param_1;
}



/* Entry: 105637f5c; end: 105637fab;  */

void FUN_105637f5c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1056383f8(&uStack_11,param_1);
  return;
}



/* Entry: 105637fac; end: 105637fe7;  */

undefined8 * FUN_105637fac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000105638260(&uStack_30);
  return param_1;
}



/* Entry: 105637fe8; end: 10563821b;  */

void FUN_105637fe8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [24];
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined1 auStack_258 [24];
  undefined1 uStack_240;
  undefined1 auStack_238 [24];
  undefined1 uStack_220;
  undefined1 auStack_218 [24];
  undefined1 uStack_200;
  undefined1 auStack_1f8 [40];
  undefined1 uStack_1d0;
  undefined1 auStack_1c8 [176];
  undefined1 auStack_118 [184];
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar4 = (undefined8 *)0x48;
  __Znwm();
  plVar8 = puVar4 + 1;
  *plVar8 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1108a1748;
  puStack_268 = puVar4 + 3;
  *puStack_268 = &PTR_DAT_1108a1798;
  lVar6 = param_3[1];
  uVar7 = *param_3;
  puVar4[5] = param_3[1];
  puVar4[4] = uVar7;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4[7] = 0;
  *(undefined1 *)(puVar4 + 8) = 0;
  puVar4[6] = 0;
  func_0x00010028c284();
  uVar7 = *(undefined8 *)(param_1 + 8);
  auStack_1f8[0] = 0;
  uStack_1d0 = 0;
  auStack_218[0] = 0;
  uStack_200 = 0;
  auStack_238[0] = 0;
  uStack_220 = 0;
  auStack_258[0] = 0;
  uStack_240 = 0;
  puStack_60 = puStack_268;
  puStack_58 = puVar4;
  func_0x000100626f38(auStack_1c8,0,0,auStack_1f8,0x101,auStack_218,auStack_238,0,auStack_258);
  func_0x0001006271e0(auStack_118,auStack_1c8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_260 = puVar4;
  func_0x00010b2137d4(uVar7,param_2,auStack_118,&puStack_268);
  FUN_105638674(&puStack_268);
  func_0x000100609698(auStack_118);
  func_0x000100627b64(auStack_1c8);
  func_0x0001001148fc(auStack_258);
  func_0x0001001148fc(auStack_238);
  func_0x0001001148fc(auStack_218);
  puVar5 = auStack_1f8;
  func_0x00010062706c(puVar5);
  FUN_1056395d0();
  func_0x00010002b838(auStack_280,&UNK_10f2e020c);
  func_0x00010002b838(auStack_298,&UNK_10f2e0217);
  FUN_105638b74(puVar5,auStack_280,auStack_298,1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_298);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_280);
  FUN_105638674(&puStack_60);
  return;
}



/* Entry: 10563821c; end: 10563821f;  */

undefined8 * FUN_10563821c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a1658;
  func_0x000105638260(param_1 + 1);
  return param_1;
}



/* Entry: 105638220; end: 105638233;  */

void FUN_105638220(void)

{
  FUN_105638234();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105638234; end: 105638287;  */

undefined8 * FUN_105638234(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a1658;
  func_0x000105638260(param_1 + 1);
  return param_1;
}



/* Entry: 105638288; end: 10563828b;  */

void FUN_105638288(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a16a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10563828c; end: 10563829f;  */

void FUN_10563828c(void)

{
  func_0x0001056382a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056382a0; end: 1056382b3;  */

void FUN_1056382a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056386d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1056382b4; end: 105638363;  */

undefined8 *
FUN_1056382b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_60 [2];
  long lStack_50;
  
  puVar2 = auStack_60;
  puVar3 = auStack_60;
  func_0x00010061a700();
  func_0x00010055d588(auStack_60,1);
  FUN_105638364(lStack_50,param_2,param_3,param_4,param_5,param_6);
  lVar1 = lStack_50;
  lStack_50 = 0;
  func_0x000100561d68(lVar1 + 0x18);
  func_0x000100561e6c();
  func_0x00010061a80c();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000100561e6c();
  func_0x0001056386a8();
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_1107e9bc8;
  puVar3[1] = 0;
  FUN_1056383a0(puVar3 + 3);
  return puVar3;
}



/* Entry: 105638364; end: 10563839f;  */

undefined8 * FUN_105638364(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107e9bc8;
  param_1[1] = 0;
  FUN_1056383a0(param_1 + 3);
  return param_1;
}



/* Entry: 1056383a0; end: 1056383f7;  */

undefined8 FUN_1056383a0(undefined8 param_1)

{
  undefined8 *in_x4;
  undefined8 uStack_28;
  
  uStack_28 = *in_x4;
  *in_x4 = 0;
  func_0x00010055d67c();
  func_0x00010055f5a0(&uStack_28);
  return param_1;
}



/* Entry: 1056383f8; end: 10563845b;  */

undefined1 * FUN_1056383f8(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  puVar1 = auStack_40;
  func_0x00010061a700();
  FUN_10563845c(auStack_40,1);
  FUN_1056384b0();
  func_0x00010061a7e4();
  func_0x000105638558();
  func_0x00010061a80c();
  if ((bool)in_ZR) {
    return puStack_30;
  }
  ___stack_chk_fail();
  func_0x000105638558();
  func_0x0001056386a8();
  *(undefined8 *)(puVar1 + 8) = param_2;
  puVar2 = puVar1;
  FUN_105638484();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10563845c; end: 105638483;  */

long FUN_10563845c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_105638484();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 105638484; end: 1056384af;  */

undefined8 * FUN_105638484(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108a16f8;
  param_1[1] = 0;
  FUN_105638510(param_1 + 3);
  return param_1;
}



/* Entry: 1056384b0; end: 1056384eb;  */

undefined8 * FUN_1056384b0(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108a16f8;
  param_1[1] = 0;
  FUN_105638510(param_1 + 3);
  return param_1;
}



/* Entry: 1056384ec; end: 1056384ef;  */

void FUN_1056384ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a16f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1056384f0; end: 105638503;  */

void FUN_1056384f0(void)

{
  FUN_10563854c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105638504; end: 10563850f;  */

void FUN_105638504(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000100561f34();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 105638510; end: 10563854b;  */

undefined8 FUN_105638510(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010b2137a0(param_1,&uStack_30);
  func_0x000100561f40(&uStack_30);
  return param_1;
}



/* Entry: 10563854c; end: 10563856b;  */

void FUN_10563854c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a16f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10563856c; end: 10563857f;  */

void FUN_10563856c(void)

{
  FUN_105638664();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105638580; end: 10563858b;  */

void FUN_105638580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056386d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10563858c; end: 10563859f;  */

void FUN_10563858c(void)

{
  FUN_105638638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056385a0; end: 105638637;  */

void FUN_1056385a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1053a4504(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001056385ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),param_2,param_3,param_4);
  return;
}



/* Entry: 105638638; end: 105638663;  */

undefined8 * FUN_105638638(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108a1798;
  FUN_105638674(param_1 + 1);
  return param_1;
}



/* Entry: 105638664; end: 105638673;  */

void FUN_105638664(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108a1748;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105638674; end: 10563869b;  */

long FUN_105638674(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10563869c; end: 1056386e3;  */

void FUN_10563869c(void)

{
  return;
}



/* Entry: 1056386e4; end: 10563874b;  */

long * FUN_1056386e4(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  
  func_0x0001056397d8();
  func_0x000105639708();
  func_0x000105639834();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x0001056398c4();
  func_0x00010563975c(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x0001056398c4();
  func_0x000105639888();
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x0001056397f8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x00010563991c();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398f0();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639740();
    func_0x0001056397f8();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x00010563991c();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398f0();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639740();
      func_0x0001056397f8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x00010563991c();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398f0();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x000105639640();
        func_0x000105639740();
        func_0x0001056397f8();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x00010563991c();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398f0();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639740();
          func_0x000105639844();
          func_0x000105639860();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639980();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x000105639974();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            func_0x000105639770();
            func_0x000105639640();
            func_0x000105639740();
            func_0x000105639844();
            func_0x000105639860();
            func_0x000105639950();
            func_0x000105639968();
            func_0x000105639880();
            func_0x000105639980();
            do {
              func_0x000105639898();
              func_0x0001056398ac();
            } while (!(bool)in_ZR);
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639974();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639740();
              func_0x0001056397f8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x00010563991c();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398f0();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639740();
              func_0x0001056397f8();
              func_0x000105639794();
              func_0x000105639828();
              func_0x000105639880();
              func_0x00010563991c();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398f0();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x00010563968c();
              func_0x0001056397c8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398d8();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639818();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x000105639934();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x000105639928();
                do {
                  func_0x000105639890();
                  func_0x0001056398a0();
                } while (!(bool)in_ZR);
                func_0x000105639888();
                func_0x000105639770();
                func_0x000105639640();
                func_0x000105639818();
                func_0x000105639794();
                func_0x000105639828();
                func_0x000105639880();
                func_0x000105639934();
                do {
                  func_0x000105639898();
                  func_0x0001056398ac();
                } while (!(bool)in_ZR);
                func_0x000105639728();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639928();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x00010563968c();
                  func_0x0001056397c8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x0001056398d8();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x0001056396d4();
                    func_0x0001056397c8();
                    func_0x000105639794();
                    func_0x000105639828();
                    func_0x000105639880();
                    func_0x0001056398e4();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x000105639640();
                      func_0x000105639818();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x000105639934();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639928();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x000105639640();
                      func_0x000105639818();
                      func_0x000105639794();
                      func_0x000105639828();
                      func_0x000105639880();
                      func_0x000105639934();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639928();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x00010563968c();
                      func_0x0001056397c8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x0001056396d4();
                      func_0x0001056397c8();
                      func_0x000105639794();
                      func_0x000105639828();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x000105639640();
                      func_0x000105639818();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x000105639934();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639928();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x000105639640();
                      func_0x000105639818();
                      func_0x000105639794();
                      func_0x000105639828();
                      func_0x000105639880();
                      func_0x000105639934();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639928();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x00010563968c();
                      func_0x0001056397c8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x0001056396d4();
                      func_0x0001056397c8();
                      func_0x000105639794();
                      func_0x000105639828();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      plVar1 = param_1;
                      func_0x000105639770();
                      plVar1 = (long *)*plVar1;
                      (**(code **)(*plVar1 + 0x28))();
                      if ((int)plVar1 != 0) {
                        func_0x0001056398fc();
                        func_0x000105639834();
                        func_0x0001056398b8();
                        (*extraout_x8_00)();
                        func_0x000105639880();
                        func_0x0001056398c4();
                        plVar1 = param_1;
                      }
                      func_0x000105639728();
                      if (!(bool)in_ZR) {
                        ___stack_chk_fail();
                        func_0x0001056397ac();
                        func_0x0001056398c4();
                        func_0x000105639888();
                        func_0x000105639770();
                        plVar1 = (long *)*plVar1;
                        (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
                        if ((int)plVar1 != 0) {
                          func_0x0001056398fc();
                          func_0x000105639834();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x0001056398c4();
                        }
                        func_0x000105639728();
                        if (!(bool)in_ZR) {
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x0001056398c4();
                          func_0x000105639888();
                          func_0x0001056397d8();
                          func_0x000105639708();
                          func_0x000105639834();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x0001056398c4();
                          func_0x00010563975c(extraout_x8_01);
                          if (!(bool)in_ZR) {
                            ___stack_chk_fail();
                            func_0x0001056397ac();
                            func_0x0001056398c4();
                            func_0x000105639888();
                            func_0x0001056397d8();
                            func_0x000105639708();
                            func_0x000105639834();
                            func_0x0001056398b8();
                            func_0x000105639784();
                            func_0x000105639880();
                            func_0x0001056398c4();
                            func_0x00010563975c(extraout_x8_02);
                            if (!(bool)in_ZR) {
                              ___stack_chk_fail();
                              func_0x0001056397ac();
                              func_0x0001056398c4();
                              func_0x000105639888();
                              func_0x000105639770();
                              func_0x000105639640();
                              func_0x000105639740();
                              func_0x0001056397f8();
                              func_0x0001056398b8();
                              func_0x000105639784();
                              func_0x000105639880();
                              func_0x00010563991c();
                              do {
                                func_0x000105639898();
                                func_0x0001056398ac();
                              } while (!(bool)in_ZR);
                              func_0x000105639728();
                              if ((bool)in_ZR) {
                                return plVar1;
                              }
                              ___stack_chk_fail();
                              func_0x0001056397ac();
                              func_0x0001056398f0();
                              do {
                                func_0x000105639890();
                                func_0x0001056398a0();
                              } while (!(bool)in_ZR);
                              func_0x000105639888();
                              func_0x000105639770();
                              func_0x000105639640();
                              func_0x000105639740();
                              func_0x000105639844();
                              func_0x000105639860();
                              func_0x0001056398b8();
                              func_0x000105639784();
                              func_0x000105639880();
                              func_0x000105639980();
                              do {
                                func_0x000105639898();
                                func_0x0001056398ac();
                              } while (!(bool)in_ZR);
                              func_0x000105639728();
                              if ((bool)in_ZR) {
                                return plVar1;
                              }
                              ___stack_chk_fail();
                              func_0x0001056397ac();
                              func_0x000105639974();
                              do {
                                func_0x000105639890();
                                func_0x0001056398a0();
                              } while (!(bool)in_ZR);
                              func_0x000105639888();
                              func_0x000105639770();
                              func_0x000105639640();
                              func_0x000105639740();
                              func_0x000105639844();
                              func_0x000105639860();
                              func_0x000105639950();
                              func_0x000105639968();
                              func_0x000105639880();
                              func_0x000105639980();
                              do {
                                func_0x000105639898();
                                func_0x0001056398ac();
                              } while (!(bool)in_ZR);
                              func_0x000105639728();
                              if ((bool)in_ZR) {
                                return plVar1;
                              }
                              ___stack_chk_fail();
                              func_0x0001056397ac();
                              func_0x000105639974();
                              do {
                                func_0x000105639890();
                                func_0x0001056398a0();
                              } while (!(bool)in_ZR);
                              func_0x000105639888();
                              func_0x00010563968c();
                              func_0x0001056397c8();
                              func_0x0001056398b8();
                              func_0x000105639784();
                              func_0x000105639880();
                              func_0x0001056398e4();
                              do {
                                func_0x000105639898();
                                func_0x0001056398ac();
                              } while (!(bool)in_ZR);
                              func_0x000105639728();
                              if ((bool)in_ZR) {
                                return plVar1;
                              }
                              ___stack_chk_fail();
                              func_0x0001056397ac();
                              func_0x0001056398d8();
                              do {
                                func_0x000105639890();
                                func_0x0001056398a0();
                              } while (!(bool)in_ZR);
                              func_0x000105639888();
                              if ((bRam0000000113819d88 & 1) == 0) {
                                uVar2 = 0x113819d88;
                                ___cxa_guard_acquire();
                                if ((int)uVar2 != 0) {
                                  func_0x000100077ef8();
                                  uRam0000000113819d80 = uVar2;
                                  ___cxa_guard_release(0x113819d88);
                                }
                              }
                              return (long *)0x113819d80;
                            }
                          }
                          return plVar1;
                        }
                      }
                      return plVar1;
                    }
                  }
                  return param_1;
                }
              }
              return param_1;
            }
          }
          return param_1;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10563874c; end: 1056387cf;  */

long * FUN_10563874c(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x0001056397f8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x00010563991c();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398f0();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639740();
    func_0x0001056397f8();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x00010563991c();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398f0();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639740();
      func_0x0001056397f8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x00010563991c();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398f0();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x000105639640();
        func_0x000105639740();
        func_0x0001056397f8();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x00010563991c();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398f0();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639740();
          func_0x000105639844();
          func_0x000105639860();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639980();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x000105639974();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            func_0x000105639770();
            func_0x000105639640();
            func_0x000105639740();
            func_0x000105639844();
            func_0x000105639860();
            func_0x000105639950();
            func_0x000105639968();
            func_0x000105639880();
            func_0x000105639980();
            do {
              func_0x000105639898();
              func_0x0001056398ac();
            } while (!(bool)in_ZR);
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639974();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639740();
              func_0x0001056397f8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x00010563991c();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398f0();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639740();
              func_0x0001056397f8();
              func_0x000105639794();
              func_0x000105639828();
              func_0x000105639880();
              func_0x00010563991c();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398f0();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x00010563968c();
              func_0x0001056397c8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398d8();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639818();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x000105639934();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x000105639928();
                do {
                  func_0x000105639890();
                  func_0x0001056398a0();
                } while (!(bool)in_ZR);
                func_0x000105639888();
                func_0x000105639770();
                func_0x000105639640();
                func_0x000105639818();
                func_0x000105639794();
                func_0x000105639828();
                func_0x000105639880();
                func_0x000105639934();
                do {
                  func_0x000105639898();
                  func_0x0001056398ac();
                } while (!(bool)in_ZR);
                func_0x000105639728();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639928();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x00010563968c();
                  func_0x0001056397c8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x0001056398d8();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x0001056396d4();
                    func_0x0001056397c8();
                    func_0x000105639794();
                    func_0x000105639828();
                    func_0x000105639880();
                    func_0x0001056398e4();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x000105639640();
                      func_0x000105639818();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x000105639934();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639928();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x000105639640();
                      func_0x000105639818();
                      func_0x000105639794();
                      func_0x000105639828();
                      func_0x000105639880();
                      func_0x000105639934();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639928();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x00010563968c();
                      func_0x0001056397c8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x0001056396d4();
                      func_0x0001056397c8();
                      func_0x000105639794();
                      func_0x000105639828();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x000105639640();
                      func_0x000105639818();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x000105639934();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639928();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x000105639640();
                      func_0x000105639818();
                      func_0x000105639794();
                      func_0x000105639828();
                      func_0x000105639880();
                      func_0x000105639934();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639928();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x00010563968c();
                      func_0x0001056397c8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x0001056396d4();
                      func_0x0001056397c8();
                      func_0x000105639794();
                      func_0x000105639828();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return param_1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      plVar1 = param_1;
                      func_0x000105639770();
                      plVar1 = (long *)*plVar1;
                      (**(code **)(*plVar1 + 0x28))();
                      if ((int)plVar1 != 0) {
                        func_0x0001056398fc();
                        func_0x000105639834();
                        func_0x0001056398b8();
                        (*extraout_x8)();
                        func_0x000105639880();
                        func_0x0001056398c4();
                        plVar1 = param_1;
                      }
                      func_0x000105639728();
                      if (!(bool)in_ZR) {
                        ___stack_chk_fail();
                        func_0x0001056397ac();
                        func_0x0001056398c4();
                        func_0x000105639888();
                        func_0x000105639770();
                        plVar1 = (long *)*plVar1;
                        (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
                        if ((int)plVar1 != 0) {
                          func_0x0001056398fc();
                          func_0x000105639834();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x0001056398c4();
                        }
                        func_0x000105639728();
                        if (!(bool)in_ZR) {
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x0001056398c4();
                          func_0x000105639888();
                          func_0x0001056397d8();
                          func_0x000105639708();
                          func_0x000105639834();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x0001056398c4();
                          func_0x00010563975c(extraout_x8_00);
                          if (!(bool)in_ZR) {
                            ___stack_chk_fail();
                            func_0x0001056397ac();
                            func_0x0001056398c4();
                            func_0x000105639888();
                            func_0x0001056397d8();
                            func_0x000105639708();
                            func_0x000105639834();
                            func_0x0001056398b8();
                            func_0x000105639784();
                            func_0x000105639880();
                            func_0x0001056398c4();
                            func_0x00010563975c(extraout_x8_01);
                            if (!(bool)in_ZR) {
                              ___stack_chk_fail();
                              func_0x0001056397ac();
                              func_0x0001056398c4();
                              func_0x000105639888();
                              func_0x000105639770();
                              func_0x000105639640();
                              func_0x000105639740();
                              func_0x0001056397f8();
                              func_0x0001056398b8();
                              func_0x000105639784();
                              func_0x000105639880();
                              func_0x00010563991c();
                              do {
                                func_0x000105639898();
                                func_0x0001056398ac();
                              } while (!(bool)in_ZR);
                              func_0x000105639728();
                              if ((bool)in_ZR) {
                                return plVar1;
                              }
                              ___stack_chk_fail();
                              func_0x0001056397ac();
                              func_0x0001056398f0();
                              do {
                                func_0x000105639890();
                                func_0x0001056398a0();
                              } while (!(bool)in_ZR);
                              func_0x000105639888();
                              func_0x000105639770();
                              func_0x000105639640();
                              func_0x000105639740();
                              func_0x000105639844();
                              func_0x000105639860();
                              func_0x0001056398b8();
                              func_0x000105639784();
                              func_0x000105639880();
                              func_0x000105639980();
                              do {
                                func_0x000105639898();
                                func_0x0001056398ac();
                              } while (!(bool)in_ZR);
                              func_0x000105639728();
                              if ((bool)in_ZR) {
                                return plVar1;
                              }
                              ___stack_chk_fail();
                              func_0x0001056397ac();
                              func_0x000105639974();
                              do {
                                func_0x000105639890();
                                func_0x0001056398a0();
                              } while (!(bool)in_ZR);
                              func_0x000105639888();
                              func_0x000105639770();
                              func_0x000105639640();
                              func_0x000105639740();
                              func_0x000105639844();
                              func_0x000105639860();
                              func_0x000105639950();
                              func_0x000105639968();
                              func_0x000105639880();
                              func_0x000105639980();
                              do {
                                func_0x000105639898();
                                func_0x0001056398ac();
                              } while (!(bool)in_ZR);
                              func_0x000105639728();
                              if ((bool)in_ZR) {
                                return plVar1;
                              }
                              ___stack_chk_fail();
                              func_0x0001056397ac();
                              func_0x000105639974();
                              do {
                                func_0x000105639890();
                                func_0x0001056398a0();
                              } while (!(bool)in_ZR);
                              func_0x000105639888();
                              func_0x00010563968c();
                              func_0x0001056397c8();
                              func_0x0001056398b8();
                              func_0x000105639784();
                              func_0x000105639880();
                              func_0x0001056398e4();
                              do {
                                func_0x000105639898();
                                func_0x0001056398ac();
                              } while (!(bool)in_ZR);
                              func_0x000105639728();
                              if ((bool)in_ZR) {
                                return plVar1;
                              }
                              ___stack_chk_fail();
                              func_0x0001056397ac();
                              func_0x0001056398d8();
                              do {
                                func_0x000105639890();
                                func_0x0001056398a0();
                              } while (!(bool)in_ZR);
                              func_0x000105639888();
                              if ((bRam0000000113819d88 & 1) == 0) {
                                uVar2 = 0x113819d88;
                                ___cxa_guard_acquire();
                                if ((int)uVar2 != 0) {
                                  func_0x000100077ef8();
                                  uRam0000000113819d80 = uVar2;
                                  ___cxa_guard_release(0x113819d88);
                                }
                              }
                              return (long *)0x113819d80;
                            }
                          }
                          return plVar1;
                        }
                      }
                      return plVar1;
                    }
                  }
                  return param_1;
                }
              }
              return param_1;
            }
          }
          return param_1;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 1056387d0; end: 105638853;  */

long * FUN_1056387d0(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x0001056397f8();
  func_0x000105639794();
  func_0x000105639828();
  func_0x000105639880();
  func_0x00010563991c();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398f0();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639740();
    func_0x0001056397f8();
    func_0x0001056398b8();
    func_0x000105639784();
    func_0x000105639880();
    func_0x00010563991c();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398f0();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639740();
      func_0x0001056397f8();
      func_0x000105639794();
      func_0x000105639828();
      func_0x000105639880();
      func_0x00010563991c();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398f0();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x000105639640();
        func_0x000105639740();
        func_0x000105639844();
        func_0x000105639860();
        func_0x0001056398b8();
        func_0x000105639784();
        func_0x000105639880();
        func_0x000105639980();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639974();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639740();
          func_0x000105639844();
          func_0x000105639860();
          func_0x000105639950();
          func_0x000105639968();
          func_0x000105639880();
          func_0x000105639980();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x000105639974();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            func_0x000105639770();
            func_0x000105639640();
            func_0x000105639740();
            func_0x0001056397f8();
            func_0x0001056398b8();
            func_0x000105639784();
            func_0x000105639880();
            func_0x00010563991c();
            do {
              func_0x000105639898();
              func_0x0001056398ac();
            } while (!(bool)in_ZR);
            func_0x000105639728();
            if ((bool)in_ZR) {
              return param_1;
            }
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398f0();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            func_0x000105639770();
            func_0x000105639640();
            func_0x000105639740();
            func_0x0001056397f8();
            func_0x000105639794();
            func_0x000105639828();
            func_0x000105639880();
            func_0x00010563991c();
            do {
              func_0x000105639898();
              func_0x0001056398ac();
            } while (!(bool)in_ZR);
            func_0x000105639728();
            if ((bool)in_ZR) {
              return param_1;
            }
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398f0();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            func_0x00010563968c();
            func_0x0001056397c8();
            func_0x0001056398b8();
            func_0x000105639784();
            func_0x000105639880();
            func_0x0001056398e4();
            do {
              func_0x000105639898();
              func_0x0001056398ac();
            } while (!(bool)in_ZR);
            func_0x000105639728();
            if ((bool)in_ZR) {
              return param_1;
            }
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398d8();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            func_0x000105639770();
            func_0x000105639640();
            func_0x000105639818();
            func_0x0001056398b8();
            func_0x000105639784();
            func_0x000105639880();
            func_0x000105639934();
            do {
              func_0x000105639898();
              func_0x0001056398ac();
            } while (!(bool)in_ZR);
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639928();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639818();
              func_0x000105639794();
              func_0x000105639828();
              func_0x000105639880();
              func_0x000105639934();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x000105639928();
                do {
                  func_0x000105639890();
                  func_0x0001056398a0();
                } while (!(bool)in_ZR);
                func_0x000105639888();
                func_0x00010563968c();
                func_0x0001056397c8();
                func_0x0001056398b8();
                func_0x000105639784();
                func_0x000105639880();
                func_0x0001056398e4();
                do {
                  func_0x000105639898();
                  func_0x0001056398ac();
                } while (!(bool)in_ZR);
                func_0x000105639728();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x0001056396d4();
                  func_0x0001056397c8();
                  func_0x000105639794();
                  func_0x000105639828();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x0001056398d8();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x000105639640();
                    func_0x000105639818();
                    func_0x0001056398b8();
                    func_0x000105639784();
                    func_0x000105639880();
                    func_0x000105639934();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if ((bool)in_ZR) {
                      return param_1;
                    }
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x000105639928();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x000105639640();
                    func_0x000105639818();
                    func_0x000105639794();
                    func_0x000105639828();
                    func_0x000105639880();
                    func_0x000105639934();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if ((bool)in_ZR) {
                      return param_1;
                    }
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x000105639928();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x00010563968c();
                    func_0x0001056397c8();
                    func_0x0001056398b8();
                    func_0x000105639784();
                    func_0x000105639880();
                    func_0x0001056398e4();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if ((bool)in_ZR) {
                      return param_1;
                    }
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x0001056398d8();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x0001056396d4();
                    func_0x0001056397c8();
                    func_0x000105639794();
                    func_0x000105639828();
                    func_0x000105639880();
                    func_0x0001056398e4();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if ((bool)in_ZR) {
                      return param_1;
                    }
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x0001056398d8();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x000105639640();
                    func_0x000105639818();
                    func_0x0001056398b8();
                    func_0x000105639784();
                    func_0x000105639880();
                    func_0x000105639934();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if ((bool)in_ZR) {
                      return param_1;
                    }
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x000105639928();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x000105639640();
                    func_0x000105639818();
                    func_0x000105639794();
                    func_0x000105639828();
                    func_0x000105639880();
                    func_0x000105639934();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if ((bool)in_ZR) {
                      return param_1;
                    }
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x000105639928();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x00010563968c();
                    func_0x0001056397c8();
                    func_0x0001056398b8();
                    func_0x000105639784();
                    func_0x000105639880();
                    func_0x0001056398e4();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if ((bool)in_ZR) {
                      return param_1;
                    }
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x0001056398d8();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x0001056396d4();
                    func_0x0001056397c8();
                    func_0x000105639794();
                    func_0x000105639828();
                    func_0x000105639880();
                    func_0x0001056398e4();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if ((bool)in_ZR) {
                      return param_1;
                    }
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x0001056398d8();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    plVar1 = param_1;
                    func_0x000105639770();
                    plVar1 = (long *)*plVar1;
                    (**(code **)(*plVar1 + 0x28))();
                    if ((int)plVar1 != 0) {
                      func_0x0001056398fc();
                      func_0x000105639834();
                      func_0x0001056398b8();
                      (*extraout_x8)();
                      func_0x000105639880();
                      func_0x0001056398c4();
                      plVar1 = param_1;
                    }
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398c4();
                      func_0x000105639888();
                      func_0x000105639770();
                      plVar1 = (long *)*plVar1;
                      (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
                      if ((int)plVar1 != 0) {
                        func_0x0001056398fc();
                        func_0x000105639834();
                        func_0x0001056398b8();
                        func_0x000105639784();
                        func_0x000105639880();
                        func_0x0001056398c4();
                      }
                      func_0x000105639728();
                      if (!(bool)in_ZR) {
                        ___stack_chk_fail();
                        func_0x0001056397ac();
                        func_0x0001056398c4();
                        func_0x000105639888();
                        func_0x0001056397d8();
                        func_0x000105639708();
                        func_0x000105639834();
                        func_0x0001056398b8();
                        func_0x000105639784();
                        func_0x000105639880();
                        func_0x0001056398c4();
                        func_0x00010563975c(extraout_x8_00);
                        if (!(bool)in_ZR) {
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x0001056398c4();
                          func_0x000105639888();
                          func_0x0001056397d8();
                          func_0x000105639708();
                          func_0x000105639834();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x0001056398c4();
                          func_0x00010563975c(extraout_x8_01);
                          if (!(bool)in_ZR) {
                            ___stack_chk_fail();
                            func_0x0001056397ac();
                            func_0x0001056398c4();
                            func_0x000105639888();
                            func_0x000105639770();
                            func_0x000105639640();
                            func_0x000105639740();
                            func_0x0001056397f8();
                            func_0x0001056398b8();
                            func_0x000105639784();
                            func_0x000105639880();
                            func_0x00010563991c();
                            do {
                              func_0x000105639898();
                              func_0x0001056398ac();
                            } while (!(bool)in_ZR);
                            func_0x000105639728();
                            if ((bool)in_ZR) {
                              return plVar1;
                            }
                            ___stack_chk_fail();
                            func_0x0001056397ac();
                            func_0x0001056398f0();
                            do {
                              func_0x000105639890();
                              func_0x0001056398a0();
                            } while (!(bool)in_ZR);
                            func_0x000105639888();
                            func_0x000105639770();
                            func_0x000105639640();
                            func_0x000105639740();
                            func_0x000105639844();
                            func_0x000105639860();
                            func_0x0001056398b8();
                            func_0x000105639784();
                            func_0x000105639880();
                            func_0x000105639980();
                            do {
                              func_0x000105639898();
                              func_0x0001056398ac();
                            } while (!(bool)in_ZR);
                            func_0x000105639728();
                            if ((bool)in_ZR) {
                              return plVar1;
                            }
                            ___stack_chk_fail();
                            func_0x0001056397ac();
                            func_0x000105639974();
                            do {
                              func_0x000105639890();
                              func_0x0001056398a0();
                            } while (!(bool)in_ZR);
                            func_0x000105639888();
                            func_0x000105639770();
                            func_0x000105639640();
                            func_0x000105639740();
                            func_0x000105639844();
                            func_0x000105639860();
                            func_0x000105639950();
                            func_0x000105639968();
                            func_0x000105639880();
                            func_0x000105639980();
                            do {
                              func_0x000105639898();
                              func_0x0001056398ac();
                            } while (!(bool)in_ZR);
                            func_0x000105639728();
                            if ((bool)in_ZR) {
                              return plVar1;
                            }
                            ___stack_chk_fail();
                            func_0x0001056397ac();
                            func_0x000105639974();
                            do {
                              func_0x000105639890();
                              func_0x0001056398a0();
                            } while (!(bool)in_ZR);
                            func_0x000105639888();
                            func_0x00010563968c();
                            func_0x0001056397c8();
                            func_0x0001056398b8();
                            func_0x000105639784();
                            func_0x000105639880();
                            func_0x0001056398e4();
                            do {
                              func_0x000105639898();
                              func_0x0001056398ac();
                            } while (!(bool)in_ZR);
                            func_0x000105639728();
                            if ((bool)in_ZR) {
                              return plVar1;
                            }
                            ___stack_chk_fail();
                            func_0x0001056397ac();
                            func_0x0001056398d8();
                            do {
                              func_0x000105639890();
                              func_0x0001056398a0();
                            } while (!(bool)in_ZR);
                            func_0x000105639888();
                            if ((bRam0000000113819d88 & 1) == 0) {
                              uVar2 = 0x113819d88;
                              ___cxa_guard_acquire();
                              if ((int)uVar2 != 0) {
                                func_0x000100077ef8();
                                uRam0000000113819d80 = uVar2;
                                ___cxa_guard_release(0x113819d88);
                              }
                            }
                            return (long *)0x113819d80;
                          }
                        }
                        return plVar1;
                      }
                    }
                    return plVar1;
                  }
                }
                return param_1;
              }
            }
            return param_1;
          }
        }
        return param_1;
      }
    }
  }
  return param_1;
}



/* Entry: 105638854; end: 1056388d7;  */

long * FUN_105638854(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x0001056397f8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x00010563991c();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398f0();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639740();
    func_0x0001056397f8();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x00010563991c();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398f0();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639740();
      func_0x000105639844();
      func_0x000105639860();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x000105639980();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x000105639974();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x000105639640();
        func_0x000105639740();
        func_0x000105639844();
        func_0x000105639860();
        func_0x000105639950();
        func_0x000105639968();
        func_0x000105639880();
        func_0x000105639980();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639974();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639740();
          func_0x0001056397f8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x00010563991c();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398f0();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639740();
          func_0x0001056397f8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x00010563991c();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398f0();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x000105639928();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            func_0x000105639770();
            func_0x000105639640();
            func_0x000105639818();
            func_0x000105639794();
            func_0x000105639828();
            func_0x000105639880();
            func_0x000105639934();
            do {
              func_0x000105639898();
              func_0x0001056398ac();
            } while (!(bool)in_ZR);
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639928();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x00010563968c();
              func_0x0001056397c8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398d8();
                do {
                  func_0x000105639890();
                  func_0x0001056398a0();
                } while (!(bool)in_ZR);
                func_0x000105639888();
                func_0x000105639770();
                func_0x0001056396d4();
                func_0x0001056397c8();
                func_0x000105639794();
                func_0x000105639828();
                func_0x000105639880();
                func_0x0001056398e4();
                do {
                  func_0x000105639898();
                  func_0x0001056398ac();
                } while (!(bool)in_ZR);
                func_0x000105639728();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639818();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639934();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639928();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639818();
                  func_0x000105639794();
                  func_0x000105639828();
                  func_0x000105639880();
                  func_0x000105639934();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639928();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x00010563968c();
                  func_0x0001056397c8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x0001056396d4();
                  func_0x0001056397c8();
                  func_0x000105639794();
                  func_0x000105639828();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639818();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639934();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639928();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639818();
                  func_0x000105639794();
                  func_0x000105639828();
                  func_0x000105639880();
                  func_0x000105639934();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639928();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x00010563968c();
                  func_0x0001056397c8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x0001056396d4();
                  func_0x0001056397c8();
                  func_0x000105639794();
                  func_0x000105639828();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  plVar1 = param_1;
                  func_0x000105639770();
                  plVar1 = (long *)*plVar1;
                  (**(code **)(*plVar1 + 0x28))();
                  if ((int)plVar1 != 0) {
                    func_0x0001056398fc();
                    func_0x000105639834();
                    func_0x0001056398b8();
                    (*extraout_x8)();
                    func_0x000105639880();
                    func_0x0001056398c4();
                    plVar1 = param_1;
                  }
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x0001056398c4();
                    func_0x000105639888();
                    func_0x000105639770();
                    plVar1 = (long *)*plVar1;
                    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
                    if ((int)plVar1 != 0) {
                      func_0x0001056398fc();
                      func_0x000105639834();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398c4();
                    }
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398c4();
                      func_0x000105639888();
                      func_0x0001056397d8();
                      func_0x000105639708();
                      func_0x000105639834();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398c4();
                      func_0x00010563975c(extraout_x8_00);
                      if (!(bool)in_ZR) {
                        ___stack_chk_fail();
                        func_0x0001056397ac();
                        func_0x0001056398c4();
                        func_0x000105639888();
                        func_0x0001056397d8();
                        func_0x000105639708();
                        func_0x000105639834();
                        func_0x0001056398b8();
                        func_0x000105639784();
                        func_0x000105639880();
                        func_0x0001056398c4();
                        func_0x00010563975c(extraout_x8_01);
                        if (!(bool)in_ZR) {
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x0001056398c4();
                          func_0x000105639888();
                          func_0x000105639770();
                          func_0x000105639640();
                          func_0x000105639740();
                          func_0x0001056397f8();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x00010563991c();
                          do {
                            func_0x000105639898();
                            func_0x0001056398ac();
                          } while (!(bool)in_ZR);
                          func_0x000105639728();
                          if ((bool)in_ZR) {
                            return plVar1;
                          }
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x0001056398f0();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          func_0x000105639770();
                          func_0x000105639640();
                          func_0x000105639740();
                          func_0x000105639844();
                          func_0x000105639860();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x000105639980();
                          do {
                            func_0x000105639898();
                            func_0x0001056398ac();
                          } while (!(bool)in_ZR);
                          func_0x000105639728();
                          if ((bool)in_ZR) {
                            return plVar1;
                          }
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x000105639974();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          func_0x000105639770();
                          func_0x000105639640();
                          func_0x000105639740();
                          func_0x000105639844();
                          func_0x000105639860();
                          func_0x000105639950();
                          func_0x000105639968();
                          func_0x000105639880();
                          func_0x000105639980();
                          do {
                            func_0x000105639898();
                            func_0x0001056398ac();
                          } while (!(bool)in_ZR);
                          func_0x000105639728();
                          if ((bool)in_ZR) {
                            return plVar1;
                          }
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x000105639974();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          func_0x00010563968c();
                          func_0x0001056397c8();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x0001056398e4();
                          do {
                            func_0x000105639898();
                            func_0x0001056398ac();
                          } while (!(bool)in_ZR);
                          func_0x000105639728();
                          if ((bool)in_ZR) {
                            return plVar1;
                          }
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x0001056398d8();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          if ((bRam0000000113819d88 & 1) == 0) {
                            uVar2 = 0x113819d88;
                            ___cxa_guard_acquire();
                            if ((int)uVar2 != 0) {
                              func_0x000100077ef8();
                              uRam0000000113819d80 = uVar2;
                              ___cxa_guard_release(0x113819d88);
                            }
                          }
                          return (long *)0x113819d80;
                        }
                      }
                      return plVar1;
                    }
                  }
                  return plVar1;
                }
              }
              return param_1;
            }
          }
          return param_1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 1056388d8; end: 10563895b;  */

long * FUN_1056388d8(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x0001056397f8();
  func_0x000105639794();
  func_0x000105639828();
  func_0x000105639880();
  func_0x00010563991c();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x0001056398f0();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x000105639844();
  func_0x000105639860();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x000105639980();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x000105639974();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639740();
    func_0x000105639844();
    func_0x000105639860();
    func_0x000105639950();
    func_0x000105639968();
    func_0x000105639880();
    func_0x000105639980();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x000105639974();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639740();
      func_0x0001056397f8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x00010563991c();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398f0();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x000105639640();
        func_0x000105639740();
        func_0x0001056397f8();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x00010563991c();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398f0();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x000105639928();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            func_0x000105639770();
            func_0x000105639640();
            func_0x000105639818();
            func_0x000105639794();
            func_0x000105639828();
            func_0x000105639880();
            func_0x000105639934();
            do {
              func_0x000105639898();
              func_0x0001056398ac();
            } while (!(bool)in_ZR);
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639928();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x00010563968c();
              func_0x0001056397c8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398d8();
                do {
                  func_0x000105639890();
                  func_0x0001056398a0();
                } while (!(bool)in_ZR);
                func_0x000105639888();
                func_0x000105639770();
                func_0x0001056396d4();
                func_0x0001056397c8();
                func_0x000105639794();
                func_0x000105639828();
                func_0x000105639880();
                func_0x0001056398e4();
                do {
                  func_0x000105639898();
                  func_0x0001056398ac();
                } while (!(bool)in_ZR);
                func_0x000105639728();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639818();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639934();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639928();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639818();
                  func_0x000105639794();
                  func_0x000105639828();
                  func_0x000105639880();
                  func_0x000105639934();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639928();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x00010563968c();
                  func_0x0001056397c8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x0001056396d4();
                  func_0x0001056397c8();
                  func_0x000105639794();
                  func_0x000105639828();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639818();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639934();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639928();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639818();
                  func_0x000105639794();
                  func_0x000105639828();
                  func_0x000105639880();
                  func_0x000105639934();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639928();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x00010563968c();
                  func_0x0001056397c8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x0001056396d4();
                  func_0x0001056397c8();
                  func_0x000105639794();
                  func_0x000105639828();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  plVar1 = param_1;
                  func_0x000105639770();
                  plVar1 = (long *)*plVar1;
                  (**(code **)(*plVar1 + 0x28))();
                  if ((int)plVar1 != 0) {
                    func_0x0001056398fc();
                    func_0x000105639834();
                    func_0x0001056398b8();
                    (*extraout_x8)();
                    func_0x000105639880();
                    func_0x0001056398c4();
                    plVar1 = param_1;
                  }
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x0001056398c4();
                    func_0x000105639888();
                    func_0x000105639770();
                    plVar1 = (long *)*plVar1;
                    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
                    if ((int)plVar1 != 0) {
                      func_0x0001056398fc();
                      func_0x000105639834();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398c4();
                    }
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398c4();
                      func_0x000105639888();
                      func_0x0001056397d8();
                      func_0x000105639708();
                      func_0x000105639834();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398c4();
                      func_0x00010563975c(extraout_x8_00);
                      if (!(bool)in_ZR) {
                        ___stack_chk_fail();
                        func_0x0001056397ac();
                        func_0x0001056398c4();
                        func_0x000105639888();
                        func_0x0001056397d8();
                        func_0x000105639708();
                        func_0x000105639834();
                        func_0x0001056398b8();
                        func_0x000105639784();
                        func_0x000105639880();
                        func_0x0001056398c4();
                        func_0x00010563975c(extraout_x8_01);
                        if (!(bool)in_ZR) {
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x0001056398c4();
                          func_0x000105639888();
                          func_0x000105639770();
                          func_0x000105639640();
                          func_0x000105639740();
                          func_0x0001056397f8();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x00010563991c();
                          do {
                            func_0x000105639898();
                            func_0x0001056398ac();
                          } while (!(bool)in_ZR);
                          func_0x000105639728();
                          if ((bool)in_ZR) {
                            return plVar1;
                          }
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x0001056398f0();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          func_0x000105639770();
                          func_0x000105639640();
                          func_0x000105639740();
                          func_0x000105639844();
                          func_0x000105639860();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x000105639980();
                          do {
                            func_0x000105639898();
                            func_0x0001056398ac();
                          } while (!(bool)in_ZR);
                          func_0x000105639728();
                          if ((bool)in_ZR) {
                            return plVar1;
                          }
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x000105639974();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          func_0x000105639770();
                          func_0x000105639640();
                          func_0x000105639740();
                          func_0x000105639844();
                          func_0x000105639860();
                          func_0x000105639950();
                          func_0x000105639968();
                          func_0x000105639880();
                          func_0x000105639980();
                          do {
                            func_0x000105639898();
                            func_0x0001056398ac();
                          } while (!(bool)in_ZR);
                          func_0x000105639728();
                          if ((bool)in_ZR) {
                            return plVar1;
                          }
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x000105639974();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          func_0x00010563968c();
                          func_0x0001056397c8();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x0001056398e4();
                          do {
                            func_0x000105639898();
                            func_0x0001056398ac();
                          } while (!(bool)in_ZR);
                          func_0x000105639728();
                          if ((bool)in_ZR) {
                            return plVar1;
                          }
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x0001056398d8();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          if ((bRam0000000113819d88 & 1) == 0) {
                            uVar2 = 0x113819d88;
                            ___cxa_guard_acquire();
                            if ((int)uVar2 != 0) {
                              func_0x000100077ef8();
                              uRam0000000113819d80 = uVar2;
                              ___cxa_guard_release(0x113819d88);
                            }
                          }
                          return (long *)0x113819d80;
                        }
                      }
                      return plVar1;
                    }
                  }
                  return plVar1;
                }
              }
              return param_1;
            }
          }
          return param_1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10563895c; end: 1056389e3;  */

long * FUN_10563895c(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x000105639844();
  func_0x000105639860();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x000105639980();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x000105639974();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639740();
    func_0x000105639844();
    func_0x000105639860();
    func_0x000105639950();
    func_0x000105639968();
    func_0x000105639880();
    func_0x000105639980();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x000105639974();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639740();
      func_0x0001056397f8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x00010563991c();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398f0();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x000105639640();
        func_0x000105639740();
        func_0x0001056397f8();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x00010563991c();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398f0();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x000105639928();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            func_0x000105639770();
            func_0x000105639640();
            func_0x000105639818();
            func_0x000105639794();
            func_0x000105639828();
            func_0x000105639880();
            func_0x000105639934();
            do {
              func_0x000105639898();
              func_0x0001056398ac();
            } while (!(bool)in_ZR);
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639928();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x00010563968c();
              func_0x0001056397c8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398d8();
                do {
                  func_0x000105639890();
                  func_0x0001056398a0();
                } while (!(bool)in_ZR);
                func_0x000105639888();
                func_0x000105639770();
                func_0x0001056396d4();
                func_0x0001056397c8();
                func_0x000105639794();
                func_0x000105639828();
                func_0x000105639880();
                func_0x0001056398e4();
                do {
                  func_0x000105639898();
                  func_0x0001056398ac();
                } while (!(bool)in_ZR);
                func_0x000105639728();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639818();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639934();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639928();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639818();
                  func_0x000105639794();
                  func_0x000105639828();
                  func_0x000105639880();
                  func_0x000105639934();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639928();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x00010563968c();
                  func_0x0001056397c8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x0001056396d4();
                  func_0x0001056397c8();
                  func_0x000105639794();
                  func_0x000105639828();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639818();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639934();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639928();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639818();
                  func_0x000105639794();
                  func_0x000105639828();
                  func_0x000105639880();
                  func_0x000105639934();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639928();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x00010563968c();
                  func_0x0001056397c8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x0001056396d4();
                  func_0x0001056397c8();
                  func_0x000105639794();
                  func_0x000105639828();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return param_1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  plVar1 = param_1;
                  func_0x000105639770();
                  plVar1 = (long *)*plVar1;
                  (**(code **)(*plVar1 + 0x28))();
                  if ((int)plVar1 != 0) {
                    func_0x0001056398fc();
                    func_0x000105639834();
                    func_0x0001056398b8();
                    (*extraout_x8)();
                    func_0x000105639880();
                    func_0x0001056398c4();
                    plVar1 = param_1;
                  }
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x0001056398c4();
                    func_0x000105639888();
                    func_0x000105639770();
                    plVar1 = (long *)*plVar1;
                    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
                    if ((int)plVar1 != 0) {
                      func_0x0001056398fc();
                      func_0x000105639834();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398c4();
                    }
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398c4();
                      func_0x000105639888();
                      func_0x0001056397d8();
                      func_0x000105639708();
                      func_0x000105639834();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398c4();
                      func_0x00010563975c(extraout_x8_00);
                      if (!(bool)in_ZR) {
                        ___stack_chk_fail();
                        func_0x0001056397ac();
                        func_0x0001056398c4();
                        func_0x000105639888();
                        func_0x0001056397d8();
                        func_0x000105639708();
                        func_0x000105639834();
                        func_0x0001056398b8();
                        func_0x000105639784();
                        func_0x000105639880();
                        func_0x0001056398c4();
                        func_0x00010563975c(extraout_x8_01);
                        if (!(bool)in_ZR) {
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x0001056398c4();
                          func_0x000105639888();
                          func_0x000105639770();
                          func_0x000105639640();
                          func_0x000105639740();
                          func_0x0001056397f8();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x00010563991c();
                          do {
                            func_0x000105639898();
                            func_0x0001056398ac();
                          } while (!(bool)in_ZR);
                          func_0x000105639728();
                          if ((bool)in_ZR) {
                            return plVar1;
                          }
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x0001056398f0();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          func_0x000105639770();
                          func_0x000105639640();
                          func_0x000105639740();
                          func_0x000105639844();
                          func_0x000105639860();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x000105639980();
                          do {
                            func_0x000105639898();
                            func_0x0001056398ac();
                          } while (!(bool)in_ZR);
                          func_0x000105639728();
                          if ((bool)in_ZR) {
                            return plVar1;
                          }
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x000105639974();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          func_0x000105639770();
                          func_0x000105639640();
                          func_0x000105639740();
                          func_0x000105639844();
                          func_0x000105639860();
                          func_0x000105639950();
                          func_0x000105639968();
                          func_0x000105639880();
                          func_0x000105639980();
                          do {
                            func_0x000105639898();
                            func_0x0001056398ac();
                          } while (!(bool)in_ZR);
                          func_0x000105639728();
                          if ((bool)in_ZR) {
                            return plVar1;
                          }
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x000105639974();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          func_0x00010563968c();
                          func_0x0001056397c8();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x0001056398e4();
                          do {
                            func_0x000105639898();
                            func_0x0001056398ac();
                          } while (!(bool)in_ZR);
                          func_0x000105639728();
                          if ((bool)in_ZR) {
                            return plVar1;
                          }
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x0001056398d8();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          if ((bRam0000000113819d88 & 1) == 0) {
                            uVar2 = 0x113819d88;
                            ___cxa_guard_acquire();
                            if ((int)uVar2 != 0) {
                              func_0x000100077ef8();
                              uRam0000000113819d80 = uVar2;
                              ___cxa_guard_release(0x113819d88);
                            }
                          }
                          return (long *)0x113819d80;
                        }
                      }
                      return plVar1;
                    }
                  }
                  return plVar1;
                }
              }
              return param_1;
            }
          }
          return param_1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 1056389e4; end: 105638a6b;  */

long * FUN_1056389e4(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x000105639844();
  func_0x000105639860();
  func_0x000105639950();
  func_0x000105639968();
  func_0x000105639880();
  func_0x000105639980();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x000105639974();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x0001056397f8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x00010563991c();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398f0();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639740();
    func_0x0001056397f8();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x00010563991c();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398f0();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x00010563968c();
      func_0x0001056397c8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398e4();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if ((bool)in_ZR) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398d8();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639818();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x000105639934();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x000105639928();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x000105639640();
        func_0x000105639818();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x000105639934();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398d8();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            func_0x000105639770();
            func_0x0001056396d4();
            func_0x0001056397c8();
            func_0x000105639794();
            func_0x000105639828();
            func_0x000105639880();
            func_0x0001056398e4();
            do {
              func_0x000105639898();
              func_0x0001056398ac();
            } while (!(bool)in_ZR);
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398d8();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639818();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x000105639934();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639928();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639818();
              func_0x000105639794();
              func_0x000105639828();
              func_0x000105639880();
              func_0x000105639934();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639928();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x00010563968c();
              func_0x0001056397c8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398d8();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x0001056396d4();
              func_0x0001056397c8();
              func_0x000105639794();
              func_0x000105639828();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398d8();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639818();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x000105639934();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639928();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639818();
              func_0x000105639794();
              func_0x000105639828();
              func_0x000105639880();
              func_0x000105639934();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639928();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x00010563968c();
              func_0x0001056397c8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398d8();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x0001056396d4();
              func_0x0001056397c8();
              func_0x000105639794();
              func_0x000105639828();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398d8();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              plVar1 = param_1;
              func_0x000105639770();
              plVar1 = (long *)*plVar1;
              (**(code **)(*plVar1 + 0x28))();
              if ((int)plVar1 != 0) {
                func_0x0001056398fc();
                func_0x000105639834();
                func_0x0001056398b8();
                (*extraout_x8)();
                func_0x000105639880();
                func_0x0001056398c4();
                plVar1 = param_1;
              }
              func_0x000105639728();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398c4();
                func_0x000105639888();
                func_0x000105639770();
                plVar1 = (long *)*plVar1;
                (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
                if ((int)plVar1 != 0) {
                  func_0x0001056398fc();
                  func_0x000105639834();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398c4();
                }
                func_0x000105639728();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398c4();
                  func_0x000105639888();
                  func_0x0001056397d8();
                  func_0x000105639708();
                  func_0x000105639834();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398c4();
                  func_0x00010563975c(extraout_x8_00);
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x0001056398c4();
                    func_0x000105639888();
                    func_0x0001056397d8();
                    func_0x000105639708();
                    func_0x000105639834();
                    func_0x0001056398b8();
                    func_0x000105639784();
                    func_0x000105639880();
                    func_0x0001056398c4();
                    func_0x00010563975c(extraout_x8_01);
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398c4();
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x000105639640();
                      func_0x000105639740();
                      func_0x0001056397f8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x00010563991c();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return plVar1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398f0();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x000105639640();
                      func_0x000105639740();
                      func_0x000105639844();
                      func_0x000105639860();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x000105639980();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if (!(bool)in_ZR) {
                        ___stack_chk_fail();
                        func_0x0001056397ac();
                        func_0x000105639974();
                        do {
                          func_0x000105639890();
                          func_0x0001056398a0();
                        } while (!(bool)in_ZR);
                        func_0x000105639888();
                        func_0x000105639770();
                        func_0x000105639640();
                        func_0x000105639740();
                        func_0x000105639844();
                        func_0x000105639860();
                        func_0x000105639950();
                        func_0x000105639968();
                        func_0x000105639880();
                        func_0x000105639980();
                        do {
                          func_0x000105639898();
                          func_0x0001056398ac();
                        } while (!(bool)in_ZR);
                        func_0x000105639728();
                        if (!(bool)in_ZR) {
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x000105639974();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          func_0x00010563968c();
                          func_0x0001056397c8();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x0001056398e4();
                          do {
                            func_0x000105639898();
                            func_0x0001056398ac();
                          } while (!(bool)in_ZR);
                          func_0x000105639728();
                          if ((bool)in_ZR) {
                            return plVar1;
                          }
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x0001056398d8();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          if ((bRam0000000113819d88 & 1) == 0) {
                            uVar2 = 0x113819d88;
                            ___cxa_guard_acquire();
                            if ((int)uVar2 != 0) {
                              func_0x000100077ef8();
                              uRam0000000113819d80 = uVar2;
                              ___cxa_guard_release(0x113819d88);
                            }
                          }
                          return (long *)0x113819d80;
                        }
                      }
                      return plVar1;
                    }
                  }
                  return plVar1;
                }
              }
              return plVar1;
            }
          }
          return param_1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105638a6c; end: 105638aef;  */

long * FUN_105638a6c(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x0001056397f8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x00010563991c();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398f0();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639740();
    func_0x0001056397f8();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x00010563991c();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398f0();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x00010563968c();
      func_0x0001056397c8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398e4();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if ((bool)in_ZR) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398d8();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639818();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x000105639934();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x000105639928();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x000105639640();
        func_0x000105639818();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x000105639934();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398d8();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            func_0x000105639770();
            func_0x0001056396d4();
            func_0x0001056397c8();
            func_0x000105639794();
            func_0x000105639828();
            func_0x000105639880();
            func_0x0001056398e4();
            do {
              func_0x000105639898();
              func_0x0001056398ac();
            } while (!(bool)in_ZR);
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398d8();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639818();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x000105639934();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639928();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639818();
              func_0x000105639794();
              func_0x000105639828();
              func_0x000105639880();
              func_0x000105639934();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639928();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x00010563968c();
              func_0x0001056397c8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398d8();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x0001056396d4();
              func_0x0001056397c8();
              func_0x000105639794();
              func_0x000105639828();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398d8();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639818();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x000105639934();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639928();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639818();
              func_0x000105639794();
              func_0x000105639828();
              func_0x000105639880();
              func_0x000105639934();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639928();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x00010563968c();
              func_0x0001056397c8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398d8();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x0001056396d4();
              func_0x0001056397c8();
              func_0x000105639794();
              func_0x000105639828();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return param_1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398d8();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              plVar1 = param_1;
              func_0x000105639770();
              plVar1 = (long *)*plVar1;
              (**(code **)(*plVar1 + 0x28))();
              if ((int)plVar1 != 0) {
                func_0x0001056398fc();
                func_0x000105639834();
                func_0x0001056398b8();
                (*extraout_x8)();
                func_0x000105639880();
                func_0x0001056398c4();
                plVar1 = param_1;
              }
              func_0x000105639728();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398c4();
                func_0x000105639888();
                func_0x000105639770();
                plVar1 = (long *)*plVar1;
                (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
                if ((int)plVar1 != 0) {
                  func_0x0001056398fc();
                  func_0x000105639834();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398c4();
                }
                func_0x000105639728();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398c4();
                  func_0x000105639888();
                  func_0x0001056397d8();
                  func_0x000105639708();
                  func_0x000105639834();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398c4();
                  func_0x00010563975c(extraout_x8_00);
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x0001056398c4();
                    func_0x000105639888();
                    func_0x0001056397d8();
                    func_0x000105639708();
                    func_0x000105639834();
                    func_0x0001056398b8();
                    func_0x000105639784();
                    func_0x000105639880();
                    func_0x0001056398c4();
                    func_0x00010563975c(extraout_x8_01);
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398c4();
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x000105639640();
                      func_0x000105639740();
                      func_0x0001056397f8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x00010563991c();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return plVar1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398f0();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x000105639770();
                      func_0x000105639640();
                      func_0x000105639740();
                      func_0x000105639844();
                      func_0x000105639860();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x000105639980();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if (!(bool)in_ZR) {
                        ___stack_chk_fail();
                        func_0x0001056397ac();
                        func_0x000105639974();
                        do {
                          func_0x000105639890();
                          func_0x0001056398a0();
                        } while (!(bool)in_ZR);
                        func_0x000105639888();
                        func_0x000105639770();
                        func_0x000105639640();
                        func_0x000105639740();
                        func_0x000105639844();
                        func_0x000105639860();
                        func_0x000105639950();
                        func_0x000105639968();
                        func_0x000105639880();
                        func_0x000105639980();
                        do {
                          func_0x000105639898();
                          func_0x0001056398ac();
                        } while (!(bool)in_ZR);
                        func_0x000105639728();
                        if (!(bool)in_ZR) {
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x000105639974();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          func_0x00010563968c();
                          func_0x0001056397c8();
                          func_0x0001056398b8();
                          func_0x000105639784();
                          func_0x000105639880();
                          func_0x0001056398e4();
                          do {
                            func_0x000105639898();
                            func_0x0001056398ac();
                          } while (!(bool)in_ZR);
                          func_0x000105639728();
                          if ((bool)in_ZR) {
                            return plVar1;
                          }
                          ___stack_chk_fail();
                          func_0x0001056397ac();
                          func_0x0001056398d8();
                          do {
                            func_0x000105639890();
                            func_0x0001056398a0();
                          } while (!(bool)in_ZR);
                          func_0x000105639888();
                          if ((bRam0000000113819d88 & 1) == 0) {
                            uVar2 = 0x113819d88;
                            ___cxa_guard_acquire();
                            if ((int)uVar2 != 0) {
                              func_0x000100077ef8();
                              uRam0000000113819d80 = uVar2;
                              ___cxa_guard_release(0x113819d88);
                            }
                          }
                          return (long *)0x113819d80;
                        }
                      }
                      return plVar1;
                    }
                  }
                  return plVar1;
                }
              }
              return plVar1;
            }
          }
          return param_1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105638af0; end: 105638b73;  */

long * FUN_105638af0(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x0001056397f8();
  func_0x000105639794();
  func_0x000105639828();
  func_0x000105639880();
  func_0x00010563991c();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x0001056398f0();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  func_0x00010563968c();
  func_0x0001056397c8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x0001056398e4();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x0001056398d8();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639818();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x000105639934();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x000105639928();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639818();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x000105639934();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x000105639928();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x00010563968c();
      func_0x0001056397c8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398e4();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398d8();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x0001056396d4();
        func_0x0001056397c8();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x0001056398e4();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x0001056396d4();
          func_0x0001056397c8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x0001056396d4();
          func_0x0001056397c8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          plVar1 = param_1;
          func_0x000105639770();
          plVar1 = (long *)*plVar1;
          (**(code **)(*plVar1 + 0x28))();
          if ((int)plVar1 != 0) {
            func_0x0001056398fc();
            func_0x000105639834();
            func_0x0001056398b8();
            (*extraout_x8)();
            func_0x000105639880();
            func_0x0001056398c4();
            plVar1 = param_1;
          }
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398c4();
            func_0x000105639888();
            func_0x000105639770();
            plVar1 = (long *)*plVar1;
            (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
            if ((int)plVar1 != 0) {
              func_0x0001056398fc();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
            }
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398c4();
              func_0x000105639888();
              func_0x0001056397d8();
              func_0x000105639708();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
              func_0x00010563975c(extraout_x8_00);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398c4();
                func_0x000105639888();
                func_0x0001056397d8();
                func_0x000105639708();
                func_0x000105639834();
                func_0x0001056398b8();
                func_0x000105639784();
                func_0x000105639880();
                func_0x0001056398c4();
                func_0x00010563975c(extraout_x8_01);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398c4();
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x0001056397f8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x00010563991c();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return plVar1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398f0();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x000105639844();
                  func_0x000105639860();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639980();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x000105639974();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x000105639640();
                    func_0x000105639740();
                    func_0x000105639844();
                    func_0x000105639860();
                    func_0x000105639950();
                    func_0x000105639968();
                    func_0x000105639880();
                    func_0x000105639980();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639974();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x00010563968c();
                      func_0x0001056397c8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return plVar1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      if ((bRam0000000113819d88 & 1) == 0) {
                        uVar2 = 0x113819d88;
                        ___cxa_guard_acquire();
                        if ((int)uVar2 != 0) {
                          func_0x000100077ef8();
                          uRam0000000113819d80 = uVar2;
                          ___cxa_guard_release(0x113819d88);
                        }
                      }
                      return (long *)0x113819d80;
                    }
                  }
                  return plVar1;
                }
              }
              return plVar1;
            }
          }
          return plVar1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105638b74; end: 105638beb;  */

long * FUN_105638b74(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x00010563968c();
  func_0x0001056397c8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x0001056398e4();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x0001056398d8();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639818();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x000105639934();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x000105639928();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639818();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x000105639934();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x000105639928();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x00010563968c();
      func_0x0001056397c8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398e4();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398d8();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x0001056396d4();
        func_0x0001056397c8();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x0001056398e4();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x0001056396d4();
          func_0x0001056397c8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x0001056396d4();
          func_0x0001056397c8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          plVar1 = param_1;
          func_0x000105639770();
          plVar1 = (long *)*plVar1;
          (**(code **)(*plVar1 + 0x28))();
          if ((int)plVar1 != 0) {
            func_0x0001056398fc();
            func_0x000105639834();
            func_0x0001056398b8();
            (*extraout_x8)();
            func_0x000105639880();
            func_0x0001056398c4();
            plVar1 = param_1;
          }
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398c4();
            func_0x000105639888();
            func_0x000105639770();
            plVar1 = (long *)*plVar1;
            (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
            if ((int)plVar1 != 0) {
              func_0x0001056398fc();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
            }
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398c4();
              func_0x000105639888();
              func_0x0001056397d8();
              func_0x000105639708();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
              func_0x00010563975c(extraout_x8_00);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398c4();
                func_0x000105639888();
                func_0x0001056397d8();
                func_0x000105639708();
                func_0x000105639834();
                func_0x0001056398b8();
                func_0x000105639784();
                func_0x000105639880();
                func_0x0001056398c4();
                func_0x00010563975c(extraout_x8_01);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398c4();
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x0001056397f8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x00010563991c();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return plVar1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398f0();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x000105639844();
                  func_0x000105639860();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639980();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x000105639974();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x000105639640();
                    func_0x000105639740();
                    func_0x000105639844();
                    func_0x000105639860();
                    func_0x000105639950();
                    func_0x000105639968();
                    func_0x000105639880();
                    func_0x000105639980();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639974();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x00010563968c();
                      func_0x0001056397c8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return plVar1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      if ((bRam0000000113819d88 & 1) == 0) {
                        uVar2 = 0x113819d88;
                        ___cxa_guard_acquire();
                        if ((int)uVar2 != 0) {
                          func_0x000100077ef8();
                          uRam0000000113819d80 = uVar2;
                          ___cxa_guard_release(0x113819d88);
                        }
                      }
                      return (long *)0x113819d80;
                    }
                  }
                  return plVar1;
                }
              }
              return plVar1;
            }
          }
          return plVar1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105638bec; end: 105638c6b;  */

long * FUN_105638bec(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639818();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x000105639934();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x000105639928();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639818();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x000105639934();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x000105639928();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x00010563968c();
      func_0x0001056397c8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398e4();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398d8();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x0001056396d4();
        func_0x0001056397c8();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x0001056398e4();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x0001056396d4();
          func_0x0001056397c8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x0001056396d4();
          func_0x0001056397c8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          plVar1 = param_1;
          func_0x000105639770();
          plVar1 = (long *)*plVar1;
          (**(code **)(*plVar1 + 0x28))();
          if ((int)plVar1 != 0) {
            func_0x0001056398fc();
            func_0x000105639834();
            func_0x0001056398b8();
            (*extraout_x8)();
            func_0x000105639880();
            func_0x0001056398c4();
            plVar1 = param_1;
          }
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398c4();
            func_0x000105639888();
            func_0x000105639770();
            plVar1 = (long *)*plVar1;
            (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
            if ((int)plVar1 != 0) {
              func_0x0001056398fc();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
            }
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398c4();
              func_0x000105639888();
              func_0x0001056397d8();
              func_0x000105639708();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
              func_0x00010563975c(extraout_x8_00);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398c4();
                func_0x000105639888();
                func_0x0001056397d8();
                func_0x000105639708();
                func_0x000105639834();
                func_0x0001056398b8();
                func_0x000105639784();
                func_0x000105639880();
                func_0x0001056398c4();
                func_0x00010563975c(extraout_x8_01);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398c4();
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x0001056397f8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x00010563991c();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return plVar1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398f0();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x000105639844();
                  func_0x000105639860();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639980();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x000105639974();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x000105639640();
                    func_0x000105639740();
                    func_0x000105639844();
                    func_0x000105639860();
                    func_0x000105639950();
                    func_0x000105639968();
                    func_0x000105639880();
                    func_0x000105639980();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639974();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x00010563968c();
                      func_0x0001056397c8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return plVar1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      if ((bRam0000000113819d88 & 1) == 0) {
                        uVar2 = 0x113819d88;
                        ___cxa_guard_acquire();
                        if ((int)uVar2 != 0) {
                          func_0x000100077ef8();
                          uRam0000000113819d80 = uVar2;
                          ___cxa_guard_release(0x113819d88);
                        }
                      }
                      return (long *)0x113819d80;
                    }
                  }
                  return plVar1;
                }
              }
              return plVar1;
            }
          }
          return plVar1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105638c6c; end: 105638ceb;  */

long * FUN_105638c6c(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639818();
  func_0x000105639794();
  func_0x000105639828();
  func_0x000105639880();
  func_0x000105639934();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x000105639928();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  func_0x00010563968c();
  func_0x0001056397c8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x0001056398e4();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398d8();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x0001056396d4();
    func_0x0001056397c8();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x0001056398e4();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398d8();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639818();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x000105639934();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x000105639928();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x000105639640();
        func_0x000105639818();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x000105639934();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x0001056396d4();
          func_0x0001056397c8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x0001056396d4();
          func_0x0001056397c8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          plVar1 = param_1;
          func_0x000105639770();
          plVar1 = (long *)*plVar1;
          (**(code **)(*plVar1 + 0x28))();
          if ((int)plVar1 != 0) {
            func_0x0001056398fc();
            func_0x000105639834();
            func_0x0001056398b8();
            (*extraout_x8)();
            func_0x000105639880();
            func_0x0001056398c4();
            plVar1 = param_1;
          }
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398c4();
            func_0x000105639888();
            func_0x000105639770();
            plVar1 = (long *)*plVar1;
            (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
            if ((int)plVar1 != 0) {
              func_0x0001056398fc();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
            }
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398c4();
              func_0x000105639888();
              func_0x0001056397d8();
              func_0x000105639708();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
              func_0x00010563975c(extraout_x8_00);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398c4();
                func_0x000105639888();
                func_0x0001056397d8();
                func_0x000105639708();
                func_0x000105639834();
                func_0x0001056398b8();
                func_0x000105639784();
                func_0x000105639880();
                func_0x0001056398c4();
                func_0x00010563975c(extraout_x8_01);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398c4();
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x0001056397f8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x00010563991c();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return plVar1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398f0();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x000105639844();
                  func_0x000105639860();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639980();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x000105639974();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x000105639640();
                    func_0x000105639740();
                    func_0x000105639844();
                    func_0x000105639860();
                    func_0x000105639950();
                    func_0x000105639968();
                    func_0x000105639880();
                    func_0x000105639980();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639974();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x00010563968c();
                      func_0x0001056397c8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return plVar1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      if ((bRam0000000113819d88 & 1) == 0) {
                        uVar2 = 0x113819d88;
                        ___cxa_guard_acquire();
                        if ((int)uVar2 != 0) {
                          func_0x000100077ef8();
                          uRam0000000113819d80 = uVar2;
                          ___cxa_guard_release(0x113819d88);
                        }
                      }
                      return (long *)0x113819d80;
                    }
                  }
                  return plVar1;
                }
              }
              return plVar1;
            }
          }
          return plVar1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105638cec; end: 105638d63;  */

long * FUN_105638cec(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x00010563968c();
  func_0x0001056397c8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x0001056398e4();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398d8();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x0001056396d4();
    func_0x0001056397c8();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x0001056398e4();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398d8();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639818();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x000105639934();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x000105639928();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x000105639640();
        func_0x000105639818();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x000105639934();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x0001056396d4();
          func_0x0001056397c8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x0001056396d4();
          func_0x0001056397c8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          plVar1 = param_1;
          func_0x000105639770();
          plVar1 = (long *)*plVar1;
          (**(code **)(*plVar1 + 0x28))();
          if ((int)plVar1 != 0) {
            func_0x0001056398fc();
            func_0x000105639834();
            func_0x0001056398b8();
            (*extraout_x8)();
            func_0x000105639880();
            func_0x0001056398c4();
            plVar1 = param_1;
          }
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398c4();
            func_0x000105639888();
            func_0x000105639770();
            plVar1 = (long *)*plVar1;
            (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
            if ((int)plVar1 != 0) {
              func_0x0001056398fc();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
            }
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398c4();
              func_0x000105639888();
              func_0x0001056397d8();
              func_0x000105639708();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
              func_0x00010563975c(extraout_x8_00);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398c4();
                func_0x000105639888();
                func_0x0001056397d8();
                func_0x000105639708();
                func_0x000105639834();
                func_0x0001056398b8();
                func_0x000105639784();
                func_0x000105639880();
                func_0x0001056398c4();
                func_0x00010563975c(extraout_x8_01);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398c4();
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x0001056397f8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x00010563991c();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return plVar1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398f0();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x000105639844();
                  func_0x000105639860();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639980();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x000105639974();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x000105639640();
                    func_0x000105639740();
                    func_0x000105639844();
                    func_0x000105639860();
                    func_0x000105639950();
                    func_0x000105639968();
                    func_0x000105639880();
                    func_0x000105639980();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639974();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x00010563968c();
                      func_0x0001056397c8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return plVar1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      if ((bRam0000000113819d88 & 1) == 0) {
                        uVar2 = 0x113819d88;
                        ___cxa_guard_acquire();
                        if ((int)uVar2 != 0) {
                          func_0x000100077ef8();
                          uRam0000000113819d80 = uVar2;
                          ___cxa_guard_release(0x113819d88);
                        }
                      }
                      return (long *)0x113819d80;
                    }
                  }
                  return plVar1;
                }
              }
              return plVar1;
            }
          }
          return plVar1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105638d64; end: 105638de3;  */

long * FUN_105638d64(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x0001056396d4();
  func_0x0001056397c8();
  func_0x000105639794();
  func_0x000105639828();
  func_0x000105639880();
  func_0x0001056398e4();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x0001056398d8();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639818();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x000105639934();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x000105639928();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639818();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x000105639934();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x000105639928();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x00010563968c();
      func_0x0001056397c8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398e4();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398d8();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x0001056396d4();
        func_0x0001056397c8();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x0001056398e4();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x0001056396d4();
          func_0x0001056397c8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          plVar1 = param_1;
          func_0x000105639770();
          plVar1 = (long *)*plVar1;
          (**(code **)(*plVar1 + 0x28))();
          if ((int)plVar1 != 0) {
            func_0x0001056398fc();
            func_0x000105639834();
            func_0x0001056398b8();
            (*extraout_x8)();
            func_0x000105639880();
            func_0x0001056398c4();
            plVar1 = param_1;
          }
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398c4();
            func_0x000105639888();
            func_0x000105639770();
            plVar1 = (long *)*plVar1;
            (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
            if ((int)plVar1 != 0) {
              func_0x0001056398fc();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
            }
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398c4();
              func_0x000105639888();
              func_0x0001056397d8();
              func_0x000105639708();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
              func_0x00010563975c(extraout_x8_00);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398c4();
                func_0x000105639888();
                func_0x0001056397d8();
                func_0x000105639708();
                func_0x000105639834();
                func_0x0001056398b8();
                func_0x000105639784();
                func_0x000105639880();
                func_0x0001056398c4();
                func_0x00010563975c(extraout_x8_01);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398c4();
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x0001056397f8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x00010563991c();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return plVar1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398f0();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x000105639844();
                  func_0x000105639860();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639980();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x000105639974();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x000105639640();
                    func_0x000105639740();
                    func_0x000105639844();
                    func_0x000105639860();
                    func_0x000105639950();
                    func_0x000105639968();
                    func_0x000105639880();
                    func_0x000105639980();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639974();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x00010563968c();
                      func_0x0001056397c8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return plVar1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      if ((bRam0000000113819d88 & 1) == 0) {
                        uVar2 = 0x113819d88;
                        ___cxa_guard_acquire();
                        if ((int)uVar2 != 0) {
                          func_0x000100077ef8();
                          uRam0000000113819d80 = uVar2;
                          ___cxa_guard_release(0x113819d88);
                        }
                      }
                      return (long *)0x113819d80;
                    }
                  }
                  return plVar1;
                }
              }
              return plVar1;
            }
          }
          return plVar1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105638de4; end: 105638e63;  */

long * FUN_105638de4(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639818();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x000105639934();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x000105639928();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639818();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x000105639934();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x000105639928();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x00010563968c();
      func_0x0001056397c8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398e4();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398d8();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x0001056396d4();
        func_0x0001056397c8();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x0001056398e4();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639818();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x000105639934();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x0001056396d4();
          func_0x0001056397c8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          plVar1 = param_1;
          func_0x000105639770();
          plVar1 = (long *)*plVar1;
          (**(code **)(*plVar1 + 0x28))();
          if ((int)plVar1 != 0) {
            func_0x0001056398fc();
            func_0x000105639834();
            func_0x0001056398b8();
            (*extraout_x8)();
            func_0x000105639880();
            func_0x0001056398c4();
            plVar1 = param_1;
          }
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398c4();
            func_0x000105639888();
            func_0x000105639770();
            plVar1 = (long *)*plVar1;
            (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
            if ((int)plVar1 != 0) {
              func_0x0001056398fc();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
            }
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398c4();
              func_0x000105639888();
              func_0x0001056397d8();
              func_0x000105639708();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
              func_0x00010563975c(extraout_x8_00);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398c4();
                func_0x000105639888();
                func_0x0001056397d8();
                func_0x000105639708();
                func_0x000105639834();
                func_0x0001056398b8();
                func_0x000105639784();
                func_0x000105639880();
                func_0x0001056398c4();
                func_0x00010563975c(extraout_x8_01);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398c4();
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x0001056397f8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x00010563991c();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return plVar1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398f0();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x000105639844();
                  func_0x000105639860();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639980();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x000105639974();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x000105639640();
                    func_0x000105639740();
                    func_0x000105639844();
                    func_0x000105639860();
                    func_0x000105639950();
                    func_0x000105639968();
                    func_0x000105639880();
                    func_0x000105639980();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639974();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x00010563968c();
                      func_0x0001056397c8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return plVar1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      if ((bRam0000000113819d88 & 1) == 0) {
                        uVar2 = 0x113819d88;
                        ___cxa_guard_acquire();
                        if ((int)uVar2 != 0) {
                          func_0x000100077ef8();
                          uRam0000000113819d80 = uVar2;
                          ___cxa_guard_release(0x113819d88);
                        }
                      }
                      return (long *)0x113819d80;
                    }
                  }
                  return plVar1;
                }
              }
              return plVar1;
            }
          }
          return plVar1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105638e64; end: 105638ee3;  */

long * FUN_105638e64(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639818();
  func_0x000105639794();
  func_0x000105639828();
  func_0x000105639880();
  func_0x000105639934();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x000105639928();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  func_0x00010563968c();
  func_0x0001056397c8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x0001056398e4();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398d8();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x0001056396d4();
    func_0x0001056397c8();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x0001056398e4();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398d8();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639818();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x000105639934();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x000105639928();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x000105639640();
        func_0x000105639818();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x000105639934();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x0001056396d4();
          func_0x0001056397c8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          plVar1 = param_1;
          func_0x000105639770();
          plVar1 = (long *)*plVar1;
          (**(code **)(*plVar1 + 0x28))();
          if ((int)plVar1 != 0) {
            func_0x0001056398fc();
            func_0x000105639834();
            func_0x0001056398b8();
            (*extraout_x8)();
            func_0x000105639880();
            func_0x0001056398c4();
            plVar1 = param_1;
          }
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398c4();
            func_0x000105639888();
            func_0x000105639770();
            plVar1 = (long *)*plVar1;
            (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
            if ((int)plVar1 != 0) {
              func_0x0001056398fc();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
            }
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398c4();
              func_0x000105639888();
              func_0x0001056397d8();
              func_0x000105639708();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
              func_0x00010563975c(extraout_x8_00);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398c4();
                func_0x000105639888();
                func_0x0001056397d8();
                func_0x000105639708();
                func_0x000105639834();
                func_0x0001056398b8();
                func_0x000105639784();
                func_0x000105639880();
                func_0x0001056398c4();
                func_0x00010563975c(extraout_x8_01);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398c4();
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x0001056397f8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x00010563991c();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return plVar1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398f0();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x000105639844();
                  func_0x000105639860();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639980();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x000105639974();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x000105639640();
                    func_0x000105639740();
                    func_0x000105639844();
                    func_0x000105639860();
                    func_0x000105639950();
                    func_0x000105639968();
                    func_0x000105639880();
                    func_0x000105639980();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639974();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x00010563968c();
                      func_0x0001056397c8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return plVar1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      if ((bRam0000000113819d88 & 1) == 0) {
                        uVar2 = 0x113819d88;
                        ___cxa_guard_acquire();
                        if ((int)uVar2 != 0) {
                          func_0x000100077ef8();
                          uRam0000000113819d80 = uVar2;
                          ___cxa_guard_release(0x113819d88);
                        }
                      }
                      return (long *)0x113819d80;
                    }
                  }
                  return plVar1;
                }
              }
              return plVar1;
            }
          }
          return plVar1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105638ee4; end: 105638f5b;  */

long * FUN_105638ee4(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x00010563968c();
  func_0x0001056397c8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x0001056398e4();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398d8();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x0001056396d4();
    func_0x0001056397c8();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x0001056398e4();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398d8();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639818();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x000105639934();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x000105639928();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x000105639640();
        func_0x000105639818();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x000105639934();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639928();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x0001056396d4();
          func_0x0001056397c8();
          func_0x000105639794();
          func_0x000105639828();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          plVar1 = param_1;
          func_0x000105639770();
          plVar1 = (long *)*plVar1;
          (**(code **)(*plVar1 + 0x28))();
          if ((int)plVar1 != 0) {
            func_0x0001056398fc();
            func_0x000105639834();
            func_0x0001056398b8();
            (*extraout_x8)();
            func_0x000105639880();
            func_0x0001056398c4();
            plVar1 = param_1;
          }
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398c4();
            func_0x000105639888();
            func_0x000105639770();
            plVar1 = (long *)*plVar1;
            (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
            if ((int)plVar1 != 0) {
              func_0x0001056398fc();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
            }
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398c4();
              func_0x000105639888();
              func_0x0001056397d8();
              func_0x000105639708();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
              func_0x00010563975c(extraout_x8_00);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398c4();
                func_0x000105639888();
                func_0x0001056397d8();
                func_0x000105639708();
                func_0x000105639834();
                func_0x0001056398b8();
                func_0x000105639784();
                func_0x000105639880();
                func_0x0001056398c4();
                func_0x00010563975c(extraout_x8_01);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398c4();
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x0001056397f8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x00010563991c();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return plVar1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398f0();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x000105639844();
                  func_0x000105639860();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639980();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x000105639974();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x000105639640();
                    func_0x000105639740();
                    func_0x000105639844();
                    func_0x000105639860();
                    func_0x000105639950();
                    func_0x000105639968();
                    func_0x000105639880();
                    func_0x000105639980();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639974();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x00010563968c();
                      func_0x0001056397c8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return plVar1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      if ((bRam0000000113819d88 & 1) == 0) {
                        uVar2 = 0x113819d88;
                        ___cxa_guard_acquire();
                        if ((int)uVar2 != 0) {
                          func_0x000100077ef8();
                          uRam0000000113819d80 = uVar2;
                          ___cxa_guard_release(0x113819d88);
                        }
                      }
                      return (long *)0x113819d80;
                    }
                  }
                  return plVar1;
                }
              }
              return plVar1;
            }
          }
          return plVar1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105638f5c; end: 105638fdb;  */

long * FUN_105638f5c(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x0001056396d4();
  func_0x0001056397c8();
  func_0x000105639794();
  func_0x000105639828();
  func_0x000105639880();
  func_0x0001056398e4();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x0001056398d8();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639818();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x000105639934();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x000105639928();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639818();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x000105639934();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x000105639928();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x00010563968c();
      func_0x0001056397c8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398e4();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if ((bool)in_ZR) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398d8();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x0001056396d4();
      func_0x0001056397c8();
      func_0x000105639794();
      func_0x000105639828();
      func_0x000105639880();
      func_0x0001056398e4();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if ((bool)in_ZR) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398d8();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      plVar1 = param_1;
      func_0x000105639770();
      plVar1 = (long *)*plVar1;
      (**(code **)(*plVar1 + 0x28))();
      if ((int)plVar1 != 0) {
        func_0x0001056398fc();
        func_0x000105639834();
        func_0x0001056398b8();
        (*extraout_x8)();
        func_0x000105639880();
        func_0x0001056398c4();
        plVar1 = param_1;
      }
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398c4();
        func_0x000105639888();
        func_0x000105639770();
        plVar1 = (long *)*plVar1;
        (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
        if ((int)plVar1 != 0) {
          func_0x0001056398fc();
          func_0x000105639834();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398c4();
        }
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398c4();
          func_0x000105639888();
          func_0x0001056397d8();
          func_0x000105639708();
          func_0x000105639834();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398c4();
          func_0x00010563975c(extraout_x8_00);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398c4();
            func_0x000105639888();
            func_0x0001056397d8();
            func_0x000105639708();
            func_0x000105639834();
            func_0x0001056398b8();
            func_0x000105639784();
            func_0x000105639880();
            func_0x0001056398c4();
            func_0x00010563975c(extraout_x8_01);
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398c4();
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639740();
              func_0x0001056397f8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x00010563991c();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return plVar1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398f0();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639740();
              func_0x000105639844();
              func_0x000105639860();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x000105639980();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x000105639974();
                do {
                  func_0x000105639890();
                  func_0x0001056398a0();
                } while (!(bool)in_ZR);
                func_0x000105639888();
                func_0x000105639770();
                func_0x000105639640();
                func_0x000105639740();
                func_0x000105639844();
                func_0x000105639860();
                func_0x000105639950();
                func_0x000105639968();
                func_0x000105639880();
                func_0x000105639980();
                do {
                  func_0x000105639898();
                  func_0x0001056398ac();
                } while (!(bool)in_ZR);
                func_0x000105639728();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639974();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x00010563968c();
                  func_0x0001056397c8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return plVar1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  if ((bRam0000000113819d88 & 1) == 0) {
                    uVar2 = 0x113819d88;
                    ___cxa_guard_acquire();
                    if ((int)uVar2 != 0) {
                      func_0x000100077ef8();
                      uRam0000000113819d80 = uVar2;
                      ___cxa_guard_release(0x113819d88);
                    }
                  }
                  return (long *)0x113819d80;
                }
              }
              return plVar1;
            }
          }
          return plVar1;
        }
      }
      return plVar1;
    }
  }
  return param_1;
}



/* Entry: 105638fdc; end: 10563905b;  */

long * FUN_105638fdc(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639818();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x000105639934();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x000105639928();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639818();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x000105639934();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x000105639928();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x00010563968c();
      func_0x0001056397c8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398e4();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398d8();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x0001056396d4();
        func_0x0001056397c8();
        func_0x000105639794();
        func_0x000105639828();
        func_0x000105639880();
        func_0x0001056398e4();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          plVar1 = param_1;
          func_0x000105639770();
          plVar1 = (long *)*plVar1;
          (**(code **)(*plVar1 + 0x28))();
          if ((int)plVar1 != 0) {
            func_0x0001056398fc();
            func_0x000105639834();
            func_0x0001056398b8();
            (*extraout_x8)();
            func_0x000105639880();
            func_0x0001056398c4();
            plVar1 = param_1;
          }
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398c4();
            func_0x000105639888();
            func_0x000105639770();
            plVar1 = (long *)*plVar1;
            (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
            if ((int)plVar1 != 0) {
              func_0x0001056398fc();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
            }
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398c4();
              func_0x000105639888();
              func_0x0001056397d8();
              func_0x000105639708();
              func_0x000105639834();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398c4();
              func_0x00010563975c(extraout_x8_00);
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398c4();
                func_0x000105639888();
                func_0x0001056397d8();
                func_0x000105639708();
                func_0x000105639834();
                func_0x0001056398b8();
                func_0x000105639784();
                func_0x000105639880();
                func_0x0001056398c4();
                func_0x00010563975c(extraout_x8_01);
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398c4();
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x0001056397f8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x00010563991c();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return plVar1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398f0();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x000105639770();
                  func_0x000105639640();
                  func_0x000105639740();
                  func_0x000105639844();
                  func_0x000105639860();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x000105639980();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if (!(bool)in_ZR) {
                    ___stack_chk_fail();
                    func_0x0001056397ac();
                    func_0x000105639974();
                    do {
                      func_0x000105639890();
                      func_0x0001056398a0();
                    } while (!(bool)in_ZR);
                    func_0x000105639888();
                    func_0x000105639770();
                    func_0x000105639640();
                    func_0x000105639740();
                    func_0x000105639844();
                    func_0x000105639860();
                    func_0x000105639950();
                    func_0x000105639968();
                    func_0x000105639880();
                    func_0x000105639980();
                    do {
                      func_0x000105639898();
                      func_0x0001056398ac();
                    } while (!(bool)in_ZR);
                    func_0x000105639728();
                    if (!(bool)in_ZR) {
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x000105639974();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      func_0x00010563968c();
                      func_0x0001056397c8();
                      func_0x0001056398b8();
                      func_0x000105639784();
                      func_0x000105639880();
                      func_0x0001056398e4();
                      do {
                        func_0x000105639898();
                        func_0x0001056398ac();
                      } while (!(bool)in_ZR);
                      func_0x000105639728();
                      if ((bool)in_ZR) {
                        return plVar1;
                      }
                      ___stack_chk_fail();
                      func_0x0001056397ac();
                      func_0x0001056398d8();
                      do {
                        func_0x000105639890();
                        func_0x0001056398a0();
                      } while (!(bool)in_ZR);
                      func_0x000105639888();
                      if ((bRam0000000113819d88 & 1) == 0) {
                        uVar2 = 0x113819d88;
                        ___cxa_guard_acquire();
                        if ((int)uVar2 != 0) {
                          func_0x000100077ef8();
                          uRam0000000113819d80 = uVar2;
                          ___cxa_guard_release(0x113819d88);
                        }
                      }
                      return (long *)0x113819d80;
                    }
                  }
                  return plVar1;
                }
              }
              return plVar1;
            }
          }
          return plVar1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10563905c; end: 1056390db;  */

long * FUN_10563905c(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639818();
  func_0x000105639794();
  func_0x000105639828();
  func_0x000105639880();
  func_0x000105639934();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x000105639928();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  func_0x00010563968c();
  func_0x0001056397c8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x0001056398e4();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398d8();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x0001056396d4();
    func_0x0001056397c8();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x0001056398e4();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398d8();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      plVar1 = param_1;
      func_0x000105639770();
      plVar1 = (long *)*plVar1;
      (**(code **)(*plVar1 + 0x28))();
      if ((int)plVar1 != 0) {
        func_0x0001056398fc();
        func_0x000105639834();
        func_0x0001056398b8();
        (*extraout_x8)();
        func_0x000105639880();
        func_0x0001056398c4();
        plVar1 = param_1;
      }
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398c4();
        func_0x000105639888();
        func_0x000105639770();
        plVar1 = (long *)*plVar1;
        (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
        if ((int)plVar1 != 0) {
          func_0x0001056398fc();
          func_0x000105639834();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398c4();
        }
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398c4();
          func_0x000105639888();
          func_0x0001056397d8();
          func_0x000105639708();
          func_0x000105639834();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398c4();
          func_0x00010563975c(extraout_x8_00);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398c4();
            func_0x000105639888();
            func_0x0001056397d8();
            func_0x000105639708();
            func_0x000105639834();
            func_0x0001056398b8();
            func_0x000105639784();
            func_0x000105639880();
            func_0x0001056398c4();
            func_0x00010563975c(extraout_x8_01);
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398c4();
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639740();
              func_0x0001056397f8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x00010563991c();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return plVar1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398f0();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639740();
              func_0x000105639844();
              func_0x000105639860();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x000105639980();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x000105639974();
                do {
                  func_0x000105639890();
                  func_0x0001056398a0();
                } while (!(bool)in_ZR);
                func_0x000105639888();
                func_0x000105639770();
                func_0x000105639640();
                func_0x000105639740();
                func_0x000105639844();
                func_0x000105639860();
                func_0x000105639950();
                func_0x000105639968();
                func_0x000105639880();
                func_0x000105639980();
                do {
                  func_0x000105639898();
                  func_0x0001056398ac();
                } while (!(bool)in_ZR);
                func_0x000105639728();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639974();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x00010563968c();
                  func_0x0001056397c8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return plVar1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  if ((bRam0000000113819d88 & 1) == 0) {
                    uVar2 = 0x113819d88;
                    ___cxa_guard_acquire();
                    if ((int)uVar2 != 0) {
                      func_0x000100077ef8();
                      uRam0000000113819d80 = uVar2;
                      ___cxa_guard_release(0x113819d88);
                    }
                  }
                  return (long *)0x113819d80;
                }
              }
              return plVar1;
            }
          }
          return plVar1;
        }
      }
      return plVar1;
    }
  }
  return param_1;
}



/* Entry: 1056390dc; end: 105639153;  */

long * FUN_1056390dc(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x00010563968c();
  func_0x0001056397c8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x0001056398e4();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398d8();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x0001056396d4();
    func_0x0001056397c8();
    func_0x000105639794();
    func_0x000105639828();
    func_0x000105639880();
    func_0x0001056398e4();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398d8();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      plVar1 = param_1;
      func_0x000105639770();
      plVar1 = (long *)*plVar1;
      (**(code **)(*plVar1 + 0x28))();
      if ((int)plVar1 != 0) {
        func_0x0001056398fc();
        func_0x000105639834();
        func_0x0001056398b8();
        (*extraout_x8)();
        func_0x000105639880();
        func_0x0001056398c4();
        plVar1 = param_1;
      }
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398c4();
        func_0x000105639888();
        func_0x000105639770();
        plVar1 = (long *)*plVar1;
        (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
        if ((int)plVar1 != 0) {
          func_0x0001056398fc();
          func_0x000105639834();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398c4();
        }
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398c4();
          func_0x000105639888();
          func_0x0001056397d8();
          func_0x000105639708();
          func_0x000105639834();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398c4();
          func_0x00010563975c(extraout_x8_00);
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398c4();
            func_0x000105639888();
            func_0x0001056397d8();
            func_0x000105639708();
            func_0x000105639834();
            func_0x0001056398b8();
            func_0x000105639784();
            func_0x000105639880();
            func_0x0001056398c4();
            func_0x00010563975c(extraout_x8_01);
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398c4();
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639740();
              func_0x0001056397f8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x00010563991c();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return plVar1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398f0();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x000105639770();
              func_0x000105639640();
              func_0x000105639740();
              func_0x000105639844();
              func_0x000105639860();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x000105639980();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x000105639974();
                do {
                  func_0x000105639890();
                  func_0x0001056398a0();
                } while (!(bool)in_ZR);
                func_0x000105639888();
                func_0x000105639770();
                func_0x000105639640();
                func_0x000105639740();
                func_0x000105639844();
                func_0x000105639860();
                func_0x000105639950();
                func_0x000105639968();
                func_0x000105639880();
                func_0x000105639980();
                do {
                  func_0x000105639898();
                  func_0x0001056398ac();
                } while (!(bool)in_ZR);
                func_0x000105639728();
                if (!(bool)in_ZR) {
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x000105639974();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  func_0x00010563968c();
                  func_0x0001056397c8();
                  func_0x0001056398b8();
                  func_0x000105639784();
                  func_0x000105639880();
                  func_0x0001056398e4();
                  do {
                    func_0x000105639898();
                    func_0x0001056398ac();
                  } while (!(bool)in_ZR);
                  func_0x000105639728();
                  if ((bool)in_ZR) {
                    return plVar1;
                  }
                  ___stack_chk_fail();
                  func_0x0001056397ac();
                  func_0x0001056398d8();
                  do {
                    func_0x000105639890();
                    func_0x0001056398a0();
                  } while (!(bool)in_ZR);
                  func_0x000105639888();
                  if ((bRam0000000113819d88 & 1) == 0) {
                    uVar2 = 0x113819d88;
                    ___cxa_guard_acquire();
                    if ((int)uVar2 != 0) {
                      func_0x000100077ef8();
                      uRam0000000113819d80 = uVar2;
                      ___cxa_guard_release(0x113819d88);
                    }
                  }
                  return (long *)0x113819d80;
                }
              }
              return plVar1;
            }
          }
          return plVar1;
        }
      }
      return plVar1;
    }
  }
  return param_1;
}



/* Entry: 105639154; end: 1056391d3;  */

long * FUN_105639154(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x000105639770();
  func_0x0001056396d4();
  func_0x0001056397c8();
  func_0x000105639794();
  func_0x000105639828();
  func_0x000105639880();
  func_0x0001056398e4();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x0001056398d8();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  plVar1 = param_1;
  func_0x000105639770();
  plVar1 = (long *)*plVar1;
  (**(code **)(*plVar1 + 0x28))();
  if ((int)plVar1 != 0) {
    func_0x0001056398fc();
    func_0x000105639834();
    func_0x0001056398b8();
    (*extraout_x8)();
    func_0x000105639880();
    func_0x0001056398c4();
    plVar1 = param_1;
  }
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398c4();
    func_0x000105639888();
    func_0x000105639770();
    plVar1 = (long *)*plVar1;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
    if ((int)plVar1 != 0) {
      func_0x0001056398fc();
      func_0x000105639834();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398c4();
    }
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398c4();
      func_0x000105639888();
      func_0x0001056397d8();
      func_0x000105639708();
      func_0x000105639834();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398c4();
      func_0x00010563975c(extraout_x8_00);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398c4();
        func_0x000105639888();
        func_0x0001056397d8();
        func_0x000105639708();
        func_0x000105639834();
        func_0x0001056398b8();
        func_0x000105639784();
        func_0x000105639880();
        func_0x0001056398c4();
        func_0x00010563975c(extraout_x8_01);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398c4();
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639740();
          func_0x0001056397f8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x00010563991c();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return plVar1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398f0();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639740();
          func_0x000105639844();
          func_0x000105639860();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639980();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x000105639974();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            func_0x000105639770();
            func_0x000105639640();
            func_0x000105639740();
            func_0x000105639844();
            func_0x000105639860();
            func_0x000105639950();
            func_0x000105639968();
            func_0x000105639880();
            func_0x000105639980();
            do {
              func_0x000105639898();
              func_0x0001056398ac();
            } while (!(bool)in_ZR);
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639974();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x00010563968c();
              func_0x0001056397c8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if ((bool)in_ZR) {
                return plVar1;
              }
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x0001056398d8();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              if ((bRam0000000113819d88 & 1) == 0) {
                uVar2 = 0x113819d88;
                ___cxa_guard_acquire();
                if ((int)uVar2 != 0) {
                  func_0x000100077ef8();
                  uRam0000000113819d80 = uVar2;
                  ___cxa_guard_release(0x113819d88);
                }
              }
              return (long *)0x113819d80;
            }
          }
          return plVar1;
        }
      }
      return plVar1;
    }
  }
  return plVar1;
}



/* Entry: 1056391d4; end: 10563926b;  */

long * FUN_1056391d4(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  plVar1 = param_1;
  func_0x000105639770();
  plVar1 = (long *)*plVar1;
  (**(code **)(*plVar1 + 0x28))();
  if ((int)plVar1 != 0) {
    func_0x0001056398fc();
    func_0x000105639834();
    func_0x0001056398b8();
    (*extraout_x8)();
    func_0x000105639880();
    func_0x0001056398c4();
    plVar1 = param_1;
  }
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398c4();
    func_0x000105639888();
    func_0x000105639770();
    plVar1 = (long *)*plVar1;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
    if ((int)plVar1 != 0) {
      func_0x0001056398fc();
      func_0x000105639834();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398c4();
    }
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398c4();
      func_0x000105639888();
      func_0x0001056397d8();
      func_0x000105639708();
      func_0x000105639834();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398c4();
      func_0x00010563975c(extraout_x8_00);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398c4();
        func_0x000105639888();
        func_0x0001056397d8();
        func_0x000105639708();
        func_0x000105639834();
        func_0x0001056398b8();
        func_0x000105639784();
        func_0x000105639880();
        func_0x0001056398c4();
        func_0x00010563975c(extraout_x8_01);
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398c4();
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639740();
          func_0x0001056397f8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x00010563991c();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if ((bool)in_ZR) {
            return plVar1;
          }
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398f0();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x000105639770();
          func_0x000105639640();
          func_0x000105639740();
          func_0x000105639844();
          func_0x000105639860();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x000105639980();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x000105639974();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            func_0x000105639770();
            func_0x000105639640();
            func_0x000105639740();
            func_0x000105639844();
            func_0x000105639860();
            func_0x000105639950();
            func_0x000105639968();
            func_0x000105639880();
            func_0x000105639980();
            do {
              func_0x000105639898();
              func_0x0001056398ac();
            } while (!(bool)in_ZR);
            func_0x000105639728();
            if (!(bool)in_ZR) {
              ___stack_chk_fail();
              func_0x0001056397ac();
              func_0x000105639974();
              do {
                func_0x000105639890();
                func_0x0001056398a0();
              } while (!(bool)in_ZR);
              func_0x000105639888();
              func_0x00010563968c();
              func_0x0001056397c8();
              func_0x0001056398b8();
              func_0x000105639784();
              func_0x000105639880();
              func_0x0001056398e4();
              do {
                func_0x000105639898();
                func_0x0001056398ac();
              } while (!(bool)in_ZR);
              func_0x000105639728();
              if (!(bool)in_ZR) {
                ___stack_chk_fail();
                func_0x0001056397ac();
                func_0x0001056398d8();
                do {
                  func_0x000105639890();
                  func_0x0001056398a0();
                } while (!(bool)in_ZR);
                func_0x000105639888();
                if ((bRam0000000113819d88 & 1) == 0) {
                  uVar2 = 0x113819d88;
                  ___cxa_guard_acquire();
                  if ((int)uVar2 != 0) {
                    func_0x000100077ef8();
                    uRam0000000113819d80 = uVar2;
                    ___cxa_guard_release(0x113819d88);
                  }
                }
                return (long *)0x113819d80;
              }
              return plVar1;
            }
          }
          return plVar1;
        }
      }
      return plVar1;
    }
  }
  return plVar1;
}



/* Entry: 10563926c; end: 1056392f3;  */

long * FUN_10563926c(undefined8 *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  
  func_0x000105639770();
  plVar1 = (long *)*param_1;
  (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_1108a1f38);
  if ((int)plVar1 != 0) {
    func_0x0001056398fc();
    func_0x000105639834();
    func_0x0001056398b8();
    func_0x000105639784();
    func_0x000105639880();
    func_0x0001056398c4();
  }
  func_0x000105639728();
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x0001056398c4();
  func_0x000105639888();
  func_0x0001056397d8();
  func_0x000105639708();
  func_0x000105639834();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x0001056398c4();
  func_0x00010563975c(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398c4();
    func_0x000105639888();
    func_0x0001056397d8();
    func_0x000105639708();
    func_0x000105639834();
    func_0x0001056398b8();
    func_0x000105639784();
    func_0x000105639880();
    func_0x0001056398c4();
    func_0x00010563975c(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398c4();
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639740();
      func_0x0001056397f8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x00010563991c();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if ((bool)in_ZR) {
        return plVar1;
      }
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398f0();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639740();
      func_0x000105639844();
      func_0x000105639860();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x000105639980();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x000105639974();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x000105639640();
        func_0x000105639740();
        func_0x000105639844();
        func_0x000105639860();
        func_0x000105639950();
        func_0x000105639968();
        func_0x000105639880();
        func_0x000105639980();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639974();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398d8();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            if ((bRam0000000113819d88 & 1) == 0) {
              uVar2 = 0x113819d88;
              ___cxa_guard_acquire();
              if ((int)uVar2 != 0) {
                func_0x000100077ef8();
                uRam0000000113819d80 = uVar2;
                ___cxa_guard_release(0x113819d88);
              }
            }
            return (long *)0x113819d80;
          }
          return plVar1;
        }
      }
      return plVar1;
    }
  }
  return plVar1;
}



/* Entry: 1056392f4; end: 10563935b;  */

undefined8 FUN_1056392f4(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  
  func_0x0001056397d8();
  func_0x000105639708();
  func_0x000105639834();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x0001056398c4();
  func_0x00010563975c(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398c4();
    func_0x000105639888();
    func_0x0001056397d8();
    func_0x000105639708();
    func_0x000105639834();
    func_0x0001056398b8();
    func_0x000105639784();
    func_0x000105639880();
    func_0x0001056398c4();
    func_0x00010563975c(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398c4();
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639740();
      func_0x0001056397f8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x00010563991c();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if ((bool)in_ZR) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x0001056398f0();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639740();
      func_0x000105639844();
      func_0x000105639860();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x000105639980();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x000105639974();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x000105639770();
        func_0x000105639640();
        func_0x000105639740();
        func_0x000105639844();
        func_0x000105639860();
        func_0x000105639950();
        func_0x000105639968();
        func_0x000105639880();
        func_0x000105639980();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x000105639974();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          func_0x00010563968c();
          func_0x0001056397c8();
          func_0x0001056398b8();
          func_0x000105639784();
          func_0x000105639880();
          func_0x0001056398e4();
          do {
            func_0x000105639898();
            func_0x0001056398ac();
          } while (!(bool)in_ZR);
          func_0x000105639728();
          if (!(bool)in_ZR) {
            ___stack_chk_fail();
            func_0x0001056397ac();
            func_0x0001056398d8();
            do {
              func_0x000105639890();
              func_0x0001056398a0();
            } while (!(bool)in_ZR);
            func_0x000105639888();
            if ((bRam0000000113819d88 & 1) == 0) {
              uVar1 = 0x113819d88;
              ___cxa_guard_acquire();
              if ((int)uVar1 != 0) {
                func_0x000100077ef8();
                uRam0000000113819d80 = uVar1;
                ___cxa_guard_release(0x113819d88);
              }
            }
            return 0x113819d80;
          }
          return param_1;
        }
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 10563935c; end: 1056393c3;  */

undefined8 FUN_10563935c(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  
  func_0x0001056397d8();
  func_0x000105639708();
  func_0x000105639834();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x0001056398c4();
  func_0x00010563975c(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x0001056398c4();
  func_0x000105639888();
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x0001056397f8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x00010563991c();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x0001056398f0();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639740();
    func_0x000105639844();
    func_0x000105639860();
    func_0x0001056398b8();
    func_0x000105639784();
    func_0x000105639880();
    func_0x000105639980();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x000105639974();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x000105639770();
      func_0x000105639640();
      func_0x000105639740();
      func_0x000105639844();
      func_0x000105639860();
      func_0x000105639950();
      func_0x000105639968();
      func_0x000105639880();
      func_0x000105639980();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x000105639974();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        func_0x00010563968c();
        func_0x0001056397c8();
        func_0x0001056398b8();
        func_0x000105639784();
        func_0x000105639880();
        func_0x0001056398e4();
        do {
          func_0x000105639898();
          func_0x0001056398ac();
        } while (!(bool)in_ZR);
        func_0x000105639728();
        if (!(bool)in_ZR) {
          ___stack_chk_fail();
          func_0x0001056397ac();
          func_0x0001056398d8();
          do {
            func_0x000105639890();
            func_0x0001056398a0();
          } while (!(bool)in_ZR);
          func_0x000105639888();
          if ((bRam0000000113819d88 & 1) == 0) {
            uVar1 = 0x113819d88;
            ___cxa_guard_acquire();
            if ((int)uVar1 != 0) {
              func_0x000100077ef8();
              uRam0000000113819d80 = uVar1;
              ___cxa_guard_release(0x113819d88);
            }
          }
          return 0x113819d80;
        }
        return param_1;
      }
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 1056393c4; end: 105639447;  */

undefined8 FUN_1056393c4(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x0001056397f8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x00010563991c();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x0001056398f0();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x000105639844();
  func_0x000105639860();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x000105639980();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x000105639974();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639740();
    func_0x000105639844();
    func_0x000105639860();
    func_0x000105639950();
    func_0x000105639968();
    func_0x000105639880();
    func_0x000105639980();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x000105639974();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x00010563968c();
      func_0x0001056397c8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398e4();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398d8();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        if ((bRam0000000113819d88 & 1) == 0) {
          uVar1 = 0x113819d88;
          ___cxa_guard_acquire();
          if ((int)uVar1 != 0) {
            func_0x000100077ef8();
            uRam0000000113819d80 = uVar1;
            ___cxa_guard_release(0x113819d88);
          }
        }
        return 0x113819d80;
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 105639448; end: 1056394cf;  */

undefined8 FUN_105639448(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x000105639844();
  func_0x000105639860();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x000105639980();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001056397ac();
    func_0x000105639974();
    do {
      func_0x000105639890();
      func_0x0001056398a0();
    } while (!(bool)in_ZR);
    func_0x000105639888();
    func_0x000105639770();
    func_0x000105639640();
    func_0x000105639740();
    func_0x000105639844();
    func_0x000105639860();
    func_0x000105639950();
    func_0x000105639968();
    func_0x000105639880();
    func_0x000105639980();
    do {
      func_0x000105639898();
      func_0x0001056398ac();
    } while (!(bool)in_ZR);
    func_0x000105639728();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001056397ac();
      func_0x000105639974();
      do {
        func_0x000105639890();
        func_0x0001056398a0();
      } while (!(bool)in_ZR);
      func_0x000105639888();
      func_0x00010563968c();
      func_0x0001056397c8();
      func_0x0001056398b8();
      func_0x000105639784();
      func_0x000105639880();
      func_0x0001056398e4();
      do {
        func_0x000105639898();
        func_0x0001056398ac();
      } while (!(bool)in_ZR);
      func_0x000105639728();
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x0001056397ac();
        func_0x0001056398d8();
        do {
          func_0x000105639890();
          func_0x0001056398a0();
        } while (!(bool)in_ZR);
        func_0x000105639888();
        if ((bRam0000000113819d88 & 1) == 0) {
          uVar1 = 0x113819d88;
          ___cxa_guard_acquire();
          if ((int)uVar1 != 0) {
            func_0x000100077ef8();
            uRam0000000113819d80 = uVar1;
            ___cxa_guard_release(0x113819d88);
          }
        }
        return 0x113819d80;
      }
      return param_1;
    }
  }
  return param_1;
}



/* Entry: 1056394d0; end: 105639557;  */

undefined8 FUN_1056394d0(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x000105639770();
  func_0x000105639640();
  func_0x000105639740();
  func_0x000105639844();
  func_0x000105639860();
  func_0x000105639950();
  func_0x000105639968();
  func_0x000105639880();
  func_0x000105639980();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x000105639974();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  func_0x00010563968c();
  func_0x0001056397c8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x0001056398e4();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x0001056398d8();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  if ((bRam0000000113819d88 & 1) == 0) {
    uVar1 = 0x113819d88;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      func_0x000100077ef8();
      uRam0000000113819d80 = uVar1;
      ___cxa_guard_release(0x113819d88);
    }
  }
  return 0x113819d80;
}



/* Entry: 105639558; end: 1056395cf;  */

undefined8 FUN_105639558(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010563968c();
  func_0x0001056397c8();
  func_0x0001056398b8();
  func_0x000105639784();
  func_0x000105639880();
  func_0x0001056398e4();
  do {
    func_0x000105639898();
    func_0x0001056398ac();
  } while (!(bool)in_ZR);
  func_0x000105639728();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001056397ac();
  func_0x0001056398d8();
  do {
    func_0x000105639890();
    func_0x0001056398a0();
  } while (!(bool)in_ZR);
  func_0x000105639888();
  if ((bRam0000000113819d88 & 1) == 0) {
    uVar1 = 0x113819d88;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      func_0x000100077ef8();
      uRam0000000113819d80 = uVar1;
      ___cxa_guard_release(0x113819d88);
    }
  }
  return 0x113819d80;
}



/* Entry: 1056395d0; end: 10563963f;  */

undefined8 FUN_1056395d0(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000113819d88 & 1) == 0) {
    uVar1 = 0x113819d88;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      func_0x000100077ef8();
      uRam0000000113819d80 = uVar1;
      ___cxa_guard_release(0x113819d88);
    }
  }
  return 0x113819d80;
}



/* Entry: 105639640; end: 10563998b;  */

void FUN_105639640(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  return;
}



/* Entry: 10563998c; end: 105639cbb;  */

void FUN_10563998c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar3;
  ulong uVar4;
  int extraout_w11;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  uint uStack_280;
  undefined1 uStack_278;
  long alStack_270 [10];
  long lStack_220;
  long lStack_218;
  undefined1 auStack_210 [8];
  ulong uStack_208;
  undefined1 auStack_200 [88];
  char cStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint uStack_e0;
  byte bStack_d8;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [96];
  int iStack_50;
  undefined8 uStack_48;
  
  func_0x00010563b6b8(param_2,param_2);
  uStack_48 = extraout_x8;
  func_0x00010bccbc98(alStack_270);
  lVar3 = *(long *)(alStack_270[0] + 8);
  lStack_218 = *(long *)(alStack_270[0] + 0x10);
  lStack_220 = lVar3;
  if (lStack_218 != 0) {
    do {
      func_0x00010563b788();
      lVar3 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  FUN_1056445b0(auStack_210,*(undefined8 *)(lVar3 + 0x10),param_3,param_4,param_5);
  uStack_138 = 0;
  uStack_130 = uStack_130 & 0xffffffffffffff00;
  bStack_d8 = 0;
  if (cStack_1a8 == '\0') {
    uVar4 = 0;
  }
  else {
    FUN_10563a924(&uStack_130,auStack_200);
    func_0x00010563a940(auStack_200);
    uVar4 = uStack_138;
  }
  uVar1 = uStack_208;
  uStack_140 = 0;
  uStack_138 = uStack_208;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_208 = uVar4;
  if ((bStack_d8 & 1) == 0) {
    func_0x00010563b7f8();
LAB_105639b18:
    uStack_278 = 0;
    uStack_2d0 = uStack_2d0 & 0xffffffffffffff00;
  }
  else {
    func_0x00010563b7f8();
    if (uVar1 == 0) goto LAB_105639b18;
    if ((bStack_d8 & 1) == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_d0,uStack_138 + 0x58);
      func_0x0001004c3cd0(&uStack_1a0,&UNK_10f2e0451,auStack_d0);
      func_0x00010563b7c0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_1a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
    }
    uStack_2c0 = uStack_120;
    uStack_2b8 = uStack_118;
    uStack_2c8 = uStack_128;
    uStack_2d0 = uStack_130;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_130 = 0;
    uStack_2a8 = uStack_108;
    uStack_2b0 = uStack_110;
    uStack_2a0 = uStack_100;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_290 = uStack_f0;
    uStack_298 = uStack_f8;
    uStack_288 = uStack_e8;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_278 = 1;
    uStack_280 = uStack_e0;
  }
  FUN_10563abd0(&uStack_130);
  FUN_10563aa44(auStack_210);
  FUN_10563aab8(&lStack_220);
  func_0x00010bccbe4c(alStack_270);
  func_0x00010bccbdb4(alStack_270);
  FUN_10563aae0(auStack_b0,&uStack_2d0);
  iStack_50 = 0;
  FUN_10563abd0(&uStack_2d0);
  uStack_138 = uStack_138 & 0xffffffffffffff00;
  uStack_e0 = uStack_e0 & 0xffffff00;
  if (iStack_50 == 0) {
    FUN_10563aae0(param_1,auStack_b0);
  }
  else {
    if (iStack_50 != 1) goto LAB_105639bc4;
    *param_1 = 0;
    param_1[0x58] = 0;
    in_ZR = 1;
  }
  FUN_10563abd0(&uStack_138);
  func_0x00010563b804();
  func_0x00010563b674(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_105639bc4:
  FUN_10563ab98();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x105639bcc);
  (*pcVar2)();
}



/* Entry: 105639cbc; end: 105639fab;  */

void FUN_105639cbc(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar4;
  ulong uVar5;
  int extraout_w11;
  undefined1 auStack_618 [256];
  undefined1 uStack_518;
  long alStack_510 [10];
  long lStack_4c0;
  long lStack_4b8;
  undefined1 auStack_4b0 [8];
  ulong uStack_4a8;
  undefined1 auStack_4a0 [256];
  char cStack_3a0;
  undefined1 auStack_398 [8];
  undefined1 auStack_390 [264];
  ulong uStack_288;
  undefined1 auStack_280 [248];
  undefined1 uStack_188;
  byte bStack_180;
  undefined1 auStack_178 [32];
  undefined1 auStack_158 [264];
  int iStack_50;
  undefined8 uStack_48;
  
  func_0x00010563b6b8(param_2,param_2);
  uStack_48 = extraout_x8;
  func_0x00010bccbc98(alStack_510);
  lVar4 = *(long *)(alStack_510[0] + 8);
  lStack_4b8 = *(long *)(alStack_510[0] + 0x10);
  lStack_4c0 = lVar4;
  if (lStack_4b8 != 0) {
    do {
      func_0x00010563b788();
      lVar4 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  FUN_105644688(auStack_4b0,*(undefined8 *)(lVar4 + 0x10),param_3,param_4,param_5);
  uStack_288 = 0;
  auStack_280[0] = 0;
  bStack_180 = 0;
  if (cStack_3a0 == '\0') {
    uVar5 = 0;
  }
  else {
    FUN_10563ac84(auStack_280,auStack_4a0);
    func_0x00010563aca0(auStack_4a0);
    uVar5 = uStack_288;
  }
  bVar2 = bStack_180;
  uVar1 = uStack_4a8;
  uStack_288 = uStack_4a8;
  uStack_4a8 = uVar5;
  _bzero(auStack_398,0x110);
  if ((bVar2 & 1) == 0) {
    FUN_10563afd4(auStack_390);
LAB_105639e08:
    uStack_518 = 0;
    auStack_618[0] = 0;
  }
  else {
    FUN_10563afd4(auStack_390);
    if (uVar1 == 0) goto LAB_105639e08;
    if ((bStack_180 & 1) == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_178,uStack_288 + 0x58);
      func_0x0001004c3cd0(auStack_398,&UNK_10f2e0451,auStack_178);
      func_0x00010563b7c0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_398);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
    }
    FUN_10563ad5c(auStack_618,auStack_280);
    uStack_518 = 1;
  }
  FUN_10563afd4(auStack_280);
  FUN_10563aedc(auStack_4b0);
  FUN_10563aab8(&lStack_4c0);
  func_0x00010bccbe4c(alStack_510);
  func_0x00010bccbdb4(alStack_510);
  FUN_10563af98(auStack_158,auStack_618);
  iStack_50 = 0;
  FUN_10563afd4(auStack_618);
  uStack_288 = uStack_288 & 0xffffffffffffff00;
  uStack_188 = 0;
  if (iStack_50 == 0) {
    FUN_10563af98(param_1,auStack_158);
  }
  else {
    if (iStack_50 != 1) goto LAB_105639eb4;
    *param_1 = 0;
    param_1[0x100] = 0;
    in_ZR = 1;
  }
  FUN_10563afd4(&uStack_288);
  func_0x00010563b7b4();
  func_0x00010563b674(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_105639eb4:
  FUN_10563ab98();
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x105639ebc);
  (*pcVar3)();
}



/* Entry: 105639fac; end: 10563a187;  */

mach_header *
FUN_105639fac(undefined8 param_1,mach_header *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  mach_header *pmVar6;
  uint uVar7;
  undefined8 extraout_x8;
  mach_header *extraout_x8_00;
  mach_header **ppmVar8;
  ulong uVar9;
  ulong extraout_x8_01;
  int extraout_w11;
  mach_header *pmVar10;
  mach_header *pmVar11;
  mach_header *pmVar12;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  code **ppcStack_1b0;
  mach_header *pmStack_1a8;
  code *pcStack_198;
  undefined **ppuStack_190;
  code ***pppcStack_188;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  mach_header *pmStack_150;
  mach_header *pmStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  mach_header amStack_128 [2];
  mach_header *pmStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  long lStack_c0;
  uint uStack_b8;
  byte bStack_b4;
  undefined1 auStack_b0 [8];
  mach_header *apmStack_a8 [11];
  int iStack_50;
  undefined8 uStack_48;
  
  func_0x00010563b6b8(param_1,param_1);
  uStack_48 = extraout_x8;
  func_0x00010bccbc98(amStack_128);
  pmVar12 = *(mach_header **)(amStack_128[0]._0_8_ + 8);
  lStack_d0 = *(long *)(amStack_128[0]._0_8_ + 0x10);
  pmStack_d8 = pmVar12;
  if (lStack_d0 != 0) {
    do {
      func_0x00010563b788();
      pmVar12 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  uVar5._0_4_ = pmVar12->ncmds;
  uVar5._4_4_ = pmVar12->sizeofcmds;
  FUN_105644600(auStack_c8,uVar5,param_2,param_3,param_4);
  bVar2 = bStack_b4;
  lVar1 = lStack_c0;
  if (bStack_b4 == 0) {
    pmVar12 = &MACH_HEADER;
  }
  else {
    bStack_b4 = 0;
    pmVar12 = (mach_header *)((ulong)uStack_b8 | 0x100000000);
  }
  lStack_c0 = 0;
  FUN_10563b044(auStack_c8);
  FUN_10563aab8(&pmStack_d8);
  func_0x00010bccbe4c(amStack_128);
  apmStack_a8[0] = pmVar12;
  if ((bVar2 & lVar1 != 0) == 0) {
    apmStack_a8[0] = (mach_header *)0x0;
  }
  func_0x00010bccbdb4(amStack_128);
  iStack_50 = 0;
  uVar9 = (ulong)pmStack_d8 >> 0x28;
  pmStack_d8._0_4_ = (uint)pmStack_d8 & 0xffffff00;
  pmStack_d8._0_5_ = (uint5)(uint)pmStack_d8;
  pmStack_d8 = (mach_header *)CONCAT35((int3)uVar9,(uint5)pmStack_d8);
LAB_10563a094:
  ppmVar8 = apmStack_a8;
  pmVar11 = param_2;
  do {
    pmVar10 = *ppmVar8;
    FUN_10563b074(apmStack_a8);
    uVar4 = ((ulong)pmVar10 & 0x100000000) == 0;
    uVar7 = 3;
    if (!(bool)uVar4) {
      uVar7 = (uint)pmVar10;
    }
    pmVar10 = (mach_header *)(ulong)uVar7;
    func_0x00010563b674(uStack_48);
    if ((bool)uVar4) {
      return pmVar10;
    }
    ___stack_chk_fail();
    if ((int)pmVar11 == 0) {
      param_2 = pmVar10;
      func_0x00010563b724();
      pmVar6 = pmVar11;
LAB_10563a184:
      func_0x00010563b764();
      lStack_158 = lVar1;
      pcStack_138 = FUN_10563a188;
      uStack_160 = param_5;
      pmStack_150 = pmVar12;
      pmStack_148 = pmVar10;
      puStack_140 = &stack0xfffffffffffffff0;
      func_0x00010563b6a4();
      pcStack_1c0 = FUN_105644844;
      uStack_1b8 = 0;
      ppcStack_1b0 = &pcStack_1c0;
      pcStack_198 = FUN_10563b0c8;
      ppuStack_190 = &PTR_FUN_1108a2728;
      pppcStack_188 = &ppcStack_1b0;
      pmVar10 = (mach_header *)&pcStack_198;
      pmStack_1a8 = pmVar6;
      func_0x00010bccc554();
      func_0x00010563b664();
      uVar9 = 0;
      pmVar11 = (mach_header *)0x1;
      break;
    }
    param_2 = amStack_128;
    pmVar6 = pmVar11;
    func_0x00010bccbdb4();
    uVar4 = (int)pmVar11 == 2;
    pmVar12 = pmVar11;
    if (!(bool)uVar4) goto LAB_10563a184;
    func_0x00010563b76c();
    pmVar12 = (mach_header *)auStack_b0;
    FUN_10563ab1c(apmStack_a8);
    iStack_50 = 1;
    ___cxa_end_catch();
    uVar9 = (ulong)pmStack_d8 >> 0x28;
    pmStack_d8._0_4_ = (uint)pmStack_d8 & 0xffffff00;
    pmStack_d8._0_5_ = (uint5)(uint)pmStack_d8;
    pmStack_d8 = (mach_header *)CONCAT35((int3)uVar9,(uint5)pmStack_d8);
    if (iStack_50 == 0) goto LAB_10563a094;
    if (iStack_50 != 1) {
      FUN_10563ab98();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10563a168);
      (*pcVar3)();
    }
    ppmVar8 = &pmStack_d8;
    pmVar11 = param_2;
  } while( true );
LAB_10563a1f8:
  func_0x00010563b7ec((&PTR_DAT_1108a2740)[uVar9 & 0xffffffff]);
LAB_10563a208:
  func_0x00010563b674(uStack_168);
  if ((bool)uVar4) {
    return pmVar11;
  }
  ___stack_chk_fail();
  pmVar11 = param_2;
  do {
    param_2 = pmVar11;
    if ((int)pmVar10 == 0) {
      do {
        func_0x00010563b724();
        func_0x00010563b774();
      } while ((int)pmVar12 == 0);
      func_0x00010563b664();
      uVar4 = (int)pmVar12 == 2;
      if ((bool)uVar4) break;
    }
    func_0x00010563b764();
    pmVar11 = param_2;
  } while( true );
  func_0x00010563b76c();
  pmVar10 = param_2;
  func_0x00010563b780();
  func_0x00010563b810();
  ___cxa_end_catch();
  func_0x00010563b714(0);
  uVar9 = extraout_x8_01;
  if (!(bool)uVar4) goto LAB_10563a1f8;
  goto LAB_10563a208;
}



/* Entry: 10563a188; end: 10563a26f;  */

code ** FUN_10563a188(code **param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  code **ppcVar1;
  ulong uVar2;
  ulong extraout_x8;
  code **ppcVar3;
  int unaff_w20;
  code *pcStack_90;
  undefined8 uStack_88;
  code **ppcStack_80;
  undefined8 uStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_38;
  
  func_0x00010563b6a4();
  pcStack_90 = FUN_105644844;
  uStack_88 = 0;
  ppcStack_80 = &pcStack_90;
  pcStack_68 = FUN_10563b0c8;
  ppuStack_60 = &PTR_FUN_1108a2728;
  ppuStack_58 = &ppcStack_80;
  ppcVar1 = &pcStack_68;
  uStack_78 = param_2;
  func_0x00010bccc554();
  func_0x00010563b664();
  uVar2 = 0;
  ppcVar3 = (code **)0x1;
LAB_10563a1f8:
  func_0x00010563b7ec((&PTR_DAT_1108a2740)[uVar2 & 0xffffffff]);
LAB_10563a208:
  func_0x00010563b674(uStack_38);
  if ((bool)in_ZR) {
    return ppcVar3;
  }
  ___stack_chk_fail();
  ppcVar3 = param_1;
  do {
    param_1 = ppcVar3;
    if ((int)ppcVar1 == 0) {
      do {
        func_0x00010563b724();
        func_0x00010563b774();
      } while (unaff_w20 == 0);
      func_0x00010563b664();
      in_ZR = unaff_w20 == 2;
      if ((bool)in_ZR) break;
    }
    func_0x00010563b764();
    ppcVar3 = param_1;
  } while( true );
  func_0x00010563b76c();
  ppcVar1 = param_1;
  func_0x00010563b780();
  func_0x00010563b810();
  ___cxa_end_catch();
  func_0x00010563b714(0);
  uVar2 = extraout_x8;
  if (!(bool)in_ZR) goto LAB_10563a1f8;
  goto LAB_10563a208;
}



/* Entry: 10563a270; end: 10563a357;  */

code ** FUN_10563a270(code **param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  code **ppcVar1;
  ulong uVar2;
  ulong extraout_x8;
  code **ppcVar3;
  int unaff_w20;
  code *pcStack_90;
  undefined8 uStack_88;
  code **ppcStack_80;
  undefined8 uStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_38;
  
  func_0x00010563b6a4();
  pcStack_90 = FUN_1056448fc;
  uStack_88 = 0;
  ppcStack_80 = &pcStack_90;
  pcStack_68 = FUN_10563b12c;
  ppuStack_60 = &PTR_FUN_1108a2750;
  ppuStack_58 = &ppcStack_80;
  ppcVar1 = &pcStack_68;
  uStack_78 = param_2;
  func_0x00010bccc554();
  func_0x00010563b664();
  uVar2 = 0;
  ppcVar3 = (code **)0x1;
LAB_10563a2e0:
  func_0x00010563b7ec((&PTR_DAT_1108a2768)[uVar2 & 0xffffffff]);
LAB_10563a2f0:
  func_0x00010563b674(uStack_38);
  if ((bool)in_ZR) {
    return ppcVar3;
  }
  ___stack_chk_fail();
  ppcVar3 = param_1;
  do {
    param_1 = ppcVar3;
    if ((int)ppcVar1 == 0) {
      do {
        func_0x00010563b724();
        func_0x00010563b774();
      } while (unaff_w20 == 0);
      func_0x00010563b664();
      in_ZR = unaff_w20 == 2;
      if ((bool)in_ZR) break;
    }
    func_0x00010563b764();
    ppcVar3 = param_1;
  } while( true );
  func_0x00010563b76c();
  ppcVar1 = param_1;
  func_0x00010563b780();
  func_0x00010563b810();
  ___cxa_end_catch();
  func_0x00010563b714(0);
  uVar2 = extraout_x8;
  if (!(bool)in_ZR) goto LAB_10563a2e0;
  goto LAB_10563a2f0;
}



/* Entry: 10563a358; end: 10563a477;  */

undefined1 *
FUN_10563a358(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong extraout_x8;
  undefined1 *puVar4;
  int unaff_w20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_10c;
  undefined1 auStack_108 [88];
  undefined4 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  code **ppcStack_98;
  undefined4 *puStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_38;
  
  uStack_10c = param_2;
  func_0x00010563b6a4();
  pcStack_a8 = FUN_1056446dc;
  uStack_a0 = 0;
  ppcStack_98 = &pcStack_a8;
  puStack_90 = &uStack_10c;
  puStack_88 = &uStack_118;
  pcStack_68 = FUN_10563b190;
  ppuStack_60 = &PTR_FUN_1108a2778;
  ppuStack_58 = &ppcStack_98;
  uStack_120 = param_4;
  uStack_118 = param_3;
  puStack_80 = (undefined1 *)&uStack_120;
  uStack_78 = param_5;
  func_0x00010bccc554();
  func_0x00010563b664();
  uVar3 = 0;
  uStack_b0 = 0;
  puVar4 = (undefined1 *)0x1;
LAB_10563a3e4:
  puVar1 = &uStack_69;
  puVar2 = auStack_108;
  (*(code *)(&PTR_DAT_1108a2790)[uVar3 & 0xffffffff])();
LAB_10563a3fc:
  func_0x00010563b674(uStack_38);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = puVar1;
  puVar1 = puVar2;
  do {
    puVar2 = puVar4;
    if ((int)puVar1 == 0) {
      do {
        func_0x00010563b724();
        func_0x00010563b774();
      } while (unaff_w20 == 0);
      func_0x00010563b664();
      in_ZR = unaff_w20 == 2;
      if ((bool)in_ZR) break;
    }
    func_0x00010563b764();
    puVar4 = puVar2;
  } while( true );
  func_0x00010563b76c();
  puVar1 = auStack_108;
  FUN_10563ab1c();
  uStack_b0 = 1;
  ___cxa_end_catch();
  func_0x00010563b714(uStack_b0);
  uVar3 = extraout_x8;
  if (!(bool)in_ZR) goto LAB_10563a3e4;
  goto LAB_10563a3fc;
}



/* Entry: 10563a478; end: 10563a583;  */

code ** FUN_10563a478(code **param_1,long param_2)

{
  undefined1 in_ZR;
  code **ppcVar1;
  code **ppcVar2;
  ulong uVar3;
  ulong extraout_x8;
  code **ppcVar4;
  int unaff_w20;
  long lStack_f8;
  code *apcStack_f0 [11];
  undefined4 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  code **ppcStack_80;
  long *plStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_38;
  
  func_0x00010563b6a4();
  lStack_f8 = param_2 / 1000;
  pcStack_90 = FUN_105644798;
  uStack_88 = 0;
  ppcStack_80 = &pcStack_90;
  plStack_78 = &lStack_f8;
  pcStack_68 = FUN_10563b204;
  ppuStack_60 = &PTR_FUN_1108a27a0;
  ppuStack_58 = &ppcStack_80;
  ppcVar1 = &pcStack_68;
  func_0x00010bccc554();
  func_0x00010563b664();
  uVar3 = 0;
  uStack_98 = 0;
  ppcVar4 = (code **)0x1;
LAB_10563a4f8:
  func_0x00010563b7e0((&PTR_DAT_1108a27b8)[uVar3 & 0xffffffff]);
LAB_10563a508:
  func_0x00010563b674(uStack_38);
  if ((bool)in_ZR) {
    return ppcVar4;
  }
  ___stack_chk_fail();
  ppcVar4 = param_1;
  ppcVar2 = ppcVar1;
  do {
    ppcVar1 = ppcVar4;
    if ((int)ppcVar2 == 0) {
      do {
        func_0x00010563b724();
        func_0x00010563b774();
      } while (unaff_w20 == 0);
      func_0x00010563b664();
      in_ZR = unaff_w20 == 2;
      if ((bool)in_ZR) break;
    }
    func_0x00010563b764();
    ppcVar4 = ppcVar1;
  } while( true );
  func_0x00010563b76c();
  param_1 = apcStack_f0;
  FUN_10563ab1c();
  uStack_98 = 1;
  ___cxa_end_catch();
  func_0x00010563b714(uStack_98);
  uVar3 = extraout_x8;
  if (!(bool)in_ZR) goto LAB_10563a4f8;
  goto LAB_10563a508;
}



/* Entry: 10563a584; end: 10563a67b;  */

undefined1 * FUN_10563a584(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong extraout_x8;
  undefined1 *puVar4;
  int unaff_w20;
  undefined1 auStack_e8 [88];
  undefined4 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  code **ppcStack_78;
  undefined1 uStack_69;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_38;
  
  func_0x00010563b6a4();
  pcStack_88 = FUN_1056447bc;
  uStack_80 = 0;
  ppcStack_78 = &pcStack_88;
  pcStack_68 = FUN_10563b26c;
  ppuStack_60 = &PTR_FUN_1108a27c8;
  ppuStack_58 = &ppcStack_78;
  func_0x00010bccc554();
  func_0x00010563b664();
  uVar3 = 0;
  uStack_90 = 0;
  puVar4 = (undefined1 *)0x1;
LAB_10563a5f4:
  puVar1 = &uStack_69;
  puVar2 = auStack_e8;
  (*(code *)(&PTR_DAT_1108a27e0)[uVar3 & 0xffffffff])();
LAB_10563a60c:
  func_0x00010563b674(uStack_38);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  puVar4 = puVar1;
  puVar1 = puVar2;
  do {
    puVar2 = puVar4;
    if ((int)puVar1 == 0) {
      do {
        func_0x00010563b724();
        func_0x00010563b774();
      } while (unaff_w20 == 0);
      func_0x00010563b664();
      in_ZR = unaff_w20 == 2;
      if ((bool)in_ZR) break;
    }
    func_0x00010563b764();
    puVar4 = puVar2;
  } while( true );
  func_0x00010563b76c();
  puVar1 = auStack_e8;
  FUN_10563ab1c();
  uStack_90 = 1;
  ___cxa_end_catch();
  func_0x00010563b714(uStack_90);
  uVar3 = extraout_x8;
  if (!(bool)in_ZR) goto LAB_10563a5f4;
  goto LAB_10563a60c;
}



/* Entry: 10563a67c; end: 10563a787;  */

code ** FUN_10563a67c(code **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  code **ppcVar1;
  code **ppcVar2;
  ulong uVar3;
  ulong extraout_x8;
  code **ppcVar4;
  int unaff_w20;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *apcStack_100 [11];
  undefined4 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  code **ppcStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_38;
  
  func_0x00010563b6a4();
  pcStack_a0 = FUN_1056447c4;
  uStack_98 = 0;
  ppcStack_90 = &pcStack_a0;
  puStack_88 = &uStack_108;
  pcStack_68 = FUN_10563b2dc;
  ppuStack_60 = &PTR_FUN_1108a27f0;
  ppuStack_58 = &ppcStack_90;
  ppcVar1 = &pcStack_68;
  uStack_110 = param_3;
  uStack_108 = param_2;
  puStack_80 = (undefined1 *)&uStack_110;
  uStack_78 = param_4;
  func_0x00010bccc554();
  func_0x00010563b664();
  uVar3 = 0;
  uStack_a8 = 0;
  ppcVar4 = (code **)0x1;
LAB_10563a6fc:
  func_0x00010563b7e0((&PTR_DAT_1108a2808)[uVar3 & 0xffffffff]);
LAB_10563a70c:
  func_0x00010563b674(uStack_38);
  if ((bool)in_ZR) {
    return ppcVar4;
  }
  ___stack_chk_fail();
  ppcVar4 = param_1;
  ppcVar2 = ppcVar1;
  do {
    ppcVar1 = ppcVar4;
    if ((int)ppcVar2 == 0) {
      do {
        func_0x00010563b724();
        func_0x00010563b774();
      } while (unaff_w20 == 0);
      func_0x00010563b664();
      in_ZR = unaff_w20 == 2;
      if ((bool)in_ZR) break;
    }
    func_0x00010563b764();
    ppcVar4 = ppcVar1;
  } while( true );
  func_0x00010563b76c();
  param_1 = apcStack_100;
  FUN_10563ab1c();
  uStack_a8 = 1;
  ___cxa_end_catch();
  func_0x00010563b714(uStack_a8);
  uVar3 = extraout_x8;
  if (!(bool)in_ZR) goto LAB_10563a6fc;
  goto LAB_10563a70c;
}



/* Entry: 10563a788; end: 10563a8a3;  */

void FUN_10563a788(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_b0 [88];
  undefined4 uStack_58;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined8 auStack_48 [3];
  
  *param_1 = 0;
  uStack_4c = 0;
  uStack_4d = 0;
  FUN_10563b3a8(auStack_48,param_2,&uStack_4c,&uStack_4d,&uStack_4e);
  uVar1 = auStack_48[0];
  auStack_48[0] = 0;
  FUN_10563b370(param_1,uVar1);
  FUN_10563b34c(auStack_48);
  uStack_58 = 0;
  FUN_10563a8a4(auStack_b0);
  return;
}



/* Entry: 10563a8a4; end: 10563a8e3;  */

void FUN_10563a8a4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010563b798();
  if (!(bool)in_ZR) {
    func_0x00010563b6e8((&PTR_DAT_1108a2708)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x58) = 0xffffffff;
  return;
}



/* Entry: 10563a8e4; end: 10563a923;  */

void FUN_10563a8e4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010563b798();
  if (!(bool)in_ZR) {
    func_0x00010563b6e8((&PTR_DAT_1108a2718)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x58) = 0xffffffff;
  return;
}



/* Entry: 10563a924; end: 10563a963;  */

void FUN_10563a924(long param_1)

{
  FUN_10563a9b0();
  *(undefined1 *)(param_1 + 0x58) = 1;
  return;
}



/* Entry: 10563a964; end: 10563a9af;  */

long FUN_10563a964(long param_1,long param_2)

{
  func_0x000100066230();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  func_0x000100066230(param_1 + 0x20,param_2 + 0x20);
  func_0x00010065acbc(param_1 + 0x38,param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  return param_1;
}



/* Entry: 10563a9b0; end: 10563aa13;  */

void FUN_10563a9b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = param_2[3];
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  return;
}



/* Entry: 10563aa14; end: 10563aa43;  */

void FUN_10563aa14(long param_1)

{
  func_0x000100100fec(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10563aa44; end: 10563aab7;  */

undefined8 * FUN_10563aa44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
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
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  param_1[1] = 0;
  if (*(char *)(param_1 + 0xd) != '\0') {
    func_0x00010563a940(param_1 + 2);
  }
  FUN_10563abd0((ulong)&uStack_90 | 8);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x00010054cac4(uVar1);
  FUN_10563abd0(param_1 + 2);
  return param_1;
}



/* Entry: 10563aab8; end: 10563aadf;  */

long FUN_10563aab8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10563aae0; end: 10563ab1b;  */

undefined1 * FUN_10563aae0(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x58] = 0;
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_10563a924(param_1);
  }
  return param_1;
}



/* Entry: 10563ab1c; end: 10563ab97;  */

void FUN_10563ab1c(undefined8 *param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010563b774();
  *param_1 = &PTR_FUN_110d99b08;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 2,param_2 + 0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x28,unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined1 *)(unaff_x19 + 0x50) = *(undefined1 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
  return;
}



/* Entry: 10563ab98; end: 10563abcb;  */

void FUN_10563ab98(void)

{
  long *plVar1;
  
  plVar1 = (long *)0x8;
  ___cxa_allocate_exception();
  *plVar1 = (long)(PTR___ZTVSt18bad_variant_access_110346b70 + 0x10);
  ___cxa_throw();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10563abcc; end: 10563abcf;  */

void FUN_10563abcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10563abd0; end: 10563abef;  */

void FUN_10563abd0(long param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_10563aa14();
  }
  return;
}



/* Entry: 10563abf0; end: 10563ac33;  */

void FUN_10563abf0(long param_1)

{
  if (*(uint *)(param_1 + 0x60) != 0xffffffff) {
    func_0x00010563b6e8((&PTR_FUN_1108a26d8)[*(uint *)(param_1 + 0x60)]);
  }
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  return;
}



/* Entry: 10563ac34; end: 10563ac3f;  */

void FUN_10563ac34(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_10563aa14();
  }
  return;
}



/* Entry: 10563ac40; end: 10563ac83;  */

void FUN_10563ac40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d99b08;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 10563ac84; end: 10563acc3;  */

void FUN_10563ac84(long param_1)

{
  FUN_10563ad5c();
  *(undefined1 *)(param_1 + 0x100) = 1;
  return;
}



/* Entry: 10563acc4; end: 10563ad5b;  */

undefined8 * FUN_10563acc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  func_0x000100066230(param_1 + 2,param_2 + 2);
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000100066230(param_1 + 7,param_2 + 7);
  func_0x0001002a8208(param_1 + 10,param_2 + 10);
  func_0x0001002a8208(param_1 + 0xe,param_2 + 0xe);
  func_0x000100066230(param_1 + 0x12,param_2 + 0x12);
  param_1[0x15] = param_2[0x15];
  func_0x000100066230(param_1 + 0x16,param_2 + 0x16);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  func_0x000100066230(param_1 + 0x1a,param_2 + 0x1a);
  func_0x000100066230(param_1 + 0x1d,param_2 + 0x1d);
  return param_1;
}



/* Entry: 10563ad5c; end: 10563ae7f;  */

void FUN_10563ad5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[2] = 0;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar2 = param_2[8];
  uVar1 = param_2[7];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (*(char *)(param_2 + 0xd) == '\x01') {
    uVar2 = param_2[0xb];
    uVar1 = param_2[10];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar2;
    param_1[10] = uVar1;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[10] = 0;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (*(char *)(param_2 + 0x11) == '\x01') {
    uVar2 = param_2[0xf];
    uVar1 = param_2[0xe];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar2;
    param_1[0xe] = uVar1;
    param_2[0xf] = 0;
    param_2[0x10] = 0;
    param_2[0xe] = 0;
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x12] = 0;
  param_1[0x15] = param_2[0x15];
  uVar2 = param_2[0x17];
  uVar1 = param_2[0x16];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar2;
  param_1[0x16] = uVar1;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x16] = 0;
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  uVar2 = param_2[0x1b];
  uVar1 = param_2[0x1a];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar2;
  param_1[0x1a] = uVar1;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1a] = 0;
  uVar2 = param_2[0x1e];
  uVar1 = param_2[0x1d];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x1e] = uVar2;
  param_1[0x1d] = uVar1;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1d] = 0;
  return;
}



/* Entry: 10563ae80; end: 10563aedb;  */

long FUN_10563ae80(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x90);
  func_0x0001001148fc(param_1 + 0x70);
  func_0x0001001148fc(param_1 + 0x50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x38);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x10);
  return param_1;
}



/* Entry: 10563aedc; end: 10563af4b;  */

undefined8 * FUN_10563aedc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [264];
  
  _bzero(auStack_140,0x110);
  param_1[1] = 0;
  FUN_10563af4c(param_1 + 2,auStack_138);
  FUN_10563afd4(auStack_138);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x00010054cac4(uVar1);
  FUN_10563afd4(param_1 + 2);
  return param_1;
}



/* Entry: 10563af4c; end: 10563af6f;  */

undefined8 FUN_10563af4c(undefined8 param_1)

{
  FUN_10563af70();
  return param_1;
}



/* Entry: 10563af70; end: 10563af97;  */

undefined8 * FUN_10563af70(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 != *(char *)(param_2 + 0x20)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x20) == '\x01') {
        FUN_10563ae80();
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      return param_1;
    }
    FUN_10563ad5c();
    *(undefined1 *)(param_1 + 0x20) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    func_0x000100066230(param_1 + 2,param_2 + 2);
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    func_0x000100066230(param_1 + 7,param_2 + 7);
    func_0x0001002a8208(param_1 + 10,param_2 + 10);
    func_0x0001002a8208(param_1 + 0xe,param_2 + 0xe);
    func_0x000100066230(param_1 + 0x12,param_2 + 0x12);
    param_1[0x15] = param_2[0x15];
    func_0x000100066230(param_1 + 0x16,param_2 + 0x16);
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
    func_0x000100066230(param_1 + 0x1a,param_2 + 0x1a);
    func_0x000100066230(param_1 + 0x1d,param_2 + 0x1d);
    return param_1;
  }
  return param_1;
}



/* Entry: 10563af98; end: 10563afd3;  */

undefined1 * FUN_10563af98(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x100] = 0;
  if (*(char *)(param_2 + 0x100) == '\x01') {
    FUN_10563ac84(param_1);
  }
  return param_1;
}



/* Entry: 10563afd4; end: 10563aff3;  */

void FUN_10563afd4(long param_1)

{
  if (*(char *)(param_1 + 0x100) == '\x01') {
    FUN_10563ae80();
  }
  return;
}



/* Entry: 10563aff4; end: 10563b037;  */

void FUN_10563aff4(long param_1)

{
  if (*(uint *)(param_1 + 0x108) != 0xffffffff) {
    func_0x00010563b6e8((&PTR_FUN_1108a26e8)[*(uint *)(param_1 + 0x108)]);
  }
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  return;
}


