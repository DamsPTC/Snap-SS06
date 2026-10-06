/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080dfa08; end: 1080dfa1b;  */

void FUN_1080dfa08(long *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  _JSObjectGetPrivate();
  ppuVar1 = &PTR___tlv_bootstrap_11340e110;
  (*(code *)PTR___tlv_bootstrap_11340e110)();
  puVar2 = *ppuVar1;
  if (puVar2 != (undefined *)0x0) {
    plStack_28 = param_1;
    if ((*(long *)(puVar2 + 0x60) != 0) &&
       (*(ulong *)(puVar2 + 0x18) <= *(long *)(puVar2 + 0x10) + 1U)) {
      lStack_30 = *(long *)(puVar2 + 8);
      lStack_38 = lStack_30 + *(long *)(puVar2 + 0x60) * 8;
      func_0x00010b94cce0(auStack_40,puVar2 + 8,&lStack_30,&lStack_38);
      *(undefined8 *)(puVar2 + 0x60) = 0;
    }
    func_0x00010b94cd70(puVar2 + 8,&plStack_28);
    return;
  }
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b94cc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))(param_1);
    return;
  }
  return;
}



/* Entry: 1080dfa1c; end: 1080dfa93;  */

void FUN_1080dfa1c(void)

{
  long lVar1;
  
  if (lRam00000001138249a0 == 0) {
    lVar1 = lRam00000001138249a0;
    func_0x0001080e0d0c();
    func_0x0001080e0e68();
    func_0x0001080e0d80(FUN_1080df6e4);
    lRam00000001138249a0 = lVar1;
  }
  return;
}



/* Entry: 1080dfa94; end: 1080dfb7f;  */

undefined8 FUN_1080dfa94(void)

{
  undefined8 uVar1;
  
  if ((bRam00000001138249b8 & 1) == 0) {
    uVar1 = 0x1138249b8;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      func_0x0001080e0d0c();
      func_0x0001080e0e68();
      func_0x0001080e0d80(FUN_1080e01c4);
      uRam00000001138249b0 = uVar1;
      ___cxa_guard_release(0x1138249b8);
    }
  }
  return uRam00000001138249b0;
}



/* Entry: 1080dfb80; end: 1080dfbb3;  */

void FUN_1080dfb80(void)

{
  func_0x0001080e0d0c();
  func_0x0001080e0e68();
  func_0x0001080e0e10(FUN_1080dfa08);
  return;
}



/* Entry: 1080dfbb4; end: 1080dfe07;  */

undefined8 **** FUN_1080dfbb4(long param_1,undefined8 param_2,long *param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  code *pcVar5;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  long *plVar8;
  char unaff_w26;
  long lVar9;
  undefined1 auStack_280 [16];
  undefined1 uStack_270;
  undefined1 auStack_268 [8];
  undefined8 ***pppuStack_260;
  undefined8 ***pppuStack_248;
  undefined1 *puStack_240;
  long lStack_238;
  undefined8 ***pppuStack_230;
  long *plStack_228;
  long lStack_218;
  undefined8 ***pppuStack_210;
  char in_stack_fffffffffffffdf8;
  undefined1 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [256];
  undefined8 uStack_10;
  
  func_0x0001080e0e74();
  func_0x0001080e0d20();
  func_0x0001080e0d74();
  if (param_1 != 0) {
    do {
      func_0x0001080e0d98();
    } while (extraout_w10 != 0);
  }
  ppppuVar7 = *(undefined8 *****)(param_1 + 0x10);
  puStack_128 = auStack_110;
  uStack_118 = 8;
  uStack_120 = 0;
  FUN_1080e0688(&puStack_128,param_4);
  for (lVar9 = 0; param_4 != lVar9; lVar9 = lVar9 + 1) {
    func_0x0001080e0dc8();
    func_0x0001080e0e5c();
    pppuStack_210 = ppppuVar7;
    FUN_1080e0744(&puStack_128,&pppuStack_210);
    FUN_1080e0bc0(&pppuStack_210);
    in_stack_fffffffffffffdf8 = unaff_w26;
  }
  func_0x00010b8ffd54(&pppuStack_210,ppppuVar7);
  puStack_240 = (undefined1 *)0x0;
  if (param_4 != 0) {
    puStack_240 = puStack_128;
  }
  pppuStack_248 = ppppuVar7;
  lStack_238 = param_4;
  pppuStack_230 = &pppuStack_210;
  FUN_1080e0e24(&pppuStack_248);
  plStack_228 = param_3;
  lStack_218 = param_1 + 0x20;
  func_0x0001080e00e4();
  if (param_3 == (long *)0x0) {
    plVar8 = (long *)0x0;
LAB_1080dfd20:
    auStack_280[0] = 0;
    uStack_270 = 0;
    func_0x00010b8dbdd8(auStack_268,ppppuVar7,&UNK_10f47a58d,0x38,auStack_280,&pppuStack_210);
    uVar3 = in_stack_fffffffffffffdf8 == '\x01';
    if ((bool)uVar3) {
      ppppuVar7 = &pppuStack_210;
      func_0x00010b90003c(ppppuVar7,auStack_268);
    }
LAB_1080dfd60:
    func_0x0001080e0d30();
    ppppuVar6 = ppppuVar7;
  }
  else {
    (**(code **)(*param_3 + 0x10))(param_3);
    func_0x0001080e0e04();
    plVar8 = param_3;
    ___dynamic_cast();
    if (plVar8 == (long *)0x0) goto LAB_1080dfd20;
    do {
      func_0x0001080e0d98();
    } while (extraout_w10_00 != 0);
    uVar3 = plVar8[2] == *(long *)(param_1 + 0x18);
    if (!(bool)uVar3) goto LAB_1080dfd20;
    func_0x0001080df950(ppppuVar7,&pppuStack_210);
    if ((int)ppppuVar7 != 0) {
      func_0x0001080e0d30();
      ppppuVar6 = ppppuVar7;
      goto LAB_1080dfd74;
    }
    ppppuVar7 = (undefined8 ****)plVar8[3];
    (**(code **)(param_1 + 0x38))(auStack_268,ppppuVar7,&pppuStack_248);
    uVar3 = in_stack_fffffffffffffdf8 == '\x01';
    ppppuVar6 = (undefined8 ****)pppuStack_260;
    if (!(bool)uVar3) goto LAB_1080dfd60;
  }
  FUN_1080e0bc0(auStack_268);
LAB_1080dfd74:
  func_0x0001080e0b00(plVar8);
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x18))(param_3);
  }
  func_0x00010b8ffdac(&pppuStack_210);
  FUN_1080e0b24(&puStack_128);
  if (param_1 != 0) {
    plVar8 = (long *)(param_1 + 8);
    do {
      uVar3 = *plVar8 + -1 == 0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)uVar3) {
      func_0x0001080e0dd8();
    }
  }
  func_0x0001080e0ce0(uStack_10);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    if ((bRam00000001138249d8 & 1) == 0) {
      iVar4 = 0x138249d8;
      ___cxa_guard_acquire();
      if (iVar4 != 0) {
        pcVar5 = FUN_1080dfe6c;
        FUN_1080dfb80();
        ppppuRam00000001138249d0 = (undefined8 ****)pcVar5;
        ___cxa_guard_release(0x1138249d8);
      }
    }
    return ppppuRam00000001138249d0;
  }
  return ppppuVar6;
}



/* Entry: 1080dfe08; end: 1080dfe6b;  */

code * FUN_1080dfe08(void)

{
  int iVar1;
  code *pcVar2;
  
  if ((bRam00000001138249d8 & 1) == 0) {
    iVar1 = 0x138249d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      pcVar2 = FUN_1080dfe6c;
      FUN_1080dfb80();
      pcRam00000001138249d0 = pcVar2;
      ___cxa_guard_release(0x1138249d8);
    }
  }
  return pcRam00000001138249d0;
}



/* Entry: 1080dfe6c; end: 1080e0003;  */

undefined1 ** FUN_1080dfe6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 **ppuVar5;
  int extraout_w10;
  undefined1 **ppuVar6;
  char unaff_w26;
  long lVar7;
  undefined1 auStack_268 [8];
  undefined1 **ppuStack_260;
  undefined1 **ppuStack_248;
  undefined1 *puStack_240;
  long lStack_238;
  undefined1 ***pppuStack_230;
  undefined8 uStack_228;
  long lStack_218;
  undefined1 **ppuStack_210;
  char in_stack_fffffffffffffdf8;
  undefined1 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [256];
  undefined8 uStack_10;
  
  func_0x0001080e0e74();
  func_0x0001080e0d20();
  func_0x0001080e0d74();
  if (param_1 != 0) {
    do {
      func_0x0001080e0d98();
    } while (extraout_w10 != 0);
  }
  ppuVar6 = *(undefined1 ***)(param_1 + 0x10);
  puStack_128 = auStack_110;
  uStack_118 = 8;
  uStack_120 = 0;
  FUN_1080e0688(&puStack_128,param_4);
  for (lVar7 = 0; param_4 != lVar7; lVar7 = lVar7 + 1) {
    func_0x0001080e0dc8();
    func_0x0001080e0e5c();
    ppuStack_210 = ppuVar6;
    FUN_1080e0744(&puStack_128,&ppuStack_210);
    FUN_1080e0bc0(&ppuStack_210);
    in_stack_fffffffffffffdf8 = unaff_w26;
  }
  func_0x00010b8ffd54(&ppuStack_210,ppuVar6);
  uVar4 = param_4 == 0;
  puStack_240 = (undefined1 *)0x0;
  if (!(bool)uVar4) {
    puStack_240 = puStack_128;
  }
  ppuStack_248 = ppuVar6;
  lStack_238 = param_4;
  pppuStack_230 = &ppuStack_210;
  FUN_1080e0e24(&ppuStack_248);
  uStack_228 = param_3;
  lStack_218 = param_1 + 0x20;
  func_0x0001080df950(ppuVar6,&ppuStack_210);
  if (((ulong)ppuVar6 & 1) == 0) {
    ppuVar5 = *(undefined1 ***)(*(long *)(param_1 + 0x18) + 0x18);
    (**(code **)(param_1 + 0x38))(auStack_268,ppuVar5,&ppuStack_248);
    uVar4 = in_stack_fffffffffffffdf8 == '\x01';
    ppuVar6 = ppuStack_260;
    if (!(bool)uVar4) {
      func_0x0001080e0d30();
      ppuVar6 = ppuVar5;
    }
    func_0x0001080e0e1c();
  }
  else {
    func_0x0001080e0d30();
  }
  func_0x00010b8ffdac(&ppuStack_210);
  ppuVar5 = &puStack_128;
  FUN_1080e0b24();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
    do {
      uVar4 = *plVar1 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)uVar4) {
      func_0x0001080e0dd8();
    }
  }
  func_0x0001080e0ce0(uStack_10);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    *ppuVar5 = (undefined1 *)&PTR_FUN_110a1fc30;
    FUN_1080e0c4c(ppuVar5[3]);
    return ppuVar5;
  }
  return ppuVar6;
}



/* Entry: 1080e0004; end: 1080e0033;  */

undefined8 * FUN_1080e0004(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1fc30;
  FUN_1080e0c4c(param_1[3]);
  return param_1;
}



/* Entry: 1080e0034; end: 1080e0037;  */

undefined8 * FUN_1080e0034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a1fc30;
  FUN_1080e0c4c(param_1[3]);
  return param_1;
}



/* Entry: 1080e0038; end: 1080e004b;  */

void FUN_1080e0038(void)

{
  FUN_1080e0004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080e004c; end: 1080e0137;  */

void FUN_1080e004c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001080e0da8();
  if (extraout_x8 != 0) {
    plVar1 = (long *)(extraout_x8 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(unaff_x19 + 0x18) = extraout_x8;
  func_0x0001080e0b64(unaff_x19 + 0x20,*param_3 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  return;
}



/* Entry: 1080e0138; end: 1080e0167;  */

void FUN_1080e0138(long param_1)

{
  _JSObjectGetPrivate();
  if (param_1 != 0) {
    func_0x0001080e0e04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR____dynamic_cast_110346c00)();
    return;
  }
  return;
}



/* Entry: 1080e0168; end: 1080e016b;  */

long FUN_1080e0168(long param_1)

{
  func_0x00010b9a3d64(param_1 + 0x28);
  func_0x0001080e0c9c(param_1 + 0x18);
  return param_1;
}



/* Entry: 1080e016c; end: 1080e017f;  */

void FUN_1080e016c(void)

{
  FUN_1080e0c70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080e0180; end: 1080e01a7;  */

undefined8 * FUN_1080e0180(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1080e01a8(param_1 + 1);
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 1080e01a8; end: 1080e01c3;  */

void FUN_1080e01a8(long param_1)

{
  long lVar1;
  
  for (lVar1 = 0; lVar1 != 0x10; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 1080e01c4; end: 1080e025f;  */

long ** FUN_1080e01c4(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  long *plVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  code *pcVar7;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar8;
  long **pplVar9;
  long **pplVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 auStack_3a8 [16];
  undefined1 uStack_398;
  long *plStack_390;
  long *plStack_388;
  ulong uStack_380;
  long *plStack_368;
  undefined1 *puStack_360;
  ulong uStack_358;
  long **pplStack_350;
  long **pplStack_348;
  long **pplStack_338;
  undefined1 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [256];
  long *plStack_218;
  byte bStack_210;
  undefined8 uStack_130;
  long *aplStack_120 [10];
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_38;
  
  pplVar3 = aplStack_120;
  pplVar10 = aplStack_120;
  pplVar4 = aplStack_120;
  func_0x0001080e0d20();
  uStack_38 = extraout_x8;
  FUN_1080e0138();
  if (param_2 != 0) {
    do {
      func_0x0001080e0d98();
    } while (extraout_w10 != 0);
  }
  func_0x00010b8ffd54(aplStack_120,*(undefined8 *)(param_2 + 0x10));
  func_0x00010b9a0050(aplStack_120,&UNK_10f47a4c6);
  func_0x0001080e0d30();
  func_0x00010b8ffdac();
  FUN_1080e0e3c();
  func_0x0001080e0ce0(uStack_38);
  if ((bool)in_ZR) {
    return pplVar3;
  }
  ___stack_chk_fail();
  pcVar7 = FUN_1080e0260;
  func_0x0001080e0e74();
  pplVar3 = pplVar4;
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = pcVar7;
  func_0x0001080e0d20();
  func_0x0001080e0d74();
  if (pplVar3 != (long **)0x0) {
    do {
      func_0x0001080e0d98();
    } while (extraout_w10_00 != 0);
  }
  plVar8 = pplVar3[2];
  func_0x00010b8ffd54(&plStack_218,plVar8);
  puStack_330 = auStack_318;
  uStack_320 = 8;
  uStack_328 = 0;
  FUN_1080e0688(&puStack_330,param_3);
  for (uVar12 = 0; uVar2 = param_3 == uVar12, !(bool)uVar2; uVar12 = uVar12 + 1) {
    puVar11 = *(undefined1 **)(param_4 + uVar12 * 8);
    _JSValueGetType(pplVar4,puVar11);
    func_0x0001080e0e5c();
    uStack_358 = extraout_x9 | extraout_x8_00;
    pplStack_350 = (long **)((ulong)pplStack_350 & 0xffffffffffffff00);
    plStack_368 = plVar8;
    puStack_360 = puVar11;
    FUN_1080e0744(&puStack_330,&plStack_368);
    FUN_1080e0bc0(&plStack_368);
  }
  plStack_390 = (long *)0x0;
  pplVar5 = (long **)plVar8[0x45];
  pplVar6 = &plStack_390;
  pplVar9 = pplVar4;
  _JSObjectGetProperty(pplVar4,pplVar10,pplVar5);
  if (plStack_390 == (long *)0x0) {
    pplVar5 = &plStack_390;
    pplVar10 = pplVar4;
    _JSValueToObject(pplVar4,pplVar9,pplVar5);
    if (plStack_390 != (long *)0x0) goto LAB_1080e0360;
    pplVar5 = pplVar10;
    func_0x0001080dfa58();
    pplVar9 = pplVar4;
    _JSObjectMake(pplVar4,pplVar5,0);
    _JSObjectSetPrototype(pplVar4,pplVar9,pplVar10);
    uVar2 = param_3 == 0;
    puStack_360 = (undefined1 *)0x0;
    if (!(bool)uVar2) {
      puStack_360 = puStack_330;
    }
    pplStack_350 = &plStack_218;
    plStack_368 = plVar8;
    uStack_358 = param_3;
    FUN_1080e0e24(&plStack_368);
    pplStack_338 = pplVar3 + 4;
    pcVar7 = (code *)pplVar3[3][4];
    pplStack_348 = pplVar9;
    if (pcVar7 != (code *)0x0) {
      pplVar4 = &plStack_218;
      func_0x0001080df950();
      if ((int)plVar8 == 0) {
        pplVar4 = &plStack_368;
        (*pcVar7)(&plStack_388,pplVar3[3][3]);
        uVar2 = bStack_210 == 1;
        if (((bool)uVar2) && (plStack_388 == (long *)0x0)) {
          pplVar4 = (long **)&UNK_10f47a52a;
          func_0x00010b9a0050(&plStack_218);
        }
        if ((bStack_210 & 1) == 0) {
          func_0x0001080e0d3c();
          pplVar9 = (long **)0x0;
        }
        else {
          pplVar5 = (long **)0x20;
          __Znwm();
          pplVar10 = &plStack_388;
          pplVar4 = pplVar5;
          func_0x00010b8df8e8();
          (*(code *)(*pplVar4)[2])();
          pplVar3 = pplVar9;
          pplVar4 = pplVar5;
          _JSObjectSetPrivate();
          if (((ulong)pplVar3 & 1) == 0) {
            func_0x00010b94cc20(pplVar5);
            pplVar4 = (long **)&UNK_10f47a561;
            func_0x00010b9a0050(&plStack_218);
            func_0x0001080e0d3c();
            pplVar9 = (long **)0x0;
          }
          func_0x0001080e0b00(pplVar5);
        }
        if (plStack_388 != (long *)0x0) {
          (**(code **)(*plStack_388 + 0x18))();
        }
        goto LAB_1080e03a0;
      }
      goto LAB_1080e0398;
    }
    auStack_3a8[0] = 0;
    uStack_398 = 0;
    pplVar4 = (long **)&UNK_10f47a4f7;
    pplVar6 = (long **)auStack_3a8;
    pplVar10 = (long **)0x32;
    func_0x00010b8dbdd8(&plStack_388,plVar8,&UNK_10f47a4f7,0x32,pplVar6,&plStack_218);
    uVar2 = bStack_210 == 1;
    if ((bool)uVar2) {
      pplVar4 = &plStack_388;
      func_0x00010b90003c(&plStack_218);
    }
    func_0x0001080e0d3c();
    FUN_1080e0bc0(&plStack_388);
  }
  else {
LAB_1080e0360:
    pplVar10 = pplVar5;
    plVar1 = plStack_390;
    _JSValueGetType(pplVar4,plStack_390);
    uStack_380 = (ulong)pplVar4 & 0xffffffff;
    plStack_388 = plVar1;
    FUN_1080e07a8(&plStack_368,plVar8,&plStack_388);
    pplVar4 = &plStack_368;
    func_0x00010b90003c(&plStack_218);
    FUN_1080e0bc0(&plStack_368);
LAB_1080e0398:
    func_0x0001080e0d3c();
  }
  pplVar9 = (long **)0x0;
LAB_1080e03a0:
  FUN_1080e0b24(&puStack_330);
  pplVar3 = &plStack_218;
  func_0x00010b8ffdac();
  FUN_1080e0e3c();
  func_0x0001080e0ce0(uStack_130);
  if ((bool)uVar2) {
    return pplVar9;
  }
  ___stack_chk_fail();
  pplVar5 = pplVar3;
  _JSValueIsObject();
  if ((int)pplVar5 == 0) {
    pplVar10 = (long **)0x0;
  }
  else {
    pplVar5 = pplVar4;
    FUN_1080e0138();
    if (pplVar5 != (long **)0x0) {
      do {
        func_0x0001080e0d98();
      } while (extraout_w10_01 != 0);
    }
    pplVar9 = pplVar3;
    _JSObjectGetProperty(pplVar3,pplVar4,pplVar5[2][0x45],pplVar6);
    if ((*pplVar6 == (long *)0x0) &&
       (pplVar4 = pplVar3, _JSValueToObject(pplVar3,pplVar10,pplVar6), *pplVar6 == (long *)0x0)) {
      do {
        pplVar5 = pplVar3;
        _JSObjectGetPrototype(pplVar3,pplVar4);
        pplVar10 = pplVar3;
        _JSValueIsStrictEqual(pplVar3,pplVar5,pplVar9);
        if ((((ulong)pplVar10 & 1) != 0) ||
           (pplVar4 = pplVar3, _JSValueIsObject(pplVar3,pplVar5), (int)pplVar4 == 0)) break;
        pplVar4 = pplVar3;
        _JSValueToObject(pplVar3,pplVar5,pplVar6);
      } while (*pplVar6 == (long *)0x0);
    }
    else {
      pplVar10 = (long **)0x0;
    }
    FUN_1080e0e3c();
  }
  return pplVar10;
}



/* Entry: 1080e0260; end: 1080e055b;  */

long ** FUN_1080e0260(long **param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long *plVar1;
  undefined1 uVar2;
  long **pplVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  long **pplVar7;
  ulong extraout_x8;
  ulong extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar8;
  long **pplVar9;
  code *pcVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 auStack_288 [16];
  undefined1 uStack_278;
  long *plStack_270;
  long *plStack_268;
  ulong uStack_260;
  long *plStack_248;
  undefined1 *puStack_240;
  ulong uStack_238;
  long **pplStack_230;
  long **pplStack_228;
  long **pplStack_218;
  undefined1 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [256];
  long *plStack_f8;
  byte bStack_f0;
  undefined8 uStack_10;
  
  func_0x0001080e0e74();
  pplVar3 = param_1;
  func_0x0001080e0d20();
  func_0x0001080e0d74();
  if (pplVar3 != (long **)0x0) {
    do {
      func_0x0001080e0d98();
    } while (extraout_w10 != 0);
  }
  plVar8 = pplVar3[2];
  func_0x00010b8ffd54(&plStack_f8,plVar8);
  puStack_210 = auStack_1f8;
  uStack_200 = 8;
  uStack_208 = 0;
  FUN_1080e0688(&puStack_210,param_3);
  for (uVar12 = 0; uVar2 = param_3 == uVar12, !(bool)uVar2; uVar12 = uVar12 + 1) {
    puVar11 = *(undefined1 **)(param_4 + uVar12 * 8);
    _JSValueGetType(param_1,puVar11);
    func_0x0001080e0e5c();
    uStack_238 = extraout_x9 | extraout_x8;
    pplStack_230 = (long **)((ulong)pplStack_230 & 0xffffffffffffff00);
    plStack_248 = plVar8;
    puStack_240 = puVar11;
    FUN_1080e0744(&puStack_210,&plStack_248);
    FUN_1080e0bc0(&plStack_248);
  }
  plStack_270 = (long *)0x0;
  pplVar5 = (long **)plVar8[0x45];
  pplVar7 = &plStack_270;
  pplVar9 = param_1;
  _JSObjectGetProperty(param_1,param_2,pplVar5);
  if (plStack_270 == (long *)0x0) {
    pplVar5 = &plStack_270;
    pplVar6 = param_1;
    _JSValueToObject(param_1,pplVar9,pplVar5);
    if (plStack_270 != (long *)0x0) goto LAB_1080e0360;
    pplVar5 = pplVar6;
    func_0x0001080dfa58();
    pplVar9 = param_1;
    _JSObjectMake(param_1,pplVar5,0);
    _JSObjectSetPrototype(param_1,pplVar9,pplVar6);
    uVar2 = param_3 == 0;
    puStack_240 = (undefined1 *)0x0;
    if (!(bool)uVar2) {
      puStack_240 = puStack_210;
    }
    pplStack_230 = &plStack_f8;
    plStack_248 = plVar8;
    uStack_238 = param_3;
    FUN_1080e0e24(&plStack_248);
    pplStack_218 = pplVar3 + 4;
    pcVar10 = (code *)pplVar3[3][4];
    pplStack_228 = pplVar9;
    if (pcVar10 != (code *)0x0) {
      pplVar5 = &plStack_f8;
      func_0x0001080df950();
      if ((int)plVar8 == 0) {
        pplVar5 = &plStack_248;
        (*pcVar10)(&plStack_268,pplVar3[3][3]);
        uVar2 = bStack_f0 == 1;
        if (((bool)uVar2) && (plStack_268 == (long *)0x0)) {
          pplVar5 = (long **)&UNK_10f47a52a;
          func_0x00010b9a0050(&plStack_f8);
        }
        if ((bStack_f0 & 1) == 0) {
          func_0x0001080e0d3c();
          pplVar9 = (long **)0x0;
        }
        else {
          pplVar4 = (long **)0x20;
          __Znwm();
          pplVar6 = &plStack_268;
          pplVar3 = pplVar4;
          func_0x00010b8df8e8();
          (*(code *)(*pplVar3)[2])();
          pplVar3 = pplVar9;
          pplVar5 = pplVar4;
          _JSObjectSetPrivate();
          if (((ulong)pplVar3 & 1) == 0) {
            func_0x00010b94cc20(pplVar4);
            pplVar5 = (long **)&UNK_10f47a561;
            func_0x00010b9a0050(&plStack_f8);
            func_0x0001080e0d3c();
            pplVar9 = (long **)0x0;
          }
          func_0x0001080e0b00(pplVar4);
        }
        if (plStack_268 != (long *)0x0) {
          (**(code **)(*plStack_268 + 0x18))();
        }
        goto LAB_1080e03a0;
      }
      goto LAB_1080e0398;
    }
    auStack_288[0] = 0;
    uStack_278 = 0;
    pplVar5 = (long **)&UNK_10f47a4f7;
    pplVar7 = (long **)auStack_288;
    pplVar6 = (long **)0x32;
    func_0x00010b8dbdd8(&plStack_268,plVar8,&UNK_10f47a4f7,0x32,pplVar7,&plStack_f8);
    uVar2 = bStack_f0 == 1;
    if ((bool)uVar2) {
      pplVar5 = &plStack_268;
      func_0x00010b90003c(&plStack_f8);
    }
    func_0x0001080e0d3c();
    FUN_1080e0bc0(&plStack_268);
  }
  else {
LAB_1080e0360:
    pplVar6 = pplVar5;
    plVar1 = plStack_270;
    _JSValueGetType(param_1,plStack_270);
    uStack_260 = (ulong)param_1 & 0xffffffff;
    plStack_268 = plVar1;
    FUN_1080e07a8(&plStack_248,plVar8,&plStack_268);
    pplVar5 = &plStack_248;
    func_0x00010b90003c(&plStack_f8);
    FUN_1080e0bc0(&plStack_248);
LAB_1080e0398:
    func_0x0001080e0d3c();
  }
  pplVar9 = (long **)0x0;
LAB_1080e03a0:
  FUN_1080e0b24(&puStack_210);
  pplVar3 = &plStack_f8;
  func_0x00010b8ffdac();
  func_0x0001080e0e3c();
  func_0x0001080e0ce0(uStack_10);
  if ((bool)uVar2) {
    return pplVar9;
  }
  ___stack_chk_fail();
  pplVar9 = pplVar3;
  _JSValueIsObject();
  if ((int)pplVar9 == 0) {
    pplVar5 = (long **)0x0;
  }
  else {
    pplVar9 = pplVar5;
    FUN_1080e0138();
    if (pplVar9 != (long **)0x0) {
      do {
        func_0x0001080e0d98();
      } while (extraout_w10_00 != 0);
    }
    pplVar4 = pplVar3;
    _JSObjectGetProperty(pplVar3,pplVar5,pplVar9[2][0x45],pplVar7);
    if ((*pplVar7 == (long *)0x0) &&
       (pplVar9 = pplVar3, _JSValueToObject(pplVar3,pplVar6,pplVar7), *pplVar7 == (long *)0x0)) {
      do {
        pplVar6 = pplVar3;
        _JSObjectGetPrototype(pplVar3,pplVar9);
        pplVar5 = pplVar3;
        _JSValueIsStrictEqual(pplVar3,pplVar6,pplVar4);
        if ((((ulong)pplVar5 & 1) != 0) ||
           (pplVar9 = pplVar3, _JSValueIsObject(pplVar3,pplVar6), (int)pplVar9 == 0)) break;
        pplVar9 = pplVar3;
        _JSValueToObject(pplVar3,pplVar6,pplVar7);
      } while (*pplVar7 == (long *)0x0);
    }
    else {
      pplVar5 = (long **)0x0;
    }
    func_0x0001080e0e3c();
  }
  return pplVar5;
}



/* Entry: 1080e055c; end: 1080e0663;  */

ulong FUN_1080e055c(ulong param_1,long param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int extraout_w10;
  ulong uVar5;
  
  uVar5 = param_1;
  _JSValueIsObject(param_1,param_3);
  if ((int)uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = param_2;
    FUN_1080e0138();
    if (lVar1 != 0) {
      do {
        func_0x0001080e0d98();
      } while (extraout_w10 != 0);
    }
    uVar2 = param_1;
    _JSObjectGetProperty(param_1,param_2,*(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x228),param_4);
    if ((*param_4 == 0) &&
       (uVar3 = param_1, _JSValueToObject(param_1,param_3,param_4), *param_4 == 0)) {
      do {
        uVar4 = param_1;
        _JSObjectGetPrototype(param_1,uVar3);
        uVar5 = param_1;
        _JSValueIsStrictEqual(param_1,uVar4,uVar2);
        if (((uVar5 & 1) != 0) ||
           (uVar3 = param_1, _JSValueIsObject(param_1,uVar4), (int)uVar3 == 0)) break;
        uVar3 = param_1;
        _JSValueToObject(param_1,uVar4,param_4);
      } while (*param_4 == 0);
    }
    else {
      uVar5 = 0;
    }
    FUN_1080e0e3c();
  }
  return uVar5;
}



/* Entry: 1080e0664; end: 1080e0687;  */

void FUN_1080e0664(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001080e0d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080e0688; end: 1080e0743;  */

void FUN_1080e0688(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_70;
  ulong *puStack_68;
  ulong uStack_60;
  ulong *puStack_48;
  
  if (param_1[2] < param_2) {
    uVar3 = param_2;
    FUN_1080e0810();
    uVar2 = *param_1;
    lVar1 = uVar2 + param_1[1] * 0x20;
    uVar4 = uVar2;
    puStack_68 = param_1;
    uStack_60 = param_2;
    puStack_48 = param_1;
    FUN_1080e085c(uVar2,lVar1,uVar3);
    FUN_1080e085c(lVar1,lVar1,uVar4);
    func_0x0001080e0e50();
    uStack_70 = 0;
    if (uVar2 != 0) {
      FUN_1080e082c(uVar2,param_1[1]);
      if (param_1 + 3 != (ulong *)*param_1) {
        __ZdlPv();
      }
    }
    *param_1 = uVar3;
    param_1[2] = param_2;
    func_0x0001080e0958(&uStack_70);
  }
  return;
}



/* Entry: 1080e0744; end: 1080e07a7;  */

void FUN_1080e0744(long *param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  if (param_1[1] == param_1[2]) {
    FUN_1080e098c(auStack_28,param_1);
  }
  else {
    FUN_1080e08ac(*param_1 + param_1[1] * 0x20,param_2);
    param_1[1] = param_1[1] + 1;
  }
  return;
}



/* Entry: 1080e07a8; end: 1080e07bf;  */

void FUN_1080e07a8(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = param_2;
  lVar2 = *param_3;
  param_1[2] = param_3[1];
  param_1[1] = lVar2;
  *(undefined1 *)(param_1 + 3) = 0;
  if (((*(byte *)(param_1 + 3) & 1) == 0) && (plVar1 = (long *)*param_1, plVar1 != (long *)0x0)) {
    *(undefined1 *)(param_1 + 3) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001080e0af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1b8))(plVar1,param_1 + 1);
    return;
  }
  return;
}



/* Entry: 1080e07c0; end: 1080e080f;  */

void FUN_1080e07c0(ulong param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_28;
  
  puVar1 = param_2;
  func_0x0001080e0d20();
  uStack_28 = extraout_x8;
  func_0x00010b8ffe04(auStack_48);
  *param_2 = uStack_40;
  func_0x0001080e0e1c();
  func_0x0001080e0ce0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (param_1 >> 0x3a != 0) {
    _abort();
    for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)((long)puVar1 + -1)) {
      FUN_1080e0bc0();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_1 << 5);
  return;
}



/* Entry: 1080e0810; end: 1080e082b;  */

void FUN_1080e0810(ulong param_1,long param_2)

{
  if (param_1 >> 0x3a != 0) {
    _abort();
    for (; param_2 != 0; param_2 = param_2 + -1) {
      FUN_1080e0bc0();
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_1 << 5);
  return;
}



/* Entry: 1080e082c; end: 1080e085b;  */

void FUN_1080e082c(long param_1,long param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1080e0bc0(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



/* Entry: 1080e085c; end: 1080e08ab;  */

long FUN_1080e085c(long param_1,long param_2,long param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_1080e08ac(param_3,param_1);
    param_3 = param_3 + 0x20;
  }
  return param_3;
}



/* Entry: 1080e08ac; end: 1080e098b;  */

long * FUN_1080e08ac(long *param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long lVar3;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  plVar1 = param_1;
  plVar2 = param_2;
  func_0x0001080e0d20();
  *plVar1 = *plVar2;
  lVar3 = plVar2[1];
  plVar1[2] = plVar2[2];
  plVar1[1] = lVar3;
  *(char *)(plVar1 + 3) = (char)plVar2[3];
  *plVar2 = 0;
  lStack_38 = 0;
  lStack_30 = 0;
  plVar1 = &lStack_38;
  uStack_28 = extraout_x8;
  FUN_1080e01a8();
  param_2[2] = lStack_30;
  param_2[1] = lStack_38;
  *(undefined1 *)(param_2 + 3) = 0;
  func_0x0001080e0ce0(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001080e0df8();
  while (plVar1 != (long *)param_1[1]) {
    FUN_1080e0bc0();
    plVar1 = (long *)(*param_1 + 0x20);
    *param_1 = (long)plVar1;
  }
  return param_1;
}



/* Entry: 1080e098c; end: 1080e0acf;  */

void FUN_1080e098c(long *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  ulong *puStack_68;
  
  uVar7 = param_2[2];
  uVar1 = param_2[1] + 1;
  if (uVar1 - uVar7 <= 0x3ffffffffffffff - uVar7) {
    if (uVar7 >> 0x3d == 0) {
      uVar6 = (uVar7 << 3) / 5;
    }
    else {
      uVar6 = uVar7 << 3;
      if (4 < uVar7 >> 0x3d) {
        uVar6 = 0xffffffffffffffff;
      }
    }
    uVar7 = *param_2;
    if (0x3fffffffffffffe < uVar6) {
      uVar6 = 0x3ffffffffffffff;
    }
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    uVar3 = uVar1;
    FUN_1080e0810();
    uVar6 = *param_2;
    uVar2 = param_2[1];
    uVar4 = uVar6;
    puStack_88 = param_2;
    uStack_80 = uVar1;
    puStack_68 = param_2;
    FUN_1080e085c(uVar6,param_3,uVar3);
    FUN_1080e08ac();
    FUN_1080e085c(param_3,uVar6 + uVar2 * 0x20,uVar4 + 0x20);
    func_0x0001080e0e50();
    uStack_90 = 0;
    if ((uVar6 != 0) && (FUN_1080e082c(uVar6,param_2[1]), param_2 + 3 != (ulong *)*param_2)) {
      __ZdlPv();
    }
    *param_2 = uVar3;
    param_2[1] = param_2[1] + 1;
    param_2[2] = uVar1;
    func_0x0001080e0958(&uStack_90);
    *param_1 = *param_2 + (param_3 - uVar7);
    return;
  }
  _abort();
  if (((*(byte *)(param_1 + 3) & 1) == 0) && (plVar5 = (long *)*param_1, plVar5 != (long *)0x0)) {
    *(undefined1 *)(param_1 + 3) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001080e0af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x1b8))(plVar5,param_1 + 1);
    return;
  }
  return;
}



/* Entry: 1080e0ad0; end: 1080e0b23;  */

void FUN_1080e0ad0(long *param_1)

{
  long *plVar1;
  
  if (((*(byte *)(param_1 + 3) & 1) == 0) && (plVar1 = (long *)*param_1, plVar1 != (long *)0x0)) {
    *(undefined1 *)(param_1 + 3) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001080e0af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1b8))(plVar1,param_1 + 1);
    return;
  }
  return;
}



/* Entry: 1080e0b24; end: 1080e0b8b;  */

void FUN_1080e0b24(void)

{
  long *unaff_x19;
  
  func_0x0001080e0df8();
  FUN_1080e082c();
  if (unaff_x19[2] != 0) {
    if (unaff_x19 + 3 != (long *)*unaff_x19) {
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 1080e0b8c; end: 1080e0bbf;  */

void FUN_1080e0b8c(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0;
  do {
    lVar5 = *(long *)(param_2 + lVar4 * 8);
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *(long *)(param_1 + lVar4 * 8) = lVar5;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 2);
  return;
}



/* Entry: 1080e0bc0; end: 1080e0c4b;  */

/* WARNING: Possible PIC construction at 0x0001080e0bdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080e0be0) */
/* WARNING: Removing unreachable block (ram,0x0001080e0c0c) */
/* WARNING: Removing unreachable block (ram,0x0001080e0c00) */
/* WARNING: Removing unreachable block (ram,0x0001080e0d5c) */

void FUN_1080e0bc0(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x0001080e0d20();
  if ((char)plVar1[3] == '\x01') {
    func_0x0001080e0df8();
    (**(code **)(*plVar1 + 0x1c0))();
    *(undefined1 *)(param_1 + 3) = 0;
  }
  return;
}



/* Entry: 1080e0c4c; end: 1080e0c6f;  */

void FUN_1080e0c4c(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001080e0d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080e0c70; end: 1080e0cbb;  */

long FUN_1080e0c70(long param_1)

{
  func_0x00010b9a3d64(param_1 + 0x28);
  func_0x0001080e0c9c(param_1 + 0x18);
  return param_1;
}



/* Entry: 1080e0cbc; end: 1080e0e23;  */

void FUN_1080e0cbc(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001080e0d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080e0e24; end: 1080e0e3b;  */

void FUN_1080e0e24(long param_1)

{
  FUN_1080e01a8(param_1 + 0x20);
  return;
}



/* Entry: 1080e0e3c; end: 1080e0e8b;  */

void FUN_1080e0e3c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *unaff_x19;
  
  if (unaff_x19 != (long *)0x0) {
    plVar1 = unaff_x19 + 1;
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
                    /* WARNING: Could not recover jumptable at 0x0001080e0d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1080e0e8c; end: 1080e114f;  */

long FUN_1080e0e8c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_28;
  
  if (((int)param_1[1] != 5) || (lVar1 = *param_1, lVar1 == 0)) {
    func_0x00010b99f5f8(&uStack_28,&UNK_10f47a5c6);
    func_0x00010b99ff08(param_3,&uStack_28);
    func_0x000104bda960(uStack_28);
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1080e1150; end: 1080e1227;  */

long * FUN_1080e1150(long *param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  plVar4 = param_1;
  func_0x0001080e4928();
  uStack_28 = extraout_x8;
  func_0x00010b8db370();
  *plVar4 = (long)&PTR_FUN_110a1fcc0;
  plVar4[0x41] = param_3;
  FUN_1080e3e30(plVar4 + 0x44);
  param_1[0x4b] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  plVar4 = param_1 + 0x4c;
  FUN_1080e0180();
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  _JSContextGroupCreate();
  param_1[0x42] = (long)plVar4;
  _JSGlobalContextCreateInGroup();
  param_1[0x43] = (long)plVar4;
  puStack_50 = &UNK_10f47a5dd;
  uStack_48 = 0x10;
  (**(code **)(*param_1 + 0x58))(&lStack_40,param_1,&puStack_50);
  _JSGlobalContextSetName(param_1[0x43],uStack_38);
  plVar4 = &lStack_40;
  func_0x0001080e4278();
  func_0x0001080e4904(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  plVar2 = plVar4;
  func_0x0001080e4928();
  uStack_88 = extraout_x8_00;
  *plVar2 = (long)&PTR_FUN_110a1fcc0;
  while (plVar4[0x57] != 0) {
    func_0x0001080e4bd4();
    FUN_1080e13b0(plVar2 + 0x52);
    func_0x0001080e4d98();
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  FUN_1080e0180(&uStack_b0);
  FUN_1080df8d0(plVar4 + 0x4c,&uStack_b0);
  FUN_1080e0bc0(&uStack_b0);
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  FUN_1080e3e30(&uStack_b0);
  func_0x0001080e1410(plVar4 + 0x44,&uStack_b0);
  func_0x0001080e4ab0();
  func_0x00010b8db7b4(plVar4);
  lVar3 = plVar4[0x43];
  lVar6 = plVar4[0x42];
  plVar4[0x43] = 0;
  plVar4[0x42] = 0;
  _JSGlobalContextRelease(lVar3);
  _JSContextGroupRelease(lVar6);
  puVar7 = (undefined8 *)plVar4[0x53];
  plVar4[0x57] = 0;
  while( true ) {
    puVar8 = (undefined8 *)plVar4[0x54];
    uVar5 = (long)puVar8 - (long)puVar7 >> 3;
    if (uVar5 < 3) break;
    __ZdlPv(*puVar7);
    puVar7 = (undefined8 *)(plVar4[0x53] + 8);
    plVar4[0x53] = (long)puVar7;
  }
  if (uVar5 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar5 != 2) goto LAB_1080e1340;
    lVar3 = 0x200;
  }
  plVar4[0x56] = lVar3;
LAB_1080e1340:
  for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
    __ZdlPv(*puVar7);
  }
  lVar3 = plVar4[0x54];
  while (uVar1 = lVar3 == plVar4[0x53], !(bool)uVar1) {
    lVar3 = lVar3 + -8;
    plVar4[0x54] = lVar3;
  }
  if (plVar2[0x52] != 0) {
    __ZdlPv();
  }
  FUN_1080e0bc0(plVar4 + 0x4c);
  func_0x0001080e4278(plVar4 + 0x44);
  plVar2 = plVar4;
  func_0x00010b8db420();
  func_0x0001080e4904(uStack_88);
  if ((bool)uVar1) {
    return plVar4;
  }
  ___stack_chk_fail();
  lVar3 = plVar2[4];
  plVar2[5] = plVar2[5] + -1;
  plVar2[4] = lVar3 + 1U;
  plVar4 = plVar2;
  if (0x3ff < lVar3 + 1U) {
    plVar4 = *(long **)plVar2[1];
    __ZdlPv(plVar4);
    plVar2[1] = plVar2[1] + 8;
    plVar2[4] = plVar2[4] + -0x200;
  }
  return plVar4;
}



/* Entry: 1080e1228; end: 1080e13af;  */

undefined8 * FUN_1080e1228(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  puVar2 = param_1;
  func_0x0001080e4928();
  *puVar2 = &PTR_FUN_110a1fcc0;
  uStack_38 = extraout_x8;
  while (param_1[0x57] != 0) {
    func_0x0001080e4bd4();
    FUN_1080e13b0(puVar2 + 0x52);
    func_0x0001080e4d98();
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_1080e0180(&uStack_60);
  FUN_1080df8d0(param_1 + 0x4c,&uStack_60);
  FUN_1080e0bc0(&uStack_60);
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_1080e3e30(&uStack_60);
  func_0x0001080e1410(param_1 + 0x44,&uStack_60);
  func_0x0001080e4ab0();
  func_0x00010b8db7b4(param_1);
  uVar3 = param_1[0x43];
  uVar6 = param_1[0x42];
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  _JSGlobalContextRelease(uVar3);
  _JSContextGroupRelease(uVar6);
  puVar7 = (undefined8 *)param_1[0x53];
  param_1[0x57] = 0;
  while( true ) {
    puVar8 = (undefined8 *)param_1[0x54];
    uVar4 = (long)puVar8 - (long)puVar7 >> 3;
    if (uVar4 < 3) break;
    __ZdlPv(*puVar7);
    puVar7 = (undefined8 *)(param_1[0x53] + 8);
    param_1[0x53] = puVar7;
  }
  if (uVar4 == 1) {
    uVar3 = 0x100;
  }
  else {
    if (uVar4 != 2) goto LAB_1080e1340;
    uVar3 = 0x200;
  }
  param_1[0x56] = uVar3;
LAB_1080e1340:
  for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
    __ZdlPv(*puVar7);
  }
  lVar5 = param_1[0x54];
  while (uVar1 = lVar5 == param_1[0x53], !(bool)uVar1) {
    lVar5 = lVar5 + -8;
    param_1[0x54] = lVar5;
  }
  if (puVar2[0x52] != 0) {
    __ZdlPv();
  }
  FUN_1080e0bc0(param_1 + 0x4c);
  func_0x0001080e4278(param_1 + 0x44);
  puVar2 = param_1;
  func_0x00010b8db420();
  func_0x0001080e4904(uStack_38);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = puVar2[4];
  puVar2[5] = puVar2[5] + -1;
  puVar2[4] = lVar5 + 1U;
  puVar7 = puVar2;
  if (0x3ff < lVar5 + 1U) {
    puVar7 = *(undefined8 **)puVar2[1];
    __ZdlPv(puVar7);
    puVar2[1] = puVar2[1] + 8;
    puVar2[4] = puVar2[4] + -0x200;
  }
  return puVar7;
}



/* Entry: 1080e13b0; end: 1080e148f;  */

void FUN_1080e13b0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0x20) + 1;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(ulong *)(param_1 + 0x20) = uVar1;
  if (0x3ff < uVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x200;
  }
  return;
}



/* Entry: 1080e1490; end: 1080e1493;  */

undefined8 * FUN_1080e1490(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  puVar2 = param_1;
  func_0x0001080e4928();
  *puVar2 = &PTR_FUN_110a1fcc0;
  uStack_38 = extraout_x8;
  while (param_1[0x57] != 0) {
    func_0x0001080e4bd4();
    FUN_1080e13b0(puVar2 + 0x52);
    func_0x0001080e4d98();
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_1080e0180(&uStack_60);
  FUN_1080df8d0(param_1 + 0x4c,&uStack_60);
  FUN_1080e0bc0(&uStack_60);
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  FUN_1080e3e30(&uStack_60);
  func_0x0001080e1410(param_1 + 0x44,&uStack_60);
  func_0x0001080e4ab0();
  func_0x00010b8db7b4(param_1);
  uVar3 = param_1[0x43];
  uVar6 = param_1[0x42];
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  _JSGlobalContextRelease(uVar3);
  _JSContextGroupRelease(uVar6);
  puVar7 = (undefined8 *)param_1[0x53];
  param_1[0x57] = 0;
  while( true ) {
    puVar8 = (undefined8 *)param_1[0x54];
    uVar4 = (long)puVar8 - (long)puVar7 >> 3;
    if (uVar4 < 3) break;
    __ZdlPv(*puVar7);
    puVar7 = (undefined8 *)(param_1[0x53] + 8);
    param_1[0x53] = puVar7;
  }
  if (uVar4 == 1) {
    uVar3 = 0x100;
  }
  else {
    if (uVar4 != 2) goto LAB_1080e1340;
    uVar3 = 0x200;
  }
  param_1[0x56] = uVar3;
LAB_1080e1340:
  for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
    __ZdlPv(*puVar7);
  }
  lVar5 = param_1[0x54];
  while (uVar1 = lVar5 == param_1[0x53], !(bool)uVar1) {
    lVar5 = lVar5 + -8;
    param_1[0x54] = lVar5;
  }
  if (puVar2[0x52] != 0) {
    __ZdlPv();
  }
  FUN_1080e0bc0(param_1 + 0x4c);
  func_0x0001080e4278(param_1 + 0x44);
  puVar2 = param_1;
  func_0x00010b8db420();
  func_0x0001080e4904(uStack_38);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar5 = puVar2[4];
  puVar2[5] = puVar2[5] + -1;
  puVar2[4] = lVar5 + 1U;
  puVar7 = puVar2;
  if (0x3ff < lVar5 + 1U) {
    puVar7 = *(undefined8 **)puVar2[1];
    __ZdlPv(puVar7);
    puVar2[1] = puVar2[1] + 8;
    puVar2[4] = puVar2[4] + -0x200;
  }
  return puVar7;
}



/* Entry: 1080e1494; end: 1080e14a7;  */

void FUN_1080e1494(void)

{
  FUN_1080e1228();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1080e14a8; end: 1080e17cb;  */

void FUN_1080e14a8(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x9;
  code *extraout_x9_00;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_218;
  undefined **ppuStack_1e8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [32];
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined *puStack_168;
  undefined *apuStack_160 [3];
  undefined1 auStack_148 [8];
  undefined *apuStack_140 [3];
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [8];
  undefined *apuStack_d0 [3];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined *puStack_78;
  undefined *apuStack_70 [3];
  undefined8 uStack_58;
  
  func_0x0001080e4e70();
  func_0x0001080e4928();
  puStack_78 = &UNK_10f47a5ee;
  apuStack_70[0] = (undefined *)0x9;
  uStack_58 = extraout_x8;
  func_0x0001080e4cd8();
  (*extraout_x9)(&stack0xfffffffffffffef8);
  ppuVar5 = (undefined **)&stack0xfffffffffffffef8;
  func_0x0001080e1410(unaff_x19 + 0x44,ppuVar5);
  func_0x0001080e4278(&stack0xfffffffffffffef8);
  func_0x0001080e4b7c(&puStack_78);
  (*extraout_x9_00)();
  func_0x0001080e4ac4();
  if (!(bool)in_ZR) goto LAB_1080e1798;
  func_0x0001080e4c10();
  ppuVar5 = apuStack_70;
  param_3 = (undefined **)&stack0xfffffffffffffef8;
  func_0x0001080e496c(auStack_98);
  func_0x0001080e4ac4();
  if ((bool)in_ZR) {
    func_0x0001080e4cc0(uStack_90);
    unaff_x19[0x48] = (long)ppuVar5;
    func_0x0001080e4b58();
    func_0x0001080e4c10();
    ppuVar5 = apuStack_70;
    param_3 = (undefined **)&stack0xfffffffffffffef8;
    func_0x0001080e496c(auStack_b8);
    func_0x0001080e4ac4();
    if ((bool)in_ZR) {
      lVar2 = unaff_x19[0x43];
      func_0x0001080e4cc0(uStack_b0);
      _JSObjectGetPrototype();
      unaff_x19[0x47] = lVar2;
      func_0x0001080e4b58();
      func_0x0001080e4c10();
      ppuVar5 = apuStack_70;
      param_3 = (undefined **)&stack0xfffffffffffffef8;
      func_0x0001080e496c(auStack_d8);
      func_0x0001080e4ac4();
      if ((bool)in_ZR) {
        FUN_1080e01a8(auStack_e8);
        ppuVar5 = apuStack_d0;
        param_3 = (undefined **)&stack0xfffffffffffffef8;
        (**(code **)(*unaff_x19 + 0x118))(auStack_128);
        func_0x0001080e4ac4();
        if ((bool)in_ZR) {
          func_0x0001080e4cc0(uStack_120);
          unaff_x19[0x49] = (long)ppuVar5;
          func_0x0001080e4b58();
          puStack_168 = &UNK_10f47a60d;
          apuStack_160[0] = (undefined *)0x7;
          func_0x0001080e4c10();
          ppuVar5 = apuStack_70;
          param_3 = &puStack_168;
          func_0x0001080e496c(auStack_148);
          func_0x0001080e4ac4();
          if ((bool)in_ZR) {
            ppuVar5 = apuStack_140;
            plVar3 = unaff_x19;
            (**(code **)(*unaff_x19 + 0x180))();
            if (((ulong)plVar3 & 1) == 0) {
              func_0x0001080e4cc0(apuStack_140[0]);
              unaff_x19[0x4a] = (long)ppuVar5;
              func_0x0001080e4b58();
              puStack_188 = &UNK_10f47a5ee;
              uStack_180 = 9;
              func_0x0001080e4c10();
              ppuVar5 = apuStack_140;
              param_3 = &puStack_188;
              func_0x0001080e496c(&puStack_168);
              func_0x0001080e4ac4();
              if ((bool)in_ZR) {
                puStack_1b8 = &UNK_10f47a615;
                uStack_1b0 = 5;
                func_0x0001080e4c10();
                ppuVar5 = apuStack_160;
                param_3 = &puStack_1b8;
                func_0x0001080e496c(&puStack_188);
                func_0x0001080e4ac4();
                if ((bool)in_ZR) {
                  func_0x0001080e4cc0(uStack_180);
                  unaff_x19[0x4b] = (long)ppuVar5;
                  func_0x0001080e4b58();
                  func_0x0001080e4c54();
                  func_0x0001080e4dac();
                  goto LAB_1080e1674;
                }
                func_0x0001080e4c54();
              }
              func_0x0001080e4dac();
            }
            else {
LAB_1080e1674:
              FUN_1080e3e74(&puStack_188,&UNK_10f47a61b);
              puStack_1b8 = &UNK_10f47a72d;
              uStack_1b0 = 0x1b;
              param_3 = &puStack_1b8;
              func_0x0001080e496c(auStack_1a8);
              func_0x00010b8db52c(&puStack_168);
              ppuVar5 = &puStack_168;
              FUN_1080df8d0(unaff_x19 + 0x4c,ppuVar5);
              func_0x0001080e4dac();
              FUN_1080e0bc0(auStack_1a8);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_188);
            }
          }
          FUN_1080e0bc0(auStack_148);
        }
        FUN_1080e0bc0(auStack_128);
      }
      FUN_1080e0bc0(auStack_d8);
    }
    FUN_1080e0bc0(auStack_b8);
  }
  FUN_1080e0bc0(auStack_98);
LAB_1080e1798:
  ppuVar4 = &puStack_78;
  FUN_1080e0bc0();
  func_0x0001080e4904(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080e49e8();
  _JSContextGetGlobalObject();
  func_0x0001080e495c();
  uVar6 = 5;
  func_0x0001080e4928();
  uVar1 = cRam00000001138468a0 == '\x01';
  if ((bool)uVar1) {
    ppuStack_1e8 = param_3;
    FUN_1080e07a8(ppuVar4,ppuVar5,&ppuStack_1e8);
  }
  else {
    *ppuVar4 = (undefined *)0x0;
    ppuVar4[1] = (undefined *)param_3;
    ppuVar4[2] = (undefined *)(uVar6 & 0xffffffff);
    *(undefined1 *)(ppuVar4 + 3) = 0;
  }
  func_0x0001080e4904(extraout_x8_00);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080e4a98();
  func_0x0001080e4d64();
  func_0x000104bda960(uStack_218);
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  return;
}



/* Entry: 1080e17cc; end: 1080e17ef;  */

void FUN_1080e17cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_28;
  
  func_0x0001080e49e8();
  _JSContextGetGlobalObject();
  func_0x0001080e495c();
  uVar2 = 5;
  func_0x0001080e4928();
  uVar1 = cRam00000001138468a0 == '\x01';
  if ((bool)uVar1) {
    uStack_28 = param_3;
    FUN_1080e07a8(param_1,param_2,&uStack_28);
  }
  else {
    *param_1 = 0;
    param_1[1] = param_3;
    param_1[2] = uVar2 & 0xffffffff;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  func_0x0001080e4904(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080e4a98();
  func_0x0001080e4d64();
  func_0x000104bda960(uStack_58);
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  return;
}



/* Entry: 1080e17f0; end: 1080e1863;  */

void FUN_1080e17f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_28;
  ulong uStack_20;
  undefined8 uStack_18;
  
  func_0x0001080e4928();
  uVar1 = cRam00000001138468a0 == '\x01';
  uStack_18 = extraout_x8;
  if ((bool)uVar1) {
    uStack_20 = (ulong)param_4;
    uStack_28 = param_3;
    FUN_1080e07a8(param_1,param_2,&uStack_28);
  }
  else {
    *param_1 = 0;
    param_1[1] = param_3;
    param_1[2] = (ulong)param_4;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  func_0x0001080e4904(uStack_18);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080e4a98();
  func_0x0001080e4d64();
  func_0x000104bda960(uStack_58);
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  return;
}



/* Entry: 1080e1864; end: 1080e1893;  */

void FUN_1080e1864(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_28;
  
  func_0x0001080e4a98();
  func_0x0001080e4d64();
  func_0x000104bda960(uStack_28);
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  return;
}



/* Entry: 1080e1894; end: 1080e19cf;  */

void FUN_1080e1894(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x9;
  long *unaff_x20;
  long unaff_x22;
  undefined8 uStack_d8;
  undefined1 auStack_80 [24];
  undefined8 *puStack_68;
  ulong uStack_60;
  undefined1 auStack_50 [8];
  long lStack_48;
  undefined8 uStack_38;
  
  func_0x0001080e4df0();
  func_0x0001080e4cb4();
  func_0x0001080e4928();
  bVar1 = *(byte *)((long)param_2 + 0x17);
  uVar2 = bVar1 == 0;
  uStack_60 = param_2[1];
  puStack_68 = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    uStack_60 = (ulong)bVar1;
    puStack_68 = param_2;
  }
  uStack_38 = extraout_x8_00;
  func_0x0001080e4cd8();
  (*extraout_x9)(auStack_50);
  FUN_1080e3e30(&puStack_68);
  if (*(long *)(unaff_x22 + 8) != 0) {
    (**(code **)(*unaff_x20 + 0x58))(auStack_80);
    func_0x0001080e1410(&puStack_68,auStack_80);
    func_0x0001080e4ab0();
  }
  func_0x0001080e4c1c();
  uVar6 = 0;
  lVar8 = 0;
  uVar5 = uStack_60;
  _JSEvaluateScript();
  func_0x0001080e4d2c();
  func_0x0001080e49f8();
  func_0x0001080e4278(&puStack_68);
  func_0x0001080e4278(auStack_50);
  func_0x0001080e4904(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080e4e70();
  puVar3 = *(undefined8 **)(lStack_48 + 0x218);
  if (lVar8 != 0) {
    FUN_1080e2260(puVar3,uVar6,lVar8);
    func_0x0001080e4c38();
    return;
  }
  uVar4 = uVar5;
  _JSValueGetType(puVar3,uVar5);
  puVar7 = puVar3;
  func_0x0001080e4b7c();
  func_0x0001080e4928();
  uVar2 = cRam00000001138468a0 == '\x01';
  if ((bool)uVar2) {
    FUN_1080e07a8(puVar3,uVar4,&stack0xffffffffffffff58);
  }
  else {
    *puVar3 = 0;
    puVar3[1] = uVar5;
    puVar3[2] = (ulong)puVar7 & 0xffffffff;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  func_0x0001080e4904(extraout_x8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001080e4a98();
    func_0x0001080e4d64();
    func_0x000104bda960(uStack_d8);
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    return;
  }
  return;
}



/* Entry: 1080e19d0; end: 1080e1a47;  */

void FUN_1080e19d0(void)

{
  undefined8 uStack_28;
  
  func_0x0001080e4a98();
  func_0x0001080e4d64();
  func_0x000104bda960(uStack_28);
  func_0x0001080e4c98();
  FUN_1080e0180();
  return;
}



/* Entry: 1080e1a48; end: 1080e1a77;  */

undefined1  [16] FUN_1080e1a48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  if (pcRam00000001138249e0 != (code *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x218);
    (*pcRam00000001138249e0)(uVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = uVar1;
    return auVar2;
  }
  return ZEXT816(0);
}



/* Entry: 1080e1a78; end: 1080e1aa3;  */

void FUN_1080e1a78(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_28;
  
  func_0x0001080e49e8();
  uVar2 = 0;
  uVar3 = 0;
  _JSObjectMake();
  func_0x0001080e495c();
  uVar4 = 5;
  func_0x0001080e4928();
  uVar1 = cRam00000001138468a0 == '\x01';
  if ((bool)uVar1) {
    uStack_28 = uVar3;
    FUN_1080e07a8(param_1,uVar2,&uStack_28);
  }
  else {
    *param_1 = 0;
    param_1[1] = uVar3;
    param_1[2] = uVar4 & 0xffffffff;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  func_0x0001080e4904(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080e4a98();
  func_0x0001080e4d64();
  func_0x000104bda960(uStack_58);
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  return;
}



/* Entry: 1080e1aa4; end: 1080e1c9b;  */

void FUN_1080e1aa4(undefined8 param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 extraout_x8;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long lVar9;
  long *plVar10;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  
  func_0x0001080e4cb4();
  func_0x0001080e4928();
  lVar9 = *param_2;
  plVar6 = (long *)0x20;
  uStack_58 = extraout_x8;
  __Znwm();
  plVar10 = plVar6 + 1;
  *plVar10 = 1;
  *plVar6 = (long)&PTR_FUN_110a1fc30;
  plVar6[2] = (long)unaff_x20;
  if (lVar9 != 0) {
    plVar7 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6[3] = lVar9;
  FUN_1080dfa1c();
  plVar7 = plVar6;
  (**(code **)(*plVar6 + 0x10))();
  func_0x0001080e4e08();
  _JSObjectMake();
  func_0x0001080e4b94();
  func_0x00010b9a35e8();
  if (*plVar7 == 0) goto LAB_1080e1bfc;
  if (*(int *)(*plVar7 + 0xc) == 0) goto LAB_1080e1bfc;
  if ((bRam0000000113729350 & 1) == 0) goto LAB_1080e1c68;
  while( true ) {
    func_0x0001080e4b94();
    func_0x00010b9a35e8();
    (**(code **)(*unaff_x20 + 0x78))(auStack_78);
    bVar1 = *(byte *)(param_3 + 8);
    param_3 = (ulong)bVar1;
    if ((bVar1 & 1) == 0) {
      unaff_x21[1] = 0;
      *unaff_x21 = 0;
      unaff_x21[3] = 0;
      unaff_x21[2] = 0;
      FUN_1080e0180();
    }
    else {
      func_0x0001080e4e08();
      _JSObjectSetProperty();
    }
    FUN_1080e0bc0(auStack_78);
    if (bVar1 != 0) {
LAB_1080e1bfc:
      func_0x0001080e4e08();
      _JSObjectSetPrototype();
      func_0x0001080e4bf0();
    }
    do {
      uVar4 = *plVar10 + -1 == 0;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((bool)uVar4) {
      (**(code **)(*plVar6 + 8))(plVar6);
    }
    func_0x0001080e4904(uStack_58);
    if ((bool)uVar4) break;
    ___stack_chk_fail();
LAB_1080e1c68:
    iVar5 = 0x13729350;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      puVar8 = &DAT_10f68f148;
      _JSStringCreateWithUTF8CString();
      puRam0000000113729348 = puVar8;
      ___cxa_guard_release();
    }
  }
  return;
}



/* Entry: 1080e1c9c; end: 1080e1cbf;  */

void FUN_1080e1c9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_28;
  
  func_0x0001080e49e8();
  _JSValueMakeBoolean();
  func_0x0001080e495c();
  uVar2 = 2;
  func_0x0001080e4928();
  uVar1 = cRam00000001138468a0 == '\x01';
  if ((bool)uVar1) {
    uStack_28 = param_3;
    FUN_1080e07a8(param_1,param_2,&uStack_28);
  }
  else {
    *param_1 = 0;
    param_1[1] = param_3;
    param_1[2] = uVar2 & 0xffffffff;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  func_0x0001080e4904(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080e4a98();
  func_0x0001080e4d64();
  func_0x000104bda960(uStack_58);
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  return;
}



/* Entry: 1080e1cc0; end: 1080e1ccf;  */

void FUN_1080e1cc0(long *param_1,int param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001080e1ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x238))((double)param_2);
  return;
}



/* Entry: 1080e1cd0; end: 1080e1d47;  */

void FUN_1080e1cd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_28;
  
  func_0x0001080e49e8();
  _JSValueMakeNumber();
  func_0x0001080e495c();
  uVar2 = 3;
  func_0x0001080e4928();
  uVar1 = cRam00000001138468a0 == '\x01';
  if ((bool)uVar1) {
    uStack_28 = param_3;
    FUN_1080e07a8(param_1,param_2,&uStack_28);
  }
  else {
    *param_1 = 0;
    param_1[1] = param_3;
    param_1[2] = uVar2 & 0xffffffff;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  func_0x0001080e4904(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080e4a98();
  func_0x0001080e4d64();
  func_0x000104bda960(uStack_58);
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  return;
}



/* Entry: 1080e1d48; end: 1080e1ddf;  */

void FUN_1080e1d48(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_a8;
  undefined8 uStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  puVar4 = &uStack_50;
  func_0x0001080e4a30();
  func_0x0001080e4928();
  uVar1 = *(char *)(param_1 + 0x1f8) == '\x01';
  uStack_38 = extraout_x8_00;
  if ((bool)uVar1) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    func_0x00010b9972a0();
    uStack_50 = uVar2;
    uStack_48 = uVar3;
    func_0x0001080e4da4();
  }
  else {
    unaff_x19 = (undefined8 *)*param_2;
    puVar4 = (undefined8 *)param_2[1];
    _JSStringCreateWithCharacters(unaff_x19,puVar4);
    func_0x0001080e4a70();
    func_0x0001080e495c();
    FUN_1080e17f0();
    func_0x0001080e4ab0();
  }
  func_0x0001080e4904(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080e49e8();
  _JSValueMakeNull();
  func_0x0001080e495c();
  uVar5 = 1;
  func_0x0001080e4928();
  uVar1 = cRam00000001138468a0 == '\x01';
  if ((bool)uVar1) {
    uStack_78 = param_3;
    FUN_1080e07a8(unaff_x19,puVar4,&uStack_78);
  }
  else {
    *unaff_x19 = 0;
    unaff_x19[1] = param_3;
    unaff_x19[2] = uVar5 & 0xffffffff;
    *(undefined1 *)(unaff_x19 + 3) = 0;
  }
  func_0x0001080e4904(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080e4a98();
  func_0x0001080e4d64();
  func_0x000104bda960(uStack_a8);
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  return;
}



/* Entry: 1080e1de0; end: 1080e1e27;  */

void FUN_1080e1de0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_28;
  
  func_0x0001080e49e8();
  _JSValueMakeNull();
  func_0x0001080e495c();
  uVar2 = 1;
  func_0x0001080e4928();
  uVar1 = cRam00000001138468a0 == '\x01';
  if ((bool)uVar1) {
    uStack_28 = param_3;
    FUN_1080e07a8(param_1,param_2,&uStack_28);
  }
  else {
    *param_1 = 0;
    param_1[1] = param_3;
    param_1[2] = uVar2 & 0xffffffff;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  func_0x0001080e4904(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080e4a98();
  func_0x0001080e4d64();
  func_0x000104bda960(uStack_58);
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  return;
}



/* Entry: 1080e1e28; end: 1080e1e6f;  */

void FUN_1080e1e28(long param_1)

{
  undefined8 uStack_38;
  
  func_0x0001080e4cb4();
  uStack_38 = 0;
  _JSObjectMakeArray(*(undefined8 *)(param_1 + 0x218),0,0,&uStack_38);
  func_0x0001080e49f8();
  return;
}



/* Entry: 1080e1e70; end: 1080e1f73;  */

void FUN_1080e1e70(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined1 in_ZR;
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 extraout_x8;
  long *unaff_x22;
  undefined1 auStack_150 [8];
  long lStack_148;
  long lStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [8];
  undefined1 *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [128];
  undefined8 uStack_58;
  
  func_0x0001080e4df0();
  func_0x0001080e4cb4();
  func_0x0001080e4928();
  lStack_e0 = 0x10;
  lStack_e8 = 0;
  puStack_f0 = auStack_d8;
  uStack_58 = extraout_x8;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uStack_108 = param_2[1];
    uStack_110 = *param_2;
    in_ZR = lStack_e8 == lStack_e0;
    if ((bool)in_ZR) {
      FUN_1080e4338(auStack_f8,&puStack_f0,puStack_f0 + lStack_e8 * 8,1,&uStack_110);
    }
    else {
      *(undefined8 *)(puStack_f0 + lStack_e8 * 8) = *param_2;
      lStack_e8 = lStack_e8 + 1;
    }
    param_2 = param_2 + 2;
  }
  func_0x0001080e4c1c();
  _JSObjectMakeArray();
  func_0x0001080e4d2c();
  func_0x0001080e49f8();
  if ((lStack_e0 != 0) && (in_ZR = auStack_d8 == puStack_f0, !(bool)in_ZR)) {
    __ZdlPv();
  }
  func_0x0001080e4904(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  ppuVar1 = &PTR___tlv_bootstrap_11340e110;
  (*(code *)PTR___tlv_bootstrap_11340e110)();
  puVar2 = *ppuVar1;
  if (puVar2 != (undefined *)0x0) {
    if ((*(long *)(puVar2 + 0x60) != 0) &&
       (*(ulong *)(puVar2 + 0x18) <= *(long *)(puVar2 + 0x10) + 1U)) {
      lStack_140 = *(long *)(puVar2 + 8);
      lStack_148 = lStack_140 + *(long *)(puVar2 + 0x60) * 8;
      func_0x00010b94cce0(auStack_150,puVar2 + 8,&lStack_140,&lStack_148);
      *(undefined8 *)(puVar2 + 0x60) = 0;
    }
    func_0x00010b94cd70(puVar2 + 8,auStack_138);
    return;
  }
  if (unaff_x22 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b94cc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x22 + 0x18))(unaff_x22);
    return;
  }
  return;
}



/* Entry: 1080e1f74; end: 1080e1f7b;  */

void FUN_1080e1f74(undefined8 param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  long lStack_38;
  long lStack_30;
  long *plStack_28;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340e110;
  (*(code *)PTR___tlv_bootstrap_11340e110)();
  puVar2 = *ppuVar1;
  if (puVar2 != (undefined *)0x0) {
    plStack_28 = param_2;
    if ((*(long *)(puVar2 + 0x60) != 0) &&
       (*(ulong *)(puVar2 + 0x18) <= *(long *)(puVar2 + 0x10) + 1U)) {
      lStack_30 = *(long *)(puVar2 + 8);
      lStack_38 = lStack_30 + *(long *)(puVar2 + 0x60) * 8;
      func_0x00010b94cce0(auStack_40,puVar2 + 8,&lStack_30,&lStack_38);
      *(undefined8 *)(puVar2 + 0x60) = 0;
    }
    func_0x00010b94cd70(puVar2 + 8,&plStack_28);
    return;
  }
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b94cc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))(param_2);
    return;
  }
  return;
}



/* Entry: 1080e1f7c; end: 1080e2037;  */

void FUN_1080e1f7c(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_58;
  
  func_0x0001080e4a30();
  uVar3 = *(undefined8 *)(param_1 + 0x218);
  lStack_58 = 0;
  lVar4 = param_2[2];
  if (lVar4 != 0) {
    plVar1 = (long *)*param_2;
    lVar2 = param_2[1];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
    _JSObjectMakeArrayBufferWithBytesNoCopy(uVar3,lVar2,lVar4,FUN_1080e1f74,plVar1,&lStack_58);
    if (lStack_58 != 0) {
      func_0x0001080e1974();
      return;
    }
  }
  func_0x0001080e4bf0();
  return;
}



/* Entry: 1080e2038; end: 1080e20df;  */

void FUN_1080e2038(long *param_1,long param_2,int *param_3,long *param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 auStack_40 [2];
  
  if (*param_3 == 9) {
    *param_1 = param_2;
    lVar3 = param_4[1];
    lVar2 = *param_4;
  }
  else {
    lVar2 = param_2;
    func_0x0001080e4990(*param_4);
    if ((*(byte *)(param_5 + 8) & 1) != 0) {
      auStack_40[0] = 0;
      iVar1 = *param_3;
      if (8 < iVar1 - 1U) {
        iVar1 = 0;
      }
      _JSObjectMakeTypedArrayWithArrayBuffer
                (*(undefined8 *)(param_2 + 0x218),iVar1,lVar2,auStack_40);
      func_0x0001080e4d2c();
      func_0x0001080e1974(param_1,param_2,param_5);
      return;
    }
    *param_1 = *(long *)(param_2 + 0x140);
    lVar3 = *(long *)(param_2 + 0x150);
    lVar2 = *(long *)(param_2 + 0x148);
  }
  param_1[2] = lVar3;
  param_1[1] = lVar2;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1080e20e0; end: 1080e225f;  */

void FUN_1080e20e0(long param_1,long *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 extraout_x8;
  undefined8 *unaff_x20;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uStack_58;
  
  func_0x0001080e4a30();
  puVar3 = *(undefined8 **)(param_1 + 0x218);
  func_0x0001080dfa58();
  lVar4 = *param_2;
  if (lVar4 != 0) {
    func_0x0001080e4bf8();
  }
  _JSObjectMake(puVar3,param_1);
  func_0x0001080e495c();
  uVar2 = 5;
  func_0x0001080e4928();
  uVar1 = cRam00000001138468a0 == '\x01';
  if ((bool)uVar1) {
    FUN_1080e07a8(puVar3,param_1,&stack0xffffffffffffffd8);
  }
  else {
    *puVar3 = 0;
    puVar3[1] = lVar4;
    puVar3[2] = uVar2 & 0xffffffff;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  func_0x0001080e4904(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080e4a98();
  func_0x0001080e4d64();
  func_0x000104bda960(uStack_58);
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  return;
}



/* Entry: 1080e2260; end: 1080e22b3;  */

long * FUN_1080e2260(ulong param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined1 in_ZR;
  undefined1 uVar8;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined *puVar16;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar17;
  byte bVar18;
  long alStack_268 [3];
  undefined *puStack_250;
  ulong uStack_248;
  undefined1 auStack_240 [8];
  long alStack_238 [3];
  undefined1 auStack_220 [8];
  long alStack_218 [3];
  undefined1 auStack_200 [8];
  undefined8 auStack_1f8 [3];
  undefined1 auStack_1e0 [8];
  undefined8 auStack_1d8 [3];
  undefined1 auStack_1c0 [32];
  long *plStack_1a0;
  long **pplStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 auStack_180 [16];
  long *aplStack_170 [3];
  undefined1 uStack_158;
  undefined1 auStack_150 [32];
  long *plStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 uStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  plVar15 = param_3;
  func_0x0001080e4928();
  uStack_28 = extraout_x8;
  _JSValueGetType();
  uStack_30 = param_1 & 0xffffffff;
  plStack_38 = param_3;
  func_0x00010b90013c(param_2,&plStack_38);
  func_0x0001080e4904(uStack_28);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  plVar10 = param_2;
  plVar11 = plVar15;
  func_0x0001080e4928();
  alStack_268[0] = 0;
  alStack_268[1] = 0;
  alStack_268[2] = 0;
  lVar3 = plVar11[3];
  uStack_b0 = extraout_x8_01;
  for (lVar17 = plVar11[2]; uVar8 = lVar17 == lVar3, !(bool)uVar8; lVar17 = lVar17 + 0x50) {
    if (*(int *)(lVar17 + 8) == 1) {
      FUN_1080e07a8(aplStack_170,param_2,lVar17 + 0x18);
      plVar10 = alStack_268;
      FUN_1080e284c(plVar10,aplStack_170);
      func_0x0001080e4b3c();
    }
  }
  plVar11 = (long *)*plVar15;
  func_0x0001080e4d84();
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 1;
    do {
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  aplStack_170[0] = plVar11;
  func_0x00010b8df7a4();
  plVar11 = aplStack_170[0];
  func_0x0001003a8cb8();
  func_0x0001080e4d84();
  FUN_1080e004c();
  FUN_1080dfa94();
  if (*plVar15 == 0) {
    func_0x0001080e4a88();
  }
  else {
    func_0x0001080e4dfc();
  }
  func_0x0001080e2140(auStack_1e0,param_2,plVar11);
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    func_0x0001080e4938();
    goto LAB_1080e2810;
  }
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x68))(auStack_200,param_2,param_4);
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
LAB_1080e2804:
    func_0x0001080e4938();
  }
  else {
    func_0x0001080e4b14(auStack_1f8[0]);
    plVar13 = plVar12;
    func_0x0001080e4b14(auStack_1d8[0]);
    if ((((*(byte *)(param_4 + 8) & 1) == 0) ||
        (plVar14 = param_2,
        FUN_1080e2888(param_2,param_4,plVar13,&UNK_10f47a5ee,9,auStack_1f8,0,0,0), (int)plVar14 == 0
        )) || (plVar14 = param_2,
              FUN_1080e2888(param_2,param_4,plVar12,&UNK_10f47a778,0xb,auStack_1d8,1,0,1),
              ((ulong)plVar14 & 1) == 0)) goto LAB_1080e2804;
    plVar4 = (long *)plVar15[3];
    for (plVar15 = (long *)plVar15[2]; uVar8 = plVar15 == plVar4, !(bool)uVar8;
        plVar15 = plVar15 + 10) {
      plVar1 = plVar13;
      if (*(char *)((long)plVar15 + 0x4b) == '\0') {
        plVar1 = plVar12;
      }
      if (*(char *)((long)plVar15 + 0x4b) == '\x01') {
        FUN_1080dfe08();
      }
      else {
        func_0x0001080dfb1c();
      }
      iVar5 = (int)plVar15[1];
      uVar8 = iVar5 == 2;
      if ((bool)uVar8) {
        if ((plVar15[7] != 0) || (plVar15[8] != 0)) {
          FUN_1080e0180(auStack_220);
          FUN_1080e0180(auStack_240);
          if (plVar15[7] != 0) {
            func_0x0001080e49c4();
            func_0x0001080e4c88(plVar15[7]);
            if (extraout_x8_03 == 0) {
              func_0x0001080e4a88();
            }
            else {
              func_0x0001080e4dfc();
            }
            func_0x0001080e4978();
            FUN_1080df8d0(auStack_220,aplStack_170);
            func_0x0001080e4b3c();
            func_0x0001080e4c08();
          }
          func_0x0001080e4e50();
          if ((bool)uVar8) {
            if (plVar15[8] != 0) {
              func_0x0001080e49c4();
              func_0x0001080e4c88(plVar15[8]);
              if (extraout_x8_04 == 0) {
                func_0x0001080e4a88();
              }
              else {
                func_0x0001080e4dfc();
              }
              func_0x0001080e4978();
              FUN_1080df8d0(auStack_240,aplStack_170);
              func_0x0001080e4b3c();
              func_0x0001080e4c08();
              func_0x0001080e4e50();
              if (!(bool)uVar8) goto LAB_1080e27c0;
            }
            lVar17 = *plVar15;
            if (lVar17 == 0) {
              puStack_250 = &UNK_10f7d0ef0;
              uStack_248 = 0;
            }
            else {
              puStack_250 = (undefined *)(lVar17 + 0x18);
              uStack_248 = (ulong)*(uint *)(lVar17 + 0xc);
            }
            lVar17 = plVar15[7];
            lVar3 = plVar15[8];
            cVar7 = *(char *)((long)plVar15 + 0x49);
            cVar6 = *(char *)((long)plVar15 + 0x4a);
            aplStack_170[2] = (long *)0x5;
            uStack_158 = 0;
            aplStack_170[0] = param_2;
            aplStack_170[1] = plVar1;
            func_0x0001080e4da4(auStack_150,param_2,alStack_268 + 3);
            plStack_130 = param_2;
            plVar14 = alStack_218;
            if (lVar17 == 0) {
              plStack_130 = (long *)param_2[0x28];
              plVar14 = param_2 + 0x29;
            }
            lStack_120 = plVar14[1];
            lStack_128 = *plVar14;
            uStack_118 = 0;
            plStack_110 = param_2;
            plVar14 = alStack_238;
            if (lVar3 == 0) {
              plStack_110 = (long *)param_2[0x28];
              plVar14 = param_2 + 0x29;
            }
            bVar18 = 0;
            lStack_100 = plVar14[1];
            lStack_108 = *plVar14;
            uStack_f8 = 0;
            bVar9 = cVar7 == '\0';
            lVar17 = 0xc0;
            if (bVar9) {
              lVar17 = 0xe0;
            }
            uStack_f0 = *(undefined8 *)((long)param_2 + lVar17);
            lVar17 = 200;
            if (bVar9) {
              lVar17 = 0xe8;
            }
            uStack_e0 = ((undefined8 *)((long)param_2 + lVar17))[1];
            uStack_e8 = *(undefined8 *)((long)param_2 + lVar17);
            bVar9 = cVar6 == '\0';
            lVar17 = 0xc0;
            if (bVar9) {
              lVar17 = 0xe0;
            }
            lVar3 = 200;
            if (bVar9) {
              lVar3 = 0xe8;
            }
            uStack_d0 = *(undefined8 *)((long)param_2 + lVar17);
            uStack_c0 = ((undefined8 *)((long)param_2 + lVar3))[1];
            uStack_c8 = *(undefined8 *)((long)param_2 + lVar3);
            uStack_d8 = 0;
            uStack_b8 = 0;
            func_0x0001080e4e50();
            if (bVar9) {
              uStack_190 = 6;
              plStack_1a0 = param_2;
              pplStack_198 = aplStack_170;
              lStack_188 = param_4;
              FUN_1080e01a8(auStack_180);
              (**(code **)(*param_2 + 0x110))(auStack_1c0,param_2,param_2 + 0x4d,&plStack_1a0);
              FUN_1080e0bc0(auStack_1c0);
              bVar18 = *(byte *)(param_4 + 8);
            }
            lVar17 = 0xa0;
            do {
              FUN_1080e0bc0((long)aplStack_170 + lVar17);
              lVar17 = lVar17 + -0x20;
            } while (lVar17 != -0x20);
            uVar8 = 1;
            if ((bVar18 & 1) != 0) {
              FUN_1080e0bc0(auStack_240);
              plVar14 = (long *)0x0;
              FUN_1080e0bc0();
              goto LAB_1080e27a0;
            }
          }
LAB_1080e27c0:
          func_0x0001080e4938();
          FUN_1080e0bc0(auStack_240);
          FUN_1080e0bc0(auStack_220);
          goto LAB_1080e2808;
        }
        puVar16 = &UNK_10f47a7b0;
LAB_1080e27fc:
        func_0x00010b9a0050(param_4,puVar16);
        goto LAB_1080e2804;
      }
      uVar8 = iVar5 == 1;
      if ((bool)uVar8) {
        func_0x0001080e4e28();
        func_0x0001080e4ba4();
        if (((ulong)plVar14 & 1) == 0) goto LAB_1080e2804;
      }
      else if (iVar5 == 0) {
        if (plVar15[6] == 0) {
          puVar16 = &UNK_10f47a784;
          goto LAB_1080e27fc;
        }
        func_0x0001080e49c4();
        func_0x0001080e4c88(plVar15[6]);
        if (extraout_x8_02 == 0) {
          func_0x0001080e4a88();
        }
        else {
          func_0x0001080e4dfc();
        }
        func_0x0001080e4978();
        func_0x0001080e4e50();
        if ((bool)uVar8) {
          func_0x0001080e4e28();
          func_0x0001080e4ba4();
          if (((ulong)plVar14 & 1) != 0) {
            func_0x0001080e4b3c();
            func_0x0001080e4c08();
            goto LAB_1080e27a0;
          }
        }
        func_0x0001080e4938();
        func_0x0001080e4b3c();
        func_0x0001080e4c08();
        goto LAB_1080e2808;
      }
LAB_1080e27a0:
    }
    FUN_1080e08ac(extraout_x8_00,auStack_1e0);
  }
LAB_1080e2808:
  FUN_1080e0bc0(auStack_200);
LAB_1080e2810:
  FUN_1080e0bc0(auStack_1e0);
  FUN_1080e0664(plVar11);
  FUN_1080e0cbc(plVar10);
  plVar15 = alStack_268;
  func_0x0001080e419c();
  func_0x0001080e4904(uStack_b0);
  if ((bool)uVar8) {
    return plVar15;
  }
  ___stack_chk_fail();
  uVar2 = plVar15[1];
  if (uVar2 < (ulong)plVar15[2]) {
    FUN_1080e3eac();
    plVar10 = (long *)(uVar2 + 0x20);
  }
  else {
    plVar10 = plVar15;
    func_0x0001080e3ed4();
  }
  plVar15[1] = (long)plVar10;
  return plVar10 + -4;
}



/* Entry: 1080e22b4; end: 1080e284b;  */

long * FUN_1080e22b4(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,long param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  bool bVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined *puVar15;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar16;
  long *plVar17;
  byte bVar18;
  long alStack_228 [3];
  undefined *puStack_210;
  ulong uStack_208;
  undefined1 auStack_200 [8];
  long alStack_1f8 [3];
  undefined1 auStack_1e0 [8];
  long alStack_1d8 [3];
  undefined1 auStack_1c0 [8];
  undefined8 auStack_1b8 [3];
  undefined1 auStack_1a0 [8];
  undefined8 auStack_198 [3];
  undefined1 auStack_180 [32];
  long *plStack_160;
  long **pplStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 auStack_140 [16];
  long *aplStack_130 [3];
  undefined1 uStack_118;
  undefined1 auStack_110 [32];
  long *plStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  
  plVar10 = param_2;
  plVar11 = param_4;
  func_0x0001080e4928();
  alStack_228[0] = 0;
  alStack_228[1] = 0;
  alStack_228[2] = 0;
  lVar3 = plVar11[3];
  uStack_70 = extraout_x8;
  for (lVar16 = plVar11[2]; uVar8 = lVar16 == lVar3, !(bool)uVar8; lVar16 = lVar16 + 0x50) {
    if (*(int *)(lVar16 + 8) == 1) {
      FUN_1080e07a8(aplStack_130,param_2,lVar16 + 0x18);
      plVar10 = alStack_228;
      FUN_1080e284c(plVar10,aplStack_130);
      func_0x0001080e4b3c();
    }
  }
  plVar11 = (long *)*param_4;
  func_0x0001080e4d84();
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 1;
    do {
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar9) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  aplStack_130[0] = plVar11;
  func_0x00010b8df7a4();
  plVar11 = aplStack_130[0];
  func_0x0001003a8cb8();
  func_0x0001080e4d84();
  FUN_1080e004c();
  FUN_1080dfa94();
  if (*param_4 == 0) {
    func_0x0001080e4a88();
  }
  else {
    func_0x0001080e4dfc();
  }
  func_0x0001080e2140(auStack_1a0,param_2,plVar11);
  if ((*(byte *)(param_5 + 8) & 1) == 0) {
    func_0x0001080e4938();
    goto LAB_1080e2810;
  }
  plVar12 = param_2;
  (**(code **)(*param_2 + 0x68))(auStack_1c0,param_2,param_5);
  if ((*(byte *)(param_5 + 8) & 1) == 0) {
LAB_1080e2804:
    func_0x0001080e4938();
  }
  else {
    func_0x0001080e4b14(auStack_1b8[0]);
    plVar13 = plVar12;
    func_0x0001080e4b14(auStack_198[0]);
    if ((((*(byte *)(param_5 + 8) & 1) == 0) ||
        (plVar14 = param_2,
        FUN_1080e2888(param_2,param_5,plVar13,&UNK_10f47a5ee,9,auStack_1b8,0,0,0), (int)plVar14 == 0
        )) || (plVar14 = param_2,
              FUN_1080e2888(param_2,param_5,plVar12,&UNK_10f47a778,0xb,auStack_198,1,0,1),
              ((ulong)plVar14 & 1) == 0)) goto LAB_1080e2804;
    plVar4 = (long *)param_4[3];
    for (plVar17 = (long *)param_4[2]; uVar8 = plVar17 == plVar4, !(bool)uVar8;
        plVar17 = plVar17 + 10) {
      plVar1 = plVar13;
      if (*(char *)((long)plVar17 + 0x4b) == '\0') {
        plVar1 = plVar12;
      }
      if (*(char *)((long)plVar17 + 0x4b) == '\x01') {
        FUN_1080dfe08();
      }
      else {
        func_0x0001080dfb1c();
      }
      iVar5 = (int)plVar17[1];
      uVar8 = iVar5 == 2;
      if ((bool)uVar8) {
        if ((plVar17[7] != 0) || (plVar17[8] != 0)) {
          FUN_1080e0180(auStack_1e0);
          FUN_1080e0180(auStack_200);
          if (plVar17[7] != 0) {
            func_0x0001080e49c4();
            func_0x0001080e4c88(plVar17[7]);
            if (extraout_x8_01 == 0) {
              func_0x0001080e4a88();
            }
            else {
              func_0x0001080e4dfc();
            }
            func_0x0001080e4978();
            FUN_1080df8d0(auStack_1e0,aplStack_130);
            func_0x0001080e4b3c();
            func_0x0001080e4c08();
          }
          func_0x0001080e4e50();
          if ((bool)uVar8) {
            if (plVar17[8] != 0) {
              func_0x0001080e49c4();
              func_0x0001080e4c88(plVar17[8]);
              if (extraout_x8_02 == 0) {
                func_0x0001080e4a88();
              }
              else {
                func_0x0001080e4dfc();
              }
              func_0x0001080e4978();
              FUN_1080df8d0(auStack_200,aplStack_130);
              func_0x0001080e4b3c();
              func_0x0001080e4c08();
              func_0x0001080e4e50();
              if (!(bool)uVar8) goto LAB_1080e27c0;
            }
            lVar16 = *plVar17;
            if (lVar16 == 0) {
              puStack_210 = &UNK_10f7d0ef0;
              uStack_208 = 0;
            }
            else {
              puStack_210 = (undefined *)(lVar16 + 0x18);
              uStack_208 = (ulong)*(uint *)(lVar16 + 0xc);
            }
            lVar16 = plVar17[7];
            lVar3 = plVar17[8];
            cVar7 = *(char *)((long)plVar17 + 0x49);
            cVar6 = *(char *)((long)plVar17 + 0x4a);
            aplStack_130[2] = (long *)0x5;
            uStack_118 = 0;
            aplStack_130[0] = param_2;
            aplStack_130[1] = plVar1;
            func_0x0001080e4da4(auStack_110,param_2,alStack_228 + 3);
            plStack_f0 = param_2;
            plVar14 = alStack_1d8;
            if (lVar16 == 0) {
              plStack_f0 = (long *)param_2[0x28];
              plVar14 = param_2 + 0x29;
            }
            lStack_e0 = plVar14[1];
            lStack_e8 = *plVar14;
            uStack_d8 = 0;
            plStack_d0 = param_2;
            plVar14 = alStack_1f8;
            if (lVar3 == 0) {
              plStack_d0 = (long *)param_2[0x28];
              plVar14 = param_2 + 0x29;
            }
            bVar18 = 0;
            lStack_c0 = plVar14[1];
            lStack_c8 = *plVar14;
            uStack_b8 = 0;
            bVar9 = cVar7 == '\0';
            lVar16 = 0xc0;
            if (bVar9) {
              lVar16 = 0xe0;
            }
            uStack_b0 = *(undefined8 *)((long)param_2 + lVar16);
            lVar16 = 200;
            if (bVar9) {
              lVar16 = 0xe8;
            }
            uStack_a0 = ((undefined8 *)((long)param_2 + lVar16))[1];
            uStack_a8 = *(undefined8 *)((long)param_2 + lVar16);
            bVar9 = cVar6 == '\0';
            lVar16 = 0xc0;
            if (bVar9) {
              lVar16 = 0xe0;
            }
            lVar3 = 200;
            if (bVar9) {
              lVar3 = 0xe8;
            }
            uStack_90 = *(undefined8 *)((long)param_2 + lVar16);
            uStack_80 = ((undefined8 *)((long)param_2 + lVar3))[1];
            uStack_88 = *(undefined8 *)((long)param_2 + lVar3);
            uStack_98 = 0;
            uStack_78 = 0;
            func_0x0001080e4e50();
            if (bVar9) {
              uStack_150 = 6;
              plStack_160 = param_2;
              pplStack_158 = aplStack_130;
              lStack_148 = param_5;
              FUN_1080e01a8(auStack_140);
              (**(code **)(*param_2 + 0x110))(auStack_180,param_2,param_2 + 0x4d,&plStack_160);
              FUN_1080e0bc0(auStack_180);
              bVar18 = *(byte *)(param_5 + 8);
            }
            lVar16 = 0xa0;
            do {
              FUN_1080e0bc0((long)aplStack_130 + lVar16);
              lVar16 = lVar16 + -0x20;
            } while (lVar16 != -0x20);
            uVar8 = 1;
            if ((bVar18 & 1) != 0) {
              FUN_1080e0bc0(auStack_200);
              plVar14 = (long *)0x0;
              FUN_1080e0bc0();
              goto LAB_1080e27a0;
            }
          }
LAB_1080e27c0:
          func_0x0001080e4938();
          FUN_1080e0bc0(auStack_200);
          FUN_1080e0bc0(auStack_1e0);
          goto LAB_1080e2808;
        }
        puVar15 = &UNK_10f47a7b0;
LAB_1080e27fc:
        func_0x00010b9a0050(param_5,puVar15);
        goto LAB_1080e2804;
      }
      uVar8 = iVar5 == 1;
      if ((bool)uVar8) {
        func_0x0001080e4e28();
        func_0x0001080e4ba4();
        if (((ulong)plVar14 & 1) == 0) goto LAB_1080e2804;
      }
      else if (iVar5 == 0) {
        if (plVar17[6] == 0) {
          puVar15 = &UNK_10f47a784;
          goto LAB_1080e27fc;
        }
        func_0x0001080e49c4();
        func_0x0001080e4c88(plVar17[6]);
        if (extraout_x8_00 == 0) {
          func_0x0001080e4a88();
        }
        else {
          func_0x0001080e4dfc();
        }
        func_0x0001080e4978();
        func_0x0001080e4e50();
        if ((bool)uVar8) {
          func_0x0001080e4e28();
          func_0x0001080e4ba4();
          if (((ulong)plVar14 & 1) != 0) {
            func_0x0001080e4b3c();
            func_0x0001080e4c08();
            goto LAB_1080e27a0;
          }
        }
        func_0x0001080e4938();
        func_0x0001080e4b3c();
        func_0x0001080e4c08();
        goto LAB_1080e2808;
      }
LAB_1080e27a0:
    }
    FUN_1080e08ac(param_1,auStack_1a0);
  }
LAB_1080e2808:
  FUN_1080e0bc0(auStack_1c0);
LAB_1080e2810:
  FUN_1080e0bc0(auStack_1a0);
  FUN_1080e0664(plVar11);
  FUN_1080e0cbc(plVar10);
  plVar10 = alStack_228;
  func_0x0001080e419c();
  func_0x0001080e4904(uStack_70);
  if ((bool)uVar8) {
    return plVar10;
  }
  ___stack_chk_fail();
  uVar2 = plVar10[1];
  if (uVar2 < (ulong)plVar10[2]) {
    FUN_1080e3eac();
    plVar11 = (long *)(uVar2 + 0x20);
  }
  else {
    plVar11 = plVar10;
    func_0x0001080e3ed4();
  }
  plVar10[1] = (long)plVar11;
  return plVar11 + -4;
}



/* Entry: 1080e284c; end: 1080e2887;  */

long FUN_1080e284c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_1080e3eac();
    lVar2 = uVar1 + 0x20;
  }
  else {
    lVar2 = param_1;
    func_0x0001080e3ed4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x20;
}



/* Entry: 1080e2888; end: 1080e296f;  */

undefined1 *
FUN_1080e2888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,long *param_7,int param_8,char param_9)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 extraout_x8;
  code *extraout_x9;
  undefined1 *puVar5;
  long unaff_x20;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_58;
  
  func_0x0001080e4b88();
  func_0x0001080e4928();
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_58 = extraout_x8;
  func_0x0001080e4cd8();
  (*extraout_x9)(auStack_70);
  lStack_88 = 0;
  uVar4 = 0;
  if ((int)param_7 == 0) {
    uVar4 = 2;
  }
  if (param_8 == 0) {
    uVar4 = uVar4 | 4;
  }
  if (param_9 == '\0') {
    uVar4 = uVar4 | 8;
  }
  _JSObjectSetProperty
            (*(undefined8 *)(unaff_x20 + 0x218),param_3,uStack_68,*param_6,uVar4,&lStack_88);
  lVar1 = lStack_88;
  if (lStack_88 != 0) {
    FUN_1080e2260(*(undefined8 *)(unaff_x20 + 0x218));
  }
  uVar2 = lVar1 == 0;
  puVar5 = (undefined1 *)(ulong)(byte)uVar2;
  puVar3 = auStack_70;
  func_0x0001080e4278();
  func_0x0001080e4904(uStack_58);
  if ((bool)uVar2) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x0001080e4ddc();
  func_0x0001080e4d84();
  func_0x0001080e0098();
  *param_7 = (long)puVar3;
  return puVar3;
}



/* Entry: 1080e2970; end: 1080e29a3;  */

void FUN_1080e2970(undefined8 param_1)

{
  undefined8 *unaff_x22;
  
  func_0x0001080e4ddc();
  func_0x0001080e4d84();
  func_0x0001080e0098();
  *unaff_x22 = param_1;
  return;
}



/* Entry: 1080e29a4; end: 1080e2afb;  */

long * FUN_1080e29a4(long *param_1,long param_2,long *param_3,long *param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  long lStack_50;
  long lStack_48;
  
  plVar1 = &lStack_50;
  if (*param_3 == 0) {
    puVar4 = &UNK_10f47a7e3;
  }
  else {
    lStack_48 = param_4[1];
    lStack_50 = *param_4;
    FUN_1080e0e8c(&lStack_50,param_2,param_5);
    if ((*(byte *)(param_5 + 8) & 1) == 0) goto FUN_1080e0180;
    FUN_1080e0138();
    if (plVar1 != (long *)0x0) {
      func_0x0001080e4c1c();
      _JSObjectGetProperty();
      plVar2 = *(long **)(param_2 + 0x218);
      if (lStack_50 == 0) {
        _JSValueToObject(plVar2,plVar1,&lStack_50);
        if (lStack_50 == 0) {
          plVar3 = (long *)0x20;
          __Znwm();
          func_0x00010b8df8e8();
          func_0x0001080dfa58();
          plVar1 = plVar3;
          (**(code **)(*plVar3 + 0x10))(plVar3);
          func_0x0001080e4ccc();
          _JSObjectMake();
          _JSObjectSetPrototype(*(undefined8 *)(param_2 + 0x218),plVar1,plVar2);
          func_0x0001080e4b7c();
          func_0x0001080e4bf0();
          func_0x0001080e0b00(plVar3);
          return plVar3;
        }
        plVar2 = *(long **)(param_2 + 0x218);
      }
      func_0x0001080e4d5c(plVar2);
      func_0x0001080e4938();
      return plVar2;
    }
    puVar4 = &UNK_10f47a80d;
  }
  func_0x00010b9a0050(param_5,puVar4);
FUN_1080e0180:
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_1080e01a8(param_1 + 1);
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}



/* Entry: 1080e2afc; end: 1080e2d97;  */

void FUN_1080e2afc(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long *unaff_x19;
  long *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  long lStack_198;
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [32];
  long lStack_118;
  long lStack_110;
  long alStack_108 [4];
  undefined8 uStack_e8;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_88 [16];
  long lStack_58;
  long alStack_50 [3];
  undefined8 uStack_38;
  
  puVar3 = auStack_b0;
  func_0x0001080e4a30();
  func_0x0001080e4928();
  if (param_1[0x4a] == 0) {
    lVar6 = *param_2;
    uVar7 = (ulong)*(uint *)(param_2 + 1);
    func_0x0001080e4904(extraout_x8_00);
    uStack_b8 = unaff_x30;
    if ((bool)in_ZR) goto FUN_1080e17f0;
  }
  else {
    uStack_38 = extraout_x8_00;
    func_0x0001080e4e14();
    FUN_1080e01a8(auStack_88);
    param_2 = alStack_50;
    (**(code **)(*unaff_x19 + 0x118))();
    func_0x0001080e4c54();
    param_1 = &lStack_58;
    FUN_1080e0bc0();
    func_0x0001080e4904(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
  }
  uVar4 = 0;
  ___stack_chk_fail();
  puVar3 = auStack_160;
  uStack_b8 = 0x1080e2bbc;
  plVar5 = param_2;
  func_0x0001080e4ca8();
  func_0x0001080e4928();
  uStack_e8 = extraout_x8_01;
  if (param_1[0x4a] == 0) {
    lVar6 = *param_2;
    uVar7 = (ulong)*(uint *)(param_2 + 1);
    func_0x0001080e4904(extraout_x8_01);
    if ((bool)uVar4) {
      func_0x0001080e4b7c();
      unaff_x20 = param_1;
      unaff_x19 = plVar5;
      unaff_x29 = &stack0xfffffffffffffff0;
FUN_1080e17f0:
      puVar1 = *(undefined8 **)(puVar3 + 0x90);
      uVar2 = *(undefined8 *)(puVar3 + 0x98);
      *(undefined1 **)(puVar3 + 0xa0) = unaff_x29;
      *(undefined8 *)(puVar3 + 0xa8) = uStack_b8;
      func_0x0001080e4928();
      *(undefined8 *)(puVar3 + 0x98) = extraout_x8;
      uVar4 = cRam00000001138468a0 == '\x01';
      if ((bool)uVar4) {
        *(long *)(puVar3 + 0x88) = lVar6;
        *(ulong *)(puVar3 + 0x90) = uVar7 & 0xffffffff;
        FUN_1080e07a8(unaff_x20,unaff_x19,puVar3 + 0x88);
      }
      else {
        *unaff_x20 = 0;
        unaff_x20[1] = lVar6;
        unaff_x20[2] = uVar7 & 0xffffffff;
        *(undefined1 *)(unaff_x20 + 3) = 0;
      }
      func_0x0001080e4904(*(undefined8 *)(puVar3 + 0x98));
      if ((bool)uVar4) {
        return;
      }
      ___stack_chk_fail();
      *(undefined8 **)(puVar3 + 0x60) = puVar1;
      *(undefined8 *)(puVar3 + 0x68) = uVar2;
      *(undefined1 **)(puVar3 + 0x70) = puVar3 + 0xa0;
      *(code **)(puVar3 + 0x78) = FUN_1080e1864;
      func_0x0001080e4a98();
      func_0x0001080e4d64();
      func_0x000104bda960(*(undefined8 *)(puVar3 + 0x58));
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      return;
    }
  }
  else {
    func_0x0001080e4e14(unaff_x20[0x4b]);
    FUN_1080e01a8(&lStack_118);
    lStack_110 = param_2[1];
    lStack_118 = *param_2;
    (**(code **)(*unaff_x20 + 0x110))(auStack_158);
    (**(code **)(*unaff_x20 + 0x188))();
    if ((int)unaff_x20 == 0) {
      FUN_1080e08ac();
    }
    else {
      func_0x0001080e4c38();
    }
    FUN_1080e0bc0(auStack_158);
    param_1 = alStack_108;
    FUN_1080e0bc0();
    func_0x0001080e4904(uStack_e8);
    if ((bool)uVar4) {
      return;
    }
  }
  ___stack_chk_fail();
  plVar5 = param_1;
  func_0x0001080e4a58();
  if (lStack_198 == 0) {
    func_0x0001080e0fb0();
    _JSStringRelease(plVar5);
  }
  else {
    func_0x0001080e4d70(param_1[0x43]);
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 1080e2d98; end: 1080e2dcf;  */

undefined8 * FUN_1080e2d98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_1080e44b4(uVar1);
  }
  return param_1;
}



/* Entry: 1080e2dd0; end: 1080e2ddb;  */

void FUN_1080e2dd0(long param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSValueToBoolean_110346fc8)(*(undefined8 *)(param_1 + 0x218),*param_2);
  return;
}



/* Entry: 1080e2ddc; end: 1080e2e27;  */

void FUN_1080e2ddc(long param_1,undefined8 *param_2)

{
  long lStack_28;
  
  lStack_28 = 0;
  _JSValueToNumber(*(undefined8 *)(param_1 + 0x218),*param_2,&lStack_28);
  if (lStack_28 != 0) {
    func_0x0001080e4a14();
  }
  return;
}



/* Entry: 1080e2e28; end: 1080e2e83;  */

int FUN_1080e2e28(double param_1,long *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x148))();
  if (NAN(param_1)) {
    iVar1 = 0;
  }
  else if (ABS(param_1) == INFINITY) {
    if (param_1 <= 0.0) {
      iVar1 = -0x80000000;
    }
    else {
      iVar1 = 0x7fffffff;
    }
  }
  else {
    iVar1 = (int)param_1;
  }
  return iVar1;
}



/* Entry: 1080e2e84; end: 1080e2f3b;  */

void FUN_1080e2e84(long *param_1)

{
  undefined1 in_ZR;
  undefined8 *unaff_x19;
  
  func_0x0001080e4dc8();
  if ((bool)in_ZR && param_1 != (long *)0x0) {
    func_0x0001080e00e4();
    if (param_1 == (long *)0x0) {
      func_0x0001080e4d50();
    }
    else {
      (**(code **)(*param_1 + 0x10))();
      func_0x0001080e4d50();
      (**(code **)(*param_1 + 0x18))(param_1);
    }
  }
  else {
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 1080e2f3c; end: 1080e3117;  */

/* WARNING: Possible PIC construction at 0x0001080e2fb8: Changing call to branch */

int * FUN_1080e2f3c(int *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 extraout_x8;
  int *unaff_x19;
  long unaff_x20;
  undefined8 *puVar9;
  long lVar10;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  func_0x0001080e4928();
  puStack_88 = (undefined8 *)param_3[1];
  uStack_90 = *param_3;
  puVar4 = &uStack_90;
  puVar5 = param_2;
  uStack_68 = extraout_x8;
  FUN_1080e0e8c();
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    func_0x0001080e4e5c();
    func_0x0001080e4904(uStack_68);
    if (!(bool)in_ZR) goto LAB_1080e3114;
    goto SUB_1080e4240;
  }
  lVar10 = param_2[0x43];
  lStack_98 = 0;
  puVar5 = puVar4;
  func_0x0001080e4c78();
  _JSValueGetTypedArrayType();
  if (lStack_98 == 0) {
    iVar3 = (int)puVar5;
    if (iVar3 != 10) {
      puVar9 = puVar4;
      if (iVar3 != 9) {
        func_0x0001080e4c78();
        _JSObjectGetTypedArrayBuffer();
        puVar9 = puVar5;
        if (lStack_98 != 0) goto LAB_1080e2fa8;
      }
      lVar6 = lVar10;
      _JSObjectGetArrayBufferBytesPtr(lVar10,puVar9,&lStack_98);
      if (lStack_98 == 0) {
        uVar2 = iVar3 == 9;
        if ((bool)uVar2) {
          _JSObjectGetArrayBufferByteLength(lVar10,puVar9);
          if (lStack_98 == 0) {
            lVar7 = 0;
LAB_1080e2fbc:
            uStack_90 = 0;
            uStack_80 = 5;
            uStack_78 = 0;
            *param_1 = iVar3;
            *(long *)(param_1 + 2) = lVar6 + lVar7;
            *(long *)(param_1 + 4) = lVar10;
            puVar5 = &uStack_90;
            puStack_88 = puVar9;
            FUN_1080e08ac(param_1 + 6);
            piVar8 = (int *)&uStack_90;
            FUN_1080e0bc0(piVar8);
            func_0x0001080e4904(uStack_68);
            if ((bool)uVar2) {
              return piVar8;
            }
LAB_1080e3114:
            ___stack_chk_fail();
            return (int *)(ulong)(*(int *)(puVar5 + 1) == 0);
          }
        }
        else {
          _JSObjectGetTypedArrayByteLength(lVar10,puVar4,&lStack_98);
          if (lStack_98 == 0) {
            lVar7 = lVar10;
            func_0x0001080e4c78();
            _JSObjectGetTypedArrayByteOffset();
            if (lStack_98 == 0) goto LAB_1080e2fbc;
          }
        }
      }
      goto LAB_1080e2fa8;
    }
    func_0x00010b99f5f8(&uStack_90,&UNK_10f47a829);
    func_0x00010b99ff08(param_4,&uStack_90);
    func_0x000104bda960(uStack_90);
  }
  else {
LAB_1080e2fa8:
    func_0x0001080e4d70(param_2[0x43]);
  }
  func_0x0001080e4e5c();
  unaff_x30 = 0x1080e2fbc;
  register0x00000008 = (BADSPACEBASE *)auStack_a0;
  unaff_x19 = param_1;
  unaff_x20 = param_4;
  unaff_x29 = puVar1;
SUB_1080e4240:
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *param_1 = 9;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_1080e0180();
  return param_1;
}



/* Entry: 1080e3118; end: 1080e31ff;  */

bool FUN_1080e3118(undefined8 param_1,long param_2)

{
  return *(int *)(param_2 + 8) == 0;
}



/* Entry: 1080e3200; end: 1080e332b;  */

undefined8 FUN_1080e3200(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  switch(*(undefined4 *)(param_2 + 8)) {
  case 1:
    return 0;
  case 2:
    return 7;
  case 3:
    return 6;
  case 4:
    return 3;
  case 5:
    break;
  default:
    return 1;
  }
  uVar1 = param_1;
  func_0x0001080e4ab8();
  _JSValueIsArray();
  if ((uVar1 & 1) == 0) {
    func_0x0001080dfa58();
    func_0x0001080e4ab8();
    _JSValueIsObjectOfClass();
    if ((uVar1 & 1) == 0) {
      func_0x0001080e4ab8();
      _JSObjectIsFunction();
      if ((uVar1 & 1) == 0) {
        func_0x0001080e4ab8();
        _JSValueGetTypedArrayType();
        if ((int)uVar1 == 10) {
          if (*(long *)(param_1 + 0x240) != 0) {
            func_0x0001080e4ab8();
            _JSValueIsInstanceOfConstructor();
            if ((uVar1 & 1) != 0) {
              return 0xc;
            }
          }
          if (*(long *)(param_1 + 0x160) != 0) {
            func_0x0001080e4ab8();
            _JSValueIsInstanceOfConstructor();
            if ((uVar1 & 1) != 0) {
              return 5;
            }
          }
          uVar2 = 8;
        }
        else {
          uVar2 = 10;
        }
      }
      else {
        uVar2 = 0xb;
      }
    }
    else {
      uVar2 = 0xf;
    }
  }
  else {
    uVar2 = 9;
  }
  return uVar2;
}



/* Entry: 1080e332c; end: 1080e34cb;  */

long * FUN_1080e332c(long *param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar7;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 ******unaff_x29;
  code *unaff_x30;
  undefined8 auStack_180 [3];
  long *plStack_168;
  undefined8 *puStack_160;
  ulong uStack_158;
  undefined8 *****pppppuStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 *****pppppuStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_c8;
  undefined8 *****pppppuStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_58;
  
  lVar6 = param_3;
  func_0x0001080e4ca8();
  func_0x0001080e4928();
  func_0x0001080e4a3c();
  if ((*(byte *)(*(long *)(param_3 + 0x18) + 8) & 1) == 0) {
    unaff_x19[1] = 0;
    *unaff_x19 = 0;
    unaff_x19[3] = 0;
    unaff_x19[2] = 0;
    func_0x0001080e4904(uStack_58);
    if (!(bool)in_ZR) goto LAB_1080e3400;
    puVar1 = &stack0xffffffffffffffb0;
LAB_1080e4b44:
    puVar5 = *(undefined8 **)(puVar1 + 0x30);
    uVar7 = *(ulong *)(puVar1 + 0x38);
    puVar2 = puVar1 + 0x50;
  }
  else {
    func_0x0001080e4d14();
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    func_0x0001080e4c5c();
    for (; param_4 = *(ulong *)(param_3 + 0x10), unaff_x24 < param_4; unaff_x24 = unaff_x24 + 1) {
      func_0x0001080e4d44();
      *(long **)(unaff_x23 + unaff_x24 * 8) = param_1;
    }
    lVar6 = *(long *)(param_3 + 0x20);
    uVar3 = *(int *)(param_3 + 0x28) == 5;
    if (!(bool)uVar3) {
      lVar6 = 0;
    }
    uStack_70 = 0;
    param_1 = *(long **)(unaff_x20 + 0x218);
    param_2 = unaff_x22;
    _JSObjectCallAsFunction();
    func_0x0001080e4ae4();
    func_0x0001080e4904(uStack_58);
    in_ZR = 0;
    if ((bool)uVar3) {
      return param_1;
    }
LAB_1080e3400:
    ___stack_chk_fail();
    pcStack_78 = (code *)0x1080e3404;
    pppppuStack_80 = (undefined8 *****)&stack0xfffffffffffffff0;
    func_0x0001080e4ca8();
    func_0x0001080e4928();
    func_0x0001080e4a3c();
    if ((*(byte *)(*(long *)(lVar6 + 0x18) + 8) & 1) == 0) {
      unaff_x19[1] = 0;
      *unaff_x19 = 0;
      unaff_x19[3] = 0;
      unaff_x19[2] = 0;
      func_0x0001080e4904(uStack_c8);
      if ((bool)in_ZR) {
        puVar1 = &stack0xffffffffffffff40;
        unaff_x29 = (undefined8 ******)pppppuStack_80;
        unaff_x30 = pcStack_78;
        goto LAB_1080e4b44;
      }
    }
    else {
      func_0x0001080e4d14();
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      func_0x0001080e4c5c();
      for (; uVar3 = unaff_x24 == *(ulong *)(lVar6 + 0x10), unaff_x24 < *(ulong *)(lVar6 + 0x10);
          unaff_x24 = unaff_x24 + 1) {
        func_0x0001080e4d44();
        *(long **)(unaff_x23 + unaff_x24 * 8) = param_1;
      }
      uStack_e0 = 0;
      param_1 = *(long **)(unaff_x20 + 0x218);
      _JSObjectCallAsConstructor();
      func_0x0001080e4ae4();
      func_0x0001080e4904(uStack_c8);
      param_2 = unaff_x22;
      param_4 = unaff_x23;
      if ((bool)uVar3) {
        return param_1;
      }
    }
    uVar3 = 0;
    ___stack_chk_fail();
    puVar2 = auStack_140;
    pcStack_e8 = FUN_1080e34cc;
    uStack_120 = unaff_x24;
    pppppuStack_f0 = &pppppuStack_80;
    func_0x0001080e4928();
    uStack_128 = extraout_x8_00;
    func_0x0001080e4cd8();
    func_0x0001080e4d38();
    plVar4 = param_1;
    puVar5 = param_2;
    (**(code **)(*param_1 + 0xd8))(extraout_x8,param_1,param_2,auStack_138,param_4);
    func_0x0001080e4ab0();
    func_0x0001080e4904(uStack_128);
    if ((bool)uVar3) {
      return plVar4;
    }
    ___stack_chk_fail();
    pcStack_148 = FUN_1080e3544;
    plStack_168 = param_1;
    puStack_160 = param_2;
    uStack_158 = param_4;
    pppppuStack_150 = &pppppuStack_f0;
    func_0x0001080e4df0();
    unaff_x19 = plVar4;
    func_0x0001080e4990(*puVar5);
    if ((*(byte *)(param_4 + 8) & 1) != 0) {
      auStack_180[0] = 0;
      plVar4 = (long *)plVar4[0x43];
      _JSObjectGetProperty(plVar4,unaff_x19,*extraout_x8,auStack_180);
      func_0x0001080e4d2c();
      func_0x0001080e4ab8();
      func_0x0001080e1974();
      return plVar4;
    }
    func_0x0001080e4c98();
    uVar7 = uStack_158;
    puVar5 = puStack_160;
    unaff_x29 = (undefined8 ******)pppppuStack_150;
    unaff_x30 = pcStack_148;
  }
  *(undefined8 **)(puVar2 + -0x20) = puVar5;
  *(ulong *)(puVar2 + -0x18) = uVar7;
  *(undefined8 *******)(puVar2 + -0x10) = unaff_x29;
  *(code **)(puVar2 + -8) = unaff_x30;
  *unaff_x19 = 0;
  FUN_1080e01a8(unaff_x19 + 1);
  *(undefined1 *)(unaff_x19 + 3) = 0;
  return unaff_x19;
}



/* Entry: 1080e34cc; end: 1080e3543;  */

long * FUN_1080e34cc(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4,
                    long param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 auStack_a0 [2];
  undefined8 *puStack_90;
  long *plStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  func_0x0001080e4928();
  uStack_48 = extraout_x8;
  func_0x0001080e4cd8();
  func_0x0001080e4d38();
  plVar2 = param_2;
  puVar3 = param_3;
  (**(code **)(*param_2 + 0xd8))(param_1,param_2,param_3,auStack_58,param_5);
  func_0x0001080e4ab0();
  func_0x0001080e4904(uStack_48);
  if ((bool)in_ZR) {
    return plVar2;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_1080e3544;
  puStack_90 = param_1;
  plStack_88 = param_2;
  puStack_80 = param_3;
  lStack_78 = param_5;
  puStack_70 = &stack0xfffffffffffffff0;
  func_0x0001080e4df0();
  plVar1 = plVar2;
  func_0x0001080e4990(*puVar3);
  if ((*(byte *)(param_5 + 8) & 1) != 0) {
    auStack_a0[0] = 0;
    plVar2 = (long *)plVar2[0x43];
    _JSObjectGetProperty(plVar2,plVar1,*param_1,auStack_a0);
    func_0x0001080e4d2c();
    func_0x0001080e4ab8();
    func_0x0001080e1974();
    return plVar2;
  }
  func_0x0001080e4c98();
  *plVar1 = 0;
  FUN_1080e01a8(plVar1 + 1);
  *(undefined1 *)(plVar1 + 3) = 0;
  return plVar1;
}



/* Entry: 1080e3544; end: 1080e361b;  */

undefined8 * FUN_1080e3544(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 auStack_40 [2];
  
  func_0x0001080e4df0();
  puVar1 = param_1;
  func_0x0001080e4990(*param_2);
  if ((*(byte *)(unaff_x19 + 8) & 1) != 0) {
    auStack_40[0] = 0;
    puVar2 = (undefined8 *)param_1[0x43];
    _JSObjectGetProperty(puVar2,puVar1,*unaff_x22,auStack_40);
    func_0x0001080e4d2c();
    func_0x0001080e4ab8();
    func_0x0001080e1974();
    return puVar2;
  }
  func_0x0001080e4c98();
  *puVar1 = 0;
  FUN_1080e01a8(puVar1 + 1);
  *(undefined1 *)(puVar1 + 3) = 0;
  return puVar1;
}



/* Entry: 1080e361c; end: 1080e3643;  */

undefined8 FUN_1080e361c(long param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if ((int)param_2[1] != 5 || *param_2 == 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x218);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSObjectHasProperty_110346e78)(uVar1,*param_2,*param_3);
  return uVar1;
}



/* Entry: 1080e3644; end: 1080e37b3;  */

void FUN_1080e3644(long *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long in_x5;
  undefined8 extraout_x8;
  long lStack_b0;
  
  func_0x0001080e4928();
  func_0x0001080e4cd8();
  func_0x0001080e4d38();
  (**(code **)(*param_1 + 0xf8))(param_1,param_2);
  func_0x0001080e4ab0();
  func_0x0001080e4904(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001080e49d8();
  func_0x0001080e4d78();
  if (*(char *)(in_x5 + 8) == '\x01') {
    func_0x0001080e4c1c();
    _JSObjectSetProperty();
    if (lStack_b0 != 0) {
      func_0x0001080e4a14();
    }
  }
  return;
}



/* Entry: 1080e37b4; end: 1080e381f;  */

void FUN_1080e37b4(void)

{
  long in_x4;
  undefined8 uStack_40;
  
  func_0x0001080e49d8();
  FUN_1080e0e8c();
  if (*(char *)(in_x4 + 8) == '\x01') {
    func_0x0001080e4c1c();
    _JSObjectSetPropertyAtIndex();
    if (uStack_40 != 0) {
      func_0x0001080e4a14();
    }
  }
  return;
}



/* Entry: 1080e3820; end: 1080e38fb;  */

void FUN_1080e3820(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x22;
  ulong uVar5;
  
  func_0x0001080e4ddc();
  func_0x0001080e4928();
  func_0x0001080e49d8();
  FUN_1080e0e8c();
  func_0x0001080e4ac4();
  uVar1 = 0;
  if ((bool)in_ZR) {
    uVar2 = *(ulong *)(unaff_x22 + 0x218);
    _JSObjectCopyPropertyNames(uVar2,param_1);
    uVar3 = uVar2;
    _JSPropertyNameArrayGetCount();
    uVar5 = 0;
    plVar4 = (long *)0x1;
    while (((uVar1 = uVar5 == uVar3, uVar5 < uVar3 && (((ulong)plVar4 & 1) != 0)) &&
           ((*(byte *)(unaff_x20 + 8) & 1) != 0))) {
      _JSPropertyNameArrayGetNameAtIndex(uVar2,uVar5);
      plVar4 = unaff_x19;
      (**(code **)(*unaff_x19 + 0x10))();
      uVar5 = uVar5 + 1;
    }
    _JSPropertyNameArrayRelease(uVar2);
  }
  func_0x0001080e4904(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1080e38fc; end: 1080e38ff;  */

void FUN_1080e38fc(void)

{
  return;
}



/* Entry: 1080e3900; end: 1080e39b3;  */

void FUN_1080e3900(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long lVar2;
  undefined1 *puStack_468;
  undefined8 uStack_460;
  long lStack_458;
  undefined1 auStack_450 [1024];
  
  func_0x0001080e4b88();
  lVar2 = *(long *)(param_2 + 8);
  lStack_458 = 0x400;
  uStack_460 = 0;
  puStack_468 = auStack_450;
  FUN_1080e44e0(&puStack_468,lVar2 + 1,&UNK_10deeecec);
  puVar1 = puStack_468;
  _memcpy(puStack_468,*unaff_x19,lVar2);
  puVar1[lVar2] = 0;
  _JSStringCreateWithUTF8CString();
  *extraout_x8 = unaff_x20;
  extraout_x8[1] = puVar1;
  *(undefined1 *)(extraout_x8 + 2) = 1;
  if ((lStack_458 != 0) && (auStack_450 != puStack_468)) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1080e39b4; end: 1080e39c7;  */

void FUN_1080e39b4(long *param_1,undefined8 param_2,long *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  lVar7 = *param_3;
  func_0x0001080e0eec();
  lVar6 = lVar7;
  func_0x0001003a8364();
  if (param_3 == (long *)0x0) {
    *param_1 = 0;
    return;
  }
  plVar5 = &lStack_40;
  lStack_40 = lVar7;
  plStack_38 = param_3;
  func_0x0001003a8464(plVar5);
  func_0x000107c60d88(lVar6 + 0x30);
  plVar8 = &lStack_40;
  func_0x0001003a857c(lVar6,plVar8,plVar5);
  func_0x0001003a8718();
  if (!(bool)in_ZR) {
    lVar7 = *plVar8;
    piVar1 = (int *)(lVar7 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      *piVar1 = 0;
      lStack_48 = 0;
    }
    else {
      lStack_48 = lVar7;
      if (lVar7 != 0) {
        uStack_50 = 0;
        lStack_48 = 0;
        *param_1 = lVar7;
        func_0x0001003a8c94(&uStack_50);
        func_0x0001003a8c94(&lStack_48);
        goto code_r0x0001003a8544;
      }
    }
    func_0x0001003aca48();
    func_0x0001003a8c94(&lStack_48);
  }
  func_0x0001003a87ec(param_1,lVar6,lStack_40,plStack_38,plVar5);
code_r0x0001003a8544:
  func_0x0001003a8cc4();
  return;
}



/* Entry: 1080e39c8; end: 1080e39f7;  */

void FUN_1080e39c8(long param_1,undefined8 *param_2)

{
  if (*(long *)(param_1 + 0x218) != 0) {
    _JSValueUnprotect(*(long *)(param_1 + 0x218),*param_2);
  }
  *(undefined1 *)(param_1 + 0x280) = 1;
  return;
}



/* Entry: 1080e39f8; end: 1080e3a07;  */

void FUN_1080e39f8(undefined8 param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__JSStringRetain_110346f48)(*param_2);
  return;
}



/* Entry: 1080e3a08; end: 1080e3d2b;  */

void FUN_1080e3a08(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  puStack_88 = (undefined8 *)param_2[1];
  puStack_90 = (undefined8 *)*param_2;
  ppuVar6 = &puStack_90;
  FUN_1080e0e8c(ppuVar6,param_1);
  if (ppuVar6 == (undefined8 **)0x0) {
    return;
  }
  ppuVar7 = ppuVar6;
  _JSValueProtect(*(undefined8 *)(param_1 + 0x218));
  puVar17 = *(undefined8 **)(param_1 + 0x2a0);
  puVar16 = *(undefined8 **)(param_1 + 0x298);
  uVar3 = (long)puVar17 - (long)puVar16;
  lVar1 = 0;
  if (uVar3 != 0) {
    lVar1 = ((long)puVar17 - (long)puVar16) * 0x40 + -1;
  }
  uVar10 = *(ulong *)(param_1 + 0x2b0);
  if (lVar1 != *(long *)(param_1 + 0x2b8) + uVar10) goto LAB_1080e3c30;
  if (uVar10 < 0x200) {
    lVar1 = param_1 + 0x2a8;
    puVar14 = *(undefined8 **)(param_1 + 0x2a8);
    puVar15 = *(undefined8 **)(param_1 + 0x290);
    if ((ulong)((long)puVar14 - (long)puVar15) <= uVar3) {
      puVar11 = (undefined8 *)((long)puVar14 - (long)puVar15 >> 2);
      if (puVar14 == puVar15) {
        puVar11 = (undefined8 *)0x1;
      }
      lStack_98 = lVar1;
      FUN_1080e4890();
      puVar14 = (undefined8 *)((long)puVar11 + uVar3);
      puVar15 = puVar11 + (long)ppuVar7;
      uVar8 = 0x1000;
      ppuVar9 = ppuVar7;
      puStack_b8 = puVar11;
      puStack_b0 = puVar14;
      puStack_a0 = puVar15;
      __Znwm();
      puVar12 = puVar14;
      if (uVar3 == (long)ppuVar7 * 8) {
        if (puVar17 == puVar16) {
          puVar16 = (undefined8 *)0x1;
          lStack_70 = lVar1;
          FUN_1080e4890();
          puStack_78 = puVar16 + (long)ppuVar9;
          puStack_90 = puVar16;
          puStack_88 = puVar16;
          puStack_80 = puVar16;
          FUN_1080e4868(&puStack_90,puVar14,puVar14);
          puVar2 = puStack_78;
          puVar12 = puStack_80;
          puVar17 = puStack_88;
          puVar16 = puStack_90;
          puStack_b8 = puStack_90;
          puStack_b0 = puStack_88;
          puStack_a0 = puStack_78;
          puStack_90 = puVar11;
          puStack_88 = puVar14;
          puStack_80 = puVar14;
          puStack_78 = puVar15;
          func_0x0001080e4dc0();
          puVar11 = puVar16;
          puVar14 = puVar17;
          puVar15 = puVar2;
        }
        else {
          puVar14 = puVar14 + (((long)puVar14 - (long)puVar11 >> 3) + 1) / -2;
          puVar12 = puVar14;
          puStack_b0 = puVar14;
        }
      }
      puVar16 = puVar12 + 1;
      *puVar12 = uVar8;
      puVar17 = *(undefined8 **)(param_1 + 0x2a0);
      puStack_a8 = puVar16;
      while (puVar12 = *(undefined8 **)(param_1 + 0x298), puVar17 != puVar12) {
        puVar12 = puVar14;
        if (puVar14 == puVar11) {
          if (puVar16 < puVar15) {
            lVar13 = (long)puVar16 - (long)puVar11;
            puVar2 = puVar16 + (((long)puVar15 - (long)puVar16 >> 3) + 1) / 2;
            puVar12 = (undefined8 *)((long)puVar2 - ((long)puVar16 - (long)puVar11));
            puVar16 = puVar2;
            if (lVar13 != 0) {
              _memmove(puVar12,puVar14,lVar13);
            }
          }
          else {
            lVar13 = (long)puVar15 - (long)puVar11 >> 2;
            if ((long)puVar15 - (long)puVar11 == 0) {
              lVar13 = 1;
            }
            lStack_70 = lVar1;
            FUN_1080e4890();
            func_0x0001080e4ce4(lVar13 * 2 + 6);
            FUN_1080e4868(&puStack_90,puVar11,puVar16);
            puVar5 = puStack_78;
            puVar4 = puStack_80;
            puVar12 = puStack_88;
            puVar2 = puStack_90;
            puStack_90 = puVar11;
            puStack_88 = puVar14;
            puStack_80 = puVar16;
            puStack_78 = puVar15;
            func_0x0001080e4dc0();
            puVar11 = puVar2;
            puVar16 = puVar4;
            puVar15 = puVar5;
          }
        }
        puVar17 = puVar17 + -1;
        puVar14 = puVar12 + -1;
        *puVar14 = *puVar17;
      }
      puStack_b8 = *(undefined8 **)(param_1 + 0x290);
      *(undefined8 **)(param_1 + 0x290) = puVar11;
      *(undefined8 **)(param_1 + 0x298) = puVar14;
      puStack_a0 = *(undefined8 **)(param_1 + 0x2a8);
      puStack_a8 = *(undefined8 **)(param_1 + 0x2a0);
      *(undefined8 **)(param_1 + 0x2a0) = puVar16;
      *(undefined8 **)(param_1 + 0x2a8) = puVar15;
      puStack_b0 = puVar12;
      func_0x0001080e48c4(&puStack_b8);
      goto LAB_1080e3c30;
    }
    uVar8 = 0x1000;
    __Znwm();
    if (puVar14 != puVar17) {
      *puVar17 = uVar8;
      *(undefined8 **)(param_1 + 0x2a0) = puVar17 + 1;
      goto LAB_1080e3c30;
    }
    if (puVar16 == puVar15) {
      lVar13 = (long)puVar14 - (long)puVar16 >> 2;
      if (puVar17 == puVar16) {
        lVar13 = 1;
      }
      lStack_70 = lVar1;
      FUN_1080e4890();
      func_0x0001080e4ce4(lVar13 * 2 + 6);
      FUN_1080e4868(&puStack_90,*(undefined8 *)(param_1 + 0x298),*(undefined8 *)(param_1 + 0x2a0));
      puVar17 = *(undefined8 **)(param_1 + 0x298);
      puVar16 = *(undefined8 **)(param_1 + 0x290);
      puVar15 = *(undefined8 **)(param_1 + 0x2a8);
      puVar14 = *(undefined8 **)(param_1 + 0x2a0);
      *(undefined8 **)(param_1 + 0x298) = puStack_88;
      *(undefined8 **)(param_1 + 0x290) = puStack_90;
      *(undefined8 **)(param_1 + 0x2a8) = puStack_78;
      *(undefined8 **)(param_1 + 0x2a0) = puStack_80;
      puStack_90 = puVar16;
      puStack_88 = puVar17;
      puStack_80 = puVar14;
      puStack_78 = puVar15;
      func_0x0001080e4dc0();
      puVar16 = *(undefined8 **)(param_1 + 0x298);
    }
    puVar16[-1] = uVar8;
    *(undefined8 **)(param_1 + 0x298) = puVar16;
  }
  else {
    *(ulong *)(param_1 + 0x2b0) = uVar10 - 0x200;
    uVar8 = *puVar16;
    *(undefined8 **)(param_1 + 0x298) = puVar16 + 1;
  }
  FUN_1080e477c(param_1 + 0x290,uVar8);
LAB_1080e3c30:
  puVar16 = (undefined8 *)(param_1 + 0x290);
  FUN_1080e4308();
  *puVar16 = ppuVar6;
  *(long *)(param_1 + 0x2b8) = *(long *)(param_1 + 0x2b8) + 1;
  return;
}



/* Entry: 1080e3d2c; end: 1080e3d47;  */

void FUN_1080e3d2c(long param_1)

{
  *(long *)(param_1 + 0x288) = *(long *)(param_1 + 0x288) + 1;
  return;
}



/* Entry: 1080e3d48; end: 1080e3dd3;  */

/* WARNING: Removing unreachable block (ram,0x0001080e3db8) */

void FUN_1080e3d48(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x288);
  if (uVar1 < 2) {
    if ((*(byte *)(param_1 + 0x1fa) & 1) == 0) {
      while (*(long *)(param_1 + 0x2b8) != 0) {
        func_0x0001080e4bd4();
        FUN_1080e13b0(param_1 + 0x290);
        _JSObjectCallAsFunction(*(undefined8 *)(param_1 + 0x218));
        func_0x0001080e4d98();
      }
    }
    uVar1 = *(ulong *)(param_1 + 0x288);
  }
  *(ulong *)(param_1 + 0x288) = uVar1 - 1;
  return;
}



/* Entry: 1080e3dd4; end: 1080e3de7;  */

undefined8 FUN_1080e3dd4(void)

{
  return 0;
}



/* Entry: 1080e3de8; end: 1080e3e2b;  */

void FUN_1080e3de8(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x00010b99f5f8(&uStack_28,&UNK_10f47a850);
  *param_1 = 2;
  param_1[1] = uStack_28;
  uStack_28 = 0;
  func_0x000104bda960(0);
  return;
}



/* Entry: 1080e3e2c; end: 1080e3e2f;  */

void FUN_1080e3e2c(void)

{
  return;
}



/* Entry: 1080e3e30; end: 1080e3e57;  */

undefined8 * FUN_1080e3e30(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_1080e3e58(param_1 + 1);
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



/* Entry: 1080e3e58; end: 1080e3e73;  */

void FUN_1080e3e58(long param_1)

{
  long lVar1;
  
  for (lVar1 = 0; lVar1 != 8; lVar1 = lVar1 + 1) {
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 1080e3e74; end: 1080e3e9f;  */

void FUN_1080e3e74(undefined8 param_1,undefined8 param_2)

{
  func_0x0001080e4b88();
  _strlen(param_2);
  func_0x0001080e495c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm();
  return;
}


