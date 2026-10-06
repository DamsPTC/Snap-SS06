/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053ac2e0; end: 1053ac403;  */

void FUN_1053ac2e0(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x21;
  undefined1 auStack_58 [24];
  
  func_0x000100c1bfec();
  func_0x000100c1c128();
  if ((int)param_1 == 0) {
    func_0x0001053ada00();
    func_0x0001053ad9ac();
    func_0x0001053ada24();
    func_0x0001053ad9d8();
    func_0x0001053adbd8();
    func_0x0001053ad998();
    func_0x0001053ada50();
    func_0x000100c218b8();
    func_0x0001053ada58();
  }
  else {
    func_0x000100c1fb54();
    lVar1 = *(long *)(unaff_x21 + 8);
    func_0x000100c1fb64();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_FUN_1108816c0;
    if (lVar1 != 0) {
      do {
        func_0x000100c1fb6c();
      } while (extraout_w10 != 0);
      do {
        func_0x000100c1fb6c();
      } while (extraout_w10_00 != 0);
    }
    func_0x000100c1fb7c();
    func_0x000100c1fb88(&PTR_DAT_110881710);
    func_0x000100c1fba0();
    func_0x000100601d8c();
    func_0x000100c22014();
    func_0x0001053adc04();
    FUN_1053ad974(auStack_58);
    func_0x000100c22040();
  }
  func_0x000100c22048();
  return;
}



/* Entry: 1053ac404; end: 1053ac43f;  */

void FUN_1053ac404(void)

{
  func_0x0001053add14();
  return;
}



/* Entry: 1053ac440; end: 1053ac443;  */

void FUN_1053ac440(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110881248;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053ac444; end: 1053ac457;  */

void FUN_1053ac444(void)

{
  FUN_1053acd34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053ac458; end: 1053ac46f;  */

void FUN_1053ac458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100c21ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1053ac470; end: 1053ac6d7;  */

void FUN_1053ac470(long param_1)

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
  
  func_0x000100c1fbbc();
  func_0x000100c7d130();
  FUN_1053942a8(auStack_1c8,param_1 + 0x1b0);
  FUN_105394678(alStack_10,auStack_1c8);
  func_0x000100561e48(auStack_1c8);
  if ((alStack_10[0] == 0) || (*(char *)(alStack_10[0] + 0x34) == '\x01')) {
    func_0x00010002b838(auStack_c8,"Service disposed");
    func_0x0001053ada60(auStack_1c8);
    func_0x0001053adb00();
    func_0x0001053ad9c8();
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
      func_0x000100c1fd24(auStack_2c8,unaff_x20 + 0xb8);
      func_0x000100c1fec8(alStack_10[0],auStack_2c8,unaff_x20 + 0x198,auStack_1c8,auStack_c8,
                          unaff_x20 + 0x1a0);
      func_0x000100609698(auStack_2b8);
      func_0x00010060867c(auStack_1c8);
      func_0x0001006038cc(auStack_c8);
      goto LAB_100c21f80;
    }
    func_0x00010002b838(auStack_c8,"Request cancelled");
    func_0x0001053ada60(auStack_1c8);
    func_0x0001053adb00();
    func_0x0001053ad9c8();
  }
  func_0x000100601c8c(auStack_1c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
LAB_100c21f80:
  FUN_1053947d8(alStack_10);
  return;
}



/* Entry: 1053ac6d8; end: 1053ac6db;  */

undefined8 * FUN_1053ac6d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108812b0;
  func_0x0001006038cc(param_1 + 0xb);
  func_0x000100c21e50(param_1 + 9);
  (**(code **)param_1[4])();
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 1053ac6dc; end: 1053ac6ef;  */

void FUN_1053ac6dc(void)

{
  FUN_1053acb3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053ac6f0; end: 1053ac9ab;  */

void FUN_1053ac6f0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x8_03;
  long unaff_x19;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [48];
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long *plStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [16];
  long alStack_188 [32];
  undefined8 uStack_88;
  undefined1 auStack_80 [40];
  undefined8 uStack_58;
  
  func_0x000100c20184();
  uStack_58 = extraout_x8;
  if (((*(byte *)(param_1 + 0x110) & 1) == 0) &&
     (((*(byte **)(param_2 + 0xf0) == (byte *)0x0 || ((**(byte **)(param_2 + 0xf0) & 1) == 0)) &&
      (uVar4 = param_3, func_0x00010b28236c(param_3,unaff_x19 + 0x58), (int)uVar4 != 0)))) {
    (**(code **)(**(long **)(unaff_x19 + 0x48) + 0x48))(*(long **)(unaff_x19 + 0x48),param_3);
    param_4 = unaff_x19 + 0x58;
    FUN_105394aac();
    param_3 = *(undefined8 *)(unaff_x19 + 8);
    func_0x0001006099c0(alStack_188,param_2);
    uStack_88 = *(undefined8 *)(unaff_x19 + 0x18);
    puVar5 = auStack_80;
    func_0x000100c208e0(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x10),puVar5);
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_1053acb94(auStack_198,param_3,alStack_188,puVar5 + param_4 * 1000000);
    func_0x000100688f2c(auStack_198);
    plVar6 = alStack_188;
    func_0x0001053acd04();
  }
  else {
    __ZNSt3__19to_stringEi(&uStack_1c8,param_4);
    func_0x000105394cb8(alStack_188,&PTR_s_fromServer_110881318,&uStack_1c8);
    func_0x000100607634(auStack_1b0,alStack_188,1);
    func_0x0001053adba4();
    func_0x000100c218b8();
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    in_ZR = *(char *)(param_2 + 0x90) == '\x01';
    if ((bool)in_ZR) {
      func_0x0001053adb90();
      func_0x00010082a8bc(&uStack_1c8,alStack_188);
      func_0x0001053adba4();
      func_0x0001053adb90();
      func_0x00010082a8bc(auStack_1b0,alStack_188);
      func_0x0001053adba4();
    }
    puVar2 = puRam000000011383a240;
    if (puRam000000011383a240 != (undefined8 *)0x0) {
      func_0x0001008342d4(alStack_188,auStack_1b0);
      func_0x0001053adc58(*(undefined8 *)*puVar2);
      (*extraout_x8_00)();
      func_0x0001053adc0c();
    }
    puVar2 = puRam000000011383a240;
    if (puRam000000011383a240 != (undefined8 *)0x0) {
      func_0x0001053adc8c();
      func_0x0001053adc58(*(undefined8 *)*puVar2);
      (*extraout_x8_01)();
      func_0x0001053adc0c();
    }
    puVar2 = puRam000000011383a240;
    if (puRam000000011383a240 != (undefined8 *)0x0) {
      func_0x0001053adc8c();
      func_0x0001053adc58(*(undefined8 *)*puVar2);
      (*extraout_x8_02)();
      func_0x0001053adc0c();
    }
    func_0x000100835b80(0x21,param_2,0,&uStack_1c8);
    plVar6 = *(long **)(unaff_x19 + 0x48);
    (**(code **)(*plVar6 + 0x30))(plVar6,param_2,param_3,param_4);
    func_0x0001053adbfc();
    func_0x0001053adc14();
  }
  func_0x000100c204fc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001053acd04(alStack_188);
  func_0x0001053ad9f8();
  pcStack_1d8 = FUN_1053ac9ac;
  lStack_200 = param_4;
  uStack_1f8 = param_3;
  lStack_1f0 = param_2;
  plStack_1e8 = plVar6;
  puStack_1e0 = &stack0xfffffffffffffff0;
  func_0x000100c7d130();
  func_0x000100c20054();
  uStack_208 = extraout_x8_03;
  func_0x000100835948(auStack_238,&PTR_s_fromServer_110881318,"1");
  func_0x000100607634(auStack_250,auStack_238,1);
  func_0x0001053adbac();
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  uVar3 = (char)plVar6[0x12] == '\x01';
  if ((bool)uVar3) {
    func_0x0001053adb7c();
    func_0x00010082a8bc(&uStack_268,auStack_238);
    func_0x0001053adbac();
    func_0x0001053adb7c();
    func_0x00010082a8bc(auStack_250,auStack_238);
    func_0x0001053adbac();
  }
  puVar2 = puRam000000011383a240;
  if (puRam000000011383a240 != (undefined8 *)0x0) {
    func_0x0001053adcdc();
    (**(code **)*puVar2)(puVar2,0x1f,plVar6 + 0x14,0,auStack_238);
    func_0x0001053adcd4();
  }
  puVar2 = puRam000000011383a240;
  if (puRam000000011383a240 != (undefined8 *)0x0) {
    iVar1 = *(int *)(param_2 + 0x5c);
    func_0x0001053adcdc();
    (**(code **)*puVar2)(puVar2,0x22,plVar6 + 0x14,(long)iVar1,auStack_238);
    func_0x0001053adcd4();
  }
  func_0x000100835b80(0x21,plVar6,1,&uStack_268);
  func_0x000100c208e0(*(undefined8 *)(**(long **)(param_2 + 0x48) + 0x40));
  func_0x0001053adbfc();
  func_0x0001053adc14();
  func_0x000100c204fc(uStack_208);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001053adbac();
  func_0x0001053adbfc();
  func_0x0001053adc14();
  func_0x0001053ad9f8();
  return;
}



/* Entry: 1053ac9ac; end: 1053acb37;  */

void FUN_1053ac9ac(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  
  func_0x000100c7d130();
  func_0x000100c20054();
  uStack_38 = extraout_x8;
  func_0x000100835948(auStack_68,&PTR_s_fromServer_110881318,"1");
  func_0x000100607634(auStack_80,auStack_68,1);
  func_0x0001053adbac();
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uVar3 = *(char *)(unaff_x19 + 0x90) == '\x01';
  if ((bool)uVar3) {
    func_0x0001053adb7c();
    func_0x00010082a8bc(&uStack_98,auStack_68);
    func_0x0001053adbac();
    func_0x0001053adb7c();
    func_0x00010082a8bc(auStack_80,auStack_68);
    func_0x0001053adbac();
  }
  puVar2 = puRam000000011383a240;
  if (puRam000000011383a240 != (undefined8 *)0x0) {
    func_0x0001053adcdc();
    (**(code **)*puVar2)(puVar2,0x1f,unaff_x19 + 0xa0,0,auStack_68);
    func_0x0001053adcd4();
  }
  puVar2 = puRam000000011383a240;
  if (puRam000000011383a240 != (undefined8 *)0x0) {
    iVar1 = *(int *)(unaff_x20 + 0x5c);
    func_0x0001053adcdc();
    (**(code **)*puVar2)(puVar2,0x22,unaff_x19 + 0xa0,(long)iVar1,auStack_68);
    func_0x0001053adcd4();
  }
  func_0x000100835b80(0x21);
  func_0x000100c208e0(*(undefined8 *)(**(long **)(unaff_x20 + 0x48) + 0x40));
  func_0x0001053adbfc();
  func_0x0001053adc14();
  func_0x000100c204fc(uStack_38);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001053adbac();
  func_0x0001053adbfc();
  func_0x0001053adc14();
  func_0x0001053ad9f8();
  return;
}



/* Entry: 1053acb38; end: 1053acb3b;  */

void FUN_1053acb38(void)

{
  return;
}



/* Entry: 1053acb3c; end: 1053acb93;  */

undefined8 * FUN_1053acb3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108812b0;
  func_0x0001006038cc(param_1 + 0xb);
  func_0x000100c21e50(param_1 + 9);
  (**(code **)param_1[4])();
  func_0x000100450be4(param_1 + 1);
  return param_1;
}



/* Entry: 1053acb94; end: 1053acc1b;  */

undefined8 *
FUN_1053acb94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined1 auStack_98 [8];
  undefined8 auStack_90 [11];
  undefined8 uStack_38;
  
  func_0x000100c20054();
  uStack_38 = extraout_x8;
  FUN_1053acc1c(auStack_98);
  func_0x00010bcce9b8(param_1,param_2,auStack_98,param_4);
  func_0x000100c204d0();
  puVar1 = auStack_90;
  (*extraout_x8_00)();
  func_0x000100c204fc(uStack_38);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000100c204d0();
  puVar1 = auStack_90;
  (*extraout_x8_01)();
  func_0x0001053ad9f8();
  *puVar1 = 0x1053acc48;
  func_0x0001053acc58(puVar1 + 1);
  return puVar1;
}



/* Entry: 1053acc1c; end: 1053acc47;  */

undefined8 * FUN_1053acc1c(undefined8 *param_1)

{
  *param_1 = 0x1053acc48;
  func_0x0001053acc58(param_1 + 1);
  return param_1;
}



/* Entry: 1053acc48; end: 1053acc67;  */

void FUN_1053acc48(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001053acc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x100))(lVar1,lVar1 + 0x100);
  return;
}



/* Entry: 1053acc68; end: 1053acc87;  */

void FUN_1053acc68(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001053acd04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053acc88; end: 1053acc8b;  */

void FUN_1053acc88(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1053acc8c; end: 1053accc7;  */

void FUN_1053acc8c(void)

{
  func_0x000100c202b8();
  __Znwm(0x130);
  FUN_1053accc8();
  func_0x000100c203d0();
  return;
}



/* Entry: 1053accc8; end: 1053acd33;  */

void FUN_1053accc8(long param_1)

{
  long unaff_x19;
  
  func_0x000100c7d130();
  func_0x0001006099c0();
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(unaff_x19 + 0x100);
  (**(code **)(*(long *)(unaff_x19 + 0x108) + 0x10))(param_1 + 0x108,unaff_x19 + 0x108);
  return;
}



/* Entry: 1053acd34; end: 1053acd43;  */

void FUN_1053acd34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110881248;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053acd44; end: 1053acda3;  */

void FUN_1053acd44(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined8 auStack_88 [12];
  undefined8 uStack_28;
  
  func_0x000100c20184();
  puVar1 = auStack_88;
  uStack_28 = extraout_x8;
  FUN_1053ad1ec();
  func_0x0001053adc48(*(undefined8 *)(*unaff_x19 + 0x10));
  func_0x0001053ad9e8();
  func_0x000100c204fc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001053ad9e8();
  func_0x0001053ad9f8();
  *puVar1 = &PTR_FUN_110881350;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053acda4; end: 1053acda7;  */

void FUN_1053acda4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110881350;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053acda8; end: 1053acdcf;  */

void FUN_1053acda8(void)

{
  FUN_1053ad1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053acdd0; end: 1053ace2f;  */

long * FUN_1053acdd0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  long alStack_88 [12];
  undefined8 uStack_28;
  
  func_0x000100c20184();
  plVar2 = alStack_88;
  uStack_28 = extraout_x8;
  FUN_1053acf84();
  func_0x0001053adc48(*(undefined8 *)(*unaff_x19 + 0x10));
  func_0x0001053ad9e8();
  func_0x000100c204fc(uStack_28);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  func_0x0001053ad9e8();
  func_0x0001053ad9f8();
  if (*(long *)(*plVar2 + 0x18) != 0) {
    plVar1 = *(long **)(*plVar2 + 0x18);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000105394e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))();
      return plVar1;
    }
    func_0x000104bfeb48(0,plVar2[1]);
    plVar2 = plVar1;
    func_0x00010060d428();
    func_0x00010061cd5c(plVar2 + 0x65);
    *plVar1 = (long)&PTR_DAT_11087ffd8;
    if (plVar1[0x22] != 0) {
      func_0x000100836a88(plVar1[0x22],plVar1 + 0x24);
    }
    func_0x000100601aa4(plVar1 + 99);
    func_0x000100601c8c(plVar1 + 0x5c);
    func_0x000100836b24(plVar1 + 0x24);
    func_0x00010060867c(plVar1 + 4);
    *plVar1 = (long)&PTR_DAT_110880018;
    func_0x000100450be4(plVar1 + 1);
    return plVar1;
  }
  plVar1 = *(long **)plVar2[2];
                    /* WARNING: Could not recover jumptable at 0x0001053ace60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,plVar2[1],param_2,0);
  return plVar1;
}



/* Entry: 1053ace30; end: 1053ace67;  */

long * FUN_1053ace30(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(long *)(*param_1 + 0x18) == 0) {
    plVar2 = *(long **)param_1[2];
                    /* WARNING: Could not recover jumptable at 0x0001053ace60. Too many branches */
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



/* Entry: 1053ace68; end: 1053ace7b;  */

void FUN_1053ace68(void)

{
  FUN_1053acefc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053ace7c; end: 1053acefb;  */

void FUN_1053ace7c(long param_1)

{
  func_0x0001053adc78(param_1,"Service was shutdown");
  func_0x0001053add4c();
  func_0x0001053ada60();
  func_0x0001053adb00();
  func_0x0001053adc68();
  func_0x0001053adadc();
  func_0x0001053adb44();
  func_0x0001053adad4();
  FUN_1053acf5c(param_1 + 0x330);
  *(undefined4 *)(param_1 + 0x324) = 2;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1053acefc; end: 1053acf5b;  */

undefined8 * FUN_1053acefc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000100c2183c();
  func_0x0001053acf30(puVar1 + 0x68);
  func_0x000100c21e50(param_1 + 0x66);
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



/* Entry: 1053acf5c; end: 1053acf83;  */

void FUN_1053acf5c(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000100c21e50(&uStack_20);
  return;
}



/* Entry: 1053acf84; end: 1053acfaf;  */

undefined8 * FUN_1053acf84(undefined8 *param_1)

{
  *param_1 = 0x1053acfb0;
  func_0x0001053acfb8(param_1 + 1);
  return param_1;
}



/* Entry: 1053acfb0; end: 1053acfc7;  */

void FUN_1053acfb0(double param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [192];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar5 = *(long **)(param_2 + 0x10);
  plStack_58 = plVar5 + 0x30;
  plVar4 = plVar5 + 0x34;
  plStack_50 = plVar4;
  plStack_48 = plVar5 + 9;
  func_0x00010007847c(auStack_70,"grpc::grpcService::makeGRPCCall");
  if (*(char *)(*plVar5 + 0x34) == '\x01') {
    if ((char)plVar5[0x57] == '\x01') {
      func_0x0001053add00();
    }
    else {
      func_0x0001053adcf4();
    }
    func_0x00010002b838(&uStack_100,"Service disposed");
    func_0x0001053ada60(auStack_1f0);
    func_0x0001053adb30();
  }
  else {
    func_0x000100467380(0);
    func_0x00010046778c();
    func_0x000100467768();
    func_0x0001004a2704(plVar5 + 0x54,(long)param_1);
    iVar2 = (int)plVar5 + 0x10;
    func_0x0001004a4bf8();
    if (iVar2 == 0) {
      func_0x000107c60c94(&uStack_118,plVar5 + 0x54);
      func_0x00010046985c(auStack_1f0,*(long *)(*plVar5 + 0x18) + 0x80);
      func_0x00010048a5b8(&uStack_130,auStack_1f0);
      uVar1 = *(undefined4 *)(*plVar5 + 0xa0);
      func_0x00010002b838(&uStack_208,"unknown");
      func_0x00010002b838(&uStack_220,"");
      uStack_f0 = uStack_108;
      uStack_88 = uStack_210;
      uStack_f8 = uStack_110;
      uStack_100 = uStack_118;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_e0 = uStack_128;
      uStack_e8 = uStack_130;
      uStack_d8 = uStack_120;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_c0 = uStack_200;
      uStack_c8 = uStack_208;
      uStack_b8 = uStack_1f8;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_b0 = 0;
      uStack_9c = 0xffffffff;
      uStack_a4 = 0xffffffffffffffff;
      uStack_ac = 0xffffffffffffffff;
      uStack_90 = uStack_218;
      uStack_98 = uStack_220;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_80 = 0;
      uStack_d0 = uVar1;
      func_0x000107c60ca0(&uStack_220);
      func_0x000107c60ca0(&uStack_208);
      func_0x000107c60ca0(&uStack_130);
      func_0x000100469c34(auStack_1f0);
      func_0x000107c60ca0(&uStack_118);
      plVar4 = plVar5 + 2;
      func_0x000107c2bfa4(plVar4);
      if ((char)plVar5[0x57] == '\x01') {
        func_0x000107c2bfac(plVar5 + 0x54,plVar4);
        func_0x0001053add6c();
        func_0x000107c2bfb8();
      }
      else {
        func_0x000107c2bfb0(plVar5 + 0x54,plVar4);
        func_0x0001053add6c();
        func_0x000107c2bfc0();
      }
      func_0x000100c218b0();
      func_0x000105394120(auStack_1f0,plVar4,auStack_238);
      func_0x0001053adb30();
      func_0x0001053adc2c();
      func_0x000100c218b8();
      func_0x000100bf5670(&uStack_100);
      goto code_r0x000100c213e0;
    }
    if (*(long *)(*plVar5 + 0x68) != 0) {
      plVar3 = (long *)plVar5[9];
      (**(code **)(*plVar3 + 0x20))(plVar3,plVar4);
      func_0x000100c214fc(plVar5 + 0xb,plVar5 + 2,(long)param_1,plVar4);
      goto code_r0x000100c213e0;
    }
    if ((char)plVar5[0x57] == '\x01') {
      func_0x0001053add00();
    }
    else {
      func_0x0001053adcf4();
    }
    func_0x00010002b838(&uStack_100,"Resources aren\'t ready");
    func_0x0001053ada60(auStack_1f0);
    func_0x0001053adb30();
  }
  func_0x0001053adc2c();
  func_0x000107c60ca0(&uStack_100);
code_r0x000100c213e0:
  func_0x000100078bd8(auStack_70);
  return;
}



/* Entry: 1053acfc8; end: 1053acfe7;  */

void FUN_1053acfc8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000100c21df8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053acfe8; end: 1053acfeb;  */

void FUN_1053acfe8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1053acfec; end: 1053ad027;  */

void FUN_1053acfec(void)

{
  func_0x000100c202b8();
  __Znwm(0x2d0);
  FUN_1053ad028();
  func_0x000100c203d0();
  return;
}



/* Entry: 1053ad028; end: 1053ad12f;  */

undefined8 * FUN_1053ad028(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10 != 0);
  }
  func_0x0001004a2448(param_1 + 2,param_2 + 2);
  lVar1 = param_2[10];
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10_00 != 0);
  }
  FUN_1053ad130(param_1 + 0xb,param_2 + 0xb);
  func_0x000100629ca8(param_1 + 0x30,param_2 + 0x30);
  func_0x0001006099c0(param_1 + 0x34,param_2 + 0x34);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x54,param_2 + 0x54);
  uVar3 = param_2[0x58];
  uVar2 = param_2[0x57];
  param_1[0x59] = param_2[0x59];
  param_1[0x58] = uVar3;
  param_1[0x57] = uVar2;
  return param_1;
}



/* Entry: 1053ad130; end: 1053ad1df;  */

void FUN_1053ad130(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000100c20304();
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10 != 0);
  }
  func_0x000100c1fd24(unaff_x19 + 0x10,unaff_x20 + 0x10);
  func_0x000100608b3c(unaff_x19 + 0xd8,unaff_x20 + 0xd8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0xe0,unaff_x20 + 0xe0);
  func_0x00010028af84(unaff_x19 + 0xf8,unaff_x20 + 0xf8);
  lVar1 = *(long *)(unaff_x20 + 0x120);
  *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x20 + 0x118);
  *(long *)(unaff_x19 + 0x120) = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1053ad1e0; end: 1053ad1eb;  */

void FUN_1053ad1e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110881350;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053ad1ec; end: 1053ad217;  */

undefined8 * FUN_1053ad1ec(undefined8 *param_1)

{
  *param_1 = FUN_1053ad218;
  FUN_1053ad274(param_1 + 1);
  return param_1;
}



/* Entry: 1053ad218; end: 1053ad21f;  */

void FUN_1053ad218(long param_1)

{
  long lVar1;
  undefined1 auStack_58 [56];
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_10539501c(auStack_58);
  func_0x000100c214fc(lVar1,auStack_58,0,lVar1 + 0x128);
  func_0x0001004a21bc(auStack_58);
  return;
}



/* Entry: 1053ad220; end: 1053ad273;  */

void FUN_1053ad220(long param_1)

{
  undefined1 auStack_58 [56];
  
  FUN_10539501c(auStack_58);
  func_0x000100c214fc(param_1,auStack_58,0,param_1 + 0x128);
  func_0x0001004a21bc(auStack_58);
  return;
}



/* Entry: 1053ad274; end: 1053ad283;  */

void FUN_1053ad274(undefined8 param_1,undefined8 param_2)

{
  func_0x000100c202b8(param_1,&PTR_FUN_110881440,param_2);
  __Znwm(0x228);
  FUN_1053ad2e4();
  func_0x000100c203d0();
  return;
}



/* Entry: 1053ad284; end: 1053ad2a3;  */

void FUN_1053ad284(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1053ad320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053ad2a4; end: 1053ad2a7;  */

void FUN_1053ad2a4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1053ad2a8; end: 1053ad2e3;  */

void FUN_1053ad2a8(void)

{
  func_0x000100c202b8();
  __Znwm(0x228);
  FUN_1053ad2e4();
  func_0x000100c203d0();
  return;
}



/* Entry: 1053ad2e4; end: 1053ad31f;  */

void FUN_1053ad2e4(long param_1)

{
  long unaff_x20;
  
  func_0x000100c20304();
  func_0x000100c208fc();
  func_0x0001006099c0(param_1 + 0x128,unaff_x20 + 0x128);
  return;
}



/* Entry: 1053ad320; end: 1053ad347;  */

undefined8 FUN_1053ad320(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010060867c(param_1 + 0x128);
  func_0x000100c21e50(param_1 + 0x118);
  func_0x0001001148fc(param_1 + 0xf8);
  func_0x000100c21eac();
  func_0x000100c21eb4();
  func_0x000100c21ebc();
  func_0x000100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1053ad348; end: 1053ad34b;  */

undefined8 * FUN_1053ad348(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110881468;
  func_0x000104c00298(param_1 + 0xf);
  return param_1;
}



/* Entry: 1053ad34c; end: 1053ad3a3;  */

undefined8 * FUN_1053ad34c(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_110881468;
  param_1[6] = param_1;
  param_1[7] = param_1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  func_0x0001004b9214(param_1 + 0xf);
  return param_1;
}



/* Entry: 1053ad3a4; end: 1053ad3b7;  */

void FUN_1053ad3a4(void)

{
  func_0x0001053ad5dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053ad3b8; end: 1053ad437;  */

void FUN_1053ad3b8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000100c20304();
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x000100834c2c(*(undefined8 *)(unaff_x19 + 0x48));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x38);
    *param_3 = *(undefined1 *)(unaff_x19 + 0x158);
  }
  else {
    func_0x0001053adc80();
    *(undefined1 *)(unaff_x19 + 0x158) = *param_3;
    lVar1 = unaff_x19;
    FUN_1053ad548();
    if ((int)lVar1 == 0) {
      return;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x38);
  }
  func_0x0001053add20(uRam0000000113815c70,*(undefined8 *)(unaff_x19 + 0x50));
  return;
}



/* Entry: 1053ad438; end: 1053ad48f;  */

void FUN_1053ad438(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x000100c20304();
  *(undefined1 *)(param_1 + 0x70) = 0;
  func_0x0001053adae4();
  lVar3 = unaff_x20[1];
  lVar2 = *unaff_x20;
  lVar4 = unaff_x20[2];
  lVar6 = unaff_x20[5];
  lVar5 = unaff_x20[4];
  unaff_x19[0xb] = unaff_x20[3];
  unaff_x19[10] = lVar4;
  unaff_x19[0xd] = lVar6;
  unaff_x19[0xc] = lVar5;
  unaff_x19[9] = lVar3;
  unaff_x19[8] = lVar2;
  plVar1 = unaff_x19;
  func_0x0001053ad56c();
  if ((int)plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001053ad480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x30))();
    return;
  }
  return;
}



/* Entry: 1053ad490; end: 1053ad4a3;  */

undefined8 FUN_1053ad490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1053ad4a4; end: 1053ad4ff;  */

void FUN_1053ad4a4(undefined8 param_1)

{
  undefined1 in_ZR;
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uStack_48;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  func_0x000100c20184();
  func_0x0001053adb18();
  func_0x0001053adbb4();
  func_0x0001053ada8c();
  if (iVar1 != 0) {
    func_0x0001053ada68();
  }
  func_0x000100c204fc(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(CONCAT44(uVar2,iVar1) + 0x70) = 1;
  func_0x0001053add2c();
  func_0x0001053adab0();
  if (iVar1 == 0) {
    return;
  }
  func_0x0001053adb4c();
                    /* WARNING: Could not recover jumptable at 0x0001053adcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1053ad500; end: 1053ad547;  */

void FUN_1053ad500(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x70) = 1;
  func_0x0001053add2c();
  func_0x0001053adab0();
  if (iVar1 == 0) {
    return;
  }
  func_0x0001053adb4c();
                    /* WARNING: Could not recover jumptable at 0x0001053adcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1053ad548; end: 1053ad60b;  */

undefined8 FUN_1053ad548(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  func_0x0001008333cc(param_1 + 0x78);
  if (*(long *)(param_1 + 0xa8) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xa0) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xa0) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x000104c0070c(param_1 + 0x78);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    func_0x0001004b972c(param_1 + 0x78);
  }
  return 0;
}



/* Entry: 1053ad60c; end: 1053ad60f;  */

void FUN_1053ad60c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110881540;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053ad610; end: 1053ad623;  */

void FUN_1053ad610(void)

{
  FUN_1053ad70c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053ad624; end: 1053ad62f;  */

void FUN_1053ad624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100c21ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1053ad630; end: 1053ad643;  */

void FUN_1053ad630(void)

{
  FUN_1053ad6dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053ad644; end: 1053ad68f;  */

void FUN_1053ad644(long *param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x0001053add38();
  if (extraout_x8 != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*param_1 + 0x40))();
  func_0x000100c22064(auStack_30);
  return;
}



/* Entry: 1053ad690; end: 1053ad6db;  */

void FUN_1053ad690(long *param_1)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x0001053add38();
  if (extraout_x8 != 0) {
    do {
      func_0x000100c1fb6c();
    } while (extraout_w10 != 0);
  }
  (**(code **)(*param_1 + 0x48))();
  func_0x000100c22064(auStack_30);
  return;
}



/* Entry: 1053ad6dc; end: 1053ad70b;  */

undefined8 * FUN_1053ad6dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccd430;
  func_0x000100601d1c(param_1 + 1);
  return param_1;
}



/* Entry: 1053ad70c; end: 1053ad71b;  */

void FUN_1053ad70c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110881540;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053ad71c; end: 1053ad72f;  */

void FUN_1053ad71c(void)

{
  FUN_1053ad828();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053ad730; end: 1053ad73b;  */

void FUN_1053ad730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100c21ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1053ad73c; end: 1053ad74f;  */

void FUN_1053ad73c(void)

{
  func_0x000100850ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053ad750; end: 1053ad827;  */

void FUN_1053ad750(int param_1)

{
  int extraout_w10;
  long unaff_x20;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 auStack_58 [40];
  
  func_0x000100c7d130();
  func_0x0001053add58(&UNK_110d09c18);
  func_0x0001053adcc8();
  if (param_1 == 0) {
    func_0x0001053ada00();
    func_0x0001053ad9ac();
    func_0x000100c218b0();
    func_0x0001053ad9d8();
    func_0x0001053adbd8();
    func_0x0001053ad998();
    func_0x0001053ada50();
    func_0x000100c218b8();
    func_0x0001053ada58();
  }
  else {
    uStack_158 = *(undefined8 *)(unaff_x20 + 8);
    lStack_150 = *(long *)(unaff_x20 + 0x10);
    if (lStack_150 != 0) {
      do {
        func_0x000100c1fb6c();
      } while (extraout_w10 != 0);
    }
    func_0x000100c7d114();
    func_0x0001053adcbc();
    FUN_1053a665c(&uStack_158);
  }
  func_0x00010b56a9e0(auStack_58);
  return;
}



/* Entry: 1053ad828; end: 1053ad833;  */

void FUN_1053ad828(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110881608;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053ad834; end: 1053ad857;  */

void FUN_1053ad834(long param_1)

{
  func_0x000100c21e44();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1053ad858; end: 1053ad85b;  */

void FUN_1053ad858(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108816c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053ad85c; end: 1053ad86f;  */

void FUN_1053ad85c(void)

{
  FUN_1053ad968();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053ad870; end: 1053ad87b;  */

void FUN_1053ad870(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100c21ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1053ad87c; end: 1053ad88f;  */

void FUN_1053ad87c(void)

{
  func_0x000100850ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053ad890; end: 1053ad967;  */

void FUN_1053ad890(int param_1)

{
  int extraout_w10;
  long unaff_x20;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 auStack_58 [40];
  
  func_0x000100c7d130();
  func_0x0001053add58(&UNK_110d09bc8);
  func_0x0001053adcc8();
  if (param_1 == 0) {
    func_0x0001053ada00();
    func_0x0001053ad9ac();
    func_0x000100c218b0();
    func_0x0001053ad9d8();
    func_0x0001053adbd8();
    func_0x0001053ad998();
    func_0x0001053ada50();
    func_0x000100c218b8();
    func_0x0001053ada58();
  }
  else {
    uStack_158 = *(undefined8 *)(unaff_x20 + 8);
    lStack_150 = *(long *)(unaff_x20 + 0x10);
    if (lStack_150 != 0) {
      do {
        func_0x000100c1fb6c();
      } while (extraout_w10 != 0);
    }
    func_0x000100c7d114();
    func_0x0001053adcbc();
    FUN_1053a6980(&uStack_158);
  }
  func_0x00010b5695b8(auStack_58);
  return;
}



/* Entry: 1053ad968; end: 1053ad973;  */

void FUN_1053ad968(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108816c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053ad974; end: 1053ad997;  */

void FUN_1053ad974(long param_1)

{
  func_0x000100c21e44();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1053ad998; end: 1053add7f;  */

void FUN_1053ad998(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001053ad9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1053add80; end: 1053adf93;  */

void FUN_1053add80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c086ae0();
  puVar3 = PTR_PTR_1126b0438;
  puVar4 = (undefined *)0x0;
  iVar1 = (int)uVar2;
  if (iVar1 != 0) {
    if (iVar1 == 3) {
      uVar2 = param_1;
      func_0x00010bfe5ea0(param_1);
      func_0x00010bfe5e60(puVar3,param_2,uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
    }
    else {
      puVar5 = puVar4;
      if (iVar1 == 2) {
        uVar2 = param_1;
        func_0x00010c0d4f60(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d5160(puVar3,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        puVar5 = puVar3;
      }
    }
    puVar4 = PTR_PTR_1126b0440;
    _objc_alloc(PTR_PTR_1126b0440);
    uVar2 = param_1;
    func_0x00010c087060(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021180(puVar4,param_2,uVar2,puVar5);
    _objc_release(uVar2);
    _objc_release(puVar5);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1053adf94; end: 1053ae29b;  */

void FUN_1053adf94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c27e140();
  puVar7 = PTR_PTR_1126b8138;
  puVar8 = (undefined *)0x0;
  uVar2 = param_1;
  switch((int)uVar1) {
  case 1:
    func_0x00010c25cd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25dac0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001053ae1e0;
  case 2:
    func_0x00010c0b5160(param_1);
    func_0x00010c0b50a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    break;
  case 3:
    func_0x00010bf25f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64c60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001053ae1e0;
  case 4:
    func_0x00010bf1f4e0(param_1);
    func_0x00010bf1f4c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    break;
  case 5:
    func_0x00010bf88600(param_1);
    func_0x00010bf885e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    break;
  case 6:
    func_0x00010c0b85e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c297040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bd869d0();
    func_0x00010c0bad00(puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001053ae1d0;
  case 7:
    func_0x00010c099a60(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c297380();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x000100504554();
    func_0x00010c09a3a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001053ae1d0;
  case 9:
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_1053add80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0f5880();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x000100504554();
    func_0x00010c084720(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
code_r0x0001053ae1d0:
    _objc_release(uVar3);
    _objc_release(uVar1);
code_r0x0001053ae1e0:
    _objc_release(uVar2);
    puVar8 = puVar7;
    break;
  case 10:
    puVar8 = PTR_PTR_1126b8138;
    func_0x00010c0db140(PTR_PTR_1126b8138);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xb:
    func_0x00010bf98580(param_1);
    func_0x00010bf985c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1053ae29c; end: 1053ae2a3;  */

void FUN_1053ae29c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c27e140();
  puVar7 = PTR_PTR_1126b8138;
  puVar8 = (undefined *)0x0;
  uVar2 = param_2;
  switch((int)uVar1) {
  case 1:
    func_0x00010c25cd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25dac0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001053ae1e0;
  case 2:
    func_0x00010c0b5160(param_2);
    func_0x00010c0b50a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    break;
  case 3:
    func_0x00010bf25f00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64c60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001053ae1e0;
  case 4:
    func_0x00010bf1f4e0(param_2);
    func_0x00010bf1f4c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    break;
  case 5:
    func_0x00010bf88600(param_2);
    func_0x00010bf885e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    break;
  case 6:
    func_0x00010c0b85e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c297040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bd869d0();
    func_0x00010c0bad00(puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001053ae1d0;
  case 7:
    func_0x00010c099a60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c297380();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x000100504554();
    func_0x00010c09a3a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001053ae1d0;
  case 9:
    func_0x00010c086560(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_1053add80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c086560(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0f5880();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x000100504554();
    func_0x00010c084720(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
code_r0x0001053ae1d0:
    _objc_release(uVar3);
    _objc_release(uVar1);
code_r0x0001053ae1e0:
    _objc_release(uVar2);
    puVar8 = puVar7;
    break;
  case 10:
    puVar8 = PTR_PTR_1126b8138;
    func_0x00010c0db140(PTR_PTR_1126b8138);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xb:
    func_0x00010bf98580(param_2);
    func_0x00010bf985c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1053ae2a4; end: 1053ae2cb;  */

void FUN_1053ae2a4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1053ae2cc; end: 1053ae2d3;  */

void FUN_1053ae2cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c27e140();
  puVar7 = PTR_PTR_1126b8138;
  puVar8 = (undefined *)0x0;
  uVar2 = param_2;
  switch((int)uVar1) {
  case 1:
    func_0x00010c25cd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25dac0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001053ae1e0;
  case 2:
    func_0x00010c0b5160(param_2);
    func_0x00010c0b50a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    break;
  case 3:
    func_0x00010bf25f00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf64c60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001053ae1e0;
  case 4:
    func_0x00010bf1f4e0(param_2);
    func_0x00010bf1f4c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    break;
  case 5:
    func_0x00010bf88600(param_2);
    func_0x00010bf885e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    break;
  case 6:
    func_0x00010c0b85e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c297040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bd869d0();
    func_0x00010c0bad00(puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001053ae1d0;
  case 7:
    func_0x00010c099a60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c297380();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x000100504554();
    func_0x00010c09a3a0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x0001053ae1d0;
  case 9:
    func_0x00010c086560(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_1053add80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010c086560(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0f5880();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x000100504554();
    func_0x00010c084720(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
code_r0x0001053ae1d0:
    _objc_release(uVar3);
    _objc_release(uVar1);
code_r0x0001053ae1e0:
    _objc_release(uVar2);
    puVar8 = puVar7;
    break;
  case 10:
    puVar8 = PTR_PTR_1126b8138;
    func_0x00010c0db140(PTR_PTR_1126b8138);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xb:
    func_0x00010bf98580(param_2);
    func_0x00010bf985c0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1053ae2d4; end: 1053ae36b;  */

void FUN_1053ae2d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b8140;
  func_0x00010c15eb00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = puVar1;
  FUN_1053ae36c(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053ae36c; end: 1053ae51b;  */

void FUN_1053ae36c(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126b8148;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c086560(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar3 = uVar2;
  func_0x00010bfce400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_1053add80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c0f5880(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar5 = uVar3;
  func_0x000100504554(uVar3,&PTR___NSConcreteGlobalBlock_1108817a0);
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126b8130;
  _objc_alloc(PTR_PTR_1126b8130);
  func_0x00010c019140();
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar3 = param_1;
  func_0x00010c118be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bd869d0();
  func_0x00010c0896c0(param_1);
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar5 = param_1;
  func_0x00010c0896a0(param_1);
  _objc_release(param_1);
  func_0x00010bf655e0((double)uVar5,puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0202a0(puVar1);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053ae51c; end: 1053ae5f3;  */

void FUN_1053ae51c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b8150;
  func_0x00010c15eb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f40e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b8158;
  _objc_alloc(PTR_PTR_1126b8158);
  puVar3 = puVar1;
  func_0x00010c0f5880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000100504554();
  func_0x00010c0346c0(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053ae5f4; end: 1053ae747;  */

void FUN_1053ae5f4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b8160;
  _objc_retain();
  func_0x00010c082ac0();
  if ((int)puVar1 == 0) {
    puVar1 = param_1;
    func_0x00010c28d760(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000100504554();
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010bf6d000(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x000100504554();
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b8168;
    _objc_alloc(PTR_PTR_1126b8168);
    func_0x00010bf3c1c0(param_1);
    puVar4 = param_1;
    func_0x00010c2667e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puVar5 = puVar4;
    func_0x00010c0e8e00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01f0c0(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    puVar2 = PTR_PTR_1126b8160;
    _objc_alloc_init(PTR_PTR_1126b8160);
    puVar1 = puVar2;
    func_0x00010c0f3da0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053ae748; end: 1053ae88f;  */

undefined * FUN_1053ae748(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  puVar3 = PTR_PTR_1126b8170;
  func_0x00010bfcf2e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c15eae0();
  _objc_retainAutoreleasedReturnValue();
  lStack_38 = 0;
  func_0x00010c0f40e0(puVar3,param_2,uVar2,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_38;
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar4 = (undefined *)0x0;
  if (lVar1 == 0) {
    puVar4 = puVar3;
    func_0x00010bfcf560(puVar3);
  }
  _objc_release(puVar3);
  return puVar4;
}



/* Entry: 1053ae890; end: 1053ae8fb;  */

void FUN_1053ae890(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bd869d0(param_1,&PTR___NSConcreteGlobalBlock_1108818e0,
                      &PTR___NSConcreteGlobalBlock_110881920);
  uVar1 = param_1;
  func_0x00010c0d3c80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053ae8fc; end: 1053ae903;  */

void FUN_1053ae8fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b81b0;
  _objc_retain();
  _objc_alloc_init();
  _objc_retain();
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  func_0x00010c0c0580(param_2);
  _objc_release(param_2);
  _objc_retain(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053ae904; end: 1053aeb93;  */

void FUN_1053ae904(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar2 = PTR_PTR_1126b81b0;
  _objc_retain();
  _objc_alloc_init();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1053af680;
  puStack_50 = &UNK_1108450c8;
  _objc_retain();
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1053af68c;
  puStack_78 = &UNK_110841f20;
  puStack_48 = puVar2;
  _objc_retain(puVar2);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x1053af698;
  puStack_a0 = &UNK_110855e40;
  puStack_70 = puVar2;
  _objc_retain(puVar2);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1053af6a4;
  puStack_c8 = &UNK_110846710;
  puStack_98 = puVar2;
  _objc_retain(puVar2);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x1053af6ac;
  puStack_f0 = &UNK_1108484c8;
  puStack_c0 = puVar2;
  _objc_retain(puVar2);
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x1053af6b8;
  puStack_118 = &UNK_110850738;
  puStack_e8 = puVar2;
  _objc_retain(puVar2);
  puStack_158 = puVar1;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_1053af6c4;
  puStack_140 = &UNK_110881940;
  puStack_110 = puVar2;
  _objc_retain(puVar2);
  puStack_180 = puVar1;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_1053af71c;
  puStack_168 = &UNK_110850cc8;
  puStack_138 = puVar2;
  _objc_retain(puVar2);
  puStack_1a8 = puVar1;
  uStack_1a0 = 0xc2000000;
  pcStack_198 = FUN_1053af7fc;
  puStack_190 = &UNK_110881970;
  puStack_160 = puVar2;
  _objc_retain(puVar2);
  puStack_1d0 = puVar1;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_1053af840;
  puStack_1b8 = &UNK_110842e18;
  puStack_188 = puVar2;
  _objc_retain(puVar2);
  puStack_1b0 = puVar2;
  func_0x00010c0c0580(param_1,param_2,&puStack_68,&puStack_90,&puStack_b8,&puStack_e0,&puStack_108,
                      &puStack_130,&puStack_158,&puStack_180,&puStack_1a8,&puStack_1d0);
  _objc_release(param_1);
  puVar1 = puStack_1b0;
  _objc_retain(puVar2);
  _objc_release(puVar1);
  _objc_release(puStack_188);
  _objc_release(puStack_160);
  _objc_release(puStack_138);
  _objc_release(puStack_110);
  _objc_release(puStack_e8);
  _objc_release(puStack_c0);
  _objc_release(puStack_98);
  _objc_release(puStack_70);
  _objc_release(puStack_48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053aeb94; end: 1053aeec7;  */

void FUN_1053aeb94(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b8150;
  _objc_alloc_init();
  lVar3 = param_1;
  func_0x00010c087060(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bfce400(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7000();
  _objc_release(puVar4);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bfe5ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  _objc_retain(puVar2);
  func_0x00010c0bee60(lVar3);
  _objc_release(lVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar10 = *(undefined8 *)(lVar8 * 8);
      puVar5 = PTR_PTR_1126b8178;
      _objc_alloc_init();
      uVar9 = uVar10;
      func_0x00010c087060(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b7000(puVar5);
      _objc_release(uVar9);
      func_0x00010bfe5ec0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar5);
      _objc_retain(puVar5);
      func_0x00010c0bee60(uVar10);
      _objc_release(uVar10);
      func_0x00010befa120(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar5);
      _objc_release(puVar5);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  func_0x00010c1d9860(puVar2);
  _objc_retain(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(lVar6);
  func_0x00010bfce400(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 1053aeec8; end: 1053aef53;  */

void FUN_1053aeec8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfce400(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053aef54; end: 1053aef5f;  */

void FUN_1053aef54(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1cafb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setName__112650610,param_2);
  return;
}



/* Entry: 1053aef60; end: 1053aefab;  */

void FUN_1053aef60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282760();
  func_0x00010c1a99c0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053aefac; end: 1053af3a3;  */

void FUN_1053aefac(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b8140;
  _objc_retain();
  _objc_alloc_init(puVar1);
  uVar2 = param_1;
  func_0x00010c084700(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcecc0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c084700(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0f5860();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  FUN_1053aeb94(uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c1b6b40(puVar1);
  uVar2 = param_1;
  func_0x00010c118b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1053ae890();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5080(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0896a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c1b8300(puVar1);
  _objc_release(uVar2);
  func_0x00010c0896c0(param_1);
  _objc_release(param_1);
  func_0x00010c1b8320(puVar1);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053af3a4; end: 1053af43b;  */

void FUN_1053af3a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c118c00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c098940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4fc0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053af43c; end: 1053af60b;  */

void FUN_1053af43c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b8198;
  _objc_retain();
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0d80();
  puVar2 = PTR_PTR_1126b81a0;
  func_0x00010c0cb140(PTR_PTR_1126b81a0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c0f5860(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126b81a8;
  _objc_retain(uVar3);
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfb1920(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar6 = uVar5;
  func_0x00010bfe5ec0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar4);
  _objc_retain(puVar4);
  func_0x00010c0bee60(uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_retain(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar4);
  func_0x00010c1e4fe0(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  func_0x00010c165000(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053af60c; end: 1053af617;  */

void FUN_1053af60c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e50f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setPropertyName__112656e60,param_2);
  return;
}



/* Entry: 1053af618; end: 1053af67f;  */

void FUN_1053af618(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e50e0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053af680; end: 1053af6c3;  */

void FUN_1053af680(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20e7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setString__112661418,param_2);
  return;
}


