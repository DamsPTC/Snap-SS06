/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b9741ac; end: 10b9741bf;  */

void FUN_10b9741ac(void)

{
  FUN_10b97420c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9741c0; end: 10b9741eb;  */

void FUN_10b9741c0(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    _free();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 10b9741ec; end: 10b97420b;  */

void FUN_10b9741ec(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[1] = *(undefined8 *)(param_2 + 0x20);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x28);
  return;
}



/* Entry: 10b97420c; end: 10b974247;  */

undefined8 * FUN_10b97420c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7b9c8;
  FUN_10b9741c0();
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 10b974248; end: 10b9742d3;  */

void FUN_10b974248(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7b978;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b9742d4; end: 10b974317;  */

void FUN_10b9742d4(void)

{
  undefined1 auStack_28 [8];
  
  func_0x000107c31088(auStack_28);
  FUN_10b974318(auStack_28);
  FUN_10b97435c();
  return;
}



/* Entry: 10b974318; end: 10b97435b;  */

void FUN_10b974318(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)0x8;
  __Znwm();
  lVar5 = *param_1;
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
  *plVar4 = lVar5;
  return;
}



/* Entry: 10b97435c; end: 10b974367;  */

void FUN_10b97435c(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *in_stack_00000008;
  
  if (in_stack_00000008 == (long *)0x0) {
    return;
  }
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
    func_0x0001003a8364();
    func_0x0001003ac8f0();
    if (in_stack_00000008 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ac8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*in_stack_00000008 + 8))(in_stack_00000008);
      return;
    }
  }
  return;
}



/* Entry: 10b974368; end: 10b97456b;  */

void FUN_10b974368(undefined8 *param_1,byte ****param_2,undefined8 param_3,byte ****param_4)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  byte ****ppppbVar3;
  byte ****ppppbVar4;
  byte ****ppppbVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 extraout_x8;
  byte ***extraout_x8_00;
  undefined8 uVar8;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w11;
  byte ***pppbVar9;
  byte ****ppppbVar10;
  undefined1 auStack_318 [16];
  undefined8 uStack_308;
  byte ***pppbStack_300;
  byte ***pppbStack_2f8;
  undefined1 *puStack_2f0;
  code *pcStack_2e8;
  undefined1 **ppuStack_2e0;
  code *pcStack_2d8;
  byte **ppbStack_2d0;
  byte **ppbStack_2c8;
  byte **ppbStack_2c0;
  byte **ppbStack_2b8;
  long alStack_2a8 [2];
  undefined8 uStack_298;
  byte ***pppbStack_290;
  byte ***pppbStack_288;
  undefined1 *puStack_280;
  code *pcStack_278;
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [32];
  byte ***pppbStack_230;
  undefined8 uStack_228;
  byte ***pppbStack_220;
  byte ***pppbStack_218;
  undefined8 uStack_210;
  undefined8 uStack_88;
  long alStack_78 [2];
  byte **ppbStack_68;
  undefined8 uStack_60;
  byte **ppbStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c39f9c();
  uVar1 = ((ulong)*param_4 & 0xfe) == 8;
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    ppuVar2 = (undefined **)param_4;
    func_0x000107c30f48(alStack_78);
    if (alStack_78[0] == 0) {
      func_0x00010b97ef08();
      func_0x00010b97e774();
    }
    else {
      do {
        func_0x000107c3a010();
      } while (extraout_w11 != 0);
      param_4 = (byte ****)&ppbStack_68;
      ppbStack_68 = (byte **)extraout_x8_00;
      FUN_10b98101c();
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c3a078();
      ppuVar2 = (undefined **)param_4;
      _NSClassFromString();
      if (((byte ****)ppuVar2 == (byte ****)0x0) ||
         (ppppbVar3 = (byte ****)ppuVar2,
         _objc_opt_respondsToSelector(ppuVar2,PTR_s_valdiMarshallableObjectDescripto_112682f20),
         ((ulong)ppppbVar3 & 1) == 0)) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110f9e738;
        func_0x00010c25ce40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b97ea4c();
        _NSClassFromString();
        if (param_4 == (byte ****)0x0) {
          func_0x00010b97ef08();
          func_0x00010b97e774();
        }
        else {
          _objc_opt_new();
          ppuVar2 = (undefined **)param_4;
          FUN_10b97456c(&ppbStack_68,param_2[2]);
          uVar1 = (byte ***)ppbStack_68 == (byte ***)0x1;
          uVar8 = 1;
          if (!(bool)uVar1) {
            param_1[1] = uStack_60;
            uStack_60 = 0;
            uVar8 = 2;
          }
          *param_1 = uVar8;
          param_4 = (byte ****)&ppbStack_68;
          func_0x000107c2a624();
          func_0x00010b97ea4c();
        }
      }
      else {
        pppbVar9 = param_2[2];
        func_0x00010c2953e0(&ppbStack_68,ppuVar2);
        func_0x000107c30e60(&ppbStack_48,pppbVar9,ppuVar2,&ppbStack_68);
        uVar1 = (byte ***)ppbStack_48 == (byte ***)0x1;
        uVar8 = 1;
        if (!(bool)uVar1) {
          param_1[1] = uStack_40;
          uStack_40 = 0;
          uVar8 = 2;
        }
        *param_1 = uVar8;
        param_4 = (byte ****)&ppbStack_48;
        func_0x000107c2a624();
      }
      func_0x00010b97ea4c();
    }
    func_0x000107c3a01c();
    param_2 = param_4;
    param_4 = (byte ****)ppuVar2;
  }
  else {
    func_0x00010b97ef08();
    func_0x00010b97e774();
  }
  func_0x000107c39f7c(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b97ea4c();
  func_0x000107c3a01c();
  func_0x00010b97e910();
  func_0x000107c3a10c();
  ppppbVar4 = param_2;
  func_0x000107c39f9c();
  uStack_88 = extraout_x8_01;
  func_0x00010b97ef38();
  func_0x00010b97ed38();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d3c80();
  func_0x00010b97ece8();
  ppppbVar3 = ppppbVar4;
  func_0x00010c08fa60();
  ppppbVar10 = ppppbVar3;
  func_0x00010b97f220();
  ppppbVar5 = ppppbVar10;
  func_0x00010b97f220();
  pppbVar9 = (byte ***)((long)ppppbVar3 - (long)ppppbVar10);
  func_0x00010bf6b860(ppppbVar4);
  func_0x000107c30f2c(auStack_260,ppppbVar4);
  func_0x00010b97ec78();
  puVar6 = PTR_PTR_1126e1bc0;
  _objc_opt_class(PTR_PTR_1126e1bc0);
  ppppbVar10 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar6);
  ppppbVar3 = param_4;
  if (((ulong)ppppbVar10 & 1) == 0) {
    puVar6 = PTR_PTR_1126e1bc8;
    _objc_opt_class(PTR_PTR_1126e1bc8);
    ppppbVar10 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar6);
    if (((ulong)ppppbVar10 & 1) == 0) {
      ppppbVar10 = &pppbStack_220;
      FUN_10b99f5f8(ppppbVar10,&UNK_10f7d017e);
      *param_2 = (byte ***)0x2;
      param_2[1] = pppbStack_220;
      pppbStack_220 = (byte ***)0x0;
      func_0x00010b97ea88();
      goto LAB_10b97487c;
    }
    func_0x000107c3a070();
    func_0x00010bf529e0();
    func_0x00010b97f304();
    uStack_210 = 0x10;
    pppbStack_218 = (byte ***)0x0;
    func_0x00010b97f178();
    for (ppppbVar10 = (byte ****)0x0; uVar1 = ppppbVar4 == ppppbVar10, !(bool)uVar1;
        ppppbVar10 = (byte ****)((long)ppppbVar10 + 1)) {
      ppppbVar5 = param_4;
      func_0x00010bf979a0();
      func_0x000107c31084();
      uStack_228 = 0;
      ppppbVar3 = (byte ****)&DAT_10f2fb62f;
      pppbStack_230 = (byte ***)ppppbVar10;
      func_0x000107c2793c();
      func_0x000107c3a06c(auStack_250);
      func_0x00010b97ee94();
      uStack_228 = CONCAT62(uStack_228._2_6_,4);
      pppbStack_230 = (byte ***)CONCAT44(pppbStack_230._4_4_,(int)ppppbVar5);
      func_0x00010b97ee0c();
      func_0x00010b97ec94();
      func_0x000107c3a060();
      func_0x00010b97eb28();
    }
    FUN_10b990e20(auStack_250);
    ppppbVar5 = (byte ****)pppbStack_218;
    func_0x00010b97ed24();
    func_0x000107c3a058();
    func_0x00010b97ee1c();
    func_0x000107c39ffc();
    func_0x000107c3a018();
    ppppbVar4 = ppppbVar3;
    func_0x000107c3a070();
    ppppbVar10 = ppppbVar3 + 1;
    *ppppbVar10 = (byte ***)0x1;
    *ppppbVar3 = (byte ***)&PTR_DAT_110d7bc90;
    ppppbVar3[2] = (byte ***)param_4;
    func_0x00010b97ed38();
    pppbVar9 = pppbStack_220;
    do {
      func_0x00010b97ef98();
    } while (extraout_w9_00 != 0);
    pppbStack_220 = (byte ***)ppppbVar3;
    func_0x00010b97f060();
    FUN_10b975bbc();
    *param_2 = (byte ***)0x1;
    param_2[1] = (byte ***)ppppbVar4;
    func_0x00010b97eec4();
    FUN_10b976424(ppppbVar3);
  }
  else {
    func_0x000107c3a070();
    func_0x00010bf529e0();
    func_0x00010b97f304();
    uStack_210 = 0x10;
    pppbStack_218 = (byte ***)0x0;
    func_0x00010b97f178();
    for (ppppbVar10 = (byte ****)0x0; uVar1 = ppppbVar4 == ppppbVar10, !(bool)uVar1;
        ppppbVar10 = (byte ****)((long)ppppbVar10 + 1)) {
      ppppbVar3 = param_4;
      func_0x00010bf979a0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c31084();
      uStack_228 = 0;
      pppbStack_230 = (byte ***)ppppbVar10;
      func_0x000107c3a0fc();
      func_0x000107c3a06c(auStack_250);
      func_0x00010b97ee94();
      func_0x000107c30f2c(auStack_258,ppppbVar3);
      ppppbVar3 = &pppbStack_230;
      FUN_10b9a8e18(ppppbVar3,auStack_258);
      func_0x00010b97ee0c();
      func_0x00010b97ec94();
      func_0x000107c3a078();
      func_0x000107c3a060();
      func_0x00010b97eb28();
      func_0x00010b97ece8();
    }
    func_0x000107c30fa0(auStack_250);
    ppppbVar5 = (byte ****)pppbStack_218;
    func_0x00010b97ed24();
    func_0x000107c3a058();
    func_0x00010b97ee1c();
    func_0x000107c39ffc();
    func_0x000107c3a018();
    ppppbVar4 = ppppbVar3;
    func_0x000107c3a070();
    ppppbVar10 = ppppbVar3 + 1;
    *ppppbVar10 = (byte ***)0x1;
    *ppppbVar3 = (byte ***)&PTR_FUN_110d7bc20;
    ppppbVar3[2] = (byte ***)param_4;
    func_0x00010b97ed38();
    pppbVar9 = pppbStack_220;
    do {
      func_0x00010b97ef98();
    } while (extraout_w9 != 0);
    pppbStack_220 = (byte ***)ppppbVar3;
    func_0x00010b97f060();
    FUN_10b975bbc();
    *param_2 = (byte ***)0x1;
    param_2[1] = (byte ***)ppppbVar4;
    func_0x00010b97eec4();
    FUN_10b9762e8(ppppbVar3);
  }
  ppppbVar10 = ppppbVar10 + 1;
  func_0x000107c27900();
  ppppbVar4 = ppppbVar3;
LAB_10b97487c:
  func_0x000107c3a05c();
  func_0x000107c39ffc();
  func_0x000107c39f7c(uStack_88);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b97eec4();
  FUN_10b976424();
  func_0x00010b97e958(auStack_270);
  func_0x000107c3a05c();
  func_0x000107c39ffc();
  func_0x00010b97e950();
  pcStack_278 = FUN_10b9749c4;
  pppbStack_290 = (byte ***)ppppbVar10;
  pppbStack_288 = (byte ***)param_4;
  puStack_280 = &stack0xffffffffffffffd0;
  func_0x000107c39f9c();
  ppbStack_2c8 = (byte **)ppppbVar5[1];
  ppbStack_2d0 = (byte **)*ppppbVar5;
  ppbStack_2b8 = (byte **)ppppbVar5[3];
  ppbStack_2c0 = (byte **)ppppbVar5[2];
  uStack_298 = extraout_x8_02;
  func_0x000107c30e60(alStack_2a8,ppppbVar4[1]);
  FUN_10b974a34(alStack_2a8);
  plVar7 = alStack_2a8;
  func_0x000107c2a624();
  func_0x000107c39f7c(uStack_298);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b97f2c4();
  func_0x000107c2a624();
  func_0x00010b97e910();
  uVar1 = *plVar7 == 1;
  if ((bool)uVar1) {
    return;
  }
  pcStack_2d8 = FUN_10b974a34;
  ppuStack_2e0 = &puStack_280;
  func_0x00010b97f084();
  pcStack_2e8 = FUN_10b974a50;
  pppbStack_300 = (byte ***)ppppbVar10;
  pppbStack_2f8 = (byte ***)param_4;
  puStack_2f0 = (undefined1 *)&ppuStack_2e0;
  func_0x000107c39f90();
  FUN_10b97456c(auStack_318,plVar7[1]);
  FUN_10b974a34(auStack_318);
  func_0x000107c2a624();
  func_0x000107c39f7c(uStack_308);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b97e9c8();
    func_0x000107c2a624();
    func_0x00010b97e910();
    _NSStringFromProtocol(pppbVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c3a104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pppbVar9);
    return;
  }
  return;
}



/* Entry: 10b97456c; end: 10b9749c3;  */

void FUN_10b97456c(undefined8 ***param_1,undefined8 param_2,undefined8 ***param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 **ppuVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w9;
  int extraout_w9_00;
  undefined8 ***pppuVar8;
  undefined8 in_stack_00000050;
  undefined1 auStack_298 [16];
  undefined8 uStack_288;
  undefined8 **ppuStack_280;
  undefined8 **ppuStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined8 **ppuStack_260;
  code *pcStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  long alStack_228 [2];
  undefined8 uStack_218;
  undefined8 **ppuStack_210;
  undefined8 **ppuStack_208;
  undefined8 *puStack_200;
  code *pcStack_1f8;
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [32];
  undefined8 **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 **ppuStack_1a0;
  undefined8 **ppuStack_198;
  undefined8 uStack_190;
  undefined8 uStack_8;
  
  func_0x000107c3a10c();
  pppuVar2 = param_1;
  func_0x000107c39f9c();
  uStack_8 = extraout_x8;
  func_0x00010b97ef38();
  func_0x00010b97ed38();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d3c80();
  func_0x00010b97ece8();
  pppuVar3 = pppuVar2;
  func_0x00010c08fa60();
  pppuVar8 = pppuVar3;
  func_0x00010b97f220();
  pppuVar4 = pppuVar8;
  func_0x00010b97f220();
  ppuVar7 = (undefined8 **)((long)pppuVar3 - (long)pppuVar8);
  func_0x00010bf6b860(pppuVar2);
  func_0x000107c30f2c(auStack_1e0,pppuVar2);
  func_0x00010b97ec78();
  puVar5 = PTR_PTR_1126e1bc0;
  _objc_opt_class(PTR_PTR_1126e1bc0);
  pppuVar8 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar5);
  pppuVar3 = param_3;
  if (((ulong)pppuVar8 & 1) == 0) {
    puVar5 = PTR_PTR_1126e1bc8;
    _objc_opt_class(PTR_PTR_1126e1bc8);
    pppuVar8 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if (((ulong)pppuVar8 & 1) == 0) {
      pppuVar8 = &ppuStack_1a0;
      FUN_10b99f5f8(pppuVar8,&UNK_10f7d017e);
      *param_1 = (undefined8 **)0x2;
      param_1[1] = ppuStack_1a0;
      ppuStack_1a0 = (undefined8 ***)0x0;
      func_0x00010b97ea88();
      goto LAB_10b97487c;
    }
    func_0x000107c3a070();
    func_0x00010bf529e0();
    func_0x00010b97f304();
    uStack_190 = 0x10;
    ppuStack_198 = (undefined8 ***)0x0;
    func_0x00010b97f178();
    for (pppuVar8 = (undefined8 ***)0x0; in_ZR = pppuVar2 == pppuVar8, !(bool)in_ZR;
        pppuVar8 = (undefined8 ***)((long)pppuVar8 + 1)) {
      pppuVar4 = param_3;
      func_0x00010bf979a0();
      func_0x000107c31084();
      uStack_1a8 = 0;
      pppuVar3 = (undefined8 ***)&DAT_10f2fb62f;
      ppuStack_1b0 = pppuVar8;
      func_0x000107c2793c();
      func_0x000107c3a06c(auStack_1d0);
      func_0x00010b97ee94();
      uStack_1a8 = CONCAT62(uStack_1a8._2_6_,4);
      ppuStack_1b0 = (undefined8 **)CONCAT44(ppuStack_1b0._4_4_,(int)pppuVar4);
      func_0x00010b97ee0c();
      func_0x00010b97ec94();
      func_0x000107c3a060();
      func_0x00010b97eb28();
    }
    FUN_10b990e20(auStack_1d0);
    pppuVar4 = (undefined8 ***)ppuStack_198;
    func_0x00010b97ed24();
    func_0x000107c3a058();
    func_0x00010b97ee1c();
    func_0x000107c39ffc();
    func_0x000107c3a018();
    pppuVar2 = pppuVar3;
    func_0x000107c3a070();
    pppuVar8 = pppuVar3 + 1;
    *pppuVar8 = (undefined8 **)0x1;
    *pppuVar3 = (undefined8 **)&PTR_DAT_110d7bc90;
    pppuVar3[2] = param_3;
    func_0x00010b97ed38();
    ppuVar7 = ppuStack_1a0;
    do {
      func_0x00010b97ef98();
    } while (extraout_w9_00 != 0);
    ppuStack_1a0 = pppuVar3;
    func_0x00010b97f060();
    FUN_10b975bbc();
    *param_1 = (undefined8 **)0x1;
    param_1[1] = pppuVar2;
    func_0x00010b97eec4();
    FUN_10b976424(pppuVar3);
  }
  else {
    func_0x000107c3a070();
    func_0x00010bf529e0();
    func_0x00010b97f304();
    uStack_190 = 0x10;
    ppuStack_198 = (undefined8 ***)0x0;
    func_0x00010b97f178();
    for (pppuVar8 = (undefined8 ***)0x0; in_ZR = pppuVar2 == pppuVar8, !(bool)in_ZR;
        pppuVar8 = (undefined8 ***)((long)pppuVar8 + 1)) {
      pppuVar3 = param_3;
      func_0x00010bf979a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c31084();
      uStack_1a8 = 0;
      ppuStack_1b0 = pppuVar8;
      func_0x000107c3a0fc();
      func_0x000107c3a06c(auStack_1d0);
      func_0x00010b97ee94();
      func_0x000107c30f2c(auStack_1d8,pppuVar3);
      pppuVar3 = &ppuStack_1b0;
      FUN_10b9a8e18(pppuVar3,auStack_1d8);
      func_0x00010b97ee0c();
      func_0x00010b97ec94();
      func_0x000107c3a078();
      func_0x000107c3a060();
      func_0x00010b97eb28();
      func_0x00010b97ece8();
    }
    func_0x000107c30fa0(auStack_1d0);
    pppuVar4 = (undefined8 ***)ppuStack_198;
    func_0x00010b97ed24();
    func_0x000107c3a058();
    func_0x00010b97ee1c();
    func_0x000107c39ffc();
    func_0x000107c3a018();
    pppuVar2 = pppuVar3;
    ppuVar7 = ppuStack_1a0;
    func_0x000107c3a070();
    pppuVar8 = pppuVar3 + 1;
    *pppuVar8 = (undefined8 **)0x1;
    *pppuVar3 = (undefined8 **)&PTR_FUN_110d7bc20;
    pppuVar3[2] = param_3;
    func_0x00010b97ed38();
    do {
      func_0x00010b97ef98();
    } while (extraout_w9 != 0);
    ppuStack_1a0 = pppuVar3;
    func_0x00010b97f060();
    FUN_10b975bbc();
    *param_1 = (undefined8 **)0x1;
    param_1[1] = pppuVar2;
    func_0x00010b97eec4();
    FUN_10b9762e8(pppuVar3);
  }
  pppuVar8 = pppuVar8 + 1;
  func_0x000107c27900();
  pppuVar2 = pppuVar3;
LAB_10b97487c:
  func_0x000107c3a05c();
  func_0x000107c39ffc();
  func_0x000107c39f7c(uStack_8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b97eec4();
  FUN_10b976424();
  func_0x00010b97e958(auStack_1f0);
  func_0x000107c3a05c();
  func_0x000107c39ffc();
  func_0x00010b97e950();
  pcStack_1f8 = FUN_10b9749c4;
  ppuStack_210 = pppuVar8;
  ppuStack_208 = param_3;
  puStack_200 = &stack0x00000050;
  func_0x000107c39f9c();
  puStack_248 = pppuVar4[1];
  puStack_250 = *pppuVar4;
  puStack_238 = pppuVar4[3];
  puStack_240 = pppuVar4[2];
  uStack_218 = extraout_x8_00;
  func_0x000107c30e60(alStack_228,pppuVar2[1]);
  FUN_10b974a34(alStack_228);
  plVar6 = alStack_228;
  func_0x000107c2a624();
  func_0x000107c39f7c(uStack_218);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b97f2c4();
  func_0x000107c2a624();
  func_0x00010b97e910();
  uVar1 = *plVar6 == 1;
  if ((bool)uVar1) {
    return;
  }
  pcStack_258 = FUN_10b974a34;
  ppuStack_260 = &puStack_200;
  func_0x00010b97f084();
  pcStack_268 = FUN_10b974a50;
  ppuStack_280 = pppuVar8;
  ppuStack_278 = param_3;
  puStack_270 = (undefined1 *)&ppuStack_260;
  func_0x000107c39f90();
  FUN_10b97456c(auStack_298,plVar6[1]);
  FUN_10b974a34(auStack_298);
  func_0x000107c2a624();
  func_0x000107c39f7c(uStack_288);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b97e9c8();
  func_0x000107c2a624();
  func_0x00010b97e910();
  _NSStringFromProtocol(ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c3a104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 10b9749c4; end: 10b974a33; -[SCValdiMarshallableObjectRegistry registerClass:objectDescriptor:] */

void FUN_10b9749c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  long alStack_38 [2];
  undefined8 uStack_28;
  
  func_0x000107c39f9c();
  uStack_28 = extraout_x8;
  func_0x000107c30e60(alStack_38,*(undefined8 *)(param_1 + 8));
  FUN_10b974a34(alStack_38);
  plVar2 = alStack_38;
  func_0x000107c2a624();
  func_0x000107c39f7c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b97f2c4();
  func_0x000107c2a624();
  func_0x00010b97e910();
  uVar1 = *plVar2 == 1;
  if ((bool)uVar1) {
    return;
  }
  func_0x00010b97f084();
  func_0x000107c39f90();
  FUN_10b97456c(auStack_a8,plVar2[1]);
  FUN_10b974a34(auStack_a8);
  func_0x000107c2a624();
  func_0x000107c39f7c(uStack_98);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b97e9c8();
  func_0x000107c2a624();
  func_0x00010b97e910();
  _NSStringFromProtocol(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c3a104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b974a34; end: 10b974a4f;  */

void FUN_10b974a34(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uVar1 = *param_1 == 1;
  if ((bool)uVar1) {
    return;
  }
  func_0x00010b97f084();
  func_0x000107c39f90();
  FUN_10b97456c(auStack_48,param_1[1]);
  FUN_10b974a34(auStack_48);
  func_0x000107c2a624();
  func_0x000107c39f7c(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b97e9c8();
  func_0x000107c2a624();
  func_0x00010b97e910();
  _NSStringFromProtocol(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c3a104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b974a50; end: 10b974aab; -[SCValdiMarshallableObjectRegistry registerEnum:] */

void FUN_10b974a50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x000107c39f90();
  FUN_10b97456c(auStack_38,*(undefined8 *)(param_1 + 8));
  FUN_10b974a34(auStack_38);
  func_0x000107c2a624();
  func_0x000107c39f7c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b97e9c8();
  func_0x000107c2a624();
  func_0x00010b97e910();
  _NSStringFromProtocol(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c3a104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b974aac; end: 10b974ae7; -[SCValdiMarshallableObjectRegistry registerUntypedProtocol:] */

void FUN_10b974aac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _NSStringFromProtocol(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c3a104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b974ae8; end: 10b974ba3; -[SCValdiMarshallableObjectRegistry forceLoadClass:] */

long * FUN_10b974ae8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,long param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar3;
  byte bVar4;
  long *plVar5;
  long alStack_148 [2];
  undefined1 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 uStack_120;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined **ppuStack_f8;
  byte bStack_f0;
  undefined1 uStack_e8;
  undefined1 uStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  long alStack_c0 [2];
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_58;
  undefined1 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c39f9c();
  lVar3 = *(long *)(param_1 + 8);
  lStack_58 = *(long *)(lVar3 + 0x20) + 0x18;
  uStack_50 = 1;
  uStack_28 = extraout_x8;
  __ZNSt3__115recursive_mutex4lockEv();
  FUN_10b976548(&lStack_38,lVar3);
  uVar2 = lStack_38 == 1;
  lStack_48 = 1;
  if (!(bool)uVar2) {
    uStack_40 = uStack_30;
    uStack_30 = 0;
    lStack_48 = 2;
  }
  func_0x000107c30ec0(&lStack_38);
  func_0x000107c2851c(&lStack_58);
  FUN_10b974ba4(&lStack_48);
  plVar5 = &lStack_48;
  func_0x0001080c6234();
  func_0x000107c39f7c(uStack_28);
  if ((bool)uVar2) {
    return plVar5;
  }
  ___stack_chk_fail();
  func_0x00010b97ed9c();
  func_0x0001080c6234();
  func_0x00010b97e910();
  uVar2 = *plVar5 == 1;
  if ((bool)uVar2) {
    return plVar5;
  }
  func_0x00010b97f084();
  func_0x000107c39f9c();
  uStack_a8 = extraout_x8_00;
  func_0x00010b97ef38();
  lStack_d8 = *(long *)(plVar5[1] + 0x20) + 0x18;
  uStack_d0 = 1;
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x00010b97eea4();
  func_0x000107c3a120();
  lVar3 = lStack_b0;
  if ((bool)uVar2) {
    func_0x000108110898(&lStack_d8);
    bStack_f0 = 1;
    ppuStack_f8 = &PTR_FUN_110d7e6e0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    plVar5 = *(long **)(lStack_b0 + 0x28);
    func_0x00010b982c30(auStack_118,param_3);
    alStack_148[0] = 0;
    alStack_148[1] = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    param_4 = alStack_148;
    (**(code **)(*plVar5 + 0x30))(auStack_108,plVar5,0,auStack_118,param_4,&ppuStack_f8);
    func_0x00010b97eeb4();
    bVar4 = bStack_f0;
    if ((bStack_f0 & 1) == 0) {
      func_0x00010b97f280();
      uStack_c8 = 2;
      alStack_c0[0] = alStack_148[0];
      param_5 = alStack_148[0];
    }
    else {
      FUN_10b9a8f04(alStack_148,auStack_108);
      FUN_10b9a0b80(param_5,alStack_148);
      uStack_c8 = 1;
      alStack_c0[0] = CONCAT44(alStack_c0[0]._4_4_,(int)param_5);
      func_0x00010b97ee4c();
    }
    FUN_10b9a8d98(auStack_108);
    func_0x00010b97ee8c();
    lVar3 = param_5;
  }
  else {
    bVar4 = 0;
    uStack_c8 = 2;
    alStack_c0[0] = lStack_b0;
    lStack_b0 = 0;
  }
  func_0x00010b97ec68();
  func_0x000107c2851c(&lStack_d8);
  if ((bVar4 & 1) != 0) {
    func_0x0001090d2f68();
    func_0x000107c39ffc();
    func_0x000107c39f7c(uStack_a8);
    if ((bool)uVar2) {
      return (long *)(long)(int)lVar3;
    }
    ___stack_chk_fail();
    FUN_10b9a8d98(auStack_108);
    func_0x00010b97ee8c();
    func_0x00010b97ec68();
    plVar5 = &lStack_d8;
    func_0x000107c2851c(plVar5);
    func_0x000107c39ffc();
    func_0x00010b97e950();
    func_0x00010b97ef38();
    func_0x00010b97ed38();
    func_0x00010c0bbe00(plVar5);
    func_0x00010b97e75c();
    return param_4;
  }
  FUN_10b981e8c(alStack_c0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b974d48);
  (*pcVar1)();
}



/* Entry: 10b974ba4; end: 10b974bbf;  */

long * FUN_10b974ba4(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,long param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 extraout_x8;
  long lVar3;
  byte bVar4;
  long *plVar5;
  long alStack_e8 [2];
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined **ppuStack_98;
  byte bStack_90;
  undefined1 uStack_88;
  undefined1 uStack_80;
  long lStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  long alStack_60 [2];
  long lStack_50;
  undefined8 uStack_48;
  
  uVar2 = *param_1 == 1;
  if ((bool)uVar2) {
    return param_1;
  }
  func_0x00010b97f084();
  func_0x000107c39f9c();
  uStack_48 = extraout_x8;
  func_0x00010b97ef38();
  lStack_78 = *(long *)(param_1[1] + 0x20) + 0x18;
  uStack_70 = 1;
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x00010b97eea4();
  func_0x000107c3a120();
  lVar3 = lStack_50;
  if ((bool)uVar2) {
    func_0x000108110898(&lStack_78);
    bStack_90 = 1;
    ppuStack_98 = &PTR_FUN_110d7e6e0;
    uStack_88 = 0;
    uStack_80 = 0;
    plVar5 = *(long **)(lStack_50 + 0x28);
    func_0x00010b982c30(auStack_b8,param_3);
    alStack_e8[0] = 0;
    alStack_e8[1] = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    param_4 = alStack_e8;
    (**(code **)(*plVar5 + 0x30))(auStack_a8,plVar5,0,auStack_b8,param_4,&ppuStack_98);
    func_0x00010b97eeb4();
    bVar4 = bStack_90;
    if ((bStack_90 & 1) == 0) {
      func_0x00010b97f280();
      uStack_68 = 2;
      alStack_60[0] = alStack_e8[0];
      param_5 = alStack_e8[0];
    }
    else {
      FUN_10b9a8f04(alStack_e8,auStack_a8);
      FUN_10b9a0b80(param_5,alStack_e8);
      uStack_68 = 1;
      alStack_60[0] = CONCAT44(alStack_60[0]._4_4_,(int)param_5);
      func_0x00010b97ee4c();
    }
    FUN_10b9a8d98(auStack_a8);
    func_0x00010b97ee8c();
    lVar3 = param_5;
  }
  else {
    bVar4 = 0;
    uStack_68 = 2;
    alStack_60[0] = lStack_50;
    lStack_50 = 0;
  }
  func_0x00010b97ec68();
  func_0x000107c2851c(&lStack_78);
  if ((bVar4 & 1) != 0) {
    func_0x0001090d2f68();
    func_0x000107c39ffc();
    func_0x000107c39f7c(uStack_48);
    if ((bool)uVar2) {
      return (long *)(long)(int)lVar3;
    }
    ___stack_chk_fail();
    FUN_10b9a8d98(auStack_a8);
    func_0x00010b97ee8c();
    func_0x00010b97ec68();
    plVar5 = &lStack_78;
    func_0x000107c2851c(plVar5);
    func_0x000107c39ffc();
    func_0x00010b97e950();
    func_0x00010b97ef38();
    func_0x00010b97ed38();
    func_0x00010c0bbe00(plVar5);
    func_0x00010b97e75c();
    return param_4;
  }
  FUN_10b981e8c(alStack_60);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b974d48);
  (*pcVar1)();
}



/* Entry: 10b974bc0; end: 10b974dbf; -[SCValdiMarshallableObjectRegistry marshallObject:ofClass:toMarshaller:] */

long * FUN_10b974bc0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,long param_5)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long lVar2;
  byte bVar3;
  long *plVar4;
  long alStack_d8 [2];
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined **ppuStack_88;
  byte bStack_80;
  undefined1 uStack_78;
  undefined1 uStack_70;
  long lStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  long alStack_50 [2];
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c39f9c();
  uStack_38 = extraout_x8;
  func_0x00010b97ef38();
  lStack_68 = *(long *)(*(long *)(param_1 + 8) + 0x20) + 0x18;
  uStack_60 = 1;
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x00010b97eea4();
  func_0x000107c3a120();
  lVar2 = lStack_40;
  if ((bool)in_ZR) {
    func_0x000108110898(&lStack_68);
    bStack_80 = 1;
    ppuStack_88 = &PTR_FUN_110d7e6e0;
    uStack_78 = 0;
    uStack_70 = 0;
    plVar4 = *(long **)(lStack_40 + 0x28);
    func_0x00010b982c30(auStack_a8,param_3);
    alStack_d8[0] = 0;
    alStack_d8[1] = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    param_4 = alStack_d8;
    (**(code **)(*plVar4 + 0x30))(auStack_98,plVar4,0,auStack_a8,param_4,&ppuStack_88);
    func_0x00010b97eeb4();
    bVar3 = bStack_80;
    if ((bStack_80 & 1) == 0) {
      func_0x00010b97f280();
      uStack_58 = 2;
      alStack_50[0] = alStack_d8[0];
      param_5 = alStack_d8[0];
    }
    else {
      FUN_10b9a8f04(alStack_d8,auStack_98);
      FUN_10b9a0b80(param_5,alStack_d8);
      uStack_58 = 1;
      alStack_50[0] = CONCAT44(alStack_50[0]._4_4_,(int)param_5);
      func_0x00010b97ee4c();
    }
    FUN_10b9a8d98(auStack_98);
    func_0x00010b97ee8c();
    lVar2 = param_5;
  }
  else {
    bVar3 = 0;
    uStack_58 = 2;
    alStack_50[0] = lStack_40;
    lStack_40 = 0;
  }
  func_0x00010b97ec68();
  func_0x000107c2851c(&lStack_68);
  if ((bVar3 & 1) != 0) {
    func_0x0001090d2f68();
    func_0x000107c39ffc();
    func_0x000107c39f7c(uStack_38);
    if ((bool)in_ZR) {
      return (long *)(long)(int)lVar2;
    }
    ___stack_chk_fail();
    FUN_10b9a8d98(auStack_98);
    func_0x00010b97ee8c();
    func_0x00010b97ec68();
    plVar4 = &lStack_68;
    func_0x000107c2851c(plVar4);
    func_0x000107c39ffc();
    func_0x00010b97e950();
    func_0x00010b97ef38();
    func_0x00010b97ed38();
    func_0x00010c0bbe00(plVar4);
    func_0x00010b97e75c();
    return param_4;
  }
  FUN_10b981e8c(alStack_50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b974d48);
  (*pcVar1)();
}



/* Entry: 10b974dc0; end: 10b974e0f; -[SCValdiMarshallableObjectRegistry marshallObject:toMarshaller:] */

undefined8
FUN_10b974dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010b97ef38();
  func_0x00010b97ed38();
  func_0x00010c0bbe00(param_1,param_2,param_3,uVar1,param_4);
  func_0x00010b97e75c();
  return param_4;
}



/* Entry: 10b974e10; end: 10b974fd3; -[SCValdiMarshallableObjectRegistry unmarshallObjectOfClass:fromMarshaller:atIndex:] */

void FUN_10b974e10(long param_1)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w10;
  byte bVar5;
  long unaff_x20;
  long *unaff_x21;
  long lVar6;
  undefined8 uStack_188;
  long lStack_160;
  undefined1 auStack_158 [16];
  long lStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long *plStack_108;
  long alStack_e0 [2];
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  undefined1 uStack_98;
  undefined **ppuStack_90;
  byte bStack_88;
  undefined1 uStack_80;
  undefined1 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 uStack_50;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c3a09c();
  func_0x000107c39f9c();
  lVar6 = *(long *)(param_1 + 8);
  lStack_70 = *(long *)(lVar6 + 0x20) + 0x18;
  uStack_68 = 1;
  uStack_38 = extraout_x8;
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x00010b97eea4();
  func_0x000107c3a120();
  if ((bool)in_ZR) {
    func_0x000108110898(&lStack_70);
    bStack_88 = 1;
    ppuStack_90 = &PTR_FUN_110d7e6e0;
    uStack_80 = 0;
    uStack_78 = 0;
    unaff_x21 = *(long **)(lStack_40 + 0x28);
    FUN_10b9a1228(auStack_b0);
    alStack_e0[0] = 0;
    alStack_e0[1] = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    (**(code **)(*unaff_x21 + 0x28))(&lStack_a0,unaff_x21,auStack_b0,alStack_e0,&ppuStack_90);
    func_0x00010b97ec9c();
    bVar5 = bStack_88;
    if ((bStack_88 & 1) == 0) {
      FUN_10b9a0084(alStack_e0,&ppuStack_90);
      uStack_60 = 2;
      lStack_58 = alStack_e0[0];
    }
    else {
      uStack_60 = 1;
      lStack_58 = lStack_a0;
      uStack_50 = uStack_98;
      lStack_a0 = 0;
      uStack_98 = 0;
    }
    func_0x00010b97ef00();
    FUN_10b9a01e4(&ppuStack_90);
  }
  else {
    bVar5 = 0;
    uStack_60 = 2;
    lStack_58 = lStack_40;
    lStack_40 = 0;
  }
  func_0x00010b97ec68();
  func_0x000107c2851c(&lStack_70);
  if ((bVar5 & 1) == 0) {
    FUN_10b981e8c(&lStack_58);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10b974f8c);
    (*pcVar1)();
  }
  plVar3 = &lStack_58;
  FUN_10b982b30();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b97f1f4();
  func_0x000107c39f7c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b97ef00();
    FUN_10b9a01e4(&ppuStack_90);
    func_0x00010b97ec68();
    plVar4 = &lStack_70;
    func_0x000107c2851c();
    func_0x00010b97e910();
    lStack_110 = lVar6;
    plStack_108 = unaff_x21;
    func_0x00010b97f2b8();
    func_0x000107c39f9c();
    lStack_148 = *(long *)(plVar4[1] + 0x20) + 0x18;
    uStack_140 = 1;
    uStack_118 = extraout_x8_00;
    __ZNSt3__115recursive_mutex4lockEv();
    func_0x000107c3a050(&lStack_128);
    FUN_10b976548();
    uVar2 = lStack_128 == 1;
    if ((bool)uVar2) {
      func_0x000108110898(&lStack_148);
      unaff_x20 = *(long *)(lStack_120 + 0x30);
      if (unaff_x20 != 0) {
        do {
          func_0x000107c39fa4();
        } while (extraout_w10 != 0);
      }
      lStack_160 = unaff_x20;
      func_0x000107c30fb0(auStack_158,&lStack_160);
      func_0x000107c30f8c(plVar3 + 0xd,auStack_158);
      func_0x000107c3a044();
      func_0x000107c2792c(unaff_x20);
      uStack_138 = 1;
    }
    else {
      uStack_138 = 2;
      lStack_130 = lStack_120;
      lStack_120 = 0;
    }
    func_0x000107c30ec0(&lStack_128);
    func_0x000107c2851c(&lStack_148);
    FUN_10b974ba4(&uStack_138);
    func_0x0001080c6234();
    func_0x000107c39f7c(uStack_118);
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x000107c3a044();
    func_0x000107c2792c(unaff_x20);
    func_0x000107c30ec0(&lStack_128);
    plVar3 = &lStack_148;
    func_0x000107c2851c();
    func_0x00010b97e910();
    func_0x000107c39f90();
    func_0x000107c3a0f8();
    func_0x000107c3a088();
    _objc_alloc();
    func_0x000107c3a100();
    func_0x00010c030980();
    func_0x000107c39fe8();
    func_0x000107c39f7c(uStack_188);
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      func_0x00010b97e910();
      func_0x00010bf00e80();
      _objc_alloc(plVar3);
      func_0x00010c030980();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b974fd4; end: 10b97510f; -[SCValdiMarshallableObjectRegistry setSchemaOfClass:inMarshaller:] */

void FUN_10b974fd4(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_a8;
  long lStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x00010b97f2b8();
  func_0x000107c39f9c();
  lStack_68 = *(long *)(*(long *)(param_1 + 8) + 0x20) + 0x18;
  uStack_60 = 1;
  uStack_38 = extraout_x8;
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x000107c3a050(&lStack_48);
  FUN_10b976548();
  uVar1 = lStack_48 == 1;
  if ((bool)uVar1) {
    func_0x000108110898(&lStack_68);
    unaff_x20 = *(long *)(lStack_40 + 0x30);
    if (unaff_x20 != 0) {
      do {
        func_0x000107c39fa4();
      } while (extraout_w10 != 0);
    }
    lStack_80 = unaff_x20;
    func_0x000107c30fb0(auStack_78,&lStack_80);
    func_0x000107c30f8c(unaff_x19 + 0x68,auStack_78);
    func_0x000107c3a044();
    func_0x000107c2792c(unaff_x20);
    uStack_58 = 1;
  }
  else {
    uStack_58 = 2;
    lStack_50 = lStack_40;
    lStack_40 = 0;
  }
  func_0x000107c30ec0(&lStack_48);
  func_0x000107c2851c(&lStack_68);
  FUN_10b974ba4(&uStack_58);
  func_0x0001080c6234();
  func_0x000107c39f7c(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107c3a044();
    func_0x000107c2792c(unaff_x20);
    func_0x000107c30ec0(&lStack_48);
    plVar2 = &lStack_68;
    func_0x000107c2851c();
    func_0x00010b97e910();
    func_0x000107c39f90();
    func_0x000107c3a0f8();
    func_0x000107c3a088();
    _objc_alloc();
    func_0x000107c3a100();
    func_0x00010c030980();
    func_0x000107c39fe8();
    func_0x000107c39f7c(uStack_a8);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      func_0x00010b97e910();
      func_0x00010bf00e80();
      _objc_alloc(plVar2);
      func_0x00010c030980();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 10b975110; end: 10b97518f; -[SCValdiMarshallableObjectRegistry makeObjectOfClass:] */

void FUN_10b975110(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uStack_28;
  
  func_0x000107c39f90();
  func_0x000107c3a0f8();
  func_0x000107c3a088();
  _objc_alloc();
  func_0x000107c3a100();
  func_0x00010c030980();
  func_0x000107c39fe8();
  func_0x000107c39f7c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b97e910();
    func_0x00010bf00e80();
    _objc_alloc(param_1);
    func_0x00010c030980();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b975190; end: 10b9751e7; -[SCValdiMarshallableObjectRegistry makeObjectWithFieldValuesOfClass:] */

void FUN_10b975190(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf00e80();
  _objc_alloc(param_3);
  func_0x00010c030980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9751e8; end: 10b97529b; -[SCValdiMarshallableObjectRegistry object:equalsToObject:forClass:] */

long FUN_10b9751e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 in_ZR;
  long lVar1;
  undefined1 auStack_48 [8];
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c39f90();
  func_0x00010b97ef38();
  _objc_retain(param_4);
  func_0x000107c30e64(auStack_48,*(undefined8 *)(param_1 + 8),param_5);
  func_0x000107c3a088();
  FUN_10b967c04(param_3,param_4,*(undefined8 *)(lStack_40 + 0x38),lStack_40 + 0x48);
  lVar1 = param_3;
  func_0x000107c3a04c();
  func_0x00010b97ea4c();
  func_0x000107c39ffc();
  func_0x000107c39f7c(uStack_38);
  if ((bool)in_ZR) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010b97ea4c();
  func_0x000107c39ffc();
  __Unwind_Resume();
  return *(long *)(*(long *)(lVar1 + 8) + 0x20);
}



/* Entry: 10b97529c; end: 10b9752a7; -[SCValdiMarshallableObjectRegistry getValueSchemaRegistryPtr] */

undefined8 FUN_10b97529c(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x20);
}



/* Entry: 10b9752a8; end: 10b9752af; -[SCValdiMarshallableObjectRegistry .cxx_destruct] */

void FUN_10b9752a8(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 != (long *)0x0) {
    do {
      func_0x0001003acd68();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b97e704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b9752b0; end: 10b97541f;  */

void FUN_10b9752b0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  ulong unaff_x19;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  
  func_0x000107c3a024();
  _objc_retain();
  _objc_retain();
  puVar1 = PTR_s_pushToValdiMarshaller__112624b18;
  _objc_opt_respondsToSelector();
  if ((unaff_x19 & 1) == 0) {
    _NSStringFromProtocol();
    _objc_retainAutoreleasedReturnValue();
    _NSClassFromString();
    if (unaff_x20 == 0) {
      func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
    }
    else {
      _class_getInstanceMethod(unaff_x20,puVar1);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc0000000;
      pcStack_68 = FUN_10b975420;
      puStack_60 = &UNK_110d7ba88;
      ppuVar2 = &puStack_78;
      _objc_retainBlock(ppuVar2);
      ppuVar3 = ppuVar2;
      _imp_implementationWithBlock();
      _objc_release(ppuVar2);
      func_0x00010b97ed38();
      _method_getTypeEncoding(unaff_x20);
      _class_addMethod(ppuVar2,puVar1,ppuVar3,unaff_x20);
    }
    func_0x00010b97edc0();
  }
  func_0x00010b97ea4c();
  func_0x000107c39ffc();
  return;
}



/* Entry: 10b975420; end: 10b975473;  */

undefined8 FUN_10b975420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c30e68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbe00();
  func_0x00010b97e75c();
  return param_3;
}



/* Entry: 10b975474; end: 10b97547b;  */

void FUN_10b975474(void)

{
  return;
}



/* Entry: 10b97547c; end: 10b9755c3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b97547c(undefined8 *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  int extraout_w11;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long alStack_60 [4];
  
  alStack_60[1] = 0;
  alStack_60[2] = 0;
  alStack_60[3] = 0;
  uVar4 = 1;
  if (*(char *)(param_3 + 0x10) != '\0') {
    uVar4 = 2;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc
            (alStack_60 + 1,uVar4,0x6f);
  lVar6 = param_3 + 0x30;
  for (uVar7 = 0; uVar7 < *(ulong *)(param_3 + 0x28); uVar7 = uVar7 + 1) {
    lVar2 = lVar6;
    func_0x000107c30e6c(lVar6);
    FUN_10b967930((uint)lVar2 & 0xff);
    func_0x00010b97f1c4();
    lVar6 = lVar6 + 0x10;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(alStack_60 + 1,":");
  pcVar5 = (char *)(param_3 + 0x18);
  uVar1 = *pcVar5 == '\x01';
  if ((bool)uVar1) {
    plVar3 = alStack_60 + 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (plVar3,&DAT_10f2ef733);
  }
  else {
    func_0x000107c30e6c(pcVar5);
    plVar3 = (long *)(ulong)((uint)pcVar5 & 0xff);
    FUN_10b967930(plVar3);
    func_0x00010b97f1c4();
  }
  func_0x000107c31084();
  func_0x000107c31080(alStack_60);
  func_0x00010b97e96c();
  func_0x000107c3a0e4();
  lVar6 = alStack_60[0];
  lVar2 = alStack_60[0];
  func_0x000107c30e74(param_2 + 0x100,alStack_60[0],plVar3);
  func_0x000107c3a098(*(undefined8 *)(param_2 + 0x100));
  if ((bool)uVar1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(long *)(lVar2 + 8) != 0) {
      do {
        func_0x000107c39f98();
        uVar4 = extraout_x8;
        lVar6 = alStack_60[0];
      } while (extraout_w11 != 0);
    }
  }
  *param_1 = uVar4;
  func_0x000107c278f8(lVar6);
  return;
}



/* Entry: 10b9755c4; end: 10b9755c7;  */

undefined8 * FUN_10b9755c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7bb78;
  func_0x000107c278f4(param_1 + 8);
  return param_1;
}



/* Entry: 10b9755c8; end: 10b9755db;  */

void FUN_10b9755c8(void)

{
  FUN_10b97570c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9755dc; end: 10b975627;  */

void FUN_10b9755dc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x00010b97ed5c();
  func_0x00010b97eecc();
  FUN_10b975738();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _objc_alloc(uVar1);
  func_0x00010b97f0fc();
  func_0x00010b982c24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b975628; end: 10b975697;  */

long * FUN_10b975628(long *param_1,long param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  long *plVar2;
  
  param_2 = param_2 + param_4 * 0x10;
  FUN_10b982b30();
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x000107c30e20();
    uVar1 = *(undefined1 *)(param_2 + 0x48);
    *param_1 = *(long *)(param_3 + param_4 * 8);
    *(undefined1 *)(param_1 + 1) = uVar1;
    FUN_10b982a04();
    return param_1;
  }
  uVar1 = *(undefined1 *)(param_2 + 0x48);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = uVar1;
  if (((char)param_1[1] == '\x02') &&
     (plVar2 = (long *)*param_1, param_1 = (long *)0x0, plVar2 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)();
    return plVar2;
  }
  return param_1;
}



/* Entry: 10b975698; end: 10b97570b;  */

void FUN_10b975698(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  FUN_10b982b30();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  _objc_opt_respondsToSelector();
  if ((uVar1 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = param_3;
    func_0x00010c232bc0(param_3);
  }
  FUN_10b98186c(param_1,param_3,param_4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b97570c; end: 10b975737;  */

undefined8 * FUN_10b97570c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7bb78;
  func_0x000107c278f4(param_1 + 8);
  return param_1;
}



/* Entry: 10b975738; end: 10b9757b7;  */

undefined8 * FUN_10b975738(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  long unaff_x20;
  long unaff_x23;
  long unaff_x24;
  
  func_0x000107c3a124();
  func_0x00010b97eca4();
  func_0x000107c39f9c();
  (*(code *)PTR____chkstk_darwin_11034bd40)((long)param_1 << 3);
  func_0x00010b97ed70();
  for (; uVar1 = unaff_x20 == unaff_x24, !(bool)uVar1; unaff_x24 = unaff_x24 + 1) {
    func_0x00010b97f0cc();
    *(undefined8 **)(unaff_x23 + unaff_x24 * 8) = param_1;
  }
  func_0x00010b97ecbc();
  func_0x000107c39f7c(extraout_x8);
  if ((bool)uVar1) {
    return param_1;
  }
  ___stack_chk_fail();
  *param_1 = &PTR_DAT_110d7bb78;
  func_0x000107c278f4(param_1 + 8);
  return param_1;
}



/* Entry: 10b9757b8; end: 10b9757bb;  */

undefined8 * FUN_10b9757b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7bb78;
  func_0x000107c278f4(param_1 + 8);
  return param_1;
}



/* Entry: 10b9757bc; end: 10b9757cf;  */

void FUN_10b9757bc(void)

{
  FUN_10b97570c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b9757d0; end: 10b97581b;  */

void FUN_10b9757d0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x00010b97ed5c();
  func_0x00010b97eecc();
  FUN_10b9758f4();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _objc_alloc(uVar1);
  func_0x00010b97f0fc();
  func_0x00010b982c24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b97581c; end: 10b9758f3;  */

void FUN_10b97581c(ulong *param_1,long param_2,ulong param_3,long param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  
  FUN_10b982b30();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  _objc_opt_isKindOfClass();
  param_2 = param_2 + param_4 * 0x10;
  if ((uVar2 & 1) == 0) {
    if (*(char *)(param_2 + 0x4b) == '\x01') {
      if ((*(char *)(param_2 + 0x49) == '\x01') &&
         (uVar2 = param_3, _objc_opt_respondsToSelector(param_3,*(undefined8 *)(param_2 + 0x50)),
         (uVar2 & 1) == 0)) {
        func_0x00010b982c48(param_1);
      }
      else {
        func_0x00010b982c3c(param_1,*(undefined8 *)(param_2 + 0x50));
      }
    }
    else {
      uVar2 = param_3;
      func_0x00010b967a70(param_3,*(undefined8 *)(param_2 + 0x48),*(undefined8 *)(param_2 + 0x50));
      uVar1 = *(undefined1 *)(param_2 + 0x48);
      *param_1 = uVar2;
      *(undefined1 *)(param_1 + 1) = uVar1;
      FUN_10b982a04(param_1);
    }
  }
  else {
    uVar2 = param_3;
    func_0x000107c30e20(param_3);
    FUN_10b9829d8(param_1,uVar2 + param_4 * 8,*(undefined1 *)(param_2 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b9758f4; end: 10b975973;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b9758f4(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  undefined8 extraout_x8_00;
  undefined8 *extraout_x8_01;
  int extraout_w11;
  long unaff_x20;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x23;
  long unaff_x24;
  long alStack_70 [5];
  
  func_0x000107c3a124();
  func_0x00010b97eca4();
  func_0x000107c39f9c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(param_1 << 3);
  func_0x00010b97ed70();
  for (; uVar1 = unaff_x20 == unaff_x24, !(bool)uVar1; unaff_x24 = unaff_x24 + 1) {
    func_0x00010b97f0cc();
    *(long *)(unaff_x23 + unaff_x24 * 8) = param_1;
  }
  func_0x00010b97ecbc();
  func_0x000107c39f7c(extraout_x8_00);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    alStack_70[1] = 0;
    alStack_70[2] = 0;
    alStack_70[3] = 0;
    uVar4 = 1;
    if (*(char *)(param_2 + 0x10) != '\0') {
      uVar4 = 2;
    }
    alStack_70[4] = unaff_x24;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc
              (alStack_70 + 1,uVar4,0x6f);
    lVar6 = param_2 + 0x30;
    for (uVar7 = 0; uVar7 < *(ulong *)(param_2 + 0x28); uVar7 = uVar7 + 1) {
      lVar2 = lVar6;
      func_0x000107c30e6c(lVar6);
      FUN_10b967930((uint)lVar2 & 0xff);
      func_0x00010b97f1c4();
      lVar6 = lVar6 + 0x10;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(alStack_70 + 1,":");
    pcVar5 = (char *)(param_2 + 0x18);
    uVar1 = *pcVar5 == '\x01';
    if ((bool)uVar1) {
      plVar3 = alStack_70 + 1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (plVar3,&DAT_10f2ef733);
    }
    else {
      func_0x000107c30e6c(pcVar5);
      plVar3 = (long *)(ulong)((uint)pcVar5 & 0xff);
      FUN_10b967930(plVar3);
      func_0x00010b97f1c4();
    }
    func_0x000107c31084();
    func_0x000107c31080(alStack_70);
    func_0x00010b97e96c();
    func_0x000107c3a0e4();
    lVar6 = alStack_70[0];
    lVar2 = alStack_70[0];
    func_0x000107c30e74(param_1 + 0xf0,alStack_70[0],plVar3);
    func_0x000107c3a098(*(undefined8 *)(param_1 + 0xf0));
    if ((bool)uVar1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      if (*(long *)(lVar2 + 8) != 0) {
        do {
          func_0x000107c39f98();
          uVar4 = extraout_x8;
          lVar6 = alStack_70[0];
        } while (extraout_w11 != 0);
      }
    }
    *extraout_x8_01 = uVar4;
    func_0x000107c278f8(lVar6);
    return;
  }
  return;
}



/* Entry: 10b975974; end: 10b97597b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b975974(undefined8 *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  int extraout_w11;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long alStack_60 [4];
  
  alStack_60[1] = 0;
  alStack_60[2] = 0;
  alStack_60[3] = 0;
  uVar4 = 1;
  if (*(char *)(param_3 + 0x10) != '\0') {
    uVar4 = 2;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEmc
            (alStack_60 + 1,uVar4,0x6f);
  lVar6 = param_3 + 0x30;
  for (uVar7 = 0; uVar7 < *(ulong *)(param_3 + 0x28); uVar7 = uVar7 + 1) {
    lVar2 = lVar6;
    func_0x000107c30e6c(lVar6);
    FUN_10b967930((uint)lVar2 & 0xff);
    func_0x00010b97f1c4();
    lVar6 = lVar6 + 0x10;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(alStack_60 + 1,":");
  pcVar5 = (char *)(param_3 + 0x18);
  uVar1 = *pcVar5 == '\x01';
  if ((bool)uVar1) {
    plVar3 = alStack_60 + 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
              (plVar3,&DAT_10f2ef733);
  }
  else {
    func_0x000107c30e6c(pcVar5);
    plVar3 = (long *)(ulong)((uint)pcVar5 & 0xff);
    FUN_10b967930(plVar3);
    func_0x00010b97f1c4();
  }
  func_0x000107c31084();
  func_0x000107c31080(alStack_60);
  func_0x00010b97e96c();
  func_0x000107c3a0e4();
  lVar6 = alStack_60[0];
  lVar2 = alStack_60[0];
  func_0x000107c30e74(param_2 + 0xf0,alStack_60[0],plVar3);
  func_0x000107c3a098(*(undefined8 *)(param_2 + 0xf0));
  if ((bool)uVar1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(long *)(lVar2 + 8) != 0) {
      do {
        func_0x000107c39f98();
        uVar4 = extraout_x8;
        lVar6 = alStack_60[0];
      } while (extraout_w11 != 0);
    }
  }
  *param_1 = uVar4;
  func_0x000107c278f8(lVar6);
  return;
}



/* Entry: 10b97597c; end: 10b975a77;  */

long * FUN_10b97597c(long *param_1,ulong param_2,long *param_3,undefined8 param_4,long *param_5,
                    undefined8 param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined1 in_CY;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong uVar10;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  long *extraout_x8_05;
  uint extraout_w9;
  int extraout_w9_00;
  undefined8 extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  int extraout_w11;
  int extraout_w12;
  long extraout_x13;
  ulong extraout_x15;
  byte unaff_w21;
  long *plVar11;
  long unaff_x22;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_170 [16];
  undefined8 uStack_160;
  undefined2 uStack_158;
  long *plStack_148;
  undefined1 auStack_140 [32];
  undefined8 uStack_b8;
  long alStack_68 [2];
  undefined8 uStack_58;
  
  plVar6 = param_1;
  func_0x000107c39f90();
  func_0x00010b97e944();
  lVar14 = 0;
  while (func_0x00010b97f2e4(), !(bool)in_ZR) {
    func_0x00010b97ec58();
    plVar7 = plVar6;
    if ((bool)in_ZR) {
      func_0x00010b97ee00();
      func_0x000107c30e80();
      func_0x00010b97e83c();
      func_0x000107c30e78();
      func_0x00010b97e820();
      if ((bool)in_CY && !(bool)in_ZR) {
        *(byte *)(unaff_x22 + (long)plVar6) = unaff_w21 & 0x7f;
        func_0x00010b97e688();
        param_2 = extraout_x8 + lVar14 * 0x10;
        in_CY = 0x7f < extraout_w9;
        in_ZR = extraout_w9 == 0x80;
        if ((bool)in_ZR) {
          plVar7 = (long *)(extraout_x8 + (long)plVar6 * 0x10);
          func_0x000107c30e84();
          *(undefined1 *)(*param_1 + lVar14) = 0x80;
          func_0x00010b97e798();
          *(undefined1 *)(extraout_x8_00 + 1) = 0x80;
        }
        else {
          plVar7 = alStack_68;
          func_0x000107c30e84();
          func_0x00010b97ee00();
          param_2 = extraout_x8_01 + (long)plVar6 * 0x10;
          func_0x000107c30e84();
          func_0x00010b97ebbc();
          func_0x000107c30e84();
          lVar14 = lVar14 + -1;
        }
      }
      else {
        *(byte *)(unaff_x22 + lVar14) = unaff_w21 & 0x7f;
        func_0x000107c39f84();
        plVar7 = plVar6;
      }
    }
    lVar14 = lVar14 + 1;
    plVar6 = plVar7;
  }
  func_0x00010b97ec30();
  uVar15 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar15 = extraout_x8_02;
  }
  func_0x00010b97ea90(uVar15);
  func_0x000107c39f7c(uStack_58);
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  plVar7 = plVar6;
  func_0x000107c39f90();
  func_0x00010b97e944();
  for (uVar13 = 0; iVar9 = (int)param_6, uVar13 != plVar6[3]; uVar13 = uVar13 + 1) {
    if (*(char *)(*plVar6 + uVar13) == -2) {
      plVar8 = (long *)(plVar6[1] + uVar13 * 0x10);
      func_0x000107c30e98();
      plVar11 = (long *)*plVar6;
      uVar12 = plVar6[3];
      plVar7 = plVar11;
      param_2 = uVar12;
      param_3 = plVar8;
      func_0x000107c30e90();
      uVar10 = uVar12 & (ulong)plVar8 >> 7;
      if ((((long)plVar7 - uVar10 ^ uVar13 - uVar10) & uVar12) < 8) {
        *(byte *)((long)plVar11 + uVar13) = (byte)plVar8 & 0x7f;
        func_0x000107c39f84();
      }
      else {
        *(byte *)((long)plVar11 + (long)plVar7) = (byte)plVar8 & 0x7f;
        func_0x00010b97e688();
        if (extraout_w9_00 == 0x80) {
          puVar2 = (undefined8 *)(extraout_x8_03 + uVar13 * 0x10);
          uVar15 = *puVar2;
          puVar3 = (undefined8 *)(extraout_x8_03 + (long)plVar7 * 0x10);
          puVar3[1] = puVar2[1];
          *puVar3 = uVar15;
          *(undefined1 *)(*plVar6 + uVar13) = 0x80;
          *(undefined1 *)(*plVar6 + (plVar6[3] & uVar13 - 8) + (plVar6[3] & 7U) + 1) = 0x80;
        }
        else {
          puVar2 = (undefined8 *)(extraout_x8_03 + uVar13 * 0x10);
          uVar16 = puVar2[1];
          uVar15 = *puVar2;
          puVar2 = (undefined8 *)(extraout_x8_03 + (long)plVar7 * 0x10);
          uVar17 = *puVar2;
          puVar3 = (undefined8 *)(extraout_x8_03 + uVar13 * 0x10);
          puVar3[1] = puVar2[1];
          *puVar3 = uVar17;
          puVar2 = (undefined8 *)(plVar6[1] + (long)plVar7 * 0x10);
          puVar2[1] = uVar16;
          *puVar2 = uVar15;
          uVar13 = uVar13 - 1;
        }
      }
    }
  }
  uVar5 = uVar13 == 7;
  lVar14 = 6;
  if (!(bool)uVar5) {
    lVar14 = uVar13 - (uVar13 >> 3);
  }
  func_0x00010b97ea90(lVar14);
  func_0x000107c39f7c(uStack_b8);
  if ((bool)uVar5) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x000107c3a08c(plVar7[4]);
  uStack_160 = 0;
  if (*param_3 != 0) {
    do {
      func_0x000107c3a010();
      uStack_160 = extraout_x8_04;
    } while (extraout_w11 != 0);
  }
  uStack_158 = 0xff00;
  func_0x000107c30fa8(auStack_140,&uStack_160);
  func_0x000107c3a05c();
  plVar8 = (long *)plVar7[4];
  func_0x000107c31004(plVar8,auStack_140,param_4);
  plVar6 = plVar8;
  plStack_148 = plVar8;
  FUN_10b976044();
  func_0x000107c39fb4(0);
  do {
    func_0x000107c3a07c();
    uVar4 = uVar5;
    for (uVar13 = extraout_x15; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar10 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      lVar14 = plVar7[0x2d];
      plVar11 = (long *)(extraout_x13 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) &
                        extraout_x9_00);
      if (*(long **)(lVar14 + (long)plVar11 * 0x10) == plVar8) goto LAB_10b975ce8;
      uVar4 = 0;
    }
    func_0x000107c3a0dc();
    uVar5 = 1;
  } while ((bool)uVar4);
  plVar11 = plVar7 + 0x2c;
  FUN_10b97605c(plVar11,plVar6);
  plVar1 = (long *)(plVar7[0x2d] + (long)plVar11 * 0x10);
  *plVar1 = (long)plVar8;
  plVar1[1] = 0;
  *(byte *)(plVar7[0x2c] + (long)plVar11) = (byte)plVar6 & 0x7f;
  func_0x000107c39f84();
  lVar14 = plVar7[0x2d];
LAB_10b975ce8:
  plVar6 = (long *)(lVar14 + (long)plVar11 * 0x10 + 8);
  if (plVar6 != param_5) {
    lVar14 = 0;
    if (*param_5 != 0) {
      do {
        func_0x00010b97e7d0();
        plVar6 = extraout_x8_05;
        lVar14 = extraout_x9_01;
      } while (extraout_w12 != 0);
    }
    *plVar6 = lVar14;
    func_0x00010b9762a0();
  }
  func_0x000107c30e8c(&uStack_160,plVar7 + 0x32,param_2,&plStack_148);
  if (iVar9 != 0) {
    FUN_10b99081c(&uStack_160,auStack_140);
    FUN_10b99081c(auStack_170,param_4);
    func_0x000107c3a108();
    func_0x000107c3a058();
    func_0x000107c3a064();
  }
  func_0x00010b97e958(auStack_140);
  func_0x000107c3a0c0();
  return plVar8;
}



/* Entry: 10b975a78; end: 10b975bbb;  */

long * FUN_10b975a78(long *param_1,ulong param_2,long *param_3,undefined8 param_4,long *param_5,
                    undefined8 param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  ulong uVar10;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w9;
  ulong extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  int extraout_w12;
  long extraout_x13;
  ulong extraout_x15;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  long *plStack_d8;
  undefined1 auStack_d0 [32];
  undefined8 uStack_48;
  
  plVar6 = param_1;
  func_0x000107c39f90();
  func_0x00010b97e944();
  for (uVar14 = 0; iVar9 = (int)param_6, uVar14 != param_1[3]; uVar14 = uVar14 + 1) {
    if (*(char *)(*param_1 + uVar14) == -2) {
      plVar7 = (long *)(param_1[1] + uVar14 * 0x10);
      func_0x000107c30e98();
      plVar12 = (long *)*param_1;
      uVar13 = param_1[3];
      plVar6 = plVar12;
      param_2 = uVar13;
      param_3 = plVar7;
      func_0x000107c30e90();
      uVar10 = uVar13 & (ulong)plVar7 >> 7;
      if ((((long)plVar6 - uVar10 ^ uVar14 - uVar10) & uVar13) < 8) {
        *(byte *)((long)plVar12 + uVar14) = (byte)plVar7 & 0x7f;
        func_0x000107c39f84();
      }
      else {
        *(byte *)((long)plVar12 + (long)plVar6) = (byte)plVar7 & 0x7f;
        func_0x00010b97e688();
        if (extraout_w9 == 0x80) {
          puVar2 = (undefined8 *)(extraout_x8 + uVar14 * 0x10);
          uVar15 = *puVar2;
          puVar3 = (undefined8 *)(extraout_x8 + (long)plVar6 * 0x10);
          puVar3[1] = puVar2[1];
          *puVar3 = uVar15;
          *(undefined1 *)(*param_1 + uVar14) = 0x80;
          *(undefined1 *)(*param_1 + (param_1[3] & uVar14 - 8) + (param_1[3] & 7U) + 1) = 0x80;
        }
        else {
          puVar2 = (undefined8 *)(extraout_x8 + uVar14 * 0x10);
          uVar16 = puVar2[1];
          uVar15 = *puVar2;
          puVar2 = (undefined8 *)(extraout_x8 + (long)plVar6 * 0x10);
          uVar17 = *puVar2;
          puVar3 = (undefined8 *)(extraout_x8 + uVar14 * 0x10);
          puVar3[1] = puVar2[1];
          *puVar3 = uVar17;
          puVar2 = (undefined8 *)(param_1[1] + (long)plVar6 * 0x10);
          puVar2[1] = uVar16;
          *puVar2 = uVar15;
          uVar14 = uVar14 - 1;
        }
      }
    }
  }
  uVar5 = uVar14 == 7;
  lVar11 = 6;
  if (!(bool)uVar5) {
    lVar11 = uVar14 - (uVar14 >> 3);
  }
  func_0x00010b97ea90(lVar11);
  func_0x000107c39f7c(uStack_48);
  if ((bool)uVar5) {
    return plVar6;
  }
  ___stack_chk_fail();
  func_0x000107c3a08c(plVar6[4]);
  uStack_f0 = 0;
  if (*param_3 != 0) {
    do {
      func_0x000107c3a010();
      uStack_f0 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  uStack_e8 = 0xff00;
  func_0x000107c30fa8(auStack_d0,&uStack_f0);
  func_0x000107c3a05c();
  plVar12 = (long *)plVar6[4];
  func_0x000107c31004(plVar12,auStack_d0,param_4);
  plVar7 = plVar12;
  plStack_d8 = plVar12;
  FUN_10b976044();
  func_0x000107c39fb4(0);
  do {
    func_0x000107c3a07c();
    uVar4 = uVar5;
    for (uVar14 = extraout_x15; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      lVar11 = plVar6[0x2d];
      plVar8 = (long *)(extraout_x13 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) &
                       extraout_x9);
      if (*(long **)(lVar11 + (long)plVar8 * 0x10) == plVar12) goto LAB_10b975ce8;
      uVar4 = 0;
    }
    func_0x000107c3a0dc();
    uVar5 = 1;
  } while ((bool)uVar4);
  plVar8 = plVar6 + 0x2c;
  FUN_10b97605c(plVar8,plVar7);
  plVar1 = (long *)(plVar6[0x2d] + (long)plVar8 * 0x10);
  *plVar1 = (long)plVar12;
  plVar1[1] = 0;
  *(byte *)(plVar6[0x2c] + (long)plVar8) = (byte)plVar7 & 0x7f;
  func_0x000107c39f84();
  lVar11 = plVar6[0x2d];
LAB_10b975ce8:
  plVar7 = (long *)(lVar11 + (long)plVar8 * 0x10 + 8);
  if (plVar7 != param_5) {
    lVar11 = 0;
    if (*param_5 != 0) {
      do {
        func_0x00010b97e7d0();
        plVar7 = extraout_x8_01;
        lVar11 = extraout_x9_00;
      } while (extraout_w12 != 0);
    }
    *plVar7 = lVar11;
    func_0x00010b9762a0();
  }
  func_0x000107c30e8c(&uStack_f0,plVar6 + 0x32,param_2,&plStack_d8);
  if (iVar9 != 0) {
    FUN_10b99081c(&uStack_f0,auStack_d0);
    FUN_10b99081c(auStack_100,param_4);
    func_0x000107c3a108();
    func_0x000107c3a058();
    func_0x000107c3a064();
  }
  func_0x00010b97e958(auStack_d0);
  func_0x000107c3a0c0();
  return plVar12;
}



/* Entry: 10b975bbc; end: 10b975dd7;  */

long FUN_10b975bbc(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,long *param_5,
                  int param_6)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *plVar5;
  ulong extraout_x9;
  long extraout_x9_00;
  int extraout_w11;
  int extraout_w12;
  long extraout_x13;
  ulong extraout_x15;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined2 uStack_88;
  long lStack_78;
  undefined1 auStack_70 [32];
  
  func_0x000107c3a08c(*(undefined8 *)(param_1 + 0x20));
  uStack_90 = 0;
  if (*param_3 != 0) {
    do {
      func_0x000107c3a010();
      uStack_90 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_88 = 0xff00;
  func_0x000107c30fa8(auStack_70,&uStack_90);
  func_0x000107c3a05c();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c31004(lVar2,auStack_70,param_4);
  lVar3 = lVar2;
  lStack_78 = lVar2;
  FUN_10b976044();
  func_0x000107c39fb4(0);
  do {
    func_0x000107c3a07c();
    uVar1 = in_ZR;
    for (uVar6 = extraout_x15; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar4 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      lVar7 = *(long *)(param_1 + 0x168);
      uVar4 = extraout_x13 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & extraout_x9;
      if (*(long *)(lVar7 + uVar4 * 0x10) == lVar2) goto LAB_10b975ce8;
      uVar1 = 0;
    }
    func_0x000107c3a0dc();
    in_ZR = 1;
  } while ((bool)uVar1);
  uVar4 = param_1 + 0x160;
  FUN_10b97605c(uVar4,lVar3);
  plVar5 = (long *)(*(long *)(param_1 + 0x168) + uVar4 * 0x10);
  *plVar5 = lVar2;
  plVar5[1] = 0;
  *(byte *)(*(long *)(param_1 + 0x160) + uVar4) = (byte)lVar3 & 0x7f;
  func_0x000107c39f84();
  lVar7 = *(long *)(param_1 + 0x168);
LAB_10b975ce8:
  plVar5 = (long *)(lVar7 + uVar4 * 0x10 + 8);
  if (plVar5 != param_5) {
    lVar3 = 0;
    if (*param_5 != 0) {
      do {
        func_0x00010b97e7d0();
        plVar5 = extraout_x8_00;
        lVar3 = extraout_x9_00;
      } while (extraout_w12 != 0);
    }
    *plVar5 = lVar3;
    func_0x00010b9762a0();
  }
  func_0x000107c30e8c(&uStack_90,param_1 + 400,param_2,&lStack_78);
  if (param_6 != 0) {
    FUN_10b99081c(&uStack_90,auStack_70);
    FUN_10b99081c(auStack_a0,param_4);
    func_0x000107c3a108();
    func_0x000107c3a058();
    func_0x000107c3a064();
  }
  func_0x00010b97e958(auStack_70);
  func_0x000107c3a0c0();
  return lVar2;
}



/* Entry: 10b975dd8; end: 10b975e3f;  */

void FUN_10b975dd8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_28 [8];
  
  if (param_1[1] == param_1[2]) {
    FUN_10b975e40(auStack_28,param_1);
  }
  else {
    func_0x000108932d34(*param_1 + param_1[1] * 0x18,param_2,param_3);
    param_1[1] = param_1[1] + 1;
  }
  return;
}



/* Entry: 10b975e40; end: 10b975f77;  */

void FUN_10b975e40(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *unaff_x19;
  long *unaff_x20;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_78;
  long *plStack_70;
  
  func_0x000107c3a024();
  lVar4 = *param_2;
  func_0x000108932d74(param_2,1);
  plVar2 = unaff_x20;
  func_0x000108932a10();
  lVar1 = *unaff_x20;
  plVar3 = unaff_x20;
  func_0x000108932b00();
  func_0x000108932d34();
  plStack_70 = plVar3 + 3;
  func_0x00010b97ec88();
  func_0x000108932b00();
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  func_0x000108932bb0(&uStack_78);
  uStack_90 = 0;
  if (lVar1 != 0) {
    func_0x000108932190();
    func_0x000108932218();
  }
  *unaff_x20 = (long)plVar2;
  unaff_x20[1] = unaff_x20[1] + 1;
  unaff_x20[2] = (long)param_2;
  func_0x000108932bec(&uStack_90);
  *unaff_x19 = *unaff_x20 + (param_3 - lVar4);
  return;
}



/* Entry: 10b975f78; end: 10b975f7b;  */

void FUN_10b975f78(void)

{
  func_0x00010b97f200();
  return;
}



/* Entry: 10b975f7c; end: 10b975f8f;  */

void FUN_10b975f7c(void)

{
  FUN_10b976028();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b975f90; end: 10b975fd3;  */

void FUN_10b975f90(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bf979a0(uVar1,param_3,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b982c24(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b975fd4; end: 10b976027;  */

void FUN_10b975fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_28 [8];
  
  FUN_10b982b30(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c30f2c(auStack_28);
  FUN_10b9a8e18(param_1,auStack_28);
  func_0x000107c3a01c();
  func_0x000107c39ffc();
  return;
}



/* Entry: 10b976028; end: 10b976043;  */

void FUN_10b976028(void)

{
  func_0x00010b97f200();
  return;
}



/* Entry: 10b976044; end: 10b97605b;  */

void FUN_10b976044(void)

{
  func_0x000107c39fe4();
  return;
}



/* Entry: 10b97605c; end: 10b9760cb;  */

void FUN_10b97605c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  func_0x000107c39f94();
  FUN_10b9760cc();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) goto LAB_10b976088;
  func_0x000107c3a0cc();
  if ((bool)in_ZR) {
    lVar1 = 0;
    goto LAB_10b976088;
  }
  if (unaff_x22 == 0) {
    func_0x000107c3a0d4();
LAB_10b9760ac:
    FUN_10b9760f4();
  }
  else {
    func_0x000107c3a03c();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x000107c3a048();
      goto LAB_10b9760ac;
    }
    func_0x00010b976170();
  }
  func_0x000107c39ff0();
  FUN_10b9760cc();
  lVar1 = *(long *)(unaff_x19 + 0x28);
LAB_10b976088:
  func_0x000107c39f8c(lVar1);
  return;
}



/* Entry: 10b9760cc; end: 10b9760f3;  */

ulong FUN_10b9760cc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  
  lVar2 = 0;
  while (func_0x000107c3a110(lVar2), (bool)in_ZR) {
    lVar2 = extraout_x8 + 8;
    in_ZR = 1;
  }
  uVar1 = (extraout_x10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (extraout_x10 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return extraout_x9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b9760f4; end: 10b97626b;  */

/* WARNING: Removing unreachable block (ram,0x0001003ad788) */

void FUN_10b9760f4(void)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  char *unaff_x19;
  long unaff_x21;
  long unaff_x24;
  
  func_0x000107c3a124();
  func_0x000107c39fa0();
  func_0x000107c39fc0();
  func_0x000107c39fd0();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x000107c39fec(uVar1);
  while (unaff_x24 != 0) {
    if (-1 < *unaff_x19) {
      lVar2 = unaff_x21;
      FUN_10b97626c();
      func_0x000107c39fcc();
      FUN_10b9760cc();
      func_0x000107c39f80();
      FUN_10b976288(extraout_x8_00 + lVar2 * 0x10);
    }
    func_0x000107c3a114();
  }
  return;
}



/* Entry: 10b97626c; end: 10b976287;  */

void FUN_10b97626c(undefined8 *param_1)

{
  func_0x000107c3a040(param_1,*param_1);
  return;
}



/* Entry: 10b976288; end: 10b9762c7;  */

void FUN_10b976288(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2 + 1;
  uVar2 = *puVar1;
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *puVar1 = 0;
  func_0x000107c3a0a4(puVar1);
  func_0x00010b9762a0();
  return;
}



/* Entry: 10b9762c8; end: 10b9762e7;  */

void FUN_10b9762c8(void)

{
  func_0x000107c3a0a4();
  func_0x00010b9762a0();
  return;
}



/* Entry: 10b9762e8; end: 10b976313;  */

void FUN_10b9762e8(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c3a128();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b97e704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b976314; end: 10b976327;  */

void FUN_10b976314(void)

{
  FUN_10b976408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b976328; end: 10b97639b;  */

void FUN_10b976328(ulong *param_1,long param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = *(ulong *)(param_2 + 0x10);
  func_0x00010bf979a0(uVar1,param_3,param_3);
  if (param_4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b982c24(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  *param_1 = uVar1 & 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 5;
  if (((char)param_1[1] == '\x02') && (*param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRetain_11034a770)();
    return;
  }
  return;
}



/* Entry: 10b97639c; end: 10b976407;  */

void FUN_10b97639c(undefined4 *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  if (param_4 == 0) {
    FUN_10b982ab4();
  }
  else {
    FUN_10b982b30();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010b97edc0();
  }
  *(undefined2 *)(param_1 + 2) = 4;
  *param_1 = param_3;
  return;
}



/* Entry: 10b976408; end: 10b976423;  */

void FUN_10b976408(void)

{
  func_0x00010b97f200();
  return;
}



/* Entry: 10b976424; end: 10b97644b;  */

void FUN_10b976424(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c3a128();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b97e704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b97644c; end: 10b976547;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b97644c(long *param_1,undefined ********param_2,undefined ********param_3,
                  undefined ********param_4,undefined ********param_5)

{
  uint uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined1 in_ZR;
  undefined1 in_CY;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  long *plVar9;
  long *plVar10;
  undefined ********ppppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined ********ppppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined ******ppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined ********ppppppppuVar18;
  undefined1 uVar19;
  byte extraout_w8;
  byte bVar20;
  uint uVar21;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 extraout_x8_07;
  undefined *******extraout_x8_08;
  undefined8 *extraout_x8_09;
  undefined8 *extraout_x8_10;
  undefined8 *extraout_x8_11;
  undefined8 *extraout_x8_12;
  undefined8 *extraout_x8_13;
  undefined8 *extraout_x8_14;
  undefined8 *extraout_x8_15;
  undefined8 *extraout_x8_16;
  undefined8 *extraout_x8_17;
  undefined8 *extraout_x8_18;
  undefined8 *extraout_x8_19;
  undefined8 *extraout_x8_20;
  undefined8 *extraout_x8_21;
  undefined8 *extraout_x8_22;
  undefined *******extraout_x8_23;
  undefined8 *extraout_x8_24;
  undefined8 *extraout_x8_25;
  undefined8 *extraout_x8_26;
  undefined8 *extraout_x8_27;
  undefined8 *extraout_x8_28;
  undefined8 *extraout_x8_29;
  undefined ********extraout_x8_30;
  undefined ********extraout_x8_31;
  undefined ********extraout_x8_32;
  undefined *******extraout_x8_33;
  undefined ********extraout_x8_34;
  undefined *******extraout_x8_35;
  undefined *******extraout_x8_36;
  undefined *******extraout_x8_37;
  undefined8 *extraout_x8_38;
  undefined *******extraout_x8_39;
  undefined *******extraout_x8_40;
  undefined *******extraout_x8_41;
  undefined *******extraout_x8_42;
  ulong uVar22;
  ulong extraout_x8_43;
  undefined *******pppppppuVar23;
  undefined *******extraout_x8_44;
  uint extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w9_04;
  undefined8 extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  undefined8 extraout_x9_02;
  undefined8 extraout_x9_03;
  undefined *******extraout_x9_04;
  undefined8 extraout_x9_05;
  undefined *******extraout_x9_06;
  undefined *******extraout_x9_07;
  undefined8 extraout_x9_08;
  undefined *******extraout_x9_09;
  undefined8 extraout_x9_10;
  undefined8 extraout_x9_11;
  undefined *******extraout_x9_12;
  undefined8 extraout_x9_13;
  undefined8 extraout_x9_14;
  undefined8 extraout_x9_15;
  undefined *******extraout_x9_16;
  undefined *******extraout_x9_17;
  undefined8 extraout_x9_18;
  undefined8 extraout_x9_19;
  undefined8 extraout_x9_20;
  undefined8 extraout_x9_21;
  undefined *******extraout_x9_22;
  undefined8 extraout_x9_23;
  undefined ********extraout_x9_24;
  undefined8 extraout_x9_25;
  undefined8 extraout_x9_26;
  undefined8 extraout_x9_27;
  undefined8 extraout_x9_28;
  undefined8 extraout_x9_29;
  undefined8 extraout_x9_30;
  undefined *******extraout_x9_31;
  undefined8 extraout_x9_32;
  undefined ******extraout_x9_33;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  undefined ********extraout_x10;
  undefined8 *******pppppppuVar24;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  int extraout_w11_09;
  int extraout_w11_10;
  int extraout_w11_11;
  int extraout_w11_12;
  int extraout_w11_13;
  int extraout_w11_14;
  int extraout_w11_15;
  int extraout_w11_16;
  int extraout_w11_17;
  int extraout_w11_18;
  int extraout_w11_19;
  int extraout_w11_20;
  int extraout_w11_21;
  int extraout_w11_22;
  int extraout_w11_23;
  int extraout_w11_24;
  int extraout_w11_25;
  int extraout_w11_26;
  undefined ********extraout_x11;
  undefined ********extraout_x11_00;
  undefined ********extraout_x11_01;
  undefined ********extraout_x11_02;
  undefined ********ppppppppuVar25;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  int extraout_w12_03;
  int extraout_w12_04;
  int extraout_w12_05;
  int extraout_w12_06;
  int extraout_w12_07;
  int extraout_w12_08;
  int extraout_w12_09;
  undefined ********ppppppppuVar26;
  long lVar27;
  long *unaff_x20;
  undefined *******pppppppuVar28;
  ulong uVar29;
  undefined *puVar30;
  byte unaff_w21;
  undefined ********unaff_x22;
  undefined ********unaff_x23;
  undefined ********ppppppppuVar31;
  undefined8 *******pppppppuVar32;
  undefined **ppuVar33;
  undefined **ppuVar34;
  undefined ********ppppppppuVar35;
  undefined ********ppppppppuVar36;
  ulong uVar37;
  undefined8 *******pppppppuVar38;
  undefined ********unaff_x26;
  undefined8 unaff_x27;
  undefined *******pppppppuVar39;
  undefined ********ppppppppuVar40;
  undefined8 *******pppppppuVar41;
  undefined8 unaff_x28;
  ulong uVar42;
  undefined *******pppppppuVar43;
  undefined *******pppppppuStack_570;
  undefined1 auStack_568 [16];
  char acStack_558 [24];
  undefined8 *******pppppppuStack_540;
  undefined ********ppppppppuStack_538;
  undefined8 uStack_530;
  undefined8 *******pppppppuStack_528;
  undefined8 *******pppppppuStack_520;
  undefined8 *******pppppppuStack_518;
  undefined8 *******pppppppuStack_510;
  undefined ********ppppppppuStack_508;
  undefined8 *******pppppppuStack_500;
  undefined8 *******pppppppuStack_4f8;
  undefined8 *******pppppppuStack_4f0;
  undefined8 *******pppppppuStack_4e8;
  undefined ********ppppppppuStack_4e0;
  undefined ********ppppppppuStack_4d0;
  undefined ********ppppppppuStack_4c8;
  undefined ********ppppppppuStack_4c0;
  undefined ********ppppppppuStack_4b8;
  undefined ********ppppppppuStack_4b0;
  undefined ********ppppppppuStack_4a8;
  undefined ********ppppppppuStack_4a0;
  undefined ********ppppppppuStack_498;
  undefined ********ppppppppuStack_490;
  undefined ********ppppppppuStack_488;
  undefined1 ****ppppuStack_480;
  code *pcStack_478;
  undefined ********ppppppppuStack_470;
  undefined ********ppppppppuStack_468;
  uint uStack_45c;
  undefined ********ppppppppuStack_458;
  undefined ********ppppppppuStack_450;
  undefined ********ppppppppuStack_448;
  undefined ********ppppppppuStack_440;
  char cStack_431;
  undefined *******pppppppuStack_430;
  undefined ********appppppppuStack_428 [3];
  undefined ********ppppppppuStack_410;
  undefined ********ppppppppuStack_408;
  byte bStack_3f9;
  undefined ********ppppppppuStack_3f0;
  undefined *apuStack_3e8 [3];
  undefined1 auStack_3d0 [24];
  undefined *******pppppppuStack_3b8;
  undefined8 uStack_3b0;
  undefined ********appppppppuStack_3a0 [3];
  undefined *******pppppppuStack_388;
  undefined ********ppppppppuStack_380;
  undefined8 uStack_378;
  undefined ********ppppppppuStack_370;
  undefined ********ppppppppuStack_368;
  undefined *******pppppppuStack_348;
  byte bStack_340;
  byte bStack_33f;
  undefined1 auStack_338 [8];
  undefined ********ppppppppuStack_330;
  undefined ********ppppppppuStack_328;
  byte bStack_319;
  undefined ********ppppppppuStack_318;
  undefined8 uStack_310;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined ********ppppppppuStack_2f0;
  undefined ********ppppppppuStack_2e8;
  undefined ********ppppppppuStack_2e0;
  undefined ********ppppppppuStack_2d8;
  undefined ********ppppppppuStack_2d0;
  undefined ********ppppppppuStack_2c8;
  undefined ********ppppppppuStack_2c0;
  undefined ********ppppppppuStack_2b8;
  undefined1 ***pppuStack_2b0;
  code *pcStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined *******apppppppuStack_290 [3];
  undefined *******apppppppuStack_278 [2];
  undefined *******apppppppuStack_268 [3];
  undefined *******apppppppuStack_250 [2];
  undefined *******pppppppuStack_240;
  long lStack_238;
  undefined ******appppppuStack_230 [3];
  undefined1 auStack_218 [24];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  char cStack_1e9;
  undefined *******pppppppuStack_1e8;
  undefined *******pppppppuStack_1e0;
  undefined1 uStack_1d8;
  undefined *******pppppppuStack_1d0;
  undefined ********ppppppppuStack_1c8;
  undefined *******pppppppuStack_1b8;
  undefined *******apppppppuStack_1b0 [2];
  undefined8 uStack_1a0;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long lStack_128;
  undefined8 auStack_120 [3];
  undefined *******apppppppuStack_108 [3];
  undefined *******apppppppuStack_f0 [2];
  byte bStack_e0;
  undefined *******pppppppuStack_d8;
  byte bStack_d0;
  undefined1 uStack_c8;
  undefined1 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  long alStack_68 [2];
  undefined8 uStack_58;
  
  plVar9 = param_1;
  func_0x000107c39f90();
  func_0x00010b97e944();
  ppuVar33 = (undefined **)0x0;
  ppppppppuVar35 = (undefined ********)0x80;
  while (func_0x00010b97f2e4(), !(bool)in_ZR) {
    func_0x00010b97ec58();
    plVar10 = plVar9;
    if ((bool)in_ZR) {
      func_0x00010b97ee00();
      func_0x000107c30ea8();
      func_0x00010b97e83c();
      func_0x000107c30ea0();
      func_0x00010b97e820();
      if ((bool)in_CY && !(bool)in_ZR) {
        *(byte *)((long)unaff_x22 + (long)plVar9) = unaff_w21 & 0x7f;
        func_0x00010b97e688();
        param_2 = (undefined ********)(extraout_x8 + (long)ppuVar33 * 0x10);
        in_CY = 0x7f < extraout_w9;
        in_ZR = extraout_w9 == 0x80;
        unaff_x20 = plVar9;
        if ((bool)in_ZR) {
          plVar10 = (long *)(extraout_x8 + (long)plVar9 * 0x10);
          func_0x000107c30eac();
          *(undefined1 *)(*param_1 + (long)ppuVar33) = 0x80;
          func_0x00010b97e798();
          *(undefined1 *)(extraout_x8_00 + 1) = 0x80;
        }
        else {
          plVar10 = alStack_68;
          func_0x000107c30eac();
          func_0x00010b97ee00();
          param_2 = (undefined ********)(extraout_x8_01 + (long)plVar9 * 0x10);
          func_0x000107c30eac();
          func_0x00010b97ebbc();
          func_0x000107c30eac();
          ppuVar33 = (undefined **)((long)ppuVar33 + -1);
        }
      }
      else {
        *(byte *)((long)unaff_x22 + (long)ppuVar33) = unaff_w21 & 0x7f;
        func_0x000107c39f84();
        plVar10 = plVar9;
      }
    }
    ppuVar33 = (undefined **)((long)ppuVar33 + 1);
    plVar9 = plVar10;
  }
  func_0x00010b97ec30();
  uVar2 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar2 = extraout_x8_02;
  }
  func_0x00010b97ea90(uVar2);
  func_0x000107c39f7c(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_10b976548;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x000107c3a024();
  func_0x000107c39f9c();
  uStack_a8 = extraout_x8_03;
  func_0x000107c30e64();
  func_0x000107c3a120();
  if ((bool)in_ZR) {
    lVar27 = 1;
    if (*(long *)(lStack_b0 + 0x28) != 0) {
LAB_10b976640:
      *param_1 = lVar27;
      param_1[1] = lStack_b0;
      lStack_b8 = 0;
      goto LAB_10b976648;
    }
    bStack_d0 = 1;
    pppppppuStack_d8 = (undefined *******)&PTR_FUN_110d7e6e0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    param_2 = *(undefined *********)(lStack_b0 + 0x20);
    FUN_10b994080(apppppppuStack_108);
    if ((bStack_e0 & 1) != 0) {
      param_2 = (undefined ********)(unaff_x20 + 5);
      param_3 = apppppppuStack_108;
      param_4 = apppppppuStack_f0;
      param_5 = &pppppppuStack_d8;
      FUN_10b9766a0(auStack_120);
      lVar27 = lStack_b0;
      bVar20 = bStack_d0;
      if ((bStack_d0 & 1) == 0) {
        func_0x00010b97f280();
        *param_1 = 2;
        param_1[1] = lStack_128;
        lStack_128 = 0;
        func_0x00010b97ea88();
      }
      else {
        *(undefined8 *)(lStack_b0 + 0x28) = auStack_120[0];
        func_0x000107c3a0ec(&lStack_128);
        *(long *)(lVar27 + 0x30) = lStack_128;
        func_0x000107c2792c();
      }
      func_0x00010b97ee5c();
      func_0x000108931eac();
      func_0x00010b97ee8c();
      lVar27 = lStack_b8;
      if (bVar20 == 0) goto LAB_10b976648;
      goto LAB_10b976640;
    }
  }
  else {
    func_0x00010b97f2f0();
LAB_10b976648:
    func_0x00010b97ec68();
    func_0x000107c39f7c(uStack_a8);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001080da3e4();
  func_0x00010b97ee5c();
  ppppppppuVar40 = apppppppuStack_108;
  func_0x000108931eac();
  func_0x00010b97ee8c();
  func_0x00010b97ec68();
  func_0x00010b97e910();
  pcStack_138 = FUN_10b9766a0;
  ppppppppuVar12 = param_2;
  ppppppppuVar25 = param_5;
  ppuStack_140 = &puStack_80;
  func_0x000107c39f9c();
  ppppppppuVar26 = apppppppuStack_290;
  uStack_1a0 = extraout_x8_04;
  FUN_10b976a10();
  uVar8 = *(char *)(param_5 + 1) == '\x01';
  if (((bool)uVar8) && (param_2[0x16] != (undefined *******)0x0)) {
    unaff_x22 = apppppppuStack_250;
    unaff_x23 = apppppppuStack_1b0;
    unaff_x26 = apppppppuStack_278;
    unaff_x27 = 0x49;
    unaff_x28 = 0x38;
    lStack_298 = -1;
    lStack_2a0 = 1;
    ppuVar33 = (undefined **)0x1;
    do {
      if (param_2[0x16] == (undefined *******)0x0) break;
      func_0x00010b97f000();
      FUN_10b97ddf4(apppppppuStack_268,extraout_x8_05 + extraout_x9_00 * 0x38);
      func_0x00010b97f000();
      FUN_10b97df34(extraout_x8_06 + extraout_x9_01 * 0x38);
      pppppppuVar43 = (undefined *******)((long)param_2[0x15] + lStack_2a0);
      param_2[0x16] = (undefined *******)((long)param_2[0x16] + lStack_298);
      param_2[0x15] = pppppppuVar43;
      uVar8 = pppppppuVar43 == (undefined *******)0x92;
      if ((undefined *******)0x91 < pppppppuVar43) {
        __ZdlPv(*param_2[0x12]);
        param_2[0x12] = param_2[0x12] + 1;
        param_2[0x15] = (undefined *******)((long)param_2[0x15] + -0x49);
      }
      ppppppppuVar12 = unaff_x22;
      if ((*param_2 == (undefined *******)0x0) && (pppppppuStack_240 != (undefined *******)0x0)) {
        FUN_10b978c70(param_2 + 2,apppppppuStack_268);
        func_0x000107c3a098(param_2[2]);
        if (!(bool)uVar8) goto LAB_10b9767ac;
        pppppppuStack_1e0 = pppppppuStack_240 + 3;
        uStack_1d8 = 1;
        __ZNSt3__115recursive_mutex4lockEv();
        pppppppuStack_1e8 = pppppppuStack_240;
        cStack_1e9 = '\0';
        ppppppppuVar11 = &pppppppuStack_1e8;
        param_4 = (undefined ********)&cStack_1e9;
        param_3 = (undefined ********)0x1;
        ppppppppuVar26 = unaff_x22;
        FUN_10b994bf0(&pppppppuStack_1b8);
        uVar8 = pppppppuStack_1b8 == (undefined *******)0x1;
        if ((bool)uVar8) {
          uVar8 = cStack_1e9 == '\x01';
          ppppppppuVar12 = unaff_x23;
          ppppppppuVar11 = ppppppppuVar35;
          if ((bool)uVar8) {
            param_3 = unaff_x23;
            FUN_10b994158(pppppppuStack_240,apppppppuStack_268);
          }
        }
        else {
          func_0x000107c31084();
          func_0x00010b98fa8c(appppppuStack_230,apppppppuStack_268);
          pppppppuVar43 = appppppuStack_230;
          func_0x000107c27e5c();
          pppppppuStack_1d0 = pppppppuVar43;
          ppppppppuStack_1c8 = ppppppppuVar26;
          func_0x000107c2793c(&UNK_10f7cd364);
          param_4 = &pppppppuStack_1d0;
          func_0x00010b97e9e4(auStack_218);
          func_0x000107c31080(&uStack_200,ppppppppuVar11,auStack_218);
          FUN_10b99fa14(&uStack_1f8,unaff_x23,&uStack_200);
          FUN_10b99ff08(param_5,&uStack_1f8);
          func_0x000104bda960(uStack_1f8);
          func_0x000107c278f8(uStack_200);
          func_0x00010b97edb8();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appppppuStack_230);
        }
        func_0x000107c30f3c(apppppppuStack_278);
        func_0x000107c2a668(&pppppppuStack_1b8);
        ppppppppuVar26 = &pppppppuStack_1e0;
        func_0x000107c2851c();
      }
      else {
LAB_10b9767ac:
        ppppppppuVar26 = apppppppuStack_278;
        func_0x000107c30f3c();
        ppppppppuVar11 = ppppppppuVar35;
      }
      if (((ulong)param_5[1] & 1) == 0) {
        func_0x00010b97f0f0();
        func_0x00010b97f0e8();
        func_0x00010b97f22c();
        ppppppppuVar35 = ppppppppuVar11;
        break;
      }
      param_3 = apppppppuStack_268;
      param_4 = apppppppuStack_278;
      ppppppppuVar12 = param_2;
      ppppppppuVar25 = param_5;
      FUN_10b976a10(&pppppppuStack_1b8);
      bVar20 = *(byte *)(param_5 + 1);
      ppppppppuVar35 = (undefined ********)(ulong)bVar20;
      if ((bVar20 & 1) == 0) {
        func_0x00010b97f0f0();
      }
      else {
        *(undefined ********)(lStack_238 + 0x18) = pppppppuStack_1b8;
      }
      ppppppppuVar26 = &pppppppuStack_1b8;
      func_0x00010b97df98();
      func_0x00010b97f0e8();
      func_0x00010b97f22c();
    } while ((bVar20 & 1) != 0);
    if (((ulong)param_5[1] & 1) != 0) goto LAB_10b97692c;
    *ppppppppuVar40 = (undefined *******)0x0;
    ppppppppuVar40[1] = (undefined *******)0x0;
    ppppppppuVar40[2] = (undefined *******)0x0;
  }
  else {
LAB_10b97692c:
    ppppppppuVar12 = apppppppuStack_290;
    func_0x00010b97df6c();
    ppppppppuVar26 = ppppppppuVar40;
  }
  func_0x00010b97ee5c();
  func_0x000107c39f7c(uStack_1a0);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  ppppppppuVar40 = ppppppppuVar26;
  func_0x00010b97f0e8();
  func_0x00010b97f22c();
  func_0x00010b97ee5c();
  func_0x00010b97e910();
  pcStack_2a8 = FUN_10b976a10;
  ppppppppuVar11 = param_4;
  uStack_300 = unaff_x28;
  uStack_2f8 = unaff_x27;
  ppppppppuStack_2f0 = unaff_x26;
  ppppppppuStack_2e8 = ppppppppuVar35;
  ppppppppuStack_2e0 = (undefined ********)ppuVar33;
  ppppppppuStack_2d8 = unaff_x23;
  ppppppppuStack_2d0 = unaff_x22;
  ppppppppuStack_2c8 = param_2;
  ppppppppuStack_2c0 = param_5;
  ppppppppuStack_2b8 = ppppppppuVar26;
  pppuStack_2b0 = &ppuStack_140;
  func_0x000107c39f9c();
  uVar8 = *(char *)ppppppppuVar11 == '\x11';
  uStack_310 = extraout_x8_07;
  if ((bool)uVar8) {
    func_0x00010b990764(param_4);
    uVar19 = SUB81(ppppppppuVar11,0);
    func_0x00010b97f0b4(*(undefined1 *)((long)param_4 + 1),&ppppppppuStack_380);
    param_2 = ppppppppuStack_380;
    ppppppppuVar14 = ppppppppuStack_380;
    ppppppppuVar18 = param_4;
    FUN_10b9794f0(ppppppppuVar40);
    ppppppppuVar11 = param_2;
    FUN_10b972f3c();
    ppppppppuVar25 = unaff_x22;
    param_3 = ppppppppuVar35;
    goto LAB_10b978254;
  }
  ppppppppuVar14 = param_3;
  ppppppppuVar18 = param_3;
  FUN_10b978c70(ppppppppuVar12 + 2);
  func_0x000107c3a098(ppppppppuVar12[2]);
  uVar19 = SUB81(ppppppppuVar11,0);
  if (!(bool)uVar8) {
    pppppppuVar43 = (undefined *******)0x0;
    if (ppppppppuVar14[3] != (undefined *******)0x0) {
      do {
        func_0x000107c39f98();
        uVar19 = SUB81(ppppppppuVar11,0);
        pppppppuVar43 = extraout_x8_08;
      } while (extraout_w11 != 0);
    }
    ppppppppuVar11 = ppppppppuVar40 + 1;
    *ppppppppuVar40 = pppppppuVar43;
    ppppppppuVar14 = ppppppppuVar14 + 4;
    func_0x000107c30f3c();
    goto LAB_10b978254;
  }
  cStack_431 = '\0';
  ppppppppuVar35 = (undefined ********)&cStack_431;
  ppppppppuVar18 = (undefined ********)0x1;
  ppppppppuVar11 = ppppppppuVar12;
  ppppppppuVar14 = param_4;
  FUN_10b994bf0(&pppppppuStack_348);
  uVar19 = SUB81(ppppppppuVar35,0);
  uVar8 = pppppppuStack_348 == (undefined *******)0x1;
  if (!(bool)uVar8) {
    func_0x000107c31084();
    ppppppppuVar35 = param_3;
    func_0x00010b98fa8c(&ppppppppuStack_3f0);
    func_0x00010b97ed14();
    ppppppppuStack_330 = ppppppppuVar35;
    ppppppppuStack_328 = ppppppppuVar14;
    func_0x000107c2793c(&UNK_10f7ccd74);
    func_0x00010b97e888();
    ppppppppuVar26 = &pppppppuStack_348;
    func_0x000107c31080(&ppppppppuStack_410,ppppppppuVar11,&ppppppppuStack_380);
    FUN_10b99fa14(appppppppuStack_3a0,&bStack_340,&ppppppppuStack_410);
    ppppppppuVar14 = (undefined ********)appppppppuStack_3a0;
    func_0x00010b97f23c();
    func_0x00010b97ef50();
    func_0x000107c278f8(ppppppppuStack_410);
    func_0x00010b97ea80();
    func_0x000107c3a014();
    *ppppppppuVar40 = (undefined *******)0x0;
    ppppppppuVar40[1] = (undefined *******)0x0;
    ppppppppuVar40[2] = (undefined *******)0x0;
    goto LAB_10b97824c;
  }
  if ((cStack_431 == '\x01') &&
     (ppppppppuVar11 = (undefined ********)*ppppppppuVar12,
     ppppppppuVar11 != (undefined ********)0x0)) {
    ppppppppuVar18 = (undefined ********)&bStack_340;
    ppppppppuVar14 = param_3;
    FUN_10b994158();
  }
  uVar8 = bStack_340 == 0x11;
  if ((bool)uVar8) {
    ppppppppuVar18 = (undefined ********)&bStack_340;
    func_0x00010b990764();
    func_0x00010b97f0b4(bStack_33f,&ppppppppuStack_440);
    goto LAB_10b9780d0;
  }
  uVar8 = bStack_340 == 1;
  if ((bool)uVar8) {
    ppppppppuVar26 = (undefined ********)ppppppppuVar12[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppppuVar26 != (undefined ********)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_00 != 0);
    }
    ppppppppuVar11[2] = (undefined *******)ppppppppuVar26;
    *ppppppppuVar11 = (undefined *******)&PTR_FUN_110d7bdb8;
    do {
      func_0x000107c39fa4();
      ppppppppuStack_440 = ppppppppuVar11;
    } while (extraout_w10 != 0);
    do {
      func_0x000107c3a128();
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_09,0x10);
      if (bVar3) {
        *extraout_x8_09 = extraout_x9_02;
        cVar7 = ExclusiveMonitorsStatus();
      }
      ppuVar34 = ppuVar33;
    } while (cVar7 != '\0');
    goto code_r0x00010b976b7c;
  }
  if ((bStack_33f & 1) != 0) {
    FUN_10b9907d0(&ppppppppuStack_330,param_3);
    ppppppppuVar14 = (undefined ********)&ppppppppuStack_330;
    func_0x000107c31030(&ppppppppuStack_3f0);
    FUN_10b9907d0(appppppppuStack_3a0,&bStack_340);
    param_2 = (undefined ********)&ppppppppuStack_3f0;
    ppppppppuVar26 = (undefined ********)appppppppuStack_3a0;
    ppppppppuVar11 = (undefined ********)&ppppppppuStack_380;
    ppppppppuVar18 = (undefined ********)&ppppppppuStack_3f0;
    ppppppppuVar35 = (undefined ********)appppppppuStack_3a0;
    func_0x00010b97e768();
    func_0x000107c3a064();
    func_0x000107c3a044();
    func_0x00010b97e958(&ppppppppuStack_330);
    if (((ulong)ppppppppuVar25[1] & 1) == 0) {
      ppppppppuStack_440 = (undefined ********)0x0;
    }
    else {
      ppppppppuVar26 = (undefined ********)ppppppppuVar12[1];
      func_0x00010b97ed54();
      func_0x00010b97e654();
      if (ppppppppuVar26 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_02 != 0);
      }
      ppppppppuVar11[2] = (undefined *******)ppppppppuVar26;
      *ppppppppuVar11 = (undefined *******)&PTR_DAT_110d7be20;
      pppppppuVar43 = (undefined *******)0x0;
      if (ppppppppuStack_380 != (undefined ********)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppppuVar43 = extraout_x9_04;
        } while (extraout_w12 != 0);
      }
      ppppppppuVar11[3] = pppppppuVar43;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_440 = ppppppppuVar11;
      } while (extraout_w10_01 != 0);
      do {
        func_0x000107c3a128();
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_11,0x10);
        if (bVar3) {
          *extraout_x8_11 = extraout_x9_05;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((bool)uVar8) {
        func_0x00010b97e808();
      }
    }
    func_0x00010b97edb0();
    goto LAB_10b9780d0;
  }
  uVar21 = (uint)bStack_340;
  cVar6 = SBORROW4(uVar21,0x16);
  cVar7 = (int)(uVar21 - 0x16) < 0;
  uVar8 = uVar21 == 0x16;
  ppppppppuVar31 = (undefined ********)&UNK_1003ab990;
  param_4 = (undefined ********)&UNK_1003ab990;
  ppuVar33 = &PTR_DAT_110d7c230;
  ppuVar34 = &PTR_DAT_110d7c230;
  switch(bStack_340) {
  case 0:
    ppppppppuVar26 = (undefined ********)ppppppppuVar12[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppppuVar26 != (undefined ********)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_01 != 0);
    }
    ppppppppuVar11[2] = (undefined *******)ppppppppuVar26;
    *ppppppppuVar11 = (undefined *******)&PTR_DAT_110d7c1c8;
    do {
      func_0x000107c39fa4();
      ppppppppuStack_440 = ppppppppuVar11;
    } while (extraout_w10_00 != 0);
    do {
      func_0x000107c3a128();
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_10,0x10);
      if (bVar3) {
        *extraout_x8_10 = extraout_x9_03;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    break;
  default:
    func_0x000107c31084();
    ppppppppuVar31 = ppppppppuVar11;
    func_0x00010b97f16c();
    func_0x00010b97ed14();
    ppppppppuStack_330 = ppppppppuVar31;
    ppppppppuStack_328 = ppppppppuVar14;
    func_0x000107c2793c(&UNK_10f7ccdcd);
    func_0x00010b97e888();
    func_0x000107c3a0f0(&ppppppppuStack_330);
    FUN_10b99f560(appppppppuStack_3a0,&ppppppppuStack_330);
    ppppppppuVar14 = (undefined ********)appppppppuStack_3a0;
    func_0x00010b97f23c();
    func_0x00010b97ef50();
    func_0x00010b97f20c();
    func_0x00010b97ea80();
    func_0x000107c3a014();
    ppppppppuStack_440 = (undefined ********)0x0;
    param_4 = ppppppppuVar11;
    goto LAB_10b9780d0;
  case 2:
    param_4 = (undefined ********)ppppppppuVar12[1];
    if ((bStack_33f >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_07 != 0);
      }
      ppppppppuVar11[2] = (undefined *******)param_4;
      *ppppppppuVar11 = (undefined *******)&PTR_FUN_110d7bfc0;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_440 = ppppppppuVar11;
      } while (extraout_w10_06 != 0);
      do {
        func_0x000107c3a128();
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_16,0x10);
        if (bVar3) {
          *extraout_x8_16 = extraout_x9_14;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_17 != 0);
      }
      ppppppppuVar11[2] = (undefined *******)param_4;
      *ppppppppuVar11 = (undefined *******)&PTR_DAT_110d7bf58;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_440 = ppppppppuVar11;
      } while (extraout_w10_19 != 0);
      do {
        func_0x000107c3a128();
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_27,0x10);
        if (bVar3) {
          *extraout_x8_27 = extraout_x9_28;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    break;
  case 3:
    param_4 = (undefined ********)ppppppppuVar12[1];
    if ((bStack_33f >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_11 != 0);
      }
      ppppppppuVar11[2] = (undefined *******)param_4;
      *ppppppppuVar11 = (undefined *******)&PTR_FUN_110d7c090;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_440 = ppppppppuVar11;
      } while (extraout_w10_10 != 0);
      do {
        func_0x000107c3a128();
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_20,0x10);
        if (bVar3) {
          *extraout_x8_20 = extraout_x9_20;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_19 != 0);
      }
      ppppppppuVar11[2] = (undefined *******)param_4;
      *ppppppppuVar11 = (undefined *******)&PTR_DAT_110d7c028;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_440 = ppppppppuVar11;
      } while (extraout_w10_21 != 0);
      do {
        func_0x000107c3a128();
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_29,0x10);
        if (bVar3) {
          *extraout_x8_29 = extraout_x9_30;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    break;
  case 4:
    param_4 = (undefined ********)ppppppppuVar12[1];
    if ((bStack_33f >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_10 != 0);
      }
      ppppppppuVar11[2] = (undefined *******)param_4;
      *ppppppppuVar11 = (undefined *******)&PTR_FUN_110d7c160;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_440 = ppppppppuVar11;
      } while (extraout_w10_09 != 0);
      do {
        func_0x000107c3a128();
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_19,0x10);
        if (bVar3) {
          *extraout_x8_19 = extraout_x9_19;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_18 != 0);
      }
      ppppppppuVar11[2] = (undefined *******)param_4;
      *ppppppppuVar11 = (undefined *******)&PTR_DAT_110d7c0f8;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_440 = ppppppppuVar11;
      } while (extraout_w10_20 != 0);
      do {
        func_0x000107c3a128();
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_28,0x10);
        if (bVar3) {
          *extraout_x8_28 = extraout_x9_29;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    break;
  case 5:
    param_4 = (undefined ********)ppppppppuVar12[1];
    if ((bStack_33f >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_05 != 0);
      }
      ppppppppuVar11[2] = (undefined *******)param_4;
      *ppppppppuVar11 = (undefined *******)&PTR_FUN_110d7bef0;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_440 = ppppppppuVar11;
      } while (extraout_w10_04 != 0);
      do {
        func_0x000107c3a128();
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_14,0x10);
        if (bVar3) {
          *extraout_x8_14 = extraout_x9_11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_16 != 0);
      }
      ppppppppuVar11[2] = (undefined *******)param_4;
      *ppppppppuVar11 = (undefined *******)&PTR_FUN_110d7be88;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_440 = ppppppppuVar11;
      } while (extraout_w10_18 != 0);
      do {
        func_0x000107c3a128();
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_26,0x10);
        if (bVar3) {
          *extraout_x8_26 = extraout_x9_27;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    break;
  case 6:
    ppppppppuVar26 = (undefined ********)ppppppppuVar12[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppppuVar26 != (undefined ********)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_08 != 0);
    }
    ppppppppuVar11[2] = (undefined *******)ppppppppuVar26;
    *ppppppppuVar11 = (undefined *******)&PTR_DAT_110d7c230;
    do {
      func_0x000107c39fa4();
      ppppppppuStack_440 = ppppppppuVar11;
    } while (extraout_w10_07 != 0);
    do {
      func_0x000107c3a128();
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_17,0x10);
      if (bVar3) {
        *extraout_x8_17 = extraout_x9_15;
        cVar7 = ExclusiveMonitorsStatus();
      }
      ppuVar34 = ppuVar33;
    } while (cVar7 != '\0');
    break;
  case 7:
    ppppppppuVar26 = (undefined ********)ppppppppuVar12[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppppuVar26 != (undefined ********)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_12 != 0);
    }
    ppppppppuVar11[2] = (undefined *******)ppppppppuVar26;
    *ppppppppuVar11 = (undefined *******)&PTR_DAT_110d7c298;
    do {
      func_0x000107c39fa4();
      ppppppppuStack_440 = ppppppppuVar11;
    } while (extraout_w10_11 != 0);
    do {
      func_0x000107c3a128();
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_21,0x10);
      if (bVar3) {
        *extraout_x8_21 = extraout_x9_21;
        cVar7 = ExclusiveMonitorsStatus();
      }
      param_4 = ppppppppuVar31;
      ppuVar34 = ppuVar33;
    } while (cVar7 != '\0');
    break;
  case 0xb:
    func_0x000107c3a0ec(&ppppppppuStack_330);
    func_0x00010b97ef58();
    ppppppppuVar26 = ppppppppuStack_330;
    ppppppppuVar11 = appppppppuStack_3a0[0];
    if (((ulong)ppppppppuVar25[1] & 1) == 0) {
      ppppppppuStack_3f0 = ppppppppuStack_330 + 2;
      apuStack_3e8[0] = &UNK_1003ab990;
      func_0x000107c2793c(&UNK_10f7cd021);
      ppppppppuVar26 = (undefined ********)&ppppppppuStack_380;
      ppppppppuVar35 = (undefined ********)&ppppppppuStack_3f0;
      func_0x000107c3a054(&ppppppppuStack_380);
      func_0x00010b97ead0();
      ppppppppuVar18 = extraout_x11;
      if (cVar7 == cVar6) {
        ppppppppuVar18 = extraout_x8_30;
      }
      func_0x00010b97ec70();
      func_0x00010b97ea80();
      ppppppppuStack_440 = (undefined ********)0x0;
      param_4 = ppppppppuVar31;
    }
    else {
      uStack_45c = (uint)*(byte *)(ppppppppuStack_330 + 3);
      appppppppuStack_3a0[0] = (undefined ********)0x0;
      pppppppuVar43 = ppppppppuVar12[1];
      ppppppppuVar18 = (undefined ********)((long)ppppppppuStack_330[4] * 8 + 0x28);
      __Znwm();
      param_4 = ppppppppuVar18 + 1;
      *param_4 = (undefined *******)0x1;
      func_0x00010b97eae8();
      param_2 = ppppppppuVar26;
      if (pppppppuVar43 != (undefined *******)0x0) {
        do {
          func_0x000107c39fa4();
          param_2 = ppppppppuStack_330;
        } while (extraout_w10_12 != 0);
      }
      ppppppppuVar18[2] = pppppppuVar43;
      *ppppppppuVar18 = (undefined *******)&PTR_FUN_110d7c4f0;
      do {
        func_0x000107c39fa4();
      } while (extraout_w10_13 != 0);
      ppppppppuVar18[3] = (undefined *******)param_2;
      ppppppppuVar18[4] = (undefined *******)ppppppppuVar11;
      pppppppuVar39 = ppppppppuStack_330[4];
      ppppppppuStack_458 = ppppppppuVar18 + 5;
      for (pppppppuVar43 = (undefined *******)0x0; pppppppuVar39 != pppppppuVar43;
          pppppppuVar43 = (undefined *******)((long)pppppppuVar43 + 1)) {
        ppppppppuVar18[(long)((long)pppppppuVar43 + 5)] = (undefined *******)0x0;
      }
      ppppppppuStack_468 = ppppppppuStack_440;
      ppppppppuVar26 = (undefined ********)(ulong)uStack_45c;
      ppppppppuStack_470 = ppppppppuVar18;
      ppppppppuStack_450 = ppppppppuVar40;
      ppppppppuStack_448 = param_3;
      for (pppppppuVar43 = (undefined *******)0x0; ppppppppuVar40 = ppppppppuStack_330,
          ppppppppuVar18 = ppppppppuStack_330, pppppppuVar43 < pppppppuVar39;
          pppppppuVar43 = (undefined *******)((long)pppppppuVar43 + 1)) {
        ppppppppuVar35 = ppppppppuStack_330 + (long)pppppppuVar43 * 3 + 5;
        func_0x00010b97f0c0(&ppppppppuStack_3f0);
        if (((ulong)ppppppppuVar25[1] & 1) == 0) {
          ppppppppuStack_440 = (undefined ********)0x0;
code_r0x00010b977b38:
          func_0x00010b97f158();
          ppuVar33 = (undefined **)ppppppppuVar11;
          goto code_r0x00010b977b44;
        }
        ppppppppuVar11 = ppppppppuStack_458 + (long)pppppppuVar43;
        if (((int)ppppppppuVar26 != 0) &&
           (pppppppuVar39 = ppppppppuVar12[0x1a], pppppppuVar39 != (undefined *******)0x0)) {
          (*(code *)(*pppppppuVar39)[2])
                    (&ppppppppuStack_380,pppppppuVar39,ppppppppuVar40 + (long)pppppppuVar43 * 3 + 6)
          ;
          ppppppppuVar31 = (undefined ********)&ppppppppuStack_380;
          ppppppppuVar14 = ppppppppuVar40 + (long)pppppppuVar43 * 3 + 6;
          FUN_10b990e08();
          if ((int)ppppppppuVar31 != 0) {
            param_2 = (undefined ********)&ppppppppuStack_380;
            pppppppuVar39 = ppppppppuVar12[1];
            func_0x00010b97f234();
            ppppppppuVar26 = ppppppppuVar31 + 1;
            *ppppppppuVar26 = (undefined *******)0x1;
            func_0x00010b97eae8();
            if (pppppppuVar39 != (undefined *******)0x0) {
              do {
                func_0x000107c39fa4();
              } while (extraout_w10_22 != 0);
            }
            ppppppppuVar31[2] = pppppppuVar39;
            *ppppppppuVar31 = (undefined *******)&PTR_DAT_110d7c558;
            unaff_x26 = ppppppppuVar31 + 3;
            *unaff_x26 = (undefined *******)0x0;
            ppppppppuVar31[4] = (undefined *******)0x0;
            ppppppppuVar35 = ppppppppuVar40 + (long)pppppppuVar43 * 3 + 5;
            ppppppppuVar18 = ppppppppuStack_330;
            func_0x00010b97f0c0(&ppppppppuStack_410);
            pppppppuVar39 = ppppppppuVar25[1];
            if (((ulong)pppppppuVar39 & 1) == 0) {
              ppppppppuStack_468 = (undefined ********)0x0;
            }
            else {
              FUN_10b972a1c(unaff_x26,&ppppppppuStack_3f0);
              FUN_10b972a1c(ppppppppuVar31 + 4,&ppppppppuStack_410);
              do {
                cVar7 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar26,0x10);
                if (bVar3) {
                  *ppppppppuVar26 = (undefined *******)((long)*ppppppppuVar26 + 1);
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              ppppppppuVar14 = (undefined ********)appppppppuStack_428;
              appppppppuStack_428[0] = ppppppppuVar31;
              FUN_10b979edc(ppppppppuVar11);
              FUN_10b972f3c(appppppppuStack_428[0]);
            }
            func_0x00010b97f0e0();
            do {
              pppppppuVar28 = *ppppppppuVar26;
              cVar7 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar26,0x10);
              if (bVar3) {
                *ppppppppuVar26 = (undefined *******)((long)pppppppuVar28 + -1);
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if ((undefined *******)((long)pppppppuVar28 + -1) == (undefined *******)0x0) {
              func_0x00010b97ee6c();
            }
            ppppppppuVar26 = (undefined ********)(ulong)uStack_45c;
            if (((ulong)pppppppuVar39 & 1) == 0) {
              ppppppppuStack_440 = ppppppppuStack_468;
              func_0x000107c27900(&uStack_378);
              goto code_r0x00010b977b38;
            }
          }
          func_0x000107c27900(&uStack_378);
        }
        if (*ppppppppuVar11 == (undefined *******)0x0) {
          pppppppuVar39 = (undefined *******)0x0;
          if (ppppppppuStack_3f0 != (undefined ********)0x0) {
            do {
              func_0x000107c39f98();
              pppppppuVar39 = extraout_x8_33;
            } while (extraout_w11_20 != 0);
          }
          ppppppppuVar14 = (undefined ********)&uStack_3b0;
          uStack_3b0 = pppppppuVar39;
          FUN_10b979edc(ppppppppuVar11);
          FUN_10b972f3c(uStack_3b0);
        }
        func_0x00010b97f158();
        pppppppuVar39 = ppppppppuStack_330[4];
      }
      ppppppppuStack_440 = ppppppppuStack_468;
      do {
        func_0x00010b97ef98();
      } while (extraout_w9_00 != 0);
      ppppppppuStack_440 = ppppppppuStack_470;
      ppuVar33 = (undefined **)ppppppppuVar11;
code_r0x00010b977b44:
      do {
        param_3 = ppppppppuStack_448;
        ppppppppuVar40 = ppppppppuStack_450;
        uVar8 = (undefined *******)((long)*param_4 + -1) == (undefined *******)0x0;
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(param_4,0x10);
        if (bVar3) {
          *param_4 = (undefined *******)((long)*param_4 + -1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((bool)uVar8) {
        func_0x00010b97e808(ppppppppuStack_470);
      }
    }
    FUN_10b97bc6c(appppppppuStack_3a0[0]);
    func_0x000107c2792c(ppppppppuStack_330);
    goto LAB_10b9780d0;
  case 0xc:
    func_0x00010b990904(&ppppppppuStack_330,auStack_338);
    ppppppppuVar11 = (undefined ********)ppppppppuVar12[1];
    func_0x00010b97ef58();
    if (((ulong)ppppppppuVar25[1] & 1) == 0) {
      ppppppppuStack_3f0 = ppppppppuStack_330 + 2;
      apuStack_3e8[0] = &UNK_1003ab990;
      func_0x000107c2793c(&UNK_10f7cd30b);
      ppppppppuVar26 = (undefined ********)&ppppppppuStack_380;
      ppppppppuVar35 = (undefined ********)&ppppppppuStack_3f0;
      func_0x000107c3a054(&ppppppppuStack_380);
      func_0x00010b97ead0();
      ppppppppuVar18 = extraout_x11_01;
      if (cVar7 == cVar6) {
        ppppppppuVar18 = extraout_x8_32;
      }
      func_0x00010b97ec70();
      func_0x00010b97ea80();
      ppppppppuStack_440 = (undefined ********)0x0;
    }
    else {
      param_2 = (undefined ********)(ulong)bStack_33f;
      ppppppppuVar26 = (undefined ********)ppppppppuVar12[1];
      func_0x00010b97ee54();
      ppppppppuVar31 = appppppppuStack_3a0[0];
      appppppppuStack_3a0[0] = (undefined ********)0x0;
      ppppppppuVar11[1] = (undefined *******)0x1;
      *ppppppppuVar11 = (undefined *******)&PTR_DAT_110d7bd68;
      if (ppppppppuVar26 != (undefined ********)0x0) {
        do {
          func_0x00010b97e7d0();
          ppppppppuVar31 = extraout_x9_24;
        } while (extraout_w12_07 != 0);
      }
      ppppppppuVar11[2] = (undefined *******)ppppppppuVar26;
      *ppppppppuVar11 = (undefined *******)&PTR_FUN_110d7c9c8;
      if (ppppppppuStack_330 != (undefined ********)0x0) {
        ppppppppuVar36 = ppppppppuStack_330 + 1;
        do {
          cVar7 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar36,0x10);
          if (bVar3) {
            *ppppppppuVar36 = (undefined *******)((long)*ppppppppuVar36 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      ppppppppuVar11[3] = (undefined *******)ppppppppuStack_330;
      ppppppppuVar11[4] = (undefined *******)ppppppppuVar31;
      *(byte *)(ppppppppuVar11 + 5) = bStack_33f >> 1 & 1;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_440 = ppppppppuVar11;
      } while (extraout_w10_15 != 0);
      do {
        func_0x000107c3a128();
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_24,0x10);
        if (bVar3) {
          *extraout_x8_24 = extraout_x9_25;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((bool)uVar8) {
        func_0x00010b97e808();
      }
    }
    func_0x00010b9762a0(appppppppuStack_3a0[0]);
    FUN_10b90558c(ppppppppuStack_330);
    ppuVar33 = ppuVar34;
    goto LAB_10b9780d0;
  case 0xd:
    FUN_10b9908c0(&pppppppuStack_388,auStack_338);
    ppppppppuVar11 = (undefined ********)appppppppuStack_3a0;
    func_0x00010b97e78c();
    if (((ulong)ppppppppuVar25[1] & 1) == 0) {
      func_0x00010b97f16c();
      func_0x00010b97ed14();
      ppppppppuStack_330 = ppppppppuVar11;
      ppppppppuStack_328 = ppppppppuVar14;
      func_0x00010b97f1b8();
      ppppppppuVar26 = (undefined ********)&ppppppppuStack_380;
      func_0x00010b97e888();
      func_0x00010b97ead0();
      ppppppppuVar18 = extraout_x11_00;
      if (cVar7 == cVar6) {
        ppppppppuVar18 = extraout_x8_31;
      }
      func_0x00010b97ec70();
      func_0x00010b97ea80();
      func_0x000107c3a014();
      ppppppppuStack_440 = (undefined ********)0x0;
    }
    else {
      ppppppppuVar11 = (undefined ********)(pppppppuStack_388 + 3);
      func_0x000107c30f3c(&uStack_3b0);
      uVar21 = (uint)bRam00000001133fad7c;
      cVar6 = SBORROW4(uVar21,1);
      cVar7 = (int)(uVar21 - 1) < 0;
      uVar8 = uVar21 == 1;
      if ((bool)uVar8) {
        uVar21 = (uint)(byte)uStack_3b0;
        cVar7 = false;
        uVar8 = true;
        if (uVar21 != 0x10) {
          cVar7 = (int)((byte)uStack_3b0 - 1) < 0;
          uVar8 = (byte)uStack_3b0 == 1;
        }
        cVar6 = uVar21 != 0x10 && SBORROW4(uVar21,1);
        if (((bool)uVar8) ||
           (pppppppuStack_3b8 = (undefined *******)0x0,
           (*(byte *)((long)pppppppuStack_388 + 0x12) & 1) != 0)) goto code_r0x00010b977478;
        bVar20 = uStack_3b0._1_1_;
        pppppppuVar28 = *ppppppppuVar12;
        ppppppppuStack_3f0 = ppppppppuVar12;
        func_0x000107c30df0(apuStack_3e8,appppppppuStack_3a0);
        func_0x000107c30f3c(auStack_3d0,&uStack_3b0);
        ppppppppuVar35 = (undefined ********)0x58;
        __Znwm();
        FUN_10b979f14(&ppppppppuStack_380,&ppppppppuStack_3f0);
        ppppppppuVar26 = (undefined ********)0x38;
        __Znwm();
        *ppppppppuVar26 = (undefined *******)&PTR_FUN_110d7c300;
        FUN_10b979f14(ppppppppuVar26 + 1,&ppppppppuStack_380);
        bVar20 = bVar20 & 1;
        pppppppuVar39 = ppppppppuVar12[1];
        ppppppppuVar11 = ppppppppuVar35 + 1;
        *ppppppppuVar11 = (undefined *******)0x1;
        *ppppppppuVar35 = (undefined *******)&PTR_DAT_110d7bd68;
        pppppppuVar43 = (undefined *******)0x0;
        ppppppppuStack_318 = ppppppppuVar26;
        if (pppppppuVar39 != (undefined *******)0x0) {
          do {
            func_0x00010b97e7d0();
            pppppppuVar43 = extraout_x9_31;
            bVar20 = extraout_w8;
          } while (extraout_w12_08 != 0);
        }
        ppppppppuVar35[2] = pppppppuVar43;
        *ppppppppuVar35 = (undefined *******)&PTR_FUN_110d7c390;
        *(byte *)(ppppppppuVar35 + 3) = bVar20;
        ppppppppuVar35[4] = pppppppuVar28;
        if (ppppppppuStack_318 == (undefined ********)0x0) {
          ppppppppuVar35[8] = (undefined *******)0x0;
        }
        else {
          uVar8 = (undefined *********)ppppppppuStack_318 == &ppppppppuStack_330;
          if ((bool)uVar8) {
            ppppppppuVar35[8] = (undefined *******)(ppppppppuVar35 + 5);
            (*(code *)(*ppppppppuStack_318)[3])(ppppppppuStack_318);
          }
          else {
            ppppppppuVar35[8] = (undefined *******)ppppppppuStack_318;
            ppppppppuStack_318 = (undefined ********)0x0;
          }
        }
        ppppppppuVar35[9] = (undefined *******)0x0;
        ppppppppuVar35[10] = (undefined *******)0x0;
        func_0x00010b97a43c(&ppppppppuStack_330);
        func_0x00010b97a478(&ppppppppuStack_380);
        do {
          func_0x000107c3a00c();
        } while (extraout_w9_02 != 0);
        ppppppppuVar14 = (undefined ********)&ppppppppuStack_410;
        ppppppppuStack_410 = ppppppppuVar35;
        FUN_10b979edc(&pppppppuStack_3b8);
        func_0x00010b97f0e0();
        do {
          func_0x000107c3a0a0();
          cVar7 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar11,0x10);
          if (bVar3) {
            *ppppppppuVar11 = extraout_x8_42;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((bool)uVar8) {
          func_0x00010b97e8d8();
        }
        func_0x00010b97a478(&ppppppppuStack_3f0);
code_r0x00010b977abc:
        pppppppuVar43 = pppppppuStack_3b8;
        param_2 = &pppppppuStack_348;
        cVar7 = *(char *)(pppppppuStack_388 + 3);
        uVar21 = 0;
        if (cVar7 != '\x01') {
          uVar21 = 9;
        }
        uVar1 = 2;
        if (cVar7 != '\x10') {
          uVar1 = uVar21;
        }
        ppppppppuVar26 = (undefined ********)(ulong)uVar1;
        ppppppppuStack_450 = ppppppppuVar40;
        ppppppppuStack_448 = param_3;
        if (pppppppuStack_3b8 != (undefined *******)0x0) {
          do {
            func_0x000107c39fa4();
          } while (extraout_w10_23 != 0);
        }
        pppppppuVar39 = (undefined *******)pppppppuStack_388[5];
        if ((cVar7 == '\x10') || (*(char *)((long)pppppppuStack_388 + 0x12) == '\x01')) {
          pppppppuVar28 = ppppppppuVar12[0x17];
          if ((pppppppuVar28 != (undefined *******)0x0) &&
             (pppppppuVar28[2] != (undefined ******)0x0)) {
            do {
              func_0x000107c39fdc();
            } while (extraout_w10_24 != 0);
          }
        }
        else {
          pppppppuVar28 = (undefined *******)0x0;
        }
        ppppppppuVar31 = (undefined ********)((long)pppppppuVar39 * 8 + 0x40);
        __Znwm();
        unaff_x26 = ppppppppuVar31 + 1;
        *unaff_x26 = (undefined *******)0x1;
        *ppppppppuVar31 = (undefined *******)&PTR_FUN_110d7c3f8;
        ppppppppuVar31[2] = pppppppuVar43;
        ppppppppuVar31[3] = pppppppuVar39;
        *(char *)(ppppppppuVar31 + 4) = (char)uVar1;
        *(bool *)((long)ppppppppuVar31 + 0x21) = cVar7 == '\x10';
        if ((pppppppuVar28 != (undefined *******)0x0) && (pppppppuVar28[2] != (undefined ******)0x0)
           ) {
          do {
            func_0x000107c39fdc();
          } while (extraout_w10_25 != 0);
        }
        ppppppppuVar31[5] = pppppppuVar28;
        pppppppuVar43 = (undefined *******)0x0;
        if (ppppppppuVar12[0x18] != (undefined *******)0x0) {
          do {
            func_0x000107c3a010();
            pppppppuVar43 = extraout_x8_35;
          } while (extraout_w11_21 != 0);
        }
        ppppppppuVar31[6] = pppppppuVar43;
        pppppppuVar43 = (undefined *******)0x0;
        if (ppppppppuVar12[0x19] != (undefined *******)0x0) {
          do {
            func_0x000107c3a010();
            pppppppuVar43 = extraout_x8_36;
          } while (extraout_w11_22 != 0);
        }
        ppppppppuVar31[7] = pppppppuVar43;
        lVar27 = 0x40;
        for (; pppppppuVar39 != (undefined *******)0x0;
            pppppppuVar39 = (undefined *******)((long)pppppppuVar39 + -1)) {
          *(undefined8 *)((long)ppppppppuVar31 + lVar27) = 0;
          lVar27 = lVar27 + 8;
        }
        func_0x000107c2ab10(pppppppuVar28);
        ppuVar33 = (undefined **)ppppppppuStack_440;
        for (ppppppppuVar11 = (undefined ********)0x0;
            uVar8 = ppppppppuVar11 == (undefined ********)pppppppuStack_388[5],
            ppppppppuVar11 < pppppppuStack_388[5];
            ppppppppuVar11 = (undefined ********)((long)ppppppppuVar11 + 1)) {
          ppppppppuVar26 = (undefined ********)(pppppppuStack_388 + (long)ppppppppuVar11 * 2);
          func_0x00010b97e78c(&ppppppppuStack_3f0);
          if (((ulong)ppppppppuVar25[1] & 1) == 0) {
            func_0x00010b97f150(&ppppppppuStack_410);
            ppppppppuVar35 = (undefined ********)&ppppppppuStack_410;
            func_0x000107c27e5c();
            uStack_378 = 0;
            ppppppppuStack_380 = ppppppppuVar11;
            ppppppppuStack_370 = ppppppppuVar35;
            ppppppppuStack_368 = ppppppppuVar14;
            func_0x00010b97f134();
            ppppppppuVar26 = (undefined ********)&ppppppppuStack_330;
            ppppppppuVar35 = (undefined ********)&ppppppppuStack_380;
            func_0x00010b97f124(&ppppppppuStack_330);
            uVar8 = bStack_319 == 0;
            ppppppppuVar18 = ppppppppuStack_328;
            ppppppppuVar14 = ppppppppuStack_330;
            if (-1 < (char)bStack_319) {
              ppppppppuVar18 = (undefined ********)(ulong)bStack_319;
              ppppppppuVar14 = ppppppppuVar26;
            }
            func_0x00010b97ec70();
            func_0x00010b97eef0();
            func_0x00010b97ebf4();
            ppppppppuStack_440 = (undefined ********)0x0;
            func_0x00010b97e918();
            param_3 = ppppppppuStack_448;
            ppppppppuVar40 = ppppppppuStack_450;
            ppppppppuVar36 = ppppppppuStack_440;
            goto code_r0x00010b977fc8;
          }
          ppppppppuVar18 = (undefined ********)&ppppppppuStack_3f0;
          ppppppppuVar35 = ppppppppuVar26 + 6;
          func_0x00010b97e768(&ppppppppuStack_330);
          bVar20 = *(byte *)(ppppppppuVar25 + 1);
          if ((bVar20 & 1) == 0) {
            func_0x00010b97f150(appppppppuStack_428);
            ppppppppuVar35 = (undefined ********)appppppppuStack_428;
            func_0x000107c27e5c();
            uStack_378 = 0;
            ppppppppuStack_380 = ppppppppuVar11;
            ppppppppuStack_370 = ppppppppuVar35;
            ppppppppuStack_368 = ppppppppuVar14;
            func_0x00010b97f134();
            ppppppppuVar35 = (undefined ********)&ppppppppuStack_380;
            func_0x00010b97f124(&ppppppppuStack_410);
            uVar8 = bStack_3f9 == 0;
            ppppppppuVar18 = ppppppppuStack_408;
            ppppppppuVar14 = ppppppppuStack_410;
            if (-1 < (char)bStack_3f9) {
              ppppppppuVar18 = (undefined ********)(ulong)bStack_3f9;
              ppppppppuVar14 = (undefined ********)&ppppppppuStack_410;
            }
            func_0x00010b97ec70();
            func_0x00010b97ebf4();
            func_0x00010b97ee7c();
            ppuVar33 = (undefined **)0x0;
          }
          else {
            pppppppuVar43 = (undefined *******)0x0;
            if (ppppppppuStack_330 != (undefined ********)0x0) {
              do {
                func_0x000107c39f98();
                pppppppuVar43 = extraout_x8_37;
              } while (extraout_w11_23 != 0);
            }
            ppppppppuVar14 = &pppppppuStack_430;
            pppppppuStack_430 = pppppppuVar43;
            FUN_10b979edc(ppppppppuVar31 + (long)(ppppppppuVar11 + 1));
            FUN_10b972f3c(pppppppuStack_430);
          }
          func_0x00010b97eee8();
          func_0x00010b97e918();
          param_3 = ppppppppuStack_448;
          ppppppppuVar40 = ppppppppuStack_450;
          ppppppppuVar36 = (undefined ********)ppuVar33;
          if (bVar20 == 0) goto code_r0x00010b977fc8;
        }
        pppppppuVar43 = ppppppppuVar12[1];
        ppppppppuStack_458 = ppppppppuVar12;
        ppppppppuStack_440 = (undefined ********)ppuVar33;
        do {
          func_0x000107c3a00c();
        } while (extraout_w9_01 != 0);
        ppppppppuVar14 = (undefined ********)&ppppppppuStack_380;
        ppppppppuVar18 = &pppppppuStack_388;
        ppppppppuVar35 = ppppppppuVar25;
        ppppppppuStack_380 = ppppppppuVar31;
        (*(code *)(*pppppppuVar43)[0x24])(&ppppppppuStack_410);
        ppppppppuVar40 = ppppppppuStack_380;
        FUN_10b97ad80();
        ppuVar33 = (undefined **)ppppppppuStack_410;
        uVar8 = *(char *)(ppppppppuVar25 + 1) != '\x01' ||
                ppppppppuStack_410 == (undefined ********)0x0;
        if (*(char *)(ppppppppuVar25 + 1) != '\x01' || ppppppppuStack_410 == (undefined ********)0x0
           ) {
          func_0x000107c31084();
          ppppppppuVar12 = ppppppppuVar40;
          func_0x00010b97f150(&ppppppppuStack_3f0);
          func_0x00010b97ed14();
          ppppppppuStack_330 = ppppppppuVar12;
          ppppppppuStack_328 = ppppppppuVar14;
          func_0x000107c2793c(&UNK_10f7cce43);
          func_0x00010b97e888();
          func_0x000107c31080(&ppppppppuStack_330,ppppppppuVar40,&ppppppppuStack_380);
          FUN_10b99f560(appppppppuStack_428,&ppppppppuStack_330);
          ppppppppuVar14 = (undefined ********)appppppppuStack_428;
          func_0x00010b97f23c();
          func_0x000104bda960(appppppppuStack_428[0]);
          func_0x00010b97f20c();
          func_0x00010b97ea80();
          func_0x000107c3a014();
          ppppppppuStack_440 = (undefined ********)0x0;
          ppuVar33 = (undefined **)ppppppppuVar40;
        }
        else {
          ppppppppuVar26 = (undefined ********)ppppppppuStack_458[1];
          func_0x00010b97ed54();
          ppppppppuStack_410 = (undefined ********)0x0;
          func_0x00010b97e654();
          if (ppppppppuVar26 != (undefined ********)0x0) {
            do {
              func_0x000107c39f98();
            } while (extraout_w11_24 != 0);
          }
          *ppppppppuVar40 = (undefined *******)&PTR_DAT_110d7c488;
          ppppppppuVar40[2] = (undefined *******)ppppppppuVar26;
          ppppppppuVar40[3] = (undefined *******)ppuVar33;
          do {
            func_0x000107c39fa4();
          } while (extraout_w10_26 != 0);
          do {
            ppppppppuStack_440 = ppppppppuVar40;
            func_0x000107c3a128();
            cVar7 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_38,0x10);
            if (bVar3) {
              *extraout_x8_38 = extraout_x9_32;
              cVar7 = ExclusiveMonitorsStatus();
            }
            ppppppppuVar40 = ppppppppuStack_440;
          } while (cVar7 != '\0');
          if ((bool)uVar8) {
            func_0x00010b97e808();
          }
        }
        FUN_10b97aefc(ppppppppuStack_410);
        param_3 = ppppppppuStack_448;
        ppppppppuVar40 = ppppppppuStack_450;
        ppppppppuVar12 = ppppppppuStack_458;
        ppppppppuVar36 = ppppppppuStack_440;
code_r0x00010b977fc8:
        do {
          ppppppppuStack_440 = ppppppppuVar36;
          func_0x000107c3a0a0();
          cVar7 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar3) {
            *unaff_x26 = extraout_x8_39;
            cVar7 = ExclusiveMonitorsStatus();
          }
          ppppppppuVar36 = ppppppppuStack_440;
        } while (cVar7 != '\0');
        if ((bool)uVar8) {
          func_0x00010b97e8d8();
        }
      }
      else {
code_r0x00010b977478:
        pppppppuStack_3b8 = (undefined *******)0x0;
        ppppppppuVar18 = (undefined ********)appppppppuStack_3a0;
        ppppppppuVar35 = (undefined ********)&uStack_3b0;
        func_0x00010b97e768(&ppppppppuStack_380);
        bVar20 = *(byte *)(ppppppppuVar25 + 1);
        ppppppppuVar31 = (undefined ********)(ulong)bVar20;
        if ((bVar20 & 1) == 0) {
          func_0x00010b98fa8c(&ppppppppuStack_330,&bStack_340);
          ppppppppuVar35 = (undefined ********)&ppppppppuStack_330;
          func_0x000107c27e5c();
          ppppppppuStack_410 = ppppppppuVar35;
          ppppppppuStack_408 = ppppppppuVar11;
          func_0x00010b97f1b8();
          ppppppppuVar26 = (undefined ********)&ppppppppuStack_3f0;
          ppppppppuVar35 = (undefined ********)&ppppppppuStack_410;
          func_0x00010b97e9e4(&ppppppppuStack_3f0);
          func_0x000107c3a068();
          ppppppppuVar18 = extraout_x11_02;
          ppppppppuVar14 = extraout_x10;
          if (cVar7 == cVar6) {
            ppppppppuVar18 = extraout_x8_34;
            ppppppppuVar14 = ppppppppuVar26;
          }
          func_0x00010b97ec70();
          func_0x000107c3a014();
          func_0x00010b97eef0();
          ppppppppuStack_440 = (undefined ********)0x0;
        }
        else {
          ppppppppuVar14 = (undefined ********)&ppppppppuStack_380;
          FUN_10b972a1c(&pppppppuStack_3b8);
        }
        func_0x00010b97edb0();
        if ((bVar20 & 1) != 0) goto code_r0x00010b977abc;
      }
      FUN_10b972f3c(pppppppuStack_3b8);
      func_0x00010b97e958(&uStack_3b0);
    }
    func_0x00010b97e958(appppppppuStack_3a0);
    func_0x000107c30df4(pppppppuStack_388);
    param_4 = ppppppppuVar31;
    goto LAB_10b9780d0;
  case 0xe:
    FUN_10b990668(&ppppppppuStack_330,&bStack_340);
    ppppppppuVar18 = (undefined ********)&ppppppppuStack_330;
    func_0x00010b97e78c(&ppppppppuStack_380);
    if (((ulong)ppppppppuVar25[1] & 1) == 0) {
      func_0x00010b97e8b8();
      ppppppppuStack_440 = (undefined ********)0x0;
    }
    else {
      ppppppppuVar11 = (undefined ********)&ppppppppuStack_3f0;
      ppppppppuVar18 = (undefined ********)&ppppppppuStack_380;
      ppppppppuVar35 = (undefined ********)&ppppppppuStack_330;
      func_0x00010b97e768();
      if (((ulong)ppppppppuVar25[1] & 1) == 0) {
        func_0x00010b97e8b8();
        ppppppppuStack_440 = (undefined ********)0x0;
      }
      else {
        ppppppppuVar26 = (undefined ********)ppppppppuVar12[1];
        func_0x00010b97ed54();
        func_0x00010b97e654();
        if (ppppppppuVar26 != (undefined ********)0x0) {
          do {
            func_0x000107c39f98();
          } while (extraout_w11_04 != 0);
        }
        ppppppppuVar11[2] = (undefined *******)ppppppppuVar26;
        *ppppppppuVar11 = (undefined *******)&PTR_FUN_110d7c5c0;
        pppppppuVar43 = (undefined *******)0x0;
        if (ppppppppuStack_3f0 != (undefined ********)0x0) {
          do {
            func_0x00010b97e7d0();
            pppppppuVar43 = extraout_x9_09;
          } while (extraout_w12_02 != 0);
        }
        ppppppppuVar11[3] = pppppppuVar43;
        do {
          func_0x000107c39fa4();
          ppppppppuStack_440 = ppppppppuVar11;
        } while (extraout_w10_03 != 0);
        do {
          func_0x000107c3a128();
          cVar7 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_13,0x10);
          if (bVar3) {
            *extraout_x8_13 = extraout_x9_10;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((bool)uVar8) {
          func_0x00010b97e808();
        }
      }
      func_0x00010b97ee34();
    }
    func_0x00010b97e958(&ppppppppuStack_380);
    lVar27 = -0x80;
    goto code_r0x00010b9780cc;
  case 0xf:
    ppppppppuVar31 = (undefined ********)&bStack_340;
    func_0x00010b9906a4();
    func_0x00010b97e708();
    if (((ulong)ppppppppuVar25[1] & 1) == 0) {
      func_0x00010b97e8c8();
      goto code_r0x00010b977778;
    }
    ppppppppuVar18 = ppppppppuVar31 + 4;
    func_0x00010b97e78c(&ppppppppuStack_3f0);
    if (((ulong)ppppppppuVar25[1] & 1) != 0) {
      ppppppppuVar11 = (undefined ********)&ppppppppuStack_330;
      func_0x00010b97e730();
      if (((ulong)ppppppppuVar25[1] & 1) != 0) {
        func_0x00010b97efa8();
        func_0x00010b97e768();
        if (((ulong)ppppppppuVar25[1] & 1) != 0) {
          ppppppppuVar26 = (undefined ********)ppppppppuVar12[1];
          func_0x00010b97f234();
          func_0x00010b97e654();
          if (ppppppppuVar26 != (undefined ********)0x0) {
            do {
              func_0x000107c39f98();
            } while (extraout_w11_09 != 0);
          }
          ppppppppuVar11[2] = (undefined *******)ppppppppuVar26;
          *ppppppppuVar11 = (undefined *******)&PTR_FUN_110d7c628;
          pppppppuVar43 = (undefined *******)0x0;
          if (ppppppppuStack_330 != (undefined ********)0x0) {
            do {
              func_0x00010b97e7d0();
              pppppppuVar43 = extraout_x9_16;
            } while (extraout_w12_04 != 0);
          }
          ppppppppuVar11[3] = pppppppuVar43;
          pppppppuVar43 = (undefined *******)0x0;
          if (appppppppuStack_3a0[0] != (undefined ********)0x0) {
            do {
              func_0x00010b97e7d0();
              pppppppuVar43 = extraout_x9_17;
            } while (extraout_w12_05 != 0);
          }
          ppppppppuVar11[4] = pppppppuVar43;
          do {
            func_0x000107c39fa4();
            ppppppppuStack_440 = ppppppppuVar11;
          } while (extraout_w10_08 != 0);
          do {
            func_0x000107c3a128();
            cVar7 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_18,0x10);
            if (bVar3) {
              *extraout_x8_18 = extraout_x9_18;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          goto code_r0x00010b9770f8;
        }
        func_0x00010b97e8a8();
code_r0x00010b977f38:
        ppppppppuStack_440 = (undefined ********)0x0;
        goto code_r0x00010b977f3c;
      }
      func_0x00010b97e8c8();
code_r0x00010b977b90:
      ppppppppuStack_440 = (undefined ********)0x0;
      goto code_r0x00010b9780c0;
    }
    func_0x00010b97e8a8();
code_r0x00010b977a2c:
    ppppppppuStack_440 = (undefined ********)0x0;
code_r0x00010b9780c4:
    func_0x00010b97e918();
    goto code_r0x00010b9780c8;
  case 0x10:
    ppppppppuVar31 = (undefined ********)&bStack_340;
    func_0x00010b990744();
    func_0x00010b97e708();
    if (((ulong)ppppppppuVar25[1] & 1) != 0) {
      ppppppppuVar11 = (undefined ********)&ppppppppuStack_3f0;
      func_0x00010b97e730();
      if (((ulong)ppppppppuVar25[1] & 1) != 0) {
        ppppppppuVar26 = (undefined ********)ppppppppuVar12[1];
        func_0x00010b97ed54();
        func_0x00010b97e654();
        if (ppppppppuVar26 != (undefined ********)0x0) {
          do {
            func_0x000107c39f98();
          } while (extraout_w11_06 != 0);
        }
        ppppppppuVar11[2] = (undefined *******)ppppppppuVar26;
        *ppppppppuVar11 = (undefined *******)&PTR_FUN_110d7ca30;
        pppppppuVar43 = (undefined *******)0x0;
        if (ppppppppuStack_3f0 != (undefined ********)0x0) {
          do {
            func_0x00010b97e7d0();
            pppppppuVar43 = extraout_x9_12;
          } while (extraout_w12_03 != 0);
        }
        ppppppppuVar11[3] = pppppppuVar43;
        do {
          func_0x000107c39fa4();
          ppppppppuStack_440 = ppppppppuVar11;
        } while (extraout_w10_05 != 0);
        do {
          func_0x000107c3a128();
          cVar7 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_15,0x10);
          if (bVar3) {
            *extraout_x8_15 = extraout_x9_13;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        goto code_r0x00010b977380;
      }
      func_0x00010b97e8b8();
code_r0x00010b977a14:
      ppppppppuStack_440 = (undefined ********)0x0;
code_r0x00010b977a18:
      func_0x00010b97ee34();
      goto code_r0x00010b9780c8;
    }
    func_0x00010b97e8b8();
    goto code_r0x00010b977778;
  case 0x12:
    ppppppppuVar31 = (undefined ********)&bStack_340;
    func_0x00010b9906c4();
    func_0x00010b97e708();
    if (((ulong)ppppppppuVar25[1] & 1) != 0) {
      ppppppppuVar18 = ppppppppuVar31 + 4;
      func_0x00010b97e78c(&ppppppppuStack_3f0);
      if (((ulong)ppppppppuVar25[1] & 1) == 0) {
        func_0x00010b97e8a8();
        goto code_r0x00010b977a2c;
      }
      ppppppppuVar11 = (undefined ********)&ppppppppuStack_330;
      func_0x00010b97e730();
      if (((ulong)ppppppppuVar25[1] & 1) == 0) {
        func_0x00010b97e8c8();
        goto code_r0x00010b977b90;
      }
      func_0x00010b97efa8();
      func_0x00010b97e768();
      if (((ulong)ppppppppuVar25[1] & 1) == 0) {
        func_0x00010b97e8a8();
        goto code_r0x00010b977f38;
      }
      ppppppppuVar26 = (undefined ********)ppppppppuVar12[1];
      func_0x00010b97f234();
      func_0x00010b97e654();
      if (ppppppppuVar26 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_03 != 0);
      }
      ppppppppuVar11[2] = (undefined *******)ppppppppuVar26;
      *ppppppppuVar11 = (undefined *******)&PTR_FUN_110d7c6e8;
      pppppppuVar43 = (undefined *******)0x0;
      if (ppppppppuStack_330 != (undefined ********)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppppuVar43 = extraout_x9_06;
        } while (extraout_w12_00 != 0);
      }
      ppppppppuVar11[3] = pppppppuVar43;
      pppppppuVar43 = (undefined *******)0x0;
      if (appppppppuStack_3a0[0] != (undefined ********)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppppuVar43 = extraout_x9_07;
        } while (extraout_w12_01 != 0);
      }
      ppppppppuVar11[4] = pppppppuVar43;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_440 = ppppppppuVar11;
      } while (extraout_w10_02 != 0);
      do {
        func_0x000107c3a128();
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_12,0x10);
        if (bVar3) {
          *extraout_x8_12 = extraout_x9_08;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
code_r0x00010b9770f8:
      if ((bool)uVar8) {
        func_0x00010b97e808();
      }
code_r0x00010b977f3c:
      func_0x00010b97f244();
      param_2 = ppppppppuVar12;
code_r0x00010b9780c0:
      func_0x00010b97eee8();
      goto code_r0x00010b9780c4;
    }
    func_0x00010b97e8c8();
    goto code_r0x00010b977778;
  case 0x13:
    ppppppppuVar31 = (undefined ********)&bStack_340;
    func_0x00010b9906e4();
    func_0x00010b97e708();
    if (((ulong)ppppppppuVar25[1] & 1) != 0) {
      ppppppppuVar11 = (undefined ********)&ppppppppuStack_3f0;
      func_0x00010b97e730();
      if (((ulong)ppppppppuVar25[1] & 1) == 0) {
        ppppppppuVar14 = (undefined ********)&UNK_10f7cd22d;
        func_0x00010b97e990();
        goto code_r0x00010b977a14;
      }
      ppppppppuVar26 = (undefined ********)ppppppppuVar12[1];
      func_0x00010b97ed54();
      func_0x00010b97e654();
      if (ppppppppuVar26 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_13 != 0);
      }
      ppppppppuVar11[2] = (undefined *******)ppppppppuVar26;
      *ppppppppuVar11 = (undefined *******)&PTR_FUN_110d7c798;
      pppppppuVar43 = (undefined *******)0x0;
      if (ppppppppuStack_3f0 != (undefined ********)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppppuVar43 = extraout_x9_22;
        } while (extraout_w12_06 != 0);
      }
      ppppppppuVar11[3] = pppppppuVar43;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_440 = ppppppppuVar11;
      } while (extraout_w10_14 != 0);
      do {
        func_0x000107c3a128();
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_22,0x10);
        if (bVar3) {
          *extraout_x8_22 = extraout_x9_23;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
code_r0x00010b977380:
      if ((bool)uVar8) {
        func_0x00010b97e808();
      }
      goto code_r0x00010b977a18;
    }
    ppppppppuVar14 = (undefined ********)&UNK_10f7cd22d;
    func_0x00010b97e990();
    goto code_r0x00010b977778;
  case 0x14:
    ppppppppuVar31 = (undefined ********)&bStack_340;
    func_0x00010b990704();
    func_0x00010b97e708();
    if (((ulong)ppppppppuVar25[1] & 1) != 0) {
      ppppppppuVar18 = ppppppppuVar31 + 4;
      func_0x00010b97e78c(&ppppppppuStack_3f0);
      if (((ulong)ppppppppuVar25[1] & 1) == 0) {
        ppppppppuVar14 = (undefined ********)&UNK_10f7cd2ab;
        func_0x00010b97e990();
        goto code_r0x00010b977a2c;
      }
      ppppppppuVar11 = (undefined ********)&ppppppppuStack_330;
      func_0x00010b97e730();
      if (((ulong)ppppppppuVar25[1] & 1) == 0) {
        ppppppppuVar14 = (undefined ********)&UNK_10f7cd285;
        func_0x00010b97e990();
        goto code_r0x00010b977b90;
      }
      func_0x00010b97efa8();
      func_0x00010b97e768();
      if (((ulong)ppppppppuVar25[1] & 1) == 0) {
        ppppppppuVar14 = (undefined ********)&UNK_10f7cd2ab;
        func_0x00010b97e990();
        ppppppppuStack_440 = (undefined ********)0x0;
      }
      else {
        func_0x00010b97ee54();
        pppppppuVar43 = ppppppppuVar12[1];
        ppppppppuVar36 = ppppppppuVar11 + 1;
        *ppppppppuVar36 = (undefined *******)0x1;
        *ppppppppuVar11 = (undefined *******)&PTR_DAT_110d7bd68;
        ppppppppuVar31 = ppppppppuVar11;
        if (pppppppuVar43 == (undefined *******)0x0) {
          ppppppppuVar26 = (undefined ********)0x0;
          pppppppuVar43 = (undefined *******)0x0;
        }
        else {
          do {
            func_0x000107c39f98();
          } while (extraout_w11_14 != 0);
          ppppppppuVar26 = (undefined ********)ppppppppuVar12[1];
          pppppppuVar43 = extraout_x8_23;
        }
        ppppppppuVar11[2] = pppppppuVar43;
        *ppppppppuVar11 = (undefined *******)&PTR_FUN_110d7c848;
        func_0x000107c3a018();
        ppppppppuVar31[1] = (undefined *******)0x1;
        func_0x00010b97eae8();
        if (ppppppppuVar26 != (undefined ********)0x0) {
          do {
            func_0x000107c39fa4();
          } while (extraout_w10_27 != 0);
        }
        ppppppppuVar31[2] = (undefined *******)ppppppppuVar26;
        *ppppppppuVar31 = (undefined *******)&PTR_DAT_110d7c230;
        ppppppppuVar11[3] = (undefined *******)ppppppppuVar31;
        pppppppuVar43 = (undefined *******)0x0;
        if (ppppppppuStack_330 != (undefined ********)0x0) {
          do {
            func_0x000107c39f98();
            pppppppuVar43 = extraout_x8_40;
          } while (extraout_w11_25 != 0);
        }
        ppppppppuVar11[4] = pppppppuVar43;
        pppppppuVar43 = (undefined *******)0x0;
        if (appppppppuStack_3a0[0] != (undefined ********)0x0) {
          do {
            func_0x000107c39f98();
            pppppppuVar43 = extraout_x8_41;
          } while (extraout_w11_26 != 0);
        }
        ppppppppuVar11[5] = pppppppuVar43;
        do {
          cVar7 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar36,0x10);
          if (bVar3) {
            *ppppppppuVar36 = (undefined *******)((long)*ppppppppuVar36 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
          ppppppppuStack_440 = ppppppppuVar11;
        } while (cVar7 != '\0');
        do {
          uVar8 = (undefined *******)((long)*ppppppppuVar36 + -1) == (undefined *******)0x0;
          cVar7 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppppppuVar36,0x10);
          if (bVar3) {
            *ppppppppuVar36 = (undefined *******)((long)*ppppppppuVar36 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        ppppppppuVar31 = ppppppppuVar11;
        if ((bool)uVar8) {
          func_0x00010b97e8d8();
        }
      }
      func_0x00010b97f244();
      param_2 = param_3;
      unaff_x26 = ppppppppuVar12;
      goto code_r0x00010b9780c0;
    }
    ppppppppuVar14 = (undefined ********)&UNK_10f7cd285;
    func_0x00010b97e990();
code_r0x00010b977778:
    ppppppppuStack_440 = (undefined ********)0x0;
code_r0x00010b9780c8:
    lVar27 = -0xd0;
code_r0x00010b9780cc:
    func_0x00010b97e958((long)&pppuStack_2b0 + lVar27);
    param_4 = ppppppppuVar31;
    goto LAB_10b9780d0;
  case 0x15:
    ppppppppuVar26 = (undefined ********)ppppppppuVar12[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppppuVar26 != (undefined ********)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_15 != 0);
    }
    ppppppppuVar11[2] = (undefined *******)ppppppppuVar26;
    *ppppppppuVar11 = (undefined *******)&PTR_FUN_110d7c8f8;
    do {
      func_0x000107c39fa4();
      ppppppppuStack_440 = ppppppppuVar11;
    } while (extraout_w10_17 != 0);
    do {
      func_0x000107c3a128();
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(extraout_x8_25,0x10);
      if (bVar3) {
        *extraout_x8_25 = extraout_x9_26;
        cVar7 = ExclusiveMonitorsStatus();
      }
      param_4 = ppppppppuVar31;
      ppuVar34 = ppuVar33;
    } while (cVar7 != '\0');
    break;
  case 0x16:
    ppuVar34 = (undefined **)&bStack_340;
    func_0x00010b990724();
    ppppppppuVar26 = (undefined ********)ppppppppuVar12[1];
    param_4 = (undefined ********)ppuVar34;
    func_0x00010b97ee54();
    param_2 = param_4 + 1;
    *param_2 = (undefined *******)0x1;
    func_0x00010b97eae8();
    if (ppppppppuVar26 != (undefined ********)0x0) {
      do {
        func_0x000107c39fa4();
      } while (extraout_w10_16 != 0);
    }
    param_4[2] = (undefined *******)ppppppppuVar26;
    *param_4 = (undefined *******)&PTR_FUN_110d7c960;
    ppppppppuVar14 = (undefined ********)(ppuVar34 + 2);
    func_0x00010b90e320(param_4 + 3);
    do {
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = (undefined *******)((long)*param_2 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
      ppppppppuStack_440 = param_4;
    } while (cVar7 != '\0');
    do {
      uVar8 = (undefined *******)((long)*param_2 + -1) == (undefined *******)0x0;
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar3) {
        *param_2 = (undefined *******)((long)*param_2 + -1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    ppuVar33 = ppuVar34;
    if (!(bool)uVar8) goto LAB_10b9780d0;
    ppppppuVar16 = (*param_4)[1];
    goto code_r0x00010b976b88;
  }
code_r0x00010b976b7c:
  ppuVar33 = ppuVar34;
  if ((bool)uVar8) {
    ppppppuVar16 = (*ppppppppuVar11)[1];
code_r0x00010b976b88:
    (*(code *)ppppppuVar16)();
    ppuVar33 = ppuVar34;
  }
LAB_10b9780d0:
  ppppppppuVar11 = ppppppppuStack_440;
  uVar19 = SUB81(ppppppppuVar35,0);
  if (((ulong)ppppppppuVar25[1] & 1) == 0) {
    *ppppppppuVar40 = (undefined *******)0x0;
    ppppppppuVar40[1] = (undefined *******)0x0;
    ppppppppuVar40[2] = (undefined *******)0x0;
  }
  else {
    ppppppppuVar18 = (undefined ********)&bStack_340;
    ppppppppuStack_450 = ppppppppuVar40;
    FUN_10b9794f0(ppppppppuVar40,ppppppppuStack_440);
    pppppppuVar43 = param_3[2];
    ppppppppuStack_448 = param_3;
    FUN_10b97953c();
    ppppppppuVar25 = (undefined ********)0x0;
    uVar22 = (ulong)pppppppuVar43 >> 7;
    unaff_x26 = (undefined ********)ppppppppuVar12[5];
    ppppppppuVar40 = (undefined ********)(((ulong)pppppppuVar43 & 0x7f) * 0x101010101010101);
    while( true ) {
      param_3 = (undefined ********)(uVar22 & (ulong)unaff_x26);
      uVar22 = *(ulong *)((long)ppppppppuVar12[2] + (long)param_3);
      for (param_2 = (undefined ********)
                     ((uVar22 ^ (ulong)ppppppppuVar40) + 0xfefefefefefefeff &
                      (uVar22 ^ (ulong)ppppppppuVar40 ^ 0xffffffffffffffff) & 0x8080808080808080);
          param_2 != (undefined ********)0x0;
          param_2 = (undefined ********)((long)param_2 - 1U & (ulong)param_2)) {
        uVar29 = ((ulong)param_2 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                 ((ulong)param_2 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar29 = (uVar29 & 0xffff0000ffff0000) >> 0x10 | (uVar29 & 0xffff0000ffff) << 0x10;
        ppuVar33 = (undefined **)
                   ((long)param_3 + ((ulong)LZCOUNT(uVar29 >> 0x20 | uVar29 << 0x20) >> 3) &
                   (ulong)unaff_x26);
        pppppppuVar39 = ppppppppuVar12[3] + (long)ppuVar33 * 6;
        FUN_10b9909a8(pppppppuVar39,ppppppppuStack_448);
        uVar19 = SUB81(ppppppppuVar35,0);
        if (((ulong)pppppppuVar39 & 1) != 0) goto LAB_10b97820c;
      }
      uVar19 = SUB81(ppppppppuVar35,0);
      uVar8 = (uVar22 & ~uVar22 << 6 & 0x8080808080808080) == 0;
      if (!(bool)uVar8) break;
      ppppppppuVar25 = ppppppppuVar25 + 1;
      uVar22 = (long)ppppppppuVar25 + (long)param_3;
    }
    ppuVar33 = (undefined **)(ppppppppuVar12 + 2);
    FUN_10b97d878(ppuVar33,pppppppuVar43);
    pppppppuVar39 = ppppppppuVar12[3] + (long)ppuVar33 * 6;
    func_0x000107c30df0(pppppppuVar39,ppppppppuStack_448);
    pppppppuVar39[3] = (undefined ******)0x0;
    pppppppuVar39[4] = (undefined ******)0x0;
    pppppppuVar39[5] = (undefined ******)0x0;
    *(byte *)((long)ppppppppuVar12[2] + (long)ppuVar33) = (byte)pppppppuVar43 & 0x7f;
    func_0x000107c39f84();
    ppppppppuVar25 = ppppppppuVar12;
LAB_10b97820c:
    ppppppppuVar26 = ppppppppuStack_450;
    pppppppuVar43 = ppppppppuVar12[3];
    param_4 = (undefined ********)(pppppppuVar43 + (long)ppuVar33 * 6 + 3);
    FUN_10b972a1c(param_4,ppppppppuStack_450);
    func_0x000107c30f8c(pppppppuVar43 + (long)ppuVar33 * 6 + 4,ppppppppuVar26 + 1);
    ppppppppuVar14 = ppppppppuStack_448;
    FUN_10b90a1e0(ppppppppuVar12 + 0xe);
    ppppppppuVar12 = ppppppppuVar25;
  }
  FUN_10b972f3c(ppppppppuVar11);
  ppppppppuVar25 = ppppppppuVar11;
LAB_10b97824c:
  ppppppppuVar11 = &pppppppuStack_348;
  func_0x000107c2a668();
LAB_10b978254:
  func_0x000107c39f7c(uStack_310);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
  __ZdlPv(ppuVar33);
  func_0x00010b97a478(&ppppppppuStack_380);
  __ZdlPv(param_4);
  func_0x00010b97a478(&ppppppppuStack_3f0);
  FUN_10b972f3c(pppppppuStack_3b8);
  func_0x00010b97e958(&uStack_3b0);
  func_0x00010b97e958(appppppppuStack_3a0);
  func_0x000107c30df4(pppppppuStack_388);
  pppppppuVar39 = (undefined *******)&pppppppuStack_348;
  func_0x000107c2a668();
  func_0x00010b97e950();
  pcStack_478 = FUN_10b97874c;
  ppppppppuStack_4d0 = ppppppppuVar12;
  ppppppppuStack_4c8 = ppppppppuVar40;
  ppppppppuStack_4c0 = unaff_x26;
  ppppppppuStack_4b8 = param_3;
  ppppppppuStack_4b0 = (undefined ********)ppuVar33;
  ppppppppuStack_4a8 = param_4;
  ppppppppuStack_4a0 = ppppppppuVar25;
  ppppppppuStack_498 = param_2;
  ppppppppuStack_490 = ppppppppuVar11;
  ppppppppuStack_488 = ppppppppuVar26;
  ppppuStack_480 = &pppuStack_2b0;
  (*(code *)(*ppppppppuVar18)[4])(&pppppppuStack_500,ppppppppuVar18);
  pppppppuVar43 = (undefined *******)acStack_558;
  func_0x000107c31030(pppppppuVar43,&pppppppuStack_500);
  func_0x000107c3a064();
  pppppppuVar28 = ppppppppuVar14[1];
  func_0x00010b97ee54();
  pppppppuVar43[1] = (undefined ******)0x1;
  func_0x00010b97eae8();
  if (pppppppuVar28 != (undefined *******)0x0) {
    do {
      func_0x000107c39fa4();
    } while (extraout_w10_28 != 0);
  }
  *pppppppuVar43 = (undefined ******)&PTR_FUN_110d7bce8;
  pppppppuVar43[3] = (undefined ******)0x0;
  pppppppuVar43[4] = (undefined ******)0x0;
  pppppppuVar43[2] = (undefined ******)pppppppuVar28;
  *(undefined1 *)(pppppppuVar43 + 5) = uVar19;
  if (acStack_558[0] == '\n') {
    ppppppuVar16 = (undefined ******)acStack_558;
    FUN_10b9905a4(ppppppuVar16);
    func_0x000107c30fa8(&pppppppuStack_528,ppppppuVar16 + 2);
    func_0x000107c31030(&pppppppuStack_500,&pppppppuStack_528);
    func_0x000107c27900(&pppppppuStack_520);
  }
  else {
    func_0x000107c30df0(&pppppppuStack_500,acStack_558);
  }
  pppppppuVar24 = &pppppppuStack_528;
  pppppppuVar15 = pppppppuStack_4f0;
  func_0x000107c27918();
  lVar27 = 0;
  uVar22 = (ulong)pppppppuVar24 >> 7;
  pppppppuVar28 = ppppppppuVar14[0xb];
  while( true ) {
    uVar22 = uVar22 & (ulong)pppppppuVar28;
    uVar42 = *(ulong *)((long)ppppppppuVar14[8] + uVar22);
    func_0x00010b97f324(uVar42 ^ ((ulong)pppppppuVar24 & 0x7f) * 0x101010101010101);
    for (uVar29 = extraout_x8_43 & 0x8080808080808080; uVar29 != 0; uVar29 = uVar29 - 1 & uVar29) {
      uVar37 = (uVar29 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar29 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar37 = (uVar37 & 0xffff0000ffff0000) >> 0x10 | (uVar37 & 0xffff0000ffff) << 0x10;
      uVar37 = uVar22 + ((ulong)LZCOUNT(uVar37 >> 0x20 | uVar37 << 0x20) >> 3) &
               (ulong)pppppppuVar28;
      pppppppuVar23 = ppppppppuVar14[9];
      pppppppuVar15 = &pppppppuStack_500;
      FUN_10b9909a8();
      if (((ulong)pppppppuVar23 & 1) != 0) {
        puVar30 = (undefined *)((long)ppppppppuVar14[8] + uVar37);
        pppppppuVar28 = ppppppppuVar14[9] + uVar37 * 4;
        goto LAB_10b9788dc;
      }
    }
    if ((uVar42 & ~uVar42 << 6 & 0x8080808080808080) != 0) break;
    lVar27 = lVar27 + 8;
    uVar22 = lVar27 + uVar22;
  }
  puVar30 = (undefined *)((long)ppppppppuVar14[8] + (long)ppppppppuVar14[0xb]);
LAB_10b9788dc:
  func_0x00010b97e958(&pppppppuStack_500);
  pppppppuVar23 = pppppppuVar43 + 4;
  if ((undefined *)((long)ppppppppuVar14[8] + (long)ppppppppuVar14[0xb]) != puVar30 &&
      pppppppuVar23 != pppppppuVar28 + 3) {
    ppppppuVar16 = (undefined ******)0x0;
    if (pppppppuVar28[3] != (undefined ******)0x0) {
      do {
        func_0x00010b97e7d0();
        pppppppuVar23 = extraout_x8_44;
        ppppppuVar16 = extraout_x9_33;
      } while (extraout_w12_09 != 0);
    }
    *pppppppuVar23 = ppppppuVar16;
    FUN_10b979074();
  }
  (*(code *)(*ppppppppuVar18)[5])(auStack_568,ppppppppuVar18);
  (*(code *)(*ppppppppuVar18)[6])(&pppppppuStack_570,ppppppppuVar18);
  ppppppppuVar35 = ppppppppuVar14 + 0x11;
  FUN_10b979120();
  if (ppppppppuVar35 != (undefined ********)0x0) goto LAB_10b978b1c;
  if (ppppppppuVar14[0x15] < (undefined *******)0x49) {
    pppppppuVar23 = ppppppppuVar14[0x14];
    pppppppuVar28 = ppppppppuVar14[0x13];
    uVar29 = (long)pppppppuVar28 - (long)ppppppppuVar14[0x12];
    uVar22 = (long)pppppppuVar23 - (long)ppppppppuVar14[0x11];
    if (uVar22 <= uVar29) {
      pppppppuVar24 = (undefined8 *******)((long)uVar22 >> 2);
      if (pppppppuVar23 == ppppppppuVar14[0x11]) {
        pppppppuVar24 = (undefined8 *******)0x1;
      }
      ppppppppuStack_508 = ppppppppuVar14 + 0x14;
      FUN_10b97942c();
      pppppppuStack_520 = (undefined8 *******)((long)pppppppuVar24 + uVar29);
      pppppppuStack_510 = pppppppuVar24 + (long)pppppppuVar15;
      pppppppuStack_528 = pppppppuVar24;
      pppppppuStack_518 = pppppppuStack_520;
      func_0x00010b97eebc();
      ppppppppuStack_538 = ppppppppuVar14 + 0x16;
      uStack_530 = 0x49;
      pppppppuStack_540 = pppppppuVar24;
      FUN_10b979364(&pppppppuStack_528);
      ppppppppuVar35 = ppppppppuStack_508;
      pppppppuStack_540 = (undefined8 *******)0x0;
      pppppppuVar28 = ppppppppuVar14[0x13];
      pppppppuVar15 = pppppppuStack_518;
      pppppppuVar32 = pppppppuStack_528;
      pppppppuVar17 = pppppppuStack_520;
      pppppppuVar41 = pppppppuStack_510;
      while (pppppppuVar23 = ppppppppuVar14[0x12], pppppppuVar28 != pppppppuVar23) {
        pppppppuVar38 = pppppppuVar17;
        if (pppppppuVar17 == pppppppuVar32) {
          if (pppppppuVar15 < pppppppuVar41) {
            lVar27 = (long)pppppppuVar15 - (long)pppppppuVar32;
            pppppppuVar13 =
                 pppppppuVar15 + (((long)pppppppuVar41 - (long)pppppppuVar15 >> 3) + 1) / 2;
            pppppppuVar38 =
                 (undefined8 *******)
                 ((long)pppppppuVar13 - ((long)pppppppuVar15 - (long)pppppppuVar32));
            pppppppuVar15 = pppppppuVar13;
            if (lVar27 != 0) {
              _memmove(pppppppuVar38,pppppppuVar17,lVar27);
              pppppppuVar24 = pppppppuVar17;
            }
          }
          else {
            pppppppuVar38 = (undefined8 *******)((long)pppppppuVar41 - (long)pppppppuVar32 >> 2);
            if ((long)pppppppuVar41 - (long)pppppppuVar32 == 0) {
              pppppppuVar38 = (undefined8 *******)0x1;
            }
            ppppppppuStack_4e0 = ppppppppuVar35;
            pppppppuVar13 = pppppppuVar38;
            FUN_10b97942c();
            pppppppuStack_4f8 =
                 (undefined8 *******)
                 ((long)pppppppuVar13 + ((long)pppppppuVar38 * 2 + 6U & 0xfffffffffffffff8));
            pppppppuStack_4e8 = pppppppuVar13 + (long)pppppppuVar24;
            pppppppuStack_500 = pppppppuVar13;
            pppppppuStack_4f0 = pppppppuStack_4f8;
            func_0x00010b97f298(&pppppppuStack_500);
            FUN_10b979404();
            pppppppuVar5 = pppppppuStack_4e8;
            pppppppuVar4 = pppppppuStack_4f0;
            pppppppuVar38 = pppppppuStack_4f8;
            pppppppuVar13 = pppppppuStack_500;
            pppppppuStack_500 = pppppppuVar32;
            pppppppuStack_4f8 = pppppppuVar17;
            pppppppuStack_4f0 = pppppppuVar15;
            pppppppuStack_4e8 = pppppppuVar41;
            func_0x00010b979488(&pppppppuStack_500);
            pppppppuVar15 = pppppppuVar4;
            pppppppuVar32 = pppppppuVar13;
            pppppppuVar41 = pppppppuVar5;
          }
        }
        pppppppuVar28 = pppppppuVar28 + -1;
        pppppppuVar17 = pppppppuVar38 + -1;
        *pppppppuVar17 = (undefined8 ******)*pppppppuVar28;
      }
      pppppppuStack_528 = (undefined8 *******)ppppppppuVar14[0x11];
      ppppppppuVar14[0x11] = (undefined *******)pppppppuVar32;
      ppppppppuVar14[0x12] = (undefined *******)pppppppuVar17;
      pppppppuStack_510 = (undefined8 *******)ppppppppuVar14[0x14];
      pppppppuStack_518 = (undefined8 *******)ppppppppuVar14[0x13];
      ppppppppuVar14[0x13] = (undefined *******)pppppppuVar15;
      ppppppppuVar14[0x14] = (undefined *******)pppppppuVar41;
      pppppppuStack_520 = (undefined8 *******)pppppppuVar23;
      func_0x00010b979460(&pppppppuStack_540);
      func_0x00010b979488(&pppppppuStack_528);
      goto LAB_10b978b1c;
    }
    func_0x00010b97eebc();
    if (pppppppuVar23 != pppppppuVar28) {
      func_0x00010b979224(ppppppppuVar14 + 0x11);
      goto LAB_10b978b1c;
    }
    FUN_10b9792c0(ppppppppuVar14 + 0x11,ppppppppuVar35);
  }
  else {
    ppppppppuVar14[0x15] = (undefined *******)((long)ppppppppuVar14[0x15] + -0x49);
  }
  ppppppuVar16 = *ppppppppuVar14[0x12];
  ppppppppuVar14[0x12] = ppppppppuVar14[0x12] + 1;
  FUN_10b979188(ppppppppuVar14 + 0x11,ppppppuVar16);
LAB_10b978b1c:
  ppppppppuVar35 = ppppppppuVar14 + 0x11;
  func_0x00010b979150();
  func_0x000107c30df0();
  func_0x000107c30f3c(ppppppppuVar35 + 3,auStack_568);
  if ((pppppppuStack_570 != (undefined *******)0x0) &&
     (pppppppuStack_570[2] != (undefined ******)0x0)) {
    ppppppuVar16 = pppppppuStack_570[2] + 1;
    do {
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppppuVar16,0x10);
      if (bVar3) {
        *ppppppuVar16 = (undefined *****)((long)*ppppppuVar16 + 1);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  ppppppppuVar35[5] = pppppppuStack_570;
  do {
    func_0x000107c3a00c();
  } while (extraout_w9_03 != 0);
  ppppppppuVar35[6] = pppppppuVar43;
  ppppppppuVar14[0x16] = (undefined *******)((long)ppppppppuVar14[0x16] + 1);
  func_0x000104bdc324(pppppppuStack_570);
  func_0x00010b97e958(auStack_568);
  do {
    func_0x000107c3a00c();
  } while (extraout_w9_04 != 0);
  *pppppppuVar39 = (undefined ******)pppppppuVar43;
  FUN_10b9794c8(pppppppuVar43);
  func_0x00010b97e958(acStack_558);
  return;
}



/* Entry: 10b976548; end: 10b97669f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b976548(undefined8 param_1,undefined ********param_2,undefined ********param_3,
                  undefined ********param_4,undefined ********param_5)

{
  uint uVar1;
  bool bVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  undefined1 in_ZR;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  undefined ********ppppppppuVar8;
  undefined ********ppppppppuVar9;
  undefined ********ppppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined ********ppppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined ******ppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined ********ppppppppuVar16;
  undefined1 uVar17;
  byte extraout_w8;
  byte bVar18;
  uint uVar19;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined *******extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined8 *extraout_x8_08;
  undefined8 *extraout_x8_09;
  undefined8 *extraout_x8_10;
  undefined8 *extraout_x8_11;
  undefined8 *extraout_x8_12;
  undefined8 *extraout_x8_13;
  undefined8 *extraout_x8_14;
  undefined8 *extraout_x8_15;
  undefined8 *extraout_x8_16;
  undefined8 *extraout_x8_17;
  undefined8 *extraout_x8_18;
  undefined *******extraout_x8_19;
  undefined8 *extraout_x8_20;
  undefined8 *extraout_x8_21;
  undefined8 *extraout_x8_22;
  undefined8 *extraout_x8_23;
  undefined8 *extraout_x8_24;
  undefined8 *extraout_x8_25;
  undefined ********extraout_x8_26;
  undefined ********extraout_x8_27;
  undefined ********extraout_x8_28;
  undefined *******extraout_x8_29;
  undefined ********extraout_x8_30;
  undefined *******extraout_x8_31;
  undefined *******extraout_x8_32;
  undefined *******extraout_x8_33;
  undefined8 *extraout_x8_34;
  undefined *******extraout_x8_35;
  undefined *******extraout_x8_36;
  undefined *******extraout_x8_37;
  undefined *******extraout_x8_38;
  ulong uVar20;
  ulong extraout_x8_39;
  undefined *******pppppppuVar21;
  undefined *******extraout_x8_40;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  undefined8 uVar22;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  undefined *******extraout_x9_03;
  undefined8 extraout_x9_04;
  undefined *******extraout_x9_05;
  undefined *******extraout_x9_06;
  undefined8 extraout_x9_07;
  undefined *******extraout_x9_08;
  undefined8 extraout_x9_09;
  undefined8 extraout_x9_10;
  undefined *******extraout_x9_11;
  undefined8 extraout_x9_12;
  undefined8 extraout_x9_13;
  undefined8 extraout_x9_14;
  undefined *******extraout_x9_15;
  undefined *******extraout_x9_16;
  undefined8 extraout_x9_17;
  undefined8 extraout_x9_18;
  undefined8 extraout_x9_19;
  undefined8 extraout_x9_20;
  undefined *******extraout_x9_21;
  undefined8 extraout_x9_22;
  undefined ********extraout_x9_23;
  undefined8 extraout_x9_24;
  undefined8 extraout_x9_25;
  undefined8 extraout_x9_26;
  undefined8 extraout_x9_27;
  undefined8 extraout_x9_28;
  undefined8 extraout_x9_29;
  undefined *******extraout_x9_30;
  undefined8 extraout_x9_31;
  undefined ******extraout_x9_32;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  undefined ********extraout_x10;
  undefined8 *******pppppppuVar23;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  int extraout_w11_09;
  int extraout_w11_10;
  int extraout_w11_11;
  int extraout_w11_12;
  int extraout_w11_13;
  int extraout_w11_14;
  int extraout_w11_15;
  int extraout_w11_16;
  int extraout_w11_17;
  int extraout_w11_18;
  int extraout_w11_19;
  int extraout_w11_20;
  int extraout_w11_21;
  int extraout_w11_22;
  int extraout_w11_23;
  int extraout_w11_24;
  int extraout_w11_25;
  int extraout_w11_26;
  undefined ********extraout_x11;
  undefined ********extraout_x11_00;
  undefined ********extraout_x11_01;
  undefined ********extraout_x11_02;
  undefined ********ppppppppuVar24;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  int extraout_w12_03;
  int extraout_w12_04;
  int extraout_w12_05;
  int extraout_w12_06;
  int extraout_w12_07;
  int extraout_w12_08;
  int extraout_w12_09;
  undefined8 *unaff_x19;
  undefined ********ppppppppuVar25;
  long lVar26;
  long unaff_x20;
  undefined *******pppppppuVar27;
  ulong uVar28;
  undefined *puVar29;
  undefined ********unaff_x22;
  undefined ********unaff_x23;
  undefined ********ppppppppuVar30;
  undefined8 *******pppppppuVar31;
  undefined **unaff_x24;
  undefined **ppuVar32;
  undefined ********unaff_x25;
  undefined ********ppppppppuVar33;
  ulong uVar34;
  undefined8 *******pppppppuVar35;
  undefined ********unaff_x26;
  undefined8 unaff_x27;
  undefined *******pppppppuVar36;
  undefined ********ppppppppuVar37;
  undefined8 *******pppppppuVar38;
  undefined8 unaff_x28;
  ulong uVar39;
  undefined *******pppppppuVar40;
  undefined *******pppppppuStack_500;
  undefined1 auStack_4f8 [16];
  char acStack_4e8 [24];
  undefined8 *******pppppppuStack_4d0;
  undefined ********ppppppppuStack_4c8;
  undefined8 uStack_4c0;
  undefined8 *******pppppppuStack_4b8;
  undefined8 *******pppppppuStack_4b0;
  undefined8 *******pppppppuStack_4a8;
  undefined8 *******pppppppuStack_4a0;
  undefined ********ppppppppuStack_498;
  undefined8 *******pppppppuStack_490;
  undefined8 *******pppppppuStack_488;
  undefined8 *******pppppppuStack_480;
  undefined8 *******pppppppuStack_478;
  undefined ********ppppppppuStack_470;
  undefined ********ppppppppuStack_460;
  undefined ********ppppppppuStack_458;
  undefined ********ppppppppuStack_450;
  undefined ********ppppppppuStack_448;
  undefined ********ppppppppuStack_440;
  undefined ********ppppppppuStack_438;
  undefined ********ppppppppuStack_430;
  undefined ********ppppppppuStack_428;
  undefined ********ppppppppuStack_420;
  undefined ********ppppppppuStack_418;
  undefined1 ***pppuStack_410;
  code *pcStack_408;
  undefined ********ppppppppuStack_400;
  undefined ********ppppppppuStack_3f8;
  uint uStack_3ec;
  undefined ********ppppppppuStack_3e8;
  undefined ********ppppppppuStack_3e0;
  undefined ********ppppppppuStack_3d8;
  undefined ********ppppppppuStack_3d0;
  char cStack_3c1;
  undefined *******pppppppuStack_3c0;
  undefined ********appppppppuStack_3b8 [3];
  undefined ********ppppppppuStack_3a0;
  undefined ********ppppppppuStack_398;
  byte bStack_389;
  undefined ********ppppppppuStack_380;
  undefined *apuStack_378 [3];
  undefined1 auStack_360 [24];
  undefined *******pppppppuStack_348;
  undefined8 uStack_340;
  undefined ********appppppppuStack_330 [3];
  undefined *******pppppppuStack_318;
  undefined ********ppppppppuStack_310;
  undefined8 uStack_308;
  undefined ********ppppppppuStack_300;
  undefined ********ppppppppuStack_2f8;
  undefined *******pppppppuStack_2d8;
  byte bStack_2d0;
  byte bStack_2cf;
  undefined1 auStack_2c8 [8];
  undefined ********ppppppppuStack_2c0;
  undefined ********ppppppppuStack_2b8;
  byte bStack_2a9;
  undefined ********ppppppppuStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined ********ppppppppuStack_280;
  undefined ********ppppppppuStack_278;
  undefined ********ppppppppuStack_270;
  undefined ********ppppppppuStack_268;
  undefined ********ppppppppuStack_260;
  undefined ********ppppppppuStack_258;
  undefined ********ppppppppuStack_250;
  undefined ********ppppppppuStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  long lStack_230;
  long lStack_228;
  undefined *******apppppppuStack_220 [3];
  undefined *******apppppppuStack_208 [2];
  undefined *******apppppppuStack_1f8 [3];
  undefined *******apppppppuStack_1e0 [2];
  undefined *******pppppppuStack_1d0;
  long lStack_1c8;
  undefined ******appppppuStack_1c0 [3];
  undefined1 auStack_1a8 [24];
  undefined8 uStack_190;
  undefined8 uStack_188;
  char cStack_179;
  undefined *******pppppppuStack_178;
  undefined *******pppppppuStack_170;
  undefined1 uStack_168;
  undefined *******pppppppuStack_160;
  undefined ********ppppppppuStack_158;
  undefined *******pppppppuStack_148;
  undefined *******apppppppuStack_140 [2];
  undefined8 uStack_130;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_b8;
  undefined8 auStack_b0 [3];
  undefined *******apppppppuStack_98 [3];
  undefined *******apppppppuStack_80 [2];
  byte bStack_70;
  undefined *******pppppppuStack_68;
  byte bStack_60;
  undefined1 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c3a024();
  func_0x000107c39f9c();
  uStack_38 = extraout_x8;
  func_0x000107c30e64();
  func_0x000107c3a120();
  if ((bool)in_ZR) {
    uVar22 = 1;
    if (*(long *)(lStack_40 + 0x28) != 0) {
LAB_10b976640:
      *unaff_x19 = uVar22;
      unaff_x19[1] = lStack_40;
      uStack_48 = 0;
      goto LAB_10b976648;
    }
    bStack_60 = 1;
    pppppppuStack_68 = (undefined *******)&PTR_FUN_110d7e6e0;
    uStack_58 = 0;
    uStack_50 = 0;
    param_2 = *(undefined *********)(lStack_40 + 0x20);
    FUN_10b994080(apppppppuStack_98);
    if ((bStack_70 & 1) != 0) {
      param_2 = (undefined ********)(unaff_x20 + 0x28);
      param_3 = apppppppuStack_98;
      param_4 = apppppppuStack_80;
      param_5 = &pppppppuStack_68;
      FUN_10b9766a0(auStack_b0);
      lVar26 = lStack_40;
      bVar18 = bStack_60;
      if ((bStack_60 & 1) == 0) {
        func_0x00010b97f280();
        *unaff_x19 = 2;
        unaff_x19[1] = uStack_b8;
        uStack_b8 = 0;
        func_0x00010b97ea88();
      }
      else {
        *(undefined8 *)(lStack_40 + 0x28) = auStack_b0[0];
        func_0x000107c3a0ec(&uStack_b8);
        *(undefined8 *)(lVar26 + 0x30) = uStack_b8;
        func_0x000107c2792c();
      }
      func_0x00010b97ee5c();
      func_0x000108931eac();
      func_0x00010b97ee8c();
      uVar22 = uStack_48;
      if (bVar18 == 0) goto LAB_10b976648;
      goto LAB_10b976640;
    }
  }
  else {
    func_0x00010b97f2f0();
LAB_10b976648:
    func_0x00010b97ec68();
    func_0x000107c39f7c(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x0001080da3e4();
  func_0x00010b97ee5c();
  ppppppppuVar37 = apppppppuStack_98;
  func_0x000108931eac();
  func_0x00010b97ee8c();
  func_0x00010b97ec68();
  func_0x00010b97e910();
  pcStack_c8 = FUN_10b9766a0;
  ppppppppuVar10 = param_2;
  ppppppppuVar24 = param_5;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x000107c39f9c();
  ppppppppuVar25 = apppppppuStack_220;
  uStack_130 = extraout_x8_00;
  FUN_10b976a10();
  uVar7 = *(char *)(param_5 + 1) == '\x01';
  if (((bool)uVar7) && (param_2[0x16] != (undefined *******)0x0)) {
    unaff_x22 = apppppppuStack_1e0;
    unaff_x23 = apppppppuStack_140;
    unaff_x26 = apppppppuStack_208;
    unaff_x27 = 0x49;
    unaff_x28 = 0x38;
    lStack_228 = -1;
    lStack_230 = 1;
    unaff_x24 = (undefined **)0x1;
    do {
      if (param_2[0x16] == (undefined *******)0x0) break;
      func_0x00010b97f000();
      FUN_10b97ddf4(apppppppuStack_1f8,extraout_x8_01 + extraout_x9 * 0x38);
      func_0x00010b97f000();
      FUN_10b97df34(extraout_x8_02 + extraout_x9_00 * 0x38);
      pppppppuVar40 = (undefined *******)((long)param_2[0x15] + lStack_230);
      param_2[0x16] = (undefined *******)((long)param_2[0x16] + lStack_228);
      param_2[0x15] = pppppppuVar40;
      uVar7 = pppppppuVar40 == (undefined *******)0x92;
      if ((undefined *******)0x91 < pppppppuVar40) {
        __ZdlPv(*param_2[0x12]);
        param_2[0x12] = param_2[0x12] + 1;
        param_2[0x15] = (undefined *******)((long)param_2[0x15] + -0x49);
      }
      ppppppppuVar10 = unaff_x22;
      if ((*param_2 == (undefined *******)0x0) && (pppppppuStack_1d0 != (undefined *******)0x0)) {
        FUN_10b978c70(param_2 + 2,apppppppuStack_1f8);
        func_0x000107c3a098(param_2[2]);
        if (!(bool)uVar7) goto LAB_10b9767ac;
        pppppppuStack_170 = pppppppuStack_1d0 + 3;
        uStack_168 = 1;
        __ZNSt3__115recursive_mutex4lockEv();
        pppppppuStack_178 = pppppppuStack_1d0;
        cStack_179 = '\0';
        ppppppppuVar9 = &pppppppuStack_178;
        param_4 = (undefined ********)&cStack_179;
        param_3 = (undefined ********)0x1;
        ppppppppuVar25 = unaff_x22;
        FUN_10b994bf0(&pppppppuStack_148);
        uVar7 = pppppppuStack_148 == (undefined *******)0x1;
        if ((bool)uVar7) {
          uVar7 = cStack_179 == '\x01';
          ppppppppuVar10 = unaff_x23;
          ppppppppuVar9 = unaff_x25;
          if ((bool)uVar7) {
            param_3 = unaff_x23;
            FUN_10b994158(pppppppuStack_1d0,apppppppuStack_1f8);
          }
        }
        else {
          func_0x000107c31084();
          func_0x00010b98fa8c(appppppuStack_1c0,apppppppuStack_1f8);
          pppppppuVar40 = appppppuStack_1c0;
          func_0x000107c27e5c();
          pppppppuStack_160 = pppppppuVar40;
          ppppppppuStack_158 = ppppppppuVar25;
          func_0x000107c2793c(&UNK_10f7cd364);
          param_4 = &pppppppuStack_160;
          func_0x00010b97e9e4(auStack_1a8);
          func_0x000107c31080(&uStack_190,ppppppppuVar9,auStack_1a8);
          FUN_10b99fa14(&uStack_188,unaff_x23,&uStack_190);
          FUN_10b99ff08(param_5,&uStack_188);
          func_0x000104bda960(uStack_188);
          func_0x000107c278f8(uStack_190);
          func_0x00010b97edb8();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appppppuStack_1c0);
        }
        func_0x000107c30f3c(apppppppuStack_208);
        func_0x000107c2a668(&pppppppuStack_148);
        ppppppppuVar25 = &pppppppuStack_170;
        func_0x000107c2851c();
      }
      else {
LAB_10b9767ac:
        ppppppppuVar25 = apppppppuStack_208;
        func_0x000107c30f3c();
        ppppppppuVar9 = unaff_x25;
      }
      if (((ulong)param_5[1] & 1) == 0) {
        func_0x00010b97f0f0();
        func_0x00010b97f0e8();
        func_0x00010b97f22c();
        unaff_x25 = ppppppppuVar9;
        break;
      }
      param_3 = apppppppuStack_1f8;
      param_4 = apppppppuStack_208;
      ppppppppuVar10 = param_2;
      ppppppppuVar24 = param_5;
      FUN_10b976a10(&pppppppuStack_148);
      bVar18 = *(byte *)(param_5 + 1);
      unaff_x25 = (undefined ********)(ulong)bVar18;
      if ((bVar18 & 1) == 0) {
        func_0x00010b97f0f0();
      }
      else {
        *(undefined ********)(lStack_1c8 + 0x18) = pppppppuStack_148;
      }
      ppppppppuVar25 = &pppppppuStack_148;
      func_0x00010b97df98();
      func_0x00010b97f0e8();
      func_0x00010b97f22c();
    } while ((bVar18 & 1) != 0);
    if (((ulong)param_5[1] & 1) != 0) goto LAB_10b97692c;
    *ppppppppuVar37 = (undefined *******)0x0;
    ppppppppuVar37[1] = (undefined *******)0x0;
    ppppppppuVar37[2] = (undefined *******)0x0;
  }
  else {
LAB_10b97692c:
    ppppppppuVar10 = apppppppuStack_220;
    func_0x00010b97df6c();
    ppppppppuVar25 = ppppppppuVar37;
  }
  func_0x00010b97ee5c();
  func_0x000107c39f7c(uStack_130);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  ppppppppuVar37 = ppppppppuVar25;
  func_0x00010b97f0e8();
  func_0x00010b97f22c();
  func_0x00010b97ee5c();
  func_0x00010b97e910();
  pcStack_238 = FUN_10b976a10;
  ppppppppuVar9 = param_4;
  uStack_290 = unaff_x28;
  uStack_288 = unaff_x27;
  ppppppppuStack_280 = unaff_x26;
  ppppppppuStack_278 = unaff_x25;
  ppppppppuStack_270 = (undefined ********)unaff_x24;
  ppppppppuStack_268 = unaff_x23;
  ppppppppuStack_260 = unaff_x22;
  ppppppppuStack_258 = param_2;
  ppppppppuStack_250 = param_5;
  ppppppppuStack_248 = ppppppppuVar25;
  ppuStack_240 = &puStack_d0;
  func_0x000107c39f9c();
  uVar7 = *(char *)ppppppppuVar9 == '\x11';
  uStack_2a0 = extraout_x8_03;
  if ((bool)uVar7) {
    func_0x00010b990764(param_4);
    uVar17 = SUB81(ppppppppuVar9,0);
    func_0x00010b97f0b4(*(undefined1 *)((long)param_4 + 1),&ppppppppuStack_310);
    param_2 = ppppppppuStack_310;
    ppppppppuVar12 = ppppppppuStack_310;
    ppppppppuVar16 = param_4;
    FUN_10b9794f0(ppppppppuVar37);
    ppppppppuVar9 = param_2;
    FUN_10b972f3c();
    ppppppppuVar24 = unaff_x22;
    param_3 = unaff_x25;
    goto LAB_10b978254;
  }
  ppppppppuVar12 = param_3;
  ppppppppuVar16 = param_3;
  FUN_10b978c70(ppppppppuVar10 + 2);
  func_0x000107c3a098(ppppppppuVar10[2]);
  uVar17 = SUB81(ppppppppuVar9,0);
  if (!(bool)uVar7) {
    pppppppuVar40 = (undefined *******)0x0;
    if (ppppppppuVar12[3] != (undefined *******)0x0) {
      do {
        func_0x000107c39f98();
        uVar17 = SUB81(ppppppppuVar9,0);
        pppppppuVar40 = extraout_x8_04;
      } while (extraout_w11 != 0);
    }
    ppppppppuVar9 = ppppppppuVar37 + 1;
    *ppppppppuVar37 = pppppppuVar40;
    ppppppppuVar12 = ppppppppuVar12 + 4;
    func_0x000107c30f3c();
    goto LAB_10b978254;
  }
  cStack_3c1 = '\0';
  ppppppppuVar9 = (undefined ********)&cStack_3c1;
  ppppppppuVar16 = (undefined ********)0x1;
  ppppppppuVar8 = ppppppppuVar10;
  ppppppppuVar12 = param_4;
  FUN_10b994bf0(&pppppppuStack_2d8);
  uVar17 = SUB81(ppppppppuVar9,0);
  uVar7 = pppppppuStack_2d8 == (undefined *******)0x1;
  if (!(bool)uVar7) {
    func_0x000107c31084();
    ppppppppuVar25 = param_3;
    func_0x00010b98fa8c(&ppppppppuStack_380);
    func_0x00010b97ed14();
    ppppppppuStack_2c0 = ppppppppuVar25;
    ppppppppuStack_2b8 = ppppppppuVar12;
    func_0x000107c2793c(&UNK_10f7ccd74);
    func_0x00010b97e888();
    ppppppppuVar25 = &pppppppuStack_2d8;
    func_0x000107c31080(&ppppppppuStack_3a0,ppppppppuVar8,&ppppppppuStack_310);
    FUN_10b99fa14(appppppppuStack_330,&bStack_2d0,&ppppppppuStack_3a0);
    ppppppppuVar12 = (undefined ********)appppppppuStack_330;
    func_0x00010b97f23c();
    func_0x00010b97ef50();
    func_0x000107c278f8(ppppppppuStack_3a0);
    func_0x00010b97ea80();
    func_0x000107c3a014();
    *ppppppppuVar37 = (undefined *******)0x0;
    ppppppppuVar37[1] = (undefined *******)0x0;
    ppppppppuVar37[2] = (undefined *******)0x0;
    goto LAB_10b97824c;
  }
  if ((cStack_3c1 == '\x01') &&
     (ppppppppuVar8 = (undefined ********)*ppppppppuVar10, ppppppppuVar8 != (undefined ********)0x0)
     ) {
    ppppppppuVar16 = (undefined ********)&bStack_2d0;
    ppppppppuVar12 = param_3;
    FUN_10b994158();
  }
  uVar7 = bStack_2d0 == 0x11;
  if ((bool)uVar7) {
    ppppppppuVar16 = (undefined ********)&bStack_2d0;
    func_0x00010b990764();
    func_0x00010b97f0b4(bStack_2cf,&ppppppppuStack_3d0);
    goto LAB_10b9780d0;
  }
  uVar7 = bStack_2d0 == 1;
  if ((bool)uVar7) {
    ppppppppuVar25 = (undefined ********)ppppppppuVar10[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppppuVar25 != (undefined ********)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_00 != 0);
    }
    ppppppppuVar8[2] = (undefined *******)ppppppppuVar25;
    *ppppppppuVar8 = (undefined *******)&PTR_FUN_110d7bdb8;
    do {
      func_0x000107c39fa4();
      ppppppppuStack_3d0 = ppppppppuVar8;
    } while (extraout_w10 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_05,0x10);
      if (bVar2) {
        *extraout_x8_05 = extraout_x9_01;
        cVar6 = ExclusiveMonitorsStatus();
      }
      ppuVar32 = unaff_x24;
    } while (cVar6 != '\0');
    goto code_r0x00010b976b7c;
  }
  if ((bStack_2cf & 1) != 0) {
    FUN_10b9907d0(&ppppppppuStack_2c0,param_3);
    ppppppppuVar12 = (undefined ********)&ppppppppuStack_2c0;
    func_0x000107c31030(&ppppppppuStack_380);
    FUN_10b9907d0(appppppppuStack_330,&bStack_2d0);
    param_2 = (undefined ********)&ppppppppuStack_380;
    ppppppppuVar25 = (undefined ********)appppppppuStack_330;
    ppppppppuVar8 = (undefined ********)&ppppppppuStack_310;
    ppppppppuVar16 = (undefined ********)&ppppppppuStack_380;
    ppppppppuVar9 = (undefined ********)appppppppuStack_330;
    func_0x00010b97e768();
    func_0x000107c3a064();
    func_0x000107c3a044();
    func_0x00010b97e958(&ppppppppuStack_2c0);
    if (((ulong)ppppppppuVar24[1] & 1) == 0) {
      ppppppppuStack_3d0 = (undefined ********)0x0;
    }
    else {
      ppppppppuVar25 = (undefined ********)ppppppppuVar10[1];
      func_0x00010b97ed54();
      func_0x00010b97e654();
      if (ppppppppuVar25 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_02 != 0);
      }
      ppppppppuVar8[2] = (undefined *******)ppppppppuVar25;
      *ppppppppuVar8 = (undefined *******)&PTR_DAT_110d7be20;
      pppppppuVar40 = (undefined *******)0x0;
      if (ppppppppuStack_310 != (undefined ********)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppppuVar40 = extraout_x9_03;
        } while (extraout_w12 != 0);
      }
      ppppppppuVar8[3] = pppppppuVar40;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_3d0 = ppppppppuVar8;
      } while (extraout_w10_01 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_07,0x10);
        if (bVar2) {
          *extraout_x8_07 = extraout_x9_04;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((bool)uVar7) {
        func_0x00010b97e808();
      }
    }
    func_0x00010b97edb0();
    goto LAB_10b9780d0;
  }
  uVar19 = (uint)bStack_2d0;
  cVar5 = SBORROW4(uVar19,0x16);
  cVar6 = (int)(uVar19 - 0x16) < 0;
  uVar7 = uVar19 == 0x16;
  ppppppppuVar30 = (undefined ********)&UNK_1003ab990;
  param_4 = (undefined ********)&UNK_1003ab990;
  unaff_x24 = &PTR_DAT_110d7c230;
  ppuVar32 = &PTR_DAT_110d7c230;
  switch(bStack_2d0) {
  case 0:
    ppppppppuVar25 = (undefined ********)ppppppppuVar10[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppppuVar25 != (undefined ********)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_01 != 0);
    }
    ppppppppuVar8[2] = (undefined *******)ppppppppuVar25;
    *ppppppppuVar8 = (undefined *******)&PTR_DAT_110d7c1c8;
    do {
      func_0x000107c39fa4();
      ppppppppuStack_3d0 = ppppppppuVar8;
    } while (extraout_w10_00 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_06,0x10);
      if (bVar2) {
        *extraout_x8_06 = extraout_x9_02;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    break;
  default:
    func_0x000107c31084();
    ppppppppuVar30 = ppppppppuVar8;
    func_0x00010b97f16c();
    func_0x00010b97ed14();
    ppppppppuStack_2c0 = ppppppppuVar30;
    ppppppppuStack_2b8 = ppppppppuVar12;
    func_0x000107c2793c(&UNK_10f7ccdcd);
    func_0x00010b97e888();
    func_0x000107c3a0f0(&ppppppppuStack_2c0);
    FUN_10b99f560(appppppppuStack_330,&ppppppppuStack_2c0);
    ppppppppuVar12 = (undefined ********)appppppppuStack_330;
    func_0x00010b97f23c();
    func_0x00010b97ef50();
    func_0x00010b97f20c();
    func_0x00010b97ea80();
    func_0x000107c3a014();
    ppppppppuStack_3d0 = (undefined ********)0x0;
    param_4 = ppppppppuVar8;
    goto LAB_10b9780d0;
  case 2:
    param_4 = (undefined ********)ppppppppuVar10[1];
    if ((bStack_2cf >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_07 != 0);
      }
      ppppppppuVar8[2] = (undefined *******)param_4;
      *ppppppppuVar8 = (undefined *******)&PTR_FUN_110d7bfc0;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_3d0 = ppppppppuVar8;
      } while (extraout_w10_06 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_12,0x10);
        if (bVar2) {
          *extraout_x8_12 = extraout_x9_13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_17 != 0);
      }
      ppppppppuVar8[2] = (undefined *******)param_4;
      *ppppppppuVar8 = (undefined *******)&PTR_DAT_110d7bf58;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_3d0 = ppppppppuVar8;
      } while (extraout_w10_19 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_23,0x10);
        if (bVar2) {
          *extraout_x8_23 = extraout_x9_27;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    break;
  case 3:
    param_4 = (undefined ********)ppppppppuVar10[1];
    if ((bStack_2cf >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_11 != 0);
      }
      ppppppppuVar8[2] = (undefined *******)param_4;
      *ppppppppuVar8 = (undefined *******)&PTR_FUN_110d7c090;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_3d0 = ppppppppuVar8;
      } while (extraout_w10_10 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_16,0x10);
        if (bVar2) {
          *extraout_x8_16 = extraout_x9_19;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_19 != 0);
      }
      ppppppppuVar8[2] = (undefined *******)param_4;
      *ppppppppuVar8 = (undefined *******)&PTR_DAT_110d7c028;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_3d0 = ppppppppuVar8;
      } while (extraout_w10_21 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_25,0x10);
        if (bVar2) {
          *extraout_x8_25 = extraout_x9_29;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    break;
  case 4:
    param_4 = (undefined ********)ppppppppuVar10[1];
    if ((bStack_2cf >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_10 != 0);
      }
      ppppppppuVar8[2] = (undefined *******)param_4;
      *ppppppppuVar8 = (undefined *******)&PTR_FUN_110d7c160;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_3d0 = ppppppppuVar8;
      } while (extraout_w10_09 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_15,0x10);
        if (bVar2) {
          *extraout_x8_15 = extraout_x9_18;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_18 != 0);
      }
      ppppppppuVar8[2] = (undefined *******)param_4;
      *ppppppppuVar8 = (undefined *******)&PTR_DAT_110d7c0f8;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_3d0 = ppppppppuVar8;
      } while (extraout_w10_20 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_24,0x10);
        if (bVar2) {
          *extraout_x8_24 = extraout_x9_28;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    break;
  case 5:
    param_4 = (undefined ********)ppppppppuVar10[1];
    if ((bStack_2cf >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_05 != 0);
      }
      ppppppppuVar8[2] = (undefined *******)param_4;
      *ppppppppuVar8 = (undefined *******)&PTR_FUN_110d7bef0;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_3d0 = ppppppppuVar8;
      } while (extraout_w10_04 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_10,0x10);
        if (bVar2) {
          *extraout_x8_10 = extraout_x9_10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_16 != 0);
      }
      ppppppppuVar8[2] = (undefined *******)param_4;
      *ppppppppuVar8 = (undefined *******)&PTR_FUN_110d7be88;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_3d0 = ppppppppuVar8;
      } while (extraout_w10_18 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_22,0x10);
        if (bVar2) {
          *extraout_x8_22 = extraout_x9_26;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    break;
  case 6:
    ppppppppuVar25 = (undefined ********)ppppppppuVar10[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppppuVar25 != (undefined ********)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_08 != 0);
    }
    ppppppppuVar8[2] = (undefined *******)ppppppppuVar25;
    *ppppppppuVar8 = (undefined *******)&PTR_DAT_110d7c230;
    do {
      func_0x000107c39fa4();
      ppppppppuStack_3d0 = ppppppppuVar8;
    } while (extraout_w10_07 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_13,0x10);
      if (bVar2) {
        *extraout_x8_13 = extraout_x9_14;
        cVar6 = ExclusiveMonitorsStatus();
      }
      ppuVar32 = unaff_x24;
    } while (cVar6 != '\0');
    break;
  case 7:
    ppppppppuVar25 = (undefined ********)ppppppppuVar10[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppppuVar25 != (undefined ********)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_12 != 0);
    }
    ppppppppuVar8[2] = (undefined *******)ppppppppuVar25;
    *ppppppppuVar8 = (undefined *******)&PTR_DAT_110d7c298;
    do {
      func_0x000107c39fa4();
      ppppppppuStack_3d0 = ppppppppuVar8;
    } while (extraout_w10_11 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_17,0x10);
      if (bVar2) {
        *extraout_x8_17 = extraout_x9_20;
        cVar6 = ExclusiveMonitorsStatus();
      }
      param_4 = ppppppppuVar30;
      ppuVar32 = unaff_x24;
    } while (cVar6 != '\0');
    break;
  case 0xb:
    func_0x000107c3a0ec(&ppppppppuStack_2c0);
    func_0x00010b97ef58();
    ppppppppuVar25 = ppppppppuStack_2c0;
    ppppppppuVar8 = appppppppuStack_330[0];
    if (((ulong)ppppppppuVar24[1] & 1) == 0) {
      ppppppppuStack_380 = ppppppppuStack_2c0 + 2;
      apuStack_378[0] = &UNK_1003ab990;
      func_0x000107c2793c(&UNK_10f7cd021);
      ppppppppuVar25 = (undefined ********)&ppppppppuStack_310;
      ppppppppuVar9 = (undefined ********)&ppppppppuStack_380;
      func_0x000107c3a054(&ppppppppuStack_310);
      func_0x00010b97ead0();
      ppppppppuVar16 = extraout_x11;
      if (cVar6 == cVar5) {
        ppppppppuVar16 = extraout_x8_26;
      }
      func_0x00010b97ec70();
      func_0x00010b97ea80();
      ppppppppuStack_3d0 = (undefined ********)0x0;
      param_4 = ppppppppuVar30;
    }
    else {
      uStack_3ec = (uint)*(byte *)(ppppppppuStack_2c0 + 3);
      appppppppuStack_330[0] = (undefined ********)0x0;
      pppppppuVar40 = ppppppppuVar10[1];
      ppppppppuVar16 = (undefined ********)((long)ppppppppuStack_2c0[4] * 8 + 0x28);
      __Znwm();
      param_4 = ppppppppuVar16 + 1;
      *param_4 = (undefined *******)0x1;
      func_0x00010b97eae8();
      param_2 = ppppppppuVar25;
      if (pppppppuVar40 != (undefined *******)0x0) {
        do {
          func_0x000107c39fa4();
          param_2 = ppppppppuStack_2c0;
        } while (extraout_w10_12 != 0);
      }
      ppppppppuVar16[2] = pppppppuVar40;
      *ppppppppuVar16 = (undefined *******)&PTR_FUN_110d7c4f0;
      do {
        func_0x000107c39fa4();
      } while (extraout_w10_13 != 0);
      ppppppppuVar16[3] = (undefined *******)param_2;
      ppppppppuVar16[4] = (undefined *******)ppppppppuVar8;
      pppppppuVar36 = ppppppppuStack_2c0[4];
      ppppppppuStack_3e8 = ppppppppuVar16 + 5;
      for (pppppppuVar40 = (undefined *******)0x0; pppppppuVar36 != pppppppuVar40;
          pppppppuVar40 = (undefined *******)((long)pppppppuVar40 + 1)) {
        ppppppppuVar16[(long)((long)pppppppuVar40 + 5)] = (undefined *******)0x0;
      }
      ppppppppuStack_3f8 = ppppppppuStack_3d0;
      ppppppppuVar25 = (undefined ********)(ulong)uStack_3ec;
      ppppppppuStack_400 = ppppppppuVar16;
      ppppppppuStack_3e0 = ppppppppuVar37;
      ppppppppuStack_3d8 = param_3;
      for (pppppppuVar40 = (undefined *******)0x0; ppppppppuVar37 = ppppppppuStack_2c0,
          ppppppppuVar16 = ppppppppuStack_2c0, pppppppuVar40 < pppppppuVar36;
          pppppppuVar40 = (undefined *******)((long)pppppppuVar40 + 1)) {
        ppppppppuVar9 = ppppppppuStack_2c0 + (long)pppppppuVar40 * 3 + 5;
        func_0x00010b97f0c0(&ppppppppuStack_380);
        if (((ulong)ppppppppuVar24[1] & 1) == 0) {
          ppppppppuStack_3d0 = (undefined ********)0x0;
code_r0x00010b977b38:
          func_0x00010b97f158();
          unaff_x24 = (undefined **)ppppppppuVar8;
          goto code_r0x00010b977b44;
        }
        ppppppppuVar8 = ppppppppuStack_3e8 + (long)pppppppuVar40;
        if (((int)ppppppppuVar25 != 0) &&
           (pppppppuVar36 = ppppppppuVar10[0x1a], pppppppuVar36 != (undefined *******)0x0)) {
          (*(code *)(*pppppppuVar36)[2])
                    (&ppppppppuStack_310,pppppppuVar36,ppppppppuVar37 + (long)pppppppuVar40 * 3 + 6)
          ;
          ppppppppuVar30 = (undefined ********)&ppppppppuStack_310;
          ppppppppuVar12 = ppppppppuVar37 + (long)pppppppuVar40 * 3 + 6;
          FUN_10b990e08();
          if ((int)ppppppppuVar30 != 0) {
            param_2 = (undefined ********)&ppppppppuStack_310;
            pppppppuVar36 = ppppppppuVar10[1];
            func_0x00010b97f234();
            ppppppppuVar25 = ppppppppuVar30 + 1;
            *ppppppppuVar25 = (undefined *******)0x1;
            func_0x00010b97eae8();
            if (pppppppuVar36 != (undefined *******)0x0) {
              do {
                func_0x000107c39fa4();
              } while (extraout_w10_22 != 0);
            }
            ppppppppuVar30[2] = pppppppuVar36;
            *ppppppppuVar30 = (undefined *******)&PTR_DAT_110d7c558;
            unaff_x26 = ppppppppuVar30 + 3;
            *unaff_x26 = (undefined *******)0x0;
            ppppppppuVar30[4] = (undefined *******)0x0;
            ppppppppuVar9 = ppppppppuVar37 + (long)pppppppuVar40 * 3 + 5;
            ppppppppuVar16 = ppppppppuStack_2c0;
            func_0x00010b97f0c0(&ppppppppuStack_3a0);
            pppppppuVar36 = ppppppppuVar24[1];
            if (((ulong)pppppppuVar36 & 1) == 0) {
              ppppppppuStack_3f8 = (undefined ********)0x0;
            }
            else {
              FUN_10b972a1c(unaff_x26,&ppppppppuStack_380);
              FUN_10b972a1c(ppppppppuVar30 + 4,&ppppppppuStack_3a0);
              do {
                cVar6 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar25,0x10);
                if (bVar2) {
                  *ppppppppuVar25 = (undefined *******)((long)*ppppppppuVar25 + 1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              ppppppppuVar12 = (undefined ********)appppppppuStack_3b8;
              appppppppuStack_3b8[0] = ppppppppuVar30;
              FUN_10b979edc(ppppppppuVar8);
              FUN_10b972f3c(appppppppuStack_3b8[0]);
            }
            func_0x00010b97f0e0();
            do {
              pppppppuVar27 = *ppppppppuVar25;
              cVar6 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar25,0x10);
              if (bVar2) {
                *ppppppppuVar25 = (undefined *******)((long)pppppppuVar27 + -1);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((undefined *******)((long)pppppppuVar27 + -1) == (undefined *******)0x0) {
              func_0x00010b97ee6c();
            }
            ppppppppuVar25 = (undefined ********)(ulong)uStack_3ec;
            if (((ulong)pppppppuVar36 & 1) == 0) {
              ppppppppuStack_3d0 = ppppppppuStack_3f8;
              func_0x000107c27900(&uStack_308);
              goto code_r0x00010b977b38;
            }
          }
          func_0x000107c27900(&uStack_308);
        }
        if (*ppppppppuVar8 == (undefined *******)0x0) {
          pppppppuVar36 = (undefined *******)0x0;
          if (ppppppppuStack_380 != (undefined ********)0x0) {
            do {
              func_0x000107c39f98();
              pppppppuVar36 = extraout_x8_29;
            } while (extraout_w11_20 != 0);
          }
          ppppppppuVar12 = (undefined ********)&uStack_340;
          uStack_340 = pppppppuVar36;
          FUN_10b979edc(ppppppppuVar8);
          FUN_10b972f3c(uStack_340);
        }
        func_0x00010b97f158();
        pppppppuVar36 = ppppppppuStack_2c0[4];
      }
      ppppppppuStack_3d0 = ppppppppuStack_3f8;
      do {
        func_0x00010b97ef98();
      } while (extraout_w9 != 0);
      ppppppppuStack_3d0 = ppppppppuStack_400;
      unaff_x24 = (undefined **)ppppppppuVar8;
code_r0x00010b977b44:
      do {
        param_3 = ppppppppuStack_3d8;
        ppppppppuVar37 = ppppppppuStack_3e0;
        uVar7 = (undefined *******)((long)*param_4 + -1) == (undefined *******)0x0;
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_4,0x10);
        if (bVar2) {
          *param_4 = (undefined *******)((long)*param_4 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((bool)uVar7) {
        func_0x00010b97e808(ppppppppuStack_400);
      }
    }
    FUN_10b97bc6c(appppppppuStack_330[0]);
    func_0x000107c2792c(ppppppppuStack_2c0);
    goto LAB_10b9780d0;
  case 0xc:
    func_0x00010b990904(&ppppppppuStack_2c0,auStack_2c8);
    ppppppppuVar8 = (undefined ********)ppppppppuVar10[1];
    func_0x00010b97ef58();
    if (((ulong)ppppppppuVar24[1] & 1) == 0) {
      ppppppppuStack_380 = ppppppppuStack_2c0 + 2;
      apuStack_378[0] = &UNK_1003ab990;
      func_0x000107c2793c(&UNK_10f7cd30b);
      ppppppppuVar25 = (undefined ********)&ppppppppuStack_310;
      ppppppppuVar9 = (undefined ********)&ppppppppuStack_380;
      func_0x000107c3a054(&ppppppppuStack_310);
      func_0x00010b97ead0();
      ppppppppuVar16 = extraout_x11_01;
      if (cVar6 == cVar5) {
        ppppppppuVar16 = extraout_x8_28;
      }
      func_0x00010b97ec70();
      func_0x00010b97ea80();
      ppppppppuStack_3d0 = (undefined ********)0x0;
    }
    else {
      param_2 = (undefined ********)(ulong)bStack_2cf;
      ppppppppuVar25 = (undefined ********)ppppppppuVar10[1];
      func_0x00010b97ee54();
      ppppppppuVar30 = appppppppuStack_330[0];
      appppppppuStack_330[0] = (undefined ********)0x0;
      ppppppppuVar8[1] = (undefined *******)0x1;
      *ppppppppuVar8 = (undefined *******)&PTR_DAT_110d7bd68;
      if (ppppppppuVar25 != (undefined ********)0x0) {
        do {
          func_0x00010b97e7d0();
          ppppppppuVar30 = extraout_x9_23;
        } while (extraout_w12_07 != 0);
      }
      ppppppppuVar8[2] = (undefined *******)ppppppppuVar25;
      *ppppppppuVar8 = (undefined *******)&PTR_FUN_110d7c9c8;
      if (ppppppppuStack_2c0 != (undefined ********)0x0) {
        ppppppppuVar33 = ppppppppuStack_2c0 + 1;
        do {
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar33,0x10);
          if (bVar2) {
            *ppppppppuVar33 = (undefined *******)((long)*ppppppppuVar33 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      ppppppppuVar8[3] = (undefined *******)ppppppppuStack_2c0;
      ppppppppuVar8[4] = (undefined *******)ppppppppuVar30;
      *(byte *)(ppppppppuVar8 + 5) = bStack_2cf >> 1 & 1;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_3d0 = ppppppppuVar8;
      } while (extraout_w10_15 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_20,0x10);
        if (bVar2) {
          *extraout_x8_20 = extraout_x9_24;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((bool)uVar7) {
        func_0x00010b97e808();
      }
    }
    func_0x00010b9762a0(appppppppuStack_330[0]);
    FUN_10b90558c(ppppppppuStack_2c0);
    unaff_x24 = ppuVar32;
    goto LAB_10b9780d0;
  case 0xd:
    FUN_10b9908c0(&pppppppuStack_318,auStack_2c8);
    ppppppppuVar16 = (undefined ********)appppppppuStack_330;
    func_0x00010b97e78c();
    if (((ulong)ppppppppuVar24[1] & 1) == 0) {
      func_0x00010b97f16c();
      func_0x00010b97ed14();
      ppppppppuStack_2c0 = ppppppppuVar16;
      ppppppppuStack_2b8 = ppppppppuVar12;
      func_0x00010b97f1b8();
      ppppppppuVar25 = (undefined ********)&ppppppppuStack_310;
      func_0x00010b97e888();
      func_0x00010b97ead0();
      ppppppppuVar16 = extraout_x11_00;
      if (cVar6 == cVar5) {
        ppppppppuVar16 = extraout_x8_27;
      }
      func_0x00010b97ec70();
      func_0x00010b97ea80();
      func_0x000107c3a014();
      ppppppppuStack_3d0 = (undefined ********)0x0;
    }
    else {
      ppppppppuVar12 = (undefined ********)(pppppppuStack_318 + 3);
      func_0x000107c30f3c(&uStack_340);
      uVar19 = (uint)bRam00000001133fad7c;
      cVar5 = SBORROW4(uVar19,1);
      cVar6 = (int)(uVar19 - 1) < 0;
      uVar7 = uVar19 == 1;
      if ((bool)uVar7) {
        uVar19 = (uint)(byte)uStack_340;
        cVar6 = false;
        uVar7 = true;
        if (uVar19 != 0x10) {
          cVar6 = (int)((byte)uStack_340 - 1) < 0;
          uVar7 = (byte)uStack_340 == 1;
        }
        cVar5 = uVar19 != 0x10 && SBORROW4(uVar19,1);
        if (((bool)uVar7) ||
           (pppppppuStack_348 = (undefined *******)0x0,
           (*(byte *)((long)pppppppuStack_318 + 0x12) & 1) != 0)) goto code_r0x00010b977478;
        bVar18 = uStack_340._1_1_;
        pppppppuVar27 = *ppppppppuVar10;
        ppppppppuStack_380 = ppppppppuVar10;
        func_0x000107c30df0(apuStack_378,appppppppuStack_330);
        func_0x000107c30f3c(auStack_360,&uStack_340);
        ppppppppuVar25 = (undefined ********)0x58;
        __Znwm();
        FUN_10b979f14(&ppppppppuStack_310,&ppppppppuStack_380);
        ppppppppuVar9 = (undefined ********)0x38;
        __Znwm();
        *ppppppppuVar9 = (undefined *******)&PTR_FUN_110d7c300;
        FUN_10b979f14(ppppppppuVar9 + 1,&ppppppppuStack_310);
        bVar18 = bVar18 & 1;
        pppppppuVar36 = ppppppppuVar10[1];
        ppppppppuVar16 = ppppppppuVar25 + 1;
        *ppppppppuVar16 = (undefined *******)0x1;
        *ppppppppuVar25 = (undefined *******)&PTR_DAT_110d7bd68;
        pppppppuVar40 = (undefined *******)0x0;
        ppppppppuStack_2a8 = ppppppppuVar9;
        if (pppppppuVar36 != (undefined *******)0x0) {
          do {
            func_0x00010b97e7d0();
            pppppppuVar40 = extraout_x9_30;
            bVar18 = extraout_w8;
          } while (extraout_w12_08 != 0);
        }
        ppppppppuVar25[2] = pppppppuVar40;
        *ppppppppuVar25 = (undefined *******)&PTR_FUN_110d7c390;
        *(byte *)(ppppppppuVar25 + 3) = bVar18;
        ppppppppuVar25[4] = pppppppuVar27;
        if (ppppppppuStack_2a8 == (undefined ********)0x0) {
          ppppppppuVar25[8] = (undefined *******)0x0;
        }
        else {
          uVar7 = (undefined *********)ppppppppuStack_2a8 == &ppppppppuStack_2c0;
          if ((bool)uVar7) {
            ppppppppuVar25[8] = (undefined *******)(ppppppppuVar25 + 5);
            (*(code *)(*ppppppppuStack_2a8)[3])(ppppppppuStack_2a8);
          }
          else {
            ppppppppuVar25[8] = (undefined *******)ppppppppuStack_2a8;
            ppppppppuStack_2a8 = (undefined ********)0x0;
          }
        }
        ppppppppuVar25[9] = (undefined *******)0x0;
        ppppppppuVar25[10] = (undefined *******)0x0;
        func_0x00010b97a43c(&ppppppppuStack_2c0);
        func_0x00010b97a478(&ppppppppuStack_310);
        do {
          func_0x000107c3a00c();
        } while (extraout_w9_01 != 0);
        ppppppppuVar12 = (undefined ********)&ppppppppuStack_3a0;
        ppppppppuStack_3a0 = ppppppppuVar25;
        FUN_10b979edc(&pppppppuStack_348);
        func_0x00010b97f0e0();
        do {
          func_0x000107c3a0a0();
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar16,0x10);
          if (bVar2) {
            *ppppppppuVar16 = extraout_x8_38;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((bool)uVar7) {
          func_0x00010b97e8d8();
        }
        func_0x00010b97a478(&ppppppppuStack_380);
code_r0x00010b977abc:
        pppppppuVar40 = pppppppuStack_348;
        param_2 = &pppppppuStack_2d8;
        cVar6 = *(char *)(pppppppuStack_318 + 3);
        uVar19 = 0;
        if (cVar6 != '\x01') {
          uVar19 = 9;
        }
        uVar1 = 2;
        if (cVar6 != '\x10') {
          uVar1 = uVar19;
        }
        ppppppppuVar25 = (undefined ********)(ulong)uVar1;
        ppppppppuStack_3e0 = ppppppppuVar37;
        ppppppppuStack_3d8 = param_3;
        if (pppppppuStack_348 != (undefined *******)0x0) {
          do {
            func_0x000107c39fa4();
          } while (extraout_w10_23 != 0);
        }
        pppppppuVar36 = (undefined *******)pppppppuStack_318[5];
        if ((cVar6 == '\x10') || (*(char *)((long)pppppppuStack_318 + 0x12) == '\x01')) {
          pppppppuVar27 = ppppppppuVar10[0x17];
          if ((pppppppuVar27 != (undefined *******)0x0) &&
             (pppppppuVar27[2] != (undefined ******)0x0)) {
            do {
              func_0x000107c39fdc();
            } while (extraout_w10_24 != 0);
          }
        }
        else {
          pppppppuVar27 = (undefined *******)0x0;
        }
        ppppppppuVar30 = (undefined ********)((long)pppppppuVar36 * 8 + 0x40);
        __Znwm();
        unaff_x26 = ppppppppuVar30 + 1;
        *unaff_x26 = (undefined *******)0x1;
        *ppppppppuVar30 = (undefined *******)&PTR_FUN_110d7c3f8;
        ppppppppuVar30[2] = pppppppuVar40;
        ppppppppuVar30[3] = pppppppuVar36;
        *(char *)(ppppppppuVar30 + 4) = (char)uVar1;
        *(bool *)((long)ppppppppuVar30 + 0x21) = cVar6 == '\x10';
        if ((pppppppuVar27 != (undefined *******)0x0) && (pppppppuVar27[2] != (undefined ******)0x0)
           ) {
          do {
            func_0x000107c39fdc();
          } while (extraout_w10_25 != 0);
        }
        ppppppppuVar30[5] = pppppppuVar27;
        pppppppuVar40 = (undefined *******)0x0;
        if (ppppppppuVar10[0x18] != (undefined *******)0x0) {
          do {
            func_0x000107c3a010();
            pppppppuVar40 = extraout_x8_31;
          } while (extraout_w11_21 != 0);
        }
        ppppppppuVar30[6] = pppppppuVar40;
        pppppppuVar40 = (undefined *******)0x0;
        if (ppppppppuVar10[0x19] != (undefined *******)0x0) {
          do {
            func_0x000107c3a010();
            pppppppuVar40 = extraout_x8_32;
          } while (extraout_w11_22 != 0);
        }
        ppppppppuVar30[7] = pppppppuVar40;
        lVar26 = 0x40;
        for (; pppppppuVar36 != (undefined *******)0x0;
            pppppppuVar36 = (undefined *******)((long)pppppppuVar36 + -1)) {
          *(undefined8 *)((long)ppppppppuVar30 + lVar26) = 0;
          lVar26 = lVar26 + 8;
        }
        func_0x000107c2ab10(pppppppuVar27);
        unaff_x24 = (undefined **)ppppppppuStack_3d0;
        for (ppppppppuVar8 = (undefined ********)0x0;
            uVar7 = ppppppppuVar8 == (undefined ********)pppppppuStack_318[5],
            ppppppppuVar8 < pppppppuStack_318[5];
            ppppppppuVar8 = (undefined ********)((long)ppppppppuVar8 + 1)) {
          ppppppppuVar25 = (undefined ********)(pppppppuStack_318 + (long)ppppppppuVar8 * 2);
          func_0x00010b97e78c(&ppppppppuStack_380);
          if (((ulong)ppppppppuVar24[1] & 1) == 0) {
            func_0x00010b97f150(&ppppppppuStack_3a0);
            ppppppppuVar37 = (undefined ********)&ppppppppuStack_3a0;
            func_0x000107c27e5c();
            uStack_308 = 0;
            ppppppppuStack_310 = ppppppppuVar8;
            ppppppppuStack_300 = ppppppppuVar37;
            ppppppppuStack_2f8 = ppppppppuVar12;
            func_0x00010b97f134();
            ppppppppuVar25 = (undefined ********)&ppppppppuStack_2c0;
            ppppppppuVar9 = (undefined ********)&ppppppppuStack_310;
            func_0x00010b97f124(&ppppppppuStack_2c0);
            uVar7 = bStack_2a9 == 0;
            ppppppppuVar16 = ppppppppuStack_2b8;
            ppppppppuVar12 = ppppppppuStack_2c0;
            if (-1 < (char)bStack_2a9) {
              ppppppppuVar16 = (undefined ********)(ulong)bStack_2a9;
              ppppppppuVar12 = ppppppppuVar25;
            }
            func_0x00010b97ec70();
            func_0x00010b97eef0();
            func_0x00010b97ebf4();
            ppppppppuStack_3d0 = (undefined ********)0x0;
            func_0x00010b97e918();
            param_3 = ppppppppuStack_3d8;
            ppppppppuVar37 = ppppppppuStack_3e0;
            ppppppppuVar33 = ppppppppuStack_3d0;
            goto code_r0x00010b977fc8;
          }
          ppppppppuVar16 = (undefined ********)&ppppppppuStack_380;
          ppppppppuVar9 = ppppppppuVar25 + 6;
          func_0x00010b97e768(&ppppppppuStack_2c0);
          bVar18 = *(byte *)(ppppppppuVar24 + 1);
          if ((bVar18 & 1) == 0) {
            func_0x00010b97f150(appppppppuStack_3b8);
            ppppppppuVar37 = (undefined ********)appppppppuStack_3b8;
            func_0x000107c27e5c();
            uStack_308 = 0;
            ppppppppuStack_310 = ppppppppuVar8;
            ppppppppuStack_300 = ppppppppuVar37;
            ppppppppuStack_2f8 = ppppppppuVar12;
            func_0x00010b97f134();
            ppppppppuVar9 = (undefined ********)&ppppppppuStack_310;
            func_0x00010b97f124(&ppppppppuStack_3a0);
            uVar7 = bStack_389 == 0;
            ppppppppuVar16 = ppppppppuStack_398;
            ppppppppuVar12 = ppppppppuStack_3a0;
            if (-1 < (char)bStack_389) {
              ppppppppuVar16 = (undefined ********)(ulong)bStack_389;
              ppppppppuVar12 = (undefined ********)&ppppppppuStack_3a0;
            }
            func_0x00010b97ec70();
            func_0x00010b97ebf4();
            func_0x00010b97ee7c();
            unaff_x24 = (undefined **)0x0;
          }
          else {
            pppppppuVar40 = (undefined *******)0x0;
            if (ppppppppuStack_2c0 != (undefined ********)0x0) {
              do {
                func_0x000107c39f98();
                pppppppuVar40 = extraout_x8_33;
              } while (extraout_w11_23 != 0);
            }
            ppppppppuVar12 = &pppppppuStack_3c0;
            pppppppuStack_3c0 = pppppppuVar40;
            FUN_10b979edc(ppppppppuVar30 + (long)(ppppppppuVar8 + 1));
            FUN_10b972f3c(pppppppuStack_3c0);
          }
          func_0x00010b97eee8();
          func_0x00010b97e918();
          param_3 = ppppppppuStack_3d8;
          ppppppppuVar37 = ppppppppuStack_3e0;
          ppppppppuVar33 = (undefined ********)unaff_x24;
          if (bVar18 == 0) goto code_r0x00010b977fc8;
        }
        pppppppuVar40 = ppppppppuVar10[1];
        ppppppppuStack_3e8 = ppppppppuVar10;
        ppppppppuStack_3d0 = (undefined ********)unaff_x24;
        do {
          func_0x000107c3a00c();
        } while (extraout_w9_00 != 0);
        ppppppppuVar12 = (undefined ********)&ppppppppuStack_310;
        ppppppppuVar16 = &pppppppuStack_318;
        ppppppppuVar9 = ppppppppuVar24;
        ppppppppuStack_310 = ppppppppuVar30;
        (*(code *)(*pppppppuVar40)[0x24])(&ppppppppuStack_3a0);
        ppppppppuVar37 = ppppppppuStack_310;
        FUN_10b97ad80();
        unaff_x24 = (undefined **)ppppppppuStack_3a0;
        uVar7 = *(char *)(ppppppppuVar24 + 1) != '\x01' ||
                ppppppppuStack_3a0 == (undefined ********)0x0;
        if (*(char *)(ppppppppuVar24 + 1) != '\x01' || ppppppppuStack_3a0 == (undefined ********)0x0
           ) {
          func_0x000107c31084();
          ppppppppuVar10 = ppppppppuVar37;
          func_0x00010b97f150(&ppppppppuStack_380);
          func_0x00010b97ed14();
          ppppppppuStack_2c0 = ppppppppuVar10;
          ppppppppuStack_2b8 = ppppppppuVar12;
          func_0x000107c2793c(&UNK_10f7cce43);
          func_0x00010b97e888();
          func_0x000107c31080(&ppppppppuStack_2c0,ppppppppuVar37,&ppppppppuStack_310);
          FUN_10b99f560(appppppppuStack_3b8,&ppppppppuStack_2c0);
          ppppppppuVar12 = (undefined ********)appppppppuStack_3b8;
          func_0x00010b97f23c();
          func_0x000104bda960(appppppppuStack_3b8[0]);
          func_0x00010b97f20c();
          func_0x00010b97ea80();
          func_0x000107c3a014();
          ppppppppuStack_3d0 = (undefined ********)0x0;
          unaff_x24 = (undefined **)ppppppppuVar37;
        }
        else {
          ppppppppuVar25 = (undefined ********)ppppppppuStack_3e8[1];
          func_0x00010b97ed54();
          ppppppppuStack_3a0 = (undefined ********)0x0;
          func_0x00010b97e654();
          if (ppppppppuVar25 != (undefined ********)0x0) {
            do {
              func_0x000107c39f98();
            } while (extraout_w11_24 != 0);
          }
          *ppppppppuVar37 = (undefined *******)&PTR_DAT_110d7c488;
          ppppppppuVar37[2] = (undefined *******)ppppppppuVar25;
          ppppppppuVar37[3] = (undefined *******)unaff_x24;
          do {
            func_0x000107c39fa4();
          } while (extraout_w10_26 != 0);
          do {
            ppppppppuStack_3d0 = ppppppppuVar37;
            func_0x000107c3a128();
            cVar6 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_34,0x10);
            if (bVar2) {
              *extraout_x8_34 = extraout_x9_31;
              cVar6 = ExclusiveMonitorsStatus();
            }
            ppppppppuVar37 = ppppppppuStack_3d0;
          } while (cVar6 != '\0');
          if ((bool)uVar7) {
            func_0x00010b97e808();
          }
        }
        FUN_10b97aefc(ppppppppuStack_3a0);
        param_3 = ppppppppuStack_3d8;
        ppppppppuVar37 = ppppppppuStack_3e0;
        ppppppppuVar10 = ppppppppuStack_3e8;
        ppppppppuVar33 = ppppppppuStack_3d0;
code_r0x00010b977fc8:
        do {
          ppppppppuStack_3d0 = ppppppppuVar33;
          func_0x000107c3a0a0();
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar2) {
            *unaff_x26 = extraout_x8_35;
            cVar6 = ExclusiveMonitorsStatus();
          }
          ppppppppuVar33 = ppppppppuStack_3d0;
        } while (cVar6 != '\0');
        if ((bool)uVar7) {
          func_0x00010b97e8d8();
        }
      }
      else {
code_r0x00010b977478:
        pppppppuStack_348 = (undefined *******)0x0;
        ppppppppuVar16 = (undefined ********)appppppppuStack_330;
        ppppppppuVar9 = (undefined ********)&uStack_340;
        func_0x00010b97e768(&ppppppppuStack_310);
        bVar18 = *(byte *)(ppppppppuVar24 + 1);
        ppppppppuVar30 = (undefined ********)(ulong)bVar18;
        if ((bVar18 & 1) == 0) {
          func_0x00010b98fa8c(&ppppppppuStack_2c0,&bStack_2d0);
          ppppppppuVar25 = (undefined ********)&ppppppppuStack_2c0;
          func_0x000107c27e5c();
          ppppppppuStack_3a0 = ppppppppuVar25;
          ppppppppuStack_398 = ppppppppuVar12;
          func_0x00010b97f1b8();
          ppppppppuVar25 = (undefined ********)&ppppppppuStack_380;
          ppppppppuVar9 = (undefined ********)&ppppppppuStack_3a0;
          func_0x00010b97e9e4(&ppppppppuStack_380);
          func_0x000107c3a068();
          ppppppppuVar16 = extraout_x11_02;
          ppppppppuVar12 = extraout_x10;
          if (cVar6 == cVar5) {
            ppppppppuVar16 = extraout_x8_30;
            ppppppppuVar12 = ppppppppuVar25;
          }
          func_0x00010b97ec70();
          func_0x000107c3a014();
          func_0x00010b97eef0();
          ppppppppuStack_3d0 = (undefined ********)0x0;
        }
        else {
          ppppppppuVar12 = (undefined ********)&ppppppppuStack_310;
          FUN_10b972a1c(&pppppppuStack_348);
        }
        func_0x00010b97edb0();
        if ((bVar18 & 1) != 0) goto code_r0x00010b977abc;
      }
      FUN_10b972f3c(pppppppuStack_348);
      func_0x00010b97e958(&uStack_340);
    }
    func_0x00010b97e958(appppppppuStack_330);
    func_0x000107c30df4(pppppppuStack_318);
    param_4 = ppppppppuVar30;
    goto LAB_10b9780d0;
  case 0xe:
    FUN_10b990668(&ppppppppuStack_2c0,&bStack_2d0);
    ppppppppuVar16 = (undefined ********)&ppppppppuStack_2c0;
    func_0x00010b97e78c(&ppppppppuStack_310);
    if (((ulong)ppppppppuVar24[1] & 1) == 0) {
      func_0x00010b97e8b8();
      ppppppppuStack_3d0 = (undefined ********)0x0;
    }
    else {
      ppppppppuVar8 = (undefined ********)&ppppppppuStack_380;
      ppppppppuVar16 = (undefined ********)&ppppppppuStack_310;
      ppppppppuVar9 = (undefined ********)&ppppppppuStack_2c0;
      func_0x00010b97e768();
      if (((ulong)ppppppppuVar24[1] & 1) == 0) {
        func_0x00010b97e8b8();
        ppppppppuStack_3d0 = (undefined ********)0x0;
      }
      else {
        ppppppppuVar25 = (undefined ********)ppppppppuVar10[1];
        func_0x00010b97ed54();
        func_0x00010b97e654();
        if (ppppppppuVar25 != (undefined ********)0x0) {
          do {
            func_0x000107c39f98();
          } while (extraout_w11_04 != 0);
        }
        ppppppppuVar8[2] = (undefined *******)ppppppppuVar25;
        *ppppppppuVar8 = (undefined *******)&PTR_FUN_110d7c5c0;
        pppppppuVar40 = (undefined *******)0x0;
        if (ppppppppuStack_380 != (undefined ********)0x0) {
          do {
            func_0x00010b97e7d0();
            pppppppuVar40 = extraout_x9_08;
          } while (extraout_w12_02 != 0);
        }
        ppppppppuVar8[3] = pppppppuVar40;
        do {
          func_0x000107c39fa4();
          ppppppppuStack_3d0 = ppppppppuVar8;
        } while (extraout_w10_03 != 0);
        do {
          func_0x000107c3a128();
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_09,0x10);
          if (bVar2) {
            *extraout_x8_09 = extraout_x9_09;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((bool)uVar7) {
          func_0x00010b97e808();
        }
      }
      func_0x00010b97ee34();
    }
    func_0x00010b97e958(&ppppppppuStack_310);
    lVar26 = -0x80;
    goto code_r0x00010b9780cc;
  case 0xf:
    ppppppppuVar30 = (undefined ********)&bStack_2d0;
    func_0x00010b9906a4();
    func_0x00010b97e708();
    if (((ulong)ppppppppuVar24[1] & 1) == 0) {
      func_0x00010b97e8c8();
      goto code_r0x00010b977778;
    }
    ppppppppuVar16 = ppppppppuVar30 + 4;
    func_0x00010b97e78c(&ppppppppuStack_380);
    if (((ulong)ppppppppuVar24[1] & 1) != 0) {
      ppppppppuVar8 = (undefined ********)&ppppppppuStack_2c0;
      func_0x00010b97e730();
      if (((ulong)ppppppppuVar24[1] & 1) != 0) {
        func_0x00010b97efa8();
        func_0x00010b97e768();
        if (((ulong)ppppppppuVar24[1] & 1) != 0) {
          ppppppppuVar25 = (undefined ********)ppppppppuVar10[1];
          func_0x00010b97f234();
          func_0x00010b97e654();
          if (ppppppppuVar25 != (undefined ********)0x0) {
            do {
              func_0x000107c39f98();
            } while (extraout_w11_09 != 0);
          }
          ppppppppuVar8[2] = (undefined *******)ppppppppuVar25;
          *ppppppppuVar8 = (undefined *******)&PTR_FUN_110d7c628;
          pppppppuVar40 = (undefined *******)0x0;
          if (ppppppppuStack_2c0 != (undefined ********)0x0) {
            do {
              func_0x00010b97e7d0();
              pppppppuVar40 = extraout_x9_15;
            } while (extraout_w12_04 != 0);
          }
          ppppppppuVar8[3] = pppppppuVar40;
          pppppppuVar40 = (undefined *******)0x0;
          if (appppppppuStack_330[0] != (undefined ********)0x0) {
            do {
              func_0x00010b97e7d0();
              pppppppuVar40 = extraout_x9_16;
            } while (extraout_w12_05 != 0);
          }
          ppppppppuVar8[4] = pppppppuVar40;
          do {
            func_0x000107c39fa4();
            ppppppppuStack_3d0 = ppppppppuVar8;
          } while (extraout_w10_08 != 0);
          do {
            func_0x000107c3a128();
            cVar6 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_14,0x10);
            if (bVar2) {
              *extraout_x8_14 = extraout_x9_17;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          goto code_r0x00010b9770f8;
        }
        func_0x00010b97e8a8();
code_r0x00010b977f38:
        ppppppppuStack_3d0 = (undefined ********)0x0;
        goto code_r0x00010b977f3c;
      }
      func_0x00010b97e8c8();
code_r0x00010b977b90:
      ppppppppuStack_3d0 = (undefined ********)0x0;
      goto code_r0x00010b9780c0;
    }
    func_0x00010b97e8a8();
code_r0x00010b977a2c:
    ppppppppuStack_3d0 = (undefined ********)0x0;
code_r0x00010b9780c4:
    func_0x00010b97e918();
    goto code_r0x00010b9780c8;
  case 0x10:
    ppppppppuVar30 = (undefined ********)&bStack_2d0;
    func_0x00010b990744();
    func_0x00010b97e708();
    if (((ulong)ppppppppuVar24[1] & 1) != 0) {
      ppppppppuVar8 = (undefined ********)&ppppppppuStack_380;
      func_0x00010b97e730();
      if (((ulong)ppppppppuVar24[1] & 1) != 0) {
        ppppppppuVar25 = (undefined ********)ppppppppuVar10[1];
        func_0x00010b97ed54();
        func_0x00010b97e654();
        if (ppppppppuVar25 != (undefined ********)0x0) {
          do {
            func_0x000107c39f98();
          } while (extraout_w11_06 != 0);
        }
        ppppppppuVar8[2] = (undefined *******)ppppppppuVar25;
        *ppppppppuVar8 = (undefined *******)&PTR_FUN_110d7ca30;
        pppppppuVar40 = (undefined *******)0x0;
        if (ppppppppuStack_380 != (undefined ********)0x0) {
          do {
            func_0x00010b97e7d0();
            pppppppuVar40 = extraout_x9_11;
          } while (extraout_w12_03 != 0);
        }
        ppppppppuVar8[3] = pppppppuVar40;
        do {
          func_0x000107c39fa4();
          ppppppppuStack_3d0 = ppppppppuVar8;
        } while (extraout_w10_05 != 0);
        do {
          func_0x000107c3a128();
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_11,0x10);
          if (bVar2) {
            *extraout_x8_11 = extraout_x9_12;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto code_r0x00010b977380;
      }
      func_0x00010b97e8b8();
code_r0x00010b977a14:
      ppppppppuStack_3d0 = (undefined ********)0x0;
code_r0x00010b977a18:
      func_0x00010b97ee34();
      goto code_r0x00010b9780c8;
    }
    func_0x00010b97e8b8();
    goto code_r0x00010b977778;
  case 0x12:
    ppppppppuVar30 = (undefined ********)&bStack_2d0;
    func_0x00010b9906c4();
    func_0x00010b97e708();
    if (((ulong)ppppppppuVar24[1] & 1) != 0) {
      ppppppppuVar16 = ppppppppuVar30 + 4;
      func_0x00010b97e78c(&ppppppppuStack_380);
      if (((ulong)ppppppppuVar24[1] & 1) == 0) {
        func_0x00010b97e8a8();
        goto code_r0x00010b977a2c;
      }
      ppppppppuVar8 = (undefined ********)&ppppppppuStack_2c0;
      func_0x00010b97e730();
      if (((ulong)ppppppppuVar24[1] & 1) == 0) {
        func_0x00010b97e8c8();
        goto code_r0x00010b977b90;
      }
      func_0x00010b97efa8();
      func_0x00010b97e768();
      if (((ulong)ppppppppuVar24[1] & 1) == 0) {
        func_0x00010b97e8a8();
        goto code_r0x00010b977f38;
      }
      ppppppppuVar25 = (undefined ********)ppppppppuVar10[1];
      func_0x00010b97f234();
      func_0x00010b97e654();
      if (ppppppppuVar25 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_03 != 0);
      }
      ppppppppuVar8[2] = (undefined *******)ppppppppuVar25;
      *ppppppppuVar8 = (undefined *******)&PTR_FUN_110d7c6e8;
      pppppppuVar40 = (undefined *******)0x0;
      if (ppppppppuStack_2c0 != (undefined ********)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppppuVar40 = extraout_x9_05;
        } while (extraout_w12_00 != 0);
      }
      ppppppppuVar8[3] = pppppppuVar40;
      pppppppuVar40 = (undefined *******)0x0;
      if (appppppppuStack_330[0] != (undefined ********)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppppuVar40 = extraout_x9_06;
        } while (extraout_w12_01 != 0);
      }
      ppppppppuVar8[4] = pppppppuVar40;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_3d0 = ppppppppuVar8;
      } while (extraout_w10_02 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_08,0x10);
        if (bVar2) {
          *extraout_x8_08 = extraout_x9_07;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
code_r0x00010b9770f8:
      if ((bool)uVar7) {
        func_0x00010b97e808();
      }
code_r0x00010b977f3c:
      func_0x00010b97f244();
      param_2 = ppppppppuVar10;
code_r0x00010b9780c0:
      func_0x00010b97eee8();
      goto code_r0x00010b9780c4;
    }
    func_0x00010b97e8c8();
    goto code_r0x00010b977778;
  case 0x13:
    ppppppppuVar30 = (undefined ********)&bStack_2d0;
    func_0x00010b9906e4();
    func_0x00010b97e708();
    if (((ulong)ppppppppuVar24[1] & 1) != 0) {
      ppppppppuVar8 = (undefined ********)&ppppppppuStack_380;
      func_0x00010b97e730();
      if (((ulong)ppppppppuVar24[1] & 1) == 0) {
        ppppppppuVar12 = (undefined ********)&UNK_10f7cd22d;
        func_0x00010b97e990();
        goto code_r0x00010b977a14;
      }
      ppppppppuVar25 = (undefined ********)ppppppppuVar10[1];
      func_0x00010b97ed54();
      func_0x00010b97e654();
      if (ppppppppuVar25 != (undefined ********)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_13 != 0);
      }
      ppppppppuVar8[2] = (undefined *******)ppppppppuVar25;
      *ppppppppuVar8 = (undefined *******)&PTR_FUN_110d7c798;
      pppppppuVar40 = (undefined *******)0x0;
      if (ppppppppuStack_380 != (undefined ********)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppppuVar40 = extraout_x9_21;
        } while (extraout_w12_06 != 0);
      }
      ppppppppuVar8[3] = pppppppuVar40;
      do {
        func_0x000107c39fa4();
        ppppppppuStack_3d0 = ppppppppuVar8;
      } while (extraout_w10_14 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_18,0x10);
        if (bVar2) {
          *extraout_x8_18 = extraout_x9_22;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
code_r0x00010b977380:
      if ((bool)uVar7) {
        func_0x00010b97e808();
      }
      goto code_r0x00010b977a18;
    }
    ppppppppuVar12 = (undefined ********)&UNK_10f7cd22d;
    func_0x00010b97e990();
    goto code_r0x00010b977778;
  case 0x14:
    ppppppppuVar30 = (undefined ********)&bStack_2d0;
    func_0x00010b990704();
    func_0x00010b97e708();
    if (((ulong)ppppppppuVar24[1] & 1) != 0) {
      ppppppppuVar16 = ppppppppuVar30 + 4;
      func_0x00010b97e78c(&ppppppppuStack_380);
      if (((ulong)ppppppppuVar24[1] & 1) == 0) {
        ppppppppuVar12 = (undefined ********)&UNK_10f7cd2ab;
        func_0x00010b97e990();
        goto code_r0x00010b977a2c;
      }
      ppppppppuVar8 = (undefined ********)&ppppppppuStack_2c0;
      func_0x00010b97e730();
      if (((ulong)ppppppppuVar24[1] & 1) == 0) {
        ppppppppuVar12 = (undefined ********)&UNK_10f7cd285;
        func_0x00010b97e990();
        goto code_r0x00010b977b90;
      }
      func_0x00010b97efa8();
      func_0x00010b97e768();
      if (((ulong)ppppppppuVar24[1] & 1) == 0) {
        ppppppppuVar12 = (undefined ********)&UNK_10f7cd2ab;
        func_0x00010b97e990();
        ppppppppuStack_3d0 = (undefined ********)0x0;
      }
      else {
        func_0x00010b97ee54();
        pppppppuVar40 = ppppppppuVar10[1];
        ppppppppuVar33 = ppppppppuVar8 + 1;
        *ppppppppuVar33 = (undefined *******)0x1;
        *ppppppppuVar8 = (undefined *******)&PTR_DAT_110d7bd68;
        ppppppppuVar30 = ppppppppuVar8;
        if (pppppppuVar40 == (undefined *******)0x0) {
          ppppppppuVar25 = (undefined ********)0x0;
          pppppppuVar40 = (undefined *******)0x0;
        }
        else {
          do {
            func_0x000107c39f98();
          } while (extraout_w11_14 != 0);
          ppppppppuVar25 = (undefined ********)ppppppppuVar10[1];
          pppppppuVar40 = extraout_x8_19;
        }
        ppppppppuVar8[2] = pppppppuVar40;
        *ppppppppuVar8 = (undefined *******)&PTR_FUN_110d7c848;
        func_0x000107c3a018();
        ppppppppuVar30[1] = (undefined *******)0x1;
        func_0x00010b97eae8();
        if (ppppppppuVar25 != (undefined ********)0x0) {
          do {
            func_0x000107c39fa4();
          } while (extraout_w10_27 != 0);
        }
        ppppppppuVar30[2] = (undefined *******)ppppppppuVar25;
        *ppppppppuVar30 = (undefined *******)&PTR_DAT_110d7c230;
        ppppppppuVar8[3] = (undefined *******)ppppppppuVar30;
        pppppppuVar40 = (undefined *******)0x0;
        if (ppppppppuStack_2c0 != (undefined ********)0x0) {
          do {
            func_0x000107c39f98();
            pppppppuVar40 = extraout_x8_36;
          } while (extraout_w11_25 != 0);
        }
        ppppppppuVar8[4] = pppppppuVar40;
        pppppppuVar40 = (undefined *******)0x0;
        if (appppppppuStack_330[0] != (undefined ********)0x0) {
          do {
            func_0x000107c39f98();
            pppppppuVar40 = extraout_x8_37;
          } while (extraout_w11_26 != 0);
        }
        ppppppppuVar8[5] = pppppppuVar40;
        do {
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar33,0x10);
          if (bVar2) {
            *ppppppppuVar33 = (undefined *******)((long)*ppppppppuVar33 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
          ppppppppuStack_3d0 = ppppppppuVar8;
        } while (cVar6 != '\0');
        do {
          uVar7 = (undefined *******)((long)*ppppppppuVar33 + -1) == (undefined *******)0x0;
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppppuVar33,0x10);
          if (bVar2) {
            *ppppppppuVar33 = (undefined *******)((long)*ppppppppuVar33 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        ppppppppuVar30 = ppppppppuVar8;
        if ((bool)uVar7) {
          func_0x00010b97e8d8();
        }
      }
      func_0x00010b97f244();
      param_2 = param_3;
      unaff_x26 = ppppppppuVar10;
      goto code_r0x00010b9780c0;
    }
    ppppppppuVar12 = (undefined ********)&UNK_10f7cd285;
    func_0x00010b97e990();
code_r0x00010b977778:
    ppppppppuStack_3d0 = (undefined ********)0x0;
code_r0x00010b9780c8:
    lVar26 = -0xd0;
code_r0x00010b9780cc:
    func_0x00010b97e958((long)&ppuStack_240 + lVar26);
    param_4 = ppppppppuVar30;
    goto LAB_10b9780d0;
  case 0x15:
    ppppppppuVar25 = (undefined ********)ppppppppuVar10[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppppuVar25 != (undefined ********)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_15 != 0);
    }
    ppppppppuVar8[2] = (undefined *******)ppppppppuVar25;
    *ppppppppuVar8 = (undefined *******)&PTR_FUN_110d7c8f8;
    do {
      func_0x000107c39fa4();
      ppppppppuStack_3d0 = ppppppppuVar8;
    } while (extraout_w10_17 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_21,0x10);
      if (bVar2) {
        *extraout_x8_21 = extraout_x9_25;
        cVar6 = ExclusiveMonitorsStatus();
      }
      param_4 = ppppppppuVar30;
      ppuVar32 = unaff_x24;
    } while (cVar6 != '\0');
    break;
  case 0x16:
    ppuVar32 = (undefined **)&bStack_2d0;
    func_0x00010b990724();
    ppppppppuVar25 = (undefined ********)ppppppppuVar10[1];
    param_4 = (undefined ********)ppuVar32;
    func_0x00010b97ee54();
    param_2 = param_4 + 1;
    *param_2 = (undefined *******)0x1;
    func_0x00010b97eae8();
    if (ppppppppuVar25 != (undefined ********)0x0) {
      do {
        func_0x000107c39fa4();
      } while (extraout_w10_16 != 0);
    }
    param_4[2] = (undefined *******)ppppppppuVar25;
    *param_4 = (undefined *******)&PTR_FUN_110d7c960;
    ppppppppuVar12 = (undefined ********)(ppuVar32 + 2);
    func_0x00010b90e320(param_4 + 3);
    do {
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = (undefined *******)((long)*param_2 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
      ppppppppuStack_3d0 = param_4;
    } while (cVar6 != '\0');
    do {
      uVar7 = (undefined *******)((long)*param_2 + -1) == (undefined *******)0x0;
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = (undefined *******)((long)*param_2 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    unaff_x24 = ppuVar32;
    if (!(bool)uVar7) goto LAB_10b9780d0;
    ppppppuVar14 = (*param_4)[1];
    goto code_r0x00010b976b88;
  }
code_r0x00010b976b7c:
  unaff_x24 = ppuVar32;
  if ((bool)uVar7) {
    ppppppuVar14 = (*ppppppppuVar8)[1];
code_r0x00010b976b88:
    (*(code *)ppppppuVar14)();
    unaff_x24 = ppuVar32;
  }
LAB_10b9780d0:
  ppppppppuVar8 = ppppppppuStack_3d0;
  uVar17 = SUB81(ppppppppuVar9,0);
  if (((ulong)ppppppppuVar24[1] & 1) == 0) {
    *ppppppppuVar37 = (undefined *******)0x0;
    ppppppppuVar37[1] = (undefined *******)0x0;
    ppppppppuVar37[2] = (undefined *******)0x0;
  }
  else {
    ppppppppuVar16 = (undefined ********)&bStack_2d0;
    ppppppppuStack_3e0 = ppppppppuVar37;
    FUN_10b9794f0(ppppppppuVar37,ppppppppuStack_3d0);
    pppppppuVar40 = param_3[2];
    ppppppppuStack_3d8 = param_3;
    FUN_10b97953c();
    ppppppppuVar24 = (undefined ********)0x0;
    uVar20 = (ulong)pppppppuVar40 >> 7;
    unaff_x26 = (undefined ********)ppppppppuVar10[5];
    ppppppppuVar37 = (undefined ********)(((ulong)pppppppuVar40 & 0x7f) * 0x101010101010101);
    while( true ) {
      param_3 = (undefined ********)(uVar20 & (ulong)unaff_x26);
      uVar20 = *(ulong *)((long)ppppppppuVar10[2] + (long)param_3);
      for (param_2 = (undefined ********)
                     ((uVar20 ^ (ulong)ppppppppuVar37) + 0xfefefefefefefeff &
                      (uVar20 ^ (ulong)ppppppppuVar37 ^ 0xffffffffffffffff) & 0x8080808080808080);
          param_2 != (undefined ********)0x0;
          param_2 = (undefined ********)((long)param_2 - 1U & (ulong)param_2)) {
        uVar28 = ((ulong)param_2 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                 ((ulong)param_2 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
        unaff_x24 = (undefined **)
                    ((long)param_3 + ((ulong)LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) >> 3) &
                    (ulong)unaff_x26);
        pppppppuVar36 = ppppppppuVar10[3] + (long)unaff_x24 * 6;
        FUN_10b9909a8(pppppppuVar36,ppppppppuStack_3d8);
        uVar17 = SUB81(ppppppppuVar9,0);
        if (((ulong)pppppppuVar36 & 1) != 0) goto LAB_10b97820c;
      }
      uVar17 = SUB81(ppppppppuVar9,0);
      uVar7 = (uVar20 & ~uVar20 << 6 & 0x8080808080808080) == 0;
      if (!(bool)uVar7) break;
      ppppppppuVar24 = ppppppppuVar24 + 1;
      uVar20 = (long)ppppppppuVar24 + (long)param_3;
    }
    unaff_x24 = (undefined **)(ppppppppuVar10 + 2);
    FUN_10b97d878(unaff_x24,pppppppuVar40);
    pppppppuVar36 = ppppppppuVar10[3] + (long)unaff_x24 * 6;
    func_0x000107c30df0(pppppppuVar36,ppppppppuStack_3d8);
    pppppppuVar36[3] = (undefined ******)0x0;
    pppppppuVar36[4] = (undefined ******)0x0;
    pppppppuVar36[5] = (undefined ******)0x0;
    *(byte *)((long)ppppppppuVar10[2] + (long)unaff_x24) = (byte)pppppppuVar40 & 0x7f;
    func_0x000107c39f84();
    ppppppppuVar24 = ppppppppuVar10;
LAB_10b97820c:
    ppppppppuVar25 = ppppppppuStack_3e0;
    pppppppuVar40 = ppppppppuVar10[3];
    param_4 = (undefined ********)(pppppppuVar40 + (long)unaff_x24 * 6 + 3);
    FUN_10b972a1c(param_4,ppppppppuStack_3e0);
    func_0x000107c30f8c(pppppppuVar40 + (long)unaff_x24 * 6 + 4,ppppppppuVar25 + 1);
    ppppppppuVar12 = ppppppppuStack_3d8;
    FUN_10b90a1e0(ppppppppuVar10 + 0xe);
    ppppppppuVar10 = ppppppppuVar24;
  }
  FUN_10b972f3c(ppppppppuVar8);
  ppppppppuVar24 = ppppppppuVar8;
LAB_10b97824c:
  ppppppppuVar9 = &pppppppuStack_2d8;
  func_0x000107c2a668();
LAB_10b978254:
  func_0x000107c39f7c(uStack_2a0);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  __ZdlPv(unaff_x24);
  func_0x00010b97a478(&ppppppppuStack_310);
  __ZdlPv(param_4);
  func_0x00010b97a478(&ppppppppuStack_380);
  FUN_10b972f3c(pppppppuStack_348);
  func_0x00010b97e958(&uStack_340);
  func_0x00010b97e958(appppppppuStack_330);
  func_0x000107c30df4(pppppppuStack_318);
  pppppppuVar36 = (undefined *******)&pppppppuStack_2d8;
  func_0x000107c2a668();
  func_0x00010b97e950();
  pcStack_408 = FUN_10b97874c;
  ppppppppuStack_460 = ppppppppuVar10;
  ppppppppuStack_458 = ppppppppuVar37;
  ppppppppuStack_450 = unaff_x26;
  ppppppppuStack_448 = param_3;
  ppppppppuStack_440 = (undefined ********)unaff_x24;
  ppppppppuStack_438 = param_4;
  ppppppppuStack_430 = ppppppppuVar24;
  ppppppppuStack_428 = param_2;
  ppppppppuStack_420 = ppppppppuVar9;
  ppppppppuStack_418 = ppppppppuVar25;
  pppuStack_410 = &ppuStack_240;
  (*(code *)(*ppppppppuVar16)[4])(&pppppppuStack_490,ppppppppuVar16);
  pppppppuVar40 = (undefined *******)acStack_4e8;
  func_0x000107c31030(pppppppuVar40,&pppppppuStack_490);
  func_0x000107c3a064();
  pppppppuVar27 = ppppppppuVar12[1];
  func_0x00010b97ee54();
  pppppppuVar40[1] = (undefined ******)0x1;
  func_0x00010b97eae8();
  if (pppppppuVar27 != (undefined *******)0x0) {
    do {
      func_0x000107c39fa4();
    } while (extraout_w10_28 != 0);
  }
  *pppppppuVar40 = (undefined ******)&PTR_FUN_110d7bce8;
  pppppppuVar40[3] = (undefined ******)0x0;
  pppppppuVar40[4] = (undefined ******)0x0;
  pppppppuVar40[2] = (undefined ******)pppppppuVar27;
  *(undefined1 *)(pppppppuVar40 + 5) = uVar17;
  if (acStack_4e8[0] == '\n') {
    ppppppuVar14 = (undefined ******)acStack_4e8;
    FUN_10b9905a4(ppppppuVar14);
    func_0x000107c30fa8(&pppppppuStack_4b8,ppppppuVar14 + 2);
    func_0x000107c31030(&pppppppuStack_490,&pppppppuStack_4b8);
    func_0x000107c27900(&pppppppuStack_4b0);
  }
  else {
    func_0x000107c30df0(&pppppppuStack_490,acStack_4e8);
  }
  pppppppuVar23 = &pppppppuStack_4b8;
  pppppppuVar13 = pppppppuStack_480;
  func_0x000107c27918();
  lVar26 = 0;
  uVar20 = (ulong)pppppppuVar23 >> 7;
  pppppppuVar27 = ppppppppuVar12[0xb];
  while( true ) {
    uVar20 = uVar20 & (ulong)pppppppuVar27;
    uVar39 = *(ulong *)((long)ppppppppuVar12[8] + uVar20);
    func_0x00010b97f324(uVar39 ^ ((ulong)pppppppuVar23 & 0x7f) * 0x101010101010101);
    for (uVar28 = extraout_x8_39 & 0x8080808080808080; uVar28 != 0; uVar28 = uVar28 - 1 & uVar28) {
      uVar34 = (uVar28 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar28 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar34 = (uVar34 & 0xffff0000ffff0000) >> 0x10 | (uVar34 & 0xffff0000ffff) << 0x10;
      uVar34 = uVar20 + ((ulong)LZCOUNT(uVar34 >> 0x20 | uVar34 << 0x20) >> 3) &
               (ulong)pppppppuVar27;
      pppppppuVar21 = ppppppppuVar12[9];
      pppppppuVar13 = &pppppppuStack_490;
      FUN_10b9909a8();
      if (((ulong)pppppppuVar21 & 1) != 0) {
        puVar29 = (undefined *)((long)ppppppppuVar12[8] + uVar34);
        pppppppuVar27 = ppppppppuVar12[9] + uVar34 * 4;
        goto LAB_10b9788dc;
      }
    }
    if ((uVar39 & ~uVar39 << 6 & 0x8080808080808080) != 0) break;
    lVar26 = lVar26 + 8;
    uVar20 = lVar26 + uVar20;
  }
  puVar29 = (undefined *)((long)ppppppppuVar12[8] + (long)ppppppppuVar12[0xb]);
LAB_10b9788dc:
  func_0x00010b97e958(&pppppppuStack_490);
  pppppppuVar21 = pppppppuVar40 + 4;
  if ((undefined *)((long)ppppppppuVar12[8] + (long)ppppppppuVar12[0xb]) != puVar29 &&
      pppppppuVar21 != pppppppuVar27 + 3) {
    ppppppuVar14 = (undefined ******)0x0;
    if (pppppppuVar27[3] != (undefined ******)0x0) {
      do {
        func_0x00010b97e7d0();
        pppppppuVar21 = extraout_x8_40;
        ppppppuVar14 = extraout_x9_32;
      } while (extraout_w12_09 != 0);
    }
    *pppppppuVar21 = ppppppuVar14;
    FUN_10b979074();
  }
  (*(code *)(*ppppppppuVar16)[5])(auStack_4f8,ppppppppuVar16);
  (*(code *)(*ppppppppuVar16)[6])(&pppppppuStack_500,ppppppppuVar16);
  ppppppppuVar37 = ppppppppuVar12 + 0x11;
  FUN_10b979120();
  if (ppppppppuVar37 != (undefined ********)0x0) goto LAB_10b978b1c;
  if (ppppppppuVar12[0x15] < (undefined *******)0x49) {
    pppppppuVar21 = ppppppppuVar12[0x14];
    pppppppuVar27 = ppppppppuVar12[0x13];
    uVar28 = (long)pppppppuVar27 - (long)ppppppppuVar12[0x12];
    uVar20 = (long)pppppppuVar21 - (long)ppppppppuVar12[0x11];
    if (uVar20 <= uVar28) {
      pppppppuVar23 = (undefined8 *******)((long)uVar20 >> 2);
      if (pppppppuVar21 == ppppppppuVar12[0x11]) {
        pppppppuVar23 = (undefined8 *******)0x1;
      }
      ppppppppuStack_498 = ppppppppuVar12 + 0x14;
      FUN_10b97942c();
      pppppppuStack_4b0 = (undefined8 *******)((long)pppppppuVar23 + uVar28);
      pppppppuStack_4a0 = pppppppuVar23 + (long)pppppppuVar13;
      pppppppuStack_4b8 = pppppppuVar23;
      pppppppuStack_4a8 = pppppppuStack_4b0;
      func_0x00010b97eebc();
      ppppppppuStack_4c8 = ppppppppuVar12 + 0x16;
      uStack_4c0 = 0x49;
      pppppppuStack_4d0 = pppppppuVar23;
      FUN_10b979364(&pppppppuStack_4b8);
      ppppppppuVar37 = ppppppppuStack_498;
      pppppppuStack_4d0 = (undefined8 *******)0x0;
      pppppppuVar27 = ppppppppuVar12[0x13];
      pppppppuVar13 = pppppppuStack_4a8;
      pppppppuVar31 = pppppppuStack_4b8;
      pppppppuVar15 = pppppppuStack_4b0;
      pppppppuVar38 = pppppppuStack_4a0;
      while (pppppppuVar21 = ppppppppuVar12[0x12], pppppppuVar27 != pppppppuVar21) {
        pppppppuVar35 = pppppppuVar15;
        if (pppppppuVar15 == pppppppuVar31) {
          if (pppppppuVar13 < pppppppuVar38) {
            lVar26 = (long)pppppppuVar13 - (long)pppppppuVar31;
            pppppppuVar11 =
                 pppppppuVar13 + (((long)pppppppuVar38 - (long)pppppppuVar13 >> 3) + 1) / 2;
            pppppppuVar35 =
                 (undefined8 *******)
                 ((long)pppppppuVar11 - ((long)pppppppuVar13 - (long)pppppppuVar31));
            pppppppuVar13 = pppppppuVar11;
            if (lVar26 != 0) {
              _memmove(pppppppuVar35,pppppppuVar15,lVar26);
              pppppppuVar23 = pppppppuVar15;
            }
          }
          else {
            pppppppuVar35 = (undefined8 *******)((long)pppppppuVar38 - (long)pppppppuVar31 >> 2);
            if ((long)pppppppuVar38 - (long)pppppppuVar31 == 0) {
              pppppppuVar35 = (undefined8 *******)0x1;
            }
            ppppppppuStack_470 = ppppppppuVar37;
            pppppppuVar11 = pppppppuVar35;
            FUN_10b97942c();
            pppppppuStack_488 =
                 (undefined8 *******)
                 ((long)pppppppuVar11 + ((long)pppppppuVar35 * 2 + 6U & 0xfffffffffffffff8));
            pppppppuStack_478 = pppppppuVar11 + (long)pppppppuVar23;
            pppppppuStack_490 = pppppppuVar11;
            pppppppuStack_480 = pppppppuStack_488;
            func_0x00010b97f298(&pppppppuStack_490);
            FUN_10b979404();
            pppppppuVar4 = pppppppuStack_478;
            pppppppuVar3 = pppppppuStack_480;
            pppppppuVar35 = pppppppuStack_488;
            pppppppuVar11 = pppppppuStack_490;
            pppppppuStack_490 = pppppppuVar31;
            pppppppuStack_488 = pppppppuVar15;
            pppppppuStack_480 = pppppppuVar13;
            pppppppuStack_478 = pppppppuVar38;
            func_0x00010b979488(&pppppppuStack_490);
            pppppppuVar13 = pppppppuVar3;
            pppppppuVar31 = pppppppuVar11;
            pppppppuVar38 = pppppppuVar4;
          }
        }
        pppppppuVar27 = pppppppuVar27 + -1;
        pppppppuVar15 = pppppppuVar35 + -1;
        *pppppppuVar15 = (undefined8 ******)*pppppppuVar27;
      }
      pppppppuStack_4b8 = (undefined8 *******)ppppppppuVar12[0x11];
      ppppppppuVar12[0x11] = (undefined *******)pppppppuVar31;
      ppppppppuVar12[0x12] = (undefined *******)pppppppuVar15;
      pppppppuStack_4a0 = (undefined8 *******)ppppppppuVar12[0x14];
      pppppppuStack_4a8 = (undefined8 *******)ppppppppuVar12[0x13];
      ppppppppuVar12[0x13] = (undefined *******)pppppppuVar13;
      ppppppppuVar12[0x14] = (undefined *******)pppppppuVar38;
      pppppppuStack_4b0 = (undefined8 *******)pppppppuVar21;
      func_0x00010b979460(&pppppppuStack_4d0);
      func_0x00010b979488(&pppppppuStack_4b8);
      goto LAB_10b978b1c;
    }
    func_0x00010b97eebc();
    if (pppppppuVar21 != pppppppuVar27) {
      func_0x00010b979224(ppppppppuVar12 + 0x11);
      goto LAB_10b978b1c;
    }
    FUN_10b9792c0(ppppppppuVar12 + 0x11,ppppppppuVar37);
  }
  else {
    ppppppppuVar12[0x15] = (undefined *******)((long)ppppppppuVar12[0x15] + -0x49);
  }
  ppppppuVar14 = *ppppppppuVar12[0x12];
  ppppppppuVar12[0x12] = ppppppppuVar12[0x12] + 1;
  FUN_10b979188(ppppppppuVar12 + 0x11,ppppppuVar14);
LAB_10b978b1c:
  ppppppppuVar37 = ppppppppuVar12 + 0x11;
  func_0x00010b979150();
  func_0x000107c30df0();
  func_0x000107c30f3c(ppppppppuVar37 + 3,auStack_4f8);
  if ((pppppppuStack_500 != (undefined *******)0x0) &&
     (pppppppuStack_500[2] != (undefined ******)0x0)) {
    ppppppuVar14 = pppppppuStack_500[2] + 1;
    do {
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar14,0x10);
      if (bVar2) {
        *ppppppuVar14 = (undefined *****)((long)*ppppppuVar14 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppppppppuVar37[5] = pppppppuStack_500;
  do {
    func_0x000107c3a00c();
  } while (extraout_w9_02 != 0);
  ppppppppuVar37[6] = pppppppuVar40;
  ppppppppuVar12[0x16] = (undefined *******)((long)ppppppppuVar12[0x16] + 1);
  func_0x000104bdc324(pppppppuStack_500);
  func_0x00010b97e958(auStack_4f8);
  do {
    func_0x000107c3a00c();
  } while (extraout_w9_03 != 0);
  *pppppppuVar36 = (undefined ******)pppppppuVar40;
  FUN_10b9794c8(pppppppuVar40);
  func_0x00010b97e958(acStack_4e8);
  return;
}



/* Entry: 10b9766a0; end: 10b976a0f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b9766a0(long *******param_1,long *******param_2,long *******param_3,long *******param_4,
                  long *******param_5)

{
  uint uVar1;
  bool bVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  undefined8 *******pppppppuVar11;
  long *******ppppppplVar12;
  undefined8 *******pppppppuVar13;
  long *****ppppplVar14;
  undefined8 *******pppppppuVar15;
  long *******ppppppplVar16;
  undefined1 uVar17;
  byte extraout_w8;
  byte bVar18;
  uint uVar19;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long ******extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined8 *extraout_x8_08;
  undefined8 *extraout_x8_09;
  undefined8 *extraout_x8_10;
  undefined8 *extraout_x8_11;
  undefined8 *extraout_x8_12;
  undefined8 *extraout_x8_13;
  undefined8 *extraout_x8_14;
  undefined8 *extraout_x8_15;
  undefined8 *extraout_x8_16;
  undefined8 *extraout_x8_17;
  long ******extraout_x8_18;
  undefined8 *extraout_x8_19;
  undefined8 *extraout_x8_20;
  undefined8 *extraout_x8_21;
  undefined8 *extraout_x8_22;
  undefined8 *extraout_x8_23;
  undefined8 *extraout_x8_24;
  long *******extraout_x8_25;
  long *******extraout_x8_26;
  long *******extraout_x8_27;
  long ******extraout_x8_28;
  long *******extraout_x8_29;
  long ******extraout_x8_30;
  long ******extraout_x8_31;
  long ******extraout_x8_32;
  undefined8 *extraout_x8_33;
  long ******extraout_x8_34;
  long ******extraout_x8_35;
  long ******extraout_x8_36;
  long ******extraout_x8_37;
  ulong uVar20;
  ulong extraout_x8_38;
  long ******pppppplVar21;
  long ******extraout_x8_39;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 extraout_x9_01;
  undefined8 extraout_x9_02;
  long ******extraout_x9_03;
  undefined8 extraout_x9_04;
  long ******extraout_x9_05;
  long ******extraout_x9_06;
  undefined8 extraout_x9_07;
  long ******extraout_x9_08;
  undefined8 extraout_x9_09;
  undefined8 extraout_x9_10;
  long ******extraout_x9_11;
  undefined8 extraout_x9_12;
  undefined8 extraout_x9_13;
  undefined8 extraout_x9_14;
  long ******extraout_x9_15;
  long ******extraout_x9_16;
  undefined8 extraout_x9_17;
  undefined8 extraout_x9_18;
  undefined8 extraout_x9_19;
  undefined8 extraout_x9_20;
  long ******extraout_x9_21;
  undefined8 extraout_x9_22;
  long *******extraout_x9_23;
  undefined8 extraout_x9_24;
  undefined8 extraout_x9_25;
  undefined8 extraout_x9_26;
  undefined8 extraout_x9_27;
  undefined8 extraout_x9_28;
  undefined8 extraout_x9_29;
  long ******extraout_x9_30;
  undefined8 extraout_x9_31;
  long *****extraout_x9_32;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  long *******extraout_x10;
  undefined8 *******pppppppuVar22;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  int extraout_w11_09;
  int extraout_w11_10;
  int extraout_w11_11;
  int extraout_w11_12;
  int extraout_w11_13;
  int extraout_w11_14;
  int extraout_w11_15;
  int extraout_w11_16;
  int extraout_w11_17;
  int extraout_w11_18;
  int extraout_w11_19;
  int extraout_w11_20;
  int extraout_w11_21;
  int extraout_w11_22;
  int extraout_w11_23;
  int extraout_w11_24;
  int extraout_w11_25;
  int extraout_w11_26;
  long *******extraout_x11;
  long *******extraout_x11_00;
  long *******extraout_x11_01;
  long *******extraout_x11_02;
  long *******ppppppplVar23;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  int extraout_w12_03;
  int extraout_w12_04;
  int extraout_w12_05;
  int extraout_w12_06;
  int extraout_w12_07;
  int extraout_w12_08;
  int extraout_w12_09;
  long *******ppppppplVar24;
  long lVar25;
  long ******pppppplVar26;
  ulong uVar27;
  undefined *puVar28;
  long *******unaff_x22;
  long *******unaff_x23;
  long *******ppppppplVar29;
  undefined8 *******pppppppuVar30;
  undefined **unaff_x24;
  undefined **ppuVar31;
  long *******unaff_x25;
  long *******ppppppplVar32;
  ulong uVar33;
  undefined8 *******pppppppuVar34;
  long *******unaff_x26;
  undefined8 unaff_x27;
  long ******pppppplVar35;
  long *******ppppppplVar36;
  undefined8 *******pppppppuVar37;
  undefined8 unaff_x28;
  ulong uVar38;
  long ******pppppplVar39;
  long ******pppppplStack_440;
  undefined1 auStack_438 [16];
  char acStack_428 [24];
  undefined8 *******pppppppuStack_410;
  long *******ppppppplStack_408;
  undefined8 uStack_400;
  undefined8 *******pppppppuStack_3f8;
  undefined8 *******pppppppuStack_3f0;
  undefined8 *******pppppppuStack_3e8;
  undefined8 *******pppppppuStack_3e0;
  long *******ppppppplStack_3d8;
  undefined8 *******pppppppuStack_3d0;
  undefined8 *******pppppppuStack_3c8;
  undefined8 *******pppppppuStack_3c0;
  undefined8 *******pppppppuStack_3b8;
  long *******ppppppplStack_3b0;
  long *******ppppppplStack_3a0;
  long *******ppppppplStack_398;
  long *******ppppppplStack_390;
  long *******ppppppplStack_388;
  long *******ppppppplStack_380;
  long *******ppppppplStack_378;
  long *******ppppppplStack_370;
  long *******ppppppplStack_368;
  long *******ppppppplStack_360;
  long *******ppppppplStack_358;
  code **ppcStack_350;
  code *pcStack_348;
  long *******ppppppplStack_340;
  long *******ppppppplStack_338;
  uint uStack_32c;
  long *******ppppppplStack_328;
  long *******ppppppplStack_320;
  long *******ppppppplStack_318;
  long *******ppppppplStack_310;
  char cStack_301;
  long ******pppppplStack_300;
  long *******appppppplStack_2f8 [3];
  long *******ppppppplStack_2e0;
  long *******ppppppplStack_2d8;
  byte bStack_2c9;
  long *******ppppppplStack_2c0;
  undefined *apuStack_2b8 [3];
  undefined1 auStack_2a0 [24];
  long ******pppppplStack_288;
  undefined8 uStack_280;
  long *******appppppplStack_270 [3];
  long ******pppppplStack_258;
  long *******ppppppplStack_250;
  undefined8 uStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  long ******pppppplStack_218;
  byte bStack_210;
  byte bStack_20f;
  undefined1 auStack_208 [8];
  long *******ppppppplStack_200;
  long *******ppppppplStack_1f8;
  byte bStack_1e9;
  long *******ppppppplStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  code *apcStack_180 [2];
  long lStack_170;
  long lStack_168;
  long ******apppppplStack_160 [3];
  long ******apppppplStack_148 [2];
  long ******apppppplStack_138 [3];
  long ******apppppplStack_120 [2];
  long ******pppppplStack_110;
  long lStack_108;
  long *****appppplStack_100 [3];
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char cStack_b9;
  long ******pppppplStack_b8;
  long ******pppppplStack_b0;
  undefined1 uStack_a8;
  long ******pppppplStack_a0;
  long *******ppppppplStack_98;
  long ******pppppplStack_88;
  long ******apppppplStack_80 [2];
  undefined8 uStack_70;
  
  ppppppplVar10 = param_2;
  ppppppplVar23 = param_5;
  func_0x000107c39f9c();
  ppppppplVar24 = apppppplStack_160;
  uStack_70 = extraout_x8;
  FUN_10b976a10();
  uVar7 = *(char *)(param_5 + 1) == '\x01';
  if (((bool)uVar7) && (param_2[0x16] != (long ******)0x0)) {
    unaff_x22 = apppppplStack_120;
    unaff_x23 = apppppplStack_80;
    unaff_x26 = apppppplStack_148;
    unaff_x27 = 0x49;
    unaff_x28 = 0x38;
    lStack_168 = -1;
    lStack_170 = 1;
    unaff_x24 = (undefined **)0x1;
    do {
      if (param_2[0x16] == (long ******)0x0) break;
      func_0x00010b97f000();
      FUN_10b97ddf4(apppppplStack_138,extraout_x8_00 + extraout_x9 * 0x38);
      func_0x00010b97f000();
      FUN_10b97df34(extraout_x8_01 + extraout_x9_00 * 0x38);
      pppppplVar39 = (long ******)((long)param_2[0x15] + lStack_170);
      param_2[0x16] = (long ******)((long)param_2[0x16] + lStack_168);
      param_2[0x15] = pppppplVar39;
      uVar7 = pppppplVar39 == (long ******)0x92;
      if ((long ******)0x91 < pppppplVar39) {
        __ZdlPv(*param_2[0x12]);
        param_2[0x12] = param_2[0x12] + 1;
        param_2[0x15] = (long ******)((long)param_2[0x15] + -0x49);
      }
      ppppppplVar10 = unaff_x22;
      if ((*param_2 == (long ******)0x0) && (pppppplStack_110 != (long ******)0x0)) {
        FUN_10b978c70(param_2 + 2,apppppplStack_138);
        func_0x000107c3a098(param_2[2]);
        if (!(bool)uVar7) goto LAB_10b9767ac;
        pppppplStack_b0 = pppppplStack_110 + 3;
        uStack_a8 = 1;
        __ZNSt3__115recursive_mutex4lockEv();
        pppppplStack_b8 = pppppplStack_110;
        cStack_b9 = '\0';
        ppppppplVar36 = &pppppplStack_b8;
        param_4 = (long *******)&cStack_b9;
        param_3 = (long *******)0x1;
        ppppppplVar24 = unaff_x22;
        FUN_10b994bf0(&pppppplStack_88);
        uVar7 = pppppplStack_88 == (long ******)0x1;
        if ((bool)uVar7) {
          uVar7 = cStack_b9 == '\x01';
          ppppppplVar10 = unaff_x23;
          ppppppplVar36 = unaff_x25;
          if ((bool)uVar7) {
            param_3 = unaff_x23;
            FUN_10b994158(pppppplStack_110,apppppplStack_138);
          }
        }
        else {
          func_0x000107c31084();
          func_0x00010b98fa8c(appppplStack_100,apppppplStack_138);
          pppppplVar39 = appppplStack_100;
          func_0x000107c27e5c();
          pppppplStack_a0 = pppppplVar39;
          ppppppplStack_98 = ppppppplVar24;
          func_0x000107c2793c(&UNK_10f7cd364);
          param_4 = &pppppplStack_a0;
          func_0x00010b97e9e4(auStack_e8);
          func_0x000107c31080(&uStack_d0,ppppppplVar36,auStack_e8);
          FUN_10b99fa14(&uStack_c8,unaff_x23,&uStack_d0);
          FUN_10b99ff08(param_5,&uStack_c8);
          func_0x000104bda960(uStack_c8);
          func_0x000107c278f8(uStack_d0);
          func_0x00010b97edb8();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appppplStack_100);
        }
        func_0x000107c30f3c(apppppplStack_148);
        func_0x000107c2a668(&pppppplStack_88);
        ppppppplVar24 = &pppppplStack_b0;
        func_0x000107c2851c();
      }
      else {
LAB_10b9767ac:
        ppppppplVar24 = apppppplStack_148;
        func_0x000107c30f3c();
        ppppppplVar36 = unaff_x25;
      }
      if (((ulong)param_5[1] & 1) == 0) {
        func_0x00010b97f0f0();
        func_0x00010b97f0e8();
        func_0x00010b97f22c();
        unaff_x25 = ppppppplVar36;
        break;
      }
      param_3 = apppppplStack_138;
      param_4 = apppppplStack_148;
      ppppppplVar10 = param_2;
      ppppppplVar23 = param_5;
      FUN_10b976a10(&pppppplStack_88);
      bVar18 = *(byte *)(param_5 + 1);
      unaff_x25 = (long *******)(ulong)bVar18;
      if ((bVar18 & 1) == 0) {
        func_0x00010b97f0f0();
      }
      else {
        *(long *******)(lStack_108 + 0x18) = pppppplStack_88;
      }
      ppppppplVar24 = &pppppplStack_88;
      func_0x00010b97df98();
      func_0x00010b97f0e8();
      func_0x00010b97f22c();
    } while ((bVar18 & 1) != 0);
    if (((ulong)param_5[1] & 1) != 0) goto LAB_10b97692c;
    *param_1 = (long ******)0x0;
    param_1[1] = (long ******)0x0;
    param_1[2] = (long ******)0x0;
  }
  else {
LAB_10b97692c:
    ppppppplVar10 = apppppplStack_160;
    func_0x00010b97df6c();
    ppppppplVar24 = param_1;
  }
  func_0x00010b97ee5c();
  func_0x000107c39f7c(uStack_70);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  ppppppplVar36 = ppppppplVar24;
  func_0x00010b97f0e8();
  func_0x00010b97f22c();
  func_0x00010b97ee5c();
  func_0x00010b97e910();
  apcStack_180[1] = FUN_10b976a10;
  ppppppplVar9 = param_4;
  uStack_1d0 = unaff_x28;
  uStack_1c8 = unaff_x27;
  ppppppplStack_1c0 = unaff_x26;
  ppppppplStack_1b8 = unaff_x25;
  ppppppplStack_1b0 = (long *******)unaff_x24;
  ppppppplStack_1a8 = unaff_x23;
  ppppppplStack_1a0 = unaff_x22;
  ppppppplStack_198 = param_2;
  ppppppplStack_190 = param_5;
  ppppppplStack_188 = ppppppplVar24;
  apcStack_180[0] = (code *)&stack0xfffffffffffffff0;
  func_0x000107c39f9c();
  uVar7 = *(char *)ppppppplVar9 == '\x11';
  uStack_1e0 = extraout_x8_02;
  if ((bool)uVar7) {
    func_0x00010b990764(param_4);
    uVar17 = SUB81(ppppppplVar9,0);
    func_0x00010b97f0b4(*(undefined1 *)((long)param_4 + 1),&ppppppplStack_250);
    param_2 = ppppppplStack_250;
    ppppppplVar12 = ppppppplStack_250;
    ppppppplVar16 = param_4;
    FUN_10b9794f0(ppppppplVar36);
    ppppppplVar9 = param_2;
    FUN_10b972f3c();
    ppppppplVar23 = unaff_x22;
    param_3 = unaff_x25;
    goto LAB_10b978254;
  }
  ppppppplVar12 = param_3;
  ppppppplVar16 = param_3;
  FUN_10b978c70(ppppppplVar10 + 2);
  func_0x000107c3a098(ppppppplVar10[2]);
  uVar17 = SUB81(ppppppplVar9,0);
  if (!(bool)uVar7) {
    pppppplVar39 = (long ******)0x0;
    if (ppppppplVar12[3] != (long ******)0x0) {
      do {
        func_0x000107c39f98();
        uVar17 = SUB81(ppppppplVar9,0);
        pppppplVar39 = extraout_x8_03;
      } while (extraout_w11 != 0);
    }
    ppppppplVar9 = ppppppplVar36 + 1;
    *ppppppplVar36 = pppppplVar39;
    ppppppplVar12 = ppppppplVar12 + 4;
    func_0x000107c30f3c();
    goto LAB_10b978254;
  }
  cStack_301 = '\0';
  ppppppplVar9 = (long *******)&cStack_301;
  ppppppplVar16 = (long *******)0x1;
  ppppppplVar8 = ppppppplVar10;
  ppppppplVar12 = param_4;
  FUN_10b994bf0(&pppppplStack_218);
  uVar17 = SUB81(ppppppplVar9,0);
  uVar7 = pppppplStack_218 == (long ******)0x1;
  if (!(bool)uVar7) {
    func_0x000107c31084();
    ppppppplVar24 = param_3;
    func_0x00010b98fa8c(&ppppppplStack_2c0);
    func_0x00010b97ed14();
    ppppppplStack_200 = ppppppplVar24;
    ppppppplStack_1f8 = ppppppplVar12;
    func_0x000107c2793c(&UNK_10f7ccd74);
    func_0x00010b97e888();
    ppppppplVar24 = &pppppplStack_218;
    func_0x000107c31080(&ppppppplStack_2e0,ppppppplVar8,&ppppppplStack_250);
    FUN_10b99fa14(appppppplStack_270,&bStack_210,&ppppppplStack_2e0);
    ppppppplVar12 = (long *******)appppppplStack_270;
    func_0x00010b97f23c();
    func_0x00010b97ef50();
    func_0x000107c278f8(ppppppplStack_2e0);
    func_0x00010b97ea80();
    func_0x000107c3a014();
    *ppppppplVar36 = (long ******)0x0;
    ppppppplVar36[1] = (long ******)0x0;
    ppppppplVar36[2] = (long ******)0x0;
    goto LAB_10b97824c;
  }
  if ((cStack_301 == '\x01') &&
     (ppppppplVar8 = (long *******)*ppppppplVar10, ppppppplVar8 != (long *******)0x0)) {
    ppppppplVar16 = (long *******)&bStack_210;
    ppppppplVar12 = param_3;
    FUN_10b994158();
  }
  uVar7 = bStack_210 == 0x11;
  if ((bool)uVar7) {
    ppppppplVar16 = (long *******)&bStack_210;
    func_0x00010b990764();
    func_0x00010b97f0b4(bStack_20f,&ppppppplStack_310);
    goto LAB_10b9780d0;
  }
  uVar7 = bStack_210 == 1;
  if ((bool)uVar7) {
    ppppppplVar24 = (long *******)ppppppplVar10[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppplVar24 != (long *******)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_00 != 0);
    }
    ppppppplVar8[2] = (long ******)ppppppplVar24;
    *ppppppplVar8 = (long ******)&PTR_FUN_110d7bdb8;
    do {
      func_0x000107c39fa4();
      ppppppplStack_310 = ppppppplVar8;
    } while (extraout_w10 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_04,0x10);
      if (bVar2) {
        *extraout_x8_04 = extraout_x9_01;
        cVar6 = ExclusiveMonitorsStatus();
      }
      ppuVar31 = unaff_x24;
    } while (cVar6 != '\0');
    goto code_r0x00010b976b7c;
  }
  if ((bStack_20f & 1) != 0) {
    FUN_10b9907d0(&ppppppplStack_200,param_3);
    ppppppplVar12 = (long *******)&ppppppplStack_200;
    func_0x000107c31030(&ppppppplStack_2c0);
    FUN_10b9907d0(appppppplStack_270,&bStack_210);
    param_2 = (long *******)&ppppppplStack_2c0;
    ppppppplVar24 = (long *******)appppppplStack_270;
    ppppppplVar8 = (long *******)&ppppppplStack_250;
    ppppppplVar16 = (long *******)&ppppppplStack_2c0;
    ppppppplVar9 = (long *******)appppppplStack_270;
    func_0x00010b97e768();
    func_0x000107c3a064();
    func_0x000107c3a044();
    func_0x00010b97e958(&ppppppplStack_200);
    if (((ulong)ppppppplVar23[1] & 1) == 0) {
      ppppppplStack_310 = (long *******)0x0;
    }
    else {
      ppppppplVar24 = (long *******)ppppppplVar10[1];
      func_0x00010b97ed54();
      func_0x00010b97e654();
      if (ppppppplVar24 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_02 != 0);
      }
      ppppppplVar8[2] = (long ******)ppppppplVar24;
      *ppppppplVar8 = (long ******)&PTR_DAT_110d7be20;
      pppppplVar39 = (long ******)0x0;
      if (ppppppplStack_250 != (long *******)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppplVar39 = extraout_x9_03;
        } while (extraout_w12 != 0);
      }
      ppppppplVar8[3] = pppppplVar39;
      do {
        func_0x000107c39fa4();
        ppppppplStack_310 = ppppppplVar8;
      } while (extraout_w10_01 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_06,0x10);
        if (bVar2) {
          *extraout_x8_06 = extraout_x9_04;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((bool)uVar7) {
        func_0x00010b97e808();
      }
    }
    func_0x00010b97edb0();
    goto LAB_10b9780d0;
  }
  uVar19 = (uint)bStack_210;
  cVar5 = SBORROW4(uVar19,0x16);
  cVar6 = (int)(uVar19 - 0x16) < 0;
  uVar7 = uVar19 == 0x16;
  ppppppplVar29 = (long *******)&UNK_1003ab990;
  param_4 = (long *******)&UNK_1003ab990;
  unaff_x24 = &PTR_DAT_110d7c230;
  ppuVar31 = &PTR_DAT_110d7c230;
  switch(bStack_210) {
  case 0:
    ppppppplVar24 = (long *******)ppppppplVar10[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppplVar24 != (long *******)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_01 != 0);
    }
    ppppppplVar8[2] = (long ******)ppppppplVar24;
    *ppppppplVar8 = (long ******)&PTR_DAT_110d7c1c8;
    do {
      func_0x000107c39fa4();
      ppppppplStack_310 = ppppppplVar8;
    } while (extraout_w10_00 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_05,0x10);
      if (bVar2) {
        *extraout_x8_05 = extraout_x9_02;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    break;
  default:
    func_0x000107c31084();
    ppppppplVar29 = ppppppplVar8;
    func_0x00010b97f16c();
    func_0x00010b97ed14();
    ppppppplStack_200 = ppppppplVar29;
    ppppppplStack_1f8 = ppppppplVar12;
    func_0x000107c2793c(&UNK_10f7ccdcd);
    func_0x00010b97e888();
    func_0x000107c3a0f0(&ppppppplStack_200);
    FUN_10b99f560(appppppplStack_270,&ppppppplStack_200);
    ppppppplVar12 = (long *******)appppppplStack_270;
    func_0x00010b97f23c();
    func_0x00010b97ef50();
    func_0x00010b97f20c();
    func_0x00010b97ea80();
    func_0x000107c3a014();
    ppppppplStack_310 = (long *******)0x0;
    param_4 = ppppppplVar8;
    goto LAB_10b9780d0;
  case 2:
    param_4 = (long *******)ppppppplVar10[1];
    if ((bStack_20f >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_07 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7bfc0;
      do {
        func_0x000107c39fa4();
        ppppppplStack_310 = ppppppplVar8;
      } while (extraout_w10_06 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_11,0x10);
        if (bVar2) {
          *extraout_x8_11 = extraout_x9_13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_17 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_DAT_110d7bf58;
      do {
        func_0x000107c39fa4();
        ppppppplStack_310 = ppppppplVar8;
      } while (extraout_w10_19 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_22,0x10);
        if (bVar2) {
          *extraout_x8_22 = extraout_x9_27;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    break;
  case 3:
    param_4 = (long *******)ppppppplVar10[1];
    if ((bStack_20f >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_11 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7c090;
      do {
        func_0x000107c39fa4();
        ppppppplStack_310 = ppppppplVar8;
      } while (extraout_w10_10 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_15,0x10);
        if (bVar2) {
          *extraout_x8_15 = extraout_x9_19;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_19 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_DAT_110d7c028;
      do {
        func_0x000107c39fa4();
        ppppppplStack_310 = ppppppplVar8;
      } while (extraout_w10_21 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_24,0x10);
        if (bVar2) {
          *extraout_x8_24 = extraout_x9_29;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    break;
  case 4:
    param_4 = (long *******)ppppppplVar10[1];
    if ((bStack_20f >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_10 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7c160;
      do {
        func_0x000107c39fa4();
        ppppppplStack_310 = ppppppplVar8;
      } while (extraout_w10_09 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_14,0x10);
        if (bVar2) {
          *extraout_x8_14 = extraout_x9_18;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_18 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_DAT_110d7c0f8;
      do {
        func_0x000107c39fa4();
        ppppppplStack_310 = ppppppplVar8;
      } while (extraout_w10_20 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_23,0x10);
        if (bVar2) {
          *extraout_x8_23 = extraout_x9_28;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    break;
  case 5:
    param_4 = (long *******)ppppppplVar10[1];
    if ((bStack_20f >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_05 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7bef0;
      do {
        func_0x000107c39fa4();
        ppppppplStack_310 = ppppppplVar8;
      } while (extraout_w10_04 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_09,0x10);
        if (bVar2) {
          *extraout_x8_09 = extraout_x9_10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_16 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7be88;
      do {
        func_0x000107c39fa4();
        ppppppplStack_310 = ppppppplVar8;
      } while (extraout_w10_18 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_21,0x10);
        if (bVar2) {
          *extraout_x8_21 = extraout_x9_26;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    break;
  case 6:
    ppppppplVar24 = (long *******)ppppppplVar10[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppplVar24 != (long *******)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_08 != 0);
    }
    ppppppplVar8[2] = (long ******)ppppppplVar24;
    *ppppppplVar8 = (long ******)&PTR_DAT_110d7c230;
    do {
      func_0x000107c39fa4();
      ppppppplStack_310 = ppppppplVar8;
    } while (extraout_w10_07 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_12,0x10);
      if (bVar2) {
        *extraout_x8_12 = extraout_x9_14;
        cVar6 = ExclusiveMonitorsStatus();
      }
      ppuVar31 = unaff_x24;
    } while (cVar6 != '\0');
    break;
  case 7:
    ppppppplVar24 = (long *******)ppppppplVar10[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppplVar24 != (long *******)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_12 != 0);
    }
    ppppppplVar8[2] = (long ******)ppppppplVar24;
    *ppppppplVar8 = (long ******)&PTR_DAT_110d7c298;
    do {
      func_0x000107c39fa4();
      ppppppplStack_310 = ppppppplVar8;
    } while (extraout_w10_11 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_16,0x10);
      if (bVar2) {
        *extraout_x8_16 = extraout_x9_20;
        cVar6 = ExclusiveMonitorsStatus();
      }
      param_4 = ppppppplVar29;
      ppuVar31 = unaff_x24;
    } while (cVar6 != '\0');
    break;
  case 0xb:
    func_0x000107c3a0ec(&ppppppplStack_200);
    func_0x00010b97ef58();
    ppppppplVar24 = ppppppplStack_200;
    ppppppplVar8 = appppppplStack_270[0];
    if (((ulong)ppppppplVar23[1] & 1) == 0) {
      ppppppplStack_2c0 = ppppppplStack_200 + 2;
      apuStack_2b8[0] = &UNK_1003ab990;
      func_0x000107c2793c(&UNK_10f7cd021);
      ppppppplVar24 = (long *******)&ppppppplStack_250;
      ppppppplVar9 = (long *******)&ppppppplStack_2c0;
      func_0x000107c3a054(&ppppppplStack_250);
      func_0x00010b97ead0();
      ppppppplVar16 = extraout_x11;
      if (cVar6 == cVar5) {
        ppppppplVar16 = extraout_x8_25;
      }
      func_0x00010b97ec70();
      func_0x00010b97ea80();
      ppppppplStack_310 = (long *******)0x0;
      param_4 = ppppppplVar29;
    }
    else {
      uStack_32c = (uint)*(byte *)(ppppppplStack_200 + 3);
      appppppplStack_270[0] = (long *******)0x0;
      pppppplVar39 = ppppppplVar10[1];
      ppppppplVar16 = (long *******)((long)ppppppplStack_200[4] * 8 + 0x28);
      __Znwm();
      param_4 = ppppppplVar16 + 1;
      *param_4 = (long ******)0x1;
      func_0x00010b97eae8();
      param_2 = ppppppplVar24;
      if (pppppplVar39 != (long ******)0x0) {
        do {
          func_0x000107c39fa4();
          param_2 = ppppppplStack_200;
        } while (extraout_w10_12 != 0);
      }
      ppppppplVar16[2] = pppppplVar39;
      *ppppppplVar16 = (long ******)&PTR_FUN_110d7c4f0;
      do {
        func_0x000107c39fa4();
      } while (extraout_w10_13 != 0);
      ppppppplVar16[3] = (long ******)param_2;
      ppppppplVar16[4] = (long ******)ppppppplVar8;
      pppppplVar35 = ppppppplStack_200[4];
      ppppppplStack_328 = ppppppplVar16 + 5;
      for (pppppplVar39 = (long ******)0x0; pppppplVar35 != pppppplVar39;
          pppppplVar39 = (long ******)((long)pppppplVar39 + 1)) {
        ppppppplVar16[(long)((long)pppppplVar39 + 5)] = (long ******)0x0;
      }
      ppppppplStack_338 = ppppppplStack_310;
      ppppppplVar24 = (long *******)(ulong)uStack_32c;
      ppppppplStack_340 = ppppppplVar16;
      ppppppplStack_320 = ppppppplVar36;
      ppppppplStack_318 = param_3;
      for (pppppplVar39 = (long ******)0x0; ppppppplVar36 = ppppppplStack_200,
          ppppppplVar16 = ppppppplStack_200, pppppplVar39 < pppppplVar35;
          pppppplVar39 = (long ******)((long)pppppplVar39 + 1)) {
        ppppppplVar9 = ppppppplStack_200 + (long)pppppplVar39 * 3 + 5;
        func_0x00010b97f0c0(&ppppppplStack_2c0);
        if (((ulong)ppppppplVar23[1] & 1) == 0) {
          ppppppplStack_310 = (long *******)0x0;
code_r0x00010b977b38:
          func_0x00010b97f158();
          unaff_x24 = (undefined **)ppppppplVar8;
          goto code_r0x00010b977b44;
        }
        ppppppplVar8 = ppppppplStack_328 + (long)pppppplVar39;
        if (((int)ppppppplVar24 != 0) &&
           (pppppplVar35 = ppppppplVar10[0x1a], pppppplVar35 != (long ******)0x0)) {
          (*(code *)(*pppppplVar35)[2])
                    (&ppppppplStack_250,pppppplVar35,ppppppplVar36 + (long)pppppplVar39 * 3 + 6);
          ppppppplVar29 = (long *******)&ppppppplStack_250;
          ppppppplVar12 = ppppppplVar36 + (long)pppppplVar39 * 3 + 6;
          FUN_10b990e08();
          if ((int)ppppppplVar29 != 0) {
            param_2 = (long *******)&ppppppplStack_250;
            pppppplVar35 = ppppppplVar10[1];
            func_0x00010b97f234();
            ppppppplVar24 = ppppppplVar29 + 1;
            *ppppppplVar24 = (long ******)0x1;
            func_0x00010b97eae8();
            if (pppppplVar35 != (long ******)0x0) {
              do {
                func_0x000107c39fa4();
              } while (extraout_w10_22 != 0);
            }
            ppppppplVar29[2] = pppppplVar35;
            *ppppppplVar29 = (long ******)&PTR_DAT_110d7c558;
            unaff_x26 = ppppppplVar29 + 3;
            *unaff_x26 = (long ******)0x0;
            ppppppplVar29[4] = (long ******)0x0;
            ppppppplVar9 = ppppppplVar36 + (long)pppppplVar39 * 3 + 5;
            ppppppplVar16 = ppppppplStack_200;
            func_0x00010b97f0c0(&ppppppplStack_2e0);
            pppppplVar35 = ppppppplVar23[1];
            if (((ulong)pppppplVar35 & 1) == 0) {
              ppppppplStack_338 = (long *******)0x0;
            }
            else {
              FUN_10b972a1c(unaff_x26,&ppppppplStack_2c0);
              FUN_10b972a1c(ppppppplVar29 + 4,&ppppppplStack_2e0);
              do {
                cVar6 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar24,0x10);
                if (bVar2) {
                  *ppppppplVar24 = (long ******)((long)*ppppppplVar24 + 1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              ppppppplVar12 = (long *******)appppppplStack_2f8;
              appppppplStack_2f8[0] = ppppppplVar29;
              FUN_10b979edc(ppppppplVar8);
              FUN_10b972f3c(appppppplStack_2f8[0]);
            }
            func_0x00010b97f0e0();
            do {
              pppppplVar26 = *ppppppplVar24;
              cVar6 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar24,0x10);
              if (bVar2) {
                *ppppppplVar24 = (long ******)((long)pppppplVar26 + -1);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((long ******)((long)pppppplVar26 + -1) == (long ******)0x0) {
              func_0x00010b97ee6c();
            }
            ppppppplVar24 = (long *******)(ulong)uStack_32c;
            if (((ulong)pppppplVar35 & 1) == 0) {
              ppppppplStack_310 = ppppppplStack_338;
              func_0x000107c27900(&uStack_248);
              goto code_r0x00010b977b38;
            }
          }
          func_0x000107c27900(&uStack_248);
        }
        if (*ppppppplVar8 == (long ******)0x0) {
          pppppplVar35 = (long ******)0x0;
          if (ppppppplStack_2c0 != (long *******)0x0) {
            do {
              func_0x000107c39f98();
              pppppplVar35 = extraout_x8_28;
            } while (extraout_w11_20 != 0);
          }
          ppppppplVar12 = (long *******)&uStack_280;
          uStack_280 = pppppplVar35;
          FUN_10b979edc(ppppppplVar8);
          FUN_10b972f3c(uStack_280);
        }
        func_0x00010b97f158();
        pppppplVar35 = ppppppplStack_200[4];
      }
      ppppppplStack_310 = ppppppplStack_338;
      do {
        func_0x00010b97ef98();
      } while (extraout_w9 != 0);
      ppppppplStack_310 = ppppppplStack_340;
      unaff_x24 = (undefined **)ppppppplVar8;
code_r0x00010b977b44:
      do {
        param_3 = ppppppplStack_318;
        ppppppplVar36 = ppppppplStack_320;
        uVar7 = (long ******)((long)*param_4 + -1) == (long ******)0x0;
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_4,0x10);
        if (bVar2) {
          *param_4 = (long ******)((long)*param_4 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((bool)uVar7) {
        func_0x00010b97e808(ppppppplStack_340);
      }
    }
    FUN_10b97bc6c(appppppplStack_270[0]);
    func_0x000107c2792c(ppppppplStack_200);
    goto LAB_10b9780d0;
  case 0xc:
    func_0x00010b990904(&ppppppplStack_200,auStack_208);
    ppppppplVar8 = (long *******)ppppppplVar10[1];
    func_0x00010b97ef58();
    if (((ulong)ppppppplVar23[1] & 1) == 0) {
      ppppppplStack_2c0 = ppppppplStack_200 + 2;
      apuStack_2b8[0] = &UNK_1003ab990;
      func_0x000107c2793c(&UNK_10f7cd30b);
      ppppppplVar24 = (long *******)&ppppppplStack_250;
      ppppppplVar9 = (long *******)&ppppppplStack_2c0;
      func_0x000107c3a054(&ppppppplStack_250);
      func_0x00010b97ead0();
      ppppppplVar16 = extraout_x11_01;
      if (cVar6 == cVar5) {
        ppppppplVar16 = extraout_x8_27;
      }
      func_0x00010b97ec70();
      func_0x00010b97ea80();
      ppppppplStack_310 = (long *******)0x0;
    }
    else {
      param_2 = (long *******)(ulong)bStack_20f;
      ppppppplVar24 = (long *******)ppppppplVar10[1];
      func_0x00010b97ee54();
      ppppppplVar29 = appppppplStack_270[0];
      appppppplStack_270[0] = (long *******)0x0;
      ppppppplVar8[1] = (long ******)0x1;
      *ppppppplVar8 = (long ******)&PTR_DAT_110d7bd68;
      if (ppppppplVar24 != (long *******)0x0) {
        do {
          func_0x00010b97e7d0();
          ppppppplVar29 = extraout_x9_23;
        } while (extraout_w12_07 != 0);
      }
      ppppppplVar8[2] = (long ******)ppppppplVar24;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7c9c8;
      if (ppppppplStack_200 != (long *******)0x0) {
        ppppppplVar32 = ppppppplStack_200 + 1;
        do {
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar32,0x10);
          if (bVar2) {
            *ppppppplVar32 = (long ******)((long)*ppppppplVar32 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      ppppppplVar8[3] = (long ******)ppppppplStack_200;
      ppppppplVar8[4] = (long ******)ppppppplVar29;
      *(byte *)(ppppppplVar8 + 5) = bStack_20f >> 1 & 1;
      do {
        func_0x000107c39fa4();
        ppppppplStack_310 = ppppppplVar8;
      } while (extraout_w10_15 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_19,0x10);
        if (bVar2) {
          *extraout_x8_19 = extraout_x9_24;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((bool)uVar7) {
        func_0x00010b97e808();
      }
    }
    func_0x00010b9762a0(appppppplStack_270[0]);
    FUN_10b90558c(ppppppplStack_200);
    unaff_x24 = ppuVar31;
    goto LAB_10b9780d0;
  case 0xd:
    FUN_10b9908c0(&pppppplStack_258,auStack_208);
    ppppppplVar16 = (long *******)appppppplStack_270;
    func_0x00010b97e78c();
    if (((ulong)ppppppplVar23[1] & 1) == 0) {
      func_0x00010b97f16c();
      func_0x00010b97ed14();
      ppppppplStack_200 = ppppppplVar16;
      ppppppplStack_1f8 = ppppppplVar12;
      func_0x00010b97f1b8();
      ppppppplVar24 = (long *******)&ppppppplStack_250;
      func_0x00010b97e888();
      func_0x00010b97ead0();
      ppppppplVar16 = extraout_x11_00;
      if (cVar6 == cVar5) {
        ppppppplVar16 = extraout_x8_26;
      }
      func_0x00010b97ec70();
      func_0x00010b97ea80();
      func_0x000107c3a014();
      ppppppplStack_310 = (long *******)0x0;
    }
    else {
      ppppppplVar12 = (long *******)(pppppplStack_258 + 3);
      func_0x000107c30f3c(&uStack_280);
      uVar19 = (uint)bRam00000001133fad7c;
      cVar5 = SBORROW4(uVar19,1);
      cVar6 = (int)(uVar19 - 1) < 0;
      uVar7 = uVar19 == 1;
      if ((bool)uVar7) {
        uVar19 = (uint)(byte)uStack_280;
        cVar6 = false;
        uVar7 = true;
        if (uVar19 != 0x10) {
          cVar6 = (int)((byte)uStack_280 - 1) < 0;
          uVar7 = (byte)uStack_280 == 1;
        }
        cVar5 = uVar19 != 0x10 && SBORROW4(uVar19,1);
        if (((bool)uVar7) ||
           (pppppplStack_288 = (long ******)0x0, (*(byte *)((long)pppppplStack_258 + 0x12) & 1) != 0
           )) goto code_r0x00010b977478;
        bVar18 = uStack_280._1_1_;
        pppppplVar26 = *ppppppplVar10;
        ppppppplStack_2c0 = ppppppplVar10;
        func_0x000107c30df0(apuStack_2b8,appppppplStack_270);
        func_0x000107c30f3c(auStack_2a0,&uStack_280);
        ppppppplVar24 = (long *******)0x58;
        __Znwm();
        FUN_10b979f14(&ppppppplStack_250,&ppppppplStack_2c0);
        ppppppplVar9 = (long *******)0x38;
        __Znwm();
        *ppppppplVar9 = (long ******)&PTR_FUN_110d7c300;
        FUN_10b979f14(ppppppplVar9 + 1,&ppppppplStack_250);
        bVar18 = bVar18 & 1;
        pppppplVar35 = ppppppplVar10[1];
        ppppppplVar16 = ppppppplVar24 + 1;
        *ppppppplVar16 = (long ******)0x1;
        *ppppppplVar24 = (long ******)&PTR_DAT_110d7bd68;
        pppppplVar39 = (long ******)0x0;
        ppppppplStack_1e8 = ppppppplVar9;
        if (pppppplVar35 != (long ******)0x0) {
          do {
            func_0x00010b97e7d0();
            pppppplVar39 = extraout_x9_30;
            bVar18 = extraout_w8;
          } while (extraout_w12_08 != 0);
        }
        ppppppplVar24[2] = pppppplVar39;
        *ppppppplVar24 = (long ******)&PTR_FUN_110d7c390;
        *(byte *)(ppppppplVar24 + 3) = bVar18;
        ppppppplVar24[4] = pppppplVar26;
        if (ppppppplStack_1e8 == (long *******)0x0) {
          ppppppplVar24[8] = (long ******)0x0;
        }
        else {
          uVar7 = (long ********)ppppppplStack_1e8 == &ppppppplStack_200;
          if ((bool)uVar7) {
            ppppppplVar24[8] = (long ******)(ppppppplVar24 + 5);
            (*(code *)(*ppppppplStack_1e8)[3])(ppppppplStack_1e8);
          }
          else {
            ppppppplVar24[8] = (long ******)ppppppplStack_1e8;
            ppppppplStack_1e8 = (long *******)0x0;
          }
        }
        ppppppplVar24[9] = (long ******)0x0;
        ppppppplVar24[10] = (long ******)0x0;
        func_0x00010b97a43c(&ppppppplStack_200);
        func_0x00010b97a478(&ppppppplStack_250);
        do {
          func_0x000107c3a00c();
        } while (extraout_w9_01 != 0);
        ppppppplVar12 = (long *******)&ppppppplStack_2e0;
        ppppppplStack_2e0 = ppppppplVar24;
        FUN_10b979edc(&pppppplStack_288);
        func_0x00010b97f0e0();
        do {
          func_0x000107c3a0a0();
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar16,0x10);
          if (bVar2) {
            *ppppppplVar16 = extraout_x8_37;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((bool)uVar7) {
          func_0x00010b97e8d8();
        }
        func_0x00010b97a478(&ppppppplStack_2c0);
code_r0x00010b977abc:
        pppppplVar39 = pppppplStack_288;
        param_2 = &pppppplStack_218;
        cVar6 = *(char *)(pppppplStack_258 + 3);
        uVar19 = 0;
        if (cVar6 != '\x01') {
          uVar19 = 9;
        }
        uVar1 = 2;
        if (cVar6 != '\x10') {
          uVar1 = uVar19;
        }
        ppppppplVar24 = (long *******)(ulong)uVar1;
        ppppppplStack_320 = ppppppplVar36;
        ppppppplStack_318 = param_3;
        if (pppppplStack_288 != (long ******)0x0) {
          do {
            func_0x000107c39fa4();
          } while (extraout_w10_23 != 0);
        }
        pppppplVar35 = (long ******)pppppplStack_258[5];
        if ((cVar6 == '\x10') || (*(char *)((long)pppppplStack_258 + 0x12) == '\x01')) {
          pppppplVar26 = ppppppplVar10[0x17];
          if ((pppppplVar26 != (long ******)0x0) && (pppppplVar26[2] != (long *****)0x0)) {
            do {
              func_0x000107c39fdc();
            } while (extraout_w10_24 != 0);
          }
        }
        else {
          pppppplVar26 = (long ******)0x0;
        }
        ppppppplVar29 = (long *******)((long)pppppplVar35 * 8 + 0x40);
        __Znwm();
        unaff_x26 = ppppppplVar29 + 1;
        *unaff_x26 = (long ******)0x1;
        *ppppppplVar29 = (long ******)&PTR_FUN_110d7c3f8;
        ppppppplVar29[2] = pppppplVar39;
        ppppppplVar29[3] = pppppplVar35;
        *(char *)(ppppppplVar29 + 4) = (char)uVar1;
        *(bool *)((long)ppppppplVar29 + 0x21) = cVar6 == '\x10';
        if ((pppppplVar26 != (long ******)0x0) && (pppppplVar26[2] != (long *****)0x0)) {
          do {
            func_0x000107c39fdc();
          } while (extraout_w10_25 != 0);
        }
        ppppppplVar29[5] = pppppplVar26;
        pppppplVar39 = (long ******)0x0;
        if (ppppppplVar10[0x18] != (long ******)0x0) {
          do {
            func_0x000107c3a010();
            pppppplVar39 = extraout_x8_30;
          } while (extraout_w11_21 != 0);
        }
        ppppppplVar29[6] = pppppplVar39;
        pppppplVar39 = (long ******)0x0;
        if (ppppppplVar10[0x19] != (long ******)0x0) {
          do {
            func_0x000107c3a010();
            pppppplVar39 = extraout_x8_31;
          } while (extraout_w11_22 != 0);
        }
        ppppppplVar29[7] = pppppplVar39;
        lVar25 = 0x40;
        for (; pppppplVar35 != (long ******)0x0;
            pppppplVar35 = (long ******)((long)pppppplVar35 + -1)) {
          *(undefined8 *)((long)ppppppplVar29 + lVar25) = 0;
          lVar25 = lVar25 + 8;
        }
        func_0x000107c2ab10(pppppplVar26);
        unaff_x24 = (undefined **)ppppppplStack_310;
        for (ppppppplVar8 = (long *******)0x0;
            uVar7 = ppppppplVar8 == (long *******)pppppplStack_258[5],
            ppppppplVar8 < pppppplStack_258[5];
            ppppppplVar8 = (long *******)((long)ppppppplVar8 + 1)) {
          ppppppplVar24 = (long *******)(pppppplStack_258 + (long)ppppppplVar8 * 2);
          func_0x00010b97e78c(&ppppppplStack_2c0);
          if (((ulong)ppppppplVar23[1] & 1) == 0) {
            func_0x00010b97f150(&ppppppplStack_2e0);
            ppppppplVar24 = (long *******)&ppppppplStack_2e0;
            func_0x000107c27e5c();
            uStack_248 = 0;
            ppppppplStack_250 = ppppppplVar8;
            ppppppplStack_240 = ppppppplVar24;
            ppppppplStack_238 = ppppppplVar12;
            func_0x00010b97f134();
            ppppppplVar24 = (long *******)&ppppppplStack_200;
            ppppppplVar9 = (long *******)&ppppppplStack_250;
            func_0x00010b97f124(&ppppppplStack_200);
            uVar7 = bStack_1e9 == 0;
            ppppppplVar16 = ppppppplStack_1f8;
            ppppppplVar12 = ppppppplStack_200;
            if (-1 < (char)bStack_1e9) {
              ppppppplVar16 = (long *******)(ulong)bStack_1e9;
              ppppppplVar12 = ppppppplVar24;
            }
            func_0x00010b97ec70();
            func_0x00010b97eef0();
            func_0x00010b97ebf4();
            ppppppplStack_310 = (long *******)0x0;
            func_0x00010b97e918();
            param_3 = ppppppplStack_318;
            ppppppplVar36 = ppppppplStack_320;
            ppppppplVar32 = ppppppplStack_310;
            goto code_r0x00010b977fc8;
          }
          ppppppplVar16 = (long *******)&ppppppplStack_2c0;
          ppppppplVar9 = ppppppplVar24 + 6;
          func_0x00010b97e768(&ppppppplStack_200);
          bVar18 = *(byte *)(ppppppplVar23 + 1);
          if ((bVar18 & 1) == 0) {
            func_0x00010b97f150(appppppplStack_2f8);
            ppppppplVar36 = (long *******)appppppplStack_2f8;
            func_0x000107c27e5c();
            uStack_248 = 0;
            ppppppplStack_250 = ppppppplVar8;
            ppppppplStack_240 = ppppppplVar36;
            ppppppplStack_238 = ppppppplVar12;
            func_0x00010b97f134();
            ppppppplVar9 = (long *******)&ppppppplStack_250;
            func_0x00010b97f124(&ppppppplStack_2e0);
            uVar7 = bStack_2c9 == 0;
            ppppppplVar16 = ppppppplStack_2d8;
            ppppppplVar12 = ppppppplStack_2e0;
            if (-1 < (char)bStack_2c9) {
              ppppppplVar16 = (long *******)(ulong)bStack_2c9;
              ppppppplVar12 = (long *******)&ppppppplStack_2e0;
            }
            func_0x00010b97ec70();
            func_0x00010b97ebf4();
            func_0x00010b97ee7c();
            unaff_x24 = (undefined **)0x0;
          }
          else {
            pppppplVar39 = (long ******)0x0;
            if (ppppppplStack_200 != (long *******)0x0) {
              do {
                func_0x000107c39f98();
                pppppplVar39 = extraout_x8_32;
              } while (extraout_w11_23 != 0);
            }
            ppppppplVar12 = &pppppplStack_300;
            pppppplStack_300 = pppppplVar39;
            FUN_10b979edc(ppppppplVar29 + (long)(ppppppplVar8 + 1));
            FUN_10b972f3c(pppppplStack_300);
          }
          func_0x00010b97eee8();
          func_0x00010b97e918();
          param_3 = ppppppplStack_318;
          ppppppplVar36 = ppppppplStack_320;
          ppppppplVar32 = (long *******)unaff_x24;
          if (bVar18 == 0) goto code_r0x00010b977fc8;
        }
        pppppplVar39 = ppppppplVar10[1];
        ppppppplStack_328 = ppppppplVar10;
        ppppppplStack_310 = (long *******)unaff_x24;
        do {
          func_0x000107c3a00c();
        } while (extraout_w9_00 != 0);
        ppppppplVar12 = (long *******)&ppppppplStack_250;
        ppppppplVar16 = &pppppplStack_258;
        ppppppplVar9 = ppppppplVar23;
        ppppppplStack_250 = ppppppplVar29;
        (*(code *)(*pppppplVar39)[0x24])(&ppppppplStack_2e0);
        ppppppplVar10 = ppppppplStack_250;
        FUN_10b97ad80();
        unaff_x24 = (undefined **)ppppppplStack_2e0;
        uVar7 = *(char *)(ppppppplVar23 + 1) != '\x01' || ppppppplStack_2e0 == (long *******)0x0;
        if (*(char *)(ppppppplVar23 + 1) != '\x01' || ppppppplStack_2e0 == (long *******)0x0) {
          func_0x000107c31084();
          ppppppplVar36 = ppppppplVar10;
          func_0x00010b97f150(&ppppppplStack_2c0);
          func_0x00010b97ed14();
          ppppppplStack_200 = ppppppplVar36;
          ppppppplStack_1f8 = ppppppplVar12;
          func_0x000107c2793c(&UNK_10f7cce43);
          func_0x00010b97e888();
          func_0x000107c31080(&ppppppplStack_200,ppppppplVar10,&ppppppplStack_250);
          FUN_10b99f560(appppppplStack_2f8,&ppppppplStack_200);
          ppppppplVar12 = (long *******)appppppplStack_2f8;
          func_0x00010b97f23c();
          func_0x000104bda960(appppppplStack_2f8[0]);
          func_0x00010b97f20c();
          func_0x00010b97ea80();
          func_0x000107c3a014();
          ppppppplStack_310 = (long *******)0x0;
          unaff_x24 = (undefined **)ppppppplVar10;
        }
        else {
          ppppppplVar24 = (long *******)ppppppplStack_328[1];
          func_0x00010b97ed54();
          ppppppplStack_2e0 = (long *******)0x0;
          func_0x00010b97e654();
          if (ppppppplVar24 != (long *******)0x0) {
            do {
              func_0x000107c39f98();
            } while (extraout_w11_24 != 0);
          }
          *ppppppplVar10 = (long ******)&PTR_DAT_110d7c488;
          ppppppplVar10[2] = (long ******)ppppppplVar24;
          ppppppplVar10[3] = (long ******)unaff_x24;
          do {
            func_0x000107c39fa4();
          } while (extraout_w10_26 != 0);
          do {
            ppppppplStack_310 = ppppppplVar10;
            func_0x000107c3a128();
            cVar6 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_33,0x10);
            if (bVar2) {
              *extraout_x8_33 = extraout_x9_31;
              cVar6 = ExclusiveMonitorsStatus();
            }
            ppppppplVar10 = ppppppplStack_310;
          } while (cVar6 != '\0');
          if ((bool)uVar7) {
            func_0x00010b97e808();
          }
        }
        FUN_10b97aefc(ppppppplStack_2e0);
        param_3 = ppppppplStack_318;
        ppppppplVar36 = ppppppplStack_320;
        ppppppplVar10 = ppppppplStack_328;
        ppppppplVar32 = ppppppplStack_310;
code_r0x00010b977fc8:
        do {
          ppppppplStack_310 = ppppppplVar32;
          func_0x000107c3a0a0();
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar2) {
            *unaff_x26 = extraout_x8_34;
            cVar6 = ExclusiveMonitorsStatus();
          }
          ppppppplVar32 = ppppppplStack_310;
        } while (cVar6 != '\0');
        if ((bool)uVar7) {
          func_0x00010b97e8d8();
        }
      }
      else {
code_r0x00010b977478:
        pppppplStack_288 = (long ******)0x0;
        ppppppplVar16 = (long *******)appppppplStack_270;
        ppppppplVar9 = (long *******)&uStack_280;
        func_0x00010b97e768(&ppppppplStack_250);
        bVar18 = *(byte *)(ppppppplVar23 + 1);
        ppppppplVar29 = (long *******)(ulong)bVar18;
        if ((bVar18 & 1) == 0) {
          func_0x00010b98fa8c(&ppppppplStack_200,&bStack_210);
          ppppppplVar24 = (long *******)&ppppppplStack_200;
          func_0x000107c27e5c();
          ppppppplStack_2e0 = ppppppplVar24;
          ppppppplStack_2d8 = ppppppplVar12;
          func_0x00010b97f1b8();
          ppppppplVar24 = (long *******)&ppppppplStack_2c0;
          ppppppplVar9 = (long *******)&ppppppplStack_2e0;
          func_0x00010b97e9e4(&ppppppplStack_2c0);
          func_0x000107c3a068();
          ppppppplVar16 = extraout_x11_02;
          ppppppplVar12 = extraout_x10;
          if (cVar6 == cVar5) {
            ppppppplVar16 = extraout_x8_29;
            ppppppplVar12 = ppppppplVar24;
          }
          func_0x00010b97ec70();
          func_0x000107c3a014();
          func_0x00010b97eef0();
          ppppppplStack_310 = (long *******)0x0;
        }
        else {
          ppppppplVar12 = (long *******)&ppppppplStack_250;
          FUN_10b972a1c(&pppppplStack_288);
        }
        func_0x00010b97edb0();
        if ((bVar18 & 1) != 0) goto code_r0x00010b977abc;
      }
      FUN_10b972f3c(pppppplStack_288);
      func_0x00010b97e958(&uStack_280);
    }
    func_0x00010b97e958(appppppplStack_270);
    func_0x000107c30df4(pppppplStack_258);
    param_4 = ppppppplVar29;
    goto LAB_10b9780d0;
  case 0xe:
    FUN_10b990668(&ppppppplStack_200,&bStack_210);
    ppppppplVar16 = (long *******)&ppppppplStack_200;
    func_0x00010b97e78c(&ppppppplStack_250);
    if (((ulong)ppppppplVar23[1] & 1) == 0) {
      func_0x00010b97e8b8();
      ppppppplStack_310 = (long *******)0x0;
    }
    else {
      ppppppplVar8 = (long *******)&ppppppplStack_2c0;
      ppppppplVar16 = (long *******)&ppppppplStack_250;
      ppppppplVar9 = (long *******)0x0;
      func_0x00010b97e768();
      if (((ulong)ppppppplVar23[1] & 1) == 0) {
        func_0x00010b97e8b8();
        ppppppplStack_310 = (long *******)0x0;
      }
      else {
        ppppppplVar24 = (long *******)ppppppplVar10[1];
        func_0x00010b97ed54();
        func_0x00010b97e654();
        if (ppppppplVar24 != (long *******)0x0) {
          do {
            func_0x000107c39f98();
          } while (extraout_w11_04 != 0);
        }
        ppppppplVar8[2] = (long ******)ppppppplVar24;
        *ppppppplVar8 = (long ******)&PTR_FUN_110d7c5c0;
        pppppplVar39 = (long ******)0x0;
        if (ppppppplStack_2c0 != (long *******)0x0) {
          do {
            func_0x00010b97e7d0();
            pppppplVar39 = extraout_x9_08;
          } while (extraout_w12_02 != 0);
        }
        ppppppplVar8[3] = pppppplVar39;
        do {
          func_0x000107c39fa4();
          ppppppplStack_310 = ppppppplVar8;
        } while (extraout_w10_03 != 0);
        do {
          func_0x000107c3a128();
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_08,0x10);
          if (bVar2) {
            *extraout_x8_08 = extraout_x9_09;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((bool)uVar7) {
          func_0x00010b97e808();
        }
      }
      func_0x00010b97ee34();
    }
    func_0x00010b97e958(&ppppppplStack_250);
    lVar25 = -0x80;
    goto code_r0x00010b9780cc;
  case 0xf:
    ppppppplVar29 = (long *******)&bStack_210;
    func_0x00010b9906a4();
    func_0x00010b97e708();
    if (((ulong)ppppppplVar23[1] & 1) == 0) {
      func_0x00010b97e8c8();
      goto code_r0x00010b977778;
    }
    ppppppplVar16 = ppppppplVar29 + 4;
    func_0x00010b97e78c(&ppppppplStack_2c0);
    if (((ulong)ppppppplVar23[1] & 1) != 0) {
      ppppppplVar8 = (long *******)&ppppppplStack_200;
      func_0x00010b97e730();
      if (((ulong)ppppppplVar23[1] & 1) != 0) {
        func_0x00010b97efa8();
        func_0x00010b97e768();
        if (((ulong)ppppppplVar23[1] & 1) != 0) {
          ppppppplVar24 = (long *******)ppppppplVar10[1];
          func_0x00010b97f234();
          func_0x00010b97e654();
          if (ppppppplVar24 != (long *******)0x0) {
            do {
              func_0x000107c39f98();
            } while (extraout_w11_09 != 0);
          }
          ppppppplVar8[2] = (long ******)ppppppplVar24;
          *ppppppplVar8 = (long ******)&PTR_FUN_110d7c628;
          pppppplVar39 = (long ******)0x0;
          if (ppppppplStack_200 != (long *******)0x0) {
            do {
              func_0x00010b97e7d0();
              pppppplVar39 = extraout_x9_15;
            } while (extraout_w12_04 != 0);
          }
          ppppppplVar8[3] = pppppplVar39;
          pppppplVar39 = (long ******)0x0;
          if (appppppplStack_270[0] != (long *******)0x0) {
            do {
              func_0x00010b97e7d0();
              pppppplVar39 = extraout_x9_16;
            } while (extraout_w12_05 != 0);
          }
          ppppppplVar8[4] = pppppplVar39;
          do {
            func_0x000107c39fa4();
            ppppppplStack_310 = ppppppplVar8;
          } while (extraout_w10_08 != 0);
          do {
            func_0x000107c3a128();
            cVar6 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_13,0x10);
            if (bVar2) {
              *extraout_x8_13 = extraout_x9_17;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          goto code_r0x00010b9770f8;
        }
        func_0x00010b97e8a8();
code_r0x00010b977f38:
        ppppppplStack_310 = (long *******)0x0;
        goto code_r0x00010b977f3c;
      }
      func_0x00010b97e8c8();
code_r0x00010b977b90:
      ppppppplStack_310 = (long *******)0x0;
      goto code_r0x00010b9780c0;
    }
    func_0x00010b97e8a8();
code_r0x00010b977a2c:
    ppppppplStack_310 = (long *******)0x0;
code_r0x00010b9780c4:
    func_0x00010b97e918();
    goto code_r0x00010b9780c8;
  case 0x10:
    ppppppplVar29 = (long *******)&bStack_210;
    func_0x00010b990744();
    func_0x00010b97e708();
    if (((ulong)ppppppplVar23[1] & 1) != 0) {
      ppppppplVar8 = (long *******)&ppppppplStack_2c0;
      func_0x00010b97e730();
      if (((ulong)ppppppplVar23[1] & 1) != 0) {
        ppppppplVar24 = (long *******)ppppppplVar10[1];
        func_0x00010b97ed54();
        func_0x00010b97e654();
        if (ppppppplVar24 != (long *******)0x0) {
          do {
            func_0x000107c39f98();
          } while (extraout_w11_06 != 0);
        }
        ppppppplVar8[2] = (long ******)ppppppplVar24;
        *ppppppplVar8 = (long ******)&PTR_FUN_110d7ca30;
        pppppplVar39 = (long ******)0x0;
        if (ppppppplStack_2c0 != (long *******)0x0) {
          do {
            func_0x00010b97e7d0();
            pppppplVar39 = extraout_x9_11;
          } while (extraout_w12_03 != 0);
        }
        ppppppplVar8[3] = pppppplVar39;
        do {
          func_0x000107c39fa4();
          ppppppplStack_310 = ppppppplVar8;
        } while (extraout_w10_05 != 0);
        do {
          func_0x000107c3a128();
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_10,0x10);
          if (bVar2) {
            *extraout_x8_10 = extraout_x9_12;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto code_r0x00010b977380;
      }
      func_0x00010b97e8b8();
code_r0x00010b977a14:
      ppppppplStack_310 = (long *******)0x0;
code_r0x00010b977a18:
      func_0x00010b97ee34();
      goto code_r0x00010b9780c8;
    }
    func_0x00010b97e8b8();
    goto code_r0x00010b977778;
  case 0x12:
    ppppppplVar29 = (long *******)&bStack_210;
    func_0x00010b9906c4();
    func_0x00010b97e708();
    if (((ulong)ppppppplVar23[1] & 1) != 0) {
      ppppppplVar16 = ppppppplVar29 + 4;
      func_0x00010b97e78c(&ppppppplStack_2c0);
      if (((ulong)ppppppplVar23[1] & 1) == 0) {
        func_0x00010b97e8a8();
        goto code_r0x00010b977a2c;
      }
      ppppppplVar8 = (long *******)&ppppppplStack_200;
      func_0x00010b97e730();
      if (((ulong)ppppppplVar23[1] & 1) == 0) {
        func_0x00010b97e8c8();
        goto code_r0x00010b977b90;
      }
      func_0x00010b97efa8();
      func_0x00010b97e768();
      if (((ulong)ppppppplVar23[1] & 1) == 0) {
        func_0x00010b97e8a8();
        goto code_r0x00010b977f38;
      }
      ppppppplVar24 = (long *******)ppppppplVar10[1];
      func_0x00010b97f234();
      func_0x00010b97e654();
      if (ppppppplVar24 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_03 != 0);
      }
      ppppppplVar8[2] = (long ******)ppppppplVar24;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7c6e8;
      pppppplVar39 = (long ******)0x0;
      if (ppppppplStack_200 != (long *******)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppplVar39 = extraout_x9_05;
        } while (extraout_w12_00 != 0);
      }
      ppppppplVar8[3] = pppppplVar39;
      pppppplVar39 = (long ******)0x0;
      if (appppppplStack_270[0] != (long *******)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppplVar39 = extraout_x9_06;
        } while (extraout_w12_01 != 0);
      }
      ppppppplVar8[4] = pppppplVar39;
      do {
        func_0x000107c39fa4();
        ppppppplStack_310 = ppppppplVar8;
      } while (extraout_w10_02 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_07,0x10);
        if (bVar2) {
          *extraout_x8_07 = extraout_x9_07;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
code_r0x00010b9770f8:
      if ((bool)uVar7) {
        func_0x00010b97e808();
      }
code_r0x00010b977f3c:
      func_0x00010b97f244();
      param_2 = ppppppplVar10;
code_r0x00010b9780c0:
      func_0x00010b97eee8();
      goto code_r0x00010b9780c4;
    }
    func_0x00010b97e8c8();
    goto code_r0x00010b977778;
  case 0x13:
    ppppppplVar29 = (long *******)&bStack_210;
    func_0x00010b9906e4();
    func_0x00010b97e708();
    if (((ulong)ppppppplVar23[1] & 1) != 0) {
      ppppppplVar8 = (long *******)&ppppppplStack_2c0;
      func_0x00010b97e730();
      if (((ulong)ppppppplVar23[1] & 1) == 0) {
        ppppppplVar12 = (long *******)&UNK_10f7cd22d;
        func_0x00010b97e990();
        goto code_r0x00010b977a14;
      }
      ppppppplVar24 = (long *******)ppppppplVar10[1];
      func_0x00010b97ed54();
      func_0x00010b97e654();
      if (ppppppplVar24 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_13 != 0);
      }
      ppppppplVar8[2] = (long ******)ppppppplVar24;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7c798;
      pppppplVar39 = (long ******)0x0;
      if (ppppppplStack_2c0 != (long *******)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppplVar39 = extraout_x9_21;
        } while (extraout_w12_06 != 0);
      }
      ppppppplVar8[3] = pppppplVar39;
      do {
        func_0x000107c39fa4();
        ppppppplStack_310 = ppppppplVar8;
      } while (extraout_w10_14 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_17,0x10);
        if (bVar2) {
          *extraout_x8_17 = extraout_x9_22;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
code_r0x00010b977380:
      if ((bool)uVar7) {
        func_0x00010b97e808();
      }
      goto code_r0x00010b977a18;
    }
    ppppppplVar12 = (long *******)&UNK_10f7cd22d;
    func_0x00010b97e990();
    goto code_r0x00010b977778;
  case 0x14:
    ppppppplVar29 = (long *******)&bStack_210;
    func_0x00010b990704();
    func_0x00010b97e708();
    if (((ulong)ppppppplVar23[1] & 1) != 0) {
      ppppppplVar16 = ppppppplVar29 + 4;
      func_0x00010b97e78c(&ppppppplStack_2c0);
      if (((ulong)ppppppplVar23[1] & 1) == 0) {
        ppppppplVar12 = (long *******)&UNK_10f7cd2ab;
        func_0x00010b97e990();
        goto code_r0x00010b977a2c;
      }
      ppppppplVar8 = (long *******)&ppppppplStack_200;
      func_0x00010b97e730();
      if (((ulong)ppppppplVar23[1] & 1) == 0) {
        ppppppplVar12 = (long *******)&UNK_10f7cd285;
        func_0x00010b97e990();
        goto code_r0x00010b977b90;
      }
      func_0x00010b97efa8();
      func_0x00010b97e768();
      if (((ulong)ppppppplVar23[1] & 1) == 0) {
        ppppppplVar12 = (long *******)&UNK_10f7cd2ab;
        func_0x00010b97e990();
        ppppppplStack_310 = (long *******)0x0;
      }
      else {
        func_0x00010b97ee54();
        pppppplVar39 = ppppppplVar10[1];
        ppppppplVar32 = ppppppplVar8 + 1;
        *ppppppplVar32 = (long ******)0x1;
        *ppppppplVar8 = (long ******)&PTR_DAT_110d7bd68;
        ppppppplVar29 = ppppppplVar8;
        if (pppppplVar39 == (long ******)0x0) {
          ppppppplVar24 = (long *******)0x0;
          pppppplVar39 = (long ******)0x0;
        }
        else {
          do {
            func_0x000107c39f98();
          } while (extraout_w11_14 != 0);
          ppppppplVar24 = (long *******)ppppppplVar10[1];
          pppppplVar39 = extraout_x8_18;
        }
        ppppppplVar8[2] = pppppplVar39;
        *ppppppplVar8 = (long ******)&PTR_FUN_110d7c848;
        func_0x000107c3a018();
        ppppppplVar29[1] = (long ******)0x1;
        func_0x00010b97eae8();
        if (ppppppplVar24 != (long *******)0x0) {
          do {
            func_0x000107c39fa4();
          } while (extraout_w10_27 != 0);
        }
        ppppppplVar29[2] = (long ******)ppppppplVar24;
        *ppppppplVar29 = (long ******)&PTR_DAT_110d7c230;
        ppppppplVar8[3] = (long ******)ppppppplVar29;
        pppppplVar39 = (long ******)0x0;
        if (ppppppplStack_200 != (long *******)0x0) {
          do {
            func_0x000107c39f98();
            pppppplVar39 = extraout_x8_35;
          } while (extraout_w11_25 != 0);
        }
        ppppppplVar8[4] = pppppplVar39;
        pppppplVar39 = (long ******)0x0;
        if (appppppplStack_270[0] != (long *******)0x0) {
          do {
            func_0x000107c39f98();
            pppppplVar39 = extraout_x8_36;
          } while (extraout_w11_26 != 0);
        }
        ppppppplVar8[5] = pppppplVar39;
        do {
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar32,0x10);
          if (bVar2) {
            *ppppppplVar32 = (long ******)((long)*ppppppplVar32 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
          ppppppplStack_310 = ppppppplVar8;
        } while (cVar6 != '\0');
        do {
          uVar7 = (long ******)((long)*ppppppplVar32 + -1) == (long ******)0x0;
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar32,0x10);
          if (bVar2) {
            *ppppppplVar32 = (long ******)((long)*ppppppplVar32 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        ppppppplVar29 = ppppppplVar8;
        if ((bool)uVar7) {
          func_0x00010b97e8d8();
        }
      }
      func_0x00010b97f244();
      param_2 = param_3;
      unaff_x26 = ppppppplVar10;
      goto code_r0x00010b9780c0;
    }
    ppppppplVar12 = (long *******)&UNK_10f7cd285;
    func_0x00010b97e990();
code_r0x00010b977778:
    ppppppplStack_310 = (long *******)0x0;
code_r0x00010b9780c8:
    lVar25 = -0xd0;
code_r0x00010b9780cc:
    func_0x00010b97e958((long)apcStack_180 + lVar25);
    param_4 = ppppppplVar29;
    goto LAB_10b9780d0;
  case 0x15:
    ppppppplVar24 = (long *******)ppppppplVar10[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (ppppppplVar24 != (long *******)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_15 != 0);
    }
    ppppppplVar8[2] = (long ******)ppppppplVar24;
    *ppppppplVar8 = (long ******)&PTR_FUN_110d7c8f8;
    do {
      func_0x000107c39fa4();
      ppppppplStack_310 = ppppppplVar8;
    } while (extraout_w10_17 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_20,0x10);
      if (bVar2) {
        *extraout_x8_20 = extraout_x9_25;
        cVar6 = ExclusiveMonitorsStatus();
      }
      param_4 = ppppppplVar29;
      ppuVar31 = unaff_x24;
    } while (cVar6 != '\0');
    break;
  case 0x16:
    ppuVar31 = (undefined **)&bStack_210;
    func_0x00010b990724();
    ppppppplVar24 = (long *******)ppppppplVar10[1];
    param_4 = (long *******)ppuVar31;
    func_0x00010b97ee54();
    param_2 = param_4 + 1;
    *param_2 = (long ******)0x1;
    func_0x00010b97eae8();
    if (ppppppplVar24 != (long *******)0x0) {
      do {
        func_0x000107c39fa4();
      } while (extraout_w10_16 != 0);
    }
    param_4[2] = (long ******)ppppppplVar24;
    *param_4 = (long ******)&PTR_FUN_110d7c960;
    ppppppplVar12 = (long *******)(ppuVar31 + 2);
    func_0x00010b90e320(param_4 + 3);
    do {
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = (long ******)((long)*param_2 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
      ppppppplStack_310 = param_4;
    } while (cVar6 != '\0');
    do {
      uVar7 = (long ******)((long)*param_2 + -1) == (long ******)0x0;
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
      if (bVar2) {
        *param_2 = (long ******)((long)*param_2 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    unaff_x24 = ppuVar31;
    if (!(bool)uVar7) goto LAB_10b9780d0;
    ppppplVar14 = (*param_4)[1];
    goto code_r0x00010b976b88;
  }
code_r0x00010b976b7c:
  unaff_x24 = ppuVar31;
  if ((bool)uVar7) {
    ppppplVar14 = (*ppppppplVar8)[1];
code_r0x00010b976b88:
    (*(code *)ppppplVar14)();
    unaff_x24 = ppuVar31;
  }
LAB_10b9780d0:
  ppppppplVar8 = ppppppplStack_310;
  uVar17 = SUB81(ppppppplVar9,0);
  if (((ulong)ppppppplVar23[1] & 1) == 0) {
    *ppppppplVar36 = (long ******)0x0;
    ppppppplVar36[1] = (long ******)0x0;
    ppppppplVar36[2] = (long ******)0x0;
  }
  else {
    ppppppplVar16 = (long *******)&bStack_210;
    ppppppplStack_320 = ppppppplVar36;
    FUN_10b9794f0(ppppppplVar36,ppppppplStack_310);
    pppppplVar39 = param_3[2];
    ppppppplStack_318 = param_3;
    FUN_10b97953c();
    ppppppplVar23 = (long *******)0x0;
    uVar20 = (ulong)pppppplVar39 >> 7;
    unaff_x26 = (long *******)ppppppplVar10[5];
    ppppppplVar36 = (long *******)(((ulong)pppppplVar39 & 0x7f) * 0x101010101010101);
    while( true ) {
      param_3 = (long *******)(uVar20 & (ulong)unaff_x26);
      uVar20 = *(ulong *)((long)ppppppplVar10[2] + (long)param_3);
      for (param_2 = (long *******)
                     ((uVar20 ^ (ulong)ppppppplVar36) + 0xfefefefefefefeff &
                      (uVar20 ^ (ulong)ppppppplVar36 ^ 0xffffffffffffffff) & 0x8080808080808080);
          param_2 != (long *******)0x0;
          param_2 = (long *******)((long)param_2 - 1U & (ulong)param_2)) {
        uVar27 = ((ulong)param_2 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                 ((ulong)param_2 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
        unaff_x24 = (undefined **)
                    ((long)param_3 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) &
                    (ulong)unaff_x26);
        pppppplVar35 = ppppppplVar10[3] + (long)unaff_x24 * 6;
        FUN_10b9909a8(pppppplVar35,ppppppplStack_318);
        uVar17 = SUB81(ppppppplVar9,0);
        if (((ulong)pppppplVar35 & 1) != 0) goto LAB_10b97820c;
      }
      uVar17 = SUB81(ppppppplVar9,0);
      uVar7 = (uVar20 & ~uVar20 << 6 & 0x8080808080808080) == 0;
      if (!(bool)uVar7) break;
      ppppppplVar23 = ppppppplVar23 + 1;
      uVar20 = (long)ppppppplVar23 + (long)param_3;
    }
    unaff_x24 = (undefined **)(ppppppplVar10 + 2);
    FUN_10b97d878(unaff_x24,pppppplVar39);
    pppppplVar35 = ppppppplVar10[3] + (long)unaff_x24 * 6;
    func_0x000107c30df0(pppppplVar35,ppppppplStack_318);
    pppppplVar35[3] = (long *****)0x0;
    pppppplVar35[4] = (long *****)0x0;
    pppppplVar35[5] = (long *****)0x0;
    *(byte *)((long)ppppppplVar10[2] + (long)unaff_x24) = (byte)pppppplVar39 & 0x7f;
    func_0x000107c39f84();
    ppppppplVar23 = ppppppplVar10;
LAB_10b97820c:
    ppppppplVar24 = ppppppplStack_320;
    pppppplVar39 = ppppppplVar10[3];
    param_4 = (long *******)(pppppplVar39 + (long)unaff_x24 * 6 + 3);
    FUN_10b972a1c(param_4,ppppppplStack_320);
    func_0x000107c30f8c(pppppplVar39 + (long)unaff_x24 * 6 + 4,ppppppplVar24 + 1);
    ppppppplVar12 = ppppppplStack_318;
    FUN_10b90a1e0(ppppppplVar10 + 0xe);
    ppppppplVar10 = ppppppplVar23;
  }
  FUN_10b972f3c(ppppppplVar8);
  ppppppplVar23 = ppppppplVar8;
LAB_10b97824c:
  ppppppplVar9 = &pppppplStack_218;
  func_0x000107c2a668();
LAB_10b978254:
  func_0x000107c39f7c(uStack_1e0);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  __ZdlPv(unaff_x24);
  func_0x00010b97a478(&ppppppplStack_250);
  __ZdlPv(param_4);
  func_0x00010b97a478(&ppppppplStack_2c0);
  FUN_10b972f3c(pppppplStack_288);
  func_0x00010b97e958(&uStack_280);
  func_0x00010b97e958(appppppplStack_270);
  func_0x000107c30df4(pppppplStack_258);
  pppppplVar35 = (long ******)&pppppplStack_218;
  func_0x000107c2a668();
  func_0x00010b97e950();
  pcStack_348 = FUN_10b97874c;
  ppppppplStack_3a0 = ppppppplVar10;
  ppppppplStack_398 = ppppppplVar36;
  ppppppplStack_390 = unaff_x26;
  ppppppplStack_388 = param_3;
  ppppppplStack_380 = (long *******)unaff_x24;
  ppppppplStack_378 = param_4;
  ppppppplStack_370 = ppppppplVar23;
  ppppppplStack_368 = param_2;
  ppppppplStack_360 = ppppppplVar9;
  ppppppplStack_358 = ppppppplVar24;
  ppcStack_350 = apcStack_180;
  (*(code *)(*ppppppplVar16)[4])(&pppppppuStack_3d0,ppppppplVar16);
  pppppplVar39 = (long ******)acStack_428;
  func_0x000107c31030(pppppplVar39,&pppppppuStack_3d0);
  func_0x000107c3a064();
  pppppplVar26 = ppppppplVar12[1];
  func_0x00010b97ee54();
  pppppplVar39[1] = (long *****)0x1;
  func_0x00010b97eae8();
  if (pppppplVar26 != (long ******)0x0) {
    do {
      func_0x000107c39fa4();
    } while (extraout_w10_28 != 0);
  }
  *pppppplVar39 = (long *****)&PTR_FUN_110d7bce8;
  pppppplVar39[3] = (long *****)0x0;
  pppppplVar39[4] = (long *****)0x0;
  pppppplVar39[2] = (long *****)pppppplVar26;
  *(undefined1 *)(pppppplVar39 + 5) = uVar17;
  if (acStack_428[0] == '\n') {
    ppppplVar14 = (long *****)acStack_428;
    FUN_10b9905a4(ppppplVar14);
    func_0x000107c30fa8(&pppppppuStack_3f8,ppppplVar14 + 2);
    func_0x000107c31030(&pppppppuStack_3d0,&pppppppuStack_3f8);
    func_0x000107c27900(&pppppppuStack_3f0);
  }
  else {
    func_0x000107c30df0(&pppppppuStack_3d0,acStack_428);
  }
  pppppppuVar22 = &pppppppuStack_3f8;
  pppppppuVar13 = pppppppuStack_3c0;
  func_0x000107c27918();
  lVar25 = 0;
  uVar20 = (ulong)pppppppuVar22 >> 7;
  pppppplVar26 = ppppppplVar12[0xb];
  while( true ) {
    uVar20 = uVar20 & (ulong)pppppplVar26;
    uVar38 = *(ulong *)((long)ppppppplVar12[8] + uVar20);
    func_0x00010b97f324(uVar38 ^ ((ulong)pppppppuVar22 & 0x7f) * 0x101010101010101);
    for (uVar27 = extraout_x8_38 & 0x8080808080808080; uVar27 != 0; uVar27 = uVar27 - 1 & uVar27) {
      uVar33 = (uVar27 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar27 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar33 = uVar20 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3) & (ulong)pppppplVar26
      ;
      pppppplVar21 = ppppppplVar12[9];
      pppppppuVar13 = &pppppppuStack_3d0;
      FUN_10b9909a8();
      if (((ulong)pppppplVar21 & 1) != 0) {
        puVar28 = (undefined *)((long)ppppppplVar12[8] + uVar33);
        pppppplVar26 = ppppppplVar12[9] + uVar33 * 4;
        goto LAB_10b9788dc;
      }
    }
    if ((uVar38 & ~uVar38 << 6 & 0x8080808080808080) != 0) break;
    lVar25 = lVar25 + 8;
    uVar20 = lVar25 + uVar20;
  }
  puVar28 = (undefined *)((long)ppppppplVar12[8] + (long)ppppppplVar12[0xb]);
LAB_10b9788dc:
  func_0x00010b97e958(&pppppppuStack_3d0);
  pppppplVar21 = pppppplVar39 + 4;
  if ((undefined *)((long)ppppppplVar12[8] + (long)ppppppplVar12[0xb]) != puVar28 &&
      pppppplVar21 != pppppplVar26 + 3) {
    ppppplVar14 = (long *****)0x0;
    if (pppppplVar26[3] != (long *****)0x0) {
      do {
        func_0x00010b97e7d0();
        pppppplVar21 = extraout_x8_39;
        ppppplVar14 = extraout_x9_32;
      } while (extraout_w12_09 != 0);
    }
    *pppppplVar21 = ppppplVar14;
    FUN_10b979074();
  }
  (*(code *)(*ppppppplVar16)[5])(auStack_438,ppppppplVar16);
  (*(code *)(*ppppppplVar16)[6])(&pppppplStack_440,ppppppplVar16);
  ppppppplVar24 = ppppppplVar12 + 0x11;
  FUN_10b979120();
  if (ppppppplVar24 != (long *******)0x0) goto LAB_10b978b1c;
  if (ppppppplVar12[0x15] < (long ******)0x49) {
    pppppplVar21 = ppppppplVar12[0x14];
    pppppplVar26 = ppppppplVar12[0x13];
    uVar27 = (long)pppppplVar26 - (long)ppppppplVar12[0x12];
    uVar20 = (long)pppppplVar21 - (long)ppppppplVar12[0x11];
    if (uVar20 <= uVar27) {
      pppppppuVar22 = (undefined8 *******)((long)uVar20 >> 2);
      if (pppppplVar21 == ppppppplVar12[0x11]) {
        pppppppuVar22 = (undefined8 *******)0x1;
      }
      ppppppplStack_3d8 = ppppppplVar12 + 0x14;
      FUN_10b97942c();
      pppppppuStack_3f0 = (undefined8 *******)((long)pppppppuVar22 + uVar27);
      pppppppuStack_3e0 = pppppppuVar22 + (long)pppppppuVar13;
      pppppppuStack_3f8 = pppppppuVar22;
      pppppppuStack_3e8 = pppppppuStack_3f0;
      func_0x00010b97eebc();
      ppppppplStack_408 = ppppppplVar12 + 0x16;
      uStack_400 = 0x49;
      pppppppuStack_410 = pppppppuVar22;
      FUN_10b979364(&pppppppuStack_3f8);
      ppppppplVar24 = ppppppplStack_3d8;
      pppppppuStack_410 = (undefined8 *******)0x0;
      pppppplVar26 = ppppppplVar12[0x13];
      pppppppuVar13 = pppppppuStack_3e8;
      pppppppuVar30 = pppppppuStack_3f8;
      pppppppuVar15 = pppppppuStack_3f0;
      pppppppuVar37 = pppppppuStack_3e0;
      while (pppppplVar21 = ppppppplVar12[0x12], pppppplVar26 != pppppplVar21) {
        pppppppuVar34 = pppppppuVar15;
        if (pppppppuVar15 == pppppppuVar30) {
          if (pppppppuVar13 < pppppppuVar37) {
            lVar25 = (long)pppppppuVar13 - (long)pppppppuVar30;
            pppppppuVar11 =
                 pppppppuVar13 + (((long)pppppppuVar37 - (long)pppppppuVar13 >> 3) + 1) / 2;
            pppppppuVar34 =
                 (undefined8 *******)
                 ((long)pppppppuVar11 - ((long)pppppppuVar13 - (long)pppppppuVar30));
            pppppppuVar13 = pppppppuVar11;
            if (lVar25 != 0) {
              _memmove(pppppppuVar34,pppppppuVar15,lVar25);
              pppppppuVar22 = pppppppuVar15;
            }
          }
          else {
            pppppppuVar34 = (undefined8 *******)((long)pppppppuVar37 - (long)pppppppuVar30 >> 2);
            if ((long)pppppppuVar37 - (long)pppppppuVar30 == 0) {
              pppppppuVar34 = (undefined8 *******)0x1;
            }
            ppppppplStack_3b0 = ppppppplVar24;
            pppppppuVar11 = pppppppuVar34;
            FUN_10b97942c();
            pppppppuStack_3c8 =
                 (undefined8 *******)
                 ((long)pppppppuVar11 + ((long)pppppppuVar34 * 2 + 6U & 0xfffffffffffffff8));
            pppppppuStack_3b8 = pppppppuVar11 + (long)pppppppuVar22;
            pppppppuStack_3d0 = pppppppuVar11;
            pppppppuStack_3c0 = pppppppuStack_3c8;
            func_0x00010b97f298(&pppppppuStack_3d0);
            FUN_10b979404();
            pppppppuVar4 = pppppppuStack_3b8;
            pppppppuVar3 = pppppppuStack_3c0;
            pppppppuVar34 = pppppppuStack_3c8;
            pppppppuVar11 = pppppppuStack_3d0;
            pppppppuStack_3d0 = pppppppuVar30;
            pppppppuStack_3c8 = pppppppuVar15;
            pppppppuStack_3c0 = pppppppuVar13;
            pppppppuStack_3b8 = pppppppuVar37;
            func_0x00010b979488(&pppppppuStack_3d0);
            pppppppuVar13 = pppppppuVar3;
            pppppppuVar30 = pppppppuVar11;
            pppppppuVar37 = pppppppuVar4;
          }
        }
        pppppplVar26 = pppppplVar26 + -1;
        pppppppuVar15 = pppppppuVar34 + -1;
        *pppppppuVar15 = (undefined8 ******)*pppppplVar26;
      }
      pppppppuStack_3f8 = (undefined8 *******)ppppppplVar12[0x11];
      ppppppplVar12[0x11] = (long ******)pppppppuVar30;
      ppppppplVar12[0x12] = (long ******)pppppppuVar15;
      pppppppuStack_3e0 = (undefined8 *******)ppppppplVar12[0x14];
      pppppppuStack_3e8 = (undefined8 *******)ppppppplVar12[0x13];
      ppppppplVar12[0x13] = (long ******)pppppppuVar13;
      ppppppplVar12[0x14] = (long ******)pppppppuVar37;
      pppppppuStack_3f0 = (undefined8 *******)pppppplVar21;
      func_0x00010b979460(&pppppppuStack_410);
      func_0x00010b979488(&pppppppuStack_3f8);
      goto LAB_10b978b1c;
    }
    func_0x00010b97eebc();
    if (pppppplVar21 != pppppplVar26) {
      func_0x00010b979224(ppppppplVar12 + 0x11);
      goto LAB_10b978b1c;
    }
    FUN_10b9792c0(ppppppplVar12 + 0x11,ppppppplVar24);
  }
  else {
    ppppppplVar12[0x15] = (long ******)((long)ppppppplVar12[0x15] + -0x49);
  }
  ppppplVar14 = *ppppppplVar12[0x12];
  ppppppplVar12[0x12] = ppppppplVar12[0x12] + 1;
  FUN_10b979188(ppppppplVar12 + 0x11,ppppplVar14);
LAB_10b978b1c:
  ppppppplVar24 = ppppppplVar12 + 0x11;
  func_0x00010b979150();
  func_0x000107c30df0();
  func_0x000107c30f3c(ppppppplVar24 + 3,auStack_438);
  if ((pppppplStack_440 != (long ******)0x0) && (pppppplStack_440[2] != (long *****)0x0)) {
    ppppplVar14 = pppppplStack_440[2] + 1;
    do {
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
      if (bVar2) {
        *ppppplVar14 = (long ****)((long)*ppppplVar14 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppppppplVar24[5] = pppppplStack_440;
  do {
    func_0x000107c3a00c();
  } while (extraout_w9_02 != 0);
  ppppppplVar24[6] = pppppplVar39;
  ppppppplVar12[0x16] = (long ******)((long)ppppppplVar12[0x16] + 1);
  func_0x000104bdc324(pppppplStack_440);
  func_0x00010b97e958(auStack_438);
  do {
    func_0x000107c3a00c();
  } while (extraout_w9_03 != 0);
  *pppppplVar35 = (long *****)pppppplVar39;
  FUN_10b9794c8(pppppplVar39);
  func_0x00010b97e958(acStack_428);
  return;
}



/* Entry: 10b976a10; end: 10b97874b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b976a10(long *******param_1,long *******param_2,long *******param_3,long *******param_4,
                  long *******param_5)

{
  uint uVar1;
  bool bVar2;
  undefined8 *******pppppppuVar3;
  undefined8 *******pppppppuVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long ******pppppplVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  long *****ppppplVar15;
  undefined8 *******pppppppuVar16;
  long *******ppppppplVar17;
  undefined1 uVar18;
  byte extraout_w8;
  byte bVar19;
  uint uVar20;
  undefined8 extraout_x8;
  long ******extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined8 *extraout_x8_08;
  undefined8 *extraout_x8_09;
  undefined8 *extraout_x8_10;
  undefined8 *extraout_x8_11;
  undefined8 *extraout_x8_12;
  undefined8 *extraout_x8_13;
  undefined8 *extraout_x8_14;
  long ******extraout_x8_15;
  undefined8 *extraout_x8_16;
  undefined8 *extraout_x8_17;
  undefined8 *extraout_x8_18;
  undefined8 *extraout_x8_19;
  undefined8 *extraout_x8_20;
  undefined8 *extraout_x8_21;
  long *******extraout_x8_22;
  long *******extraout_x8_23;
  long *******extraout_x8_24;
  long ******extraout_x8_25;
  long *******extraout_x8_26;
  long ******extraout_x8_27;
  long ******extraout_x8_28;
  long ******extraout_x8_29;
  undefined8 *extraout_x8_30;
  long ******extraout_x8_31;
  long ******extraout_x8_32;
  long ******extraout_x8_33;
  long ******extraout_x8_34;
  ulong uVar21;
  ulong extraout_x8_35;
  long ******pppppplVar22;
  long ******extraout_x8_36;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long ******extraout_x9_01;
  undefined8 extraout_x9_02;
  long ******extraout_x9_03;
  long ******extraout_x9_04;
  undefined8 extraout_x9_05;
  long ******extraout_x9_06;
  undefined8 extraout_x9_07;
  undefined8 extraout_x9_08;
  long ******extraout_x9_09;
  undefined8 extraout_x9_10;
  undefined8 extraout_x9_11;
  undefined8 extraout_x9_12;
  long ******extraout_x9_13;
  long ******extraout_x9_14;
  undefined8 extraout_x9_15;
  undefined8 extraout_x9_16;
  undefined8 extraout_x9_17;
  undefined8 extraout_x9_18;
  long ******extraout_x9_19;
  undefined8 extraout_x9_20;
  long *******extraout_x9_21;
  undefined8 extraout_x9_22;
  undefined8 extraout_x9_23;
  undefined8 extraout_x9_24;
  undefined8 extraout_x9_25;
  undefined8 extraout_x9_26;
  undefined8 extraout_x9_27;
  long ******extraout_x9_28;
  undefined8 extraout_x9_29;
  long *****extraout_x9_30;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  long *******extraout_x10;
  undefined8 *******pppppppuVar23;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  int extraout_w11_08;
  int extraout_w11_09;
  int extraout_w11_10;
  int extraout_w11_11;
  int extraout_w11_12;
  int extraout_w11_13;
  int extraout_w11_14;
  int extraout_w11_15;
  int extraout_w11_16;
  int extraout_w11_17;
  int extraout_w11_18;
  int extraout_w11_19;
  int extraout_w11_20;
  int extraout_w11_21;
  int extraout_w11_22;
  int extraout_w11_23;
  int extraout_w11_24;
  int extraout_w11_25;
  int extraout_w11_26;
  long *******extraout_x11;
  long *******extraout_x11_00;
  long *******extraout_x11_01;
  long *******extraout_x11_02;
  long *******ppppppplVar24;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  int extraout_w12_03;
  int extraout_w12_04;
  int extraout_w12_05;
  int extraout_w12_06;
  int extraout_w12_07;
  int extraout_w12_08;
  int extraout_w12_09;
  long *******unaff_x19;
  long lVar25;
  long ******pppppplVar26;
  ulong uVar27;
  undefined *puVar28;
  long *******unaff_x21;
  long *******unaff_x22;
  undefined8 *******pppppppuVar29;
  undefined **unaff_x24;
  undefined **ppuVar30;
  long *******unaff_x25;
  long *******ppppppplVar31;
  ulong uVar32;
  undefined8 *******pppppppuVar33;
  long *******unaff_x26;
  long ******pppppplVar34;
  undefined8 *******pppppppuVar35;
  ulong uVar36;
  long ******pppppplStack_2d0;
  undefined1 auStack_2c8 [16];
  char acStack_2b8 [24];
  undefined8 *******pppppppuStack_2a0;
  long *******ppppppplStack_298;
  undefined8 uStack_290;
  undefined8 *******pppppppuStack_288;
  undefined8 *******pppppppuStack_280;
  undefined8 *******pppppppuStack_278;
  undefined8 *******pppppppuStack_270;
  long *******ppppppplStack_268;
  undefined8 *******pppppppuStack_260;
  undefined8 *******pppppppuStack_258;
  undefined8 *******pppppppuStack_250;
  undefined8 *******pppppppuStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  long *******ppppppplStack_218;
  long *******ppppppplStack_210;
  long *******ppppppplStack_208;
  long *******ppppppplStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  undefined1 *puStack_1e0;
  code *pcStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  uint uStack_1bc;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a8;
  long *******ppppppplStack_1a0;
  char cStack_191;
  long ******pppppplStack_190;
  long *******appppppplStack_188 [3];
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  byte bStack_159;
  long *******ppppppplStack_150;
  undefined *apuStack_148 [3];
  undefined1 auStack_130 [24];
  long ******pppppplStack_118;
  undefined8 uStack_110;
  long *******appppppplStack_100 [3];
  long ******pppppplStack_e8;
  long *******ppppppplStack_e0;
  undefined8 uStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long ******pppppplStack_a8;
  byte bStack_a0;
  byte bStack_9f;
  undefined1 auStack_98 [8];
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  byte bStack_79;
  long *******ppppppplStack_78;
  undefined8 uStack_70;
  
  ppppppplVar9 = param_4;
  func_0x000107c39f9c();
  uVar7 = *(char *)ppppppplVar9 == '\x11';
  uStack_70 = extraout_x8;
  if ((bool)uVar7) {
    func_0x00010b990764(param_4);
    uVar18 = SUB81(ppppppplVar9,0);
    func_0x00010b97f0b4(*(undefined1 *)((long)param_4 + 1),&ppppppplStack_e0);
    unaff_x21 = ppppppplStack_e0;
    ppppppplVar10 = ppppppplStack_e0;
    ppppppplVar17 = param_4;
    FUN_10b9794f0(param_1);
    ppppppplVar9 = unaff_x21;
    FUN_10b972f3c();
    param_5 = unaff_x22;
    param_3 = unaff_x25;
    goto LAB_10b978254;
  }
  ppppppplVar10 = param_3;
  ppppppplVar17 = param_3;
  FUN_10b978c70(param_2 + 2);
  func_0x000107c3a098(param_2[2]);
  uVar18 = SUB81(ppppppplVar9,0);
  if (!(bool)uVar7) {
    pppppplVar12 = (long ******)0x0;
    if (ppppppplVar10[3] != (long ******)0x0) {
      do {
        func_0x000107c39f98();
        uVar18 = SUB81(ppppppplVar9,0);
        pppppplVar12 = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    ppppppplVar9 = param_1 + 1;
    *param_1 = pppppplVar12;
    ppppppplVar10 = ppppppplVar10 + 4;
    func_0x000107c30f3c();
    goto LAB_10b978254;
  }
  cStack_191 = '\0';
  ppppppplVar9 = (long *******)&cStack_191;
  ppppppplVar17 = (long *******)0x1;
  ppppppplVar8 = param_2;
  ppppppplVar10 = param_4;
  FUN_10b994bf0(&pppppplStack_a8);
  uVar18 = SUB81(ppppppplVar9,0);
  uVar7 = pppppplStack_a8 == (long ******)0x1;
  if (!(bool)uVar7) {
    func_0x000107c31084();
    ppppppplVar9 = param_3;
    func_0x00010b98fa8c(&ppppppplStack_150);
    func_0x00010b97ed14();
    ppppppplStack_90 = ppppppplVar9;
    ppppppplStack_88 = ppppppplVar10;
    func_0x000107c2793c(&UNK_10f7ccd74);
    func_0x00010b97e888();
    unaff_x19 = &pppppplStack_a8;
    func_0x000107c31080(&ppppppplStack_170,ppppppplVar8,&ppppppplStack_e0);
    FUN_10b99fa14(appppppplStack_100,&bStack_a0,&ppppppplStack_170);
    ppppppplVar10 = (long *******)appppppplStack_100;
    func_0x00010b97f23c();
    func_0x00010b97ef50();
    func_0x000107c278f8(ppppppplStack_170);
    func_0x00010b97ea80();
    func_0x000107c3a014();
    *param_1 = (long ******)0x0;
    param_1[1] = (long ******)0x0;
    param_1[2] = (long ******)0x0;
    goto LAB_10b97824c;
  }
  if ((cStack_191 == '\x01') &&
     (ppppppplVar8 = (long *******)*param_2, ppppppplVar8 != (long *******)0x0)) {
    ppppppplVar17 = (long *******)&bStack_a0;
    ppppppplVar10 = param_3;
    FUN_10b994158();
  }
  uVar7 = bStack_a0 == 0x11;
  if ((bool)uVar7) {
    ppppppplVar17 = (long *******)&bStack_a0;
    func_0x00010b990764();
    func_0x00010b97f0b4(bStack_9f,&ppppppplStack_1a0);
    goto LAB_10b9780d0;
  }
  uVar7 = bStack_a0 == 1;
  if ((bool)uVar7) {
    unaff_x19 = (long *******)param_2[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (unaff_x19 != (long *******)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_00 != 0);
    }
    ppppppplVar8[2] = (long ******)unaff_x19;
    *ppppppplVar8 = (long ******)&PTR_FUN_110d7bdb8;
    do {
      func_0x000107c39fa4();
      ppppppplStack_1a0 = ppppppplVar8;
    } while (extraout_w10 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_01,0x10);
      if (bVar2) {
        *extraout_x8_01 = extraout_x9;
        cVar6 = ExclusiveMonitorsStatus();
      }
      ppuVar30 = unaff_x24;
    } while (cVar6 != '\0');
    goto code_r0x00010b976b7c;
  }
  if ((bStack_9f & 1) != 0) {
    FUN_10b9907d0(&ppppppplStack_90,param_3);
    ppppppplVar10 = (long *******)&ppppppplStack_90;
    func_0x000107c31030(&ppppppplStack_150);
    FUN_10b9907d0(appppppplStack_100,&bStack_a0);
    unaff_x21 = (long *******)&ppppppplStack_150;
    unaff_x19 = (long *******)appppppplStack_100;
    ppppppplVar8 = (long *******)&ppppppplStack_e0;
    ppppppplVar17 = (long *******)&ppppppplStack_150;
    ppppppplVar9 = (long *******)0x0;
    func_0x00010b97e768();
    func_0x000107c3a064();
    func_0x000107c3a044();
    func_0x00010b97e958(&ppppppplStack_90);
    if (((ulong)param_5[1] & 1) == 0) {
      ppppppplStack_1a0 = (long *******)0x0;
    }
    else {
      unaff_x19 = (long *******)param_2[1];
      func_0x00010b97ed54();
      func_0x00010b97e654();
      if (unaff_x19 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_02 != 0);
      }
      ppppppplVar8[2] = (long ******)unaff_x19;
      *ppppppplVar8 = (long ******)&PTR_DAT_110d7be20;
      pppppplVar12 = (long ******)0x0;
      if (ppppppplStack_e0 != (long *******)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppplVar12 = extraout_x9_01;
        } while (extraout_w12 != 0);
      }
      ppppppplVar8[3] = pppppplVar12;
      do {
        func_0x000107c39fa4();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_01 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_03,0x10);
        if (bVar2) {
          *extraout_x8_03 = extraout_x9_02;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((bool)uVar7) {
        func_0x00010b97e808();
      }
    }
    func_0x00010b97edb0();
    goto LAB_10b9780d0;
  }
  uVar20 = (uint)bStack_a0;
  cVar5 = SBORROW4(uVar20,0x16);
  cVar6 = (int)(uVar20 - 0x16) < 0;
  uVar7 = uVar20 == 0x16;
  ppppppplVar24 = (long *******)&UNK_1003ab990;
  param_4 = (long *******)&UNK_1003ab990;
  unaff_x24 = &PTR_DAT_110d7c230;
  ppuVar30 = &PTR_DAT_110d7c230;
  switch(bStack_a0) {
  case 0:
    unaff_x19 = (long *******)param_2[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (unaff_x19 != (long *******)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_01 != 0);
    }
    ppppppplVar8[2] = (long ******)unaff_x19;
    *ppppppplVar8 = (long ******)&PTR_DAT_110d7c1c8;
    do {
      func_0x000107c39fa4();
      ppppppplStack_1a0 = ppppppplVar8;
    } while (extraout_w10_00 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_02,0x10);
      if (bVar2) {
        *extraout_x8_02 = extraout_x9_00;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    break;
  default:
    func_0x000107c31084();
    ppppppplVar24 = ppppppplVar8;
    func_0x00010b97f16c();
    func_0x00010b97ed14();
    ppppppplStack_90 = ppppppplVar24;
    ppppppplStack_88 = ppppppplVar10;
    func_0x000107c2793c(&UNK_10f7ccdcd);
    func_0x00010b97e888();
    func_0x000107c3a0f0(&ppppppplStack_90);
    FUN_10b99f560(appppppplStack_100,&ppppppplStack_90);
    ppppppplVar10 = (long *******)appppppplStack_100;
    func_0x00010b97f23c();
    func_0x00010b97ef50();
    func_0x00010b97f20c();
    func_0x00010b97ea80();
    func_0x000107c3a014();
    ppppppplStack_1a0 = (long *******)0x0;
    param_4 = ppppppplVar8;
    goto LAB_10b9780d0;
  case 2:
    param_4 = (long *******)param_2[1];
    if ((bStack_9f >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_07 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7bfc0;
      do {
        func_0x000107c39fa4();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_06 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_08,0x10);
        if (bVar2) {
          *extraout_x8_08 = extraout_x9_11;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_17 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_DAT_110d7bf58;
      do {
        func_0x000107c39fa4();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_19 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_19,0x10);
        if (bVar2) {
          *extraout_x8_19 = extraout_x9_25;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    break;
  case 3:
    param_4 = (long *******)param_2[1];
    if ((bStack_9f >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_11 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7c090;
      do {
        func_0x000107c39fa4();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_10 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_12,0x10);
        if (bVar2) {
          *extraout_x8_12 = extraout_x9_17;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_19 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_DAT_110d7c028;
      do {
        func_0x000107c39fa4();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_21 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_21,0x10);
        if (bVar2) {
          *extraout_x8_21 = extraout_x9_27;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    break;
  case 4:
    param_4 = (long *******)param_2[1];
    if ((bStack_9f >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_10 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7c160;
      do {
        func_0x000107c39fa4();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_09 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_11,0x10);
        if (bVar2) {
          *extraout_x8_11 = extraout_x9_16;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_18 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_DAT_110d7c0f8;
      do {
        func_0x000107c39fa4();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_20 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_20,0x10);
        if (bVar2) {
          *extraout_x8_20 = extraout_x9_26;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    break;
  case 5:
    param_4 = (long *******)param_2[1];
    if ((bStack_9f >> 1 & 1) == 0) {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_05 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7bef0;
      do {
        func_0x000107c39fa4();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_04 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_06,0x10);
        if (bVar2) {
          *extraout_x8_06 = extraout_x9_08;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    else {
      func_0x000107c3a018();
      func_0x00010b97e654();
      if (param_4 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_16 != 0);
      }
      ppppppplVar8[2] = (long ******)param_4;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7be88;
      do {
        func_0x000107c39fa4();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_18 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_18,0x10);
        if (bVar2) {
          *extraout_x8_18 = extraout_x9_24;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    break;
  case 6:
    unaff_x19 = (long *******)param_2[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (unaff_x19 != (long *******)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_08 != 0);
    }
    ppppppplVar8[2] = (long ******)unaff_x19;
    *ppppppplVar8 = (long ******)&PTR_DAT_110d7c230;
    do {
      func_0x000107c39fa4();
      ppppppplStack_1a0 = ppppppplVar8;
    } while (extraout_w10_07 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_09,0x10);
      if (bVar2) {
        *extraout_x8_09 = extraout_x9_12;
        cVar6 = ExclusiveMonitorsStatus();
      }
      ppuVar30 = unaff_x24;
    } while (cVar6 != '\0');
    break;
  case 7:
    unaff_x19 = (long *******)param_2[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (unaff_x19 != (long *******)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_12 != 0);
    }
    ppppppplVar8[2] = (long ******)unaff_x19;
    *ppppppplVar8 = (long ******)&PTR_DAT_110d7c298;
    do {
      func_0x000107c39fa4();
      ppppppplStack_1a0 = ppppppplVar8;
    } while (extraout_w10_11 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_13,0x10);
      if (bVar2) {
        *extraout_x8_13 = extraout_x9_18;
        cVar6 = ExclusiveMonitorsStatus();
      }
      param_4 = ppppppplVar24;
      ppuVar30 = unaff_x24;
    } while (cVar6 != '\0');
    break;
  case 0xb:
    func_0x000107c3a0ec(&ppppppplStack_90);
    func_0x00010b97ef58();
    ppppppplVar17 = ppppppplStack_90;
    ppppppplVar8 = appppppplStack_100[0];
    if (((ulong)param_5[1] & 1) == 0) {
      ppppppplStack_150 = ppppppplStack_90 + 2;
      apuStack_148[0] = &UNK_1003ab990;
      func_0x000107c2793c(&UNK_10f7cd021);
      unaff_x19 = (long *******)&ppppppplStack_e0;
      ppppppplVar9 = (long *******)&ppppppplStack_150;
      func_0x000107c3a054(&ppppppplStack_e0);
      func_0x00010b97ead0();
      ppppppplVar17 = extraout_x11;
      if (cVar6 == cVar5) {
        ppppppplVar17 = extraout_x8_22;
      }
      func_0x00010b97ec70();
      func_0x00010b97ea80();
      ppppppplStack_1a0 = (long *******)0x0;
      param_4 = ppppppplVar24;
    }
    else {
      uStack_1bc = (uint)*(byte *)(ppppppplStack_90 + 3);
      appppppplStack_100[0] = (long *******)0x0;
      pppppplVar12 = param_2[1];
      ppppppplVar24 = (long *******)((long)ppppppplStack_90[4] * 8 + 0x28);
      __Znwm();
      param_4 = ppppppplVar24 + 1;
      *param_4 = (long ******)0x1;
      func_0x00010b97eae8();
      unaff_x21 = ppppppplVar17;
      if (pppppplVar12 != (long ******)0x0) {
        do {
          func_0x000107c39fa4();
          unaff_x21 = ppppppplStack_90;
        } while (extraout_w10_12 != 0);
      }
      ppppppplVar24[2] = pppppplVar12;
      *ppppppplVar24 = (long ******)&PTR_FUN_110d7c4f0;
      do {
        func_0x000107c39fa4();
      } while (extraout_w10_13 != 0);
      ppppppplVar24[3] = (long ******)unaff_x21;
      ppppppplVar24[4] = (long ******)ppppppplVar8;
      pppppplVar34 = ppppppplStack_90[4];
      ppppppplStack_1b8 = ppppppplVar24 + 5;
      for (pppppplVar12 = (long ******)0x0; pppppplVar34 != pppppplVar12;
          pppppplVar12 = (long ******)((long)pppppplVar12 + 1)) {
        ppppppplVar24[(long)((long)pppppplVar12 + 5)] = (long ******)0x0;
      }
      ppppppplStack_1c8 = ppppppplStack_1a0;
      unaff_x19 = (long *******)(ulong)uStack_1bc;
      ppppppplStack_1d0 = ppppppplVar24;
      ppppppplStack_1b0 = param_1;
      ppppppplStack_1a8 = param_3;
      for (pppppplVar12 = (long ******)0x0; ppppppplVar24 = ppppppplStack_90,
          ppppppplVar17 = ppppppplStack_90, pppppplVar12 < pppppplVar34;
          pppppplVar12 = (long ******)((long)pppppplVar12 + 1)) {
        ppppppplVar9 = ppppppplStack_90 + (long)pppppplVar12 * 3 + 5;
        func_0x00010b97f0c0(&ppppppplStack_150);
        if (((ulong)param_5[1] & 1) == 0) {
          ppppppplStack_1a0 = (long *******)0x0;
code_r0x00010b977b38:
          func_0x00010b97f158();
          unaff_x24 = (undefined **)ppppppplVar8;
          goto code_r0x00010b977b44;
        }
        ppppppplVar8 = ppppppplStack_1b8 + (long)pppppplVar12;
        if (((int)unaff_x19 != 0) &&
           (pppppplVar34 = param_2[0x1a], pppppplVar34 != (long ******)0x0)) {
          (*(code *)(*pppppplVar34)[2])
                    (&ppppppplStack_e0,pppppplVar34,ppppppplVar24 + (long)pppppplVar12 * 3 + 6);
          ppppppplVar11 = (long *******)&ppppppplStack_e0;
          ppppppplVar10 = ppppppplVar24 + (long)pppppplVar12 * 3 + 6;
          FUN_10b990e08();
          if ((int)ppppppplVar11 != 0) {
            unaff_x21 = (long *******)&ppppppplStack_e0;
            pppppplVar34 = param_2[1];
            func_0x00010b97f234();
            ppppppplVar31 = ppppppplVar11 + 1;
            *ppppppplVar31 = (long ******)0x1;
            func_0x00010b97eae8();
            if (pppppplVar34 != (long ******)0x0) {
              do {
                func_0x000107c39fa4();
              } while (extraout_w10_22 != 0);
            }
            ppppppplVar11[2] = pppppplVar34;
            *ppppppplVar11 = (long ******)&PTR_DAT_110d7c558;
            unaff_x26 = ppppppplVar11 + 3;
            *unaff_x26 = (long ******)0x0;
            ppppppplVar11[4] = (long ******)0x0;
            ppppppplVar9 = ppppppplVar24 + (long)pppppplVar12 * 3 + 5;
            ppppppplVar17 = ppppppplStack_90;
            func_0x00010b97f0c0(&ppppppplStack_170);
            pppppplVar34 = param_5[1];
            if (((ulong)pppppplVar34 & 1) == 0) {
              ppppppplStack_1c8 = (long *******)0x0;
            }
            else {
              FUN_10b972a1c(unaff_x26,&ppppppplStack_150);
              FUN_10b972a1c(ppppppplVar11 + 4,&ppppppplStack_170);
              do {
                cVar6 = '\x01';
                bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar31,0x10);
                if (bVar2) {
                  *ppppppplVar31 = (long ******)((long)*ppppppplVar31 + 1);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              ppppppplVar10 = (long *******)appppppplStack_188;
              appppppplStack_188[0] = ppppppplVar11;
              FUN_10b979edc(ppppppplVar8);
              FUN_10b972f3c(appppppplStack_188[0]);
            }
            func_0x00010b97f0e0();
            do {
              pppppplVar26 = *ppppppplVar31;
              cVar6 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar31,0x10);
              if (bVar2) {
                *ppppppplVar31 = (long ******)((long)pppppplVar26 + -1);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((long ******)((long)pppppplVar26 + -1) == (long ******)0x0) {
              func_0x00010b97ee6c();
            }
            unaff_x19 = (long *******)(ulong)uStack_1bc;
            if (((ulong)pppppplVar34 & 1) == 0) {
              ppppppplStack_1a0 = ppppppplStack_1c8;
              func_0x000107c27900(&uStack_d8);
              goto code_r0x00010b977b38;
            }
          }
          func_0x000107c27900(&uStack_d8);
        }
        if (*ppppppplVar8 == (long ******)0x0) {
          pppppplVar34 = (long ******)0x0;
          if (ppppppplStack_150 != (long *******)0x0) {
            do {
              func_0x000107c39f98();
              pppppplVar34 = extraout_x8_25;
            } while (extraout_w11_20 != 0);
          }
          ppppppplVar10 = (long *******)&uStack_110;
          uStack_110 = pppppplVar34;
          FUN_10b979edc(ppppppplVar8);
          FUN_10b972f3c(uStack_110);
        }
        func_0x00010b97f158();
        pppppplVar34 = ppppppplStack_90[4];
      }
      ppppppplStack_1a0 = ppppppplStack_1c8;
      do {
        func_0x00010b97ef98();
      } while (extraout_w9 != 0);
      ppppppplStack_1a0 = ppppppplStack_1d0;
      unaff_x24 = (undefined **)ppppppplVar8;
code_r0x00010b977b44:
      do {
        param_3 = ppppppplStack_1a8;
        param_1 = ppppppplStack_1b0;
        uVar7 = (long ******)((long)*param_4 + -1) == (long ******)0x0;
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_4,0x10);
        if (bVar2) {
          *param_4 = (long ******)((long)*param_4 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((bool)uVar7) {
        func_0x00010b97e808(ppppppplStack_1d0);
      }
    }
    FUN_10b97bc6c(appppppplStack_100[0]);
    func_0x000107c2792c(ppppppplStack_90);
    goto LAB_10b9780d0;
  case 0xc:
    func_0x00010b990904(&ppppppplStack_90,auStack_98);
    ppppppplVar8 = (long *******)param_2[1];
    func_0x00010b97ef58();
    if (((ulong)param_5[1] & 1) == 0) {
      ppppppplStack_150 = ppppppplStack_90 + 2;
      apuStack_148[0] = &UNK_1003ab990;
      func_0x000107c2793c(&UNK_10f7cd30b);
      unaff_x19 = (long *******)&ppppppplStack_e0;
      ppppppplVar9 = (long *******)&ppppppplStack_150;
      func_0x000107c3a054(&ppppppplStack_e0);
      func_0x00010b97ead0();
      ppppppplVar17 = extraout_x11_01;
      if (cVar6 == cVar5) {
        ppppppplVar17 = extraout_x8_24;
      }
      func_0x00010b97ec70();
      func_0x00010b97ea80();
      ppppppplStack_1a0 = (long *******)0x0;
    }
    else {
      unaff_x21 = (long *******)(ulong)bStack_9f;
      unaff_x19 = (long *******)param_2[1];
      func_0x00010b97ee54();
      ppppppplVar24 = appppppplStack_100[0];
      appppppplStack_100[0] = (long *******)0x0;
      ppppppplVar8[1] = (long ******)0x1;
      *ppppppplVar8 = (long ******)&PTR_DAT_110d7bd68;
      if (unaff_x19 != (long *******)0x0) {
        do {
          func_0x00010b97e7d0();
          ppppppplVar24 = extraout_x9_21;
        } while (extraout_w12_07 != 0);
      }
      ppppppplVar8[2] = (long ******)unaff_x19;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7c9c8;
      if (ppppppplStack_90 != (long *******)0x0) {
        ppppppplVar11 = ppppppplStack_90 + 1;
        do {
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar11,0x10);
          if (bVar2) {
            *ppppppplVar11 = (long ******)((long)*ppppppplVar11 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      ppppppplVar8[3] = (long ******)ppppppplStack_90;
      ppppppplVar8[4] = (long ******)ppppppplVar24;
      *(byte *)(ppppppplVar8 + 5) = bStack_9f >> 1 & 1;
      do {
        func_0x000107c39fa4();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_15 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_16,0x10);
        if (bVar2) {
          *extraout_x8_16 = extraout_x9_22;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((bool)uVar7) {
        func_0x00010b97e808();
      }
    }
    func_0x00010b9762a0(appppppplStack_100[0]);
    FUN_10b90558c(ppppppplStack_90);
    unaff_x24 = ppuVar30;
    goto LAB_10b9780d0;
  case 0xd:
    FUN_10b9908c0(&pppppplStack_e8,auStack_98);
    ppppppplVar17 = (long *******)appppppplStack_100;
    func_0x00010b97e78c();
    if (((ulong)param_5[1] & 1) == 0) {
      func_0x00010b97f16c();
      func_0x00010b97ed14();
      ppppppplStack_90 = ppppppplVar17;
      ppppppplStack_88 = ppppppplVar10;
      func_0x00010b97f1b8();
      unaff_x19 = (long *******)&ppppppplStack_e0;
      func_0x00010b97e888();
      func_0x00010b97ead0();
      ppppppplVar17 = extraout_x11_00;
      if (cVar6 == cVar5) {
        ppppppplVar17 = extraout_x8_23;
      }
      func_0x00010b97ec70();
      func_0x00010b97ea80();
      func_0x000107c3a014();
      ppppppplStack_1a0 = (long *******)0x0;
    }
    else {
      ppppppplVar10 = (long *******)(pppppplStack_e8 + 3);
      func_0x000107c30f3c(&uStack_110);
      uVar20 = (uint)bRam00000001133fad7c;
      cVar5 = SBORROW4(uVar20,1);
      cVar6 = (int)(uVar20 - 1) < 0;
      uVar7 = uVar20 == 1;
      if ((bool)uVar7) {
        uVar20 = (uint)(byte)uStack_110;
        cVar6 = false;
        uVar7 = true;
        if (uVar20 != 0x10) {
          cVar6 = (int)((byte)uStack_110 - 1) < 0;
          uVar7 = (byte)uStack_110 == 1;
        }
        cVar5 = uVar20 != 0x10 && SBORROW4(uVar20,1);
        if (((bool)uVar7) ||
           (pppppplStack_118 = (long ******)0x0, (*(byte *)((long)pppppplStack_e8 + 0x12) & 1) != 0)
           ) goto code_r0x00010b977478;
        bVar19 = uStack_110._1_1_;
        pppppplVar26 = *param_2;
        ppppppplStack_150 = param_2;
        func_0x000107c30df0(apuStack_148,appppppplStack_100);
        func_0x000107c30f3c(auStack_130,&uStack_110);
        ppppppplVar9 = (long *******)0x58;
        __Znwm();
        FUN_10b979f14(&ppppppplStack_e0,&ppppppplStack_150);
        ppppppplVar10 = (long *******)0x38;
        __Znwm();
        *ppppppplVar10 = (long ******)&PTR_FUN_110d7c300;
        FUN_10b979f14(ppppppplVar10 + 1,&ppppppplStack_e0);
        bVar19 = bVar19 & 1;
        pppppplVar34 = param_2[1];
        ppppppplVar17 = ppppppplVar9 + 1;
        *ppppppplVar17 = (long ******)0x1;
        *ppppppplVar9 = (long ******)&PTR_DAT_110d7bd68;
        pppppplVar12 = (long ******)0x0;
        ppppppplStack_78 = ppppppplVar10;
        if (pppppplVar34 != (long ******)0x0) {
          do {
            func_0x00010b97e7d0();
            pppppplVar12 = extraout_x9_28;
            bVar19 = extraout_w8;
          } while (extraout_w12_08 != 0);
        }
        ppppppplVar9[2] = pppppplVar12;
        *ppppppplVar9 = (long ******)&PTR_FUN_110d7c390;
        *(byte *)(ppppppplVar9 + 3) = bVar19;
        ppppppplVar9[4] = pppppplVar26;
        if (ppppppplStack_78 == (long *******)0x0) {
          ppppppplVar9[8] = (long ******)0x0;
        }
        else {
          uVar7 = (long ********)ppppppplStack_78 == &ppppppplStack_90;
          if ((bool)uVar7) {
            ppppppplVar9[8] = (long ******)(ppppppplVar9 + 5);
            (*(code *)(*ppppppplStack_78)[3])(ppppppplStack_78);
          }
          else {
            ppppppplVar9[8] = (long ******)ppppppplStack_78;
            ppppppplStack_78 = (long *******)0x0;
          }
        }
        ppppppplVar9[9] = (long ******)0x0;
        ppppppplVar9[10] = (long ******)0x0;
        func_0x00010b97a43c(&ppppppplStack_90);
        func_0x00010b97a478(&ppppppplStack_e0);
        do {
          func_0x000107c3a00c();
        } while (extraout_w9_01 != 0);
        ppppppplVar10 = (long *******)&ppppppplStack_170;
        ppppppplStack_170 = ppppppplVar9;
        FUN_10b979edc(&pppppplStack_118);
        func_0x00010b97f0e0();
        do {
          func_0x000107c3a0a0();
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar17,0x10);
          if (bVar2) {
            *ppppppplVar17 = extraout_x8_34;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((bool)uVar7) {
          func_0x00010b97e8d8();
        }
        func_0x00010b97a478(&ppppppplStack_150);
code_r0x00010b977abc:
        pppppplVar12 = pppppplStack_118;
        unaff_x21 = &pppppplStack_a8;
        cVar6 = *(char *)(pppppplStack_e8 + 3);
        uVar20 = 0;
        if (cVar6 != '\x01') {
          uVar20 = 9;
        }
        uVar1 = 2;
        if (cVar6 != '\x10') {
          uVar1 = uVar20;
        }
        unaff_x19 = (long *******)(ulong)uVar1;
        ppppppplStack_1b0 = param_1;
        ppppppplStack_1a8 = param_3;
        if (pppppplStack_118 != (long ******)0x0) {
          do {
            func_0x000107c39fa4();
          } while (extraout_w10_23 != 0);
        }
        pppppplVar34 = (long ******)pppppplStack_e8[5];
        if ((cVar6 == '\x10') || (*(char *)((long)pppppplStack_e8 + 0x12) == '\x01')) {
          pppppplVar26 = param_2[0x17];
          if ((pppppplVar26 != (long ******)0x0) && (pppppplVar26[2] != (long *****)0x0)) {
            do {
              func_0x000107c39fdc();
            } while (extraout_w10_24 != 0);
          }
        }
        else {
          pppppplVar26 = (long ******)0x0;
        }
        ppppppplVar24 = (long *******)((long)pppppplVar34 * 8 + 0x40);
        __Znwm();
        unaff_x26 = ppppppplVar24 + 1;
        *unaff_x26 = (long ******)0x1;
        *ppppppplVar24 = (long ******)&PTR_FUN_110d7c3f8;
        ppppppplVar24[2] = pppppplVar12;
        ppppppplVar24[3] = pppppplVar34;
        *(char *)(ppppppplVar24 + 4) = (char)uVar1;
        *(bool *)((long)ppppppplVar24 + 0x21) = cVar6 == '\x10';
        if ((pppppplVar26 != (long ******)0x0) && (pppppplVar26[2] != (long *****)0x0)) {
          do {
            func_0x000107c39fdc();
          } while (extraout_w10_25 != 0);
        }
        ppppppplVar24[5] = pppppplVar26;
        pppppplVar12 = (long ******)0x0;
        if (param_2[0x18] != (long ******)0x0) {
          do {
            func_0x000107c3a010();
            pppppplVar12 = extraout_x8_27;
          } while (extraout_w11_21 != 0);
        }
        ppppppplVar24[6] = pppppplVar12;
        pppppplVar12 = (long ******)0x0;
        if (param_2[0x19] != (long ******)0x0) {
          do {
            func_0x000107c3a010();
            pppppplVar12 = extraout_x8_28;
          } while (extraout_w11_22 != 0);
        }
        ppppppplVar24[7] = pppppplVar12;
        lVar25 = 0x40;
        for (; pppppplVar34 != (long ******)0x0;
            pppppplVar34 = (long ******)((long)pppppplVar34 + -1)) {
          *(undefined8 *)((long)ppppppplVar24 + lVar25) = 0;
          lVar25 = lVar25 + 8;
        }
        func_0x000107c2ab10(pppppplVar26);
        unaff_x24 = (undefined **)ppppppplStack_1a0;
        for (ppppppplVar8 = (long *******)0x0;
            uVar7 = ppppppplVar8 == (long *******)pppppplStack_e8[5],
            ppppppplVar8 < pppppplStack_e8[5]; ppppppplVar8 = (long *******)((long)ppppppplVar8 + 1)
            ) {
          unaff_x19 = (long *******)(pppppplStack_e8 + (long)ppppppplVar8 * 2);
          func_0x00010b97e78c(&ppppppplStack_150);
          if (((ulong)param_5[1] & 1) == 0) {
            func_0x00010b97f150(&ppppppplStack_170);
            ppppppplVar9 = (long *******)&ppppppplStack_170;
            func_0x000107c27e5c();
            uStack_d8 = 0;
            ppppppplStack_e0 = ppppppplVar8;
            ppppppplStack_d0 = ppppppplVar9;
            ppppppplStack_c8 = ppppppplVar10;
            func_0x00010b97f134();
            unaff_x19 = (long *******)&ppppppplStack_90;
            ppppppplVar9 = (long *******)&ppppppplStack_e0;
            func_0x00010b97f124(&ppppppplStack_90);
            uVar7 = bStack_79 == 0;
            ppppppplVar17 = ppppppplStack_88;
            ppppppplVar10 = ppppppplStack_90;
            if (-1 < (char)bStack_79) {
              ppppppplVar17 = (long *******)(ulong)bStack_79;
              ppppppplVar10 = unaff_x19;
            }
            func_0x00010b97ec70();
            func_0x00010b97eef0();
            func_0x00010b97ebf4();
            ppppppplStack_1a0 = (long *******)0x0;
            func_0x00010b97e918();
            param_3 = ppppppplStack_1a8;
            param_1 = ppppppplStack_1b0;
            ppppppplVar11 = ppppppplStack_1a0;
            goto code_r0x00010b977fc8;
          }
          ppppppplVar17 = (long *******)&ppppppplStack_150;
          ppppppplVar9 = unaff_x19 + 6;
          func_0x00010b97e768(&ppppppplStack_90);
          bVar19 = *(byte *)(param_5 + 1);
          if ((bVar19 & 1) == 0) {
            func_0x00010b97f150(appppppplStack_188);
            ppppppplVar9 = (long *******)appppppplStack_188;
            func_0x000107c27e5c();
            uStack_d8 = 0;
            ppppppplStack_e0 = ppppppplVar8;
            ppppppplStack_d0 = ppppppplVar9;
            ppppppplStack_c8 = ppppppplVar10;
            func_0x00010b97f134();
            ppppppplVar9 = (long *******)&ppppppplStack_e0;
            func_0x00010b97f124(&ppppppplStack_170);
            uVar7 = bStack_159 == 0;
            ppppppplVar17 = ppppppplStack_168;
            ppppppplVar10 = ppppppplStack_170;
            if (-1 < (char)bStack_159) {
              ppppppplVar17 = (long *******)(ulong)bStack_159;
              ppppppplVar10 = (long *******)&ppppppplStack_170;
            }
            func_0x00010b97ec70();
            func_0x00010b97ebf4();
            func_0x00010b97ee7c();
            unaff_x24 = (undefined **)0x0;
          }
          else {
            pppppplVar12 = (long ******)0x0;
            if (ppppppplStack_90 != (long *******)0x0) {
              do {
                func_0x000107c39f98();
                pppppplVar12 = extraout_x8_29;
              } while (extraout_w11_23 != 0);
            }
            ppppppplVar10 = &pppppplStack_190;
            pppppplStack_190 = pppppplVar12;
            FUN_10b979edc(ppppppplVar24 + (long)(ppppppplVar8 + 1));
            FUN_10b972f3c(pppppplStack_190);
          }
          func_0x00010b97eee8();
          func_0x00010b97e918();
          param_3 = ppppppplStack_1a8;
          param_1 = ppppppplStack_1b0;
          ppppppplVar11 = (long *******)unaff_x24;
          if (bVar19 == 0) goto code_r0x00010b977fc8;
        }
        pppppplVar12 = param_2[1];
        ppppppplStack_1b8 = param_2;
        ppppppplStack_1a0 = (long *******)unaff_x24;
        do {
          func_0x000107c3a00c();
        } while (extraout_w9_00 != 0);
        ppppppplVar10 = (long *******)&ppppppplStack_e0;
        ppppppplVar17 = &pppppplStack_e8;
        ppppppplVar9 = param_5;
        ppppppplStack_e0 = ppppppplVar24;
        (*(code *)(*pppppplVar12)[0x24])(&ppppppplStack_170);
        ppppppplVar8 = ppppppplStack_e0;
        FUN_10b97ad80();
        unaff_x24 = (undefined **)ppppppplStack_170;
        uVar7 = *(char *)(param_5 + 1) != '\x01' || ppppppplStack_170 == (long *******)0x0;
        if (*(char *)(param_5 + 1) != '\x01' || ppppppplStack_170 == (long *******)0x0) {
          func_0x000107c31084();
          ppppppplVar11 = ppppppplVar8;
          func_0x00010b97f150(&ppppppplStack_150);
          func_0x00010b97ed14();
          ppppppplStack_90 = ppppppplVar11;
          ppppppplStack_88 = ppppppplVar10;
          func_0x000107c2793c(&UNK_10f7cce43);
          func_0x00010b97e888();
          func_0x000107c31080(&ppppppplStack_90,ppppppplVar8,&ppppppplStack_e0);
          FUN_10b99f560(appppppplStack_188,&ppppppplStack_90);
          ppppppplVar10 = (long *******)appppppplStack_188;
          func_0x00010b97f23c();
          func_0x000104bda960(appppppplStack_188[0]);
          func_0x00010b97f20c();
          func_0x00010b97ea80();
          func_0x000107c3a014();
          ppppppplStack_1a0 = (long *******)0x0;
          unaff_x24 = (undefined **)ppppppplVar8;
        }
        else {
          unaff_x19 = (long *******)ppppppplStack_1b8[1];
          func_0x00010b97ed54();
          ppppppplStack_170 = (long *******)0x0;
          func_0x00010b97e654();
          if (unaff_x19 != (long *******)0x0) {
            do {
              func_0x000107c39f98();
            } while (extraout_w11_24 != 0);
          }
          *ppppppplVar8 = (long ******)&PTR_DAT_110d7c488;
          ppppppplVar8[2] = (long ******)unaff_x19;
          ppppppplVar8[3] = (long ******)unaff_x24;
          do {
            func_0x000107c39fa4();
          } while (extraout_w10_26 != 0);
          do {
            ppppppplStack_1a0 = ppppppplVar8;
            func_0x000107c3a128();
            cVar6 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_30,0x10);
            if (bVar2) {
              *extraout_x8_30 = extraout_x9_29;
              cVar6 = ExclusiveMonitorsStatus();
            }
            ppppppplVar8 = ppppppplStack_1a0;
          } while (cVar6 != '\0');
          if ((bool)uVar7) {
            func_0x00010b97e808();
          }
        }
        FUN_10b97aefc(ppppppplStack_170);
        param_3 = ppppppplStack_1a8;
        param_1 = ppppppplStack_1b0;
        param_2 = ppppppplStack_1b8;
        ppppppplVar11 = ppppppplStack_1a0;
code_r0x00010b977fc8:
        do {
          ppppppplStack_1a0 = ppppppplVar11;
          func_0x000107c3a0a0();
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(unaff_x26,0x10);
          if (bVar2) {
            *unaff_x26 = extraout_x8_31;
            cVar6 = ExclusiveMonitorsStatus();
          }
          ppppppplVar11 = ppppppplStack_1a0;
        } while (cVar6 != '\0');
        if ((bool)uVar7) {
          func_0x00010b97e8d8();
        }
      }
      else {
code_r0x00010b977478:
        pppppplStack_118 = (long ******)0x0;
        ppppppplVar17 = (long *******)appppppplStack_100;
        ppppppplVar9 = (long *******)&uStack_110;
        func_0x00010b97e768(&ppppppplStack_e0);
        bVar19 = *(byte *)(param_5 + 1);
        ppppppplVar24 = (long *******)(ulong)bVar19;
        if ((bVar19 & 1) == 0) {
          func_0x00010b98fa8c(&ppppppplStack_90,&bStack_a0);
          ppppppplVar9 = (long *******)&ppppppplStack_90;
          func_0x000107c27e5c();
          ppppppplStack_170 = ppppppplVar9;
          ppppppplStack_168 = ppppppplVar10;
          func_0x00010b97f1b8();
          unaff_x19 = (long *******)&ppppppplStack_150;
          ppppppplVar9 = (long *******)&ppppppplStack_170;
          func_0x00010b97e9e4(&ppppppplStack_150);
          func_0x000107c3a068();
          ppppppplVar17 = extraout_x11_02;
          ppppppplVar10 = extraout_x10;
          if (cVar6 == cVar5) {
            ppppppplVar17 = extraout_x8_26;
            ppppppplVar10 = unaff_x19;
          }
          func_0x00010b97ec70();
          func_0x000107c3a014();
          func_0x00010b97eef0();
          ppppppplStack_1a0 = (long *******)0x0;
        }
        else {
          ppppppplVar10 = (long *******)&ppppppplStack_e0;
          FUN_10b972a1c(&pppppplStack_118);
        }
        func_0x00010b97edb0();
        if ((bVar19 & 1) != 0) goto code_r0x00010b977abc;
      }
      FUN_10b972f3c(pppppplStack_118);
      func_0x00010b97e958(&uStack_110);
    }
    func_0x00010b97e958(appppppplStack_100);
    func_0x000107c30df4(pppppplStack_e8);
    param_4 = ppppppplVar24;
    goto LAB_10b9780d0;
  case 0xe:
    FUN_10b990668(&ppppppplStack_90,&bStack_a0);
    ppppppplVar17 = (long *******)&ppppppplStack_90;
    func_0x00010b97e78c(&ppppppplStack_e0);
    if (((ulong)param_5[1] & 1) == 0) {
      func_0x00010b97e8b8();
      ppppppplStack_1a0 = (long *******)0x0;
    }
    else {
      ppppppplVar8 = (long *******)&ppppppplStack_150;
      ppppppplVar17 = (long *******)&ppppppplStack_e0;
      ppppppplVar9 = (long *******)&ppppppplStack_90;
      func_0x00010b97e768();
      if (((ulong)param_5[1] & 1) == 0) {
        func_0x00010b97e8b8();
        ppppppplStack_1a0 = (long *******)0x0;
      }
      else {
        unaff_x19 = (long *******)param_2[1];
        func_0x00010b97ed54();
        func_0x00010b97e654();
        if (unaff_x19 != (long *******)0x0) {
          do {
            func_0x000107c39f98();
          } while (extraout_w11_04 != 0);
        }
        ppppppplVar8[2] = (long ******)unaff_x19;
        *ppppppplVar8 = (long ******)&PTR_FUN_110d7c5c0;
        pppppplVar12 = (long ******)0x0;
        if (ppppppplStack_150 != (long *******)0x0) {
          do {
            func_0x00010b97e7d0();
            pppppplVar12 = extraout_x9_06;
          } while (extraout_w12_02 != 0);
        }
        ppppppplVar8[3] = pppppplVar12;
        do {
          func_0x000107c39fa4();
          ppppppplStack_1a0 = ppppppplVar8;
        } while (extraout_w10_03 != 0);
        do {
          func_0x000107c3a128();
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_05,0x10);
          if (bVar2) {
            *extraout_x8_05 = extraout_x9_07;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((bool)uVar7) {
          func_0x00010b97e808();
        }
      }
      func_0x00010b97ee34();
    }
    func_0x00010b97e958(&ppppppplStack_e0);
    lVar25 = -0x80;
    goto code_r0x00010b9780cc;
  case 0xf:
    ppppppplVar24 = (long *******)&bStack_a0;
    func_0x00010b9906a4();
    func_0x00010b97e708();
    if (((ulong)param_5[1] & 1) == 0) {
      func_0x00010b97e8c8();
      goto code_r0x00010b977778;
    }
    ppppppplVar17 = ppppppplVar24 + 4;
    func_0x00010b97e78c(&ppppppplStack_150);
    if (((ulong)param_5[1] & 1) != 0) {
      ppppppplVar8 = (long *******)&ppppppplStack_90;
      func_0x00010b97e730();
      if (((ulong)param_5[1] & 1) != 0) {
        func_0x00010b97efa8();
        func_0x00010b97e768();
        if (((ulong)param_5[1] & 1) != 0) {
          unaff_x19 = (long *******)param_2[1];
          func_0x00010b97f234();
          func_0x00010b97e654();
          if (unaff_x19 != (long *******)0x0) {
            do {
              func_0x000107c39f98();
            } while (extraout_w11_09 != 0);
          }
          ppppppplVar8[2] = (long ******)unaff_x19;
          *ppppppplVar8 = (long ******)&PTR_FUN_110d7c628;
          pppppplVar12 = (long ******)0x0;
          if (ppppppplStack_90 != (long *******)0x0) {
            do {
              func_0x00010b97e7d0();
              pppppplVar12 = extraout_x9_13;
            } while (extraout_w12_04 != 0);
          }
          ppppppplVar8[3] = pppppplVar12;
          pppppplVar12 = (long ******)0x0;
          if (appppppplStack_100[0] != (long *******)0x0) {
            do {
              func_0x00010b97e7d0();
              pppppplVar12 = extraout_x9_14;
            } while (extraout_w12_05 != 0);
          }
          ppppppplVar8[4] = pppppplVar12;
          do {
            func_0x000107c39fa4();
            ppppppplStack_1a0 = ppppppplVar8;
          } while (extraout_w10_08 != 0);
          do {
            func_0x000107c3a128();
            cVar6 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_10,0x10);
            if (bVar2) {
              *extraout_x8_10 = extraout_x9_15;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          goto code_r0x00010b9770f8;
        }
        func_0x00010b97e8a8();
code_r0x00010b977f38:
        ppppppplStack_1a0 = (long *******)0x0;
        goto code_r0x00010b977f3c;
      }
      func_0x00010b97e8c8();
code_r0x00010b977b90:
      ppppppplStack_1a0 = (long *******)0x0;
      goto code_r0x00010b9780c0;
    }
    func_0x00010b97e8a8();
code_r0x00010b977a2c:
    ppppppplStack_1a0 = (long *******)0x0;
code_r0x00010b9780c4:
    func_0x00010b97e918();
    goto code_r0x00010b9780c8;
  case 0x10:
    ppppppplVar24 = (long *******)&bStack_a0;
    func_0x00010b990744();
    func_0x00010b97e708();
    if (((ulong)param_5[1] & 1) != 0) {
      ppppppplVar8 = (long *******)&ppppppplStack_150;
      func_0x00010b97e730();
      if (((ulong)param_5[1] & 1) != 0) {
        unaff_x19 = (long *******)param_2[1];
        func_0x00010b97ed54();
        func_0x00010b97e654();
        if (unaff_x19 != (long *******)0x0) {
          do {
            func_0x000107c39f98();
          } while (extraout_w11_06 != 0);
        }
        ppppppplVar8[2] = (long ******)unaff_x19;
        *ppppppplVar8 = (long ******)&PTR_FUN_110d7ca30;
        pppppplVar12 = (long ******)0x0;
        if (ppppppplStack_150 != (long *******)0x0) {
          do {
            func_0x00010b97e7d0();
            pppppplVar12 = extraout_x9_09;
          } while (extraout_w12_03 != 0);
        }
        ppppppplVar8[3] = pppppplVar12;
        do {
          func_0x000107c39fa4();
          ppppppplStack_1a0 = ppppppplVar8;
        } while (extraout_w10_05 != 0);
        do {
          func_0x000107c3a128();
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_07,0x10);
          if (bVar2) {
            *extraout_x8_07 = extraout_x9_10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto code_r0x00010b977380;
      }
      func_0x00010b97e8b8();
code_r0x00010b977a14:
      ppppppplStack_1a0 = (long *******)0x0;
code_r0x00010b977a18:
      func_0x00010b97ee34();
      goto code_r0x00010b9780c8;
    }
    func_0x00010b97e8b8();
    goto code_r0x00010b977778;
  case 0x12:
    ppppppplVar24 = (long *******)&bStack_a0;
    func_0x00010b9906c4();
    func_0x00010b97e708();
    if (((ulong)param_5[1] & 1) != 0) {
      ppppppplVar17 = ppppppplVar24 + 4;
      func_0x00010b97e78c(&ppppppplStack_150);
      if (((ulong)param_5[1] & 1) == 0) {
        func_0x00010b97e8a8();
        goto code_r0x00010b977a2c;
      }
      ppppppplVar8 = (long *******)&ppppppplStack_90;
      func_0x00010b97e730();
      if (((ulong)param_5[1] & 1) == 0) {
        func_0x00010b97e8c8();
        goto code_r0x00010b977b90;
      }
      func_0x00010b97efa8();
      func_0x00010b97e768();
      if (((ulong)param_5[1] & 1) == 0) {
        func_0x00010b97e8a8();
        goto code_r0x00010b977f38;
      }
      unaff_x19 = (long *******)param_2[1];
      func_0x00010b97f234();
      func_0x00010b97e654();
      if (unaff_x19 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_03 != 0);
      }
      ppppppplVar8[2] = (long ******)unaff_x19;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7c6e8;
      pppppplVar12 = (long ******)0x0;
      if (ppppppplStack_90 != (long *******)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppplVar12 = extraout_x9_03;
        } while (extraout_w12_00 != 0);
      }
      ppppppplVar8[3] = pppppplVar12;
      pppppplVar12 = (long ******)0x0;
      if (appppppplStack_100[0] != (long *******)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppplVar12 = extraout_x9_04;
        } while (extraout_w12_01 != 0);
      }
      ppppppplVar8[4] = pppppplVar12;
      do {
        func_0x000107c39fa4();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_02 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_04,0x10);
        if (bVar2) {
          *extraout_x8_04 = extraout_x9_05;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
code_r0x00010b9770f8:
      if ((bool)uVar7) {
        func_0x00010b97e808();
      }
code_r0x00010b977f3c:
      func_0x00010b97f244();
      unaff_x21 = param_2;
code_r0x00010b9780c0:
      func_0x00010b97eee8();
      goto code_r0x00010b9780c4;
    }
    func_0x00010b97e8c8();
    goto code_r0x00010b977778;
  case 0x13:
    ppppppplVar24 = (long *******)&bStack_a0;
    func_0x00010b9906e4();
    func_0x00010b97e708();
    if (((ulong)param_5[1] & 1) != 0) {
      ppppppplVar8 = (long *******)&ppppppplStack_150;
      func_0x00010b97e730();
      if (((ulong)param_5[1] & 1) == 0) {
        ppppppplVar10 = (long *******)&UNK_10f7cd22d;
        func_0x00010b97e990();
        goto code_r0x00010b977a14;
      }
      unaff_x19 = (long *******)param_2[1];
      func_0x00010b97ed54();
      func_0x00010b97e654();
      if (unaff_x19 != (long *******)0x0) {
        do {
          func_0x000107c39f98();
        } while (extraout_w11_13 != 0);
      }
      ppppppplVar8[2] = (long ******)unaff_x19;
      *ppppppplVar8 = (long ******)&PTR_FUN_110d7c798;
      pppppplVar12 = (long ******)0x0;
      if (ppppppplStack_150 != (long *******)0x0) {
        do {
          func_0x00010b97e7d0();
          pppppplVar12 = extraout_x9_19;
        } while (extraout_w12_06 != 0);
      }
      ppppppplVar8[3] = pppppplVar12;
      do {
        func_0x000107c39fa4();
        ppppppplStack_1a0 = ppppppplVar8;
      } while (extraout_w10_14 != 0);
      do {
        func_0x000107c3a128();
        cVar6 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_14,0x10);
        if (bVar2) {
          *extraout_x8_14 = extraout_x9_20;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
code_r0x00010b977380:
      if ((bool)uVar7) {
        func_0x00010b97e808();
      }
      goto code_r0x00010b977a18;
    }
    ppppppplVar10 = (long *******)&UNK_10f7cd22d;
    func_0x00010b97e990();
    goto code_r0x00010b977778;
  case 0x14:
    ppppppplVar24 = (long *******)&bStack_a0;
    func_0x00010b990704();
    func_0x00010b97e708();
    if (((ulong)param_5[1] & 1) != 0) {
      ppppppplVar17 = ppppppplVar24 + 4;
      func_0x00010b97e78c(&ppppppplStack_150);
      if (((ulong)param_5[1] & 1) == 0) {
        ppppppplVar10 = (long *******)&UNK_10f7cd2ab;
        func_0x00010b97e990();
        goto code_r0x00010b977a2c;
      }
      ppppppplVar8 = (long *******)&ppppppplStack_90;
      func_0x00010b97e730();
      if (((ulong)param_5[1] & 1) == 0) {
        ppppppplVar10 = (long *******)&UNK_10f7cd285;
        func_0x00010b97e990();
        goto code_r0x00010b977b90;
      }
      func_0x00010b97efa8();
      func_0x00010b97e768();
      if (((ulong)param_5[1] & 1) == 0) {
        ppppppplVar10 = (long *******)&UNK_10f7cd2ab;
        func_0x00010b97e990();
        ppppppplStack_1a0 = (long *******)0x0;
      }
      else {
        func_0x00010b97ee54();
        pppppplVar12 = param_2[1];
        ppppppplVar11 = ppppppplVar8 + 1;
        *ppppppplVar11 = (long ******)0x1;
        *ppppppplVar8 = (long ******)&PTR_DAT_110d7bd68;
        ppppppplVar24 = ppppppplVar8;
        if (pppppplVar12 == (long ******)0x0) {
          unaff_x19 = (long *******)0x0;
          pppppplVar12 = (long ******)0x0;
        }
        else {
          do {
            func_0x000107c39f98();
          } while (extraout_w11_14 != 0);
          unaff_x19 = (long *******)param_2[1];
          pppppplVar12 = extraout_x8_15;
        }
        ppppppplVar8[2] = pppppplVar12;
        *ppppppplVar8 = (long ******)&PTR_FUN_110d7c848;
        func_0x000107c3a018();
        ppppppplVar24[1] = (long ******)0x1;
        func_0x00010b97eae8();
        if (unaff_x19 != (long *******)0x0) {
          do {
            func_0x000107c39fa4();
          } while (extraout_w10_27 != 0);
        }
        ppppppplVar24[2] = (long ******)unaff_x19;
        *ppppppplVar24 = (long ******)&PTR_DAT_110d7c230;
        ppppppplVar8[3] = (long ******)ppppppplVar24;
        pppppplVar12 = (long ******)0x0;
        if (ppppppplStack_90 != (long *******)0x0) {
          do {
            func_0x000107c39f98();
            pppppplVar12 = extraout_x8_32;
          } while (extraout_w11_25 != 0);
        }
        ppppppplVar8[4] = pppppplVar12;
        pppppplVar12 = (long ******)0x0;
        if (appppppplStack_100[0] != (long *******)0x0) {
          do {
            func_0x000107c39f98();
            pppppplVar12 = extraout_x8_33;
          } while (extraout_w11_26 != 0);
        }
        ppppppplVar8[5] = pppppplVar12;
        do {
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar11,0x10);
          if (bVar2) {
            *ppppppplVar11 = (long ******)((long)*ppppppplVar11 + 1);
            cVar6 = ExclusiveMonitorsStatus();
          }
          ppppppplStack_1a0 = ppppppplVar8;
        } while (cVar6 != '\0');
        do {
          uVar7 = (long ******)((long)*ppppppplVar11 + -1) == (long ******)0x0;
          cVar6 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(ppppppplVar11,0x10);
          if (bVar2) {
            *ppppppplVar11 = (long ******)((long)*ppppppplVar11 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        ppppppplVar24 = ppppppplVar8;
        if ((bool)uVar7) {
          func_0x00010b97e8d8();
        }
      }
      func_0x00010b97f244();
      unaff_x21 = param_3;
      unaff_x26 = param_2;
      goto code_r0x00010b9780c0;
    }
    ppppppplVar10 = (long *******)&UNK_10f7cd285;
    func_0x00010b97e990();
code_r0x00010b977778:
    ppppppplStack_1a0 = (long *******)0x0;
code_r0x00010b9780c8:
    lVar25 = -0xd0;
code_r0x00010b9780cc:
    func_0x00010b97e958(&stack0xfffffffffffffff0 + lVar25);
    param_4 = ppppppplVar24;
    goto LAB_10b9780d0;
  case 0x15:
    unaff_x19 = (long *******)param_2[1];
    func_0x000107c3a018();
    func_0x00010b97e654();
    if (unaff_x19 != (long *******)0x0) {
      do {
        func_0x000107c39f98();
      } while (extraout_w11_15 != 0);
    }
    ppppppplVar8[2] = (long ******)unaff_x19;
    *ppppppplVar8 = (long ******)&PTR_FUN_110d7c8f8;
    do {
      func_0x000107c39fa4();
      ppppppplStack_1a0 = ppppppplVar8;
    } while (extraout_w10_17 != 0);
    do {
      func_0x000107c3a128();
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_17,0x10);
      if (bVar2) {
        *extraout_x8_17 = extraout_x9_23;
        cVar6 = ExclusiveMonitorsStatus();
      }
      param_4 = ppppppplVar24;
      ppuVar30 = unaff_x24;
    } while (cVar6 != '\0');
    break;
  case 0x16:
    ppuVar30 = (undefined **)&bStack_a0;
    func_0x00010b990724();
    unaff_x19 = (long *******)param_2[1];
    param_4 = (long *******)ppuVar30;
    func_0x00010b97ee54();
    unaff_x21 = param_4 + 1;
    *unaff_x21 = (long ******)0x1;
    func_0x00010b97eae8();
    if (unaff_x19 != (long *******)0x0) {
      do {
        func_0x000107c39fa4();
      } while (extraout_w10_16 != 0);
    }
    param_4[2] = (long ******)unaff_x19;
    *param_4 = (long ******)&PTR_FUN_110d7c960;
    ppppppplVar10 = (long *******)(ppuVar30 + 2);
    func_0x00010b90e320(param_4 + 3);
    do {
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar2) {
        *unaff_x21 = (long ******)((long)*unaff_x21 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
      ppppppplStack_1a0 = param_4;
    } while (cVar6 != '\0');
    do {
      uVar7 = (long ******)((long)*unaff_x21 + -1) == (long ******)0x0;
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(unaff_x21,0x10);
      if (bVar2) {
        *unaff_x21 = (long ******)((long)*unaff_x21 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    unaff_x24 = ppuVar30;
    if (!(bool)uVar7) goto LAB_10b9780d0;
    ppppplVar15 = (*param_4)[1];
    goto code_r0x00010b976b88;
  }
code_r0x00010b976b7c:
  unaff_x24 = ppuVar30;
  if ((bool)uVar7) {
    ppppplVar15 = (*ppppppplVar8)[1];
code_r0x00010b976b88:
    (*(code *)ppppplVar15)();
    unaff_x24 = ppuVar30;
  }
LAB_10b9780d0:
  ppppppplVar8 = ppppppplStack_1a0;
  uVar18 = SUB81(ppppppplVar9,0);
  if (((ulong)param_5[1] & 1) == 0) {
    *param_1 = (long ******)0x0;
    param_1[1] = (long ******)0x0;
    param_1[2] = (long ******)0x0;
  }
  else {
    ppppppplVar17 = (long *******)&bStack_a0;
    ppppppplStack_1b0 = param_1;
    FUN_10b9794f0(param_1,ppppppplStack_1a0);
    pppppplVar12 = param_3[2];
    ppppppplStack_1a8 = param_3;
    FUN_10b97953c();
    ppppppplVar24 = (long *******)0x0;
    uVar21 = (ulong)pppppplVar12 >> 7;
    unaff_x26 = (long *******)param_2[5];
    param_1 = (long *******)(((ulong)pppppplVar12 & 0x7f) * 0x101010101010101);
    while( true ) {
      param_3 = (long *******)(uVar21 & (ulong)unaff_x26);
      uVar21 = *(ulong *)((long)param_2[2] + (long)param_3);
      for (unaff_x21 = (long *******)
                       ((uVar21 ^ (ulong)param_1) + 0xfefefefefefefeff &
                        (uVar21 ^ (ulong)param_1 ^ 0xffffffffffffffff) & 0x8080808080808080);
          unaff_x21 != (long *******)0x0;
          unaff_x21 = (long *******)((long)unaff_x21 - 1U & (ulong)unaff_x21)) {
        uVar27 = ((ulong)unaff_x21 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                 ((ulong)unaff_x21 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
        unaff_x24 = (undefined **)
                    ((long)param_3 + ((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) &
                    (ulong)unaff_x26);
        pppppplVar34 = param_2[3] + (long)unaff_x24 * 6;
        FUN_10b9909a8(pppppplVar34,ppppppplStack_1a8);
        uVar18 = SUB81(ppppppplVar9,0);
        if (((ulong)pppppplVar34 & 1) != 0) goto LAB_10b97820c;
      }
      uVar18 = SUB81(ppppppplVar9,0);
      uVar7 = (uVar21 & ~uVar21 << 6 & 0x8080808080808080) == 0;
      if (!(bool)uVar7) break;
      ppppppplVar24 = ppppppplVar24 + 1;
      uVar21 = (long)ppppppplVar24 + (long)param_3;
    }
    unaff_x24 = (undefined **)(param_2 + 2);
    FUN_10b97d878(unaff_x24,pppppplVar12);
    pppppplVar34 = param_2[3] + (long)unaff_x24 * 6;
    func_0x000107c30df0(pppppplVar34,ppppppplStack_1a8);
    pppppplVar34[3] = (long *****)0x0;
    pppppplVar34[4] = (long *****)0x0;
    pppppplVar34[5] = (long *****)0x0;
    *(byte *)((long)param_2[2] + (long)unaff_x24) = (byte)pppppplVar12 & 0x7f;
    func_0x000107c39f84();
    ppppppplVar24 = param_2;
LAB_10b97820c:
    unaff_x19 = ppppppplStack_1b0;
    pppppplVar12 = param_2[3];
    param_4 = (long *******)(pppppplVar12 + (long)unaff_x24 * 6 + 3);
    FUN_10b972a1c(param_4,ppppppplStack_1b0);
    func_0x000107c30f8c(pppppplVar12 + (long)unaff_x24 * 6 + 4,unaff_x19 + 1);
    ppppppplVar10 = ppppppplStack_1a8;
    FUN_10b90a1e0(param_2 + 0xe);
    param_2 = ppppppplVar24;
  }
  FUN_10b972f3c(ppppppplVar8);
  param_5 = ppppppplVar8;
LAB_10b97824c:
  ppppppplVar9 = &pppppplStack_a8;
  func_0x000107c2a668();
LAB_10b978254:
  func_0x000107c39f7c(uStack_70);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
  __ZdlPv(unaff_x24);
  func_0x00010b97a478(&ppppppplStack_e0);
  __ZdlPv(param_4);
  func_0x00010b97a478(&ppppppplStack_150);
  FUN_10b972f3c(pppppplStack_118);
  func_0x00010b97e958(&uStack_110);
  func_0x00010b97e958(appppppplStack_100);
  func_0x000107c30df4(pppppplStack_e8);
  pppppplVar34 = (long ******)&pppppplStack_a8;
  func_0x000107c2a668();
  func_0x00010b97e950();
  pcStack_1d8 = FUN_10b97874c;
  ppppppplStack_230 = param_2;
  ppppppplStack_228 = param_1;
  ppppppplStack_220 = unaff_x26;
  ppppppplStack_218 = param_3;
  ppppppplStack_210 = (long *******)unaff_x24;
  ppppppplStack_208 = param_4;
  ppppppplStack_200 = param_5;
  ppppppplStack_1f8 = unaff_x21;
  ppppppplStack_1f0 = ppppppplVar9;
  ppppppplStack_1e8 = unaff_x19;
  puStack_1e0 = &stack0xfffffffffffffff0;
  (*(code *)(*ppppppplVar17)[4])(&pppppppuStack_260,ppppppplVar17);
  pppppplVar12 = (long ******)acStack_2b8;
  func_0x000107c31030(pppppplVar12,&pppppppuStack_260);
  func_0x000107c3a064();
  pppppplVar26 = ppppppplVar10[1];
  func_0x00010b97ee54();
  pppppplVar12[1] = (long *****)0x1;
  func_0x00010b97eae8();
  if (pppppplVar26 != (long ******)0x0) {
    do {
      func_0x000107c39fa4();
    } while (extraout_w10_28 != 0);
  }
  *pppppplVar12 = (long *****)&PTR_FUN_110d7bce8;
  pppppplVar12[3] = (long *****)0x0;
  pppppplVar12[4] = (long *****)0x0;
  pppppplVar12[2] = (long *****)pppppplVar26;
  *(undefined1 *)(pppppplVar12 + 5) = uVar18;
  if (acStack_2b8[0] == '\n') {
    ppppplVar15 = (long *****)acStack_2b8;
    FUN_10b9905a4(ppppplVar15);
    func_0x000107c30fa8(&pppppppuStack_288,ppppplVar15 + 2);
    func_0x000107c31030(&pppppppuStack_260,&pppppppuStack_288);
    func_0x000107c27900(&pppppppuStack_280);
  }
  else {
    func_0x000107c30df0(&pppppppuStack_260,acStack_2b8);
  }
  pppppppuVar23 = &pppppppuStack_288;
  pppppppuVar14 = pppppppuStack_250;
  func_0x000107c27918();
  lVar25 = 0;
  uVar21 = (ulong)pppppppuVar23 >> 7;
  pppppplVar26 = ppppppplVar10[0xb];
  while( true ) {
    uVar21 = uVar21 & (ulong)pppppplVar26;
    uVar36 = *(ulong *)((long)ppppppplVar10[8] + uVar21);
    func_0x00010b97f324(uVar36 ^ ((ulong)pppppppuVar23 & 0x7f) * 0x101010101010101);
    for (uVar27 = extraout_x8_35 & 0x8080808080808080; uVar27 != 0; uVar27 = uVar27 - 1 & uVar27) {
      uVar32 = (uVar27 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar27 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
      uVar32 = uVar21 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3) & (ulong)pppppplVar26
      ;
      pppppplVar22 = ppppppplVar10[9];
      pppppppuVar14 = &pppppppuStack_260;
      FUN_10b9909a8();
      if (((ulong)pppppplVar22 & 1) != 0) {
        puVar28 = (undefined *)((long)ppppppplVar10[8] + uVar32);
        pppppplVar26 = ppppppplVar10[9] + uVar32 * 4;
        goto LAB_10b9788dc;
      }
    }
    if ((uVar36 & ~uVar36 << 6 & 0x8080808080808080) != 0) break;
    lVar25 = lVar25 + 8;
    uVar21 = lVar25 + uVar21;
  }
  puVar28 = (undefined *)((long)ppppppplVar10[8] + (long)ppppppplVar10[0xb]);
LAB_10b9788dc:
  func_0x00010b97e958(&pppppppuStack_260);
  pppppplVar22 = pppppplVar12 + 4;
  if ((undefined *)((long)ppppppplVar10[8] + (long)ppppppplVar10[0xb]) != puVar28 &&
      pppppplVar22 != pppppplVar26 + 3) {
    ppppplVar15 = (long *****)0x0;
    if (pppppplVar26[3] != (long *****)0x0) {
      do {
        func_0x00010b97e7d0();
        pppppplVar22 = extraout_x8_36;
        ppppplVar15 = extraout_x9_30;
      } while (extraout_w12_09 != 0);
    }
    *pppppplVar22 = ppppplVar15;
    FUN_10b979074();
  }
  (*(code *)(*ppppppplVar17)[5])(auStack_2c8,ppppppplVar17);
  (*(code *)(*ppppppplVar17)[6])(&pppppplStack_2d0,ppppppplVar17);
  ppppppplVar9 = ppppppplVar10 + 0x11;
  FUN_10b979120();
  if (ppppppplVar9 != (long *******)0x0) goto LAB_10b978b1c;
  if (ppppppplVar10[0x15] < (long ******)0x49) {
    pppppplVar22 = ppppppplVar10[0x14];
    pppppplVar26 = ppppppplVar10[0x13];
    uVar27 = (long)pppppplVar26 - (long)ppppppplVar10[0x12];
    uVar21 = (long)pppppplVar22 - (long)ppppppplVar10[0x11];
    if (uVar21 <= uVar27) {
      pppppppuVar23 = (undefined8 *******)((long)uVar21 >> 2);
      if (pppppplVar22 == ppppppplVar10[0x11]) {
        pppppppuVar23 = (undefined8 *******)0x1;
      }
      ppppppplStack_268 = ppppppplVar10 + 0x14;
      FUN_10b97942c();
      pppppppuStack_280 = (undefined8 *******)((long)pppppppuVar23 + uVar27);
      pppppppuStack_270 = pppppppuVar23 + (long)pppppppuVar14;
      pppppppuStack_288 = pppppppuVar23;
      pppppppuStack_278 = pppppppuStack_280;
      func_0x00010b97eebc();
      ppppppplStack_298 = ppppppplVar10 + 0x16;
      uStack_290 = 0x49;
      pppppppuStack_2a0 = pppppppuVar23;
      FUN_10b979364(&pppppppuStack_288);
      ppppppplVar9 = ppppppplStack_268;
      pppppppuStack_2a0 = (undefined8 *******)0x0;
      pppppplVar26 = ppppppplVar10[0x13];
      pppppppuVar14 = pppppppuStack_278;
      pppppppuVar29 = pppppppuStack_288;
      pppppppuVar16 = pppppppuStack_280;
      pppppppuVar35 = pppppppuStack_270;
      while (pppppplVar22 = ppppppplVar10[0x12], pppppplVar26 != pppppplVar22) {
        pppppppuVar33 = pppppppuVar16;
        if (pppppppuVar16 == pppppppuVar29) {
          if (pppppppuVar14 < pppppppuVar35) {
            lVar25 = (long)pppppppuVar14 - (long)pppppppuVar29;
            pppppppuVar13 =
                 pppppppuVar14 + (((long)pppppppuVar35 - (long)pppppppuVar14 >> 3) + 1) / 2;
            pppppppuVar33 =
                 (undefined8 *******)
                 ((long)pppppppuVar13 - ((long)pppppppuVar14 - (long)pppppppuVar29));
            pppppppuVar14 = pppppppuVar13;
            if (lVar25 != 0) {
              _memmove(pppppppuVar33,pppppppuVar16,lVar25);
              pppppppuVar23 = pppppppuVar16;
            }
          }
          else {
            pppppppuVar33 = (undefined8 *******)((long)pppppppuVar35 - (long)pppppppuVar29 >> 2);
            if ((long)pppppppuVar35 - (long)pppppppuVar29 == 0) {
              pppppppuVar33 = (undefined8 *******)0x1;
            }
            ppppppplStack_240 = ppppppplVar9;
            pppppppuVar13 = pppppppuVar33;
            FUN_10b97942c();
            pppppppuStack_258 =
                 (undefined8 *******)
                 ((long)pppppppuVar13 + ((long)pppppppuVar33 * 2 + 6U & 0xfffffffffffffff8));
            pppppppuStack_248 = pppppppuVar13 + (long)pppppppuVar23;
            pppppppuStack_260 = pppppppuVar13;
            pppppppuStack_250 = pppppppuStack_258;
            func_0x00010b97f298(&pppppppuStack_260);
            FUN_10b979404();
            pppppppuVar4 = pppppppuStack_248;
            pppppppuVar3 = pppppppuStack_250;
            pppppppuVar33 = pppppppuStack_258;
            pppppppuVar13 = pppppppuStack_260;
            pppppppuStack_260 = pppppppuVar29;
            pppppppuStack_258 = pppppppuVar16;
            pppppppuStack_250 = pppppppuVar14;
            pppppppuStack_248 = pppppppuVar35;
            func_0x00010b979488(&pppppppuStack_260);
            pppppppuVar14 = pppppppuVar3;
            pppppppuVar29 = pppppppuVar13;
            pppppppuVar35 = pppppppuVar4;
          }
        }
        pppppplVar26 = pppppplVar26 + -1;
        pppppppuVar16 = pppppppuVar33 + -1;
        *pppppppuVar16 = (undefined8 ******)*pppppplVar26;
      }
      pppppppuStack_288 = (undefined8 *******)ppppppplVar10[0x11];
      ppppppplVar10[0x11] = (long ******)pppppppuVar29;
      ppppppplVar10[0x12] = (long ******)pppppppuVar16;
      pppppppuStack_270 = (undefined8 *******)ppppppplVar10[0x14];
      pppppppuStack_278 = (undefined8 *******)ppppppplVar10[0x13];
      ppppppplVar10[0x13] = (long ******)pppppppuVar14;
      ppppppplVar10[0x14] = (long ******)pppppppuVar35;
      pppppppuStack_280 = (undefined8 *******)pppppplVar22;
      func_0x00010b979460(&pppppppuStack_2a0);
      func_0x00010b979488(&pppppppuStack_288);
      goto LAB_10b978b1c;
    }
    func_0x00010b97eebc();
    if (pppppplVar22 != pppppplVar26) {
      func_0x00010b979224(ppppppplVar10 + 0x11);
      goto LAB_10b978b1c;
    }
    FUN_10b9792c0(ppppppplVar10 + 0x11,ppppppplVar9);
  }
  else {
    ppppppplVar10[0x15] = (long ******)((long)ppppppplVar10[0x15] + -0x49);
  }
  ppppplVar15 = *ppppppplVar10[0x12];
  ppppppplVar10[0x12] = ppppppplVar10[0x12] + 1;
  FUN_10b979188(ppppppplVar10 + 0x11,ppppplVar15);
LAB_10b978b1c:
  ppppppplVar9 = ppppppplVar10 + 0x11;
  func_0x00010b979150();
  func_0x000107c30df0();
  func_0x000107c30f3c(ppppppplVar9 + 3,auStack_2c8);
  if ((pppppplStack_2d0 != (long ******)0x0) && (pppppplStack_2d0[2] != (long *****)0x0)) {
    ppppplVar15 = pppppplStack_2d0[2] + 1;
    do {
      cVar6 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppppplVar15,0x10);
      if (bVar2) {
        *ppppplVar15 = (long ****)((long)*ppppplVar15 + 1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppppppplVar9[5] = pppppplStack_2d0;
  do {
    func_0x000107c3a00c();
  } while (extraout_w9_02 != 0);
  ppppppplVar9[6] = pppppplVar12;
  ppppppplVar10[0x16] = (long ******)((long)ppppppplVar10[0x16] + 1);
  func_0x000104bdc324(pppppplStack_2d0);
  func_0x00010b97e958(auStack_2c8);
  do {
    func_0x000107c3a00c();
  } while (extraout_w9_03 != 0);
  *pppppplVar34 = (long *****)pppppplVar12;
  FUN_10b9794c8(pppppplVar12);
  func_0x00010b97e958(acStack_2b8);
  return;
}



/* Entry: 10b97874c; end: 10b978c6f;  */

void FUN_10b97874c(undefined8 *param_1,long param_2,long *param_3,char param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  ulong uVar12;
  ulong extraout_x8;
  ulong uVar13;
  long *extraout_x8_00;
  long *plVar14;
  undefined8 ***pppuVar15;
  int extraout_w9;
  int extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  undefined8 ****ppppuVar16;
  int extraout_w12;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 ****ppppuVar21;
  ulong uVar22;
  undefined8 ****ppppuVar23;
  undefined8 ****ppppuVar24;
  ulong uVar25;
  undefined8 ***pppuVar26;
  long lStack_100;
  undefined1 auStack_f8 [16];
  char acStack_e8 [24];
  undefined8 ***pppuStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined8 ***pppuStack_a0;
  long *plStack_98;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  long *plStack_70;
  
  (**(code **)(*param_3 + 0x20))(&pppuStack_90,param_3);
  pcVar6 = acStack_e8;
  func_0x000107c31030(pcVar6,&pppuStack_90);
  func_0x000107c3a064();
  lVar17 = *(long *)(param_2 + 8);
  func_0x00010b97ee54();
  pcVar6[8] = '\x01';
  pcVar6[9] = '\0';
  pcVar6[10] = '\0';
  pcVar6[0xb] = '\0';
  pcVar6[0xc] = '\0';
  pcVar6[0xd] = '\0';
  pcVar6[0xe] = '\0';
  pcVar6[0xf] = '\0';
  func_0x00010b97eae8();
  if (lVar17 != 0) {
    do {
      func_0x000107c39fa4();
    } while (extraout_w10 != 0);
  }
  *(undefined ***)pcVar6 = &PTR_FUN_110d7bce8;
  pcVar6[0x18] = '\0';
  pcVar6[0x19] = '\0';
  pcVar6[0x1a] = '\0';
  pcVar6[0x1b] = '\0';
  pcVar6[0x1c] = '\0';
  pcVar6[0x1d] = '\0';
  pcVar6[0x1e] = '\0';
  pcVar6[0x1f] = '\0';
  pcVar6[0x20] = '\0';
  pcVar6[0x21] = '\0';
  pcVar6[0x22] = '\0';
  pcVar6[0x23] = '\0';
  pcVar6[0x24] = '\0';
  pcVar6[0x25] = '\0';
  pcVar6[0x26] = '\0';
  pcVar6[0x27] = '\0';
  *(long *)(pcVar6 + 0x10) = lVar17;
  pcVar6[0x28] = param_4;
  if (acStack_e8[0] == '\n') {
    pcVar7 = acStack_e8;
    FUN_10b9905a4(pcVar7);
    func_0x000107c30fa8(&pppuStack_b8,pcVar7 + 0x10);
    func_0x000107c31030(&pppuStack_90,&pppuStack_b8);
    func_0x000107c27900(&pppuStack_b0);
  }
  else {
    func_0x000107c30df0(&pppuStack_90,acStack_e8);
  }
  ppppuVar16 = &pppuStack_b8;
  ppppuVar9 = (undefined8 ****)pppuStack_80;
  func_0x000107c27918();
  lVar17 = 0;
  uVar12 = (ulong)ppppuVar16 >> 7;
  uVar20 = *(ulong *)(param_2 + 0x58);
  while( true ) {
    uVar12 = uVar12 & uVar20;
    uVar25 = *(ulong *)(*(long *)(param_2 + 0x40) + uVar12);
    func_0x00010b97f324(uVar25 ^ ((ulong)ppppuVar16 & 0x7f) * 0x101010101010101);
    for (uVar18 = extraout_x8 & 0x8080808080808080; uVar18 != 0; uVar18 = uVar18 - 1 & uVar18) {
      uVar13 = (uVar18 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar18 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar22 = uVar12 + ((ulong)LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) >> 3) & uVar20;
      uVar13 = *(ulong *)(param_2 + 0x48);
      ppppuVar9 = &pppuStack_90;
      FUN_10b9909a8();
      if ((uVar13 & 1) != 0) {
        lVar17 = *(long *)(param_2 + 0x40) + uVar22;
        uVar20 = *(long *)(param_2 + 0x48) + uVar22 * 0x20;
        goto LAB_10b9788dc;
      }
    }
    if ((uVar25 & ~uVar25 << 6 & 0x8080808080808080) != 0) break;
    lVar17 = lVar17 + 8;
    uVar12 = lVar17 + uVar12;
  }
  lVar17 = *(long *)(param_2 + 0x40) + *(long *)(param_2 + 0x58);
LAB_10b9788dc:
  func_0x00010b97e958(&pppuStack_90);
  plVar14 = (long *)(pcVar6 + 0x20);
  if (*(long *)(param_2 + 0x40) + *(long *)(param_2 + 0x58) != lVar17 &&
      plVar14 != (long *)(uVar20 + 0x18)) {
    lVar17 = 0;
    if (*(long *)(uVar20 + 0x18) != 0) {
      do {
        func_0x00010b97e7d0();
        plVar14 = extraout_x8_00;
        lVar17 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    *plVar14 = lVar17;
    FUN_10b979074();
  }
  (**(code **)(*param_3 + 0x28))(auStack_f8,param_3);
  (**(code **)(*param_3 + 0x30))(&lStack_100,param_3);
  lVar17 = param_2 + 0x88;
  FUN_10b979120();
  if (lVar17 != 0) goto LAB_10b978b1c;
  if (*(ulong *)(param_2 + 0xa8) < 0x49) {
    lVar19 = *(long *)(param_2 + 0xa0);
    lVar1 = *(long *)(param_2 + 0x98);
    uVar20 = lVar1 - *(long *)(param_2 + 0x90);
    uVar12 = lVar19 - *(long *)(param_2 + 0x88);
    if (uVar12 <= uVar20) {
      ppppuVar16 = (undefined8 ****)((long)uVar12 >> 2);
      if (lVar19 == *(long *)(param_2 + 0x88)) {
        ppppuVar16 = (undefined8 ****)0x1;
      }
      plStack_98 = (long *)(param_2 + 0xa0);
      FUN_10b97942c();
      pppuStack_b0 = (undefined8 ***)((long)ppppuVar16 + uVar20);
      pppuStack_a0 = ppppuVar16 + (long)ppppuVar9;
      pppuStack_b8 = ppppuVar16;
      pppuStack_a8 = pppuStack_b0;
      func_0x00010b97eebc();
      lStack_c8 = param_2 + 0xb0;
      uStack_c0 = 0x49;
      pppuStack_d0 = ppppuVar16;
      FUN_10b979364(&pppuStack_b8);
      plVar14 = plStack_98;
      pppuStack_d0 = (undefined8 ***)0x0;
      pppuVar26 = *(undefined8 ****)(param_2 + 0x98);
      ppppuVar9 = (undefined8 ****)pppuStack_a8;
      ppppuVar21 = (undefined8 ****)pppuStack_b8;
      ppppuVar11 = (undefined8 ****)pppuStack_b0;
      ppppuVar24 = (undefined8 ****)pppuStack_a0;
      while (pppuVar15 = *(undefined8 ****)(param_2 + 0x90), pppuVar26 != pppuVar15) {
        ppppuVar23 = ppppuVar11;
        if (ppppuVar11 == ppppuVar21) {
          if (ppppuVar9 < ppppuVar24) {
            lVar17 = (long)ppppuVar9 - (long)ppppuVar21;
            ppppuVar8 = ppppuVar9 + (((long)ppppuVar24 - (long)ppppuVar9 >> 3) + 1) / 2;
            ppppuVar23 = (undefined8 ****)((long)ppppuVar8 - ((long)ppppuVar9 - (long)ppppuVar21));
            ppppuVar9 = ppppuVar8;
            if (lVar17 != 0) {
              _memmove(ppppuVar23,ppppuVar11,lVar17);
              ppppuVar16 = ppppuVar11;
            }
          }
          else {
            ppppuVar23 = (undefined8 ****)((long)ppppuVar24 - (long)ppppuVar21 >> 2);
            if ((long)ppppuVar24 - (long)ppppuVar21 == 0) {
              ppppuVar23 = (undefined8 ****)0x1;
            }
            plStack_70 = plVar14;
            ppppuVar8 = ppppuVar23;
            FUN_10b97942c();
            pppuStack_88 = (undefined8 ***)
                           ((long)ppppuVar8 + ((long)ppppuVar23 * 2 + 6U & 0xfffffffffffffff8));
            pppuStack_78 = ppppuVar8 + (long)ppppuVar16;
            pppuStack_90 = ppppuVar8;
            pppuStack_80 = pppuStack_88;
            func_0x00010b97f298(&pppuStack_90);
            FUN_10b979404();
            pppuVar5 = pppuStack_78;
            pppuVar4 = pppuStack_80;
            ppppuVar23 = (undefined8 ****)pppuStack_88;
            pppuVar15 = pppuStack_90;
            pppuStack_90 = ppppuVar21;
            pppuStack_88 = ppppuVar11;
            pppuStack_80 = ppppuVar9;
            pppuStack_78 = ppppuVar24;
            func_0x00010b979488(&pppuStack_90);
            ppppuVar9 = (undefined8 ****)pppuVar4;
            ppppuVar21 = (undefined8 ****)pppuVar15;
            ppppuVar24 = (undefined8 ****)pppuVar5;
          }
        }
        pppuVar26 = pppuVar26 + -1;
        ppppuVar11 = ppppuVar23 + -1;
        *ppppuVar11 = (undefined8 ***)*pppuVar26;
      }
      pppuStack_b8 = *(undefined8 ****)(param_2 + 0x88);
      *(undefined8 *****)(param_2 + 0x88) = ppppuVar21;
      *(undefined8 *****)(param_2 + 0x90) = ppppuVar11;
      pppuStack_a0 = *(undefined8 ****)(param_2 + 0xa0);
      pppuStack_a8 = *(undefined8 ****)(param_2 + 0x98);
      *(undefined8 *****)(param_2 + 0x98) = ppppuVar9;
      *(undefined8 *****)(param_2 + 0xa0) = ppppuVar24;
      pppuStack_b0 = pppuVar15;
      func_0x00010b979460(&pppuStack_d0);
      func_0x00010b979488(&pppuStack_b8);
      goto LAB_10b978b1c;
    }
    func_0x00010b97eebc();
    if (lVar19 != lVar1) {
      func_0x00010b979224(param_2 + 0x88);
      goto LAB_10b978b1c;
    }
    FUN_10b9792c0(param_2 + 0x88,lVar17);
  }
  else {
    *(ulong *)(param_2 + 0xa8) = *(ulong *)(param_2 + 0xa8) - 0x49;
  }
  uVar10 = **(undefined8 **)(param_2 + 0x90);
  *(undefined8 **)(param_2 + 0x90) = *(undefined8 **)(param_2 + 0x90) + 1;
  FUN_10b979188(param_2 + 0x88,uVar10);
LAB_10b978b1c:
  lVar17 = param_2 + 0x88;
  func_0x00010b979150();
  func_0x000107c30df0();
  func_0x000107c30f3c(lVar17 + 0x18,auStack_f8);
  if ((lStack_100 != 0) && (*(long *)(lStack_100 + 0x10) != 0)) {
    plVar14 = (long *)(*(long *)(lStack_100 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = *plVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(lVar17 + 0x28) = lStack_100;
  do {
    func_0x000107c3a00c();
  } while (extraout_w9 != 0);
  *(char **)(lVar17 + 0x30) = pcVar6;
  *(long *)(param_2 + 0xb0) = *(long *)(param_2 + 0xb0) + 1;
  func_0x000104bdc324(lStack_100);
  func_0x00010b97e958(auStack_f8);
  do {
    func_0x000107c3a00c();
  } while (extraout_w9_00 != 0);
  *param_1 = pcVar6;
  FUN_10b9794c8(pcVar6);
  func_0x00010b97e958(acStack_e8);
  return;
}



/* Entry: 10b978c70; end: 10b978d4f;  */

long FUN_10b978c70(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong extraout_x8;
  ulong uVar4;
  long *unaff_x19;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  func_0x000107c3a10c();
  func_0x000107c3a024();
  uVar2 = *(ulong *)(param_2 + 0x10);
  FUN_10b97953c();
  lVar6 = 0;
  uVar3 = uVar2 >> 7;
  uVar5 = unaff_x19[3];
  while( true ) {
    uVar3 = uVar3 & uVar5;
    uVar7 = *(ulong *)(*unaff_x19 + uVar3);
    func_0x00010b97f324(uVar7 ^ (uVar2 & 0x7f) * 0x101010101010101);
    for (uVar8 = extraout_x8 & 0x8080808080808080; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar1 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar4 = unaff_x19[1];
      FUN_10b9909a8();
      if ((uVar4 & 1) != 0) {
        return *unaff_x19 + (uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & uVar5);
      }
    }
    if ((uVar7 & ~uVar7 << 6 & 0x8080808080808080) != 0) break;
    lVar6 = lVar6 + 8;
    uVar3 = lVar6 + uVar3;
  }
  return *unaff_x19 + unaff_x19[3];
}



/* Entry: 10b978d50; end: 10b978d7b;  */

undefined8 * FUN_10b978d50(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b978d7c; end: 10b978d7f;  */

undefined8 * FUN_10b978d7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7bce8;
  func_0x00010b979054(param_1 + 4);
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b978d80; end: 10b978d93;  */

void FUN_10b978d80(void)

{
  FUN_10b979028();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b978d94; end: 10b978d9b;  */

undefined1 FUN_10b978d94(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 10b978d9c; end: 10b978e87;  */

void FUN_10b978d9c(undefined8 *param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4,
                  long param_5)

{
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  if (*(long *)(param_2 + 0x18) == 0) {
    func_0x00010b97ee3c();
    FUN_10b97909c(param_1,param_2,param_5,auStack_48);
    func_0x00010b97e9b8();
  }
  else {
    if (*(char *)(param_2 + 0x28) == '\x01' && (byte)UNRECOVERED_JUMPTABLE[8] < 2) {
      func_0x00010b97f048();
      func_0x00010b97eb88();
                    /* WARNING: Could not recover jumptable at 0x00010b978e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    func_0x00010b97e9ac();
    func_0x00010b97ed0c(&uStack_58);
    if ((*(long *)(param_2 + 0x20) == 0) || ((*(byte *)(param_5 + 8) & 1) == 0)) {
      *param_1 = uStack_58;
      *(undefined1 *)(param_1 + 1) = uStack_50;
      uStack_58 = 0;
      uStack_50 = 0;
    }
    else {
      func_0x00010b97e9ac();
      func_0x00010b97ed0c(param_1);
    }
    func_0x00010b97ec14();
  }
  return;
}



/* Entry: 10b978e88; end: 10b978faf;  */

void FUN_10b978e88(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  long extraout_x8;
  undefined1 auStack_68 [40];
  long lVar2;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    func_0x00010b97ee3c();
    func_0x00010b97ea40();
    func_0x00010b97e9b8();
  }
  else {
    if (*(char *)(param_2 + 0x28) == '\x01') {
      lVar2 = param_2;
      func_0x00010b97f048();
      iVar1 = (int)lVar2;
      (**(code **)(extraout_x8 + 0x128))();
      if (iVar1 != 0) {
        *(undefined2 *)(param_1 + 1) = 1;
        *param_1 = 0;
        return;
      }
    }
    if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b978f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_2 + 0x18) + 0x30))
                (param_1,*(long **)(param_2 + 0x18),param_3,param_4,param_5,param_6);
      return;
    }
    func_0x00010b97eba0(auStack_68,*(long *)(param_2 + 0x20),param_3,param_4,param_5);
    if ((*(byte *)(param_6 + 8) & 1) == 0) {
      func_0x00010b97f03c();
    }
    else {
      func_0x00010b97eb00(*(undefined8 *)(param_2 + 0x18));
      func_0x00010b97eba0(param_1);
    }
    func_0x00010b97ec14();
  }
  return;
}



/* Entry: 10b978fb0; end: 10b978fdf;  */

void FUN_10b978fb0(long param_1)

{
  long *plVar1;
  
  if (((*(byte *)(param_1 + 0x28) & 1) == 0) &&
     (plVar1 = *(long **)(param_1 + 0x18), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010b978fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x38))(plVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b97e8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))();
  return;
}



/* Entry: 10b978fe0; end: 10b978fff;  */

void FUN_10b978fe0(void)

{
  func_0x000107c3a0a4();
  FUN_10b979000();
  return;
}



/* Entry: 10b979000; end: 10b979027;  */

void FUN_10b979000(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c3a128();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b97e704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b979028; end: 10b979073;  */

undefined8 * FUN_10b979028(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d7bce8;
  func_0x00010b979054(param_1 + 4);
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b979074; end: 10b97909b;  */

void FUN_10b979074(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c3a128();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b97e704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b97909c; end: 10b97911f;  */

void FUN_10b97909c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long unaff_x20;
  
  func_0x000107c3a024(param_3);
  lVar1 = (long)*(char *)((long)param_4 + 0x17);
  puVar2 = param_4;
  if (lVar1 < 0) {
    puVar2 = (undefined8 *)*param_4;
    lVar1 = param_4[1];
  }
  FUN_10b99ffd4(extraout_x8,puVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010b9790e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x20 + 0x10) + 0x28))();
  return;
}



/* Entry: 10b979120; end: 10b979187;  */

long FUN_10b979120(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar1 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 3) * 0x49 + -1;
  }
  return lVar1 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
}



/* Entry: 10b979188; end: 10b9792bf;  */

void FUN_10b979188(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x000107c3a024();
  func_0x00010b97ebfc();
  puVar5 = extraout_x8;
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    uVar3 = unaff_x19[1];
    bVar2 = uVar3 == uVar1;
    if (uVar1 < uVar3) {
      func_0x00010b97eaa8();
      if (!bVar2) {
        func_0x00010b97eba8();
      }
      func_0x00010b97ef78();
      puVar5 = extraout_x8_00;
    }
    else {
      uVar4 = (long)((long)extraout_x8 - uVar1) >> 2;
      if ((long)extraout_x8 - uVar1 == 0) {
        uVar4 = 0;
      }
      func_0x00010b97f11c();
      lStack_68 = param_1 + (uVar4 >> 2) * 8;
      lStack_58 = param_1 + uVar3 * 8;
      lStack_70 = param_1;
      lStack_60 = lStack_68;
      FUN_10b979404(&lStack_70,unaff_x19[1],unaff_x19[2]);
      func_0x00010b97e6c4();
      puVar5 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10b9792c0; end: 10b979363;  */

void FUN_10b9792c0(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong uVar4;
  long unaff_x22;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c3a024();
  uVar4 = param_1[1];
  bVar1 = *param_1 <= uVar4;
  uVar2 = uVar4 == *param_1;
  if ((bool)uVar2) {
    func_0x00010b97ebfc();
    if (bVar1) {
      lVar3 = (long)(extraout_x10 - uVar4) >> 2;
      if (extraout_x10 - uVar4 == 0) {
        lVar3 = 1;
      }
      func_0x00010b97f160();
      lStack_58 = lVar3 + (unaff_x21 + 6 & 0xfffffffffffffff8);
      lStack_48 = lVar3 + uVar4 * 8;
      lStack_60 = lVar3;
      lStack_50 = lStack_58;
      FUN_10b979404(&lStack_60,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
      func_0x00010b97e6c4();
      uVar4 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x00010b97ebcc();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar4 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar4 - 8) = unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar4 - 8);
  return;
}



/* Entry: 10b979364; end: 10b979403;  */

void FUN_10b979364(long param_1)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 *extraout_x8;
  ulong uVar4;
  undefined8 *puVar5;
  ulong *unaff_x19;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_50;
  
  func_0x000107c3a024();
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 == *(undefined8 **)(param_1 + 0x18)) {
    uVar1 = *unaff_x19;
    uVar3 = unaff_x19[1];
    bVar2 = uVar3 == uVar1;
    if (uVar1 < uVar3) {
      func_0x00010b97eaa8();
      if (!bVar2) {
        func_0x00010b97eba8();
      }
      func_0x00010b97ef78();
      puVar5 = extraout_x8;
    }
    else {
      uVar4 = (long)((long)puVar5 - uVar1) >> 2;
      if ((long)puVar5 - uVar1 == 0) {
        uVar4 = 0;
      }
      uStack_50 = unaff_x19[4];
      func_0x00010b97f11c();
      lStack_68 = param_1 + (uVar4 >> 2) * 8;
      lStack_58 = param_1 + uVar3 * 8;
      lStack_70 = param_1;
      lStack_60 = lStack_68;
      FUN_10b979404(&lStack_70,unaff_x19[1],unaff_x19[2]);
      func_0x00010b97e6c4();
      puVar5 = (undefined8 *)unaff_x19[2];
    }
  }
  *puVar5 = unaff_x20;
  unaff_x19[2] = (ulong)(puVar5 + 1);
  return;
}



/* Entry: 10b979404; end: 10b97942b;  */

void FUN_10b979404(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10b97942c; end: 10b9794c7;  */

void FUN_10b97942c(ulong param_1)

{
  undefined8 *unaff_x19;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000104bfe188();
  func_0x000107c3a0a4();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b9794c8; end: 10b9794ef;  */

void FUN_10b9794c8(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c3a128();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b97e704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b9794f0; end: 10b97953b;  */

long * FUN_10b9794f0(long *param_1,long param_2,undefined8 param_3)

{
  int extraout_w10;
  
  if (param_2 != 0) {
    do {
      func_0x000107c39fa4();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  func_0x000107c30f3c(param_1 + 1,param_3);
  return param_1;
}



/* Entry: 10b97953c; end: 10b979553;  */

void FUN_10b97953c(void)

{
  func_0x000107c39fe4();
  return;
}



/* Entry: 10b979554; end: 10b979557;  */

undefined8 * FUN_10b979554(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b979558; end: 10b97956b;  */

void FUN_10b979558(void)

{
  FUN_10b978d50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b97956c; end: 10b979587;  */

void FUN_10b97956c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b97edfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  return;
}



/* Entry: 10b979588; end: 10b97959b;  */

void FUN_10b979588(void)

{
  FUN_10b979644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b97959c; end: 10b9795bb;  */

undefined8 FUN_10b97959c(void)

{
  return 1;
}



/* Entry: 10b9795bc; end: 10b979643;  */

void FUN_10b9795bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *extraout_x8;
  
  func_0x000107c3a09c();
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x128))(plVar1,param_3);
  if ((int)plVar1 != 0) {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b979640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))(extraout_x8,*(long **)(param_1 + 0x18),param_2);
  return;
}



/* Entry: 10b979644; end: 10b97966b;  */

undefined8 * FUN_10b979644(undefined8 *param_1)

{
  func_0x00010b97edd8(&PTR_DAT_110d7be20);
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}



/* Entry: 10b97966c; end: 10b97966f;  */

undefined8 * FUN_10b97966c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d7bd68;
  FUN_10b978fe0(param_1 + 2);
  return param_1;
}


