/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108646c30; end: 108646e3b;  */

void FUN_108646c30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  int extraout_w10;
  undefined8 *puVar6;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  func_0x000108648a04();
  uVar3 = param_1;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108648990();
  puStack_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_108647968(&uStack_50);
  FUN_10864799c(&puStack_40,&uStack_50);
  func_0x000108648a50();
  func_0x00010864784c(&uStack_60);
  func_0x000107c27b48(&uStack_68);
  func_0x000107c27b4c(&uStack_50,uStack_68);
  puVar6 = puStack_40;
  uStack_78 = uStack_68;
  uStack_68 = 0;
  puStack_90 = (undefined8 *)0x0;
  lStack_88 = 0;
  puStack_a0 = puStack_40 + 0x11;
  lStack_98 = CONCAT71(lStack_98._1_7_,1);
  uStack_80 = param_1;
  __ZNSt3__15mutex4lockEv();
  puVar4 = puVar6;
  func_0x0001086479d8();
  if ((int)puVar4 == 0) {
    func_0x000108648a24();
    uVar2 = uStack_78;
    uVar1 = uStack_80;
    *puVar4 = &PTR_FUN_110a5fa18;
    uStack_80 = 0;
    uStack_78 = 0;
    puVar4[2] = uVar2;
    puVar4[1] = uVar1;
    lVar5 = puVar6[0x1a];
    puVar6[0x1a] = puVar4;
    if (lVar5 != 0) {
      func_0x0001086489dc();
    }
    puVar6 = (undefined8 *)0x0;
  }
  else {
    FUN_10864799c(&puStack_90,&puStack_40);
    puVar6 = puStack_90;
  }
  func_0x000107c2798c(&puStack_a0);
  if (puVar6 != (undefined8 *)0x0) {
    lStack_98 = lStack_88;
    puStack_a0 = puVar6;
    if (lStack_88 != 0) {
      do {
        func_0x000108648838();
      } while (extraout_w10 != 0);
    }
    FUN_108647a10(&uStack_80,puVar6);
    func_0x0001086488f8();
  }
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010864784c(&puStack_90);
  puVar6 = &uStack_80;
  func_0x000108647dcc();
  func_0x0001086489a0();
  func_0x000108648a84();
  if (puVar6 != (undefined8 *)0x0) {
    func_0x000108648848();
  }
  func_0x00010864784c(&puStack_40);
  func_0x0001086488d8();
  _objc_release(0);
  func_0x0001086488b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108646e3c; end: 10864724b; -[SCNE2eeE2EEKeyManager syncFriendKeys:] */

void FUN_108646e3c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int extraout_w10;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined **unaff_x23;
  undefined8 uVar11;
  undefined1 auStack_1f0 [32];
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  plVar8 = *(long **)(param_1 + 0x18);
  func_0x000108648990();
  lStack_198 = 0;
  uStack_190 = 0;
  puStack_1a0 = (undefined *)0x0;
  puVar3 = param_3;
  func_0x00010bf529e0(param_3);
  ppuVar4 = &puStack_1a0;
  FUN_108647df0(ppuVar4,puVar3);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  func_0x000108648990();
  func_0x000108648968();
  if (ppuVar4 != (undefined **)0x0) {
    lVar9 = *plStack_140;
    do {
      unaff_x23 = (undefined **)0x0;
      do {
        if (*plStack_140 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar11 = *(undefined8 *)(lStack_148 + (long)unaff_x23 * 8);
        _objc_retain(uVar11);
        FUN_10864e270(&puStack_168,uVar11);
        func_0x000108648150(&puStack_1a0,&puStack_168);
        ppuVar5 = &puStack_168;
        func_0x000107c27914();
        func_0x000108648a70();
        unaff_x23 = (undefined **)((long)unaff_x23 + 1);
      } while (unaff_x23 < ppuVar4);
      func_0x000108648968();
      ppuVar4 = ppuVar5;
    } while (ppuVar5 != (undefined **)0x0);
  }
  func_0x0001086488b4();
  func_0x0001086488b4();
  (**(code **)(*plVar8 + 0x20))(&uStack_180,plVar8,&puStack_1a0);
  func_0x000108648a58();
  uStack_1a8 = uStack_178;
  uStack_1b0 = uStack_180;
  uStack_180 = 0;
  uStack_178 = 0;
  puVar3 = PTR_PTR_1126b8058;
  _objc_alloc_init();
  puVar6 = puVar3;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar3);
  puStack_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  puStack_168 = (undefined *)0x0;
  uStack_160 = 0;
  FUN_1086482b8(&uStack_150,&uStack_1b0,&puStack_168);
  FUN_1086482ec(&puStack_d8,&uStack_150);
  func_0x000108647918(&uStack_150);
  func_0x000108647918(&puStack_168);
  func_0x000107c27b48(&lStack_e0);
  func_0x000107c27b4c(&uStack_150,lStack_e0);
  puVar10 = puStack_d8;
  lStack_198 = lStack_e0;
  lStack_e8 = 0;
  lStack_e0 = 0;
  puStack_f0 = (undefined8 *)0x0;
  puStack_100 = puStack_d8 + 10;
  lStack_f8 = CONCAT71(lStack_f8._1_7_,1);
  puStack_1a0 = puVar3;
  __ZNSt3__15mutex4lockEv();
  puVar7 = puVar10;
  func_0x000108648324();
  if ((int)puVar7 == 0) {
    func_0x000108648a24();
    lVar9 = lStack_198;
    puVar1 = puStack_1a0;
    *puVar7 = &PTR_FUN_110a5fa68;
    puStack_1a0 = (undefined *)0x0;
    lStack_198 = 0;
    puVar7[2] = lVar9;
    puVar7[1] = puVar1;
    lVar9 = puVar10[0x13];
    puVar10[0x13] = puVar7;
    if (lVar9 != 0) {
      func_0x0001086489dc();
    }
    puVar10 = (undefined8 *)0x0;
  }
  else {
    FUN_1086482ec(&puStack_f0,&puStack_d8);
    puVar10 = puStack_f0;
  }
  func_0x000107c2798c(&puStack_100);
  if (puVar10 != (undefined8 *)0x0) {
    lStack_f8 = lStack_e8;
    puStack_100 = puVar10;
    if (lStack_e8 != 0) {
      do {
        func_0x000108648838();
      } while (extraout_w10 != 0);
    }
    FUN_10864835c(&puStack_1a0,puVar10);
    func_0x000108647918(&puStack_100);
  }
  lStack_108 = lStack_148;
  uStack_110 = uStack_150;
  uStack_150 = 0;
  lStack_148 = 0;
  func_0x000108647918(&puStack_f0);
  func_0x000108648814(&puStack_1a0);
  func_0x000107c27b58(&uStack_150);
  lVar9 = lStack_e0;
  lStack_e0 = 0;
  if (lVar9 != 0) {
    func_0x000108648848();
  }
  func_0x000108647918(&puStack_d8);
  func_0x000107c27b58(&uStack_110);
  _objc_release(0);
  func_0x00010864890c();
  func_0x000108648950();
  func_0x0001086489d4();
  func_0x0001086488b4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x0001086488bc();
    func_0x000107c2798c(&puStack_100);
    func_0x000108647918(&puStack_f0);
    func_0x000108648814(&puStack_1a0);
    func_0x000107c27b58(&uStack_150);
    lVar9 = lStack_e0;
    lStack_e0 = 0;
    if (lVar9 != 0) {
      func_0x000108648848();
    }
    func_0x000108647918(&puStack_d8);
    func_0x000108648a70();
    func_0x000108648960();
    func_0x00010864890c();
    func_0x000108648950();
    func_0x0001086489d4();
    if ((int)unaff_x23 == 1) {
      ___cxa_begin_catch(puVar10);
      func_0x00010bd47250(&UNK_10f4ae655);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x108647220);
      (*pcVar2)();
    }
    func_0x0001086488b4();
    __Unwind_Resume();
    pcStack_1b8 = FUN_10864724c;
    puStack_1d0 = puVar3;
    puStack_1c8 = param_3;
    puStack_1c0 = &stack0xfffffffffffffff0;
    func_0x000108648a38();
    func_0x000108648a14();
    FUN_108646c30(auStack_1f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108648868();
    func_0x0001086488f8();
    puVar6 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10864724c; end: 1086472d3; -[SCNE2eeE2EEKeyManager registerCurrentUserKeyWithServer] */

void FUN_10864724c(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000108648a38();
  func_0x000108648a14();
  FUN_108646c30(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108648868();
  func_0x0001086488f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1086472d4; end: 108647327; -[SCNE2eeE2EEKeyManager .cxx_destruct] */

void FUN_1086472d4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5f9f8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x000108647940((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108647328; end: 108647367; -[SCNE2eeE2EEKeyManager .cxx_construct] */

undefined8 * FUN_108647328(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108648838();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108647368; end: 10864751f;  */

void FUN_108647368(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  int extraout_w10;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x000107c27b60(&uStack_40,param_2,&uStack_50);
  func_0x000107c27b64(alStack_30,&uStack_40);
  func_0x000108648a40();
  func_0x0001086489a0();
  func_0x000107c27b48(&uStack_58);
  func_0x000107c27b4c(&uStack_40,uStack_58);
  uStack_68 = *param_3;
  *param_3 = 0;
  uStack_60 = uStack_58;
  uStack_58 = 0;
  lStack_70 = 0;
  lStack_78 = 0;
  lStack_88 = alStack_30[0] + 0x38;
  uStack_80 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar1 = alStack_30[0];
  func_0x0001052a9e98();
  if ((int)lVar1 == 0) {
    FUN_10864760c(&lStack_90,&uStack_68);
    lVar1 = lStack_90;
    lStack_90 = 0;
    lVar2 = *(long *)(alStack_30[0] + 0x80);
    *(long *)(alStack_30[0] + 0x80) = lVar1;
    if (lVar2 != 0) {
      func_0x000108648848();
      lVar1 = lStack_90;
      lStack_90 = 0;
      if (lVar1 != 0) {
        func_0x000108648848();
      }
    }
  }
  else {
    func_0x000107c27b64(&lStack_78,alStack_30);
  }
  func_0x000107c2798c(&lStack_88);
  if (lStack_78 != 0) {
    lStack_a0 = lStack_78;
    lStack_98 = lStack_70;
    if (lStack_70 != 0) {
      do {
        func_0x000108648838();
      } while (extraout_w10 != 0);
    }
    FUN_108647520(&uStack_68,&lStack_a0);
    func_0x0001086488d8();
  }
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x000107c27b58(&lStack_78);
  puVar3 = &uStack_68;
  FUN_108647808();
  func_0x000108648a40();
  func_0x000108648a84();
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000108648848();
  }
  func_0x000107c27b58(alStack_30);
  return;
}



/* Entry: 108647520; end: 10864760b;  */

void FUN_108647520(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_40 = *param_2;
  lStack_38 = param_2[1];
  if (lStack_38 == 0) {
    lStack_38 = 0;
  }
  else {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_1086476d8(param_1,&uStack_40);
  func_0x000107c27b58(&uStack_40);
  func_0x000108648948();
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10864760c; end: 108647647;  */

void FUN_10864760c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = param_2;
  func_0x000108648a24();
  *puVar1 = &PTR_FUN_110a5f9c8;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 108647648; end: 10864764b;  */

undefined8 * FUN_108647648(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5f9c8;
  FUN_108647808(param_1 + 1);
  return param_1;
}



/* Entry: 10864764c; end: 10864765f;  */

void FUN_10864764c(void)

{
  FUN_1086476ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108647660; end: 1086476ab;  */

void FUN_108647660(long param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108648838();
    } while (extraout_w10 != 0);
  }
  FUN_108647520(param_1 + 8,&uStack_30);
  func_0x0001086488d8();
  return;
}



/* Entry: 1086476ac; end: 1086476d7;  */

undefined8 * FUN_1086476ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5f9c8;
  FUN_108647808(param_1 + 1);
  return param_1;
}



/* Entry: 1086476d8; end: 108647807;  */

void FUN_1086476d8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108647808; end: 1086478db;  */

void FUN_108647808(void)

{
  undefined8 *unaff_x19;
  
  func_0x000108648900();
  _objc_release(*unaff_x19);
  return;
}



/* Entry: 1086478dc; end: 1086478e3;  */

void FUN_1086478dc(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108648aa4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x000107c27914();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086478e4; end: 108647967;  */

void FUN_1086478e4(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108648aa4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x000107c27914();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108647968; end: 10864799b;  */

void FUN_108647968(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  
  func_0x000108648934();
  __ZNSt3__18__sp_mut4lockEv();
  func_0x000108648914();
  uVar1 = *unaff_x19;
  unaff_x21[1] = unaff_x19[1];
  *unaff_x21 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 10864799c; end: 108647a0f;  */

undefined8 * FUN_10864799c(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010864784c(&uStack_30);
  return param_1;
}



/* Entry: 108647a10; end: 108647ca7;  */

void FUN_108647a10(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar4;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [80];
  undefined1 auStack_88 [8];
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  uStack_f8 = param_2;
  lStack_f0 = param_3;
  if (param_3 != 0) {
    do {
      FUN_108648838();
    } while (extraout_w10 != 0);
    do {
      FUN_108648838();
    } while (extraout_w10_00 != 0);
  }
  uVar4 = *param_1;
  uStack_50 = 0;
  lStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_e8 = param_2;
  lStack_e0 = param_3;
  FUN_108647968(&lStack_60,&uStack_e8,&uStack_70);
  FUN_10864799c(&uStack_50,&lStack_60);
  func_0x00010864784c(&lStack_60);
  func_0x00010864784c(&uStack_70);
  uVar1 = uStack_50;
  lStack_60 = uStack_50 + 0x88;
  uStack_58 = 1;
  __ZNSt3__15mutex4lockEv();
  uStack_80 = uVar1;
  lStack_78 = lStack_48;
  if (lStack_48 != 0) {
    do {
      FUN_108648838();
    } while (extraout_w10_01 != 0);
  }
  while (uVar3 = uVar1, func_0x0001086479d8(), (uVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(uVar1 + 0x58,&lStack_60);
  }
  func_0x00010864784c(&uStack_80);
  if (*(long *)(uVar1 + 200) != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_88);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_88);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x108647b68);
    (*pcVar2)();
  }
  FUN_108647d30(auStack_d8,uVar1);
  func_0x000108648988();
  func_0x000108648a50();
  FUN_108646830(auStack_d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160(uVar4);
  func_0x0001086488d0();
  FUN_108647d9c(auStack_d8);
  func_0x00010864784c(&uStack_e8);
  func_0x00010864784c(&uStack_f8);
  func_0x000107c27b68(param_1[1]);
  return;
}



/* Entry: 108647ca8; end: 108647cab;  */

undefined8 * FUN_108647ca8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5fa18;
  func_0x000108647dcc(param_1 + 1);
  return param_1;
}



/* Entry: 108647cac; end: 108647cbf;  */

void FUN_108647cac(void)

{
  FUN_108647d04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108647cc0; end: 108647d03;  */

void FUN_108647cc0(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  undefined1 auStack_30 [16];
  
  func_0x000108648a90();
  if (param_3 != 0) {
    do {
      func_0x000108648838();
    } while (extraout_w10 != 0);
  }
  FUN_108647a10(param_1 + 8);
  func_0x00010864784c(auStack_30);
  return;
}



/* Entry: 108647d04; end: 108647d2f;  */

undefined8 * FUN_108647d04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5fa18;
  func_0x000108647dcc(param_1 + 1);
  return param_1;
}



/* Entry: 108647d30; end: 108647d9b;  */

void FUN_108647d30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[8] = param_2[8];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  return;
}



/* Entry: 108647d9c; end: 108647def;  */

/* WARNING: Possible PIC construction at 0x000108647db0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108647db4) */

long FUN_108647d9c(long param_1)

{
  long lStack_48;
  
  lStack_48 = param_1 + 0x30;
  func_0x000100100fd4(&lStack_48);
  return param_1 + 0x30;
}



/* Entry: 108647df0; end: 108647e73;  */

void FUN_108647df0(long *param_1,ulong param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x18) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_108647e74();
      func_0x0001086489ec();
      func_0x0001086488ac();
      plVar1 = (long *)&DAT_10f62a4d8;
      func_0x000104bd47e8();
      func_0x000108648aa4();
      lVar2 = *(long *)(param_2 + 8) + ((plVar1[1] - *plVar1) / -0x18) * 0x18;
      FUN_108647fa4(plVar1 + 2,*plVar1,plVar1[1],lVar2);
      param_1[1] = lVar2;
      lVar2 = *unaff_x20;
      unaff_x20[1] = lVar2;
      *unaff_x20 = param_1[1];
      param_1[1] = lVar2;
      lVar2 = unaff_x20[1];
      unaff_x20[1] = param_1[2];
      param_1[2] = lVar2;
      lVar2 = unaff_x20[2];
      unaff_x20[2] = param_1[3];
      param_1[3] = lVar2;
      *param_1 = param_1[1];
      return;
    }
    FUN_108647f08(auStack_48,param_2,(param_1[1] - *param_1) / 0x18);
    func_0x000108648a78();
    func_0x0001086489ec();
  }
  return;
}



/* Entry: 108647e74; end: 108647e87;  */

void FUN_108647e74(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar3;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000108648aa4();
  lVar3 = *(long *)(param_2 + 8) + ((plVar1[1] - *plVar1) / -0x18) * 0x18;
  FUN_108647fa4(plVar1 + 2,*plVar1,plVar1[1],lVar3);
  unaff_x19[1] = lVar3;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 108647e88; end: 108647f07;  */

void FUN_108647e88(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x000108648aa4();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  FUN_108647fa4(param_1 + 2,*param_1,param_1[1],lVar2);
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



/* Entry: 108647f08; end: 108647f77;  */

long * FUN_108647f08(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108647f54();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 108647f78; end: 108647fa3;  */

void FUN_108647f78(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
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
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_38 = 0;
    puStack_38[1] = 0;
    puStack_38[2] = 0;
    uVar1 = *param_2;
    puStack_38[1] = param_2[1];
    *puStack_38 = uVar1;
    puStack_38[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_38 = puStack_38 + 3;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  FUN_108648038();
  FUN_108648068(&uStack_60);
  return;
}



/* Entry: 108647fa4; end: 108648037;  */

void FUN_108647fa4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_28 = 0;
    puStack_28[1] = 0;
    puStack_28[2] = 0;
    uVar1 = *param_2;
    puStack_28[1] = param_2[1];
    *puStack_28 = uVar1;
    puStack_28[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_108648038();
  FUN_108648068(&uStack_50);
  return;
}



/* Entry: 108648038; end: 108648067;  */

void FUN_108648038(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000107c27914();
  }
  return;
}



/* Entry: 108648068; end: 108648097;  */

long FUN_108648068(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_108648098(param_1);
  }
  return param_1;
}



/* Entry: 108648098; end: 1086480b7;  */

void FUN_108648098(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 1086480b8; end: 108648113;  */

void FUN_1086480b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 108648114; end: 10864811b;  */

void FUN_108648114(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108648aa4(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10864811c; end: 10864818b;  */

void FUN_10864811c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108648aa4();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x000107c27914();
  }
  return;
}



/* Entry: 10864818c; end: 1086481bb;  */

void FUN_10864818c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 1086481bc; end: 108648267;  */

long FUN_1086481bc(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010864897c();
  FUN_108648268();
  FUN_108647f08(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x18,unaff_x19 + 2);
  *puStack_48 = 0;
  puStack_48[1] = 0;
  puStack_48[2] = 0;
  uVar2 = *unaff_x20;
  puStack_48[1] = unaff_x20[1];
  *puStack_48 = uVar2;
  puStack_48[2] = unaff_x20[2];
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  puStack_48 = puStack_48 + 3;
  func_0x000108648a78();
  lVar1 = unaff_x19[1];
  func_0x0001086489ec();
  return lVar1;
}



/* Entry: 108648268; end: 1086482b7;  */

long * FUN_108648268(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar3;
  
  if ((long *)0xaaaaaaaaaaaaaaa < param_2) {
    FUN_108647e74();
    func_0x000108648934();
    __ZNSt3__18__sp_mut4lockEv();
    func_0x000108648914();
    uVar3 = *unaff_x19;
    unaff_x21[1] = unaff_x19[1];
    *unaff_x21 = uVar3;
    *unaff_x19 = 0;
    unaff_x19[1] = 0;
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    plVar2 = (long *)0xaaaaaaaaaaaaaaa;
  }
  return plVar2;
}



/* Entry: 1086482b8; end: 1086482eb;  */

void FUN_1086482b8(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  
  func_0x000108648934();
  __ZNSt3__18__sp_mut4lockEv();
  func_0x000108648914();
  uVar1 = *unaff_x19;
  unaff_x21[1] = unaff_x19[1];
  *unaff_x21 = uVar1;
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1086482ec; end: 10864835b;  */

undefined8 * FUN_1086482ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000108648950();
  return param_1;
}



/* Entry: 10864835c; end: 108648683;  */

void FUN_10864835c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  undefined *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  long *plStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long *plStack_50;
  long lStack_48;
  
  uStack_c0 = param_2;
  lStack_b8 = param_3;
  if (param_3 != 0) {
    do {
      FUN_108648838();
    } while (extraout_w10 != 0);
    do {
      FUN_108648838();
    } while (extraout_w10_00 != 0);
  }
  uVar5 = *param_1;
  plStack_50 = (long *)0x0;
  lStack_48 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_b0 = param_2;
  lStack_a8 = param_3;
  FUN_1086482b8(&plStack_60,&uStack_b0,&uStack_70);
  FUN_1086482ec(&plStack_50,&plStack_60);
  func_0x000108647918(&plStack_60);
  func_0x000108647918(&uStack_70);
  plVar1 = plStack_50;
  plStack_60 = plStack_50 + 10;
  uStack_58 = 1;
  __ZNSt3__15mutex4lockEv();
  plStack_80 = plVar1;
  lStack_78 = lStack_48;
  if (lStack_48 != 0) {
    do {
      FUN_108648838();
    } while (extraout_w10_01 != 0);
  }
  while (plVar3 = plVar1, func_0x000108648324(), ((ulong)plVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(plVar1 + 4,&plStack_60);
  }
  func_0x000108647918(&plStack_80);
  if (plVar1[0x12] == 0) {
    lVar6 = *plVar1;
    lStack_90 = plVar1[2];
    lVar7 = plVar1[1];
    plVar1[1] = 0;
    plVar1[2] = 0;
    *plVar1 = 0;
    lStack_a0 = lVar6;
    lStack_98 = lVar7;
    func_0x000108648988();
    func_0x000108647918(&plStack_50);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x30) {
      FUN_108649720(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4);
      func_0x00010864892c();
    }
    func_0x00010bf51e00(puVar4);
    func_0x0001086488d0();
    func_0x00010c220160(uVar5);
    func_0x000108648960();
    FUN_10864870c(&lStack_a0);
    func_0x0001086489d4();
    func_0x000108647918(&uStack_c0);
    func_0x000107c27b68(param_1[1]);
    return;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_88);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_88);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x108648520);
  (*pcVar2)();
}



/* Entry: 108648684; end: 108648687;  */

undefined8 * FUN_108648684(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5fa68;
  func_0x000108648814(param_1 + 1);
  return param_1;
}



/* Entry: 108648688; end: 10864869b;  */

void FUN_108648688(void)

{
  FUN_1086486e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10864869c; end: 1086486df;  */

void FUN_10864869c(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x000108648a90();
  if (param_3 != 0) {
    do {
      func_0x000108648838();
    } while (extraout_w10 != 0);
  }
  FUN_10864835c(param_1 + 8);
  func_0x000108648950();
  return;
}



/* Entry: 1086486e0; end: 10864870b;  */

undefined8 * FUN_1086486e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5fa68;
  func_0x000108648814(param_1 + 1);
  return param_1;
}



/* Entry: 10864870c; end: 10864876f;  */

long * FUN_10864870c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      FUN_108648770(lVar1 + -0x18);
      func_0x000107c27914(lVar1 + -0x30);
      lVar1 = lVar1 + -0x30;
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 108648770; end: 1086487d7;  */

undefined8 FUN_108648770(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010864879c(&uStack_28);
  return param_1;
}



/* Entry: 1086487d8; end: 1086487df;  */

void FUN_1086487d8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108648aa4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c27914();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1086487e0; end: 108648837;  */

void FUN_1086487e0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000108648aa4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x20;
    func_0x000107c27914();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108648838; end: 108648aaf;  */

void FUN_108648838(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108648ab0; end: 108648b87;  */

void FUN_108648ab0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _objc_retain();
  func_0x00010c086860(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10864ac44(auStack_48);
  func_0x00010c142ee0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10864cefc(auStack_60);
  FUN_108648c20(param_1,auStack_48,auStack_60);
  func_0x000107c27914(auStack_60);
  _objc_release(param_2);
  func_0x000107c27914(auStack_48);
  func_0x000108648c64();
  func_0x000108648c6c();
  return;
}



/* Entry: 108648b88; end: 108648c1f;  */

void FUN_108648b88(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dacd8;
  _objc_alloc(PTR_PTR_1126dacd8);
  lVar2 = param_1;
  FUN_10864acb4(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  FUN_10864cf6c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c020e40(puVar1,param_2,lVar2,param_1);
  func_0x000108648c64();
  func_0x000108648c6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108648c20; end: 108648c73;  */

void FUN_108648c20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 108648c74; end: 108648d67;  */

void FUN_108648c74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _objc_retain();
  func_0x00010c11a480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(auStack_48);
  uVar1 = param_2;
  func_0x00010c22bf40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(auStack_60);
  func_0x00010c298be0(param_2);
  FUN_108648d68(param_1,auStack_48,auStack_60,param_2);
  func_0x000107c27914(auStack_60);
  _objc_release(uVar1);
  func_0x000107c27914(auStack_48);
  func_0x000108648db0();
  func_0x000108648db8();
  return;
}



/* Entry: 108648d68; end: 108648dbf;  */

void FUN_108648d68(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined4 *)(param_1 + 6) = param_4;
  return;
}



/* Entry: 108648dc0; end: 108648e53;  */

void FUN_108648dc0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  undefined4 *unaff_x20;
  undefined1 auStack_50 [32];
  
  func_0x000108649674();
  uVar1 = unaff_x19;
  func_0x00010bf8d3a0();
  func_0x00010c086dc0();
  _objc_retainAutoreleasedReturnValue();
  FUN_108648e54(auStack_50);
  *unaff_x20 = (int)uVar1;
  FUN_108648ecc(unaff_x20 + 2,auStack_50);
  FUN_108648f24(auStack_50);
  _objc_release(unaff_x19);
  func_0x000108649638();
  return;
}



/* Entry: 108648e54; end: 108648ecb;  */

void FUN_108648e54(void)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x000108649674();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 3) = 0;
  }
  else {
    FUN_10864901c(&uStack_40);
    unaff_x20[1] = uStack_38;
    *unaff_x20 = uStack_40;
    unaff_x20[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    *(undefined1 *)(unaff_x20 + 3) = 1;
    FUN_108648f44(&uStack_40);
  }
  func_0x000108649638();
  return;
}



/* Entry: 108648ecc; end: 108648ef7;  */

undefined1 * FUN_108648ecc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_108648ef8();
  return param_1;
}



/* Entry: 108648ef8; end: 108648f23;  */

void FUN_108648ef8(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    func_0x000108649680();
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  return;
}



/* Entry: 108648f24; end: 108648f43;  */

void FUN_108648f24(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_108648f44();
  }
  return;
}



/* Entry: 108648f44; end: 108648fb3;  */

undefined8 FUN_108648f44(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000108648f78(&uStack_28);
  return param_1;
}



/* Entry: 108648fb4; end: 108648fbb;  */

void FUN_108648fb4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x38;
    func_0x000108648ff4();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 108648fbc; end: 10864901b;  */

void FUN_108648fbc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x38;
    func_0x000108648ff4();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10864901c; end: 10864929b;  */

void FUN_10864901c(long *param_1,undefined1 *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_188 [56];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  long lStack_100;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar2 = param_2;
  func_0x00010bf529e0();
  plVar6 = param_1 + 2;
  if ((undefined1 *)((*plVar6 - *param_1) / 0x38) < puVar2) {
    if ((undefined1 *)0x492492492492492 < puVar2) goto LAB_108649224;
    FUN_10864933c(auStack_188,puVar2,(param_1[1] - *param_1) / 0x38,plVar6);
    FUN_1086492b0(param_1,auStack_188);
    func_0x00010864956c(auStack_188);
  }
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  puVar2 = param_2;
  _objc_retain();
  func_0x000108649648();
  if (puVar2 != (undefined1 *)0x0) {
    lVar8 = *plStack_140;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_140 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        uVar7 = *(undefined8 *)(lStack_148 + (long)puVar9 * 8);
        _objc_retain(uVar7);
        FUN_108648c74(auStack_188,uVar7);
        uVar3 = param_1[1];
        if (uVar3 < (ulong)param_1[2]) {
          FUN_1086494b4(uVar3,auStack_188);
          lVar10 = uVar3 + 0x38;
        }
        else {
          plVar4 = param_1;
          FUN_1086495d8(param_1,(long)(uVar3 - *param_1) / 0x38 + 1);
          FUN_10864933c(auStack_110,plVar4,(param_1[1] - *param_1) / 0x38,plVar6);
          FUN_1086494b4(lStack_100,auStack_188);
          lStack_100 = lStack_100 + 0x38;
          FUN_1086492b0(param_1,auStack_110);
          lVar10 = param_1[1];
          func_0x00010864956c(auStack_110);
        }
        param_1[1] = lVar10;
        puVar5 = auStack_188;
        func_0x000108648ff4();
        func_0x00010864965c();
        puVar9 = puVar9 + 1;
      } while (puVar9 < puVar2);
      func_0x000108649648();
      puVar2 = puVar5;
    } while (puVar5 != (undefined1 *)0x0);
  }
  func_0x000108649638();
  func_0x000108649638();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_108649224:
  FUN_10864929c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10864922c);
  (*pcVar1)();
}



/* Entry: 10864929c; end: 1086492af;  */

void FUN_10864929c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x38) * 0x38;
  FUN_1086493dc(plVar1 + 2,*plVar1,plVar1[1],lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1086492b0; end: 10864933b;  */

void FUN_1086492b0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x38) * 0x38;
  FUN_1086493dc(param_1 + 2,*param_1,param_1[1],lVar1);
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



/* Entry: 10864933c; end: 1086493ab;  */

long * FUN_10864933c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108649388();
  }
  lVar1 = param_4 + param_3 * 0x38;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x38;
  return param_1;
}



/* Entry: 1086493ac; end: 1086493db;  */

void FUN_1086493ac(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x492492492492493) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x38);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x38) {
    FUN_1086494b4(param_4,uVar1);
    param_4 = lStack_48 + 0x38;
  }
  uStack_58 = 1;
  FUN_108649484(param_1,param_2,param_3);
  FUN_1086494ec(&uStack_70);
  return;
}



/* Entry: 1086493dc; end: 108649483;  */

void FUN_1086493dc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x38) {
    FUN_1086494b4(param_4,lVar1);
    param_4 = lStack_38 + 0x38;
  }
  uStack_48 = 1;
  FUN_108649484(param_1,param_2,param_3);
  FUN_1086494ec(&uStack_60);
  return;
}



/* Entry: 108649484; end: 1086494b3;  */

void FUN_108649484(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x38) {
    func_0x000108648ff4();
  }
  return;
}



/* Entry: 1086494b4; end: 1086494eb;  */

void FUN_1086494b4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000108649680();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



/* Entry: 1086494ec; end: 10864951b;  */

long FUN_1086494ec(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10864951c(param_1);
  }
  return param_1;
}



/* Entry: 10864951c; end: 10864953b;  */

void FUN_10864951c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x38;
    func_0x000108648ff4();
  }
  return;
}



/* Entry: 10864953c; end: 108649597;  */

void FUN_10864953c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x38;
    func_0x000108648ff4();
  }
  return;
}



/* Entry: 108649598; end: 10864959f;  */

void FUN_108649598(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x38;
    func_0x000108648ff4();
  }
  return;
}



/* Entry: 1086495a0; end: 1086495d7;  */

void FUN_1086495a0(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x38;
    func_0x000108648ff4();
  }
  return;
}



/* Entry: 1086495d8; end: 108649637;  */

ulong FUN_1086495d8(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  if (0x492492492492492 < param_2) {
    FUN_10864929c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return unaff_x19;
  }
  uVar1 = (param_1[2] - *param_1) / 0x38;
  uVar2 = uVar1 * 2;
  if (uVar2 < param_2 || uVar2 - param_2 == 0) {
    uVar2 = param_2;
  }
  if (0x249249249249248 < uVar1) {
    uVar2 = 0x492492492492492;
  }
  return uVar2;
}



/* Entry: 108649638; end: 1086496a3;  */

void FUN_108649638(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086496a4; end: 108649717;  */

void FUN_1086496a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dace0;
  _objc_alloc(PTR_PTR_1126dace0);
  lVar2 = param_1;
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03bc60(puVar1,param_2,lVar2,*(undefined4 *)(param_1 + 0x18));
  FUN_108649718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108649718; end: 10864971f;  */

void FUN_108649718(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108649720; end: 10864984f;  */

void FUN_108649720(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126dace8;
  _objc_alloc(PTR_PTR_1126dace8);
  lVar3 = param_1;
  FUN_10864e2e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 5);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20);
  for (lVar7 = *(long *)(param_1 + 0x18); lVar7 != lVar1; lVar7 = lVar7 + 0x20) {
    lVar5 = lVar7;
    FUN_1086496a4(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,lVar5);
    _objc_release(lVar5);
  }
  puVar6 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  func_0x00010c05b960(puVar2,param_2,lVar3,puVar6);
  _objc_release(puVar6);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108649850; end: 1086498c7; -[SCNE2eeGetKeyForCurrentUserCallbackCppProxy initWithCpp:] */

undefined1 * FUN_108649850(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd330;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108649c30();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108649c04(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1086498c8; end: 10864998b; -[SCNE2eeGetKeyForCurrentUserCallbackCppProxy onSuccess:] */

void FUN_1086498c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_68 [56];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_108646914(auStack_68,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_68);
  func_0x000108649af0(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 10864998c; end: 1086499e7; -[SCNE2eeGetKeyForCurrentUserCallbackCppProxy onError] */

void FUN_10864998c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 1086499e8; end: 108649a57;  */

void FUN_1086499e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110a5faa8,&PTR_DAT_110a5fab8,0);
    if (lVar1 == 0) {
      FUN_108649b20(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108649a58; end: 108649aab; -[SCNE2eeGetKeyForCurrentUserCallbackCppProxy .cxx_destruct] */

void FUN_108649a58(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5fb30;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108649c04((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108649aac; end: 108649b17; -[SCNE2eeGetKeyForCurrentUserCallbackCppProxy .cxx_construct] */

undefined8 * FUN_108649aac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108649c30();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108649b18; end: 108649b1f;  */

void FUN_108649b18(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x108649b1c);
  (*pcVar1)();
}



/* Entry: 108649b20; end: 108649b93;  */

void FUN_108649b20(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5fb30;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108649c30();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108649b94);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108649c4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108649b94; end: 108649c03;  */

void FUN_108649b94(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dacf0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108649c30();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108649c04(&uStack_30);
  return;
}



/* Entry: 108649c04; end: 108649c2f;  */

long FUN_108649c04(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108649c30; end: 108649c5f;  */

void FUN_108649c30(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108649c60; end: 108649cd7; -[SCNE2eeGetKeysForUserCallbackCppProxy initWithCpp:] */

undefined1 * FUN_108649c60(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd338;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10864a018();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108649fec(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108649cd8; end: 108649da3; -[SCNE2eeGetKeysForUserCallbackCppProxy onSuccess:] */

void FUN_108649cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [32];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_108648dc0(auStack_58,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_58);
  FUN_108648f24(auStack_50);
  _objc_release(param_3);
  return;
}



/* Entry: 108649da4; end: 108649dff; -[SCNE2eeGetKeysForUserCallbackCppProxy onError] */

void FUN_108649da4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 108649e00; end: 108649e6f;  */

void FUN_108649e00(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_110a5fb40,&PTR_DAT_110a5fb50,0);
    if (lVar1 == 0) {
      FUN_108649f08(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108649e70; end: 108649ec3; -[SCNE2eeGetKeysForUserCallbackCppProxy .cxx_destruct] */

void FUN_108649e70(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5fb98;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108649fec((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108649ec4; end: 108649f07; -[SCNE2eeGetKeysForUserCallbackCppProxy .cxx_construct] */

undefined8 * FUN_108649ec4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10864a018();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}


