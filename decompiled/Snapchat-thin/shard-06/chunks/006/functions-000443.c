/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104c78798; end: 104c788eb; -[SCBillboardFSTCampaignDataProviderImpl markCampaignAsDismissedWithCampaign:additionalData:] */

void FUN_104c78798(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010bf3f4c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c262a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c262a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2852e0(uVar4,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    lVar1 = param_3;
    func_0x00010bf2bf80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a70c0(uVar4,param_2,lVar1,1,param_4);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf3f4c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2852c0();
      _objc_release(uVar4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c788ec; end: 104c78be3; -[SCBillboardFSTCampaignDataProviderImpl getCampaignInfoWithCampaignCOFName:] */

void FUN_104c788ec(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  ppuVar10 = &puStack_b0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((uVar1 & 1) == 0) {
    puVar7 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf16520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar3 = uVar2;
    func_0x00010bf51e00();
    func_0x00010be75e20(uVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae780;
    _objc_opt_new(PTR_PTR_1126ae780);
    func_0x00010c170140();
    func_0x00010c1b7c40(param_1);
    uVar5 = *(ulong *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126ae8a0);
    uVar1 = uVar5;
    func_0x00010c1217a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (((uVar1 == 0) || (uVar5 = uVar1, func_0x00010bf926c0(), (uVar5 & 1) == 0)) ||
       (lVar6 = param_1, func_0x00010be3f2e0(), (int)lVar6 != 0)) {
      puVar7 = PTR_PTR_1126ae558;
      func_0x00010bfe9ca0(PTR_PTR_1126ae558);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar5 = uVar1;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      FUN_104c77444();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      puVar9 = PTR_PTR_1126ae560;
      _objc_opt_new();
      _objc_initWeak(auStack_68,param_1);
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_104c78be4;
      puStack_98 = &UNK_110842f68;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(puVar9);
      puStack_90 = puVar9;
      _objc_retain(uVar1);
      uStack_88 = uVar1;
      _objc_retain(param_3);
      uStack_80 = param_3;
      _objc_retain(uVar8);
      uStack_78 = uVar8;
      _objc_retainBlock(&puStack_b0);
      func_0x00010bdebc20(param_1);
      puVar7 = puVar9;
      func_0x00010bfbc3e0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      _objc_release(uStack_78);
      _objc_release(uStack_80);
      _objc_release(uStack_88);
      _objc_release(puStack_90);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar9);
      _objc_release(uVar8);
    }
    _objc_release(uVar1);
    _objc_release(puVar4);
    _objc_release(uVar11);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104c78be4; end: 104c78d57;  */

void FUN_104c78be4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      lVar2 = lVar1;
      func_0x00010be5fb00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      FUN_104c77604(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      puVar4 = PTR_PTR_1126ae890;
      _objc_alloc(PTR_PTR_1126ae890);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bf2bf80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c262a00(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      FUN_104c798d0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bffc2c0(puVar4);
      func_0x00010bf43d60(uVar8);
      _objc_release(puVar4);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(lVar2);
    }
    else {
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c78d58; end: 104c78f2f; -[SCBillboardFSTCampaignDataProviderImpl _isContextualCampaignWithinCooldown:campaignCOFName:readOnlyBillboardSignals:] */

ulong FUN_104c78d58(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar5 = param_3;
  func_0x00010bfd5100();
  if (((int)lVar5 == 0) || (lVar5 = param_3, func_0x00010c262a40(), (int)lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_3;
    func_0x00010bf2bec0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar6 = *(long *)(param_1 + 8);
  lVar1 = lVar5;
  func_0x00010bf33240(lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1dae0(lVar6,param_2,lVar1,&PTR____CFConstantStringClassReference_110dab618);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar6 == 0) {
    lVar1 = param_3;
    func_0x00010c26a340();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar3 == 0) {
      uVar2 = 1;
    }
    else {
      puVar4 = PTR_PTR_1126ae780;
      _objc_opt_new(PTR_PTR_1126ae780);
      func_0x00010c170140();
      uVar7 = *(undefined8 *)(param_1 + 0x10);
      lVar1 = param_3;
      func_0x00010c26a340(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f440(uVar7,param_2,lVar1,0,puVar4);
      _objc_release(lVar1);
      uVar2 = (ulong)((uint)uVar7 ^ 1);
      _objc_release(puVar4);
    }
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_3;
    func_0x00010bf2c300(param_3);
    lVar3 = param_3;
    func_0x00010c262a40(param_3);
    func_0x00010be93e20(uVar7,param_2,(long)(int)lVar1,(long)(int)lVar3,param_4);
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010be3eac0(uVar2,param_2,lVar5,param_3,param_5,param_4,lVar6);
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 104c78f30; end: 104c78f3f; -[SCBillboardFSTCampaignDataProviderImpl logEmptyCampaignContent:] */

void FUN_104c78f30(double param_1,long param_2,undefined8 param_3,char *param_4,char *param_5)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  long *plVar9;
  char acStack_238 [24];
  char *pcStack_220;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  char acStack_1a0 [24];
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  char acStack_118 [24];
  char *pcStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  char acStack_80 [24];
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 0x28);
  pcVar5 = (char *)0x1;
  pcVar3 = acStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = param_4;
  _objc_retain(param_4);
  if (lVar1 != 0) {
    plVar9 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_60,pcVar2);
    acStack_80[0] = '\0';
    acStack_80[1] = '\0';
    acStack_80[2] = '\0';
    acStack_80[3] = '\0';
    acStack_80[4] = '\0';
    acStack_80[5] = '\0';
    acStack_80[6] = '\0';
    acStack_80[7] = '\0';
    acStack_80[8] = '\0';
    acStack_80[9] = '\0';
    acStack_80[10] = '\0';
    acStack_80[0xb] = '\0';
    acStack_80[0xc] = '\0';
    acStack_80[0xd] = '\0';
    acStack_80[0xe] = '\0';
    acStack_80[0xf] = '\0';
    acStack_80[0x10] = '\0';
    acStack_80[0x11] = '\0';
    acStack_80[0x12] = '\0';
    acStack_80[0x13] = '\0';
    acStack_80[0x14] = '\0';
    acStack_80[0x15] = '\0';
    acStack_80[0x16] = '\0';
    acStack_80[0x17] = '\0';
    func_0x00010007e1e8(acStack_80,auStack_60,&lStack_48,1);
    pcVar2 = "";
    param_5 = (char *)0x1;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110843ee0,acStack_80,1);
    puStack_68 = acStack_80;
    func_0x00010007e5dc(&puStack_68);
    pcVar5 = pcVar3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      pcVar5 = pcVar3;
    }
  }
  pcVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar2;
  pcVar6 = pcVar5;
  pcVar8 = param_5;
  _objc_retain(pcVar5);
  if (pcVar3 != (char *)0x0) {
    plVar9 = *(long **)(pcVar3 + 8);
    pcVar3 = "true";
    if ((int)pcVar2 == 0) {
      pcVar3 = "false";
    }
    func_0x00010002b838(auStack_f8,pcVar3);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar5);
      pcVar2 = pcVar5;
      func_0x00010bdc3520(pcVar5);
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_e0,pcVar2);
    acStack_118[0] = '\0';
    acStack_118[1] = '\0';
    acStack_118[2] = '\0';
    acStack_118[3] = '\0';
    acStack_118[4] = '\0';
    acStack_118[5] = '\0';
    acStack_118[6] = '\0';
    acStack_118[7] = '\0';
    acStack_118[8] = '\0';
    acStack_118[9] = '\0';
    acStack_118[10] = '\0';
    acStack_118[0xb] = '\0';
    acStack_118[0xc] = '\0';
    acStack_118[0xd] = '\0';
    acStack_118[0xe] = '\0';
    acStack_118[0xf] = '\0';
    acStack_118[0x10] = '\0';
    acStack_118[0x11] = '\0';
    acStack_118[0x12] = '\0';
    acStack_118[0x13] = '\0';
    acStack_118[0x14] = '\0';
    acStack_118[0x15] = '\0';
    acStack_118[0x16] = '\0';
    acStack_118[0x17] = '\0';
    func_0x00010007e1e8(acStack_118,auStack_f8,&lStack_c8,2);
    pcVar4 = "";
    pcVar6 = acStack_118;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110843f30,pcVar6,param_5);
    pcStack_100 = acStack_118;
    func_0x00010007e5dc(&pcStack_100);
    lVar1 = 0;
    pcVar8 = param_5;
    do {
      if ((&cStack_c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  pcVar2 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(pcVar5);
  __Unwind_Resume();
  pcVar7 = acStack_1a0;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar4;
  pcVar3 = pcVar6;
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar4);
    if (pcVar4 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar4;
      _objc_retainAutorelease(pcVar4);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar4);
    func_0x00010002b838(auStack_180,pcVar2);
    acStack_1a0[0] = '\0';
    acStack_1a0[1] = '\0';
    acStack_1a0[2] = '\0';
    acStack_1a0[3] = '\0';
    acStack_1a0[4] = '\0';
    acStack_1a0[5] = '\0';
    acStack_1a0[6] = '\0';
    acStack_1a0[7] = '\0';
    acStack_1a0[8] = '\0';
    acStack_1a0[9] = '\0';
    acStack_1a0[10] = '\0';
    acStack_1a0[0xb] = '\0';
    acStack_1a0[0xc] = '\0';
    acStack_1a0[0xd] = '\0';
    acStack_1a0[0xe] = '\0';
    acStack_1a0[0xf] = '\0';
    acStack_1a0[0x10] = '\0';
    acStack_1a0[0x11] = '\0';
    acStack_1a0[0x12] = '\0';
    acStack_1a0[0x13] = '\0';
    acStack_1a0[0x14] = '\0';
    acStack_1a0[0x15] = '\0';
    acStack_1a0[0x16] = '\0';
    acStack_1a0[0x17] = '\0';
    func_0x00010007e1e8(acStack_1a0,auStack_180,&lStack_168,1);
    pcVar5 = "\x01";
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110843f80,acStack_1a0,pcVar6);
    puStack_188 = acStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar3 = pcVar7;
    pcVar8 = pcVar6;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar3 = pcVar7;
      pcVar8 = pcVar6;
    }
  }
  pcVar2 = pcVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar4);
  _objc_release(pcVar4);
  __Unwind_Resume();
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar5;
  pcVar6 = pcVar3;
  _objc_retain(pcVar5);
  _objc_retain(pcVar3);
  if (pcVar2 != (char *)0x0) {
    plVar9 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_218,pcVar2);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar3);
      pcVar2 = pcVar3;
      func_0x00010bdc3520(pcVar3);
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_200,pcVar2);
    acStack_238[0] = '\0';
    acStack_238[1] = '\0';
    acStack_238[2] = '\0';
    acStack_238[3] = '\0';
    acStack_238[4] = '\0';
    acStack_238[5] = '\0';
    acStack_238[6] = '\0';
    acStack_238[7] = '\0';
    acStack_238[8] = '\0';
    acStack_238[9] = '\0';
    acStack_238[10] = '\0';
    acStack_238[0xb] = '\0';
    acStack_238[0xc] = '\0';
    acStack_238[0xd] = '\0';
    acStack_238[0xe] = '\0';
    acStack_238[0xf] = '\0';
    acStack_238[0x10] = '\0';
    acStack_238[0x11] = '\0';
    acStack_238[0x12] = '\0';
    acStack_238[0x13] = '\0';
    acStack_238[0x14] = '\0';
    acStack_238[0x15] = '\0';
    acStack_238[0x16] = '\0';
    acStack_238[0x17] = '\0';
    func_0x00010007e1e8(acStack_238,auStack_218,&lStack_1e8,2);
    pcVar4 = "\x01";
    pcVar6 = acStack_238;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110843fd0,pcVar6,pcVar8);
    pcStack_220 = acStack_238;
    func_0x00010007e5dc(&pcStack_220);
    lVar1 = 0;
    do {
      if ((&cStack_1e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(pcVar3);
  pcVar2 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  if (cStack_201 < '\0') {
    __ZdlPv(auStack_218[0]);
  }
  _objc_release(pcVar3);
  _objc_release(pcVar5);
  __Unwind_Resume();
  _objc_retain(pcVar4);
  _objc_retain(pcVar6);
  if (pcVar2 != (char *)0x0) {
    FUN_104c88658(pcVar2,pcVar4,pcVar6,(long)(param_1 * 1000.0));
  }
  _objc_release(pcVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar4);
  return;
}



/* Entry: 104c78f40; end: 104c7905f; -[SCBillboardFSTCampaignDataProviderImpl _fstChannelFullSignalsWithLauchTriggerType:appOpenFromPushType:] */

void FUN_104c78f40(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf16520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 - 1U < 4) {
    uVar5 = *(undefined4 *)(&UNK_10dd8a6b0 + (param_3 - 1U) * 4);
  }
  else {
    uVar5 = 0;
  }
  func_0x00010c168d60(uVar1,param_2,uVar5);
  func_0x00010c168d20(uVar1,param_2,0 < param_4);
  if (param_4 == 0xad) {
    func_0x00010c1c00c0(uVar1,param_2,1);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd3d60();
  func_0x00010c1a5820(uVar1,param_2,uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfda220();
  func_0x00010c1a1440(uVar1,param_2,uVar3);
  _objc_release(uVar2);
  func_0x00010c1a1460(uVar1,param_2,*(undefined1 *)(param_1 + 0x50));
  puVar4 = PTR_PTR_1126ae780;
  _objc_opt_new(PTR_PTR_1126ae780);
  func_0x00010c170140();
  func_0x00010c1b7c40(param_1,param_2,puVar4);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104c79060; end: 104c79063; -[SCBillboardFSTCampaignDataProviderImpl featureProvidedSignalsForLastFetch] */

void FUN_104c79060(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c088b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_lastFetchFeatureProvidedSignals_1125ffcd8);
  return;
}



/* Entry: 104c79064; end: 104c790eb; -[SCBillboardFSTCampaignDataProviderImpl _campaignsPriorityWithlockScreenWidgetSnapshot] */

void FUN_104c79064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae758;
  _objc_opt_new(PTR_PTR_1126ae758);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar3 = PTR_PTR_1126ae760;
  _objc_opt_new(PTR_PTR_1126ae760);
  func_0x00010c177860();
  func_0x00010befa120(puVar2,param_2,puVar3);
  func_0x00010c177ae0(puVar1,param_2,puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c790ec; end: 104c7919f; -[SCBillboardFSTCampaignDataProviderImpl _campaignsPriorityWithRegistrationPathAllowedCampaigns] */

void FUN_104c790ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126ae758;
  _objc_opt_new(PTR_PTR_1126ae758);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar3 = PTR_PTR_1126ae760;
  _objc_opt_new(PTR_PTR_1126ae760);
  func_0x00010c177860();
  func_0x00010befa120(puVar2,param_2,puVar3);
  puVar4 = PTR_PTR_1126ae760;
  _objc_opt_new(PTR_PTR_1126ae760);
  func_0x00010c177860();
  func_0x00010befa120(puVar2,param_2,puVar4);
  func_0x00010c177ae0(puVar1,param_2,puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104c791a0; end: 104c7932f; -[SCBillboardFSTCampaignDataProviderImpl _lockScreenWidgetsSampleCampaign] */

void FUN_104c791a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126ae8a8;
  _objc_opt_new(PTR_PTR_1126ae8a8);
  puVar2 = PTR_PTR_1126ae8b0;
  _objc_opt_new(PTR_PTR_1126ae8b0);
  func_0x00010c1c0100(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae8b8;
  _objc_opt_new(PTR_PTR_1126ae8b8);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar4 = PTR_PTR_1126ae8c0;
  func_0x00010c26cda0(PTR_PTR_1126ae8c0,param_2,&PTR____CFConstantStringClassReference_110dab758,0,1
                     );
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar3,param_2,puVar4);
  puVar5 = PTR_PTR_1126ae8c8;
  _objc_alloc(PTR_PTR_1126ae8c8);
  func_0x00010c01cfc0();
  puVar6 = PTR_PTR_1126ae898;
  _objc_alloc(PTR_PTR_1126ae898);
  func_0x00010c01c600();
  puVar7 = PTR_PTR_1126ae890;
  _objc_alloc(PTR_PTR_1126ae890);
  func_0x00010bffc2c0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104c79330; end: 104c7957b; -[SCBillboardFSTCampaignDataProviderImpl _sampleCampaign] */

void FUN_104c79330(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  
  puVar1 = PTR_PTR_1126ae8a8;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126ae8d0;
  _objc_opt_new(PTR_PTR_1126ae8d0);
  func_0x00010c210b60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c265ce0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161fe0();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126ae8b8;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  iVar7 = 10;
  do {
    puVar4 = PTR_PTR_1126ae8c0;
    func_0x00010bfe9840(PTR_PTR_1126ae8c0,param_2,&PTR____CFConstantStringClassReference_110dab818);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar4);
    puVar5 = PTR_PTR_1126ae8c0;
    func_0x00010c26cda0(PTR_PTR_1126ae8c0,param_2,&PTR____CFConstantStringClassReference_110dab838,0
                        ,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar5);
    puVar6 = PTR_PTR_1126ae8c0;
    func_0x00010c26cda0(PTR_PTR_1126ae8c0,param_2,&PTR____CFConstantStringClassReference_110dab858,
                        &PTR__OBJC_CLASS___NSConstantDictionary_111174478,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3,param_2,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar4 = PTR_PTR_1126ae8c8;
  _objc_alloc(PTR_PTR_1126ae8c8);
  func_0x00010c01cfc0();
  puVar5 = PTR_PTR_1126ae898;
  _objc_alloc(PTR_PTR_1126ae898);
  func_0x00010c01c600();
  puVar6 = PTR_PTR_1126ae890;
  _objc_alloc(PTR_PTR_1126ae890);
  func_0x00010bffc2c0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104c7957c; end: 104c79587; -[SCBillboardFSTCampaignDataProviderImpl lastFetchFeatureProvidedSignals] */

void FUN_104c7957c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x60,1);
  return;
}



/* Entry: 104c79588; end: 104c7958f; -[SCBillboardFSTCampaignDataProviderImpl setLastFetchFeatureProvidedSignals:] */

void FUN_104c79588(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 104c79590; end: 104c7962b; -[SCBillboardFSTCampaignDataProviderImpl .cxx_destruct] */

void FUN_104c79590(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c7962c; end: 104c7963b;  */

void FUN_104c7962c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c086570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_key_1125ff368);
  return;
}



/* Entry: 104c7963c; end: 104c7968b;  */

void FUN_104c7963c(long param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = 0;
  if (param_2 - 1U < 3) {
    lVar1 = (ulong)(param_2 - 1U) + 1;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104c7968c; end: 104c798cf;  */

void FUN_104c7968c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126ae8d8;
  _objc_alloc();
  func_0x00010c008360();
  _objc_retain(0);
  puVar16 = (undefined *)0x0;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c123f80();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar16 != (undefined *)0x0) {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar5);
        }
        uVar17 = *(undefined8 *)((long)puVar15 * 8);
        uVar6 = uVar17;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c086560();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar4);
        _objc_release(uVar17);
        _objc_release(uVar6);
        puVar15 = puVar15 + 1;
      } while (puVar16 != puVar15);
      puVar16 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    puVar16 = puVar4;
    func_0x00010bf51e00();
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_release(0);
  _objc_release(uVar2);
  puVar3 = puVar16;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
    ___stack_chk_fail();
    puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_retain();
    func_0x00010bfea860(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bfea840(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar16);
    func_0x00010bf980c0(uVar2);
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bfb1600(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bfb15e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar4);
    func_0x00010bf980c0(uVar2);
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bfb1660(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bfb1640(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    func_0x00010bf980c0(uVar2);
    _objc_release(uVar2);
    puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c088e60(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c088e40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar15);
    func_0x00010bf980c0(uVar2);
    _objc_release(uVar2);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c088ee0(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c088ec0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar7);
    func_0x00010bf980c0(uVar2);
    _objc_release(uVar2);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf3c860(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf3c840(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar8);
    func_0x00010bf980c0(uVar2);
    _objc_release(uVar2);
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf3c9e0(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf3c9c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar9);
    func_0x00010bf980c0(uVar2);
    _objc_release(uVar2);
    puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c0885e0(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c0885c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar10);
    func_0x00010bf980c0(uVar2);
    _objc_release(uVar2);
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf836e0(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf836c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar11);
    func_0x00010bf980c0(uVar2);
    _objc_release(uVar2);
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf846e0(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf846c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar12);
    func_0x00010bf980c0(uVar2);
    _objc_release(uVar2);
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010c088960(param_2);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c088940(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_retain(puVar13);
    func_0x00010bf980c0(uVar2);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae8b8;
    _objc_alloc();
    func_0x00010c01d400();
    _objc_release(puVar13);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar7);
    _objc_release(puVar15);
    _objc_release(puVar15);
    _objc_release(puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar16);
    _objc_release(puVar16);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104c798d0; end: 104c79efb;  */

void FUN_104c798d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfea860(param_1);
  func_0x00010bf0a0e0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfea840(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_104c79efc;
  puStack_88 = &UNK_110842ff8;
  puStack_80 = puVar2;
  _objc_retain(puVar2);
  func_0x00010bf980c0(uVar1,param_2,&puStack_a0);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010bfb1600(param_1);
  func_0x00010bf0a0e0(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar13;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x104c79f44;
  puStack_b0 = &UNK_110842ff8;
  puStack_a8 = puVar3;
  _objc_retain(puVar3);
  func_0x00010bf980c0(uVar1,param_2,&puStack_c8);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010bfb1660(param_1);
  func_0x00010bf0a0e0(puVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1640(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar13;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x104c79f8c;
  puStack_d8 = &UNK_110842ff8;
  puStack_d0 = puVar4;
  _objc_retain(puVar4);
  func_0x00010bf980c0(uVar1,param_2,&puStack_f0);
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010c088e60(param_1);
  func_0x00010bf0a0e0(puVar5,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c088e40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = puVar13;
  uStack_110 = 0xc2000000;
  uStack_108 = 0x104c79fd4;
  puStack_100 = &UNK_110842ff8;
  puStack_f8 = puVar5;
  _objc_retain(puVar5);
  func_0x00010bf980c0(uVar1,param_2,&puStack_118);
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010c088ee0(param_1);
  func_0x00010bf0a0e0(puVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c088ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar13;
  uStack_138 = 0xc2000000;
  uStack_130 = 0x104c7a01c;
  puStack_128 = &UNK_110842ff8;
  puStack_120 = puVar6;
  _objc_retain(puVar6);
  func_0x00010bf980c0(uVar1,param_2,&puStack_140);
  _objc_release(uVar1);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010bf3c860(param_1);
  func_0x00010bf0a0e0(puVar7,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf3c840(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_168 = puVar13;
  uStack_160 = 0xc2000000;
  uStack_158 = 0x104c7a064;
  puStack_150 = &UNK_110842ff8;
  puStack_148 = puVar7;
  _objc_retain(puVar7);
  func_0x00010bf980c0(uVar1,param_2,&puStack_168);
  _objc_release(uVar1);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010bf3c9e0(param_1);
  func_0x00010bf0a0e0(puVar8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf3c9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_190 = puVar13;
  uStack_188 = 0xc2000000;
  uStack_180 = 0x104c7a0ac;
  puStack_178 = &UNK_110842ff8;
  puStack_170 = puVar8;
  _objc_retain(puVar8);
  func_0x00010bf980c0(uVar1,param_2,&puStack_190);
  _objc_release(uVar1);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010c0885e0(param_1);
  func_0x00010bf0a0e0(puVar9,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0885c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = puVar13;
  uStack_1b0 = 0xc2000000;
  uStack_1a8 = 0x104c7a0f4;
  puStack_1a0 = &UNK_110842ff8;
  puStack_198 = puVar9;
  _objc_retain(puVar9);
  func_0x00010bf980c0(uVar1,param_2,&puStack_1b8);
  _objc_release(uVar1);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010bf836e0(param_1);
  func_0x00010bf0a0e0(puVar10,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf836c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_1e0 = puVar13;
  uStack_1d8 = 0xc2000000;
  uStack_1d0 = 0x104c7a13c;
  puStack_1c8 = &UNK_110842ff8;
  puStack_1c0 = puVar10;
  _objc_retain(puVar10);
  func_0x00010bf980c0(uVar1,param_2,&puStack_1e0);
  _objc_release(uVar1);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010bf846e0(param_1);
  func_0x00010bf0a0e0(puVar11,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf846c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_208 = puVar13;
  uStack_200 = 0xc2000000;
  uStack_1f8 = 0x104c7a184;
  puStack_1f0 = &UNK_110842ff8;
  puStack_1e8 = puVar11;
  _objc_retain(puVar11);
  func_0x00010bf980c0(uVar1,param_2,&puStack_208);
  _objc_release(uVar1);
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010c088960(param_1);
  func_0x00010bf0a0e0(puVar12,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c088940(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puStack_230 = puVar13;
  uStack_228 = 0xc2000000;
  uStack_220 = 0x104c7a1cc;
  puStack_218 = &UNK_110842ff8;
  puStack_210 = puVar12;
  _objc_retain(puVar12);
  func_0x00010bf980c0(uVar1,param_2,&puStack_230);
  _objc_release(uVar1);
  puVar13 = PTR_PTR_1126ae8b8;
  _objc_alloc();
  func_0x00010c01d400();
  _objc_release(puStack_210);
  _objc_release(puVar12);
  _objc_release(puStack_1e8);
  _objc_release(puVar11);
  _objc_release(puStack_1c0);
  _objc_release(puVar10);
  _objc_release(puStack_198);
  _objc_release(puVar9);
  _objc_release(puStack_170);
  _objc_release(puVar8);
  _objc_release(puStack_148);
  _objc_release(puVar7);
  _objc_release(puStack_120);
  _objc_release(puVar6);
  _objc_release(puStack_f8);
  _objc_release(puVar5);
  _objc_release(puStack_d0);
  _objc_release(puVar4);
  _objc_release(puStack_a8);
  _objc_release(puVar3);
  _objc_release(puStack_80);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 104c79efc; end: 104c7a257;  */

void FUN_104c79efc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c7a258; end: 104c7a6c7;  */

undefined1 *
FUN_104c7a258(undefined *param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined **ppuStack_2f0;
  undefined *puStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [384];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2d0 = param_4;
  _objc_retain();
  puStack_2c0 = param_2;
  _objc_retain(param_2);
  puStack_2c8 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  lStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  puStack_220 = (undefined8 *)0x0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  _objc_retain(param_1);
  puVar2 = param_1;
  puStack_2b8 = param_1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    param_1 = (undefined *)*puStack_220;
    do {
      param_3 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_220 != param_1) {
          _objc_enumerationMutation(puStack_2b8);
        }
        uVar11 = *(undefined8 *)(lStack_228 + (long)param_3 * 8);
        uVar8 = uVar11;
        func_0x00010c2570e0();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)uVar8 != 0) {
          func_0x00010c2570e0(uVar11);
          func_0x00010c0df780(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar3);
        }
        param_3 = param_3 + 1;
      } while (puVar2 != param_3);
      puVar2 = puStack_2b8;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puStack_2b8);
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  puStack_260 = (undefined8 *)0x0;
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puStack_2c8 != (undefined *)0x0) {
    puVar2 = puStack_2c8;
  }
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    param_3 = (undefined *)*puStack_260;
    do {
      param_1 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_260 != param_3) {
          _objc_enumerationMutation(puVar2);
        }
        uVar11 = *(undefined8 *)(lStack_268 + (long)param_1 * 8);
        uVar8 = uVar11;
        func_0x00010c2570e0();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)uVar8 != 0) {
          func_0x00010c2570e0(uVar11);
          func_0x00010c0df780(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar4);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c2570e0(uVar11);
          func_0x00010c0df760(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          FUN_104c869cc(param_6,param_5,puVar5,1);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        param_1 = param_1 + 1;
      } while (puVar3 != param_1);
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  puStack_2a0 = (undefined8 *)0x0;
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (puStack_2c0 != (undefined *)0x0) {
    puVar2 = puStack_2c0;
  }
  _objc_retain(puVar2);
  puVar9 = &uStack_2b0;
  puVar10 = auStack_1f0;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    param_3 = (undefined *)*puStack_2a0;
    do {
      param_1 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_2a0 != param_3) {
          _objc_enumerationMutation(puVar2);
        }
        uVar11 = *(undefined8 *)(lStack_2a8 + (long)param_1 * 8);
        uVar8 = uVar11;
        func_0x00010c2570e0();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)uVar8 != 0) {
          func_0x00010c2570e0(uVar11);
          func_0x00010c0df780(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar4);
          puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c2570e0(uVar11);
          func_0x00010c0df760(puVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          FUN_104c875dc(param_6,param_5,puVar5,1);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        param_1 = param_1 + 1;
      } while (puVar3 != param_1);
      puVar9 = &uStack_2b0;
      puVar10 = auStack_1f0;
      puVar3 = puVar2;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  if ((int)uStack_2d0 != 0) {
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010befa120(puVar1);
    _objc_release(puVar6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puStack_2c8);
  _objc_release(puStack_2c0);
  puVar2 = puStack_2b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_310;
  ppuStack_2f0 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  pcStack_2d8 = FUN_104c7a6c8;
  uStack_300 = param_5;
  puStack_2f8 = param_3;
  puStack_2e8 = param_1;
  puStack_2e0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  puStack_308 = PTR_PTR_1126e3790;
  puStack_310 = puVar2;
  _objc_msgSendSuper2(&puStack_310,PTR_s_init_1125d9248);
  if (ppuVar7 != (undefined **)0x0) {
    _objc_retain(puVar9);
    uVar8 = *(undefined8 *)((long)ppuVar7 + 8);
    *(undefined8 **)((long)ppuVar7 + 8) = puVar9;
    _objc_release(uVar8);
    _objc_retain(puVar10);
    uVar8 = *(undefined8 *)((long)ppuVar7 + 0x10);
    *(undefined1 **)((long)ppuVar7 + 0x10) = puVar10;
    _objc_release(uVar8);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  return (undefined1 *)ppuVar7;
}



/* Entry: 104c7a6c8; end: 104c7a76b; -[SCBillboardLocalStorage initWithPreferences:grapheneRegistry:] */

undefined1 *
FUN_104c7a6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3790;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c7a76c; end: 104c7a7db; -[SCBillboardLocalStorage impressionCountWithCampaignCOFName:] */

undefined8 FUN_104c7a76c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dab978);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde9fe0(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  return param_1;
}



/* Entry: 104c7a7dc; end: 104c7a84b; -[SCBillboardLocalStorage firstImpressionTimeToNowWithCampaignCOFName:] */

undefined8 FUN_104c7a7dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dab998);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9cb60(param_1,param_2,puVar1);
    _objc_release(puVar1);
    return param_1;
  }
  return 0;
}



/* Entry: 104c7a84c; end: 104c7a8bb; -[SCBillboardLocalStorage lastImpressionTimeToNowWithCampaignCOFName:] */

undefined8 FUN_104c7a84c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dab9b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9cb60(param_1,param_2,puVar1);
    _objc_release(puVar1);
    return param_1;
  }
  return 0;
}



/* Entry: 104c7a8bc; end: 104c7aa47; -[SCBillboardLocalStorage updateImpressionPropertiesWithCampaignCOFName:] */

void FUN_104c7a8bc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38360(param_1);
    _objc_release(puVar1);
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar1);
    uVar2 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c0b4fe0();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee2200(param_1);
      _objc_release(puVar1);
    }
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee2200(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c7aa48; end: 104c7aab7; -[SCBillboardLocalStorage clickCountWithCampaignCOFName:] */

undefined8 FUN_104c7aa48(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dab9d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde9fe0(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  return param_1;
}



/* Entry: 104c7aab8; end: 104c7ab27; -[SCBillboardLocalStorage firstClickTimeToNowWithCampaignCOFName:] */

undefined8 FUN_104c7aab8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dab9f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9cb60(param_1,param_2,puVar1);
    _objc_release(puVar1);
    return param_1;
  }
  return 0;
}



/* Entry: 104c7ab28; end: 104c7ab97; -[SCBillboardLocalStorage lastClickTimeToNowWithCampaignCOFName:] */

undefined8 FUN_104c7ab28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daba18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9cb60(param_1,param_2,puVar1);
    _objc_release(puVar1);
    return param_1;
  }
  return 0;
}



/* Entry: 104c7ab98; end: 104c7ad77; -[SCBillboardLocalStorage updateClickPropertiesWithCampaignCOFName:] */

void FUN_104c7ab98(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38360(param_1);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2);
    _objc_release(puVar1);
    _objc_release(uVar2);
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar1);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    uVar4 = uVar3;
    func_0x00010c0b4fe0();
    _objc_release(uVar3);
    if (uVar4 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee2200(param_1);
      _objc_release(puVar1);
    }
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee2200(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c7ad78; end: 104c7ade7; -[SCBillboardLocalStorage dismissCountWithCampaignCOFName:] */

undefined8 FUN_104c7ad78(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daba58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde9fe0(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  return param_1;
}



/* Entry: 104c7ade8; end: 104c7ae57; -[SCBillboardLocalStorage firstDismissTimeToNowWithCampaignCOFName:] */

undefined8 FUN_104c7ade8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daba78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9cb60(param_1,param_2,puVar1);
    _objc_release(puVar1);
    return param_1;
  }
  return 0;
}



/* Entry: 104c7ae58; end: 104c7aec7; -[SCBillboardLocalStorage lastDismissTimeToNowWithCampaignCOFName:] */

undefined8 FUN_104c7ae58(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daba98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9cb60(param_1,param_2,puVar1);
    _objc_release(puVar1);
    return param_1;
  }
  return 0;
}



/* Entry: 104c7aec8; end: 104c7af37; -[SCBillboardLocalStorage continuousDismissCountWithCampaignCOFName:] */

undefined8 FUN_104c7aec8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daba38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde9fe0(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
  return param_1;
}



/* Entry: 104c7af38; end: 104c7b0f7; -[SCBillboardLocalStorage updateDismissPropertiesWithCampaignCOFName:] */

void FUN_104c7af38(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38360(param_1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be38360(param_1);
    _objc_release(puVar1);
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar1);
    uVar2 = uVar3;
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar3 = uVar2;
    func_0x00010c0b4fe0();
    _objc_release(uVar2);
    if (uVar3 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee2200(param_1);
      _objc_release(puVar1);
    }
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee2200(param_1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c7b0f8; end: 104c7b15f; -[SCBillboardLocalStorage interactionCountWithCampaignCOFName:] */

int FUN_104c7b0f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    uVar1 = param_1;
    func_0x00010bf3c8a0(param_1,param_2,param_3);
    func_0x00010bf83720(param_1,param_2,param_3);
    _objc_release(param_3);
    return (int)param_1 + (int)uVar1;
  }
  return 0;
}



/* Entry: 104c7b160; end: 104c7b1cb; -[SCBillboardLocalStorage firstInteractionTimeToNowWithCampaignCOFName:] */

long FUN_104c7b160(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010bfb0f60(param_1,param_2,param_3);
    func_0x00010bfb10c0(param_1,param_2,param_3);
    _objc_release(param_3);
    if (lVar1 <= param_1) {
      lVar1 = param_1;
    }
    return lVar1;
  }
  return 0;
}



/* Entry: 104c7b1cc; end: 104c7b24b; -[SCBillboardLocalStorage lastInteractionTimeToNowWithCampaignCOFName:] */

long FUN_104c7b1cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    param_1 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c088620(param_1,param_2,param_3);
    func_0x00010c0889a0(param_1,param_2,param_3);
    lVar1 = lVar3;
    if (param_1 <= lVar3) {
      lVar1 = param_1;
    }
    lVar2 = lVar3;
    if (param_1 != -0x8000000000000000) {
      lVar2 = lVar1;
    }
    if (lVar3 != -0x8000000000000000) {
      param_1 = lVar2;
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104c7b24c; end: 104c7b5e7; -[SCBillboardLocalStorage clearLocalStatesWithCampaignCOFName:] */

void FUN_104c7b24c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dab978);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,0,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dab998);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,0,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dab9b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,0,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dab9d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,0,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dab9f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,0,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daba18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,0,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daba58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,0,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daba78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,0,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daba98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar2,param_2,0,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110daba38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c1d0640(uVar2,param_2,0,puVar1);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104c7b5e8; end: 104c7b67f; -[SCBillboardLocalStorage hasAddFriendsRequestToShowOnCamera] */

ulong FUN_104c7b5e8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104c7b680; end: 104c7b72f; -[SCBillboardLocalStorage _countWithKey:] */

ulong FUN_104c7b680(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c067fc0(uVar4);
  _objc_release(uVar4);
  return uVar1;
}



/* Entry: 104c7b730; end: 104c7b7bf; -[SCBillboardLocalStorage _incrementCountWithKey:] */

void FUN_104c7b730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bde9fe0(param_1,param_2,param_3);
  func_0x00010c0df780(puVar2,param_2,lVar1 + 1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104c7b7c0; end: 104c7b8a7; -[SCBillboardLocalStorage _secsElapsedWithKey:] */

long FUN_104c7b7c0(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  double dVar6;
  
  uVar4 = *(ulong *)(param_2 + 8);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  if (uVar4 == 0) {
    lVar5 = -0x8000000000000000;
  }
  else {
    func_0x00010bf885a0(uVar1);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    dVar6 = param_1;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    lVar5 = (long)(dVar6 - param_1);
    _objc_release(puVar2);
  }
  _objc_release(uVar4);
  return lVar5;
}



/* Entry: 104c7b8a8; end: 104c7b947; -[SCBillboardLocalStorage _updateTimeToNowWithKey:] */

void FUN_104c7b8a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c26f320();
  func_0x00010c0df720(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c7b948; end: 104c7b977; -[SCBillboardLocalStorage .cxx_destruct] */

void FUN_104c7b948(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c7b978; end: 104c7ba1b; -[SCBillboardProtoCOFReader initWithCircumstanceEngine:grapheneRegistry:] */

undefined1 *
FUN_104c7b978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e3798;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c7ba1c; end: 104c7bb7f; -[SCBillboardProtoCOFReader readProtoForCOFKey:featureProvidedSignals:protoClass:] */

void FUN_104c7ba1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_5 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf3ec40(0);
      func_0x00010c0df780(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      FUN_104c87f54(uVar5,param_3,puVar4,1);
      _objc_release(puVar4);
      _objc_release(puVar3);
      lVar1 = 0;
    }
    else {
      _objc_retain(param_5);
      lVar1 = param_5;
    }
    _objc_release(param_5);
    _objc_release(0);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104c7bb80; end: 104c7bbaf; -[SCBillboardProtoCOFReader .cxx_destruct] */

void FUN_104c7bb80(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c7bbb0; end: 104c7bbd3;  */

void FUN_104c7bbb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2827d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110bdc40,
             PTR_s_unsignedIntegerValue_11267e418);
  return;
}



/* Entry: 104c7bbd4; end: 104c7bcdb;  */

undefined8 FUN_104c7bbd4(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bf2bf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010bf4b900();
  _objc_release(param_2);
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    lVar1 = param_1;
    func_0x00010bfd5100();
    if ((int)lVar1 == 0) {
      uVar4 = 0;
    }
    else {
      lVar1 = param_1;
      func_0x00010bf2bec0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf33240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar3;
      func_0x00010c08fa60();
      if (lVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = param_3;
        func_0x00010bf4b900(param_3);
      }
      _objc_release(lVar3);
    }
  }
  else {
    uVar4 = 1;
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 104c7bcdc; end: 104c7bdab; -[SCBillboardHoldoutDataProvider initWithCircumstanceEngine:grapheneRegistry:] */

undefined1 *
FUN_104c7bcdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e37a0;
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
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c7bdac; end: 104c7bdc7;  */

void FUN_104c7bdac(void)

{
  _objc_opt_new(PTR_PTR_1126ae8e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104c7bdc8; end: 104c7bfa7; -[SCBillboardHoldoutDataProvider campaignInHoldoutWithHoldoutCOFName:campaign:] */

byte FUN_104c7bdc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf2bf80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    bVar4 = 0;
  }
  else {
    func_0x00010be1f9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0826e0();
    if ((int)uVar3 == 0) {
      bVar4 = 0;
    }
    else {
      puStack_88 = &uStack_90;
      uStack_90 = 0;
      uStack_80 = 0x2020000000;
      uStack_78 = 0;
      uVar3 = param_1;
      func_0x00010bfe3ca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_3);
      func_0x00010c0bdb40(uVar3);
      _objc_release(uVar3);
      bVar4 = *(byte *)(puStack_88 + 3);
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_release(param_4);
      __Block_object_dispose(&uStack_90,8);
    }
    _objc_release(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar4 & 1;
}



/* Entry: 104c7bfa8; end: 104c7c0cb;  */

void FUN_104c7bfa8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if ((lVar1 == 0) && (lVar1 = param_3, func_0x00010bf529e0(), lVar1 == 0)) {
    FUN_104c87de0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10),*(undefined8 *)(param_1 + 0x30),
                  1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_104c7bbd4(uVar2,param_2,param_3);
    *(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (byte)uVar2 ^ 1;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104c7c0cc; end: 104c7c3cb; -[SCBillboardHoldoutDataProvider _getHoldoutWithHoldoutCOFName:] */

void FUN_104c7c0cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    _objc_retain(puVar2);
    goto LAB_104c7c39c;
  }
  lVar3 = param_1;
  func_0x00010be1f980(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe3ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf46120();
  lVar6 = param_1;
  if ((int)lVar5 == 2) {
    lVar5 = lVar4;
    func_0x00010bfe3ce0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1f960(param_1,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    lVar5 = lVar6;
    func_0x00010bf2c380(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar2,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    lVar5 = lVar6;
    func_0x00010bf330c0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar1,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    puVar8 = PTR_PTR_1126ae8f0;
    func_0x00010bfebc80(PTR_PTR_1126ae8f0,param_2,puVar2,puVar1);
    _objc_retainAutoreleasedReturnValue();
LAB_104c7c300:
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(lVar6);
  }
  else {
    if ((int)lVar5 == 1) {
      lVar5 = lVar4;
      func_0x00010bfe3cc0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be1f960(param_1,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
      lVar5 = lVar6;
      func_0x00010bf2c380(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20(puVar2,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
      lVar5 = lVar6;
      func_0x00010bf330c0(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20(puVar1,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      puVar8 = PTR_PTR_1126ae8f0;
      func_0x00010bf9ace0(PTR_PTR_1126ae8f0,param_2,puVar2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104c7c300;
    }
    puVar8 = (undefined *)0x0;
  }
  puVar2 = PTR_PTR_1126ae8f8;
  _objc_alloc(PTR_PTR_1126ae8f8);
  lVar5 = lVar3;
  func_0x00010bfe3d00(lVar3);
  func_0x00010c01fa60(puVar2,param_2,(int)lVar5 == 2,puVar8);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar7);
  _objc_retain(puVar2);
  _objc_release(lVar4);
  _objc_release(puVar8);
  _objc_release(lVar3);
LAB_104c7c39c:
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104c7c3cc; end: 104c7c52b; -[SCBillboardHoldoutDataProvider _getHoldoutFromCOFWithHoldoutCOFName:] */

void FUN_104c7c3cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126ae900;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar3 == (undefined *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf3ec40(0);
      func_0x00010c0df780(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      FUN_104c8780c(uVar5,param_3,puVar4,1);
      _objc_release(puVar4);
      _objc_release(puVar6);
      puVar6 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar3);
      puVar6 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(0);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104c7c52c; end: 104c7c68b; -[SCBillboardHoldoutDataProvider _getHoldoutElementListFromCOFWithCOFName:] */

void FUN_104c7c52c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c1195e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126ae908;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar3 == (undefined *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bf3ec40(0);
      func_0x00010c0df780(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      FUN_104c87a3c(uVar5,param_3,puVar4,1);
      _objc_release(puVar4);
      _objc_release(puVar6);
      puVar6 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar3);
      puVar6 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(0);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104c7c68c; end: 104c7c6c7; -[SCBillboardHoldoutDataProvider .cxx_destruct] */

void FUN_104c7c68c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c7c6c8; end: 104c7c76b; -[SCBillboardLoggerImpl initWithUserTrackedLogger:grapheneRegistry:] */

undefined1 *
FUN_104c7c6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e37a8;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c7c76c; end: 104c7c90b; -[SCBillboardLoggerImpl logFeedHeaderPromptActionWithCampaignId:action:onTapAction:] */

void FUN_104c7c76c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabad8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabaf8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabb18);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabb38);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabb58);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabb78);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dab3b8);
              uVar3 = 4;
              if ((int)uVar1 == 0) {
                uVar3 = 0xffffffffffffffff;
              }
            }
            else {
              uVar3 = 0xb;
            }
          }
          else {
            uVar3 = 3;
          }
        }
        else {
          uVar3 = 8;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 5;
  }
  _objc_release(param_3);
  if (param_4 < 4) {
    uVar2 = *(undefined8 *)(&UNK_10dd8a6c0 + param_4 * 8);
  }
  else {
    uVar2 = 0xffffffffffffffff;
  }
  func_0x00010c0a9440(param_1,param_2,uVar3,uVar2,param_3);
  uVar3 = param_1;
  func_0x00010bdc9100(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0a19e0(param_1,param_2,param_3,param_4,0,uVar3);
  func_0x00010c0a7ac0(param_1,param_2,param_3,param_4,0);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c7c90c; end: 104c7cb2b; -[SCBillboardLoggerImpl logProfileActivityCardActionWithCampaignId:action:onTapAction:] */

void FUN_104c7c90c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabb98);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabbb8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabbd8);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabbf8);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabc18);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabc38);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabc58);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabc78
                                   );
                if ((uVar1 & 1) != 0) {
                  uVar2 = 0xf;
                  goto LAB_104c7ca5c;
                }
                uVar1 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabc98
                                   );
                if ((uVar1 & 1) != 0) {
                  uVar2 = 0x10;
                  goto LAB_104c7ca5c;
                }
                uVar1 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabcb8
                                   );
                if ((uVar1 & 1) != 0) {
                  uVar2 = 7;
                  goto LAB_104c7ca5c;
                }
                uVar1 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabcd8
                                   );
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_3;
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110dabcf8);
                  if ((uVar1 & 1) != 0) {
                    uVar2 = 4;
                    goto LAB_104c7ca5c;
                  }
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110dabd18);
                }
              }
              uVar2 = 0xffffffffffffffff;
            }
            else {
              uVar2 = 6;
            }
          }
          else {
            uVar2 = 5;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
LAB_104c7ca5c:
  _objc_release(param_3);
  uVar1 = param_4;
  if (2 < param_4) {
    uVar1 = 0xffffffffffffffff;
  }
  func_0x00010c0a9460(param_1,param_2,uVar2,uVar1,param_3);
  uVar2 = param_1;
  func_0x00010bdc9100(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0a19e0(param_1,param_2,param_3,param_4,2,uVar2);
  func_0x00010c0a7ac0(param_1,param_2,param_3,param_4,2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c7cb2c; end: 104c7cb93; -[SCBillboardLoggerImpl logFullScreenTakeoverActionWithCampaignId:action:additionalData:] */

void FUN_104c7cb2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  func_0x00010c0a19e0(param_1,param_2,param_3,param_4,1,param_5);
  func_0x00010c0a7ac0(param_1,param_2,param_3,param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c7cb94; end: 104c7cc43; -[SCBillboardLoggerImpl logLegacyBlizzardFHPWithFHPType:action:campaignId:] */

void FUN_104c7cb94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae910;
  _objc_retain(param_5);
  _objc_opt_new(puVar1);
  func_0x00010c1e4f40();
  func_0x00010c1e4c80(puVar1,param_2,param_4);
  func_0x00010c206c40(puVar1,param_2,0);
  func_0x00010c1778c0(puVar1,param_2,param_5);
  _objc_release(param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c7cc44; end: 104c7ccf3; -[SCBillboardLoggerImpl logLegacyBlizzardPACWithPACType:action:campaignId:] */

void FUN_104c7cc44(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ae918;
  if (param_3 != -1) {
    _objc_retain(param_5);
    _objc_opt_new(puVar1);
    func_0x00010c161620();
    func_0x00010c1797e0(puVar1,param_2,param_3);
    func_0x00010c179760(puVar1,param_2,param_5);
    _objc_release(param_5);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104c7ccf4; end: 104c7cdbb; -[SCBillboardLoggerImpl _additionalDataForOnTapAction:] */

void FUN_104c7ccf4(undefined8 param_1,undefined8 param_2,undefined8 ***param_3,undefined ***param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined *puVar5;
  undefined **ppuStack_38;
  undefined8 **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = param_3;
  func_0x00010c0e9120();
  _objc_retainAutoreleasedReturnValue();
  pppuVar1 = param_3;
  func_0x00010bf684c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  pppuVar2 = pppuVar1;
  func_0x00010c08fa60();
  if (pppuVar2 == (undefined8 ***)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    ppuStack_38 = &PTR____CFConstantStringClassReference_110dabab8;
    pppuVar3 = &ppuStack_30;
    param_4 = &ppuStack_38;
    param_5 = 1;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_30 = pppuVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar3,param_4,1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR_PTR_1126ae920;
  _objc_retain(param_6);
  _objc_retain(pppuVar3);
  _objc_opt_new(puVar5);
  func_0x00010c1778c0();
  _objc_release(pppuVar3);
  func_0x00010c161620(puVar5,param_2,param_4);
  func_0x00010c2102e0(puVar5,param_2,param_5);
  pppuVar3 = pppuVar1;
  func_0x00010bdea840(pppuVar1,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  pppuVar2 = pppuVar3;
  func_0x00010c08fa60();
  if (pppuVar2 != (undefined8 ***)0x0) {
    func_0x00010c165980(puVar5,param_2,pppuVar3);
  }
  ppuVar4 = pppuVar1[1];
  func_0x00010c269d40(ppuVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(ppuVar4);
  _objc_release(pppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 104c7cdbc; end: 104c7ceab; -[SCBillboardLoggerImpl logBillboardBlizzardWithCampaignId:action:surface:additionalData:] */

void FUN_104c7cdbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ae920;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1778c0();
  _objc_release(param_3);
  func_0x00010c161620(puVar1,param_2,param_4);
  func_0x00010c2102e0(puVar1,param_2,param_5);
  lVar2 = param_1;
  func_0x00010bdea840(param_1,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c165980(puVar1,param_2,lVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104c7ceac; end: 104c7cfcf; -[SCBillboardLoggerImpl logGrapheneWithCampaignId:action:surface:] */

void FUN_104c7ceac(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (param_4 < 2) {
    if (param_4 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010b9b3750(param_5);
      _objc_retainAutoreleasedReturnValue();
      FUN_104c84e6c(uVar1,param_3,param_5,1);
    }
    else {
      if (param_4 != 1) goto LAB_104c7cfbc;
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010b9b3750(param_5);
      _objc_retainAutoreleasedReturnValue();
      FUN_104c84c3c(uVar1,param_3,param_5,1);
    }
  }
  else if (param_4 == 3) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010b9b3750(param_5);
    _objc_retainAutoreleasedReturnValue();
    FUN_104c8509c(uVar1,param_3,param_5,1);
  }
  else {
    if (param_4 != 2) goto LAB_104c7cfbc;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010b9b3750(param_5);
    _objc_retainAutoreleasedReturnValue();
    FUN_104c852cc(uVar1,param_3,param_5,1);
  }
  _objc_release(param_5);
LAB_104c7cfbc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104c7cfd0; end: 104c7d063; -[SCBillboardLoggerImpl _createAdditionalDataStringForData:] */

void FUN_104c7cfd0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,8,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010c008340();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104c7d064; end: 104c7d093; -[SCBillboardLoggerImpl .cxx_destruct] */

void FUN_104c7d064(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c7d094; end: 104c7d317; -[SCBillboardPACCampaignDataProviderImpl initWithDataProvider:circumstanceEngine:billboardLogger:stringFetcher:featureSettingsService:grapheneRegistry:userId:audioSession:cooldownCapManager:] */

undefined8 *
FUN_104c7d094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e37b0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = puVar1[7];
    puVar1[7] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_3);
    uVar4 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar4);
    _objc_retain(param_6);
    uVar4 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar4);
    _objc_retain(param_7);
    uVar4 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar4);
    _objc_retain(param_8);
    uVar4 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar4 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar4 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar4);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = puVar1[0xb];
    puVar1[0xb] = 0;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_78);
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
  return puVar1;
}



/* Entry: 104c7d318; end: 104c7d40f; -[SCBillboardPACCampaignDataProviderImpl getProfileActivityCardCampaignInfoList] */

void FUN_104c7d318(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  puVar1 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar1);
  func_0x00010c2a13c0(uVar3);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104c7d410; end: 104c7d443;  */

void FUN_104c7d410(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1d940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c7d444; end: 104c7d573; -[SCBillboardPACCampaignDataProviderImpl _getCampaignInfoWithCampaignInfoPromise:] */

void FUN_104c7d444(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar2 = &puStack_80;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be6ef00();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_104c7d574;
  puStack_68 = &UNK_1108430a0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(lVar1);
  lStack_58 = lVar1;
  _objc_retainBlock(&puStack_80);
  func_0x00010bfc8fa0(*(undefined8 *)(param_1 + 8));
  _objc_release(ppuVar2);
  _objc_release(lStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104c7d574; end: 104c7d5c7;  */

void FUN_104c7d574(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104c7d5c8; end: 104c7d84f; -[SCBillboardPACCampaignDataProviderImpl _getCampaignWithCampaignInfoPromise:campaignSnapshotEnumerator:readOnlyBillboardSignals:isChannelWithinDefaultCooldown:defaultChannelGlobalRules:] */

void FUN_104c7d5c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar1 = param_4;
  func_0x00010c0d9ba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bf43d60(param_3);
    FUN_104c863fc(*(undefined8 *)(param_1 + 0x30),&PTR____CFConstantStringClassReference_110dabdb8,1
                 );
  }
  else {
    lVar2 = lVar1;
    func_0x00010bf2bea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be75b00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126ae560;
    _objc_opt_new(PTR_PTR_1126ae560);
    _objc_initWeak(auStack_68,param_1);
    puVar5 = puVar4;
    func_0x00010bfbc3e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(lVar2);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(lVar3);
    uStack_70 = param_6;
    _objc_retain(param_7);
    func_0x00010c297260(puVar5);
    _objc_release(puVar5);
    func_0x00010bfc3680(*(undefined8 *)(param_1 + 8));
    _objc_release(param_7);
    _objc_release(lVar3);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104c7d850; end: 104c7dd0f;  */

void FUN_104c7d850(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_140;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar9 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar9 == 0) goto LAB_104c7dc84;
  if (param_3 != 0) {
    func_0x00010be1d9a0(lVar9);
    goto LAB_104c7dc84;
  }
  lVar1 = *(long *)(lVar9 + 8);
  func_0x00010c121900();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = param_2;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_140 = lVar3;
    FUN_104c7dd10();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_retain(lStack_140);
    if (lStack_140 == 0) {
LAB_104c7dc50:
      func_0x00010be1d9a0(lVar9);
      FUN_104c86858(*(undefined8 *)(lVar9 + 0x30),*(undefined8 *)(param_1 + 0x20),1);
    }
    else {
      lVar4 = lStack_140;
      func_0x00010c27ec20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      uVar11 = 0;
      uVar12 = 0;
      while (lVar3 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar4);
          }
          uVar10 = *(undefined8 *)(lVar8 * 8);
          uVar5 = uVar10;
          func_0x00010bf44460();
          if ((int)uVar5 == 1) {
            func_0x00010c2711a0(uVar10);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = uVar10;
            func_0x00010c26c260();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar11;
            uVar11 = uVar5;
            uVar5 = uVar12;
LAB_104c7dbb8:
            _objc_release(uVar6);
            _objc_release(uVar10);
            uVar12 = uVar5;
          }
          else {
            uVar5 = uVar10;
            func_0x00010bf44460();
            if ((int)uVar5 == 3) {
              func_0x00010bfe5400(uVar10);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar10;
              func_0x00010bfe5b40();
              _objc_retainAutoreleasedReturnValue();
              uVar6 = uVar12;
              goto LAB_104c7dbb8;
            }
          }
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar4;
        func_0x00010bf52a60();
      }
      _objc_release(lVar4);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078c00();
      if ((int)puVar7 != 0) {
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(lStack_140);
        goto LAB_104c7dc50;
      }
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078c00();
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(lStack_140);
      if (((ulong)puVar7 & 1) != 0) goto LAB_104c7dc50;
      func_0x00010bde29a0(lVar9);
    }
  }
  else {
    _objc_retain();
    puStack_e8 = &uStack_f0;
    uStack_f0 = 0;
    uStack_e0 = 0x3032000000;
    pcStack_d8 = FUN_104c7eeb0;
    uStack_d0 = 0x104c7eec0;
    uStack_c8 = 0;
    lVar3 = lVar1;
    func_0x00010c294e20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bdc40();
    _objc_release(lVar3);
    lStack_140 = puStack_e8[5];
    _objc_retain();
    __Block_object_dispose(&uStack_f0,8);
    _objc_release(uStack_c8);
    _objc_release(lVar1);
    lVar3 = lVar1;
    func_0x00010bf51be0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lStack_140);
    if ((lStack_140 == 0) || (lVar3 == 0)) {
LAB_104c7da5c:
      _objc_release(lStack_140);
LAB_104c7da64:
      FUN_104c86858(*(undefined8 *)(lVar9 + 0x30),*(undefined8 *)(param_1 + 0x20),1);
      func_0x00010be1d9a0(lVar9);
    }
    else {
      lVar2 = lStack_140;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c08fa60();
      _objc_release(lVar2);
      if (lVar4 == 0) goto LAB_104c7da5c;
      lVar2 = lStack_140;
      FUN_104c7e83c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) goto LAB_104c7da5c;
      lVar2 = lStack_140;
      func_0x00010c0e6f20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lStack_140);
      if (lVar2 == 0) goto LAB_104c7da64;
      func_0x00010bde2980(lVar9);
    }
    _objc_release(lVar3);
  }
  _objc_release(lStack_140);
  _objc_release(lVar1);
LAB_104c7dc84:
  _objc_release(lVar9);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_f0,8);
  __Unwind_Resume();
  _objc_retain();
  if ((param_2 == 0) || (lVar9 = param_2, func_0x00010bf46120(), (int)lVar9 != 1)) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_2;
    func_0x00010c0f0960(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar9);
  return;
}



/* Entry: 104c7dd10; end: 104c7dd6b;  */

void FUN_104c7dd10(long param_1)

{
  long lVar1;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar1 = param_1, func_0x00010bf46120(), (int)lVar1 != 1)) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0f0960(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104c7dd6c; end: 104c7df9f; -[SCBillboardPACCampaignDataProviderImpl _completeCampaignInfoWithCampaignInfoPromise:campaignCOFName:campaignCOFConfig:serverUiConfig:defaultChannelGlobalRules:] */

void FUN_104c7dd6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar2 = param_6;
  func_0x00010c27ec20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000100504554();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    func_0x00010befa160(puVar1);
    FUN_104c85e2c(*(undefined8 *)(param_1 + 0x30),param_4,1);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c25d180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_initWeak(auStack_68,param_1);
  _objc_retain(puVar1);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_7);
  func_0x00010c297260(uVar5);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104c7dfa0; end: 104c7e567;  */

void FUN_104c7dfa0(undefined *param_1,undefined1 *param_2,undefined *param_3,undefined1 *param_4,
                  undefined *param_5,undefined8 param_6,long param_7)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *unaff_x22;
  undefined8 uVar15;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long lVar16;
  undefined1 *unaff_x25;
  long lVar17;
  undefined1 *unaff_x27;
  undefined *unaff_x28;
  undefined8 uStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined1 *puStack_2c0;
  undefined *puStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined1 *puStack_290;
  byte bStack_288;
  long lStack_280;
  undefined *puStack_278;
  long lStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined1 uStack_228;
  undefined *puStack_220;
  long lStack_218;
  undefined *puStack_210;
  undefined1 *puStack_208;
  undefined1 *puStack_200;
  undefined1 *puStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  byte bStack_198;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  undefined4 uStack_134;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    lVar3 = *(long *)(param_1 + 0x30);
    puStack_158 = param_1;
    puStack_150 = param_3;
    puStack_148 = param_2;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_104c7dd10();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lStack_140 = lVar4;
    func_0x00010c27ec20();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_f0;
    param_5 = (undefined *)0x10;
    lVar3 = lVar4;
    func_0x00010bf52a60();
    if (lVar3 == 0) {
      uStack_134 = 0;
      param_1 = (undefined *)0x0;
      unaff_x23 = (undefined *)0x0;
      puVar12 = (undefined *)0x0;
    }
    else {
      uStack_134 = 0;
      param_1 = (undefined *)0x0;
      unaff_x23 = (undefined *)0x0;
      puVar12 = (undefined *)0x0;
      lVar16 = *plStack_120;
      do {
        lVar17 = 0;
        do {
          if (*plStack_120 != lVar16) {
            _objc_enumerationMutation(lVar4);
          }
          puVar14 = *(undefined **)(lStack_128 + lVar17 * 8);
          puVar11 = puVar14;
          func_0x00010bf44460();
          puVar5 = param_1;
          if ((int)puVar11 == 1) {
            func_0x00010c2711a0(puVar14);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar14;
            func_0x00010c26c260();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar12);
            puVar12 = puVar11;
LAB_104c7e1c4:
            _objc_release(puVar14);
            param_1 = puVar5;
          }
          else {
            puVar11 = puVar14;
            func_0x00010bf44460();
            if ((int)puVar11 == 2) {
              func_0x00010c260dc0();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar14;
              func_0x00010c26c260();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x23);
              unaff_x23 = puVar11;
              goto LAB_104c7e1c4;
            }
            puVar11 = puVar14;
            func_0x00010bf44460();
            if ((int)puVar11 == 3) {
              puVar11 = puVar14;
              func_0x00010bfe5400();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar11;
              func_0x00010bfe5b40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(param_1);
              _objc_release(puVar11);
              func_0x00010bfe5400();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar14;
              func_0x00010c077da0();
              uStack_134 = SUB84(puVar11,0);
              goto LAB_104c7e1c4;
            }
          }
          lVar17 = lVar17 + 1;
        } while (lVar3 != lVar17);
        param_4 = auStack_f0;
        param_5 = (undefined *)0x10;
        lVar3 = lVar4;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
      unaff_x28 = (undefined *)0x0;
    }
    _objc_release(lVar4);
    param_2 = puStack_148;
    unaff_x27 = puStack_148;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = param_2;
    puVar11 = unaff_x23;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = unaff_x27;
    func_0x00010c08fa60();
    if ((puVar6 == (undefined1 *)0x0) ||
       ((puVar5 = unaff_x23, func_0x00010c08fa60(), puVar5 != (undefined *)0x0 &&
        (puVar6 = unaff_x25, func_0x00010c08fa60(), puVar6 == (undefined1 *)0x0)))) {
      unaff_x24 = puStack_158;
      uVar13 = *(undefined8 *)(puStack_158 + 0x28);
      param_4 = (undefined1 *)0x2;
      param_5 = (undefined *)0x0;
      unaff_x22 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = unaff_x22;
      func_0x00010bf43ca0(uVar13);
      _objc_release(unaff_x22);
      puVar5 = unaff_x24 + 0x48;
      _objc_loadWeakRetained();
      if (puVar5 != (undefined *)0x0) {
        puVar11 = (undefined *)0x1;
        FUN_104c86288(*(undefined8 *)(puVar5 + 0x30),*(undefined8 *)(unaff_x24 + 0x38));
      }
    }
    else {
      unaff_x24 = puStack_158;
      unaff_x22 = *(undefined **)(puStack_158 + 0x30);
      func_0x00010c262a00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = unaff_x22;
      FUN_104c798d0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x22);
      unaff_x28 = unaff_x24 + 0x48;
      _objc_loadWeakRetained();
      if (unaff_x28 != (undefined *)0x0) {
        iVar2 = (int)*(undefined8 *)(unaff_x24 + 0x30);
        func_0x00010bfd5100();
        puStack_160 = puVar5;
        if (iVar2 == 0) {
          uVar13 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(unaff_x24 + 0x30);
          func_0x00010bf2bec0();
          _objc_retainAutoreleasedReturnValue();
          uVar13 = uVar7;
          func_0x00010c0eff00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
        }
        iVar2 = (int)*(undefined8 *)(unaff_x24 + 0x30);
        puStack_170 = unaff_x27;
        func_0x00010bfd5100();
        if (iVar2 == 0) {
          uVar7 = 0;
        }
        else {
          uVar8 = *(undefined8 *)(unaff_x24 + 0x30);
          func_0x00010bf2bec0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar8;
          func_0x00010c0eff20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
        }
        uVar15 = *(undefined8 *)(unaff_x24 + 0x40);
        uVar8 = *(undefined8 *)(unaff_x24 + 0x30);
        uStack_180 = uVar7;
        func_0x00010c262a40(uVar8);
        uStack_178 = uVar13;
        FUN_104c7a258(uVar15,uVar13,uVar7,uVar8,*(undefined8 *)(unaff_x24 + 0x38),
                      *(undefined8 *)(unaff_x28 + 0x30));
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = PTR_PTR_1126ae930;
        uStack_188 = uVar15;
        _objc_alloc();
        lVar4 = lStack_140;
        func_0x00010beedca0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = *(undefined8 *)(unaff_x24 + 0x30);
        func_0x00010bf2bf80(uVar13);
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = puStack_170;
        uStack_1a0 = *(undefined8 *)(unaff_x24 + 0x38);
        bStack_198 = (byte)uStack_134 & 1;
        puStack_1b0 = puStack_160;
        param_6 = 0;
        param_4 = unaff_x25;
        param_5 = param_1;
        param_7 = lVar4;
        uStack_1a8 = uVar15;
        puStack_168 = unaff_x28;
        func_0x00010c053660();
        unaff_x28 = puStack_168;
        _objc_release(uVar13);
        _objc_release(lVar4);
        unaff_x24 = *(undefined **)(unaff_x24 + 0x28);
        puStack_1b0 = (undefined *)0x0;
        puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a120();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar14;
        func_0x00010bf43d60(unaff_x24);
        puVar5 = puStack_160;
        _objc_release(puVar14);
        _objc_release(unaff_x22);
        _objc_release(uStack_188);
        _objc_release(uStack_180);
        _objc_release(uStack_178);
      }
      _objc_release(unaff_x28);
    }
    _objc_release(puVar5);
    _objc_release(unaff_x25);
    _objc_release(unaff_x27);
    _objc_release(lStack_140);
    _objc_release(param_1);
    _objc_release(unaff_x23);
    _objc_release(puVar12);
    param_3 = puStack_150;
  }
  else {
    puVar11 = param_3;
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x28));
    puVar5 = param_1 + 0x48;
    _objc_loadWeakRetained();
    if (puVar5 != (undefined *)0x0) {
      puVar11 = (undefined *)0x1;
      FUN_104c86114(*(undefined8 *)(puVar5 + 0x30),&PTR____CFConstantStringClassReference_110dabdb8)
      ;
    }
    _objc_release(puVar5);
  }
  _objc_release(param_3);
  puVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_104c7e568;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_278 = puVar11;
  puStack_210 = unaff_x28;
  puStack_208 = unaff_x27;
  puStack_200 = param_2;
  puStack_1f8 = unaff_x25;
  puStack_1f0 = unaff_x24;
  puStack_1e8 = unaff_x23;
  puStack_1e0 = unaff_x22;
  puStack_1d8 = puVar5;
  puStack_1d0 = param_1;
  puStack_1c8 = param_3;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar11);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar13 = param_6;
  func_0x00010bf2bee0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_6;
  func_0x00010c262a40(param_6);
  lStack_280 = param_7;
  FUN_104c7a258(param_7,uVar13,0,uVar7,param_4,*(undefined8 *)(puVar6 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  lStack_270 = param_7;
  _objc_release(uVar13);
  puVar12 = param_5;
  FUN_104c7e83c(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126ae930;
  _objc_alloc();
  puVar5 = param_5;
  func_0x00010c2711a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = param_5;
  func_0x00010c260dc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_5;
  func_0x00010c0e6f20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  uStack_240 = 0;
  uStack_230 = 0x2020000000;
  uStack_228 = 0;
  puVar10 = param_5;
  puStack_238 = &uStack_240;
  func_0x00010bfe5400(param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_260 = 0xc2000000;
  pcStack_258 = FUN_104c7f004;
  puStack_250 = &UNK_1108431e0;
  puStack_248 = &uStack_240;
  func_0x00010c0be420();
  _objc_release(puVar10);
  bVar1 = *(byte *)(puStack_238 + 3);
  __Block_object_dispose(&uStack_240,8);
  _objc_release(param_5);
  bStack_288 = bVar1 & 1;
  lStack_298 = lStack_270;
  uStack_2a0 = 0;
  puStack_290 = param_4;
  func_0x00010c053660();
  _objc_release(puVar9);
  _objc_release(puVar14);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_220 = puVar11;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(puStack_278);
  _objc_release(puVar5);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(lStack_270);
  _objc_release(lStack_280);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar12 = puStack_278;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_240,8);
  puVar11 = puVar12;
  __Unwind_Resume(puVar12);
  pcStack_2a8 = FUN_104c7e83c;
  uStack_2d0 = param_6;
  puStack_2c8 = param_5;
  puStack_2c0 = param_4;
  puStack_2b8 = puVar12;
  ppuStack_2b0 = &puStack_1c0;
  _objc_retain();
  puStack_2f8 = &uStack_300;
  uStack_300 = 0;
  uStack_2f0 = 0x3032000000;
  pcStack_2e8 = FUN_104c7eeb0;
  uStack_2e0 = 0x104c7eec0;
  uStack_2d8 = 0;
  puVar12 = puVar11;
  func_0x00010bfe5400(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be420();
  _objc_release(puVar12);
  uVar13 = puStack_2f8[5];
  _objc_retain(uVar13);
  __Block_object_dispose(&uStack_300,8);
  _objc_release(uStack_2d8);
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar13);
  return;
}



/* Entry: 104c7e568; end: 104c7e83b; -[SCBillboardPACCampaignDataProviderImpl _completeCampaignInfoFromServerMetadataWithPromise:campaignName:pacUxConfig:cooldownConfig:defaultChannelGlobalRules:] */

void FUN_104c7e568(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte bStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c8 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar8 = param_6;
  func_0x00010bf2bee0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010c262a40(param_6);
  uStack_d0 = param_7;
  FUN_104c7a258(param_7,uVar8,0,uVar2,param_4,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uStack_c0 = param_7;
  _objc_release(uVar8);
  uVar8 = param_5;
  FUN_104c7e83c(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae930;
  _objc_alloc();
  uVar2 = param_5;
  func_0x00010c2711a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_5;
  func_0x00010c260dc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_5;
  func_0x00010c0e6f20(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  uVar6 = param_5;
  puStack_88 = &uStack_90;
  func_0x00010bfe5400(param_5);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104c7f004;
  puStack_a0 = &UNK_1108431e0;
  puStack_98 = &uStack_90;
  func_0x00010c0be420();
  _objc_release(uVar6);
  bVar1 = *(byte *)(puStack_88 + 3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_5);
  bStack_d8 = bVar1 & 1;
  uStack_e8 = uStack_c0;
  uStack_f0 = 0;
  uStack_e0 = param_4;
  func_0x00010c053660();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uStack_c8);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(uVar8);
  _objc_release(uStack_c0);
  _objc_release(uStack_d0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar8 = uStack_c8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_90,8);
  uVar2 = uVar8;
  __Unwind_Resume(uVar8);
  pcStack_f8 = FUN_104c7e83c;
  uStack_120 = param_6;
  uStack_118 = param_5;
  uStack_110 = param_4;
  uStack_108 = uVar8;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_148 = &uStack_150;
  uStack_150 = 0;
  uStack_140 = 0x3032000000;
  pcStack_138 = FUN_104c7eeb0;
  uStack_130 = 0x104c7eec0;
  uStack_128 = 0;
  uVar8 = uVar2;
  func_0x00010bfe5400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be420();
  _objc_release(uVar8);
  uVar8 = puStack_148[5];
  _objc_retain(uVar8);
  __Block_object_dispose(&uStack_150,8);
  _objc_release(uStack_128);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 104c7e83c; end: 104c7e933;  */

void FUN_104c7e83c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_104c7eeb0;
  uStack_40 = 0x104c7eec0;
  uStack_38 = 0;
  uVar1 = param_1;
  func_0x00010bfe5400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0be420();
  _objc_release(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104c7e934; end: 104c7ea4b; -[SCBillboardPACCampaignDataProviderImpl markCampaignAsDisplayedWithCampaign:] */

void FUN_104c7e934(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf3f4c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c262a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c262a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c286700(uVar4,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf2bf80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e6f20(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0acf00(uVar4,param_2,lVar1,2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 104c7ea4c; end: 104c7eb47; -[SCBillboardPACCampaignDataProviderImpl markCampaignAsTappedWithCampaign:] */

void FUN_104c7ea4c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf3f4c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c262a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c262a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284580(uVar4,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf2bf80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0acf00(uVar4,param_2,lVar1,0,0);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 104c7eb48; end: 104c7ec43; -[SCBillboardPACCampaignDataProviderImpl markCampaignAsDismissedWithCampaign:] */

void FUN_104c7eb48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf3f4c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c262a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c262a60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2852e0(uVar4,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010bf2bf80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c0acf00(uVar4,param_2,lVar1,1,0);
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 104c7ec44; end: 104c7ec4b; -[SCBillboardPACCampaignDataProviderImpl _pacChannelFullSignals] */

void FUN_104c7ec44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf16530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_basicBillboardSignals_1125a32f0);
  return;
}



/* Entry: 104c7ec4c; end: 104c7ecf3; -[SCBillboardPACCampaignDataProviderImpl _populateAudioSignalsWhenNecessaryWithCampaignCOFName:readOnlyBillboardSignals:] */

void FUN_104c7ec4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dabc58);
  uVar1 = param_4;
  if ((int)param_3 == 0) {
    _objc_retain(param_4);
  }
  else {
    func_0x00010bf51e00(param_4);
    lVar2 = *(long *)(param_1 + 0x48);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1238e0();
    func_0x00010c16c1a0(uVar1,param_2,lVar3 == 0x67726e74);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104c7ecf4; end: 104c7ee0f; -[SCBillboardPACCampaignDataProviderImpl _processRankingAndGetCampaign:campaignPromise:billboardSignals:] */

void FUN_104c7ecf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfc38c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110dabd78);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071680();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf2c260(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar1;
  func_0x00010c0dfe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010be1d9a0(param_1,param_2,param_4,uVar3,param_5,(uint)uVar2 ^ 1,uVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104c7ee10; end: 104c7ee13; -[SCBillboardPACCampaignDataProviderImpl _resetFeatureSettingInfo] */

void FUN_104c7ee10(void)

{
  return;
}



/* Entry: 104c7ee14; end: 104c7eeaf; -[SCBillboardPACCampaignDataProviderImpl .cxx_destruct] */

void FUN_104c7ee14(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104c7eeb0; end: 104c7eecb;  */

void FUN_104c7eeb0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104c7eecc; end: 104c7ef03;  */

void FUN_104c7eecc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104c7ef04; end: 104c7f003;  */

void FUN_104c7ef04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010bf44460();
  uVar1 = param_2;
  if ((int)uVar2 == 1) {
    func_0x00010c2711a0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = param_2;
    func_0x00010bf44460();
    if ((int)uVar2 != 2) {
      uVar2 = 0;
      goto LAB_104c7ef88;
    }
    func_0x00010c260dc0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar1;
  func_0x00010c26c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
LAB_104c7ef88:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104c7f004; end: 104c7f013;  */

void FUN_104c7f004(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 104c7f014; end: 104c7f0d3; -[SCBillboardRankingStrategyCalculator initWithProtoCOFReader:cooldownCapManager:] */

undefined1 *
FUN_104c7f014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e37b8;
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
    puVar3 = PTR_PTR_1126ae8e8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104c7f0d4; end: 104c7f3af; -[SCBillboardRankingStrategyCalculator getCalculatedPriorityWithRankingStrategyCOF:readOnlyBillboardSignals:originalPriority:] */

void FUN_104c7f0d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = param_5;
  if (param_5 != (undefined *)0x0) {
    puVar1 = param_5;
    func_0x00010bf2c260();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bf529e0();
    _objc_release(puVar1);
    if (puVar9 != (undefined *)0x0) {
      lVar2 = param_1;
      func_0x00010be21ea0(param_1,param_2,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      if ((lVar2 == 0) || (lVar3 = lVar2, func_0x00010c11fb60(), lVar3 == 0)) {
        _objc_retain(param_5);
      }
      else {
        lVar3 = lVar2;
        func_0x00010bf2c2a0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be1ac40(param_1,param_2,lVar3);
        _objc_release(lVar3);
        func_0x00010bf2c260();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + 0x18);
        _objc_retain(uVar8);
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar9 = puVar4;
        func_0x00010bf529e0();
        if (puVar9 != (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
          do {
            puVar5 = puVar4;
            func_0x00010c0dfd40(puVar4,param_2,puVar9);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bf2bea0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar8;
            func_0x00010c0dff20(uVar8,param_2,puVar6);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            puVar6 = PTR_PTR_1126ae940;
            _objc_alloc(PTR_PTR_1126ae940);
            func_0x00010c0325a0();
            func_0x00010befa120(puVar1,param_2,puVar6);
            _objc_release(puVar6);
            _objc_release(uVar7);
            _objc_release(puVar5);
            puVar9 = puVar9 + 1;
            puVar5 = puVar4;
            func_0x00010bf529e0();
          } while (puVar9 < puVar5);
        }
        _objc_release(uVar8);
        _objc_release(puVar4);
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_104c7f3b0;
        puStack_78 = &UNK_110843210;
        lStack_70 = param_1;
        _objc_retain(lVar2);
        lStack_68 = lVar2;
        func_0x00010c246c00(puVar1,param_2,0x10,&puStack_90);
        puVar4 = PTR_PTR_1126ae758;
        _objc_opt_new(PTR_PTR_1126ae758);
        puVar9 = puVar1;
        func_0x00010c0b8620(puVar1,param_2,&PTR___NSConcreteGlobalBlock_110843260,0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar9;
        func_0x00010c0d3c80();
        func_0x00010c177ae0(puVar4,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(puVar9);
        _objc_release(lStack_68);
        _objc_release(puVar1);
      }
      _objc_release(lVar2);
      goto LAB_104c7f374;
    }
  }
  _objc_retain(param_5);
LAB_104c7f374:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104c7f3b0; end: 104c7f427;  */

ulong FUN_104c7f3b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bdd88e0();
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bdd88e0();
  _objc_release(param_3);
  uVar3 = (ulong)(lVar1 < lVar2);
  if (lVar2 < lVar1) {
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}



/* Entry: 104c7f428; end: 104c7f42f;  */

void FUN_104c7f428(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2c250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_campaignSnapshot_1125a8a38);
  return;
}



/* Entry: 104c7f430; end: 104c7f4eb; -[SCBillboardRankingStrategyCalculator _getRankingStrategyWithStrategyCOFName:readOnlyBillboardSignals:] */

void FUN_104c7f430(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ae780;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c170140();
  _objc_release(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae938;
  _objc_opt_class(PTR_PTR_1126ae938);
  uVar4 = uVar2;
  func_0x00010c1217a0(uVar2,param_2,param_3,puVar1,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104c7f4ec; end: 104c7f6bf; -[SCBillboardRankingStrategyCalculator _generateCampaignNameToStorageUnitCache:] */

undefined1 * FUN_104c7f4ec(long param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar9 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ae8e8;
  _objc_opt_new();
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar2;
  _objc_release(uVar10);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  puVar16 = auStack_e8;
  puVar3 = param_3;
  func_0x00010bf52a60();
  if (puVar3 != (undefined1 *)0x0) {
    lVar15 = *plStack_120;
    do {
      puVar16 = (undefined1 *)0x0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        lVar13 = *(long *)(lStack_128 + (long)puVar16 * 8);
        lVar11 = lVar13;
        func_0x00010bf2bea0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar11;
        func_0x00010c08fa60();
        if (lVar4 == 0) {
LAB_104c7f644:
          _objc_release(lVar11);
        }
        else {
          lVar4 = lVar13;
          func_0x00010c262a40();
          _objc_release(lVar11);
          if ((int)lVar4 != 0) {
            lVar11 = lVar13;
            func_0x00010bf2bea0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c262a40(lVar13);
            uVar5 = *(undefined8 *)(param_1 + 0x10);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar5;
            func_0x00010bfca1e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar5);
            func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x18));
            _objc_release(uVar10);
            goto LAB_104c7f644;
          }
        }
        puVar16 = puVar16 + 1;
      } while (puVar3 != puVar16);
      puVar16 = auStack_e8;
      puVar3 = param_3;
      puVar9 = &uStack_130;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined1 *)0x0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  _objc_retain(puVar16);
  puVar3 = (undefined1 *)puVar9;
  func_0x00010bf51bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar16;
  func_0x00010c11fb40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf52a60();
  lVar15 = lRam0000000000000000;
  if (puVar7 == (undefined1 *)0x0) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    puVar12 = (undefined1 *)0x0;
    do {
      puVar17 = (undefined1 *)0x0;
      do {
        if (lRam0000000000000000 != lVar15) {
          _objc_enumerationMutation(puVar6);
        }
        uVar5 = *(undefined8 *)((long)puVar17 * 8);
        uVar10 = uVar5;
        func_0x00010c11fbe0();
        iVar1 = (int)uVar10;
        if (iVar1 < 3) {
          if (iVar1 == 1) {
            func_0x00010c2a4a60(uVar5);
            puVar8 = (undefined1 *)puVar9;
            func_0x00010c0ed9a0(puVar9);
            puVar12 = puVar12 + (long)puVar8 * (long)(int)uVar5;
          }
          else if (iVar1 == 2 && puVar3 != (undefined1 *)0x0) {
            func_0x00010c2a4a60(uVar5);
            iVar14 = (int)uVar5;
            puVar8 = puVar3;
            func_0x00010bfea820(puVar3);
            iVar1 = (int)puVar8;
            goto LAB_104c7f820;
          }
        }
        else if (iVar1 == 3) {
          if (puVar3 != (undefined1 *)0x0) {
            func_0x00010c2a4a60(uVar5);
            iVar14 = (int)uVar5;
            puVar8 = puVar3;
            func_0x00010bf3c820(puVar3);
            iVar1 = (int)puVar8;
            goto LAB_104c7f820;
          }
        }
        else if (iVar1 == 4 && puVar3 != (undefined1 *)0x0) {
          func_0x00010c2a4a60(uVar5);
          iVar14 = (int)uVar5;
          puVar8 = puVar3;
          func_0x00010bf836a0(puVar3);
          iVar1 = (int)puVar8;
LAB_104c7f820:
          puVar12 = puVar12 + iVar1 * iVar14;
        }
        puVar17 = puVar17 + 1;
      } while (puVar7 != puVar17);
      puVar7 = puVar6;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined1 *)0x0);
  }
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar16);
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_storeStrong((undefined1 *)((long)puVar9 + 0x18),0);
  _objc_storeStrong((undefined1 *)((long)puVar9 + 0x10),0);
  puVar16 = (undefined1 *)((long)puVar9 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar16,0);
  return puVar16;
}



/* Entry: 104c7f6c0; end: 104c7f8b7; -[SCBillboardRankingStrategyCalculator _calculateScoreWithSortingObject:rankingStrategy:] */

long FUN_104c7f6c0(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010bf51bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_4;
  func_0x00010c11fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar5 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        uVar11 = *(undefined8 *)(lVar12 * 8);
        uVar6 = uVar11;
        func_0x00010c11fbe0();
        iVar2 = (int)uVar6;
        if (iVar2 < 3) {
          if (iVar2 == 1) {
            func_0x00010c2a4a60(uVar11);
            lVar7 = param_3;
            func_0x00010c0ed9a0(param_3);
            lVar9 = lVar9 + lVar7 * (int)uVar11;
          }
          else if (iVar2 == 2 && lVar3 != 0) {
            func_0x00010c2a4a60(uVar11);
            iVar10 = (int)uVar11;
            lVar7 = lVar3;
            func_0x00010bfea820(lVar3);
            iVar2 = (int)lVar7;
            goto LAB_104c7f820;
          }
        }
        else if (iVar2 == 3) {
          if (lVar3 != 0) {
            func_0x00010c2a4a60(uVar11);
            iVar10 = (int)uVar11;
            lVar7 = lVar3;
            func_0x00010bf3c820(lVar3);
            iVar2 = (int)lVar7;
            goto LAB_104c7f820;
          }
        }
        else if (iVar2 == 4 && lVar3 != 0) {
          func_0x00010c2a4a60(uVar11);
          iVar10 = (int)uVar11;
          lVar7 = lVar3;
          func_0x00010bf836a0(lVar3);
          iVar2 = (int)lVar7;
LAB_104c7f820:
          lVar9 = lVar9 + iVar2 * iVar10;
        }
        lVar12 = lVar12 + 1;
      } while (lVar5 != lVar12);
      lVar5 = lVar4;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return lVar9;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
  param_3 = param_3 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3,0);
  return param_3;
}



/* Entry: 104c7f8b8; end: 104c7f8f3; -[SCBillboardRankingStrategyCalculator .cxx_destruct] */

void FUN_104c7f8b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


