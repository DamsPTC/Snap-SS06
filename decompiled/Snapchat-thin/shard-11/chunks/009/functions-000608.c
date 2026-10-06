/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bb51fc; end: 108bb5203; -[SCMinervaGrpcAISongGenerationResult requestId] */

undefined8 FUN_108bb51fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bb5204; end: 108bb524b; -[SCMinervaGrpcAISongGenerationResult .cxx_destruct] */

void FUN_108bb5204(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bb524c; end: 108bb535f; -[SCMinervaGrpcAIFontMedia initWithContentURL:rawData:secretKey:initialVector:isSecretKeyBase64Encoded:] */

undefined1 *
FUN_108bb524c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fd818;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bb5360; end: 108bb5383; -[SCMinervaGrpcAIFontMedia copyWithZone:] */

undefined8 FUN_108bb5360(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bb5384; end: 108bb5413; -[SCMinervaGrpcAIFontMedia hash] */

undefined8 * FUN_108bb5384(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108bb54d4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108bb54e0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_108bb54e0;
            }
            goto LAB_108bb54d4;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108bb54e0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108bb5414; end: 108bb54fb; -[SCMinervaGrpcAIFontMedia isEqual:] */

long FUN_108bb5414(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bb54d4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bb54e0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_108bb54e0;
            }
            goto LAB_108bb54d4;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108bb54e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bb54fc; end: 108bb5503; -[SCMinervaGrpcAIFontMedia contentURL] */

undefined8 FUN_108bb54fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb5504; end: 108bb550b; -[SCMinervaGrpcAIFontMedia rawData] */

undefined8 FUN_108bb5504(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb550c; end: 108bb5513; -[SCMinervaGrpcAIFontMedia secretKey] */

undefined8 FUN_108bb550c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108bb5514; end: 108bb551b; -[SCMinervaGrpcAIFontMedia initialVector] */

undefined8 FUN_108bb5514(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108bb551c; end: 108bb5523; -[SCMinervaGrpcAIFontMedia isSecretKeyBase64Encoded] */

undefined1 FUN_108bb551c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bb5524; end: 108bb556b; -[SCMinervaGrpcAIFontMedia .cxx_destruct] */

void FUN_108bb5524(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bb556c; end: 108bb5643; -[SCMinervaGrpcSuggestedAIFont initWithDreamPackId:dreamId:previewMedia:] */

undefined1 *
FUN_108bb556c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fd820;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bb5644; end: 108bb5667; -[SCMinervaGrpcSuggestedAIFont copyWithZone:] */

undefined8 FUN_108bb5644(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108bb5668; end: 108bb56e7; -[SCMinervaGrpcSuggestedAIFont hash] */

undefined8 * FUN_108bb5668(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108bb5780:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108bb578c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108bb578c;
          }
          goto LAB_108bb5780;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108bb578c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108bb56e8; end: 108bb57a7; -[SCMinervaGrpcSuggestedAIFont isEqual:] */

long FUN_108bb56e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108bb5780:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108bb578c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_108bb578c;
          }
          goto LAB_108bb5780;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108bb578c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108bb57a8; end: 108bb57af; -[SCMinervaGrpcSuggestedAIFont dreamPackId] */

undefined8 FUN_108bb57a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb57b0; end: 108bb57b7; -[SCMinervaGrpcSuggestedAIFont dreamId] */

undefined8 FUN_108bb57b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb57b8; end: 108bb57bf; -[SCMinervaGrpcSuggestedAIFont previewMedia] */

undefined8 FUN_108bb57b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb57c0; end: 108bb5877; -[SCMinervaGrpcSuggestedAIFont .cxx_destruct] */

void FUN_108bb57c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb5878; end: 108bb5883;  */

bool FUN_108bb5878(uint param_1)

{
  return param_1 < 0x10;
}



/* Entry: 108bb5884; end: 108bb58ff;  */

undefined * FUN_108bb5884(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dd48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eeb378,
                        &UNK_10df95240,&UNK_10df95284,4,FUN_108bb5900,0);
    do {
      if (puRam000000011372dd48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dd48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dd48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dd48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dd48;
}



/* Entry: 108bb5900; end: 108bb590b;  */

bool FUN_108bb5900(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108bb590c; end: 108bb5973; +[SCMinervaGenerateAISnapRequest descriptor] */

void FUN_108bb590c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dd50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb2910,
                        &PTR____CFConstantStringClassReference_110eeb398,&PTR_DAT_11328dc20,
                        &PTR_s_friendIdsArray_11328dcd8,4,0x20,0x1c);
    puRam000000011372dd50 = puVar1;
  }
  return;
}



/* Entry: 108bb5974; end: 108bb59db; +[SCMinervaGenerateAISnapResponse descriptor] */

void FUN_108bb5974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dd58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb2960,
                        &PTR____CFConstantStringClassReference_110eeb3b8,&PTR_DAT_11328dc20,
                        &PTR_s_status_11328dc78,3,0x20,0x1c);
    puRam000000011372dd58 = puVar1;
  }
  return;
}



/* Entry: 108bb59dc; end: 108bb5abf; +[SCMinervaMinervaAISnapClientConfig descriptor] */

void FUN_108bb59dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dd60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb29b0,
                        &PTR____CFConstantStringClassReference_110eeb3d8,&PTR_DAT_11328dc20,
                        &PTR_s_endpoint_11328dc38,2,0x10,0x1c);
    puRam000000011372dd60 = puVar1;
  }
  return;
}



/* Entry: 108bb5ac0; end: 108bb5acb;  */

bool FUN_108bb5ac0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108bb5acc; end: 108bb5baf; +[SCCameosServiceStatusResponse descriptor] */

void FUN_108bb5acc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dd70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb2a50,
                        &PTR____CFConstantStringClassReference_110eeb418,&PTR_DAT_11328dd58,
                        &PTR_s_status_11328dd70,2,0x10,0x1c);
    puRam000000011372dd70 = puVar1;
  }
  return;
}



/* Entry: 108bb5bb0; end: 108bb5bbb;  */

bool FUN_108bb5bb0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108bb5bbc; end: 108bb5c37;  */

undefined * FUN_108bb5bbc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dd80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eeb458,
                        &UNK_10df952f0,&UNK_10df95350,6,FUN_108bb5c38,0);
    do {
      if (puRam000000011372dd80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dd80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dd80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dd80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dd80;
}



/* Entry: 108bb5c38; end: 108bb5c43;  */

bool FUN_108bb5c38(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 108bb5c44; end: 108bb5cbf;  */

undefined * FUN_108bb5c44(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dd88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eeb478,
                        &UNK_10df95368,&UNK_10df953a0,4,FUN_108bb5cc0,0);
    do {
      if (puRam000000011372dd88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dd88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dd88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dd88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dd88;
}



/* Entry: 108bb5cc0; end: 108bb5ccb;  */

bool FUN_108bb5cc0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108bb5ccc; end: 108bb5d33; +[SCPbGenAIIdentity descriptor] */

void FUN_108bb5ccc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dd90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb2af0,
                        &PTR____CFConstantStringClassReference_110e573b8,&PTR_DAT_11328ddb0,
                        &PTR_s_id_p_11328dee8,0xb,0x50,0x1c);
    puRam000000011372dd90 = puVar1;
  }
  return;
}



/* Entry: 108bb5d34; end: 108bb5d9b; +[SCPbGenAICameosIdentity descriptor] */

void FUN_108bb5d34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dd98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb2b40,
                        &PTR____CFConstantStringClassReference_110eeb498,&PTR_DAT_11328ddb0,
                        &PTR_DAT_11328ddc8,3,0x20,0x1c);
    puRam000000011372dd98 = puVar1;
  }
  return;
}



/* Entry: 108bb5d9c; end: 108bb5e03; +[SCPbGenAISelfie descriptor] */

void FUN_108bb5d9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dda0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb2b90,
                        &PTR____CFConstantStringClassReference_110dd73d8,&PTR_DAT_11328ddb0,
                        &PTR_s_image_11328de28,3,0x18,0x1c);
    puRam000000011372dda0 = puVar1;
  }
  return;
}



/* Entry: 108bb5e04; end: 108bb5e6b; +[SCPbGenAIProcessedSelfie descriptor] */

void FUN_108bb5e04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dda8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb2be0,
                        &PTR____CFConstantStringClassReference_110eeb4b8,&PTR_DAT_11328ddb0,
                        &PTR_s_image_11328de88,3,0x20,0x1c);
    puRam000000011372dda8 = puVar1;
  }
  return;
}



/* Entry: 108bb5e6c; end: 108bb5f0f; -[SCBloopsOnboardingAnalyticsServices initWithOnboardCardTracker:withListItemOnboardingEmitter:] */

undefined1 *
FUN_108bb5e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd828;
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



/* Entry: 108bb5f10; end: 108bb5f17; -[SCBloopsOnboardingAnalyticsServices onboardCardTracker] */

undefined8 FUN_108bb5f10(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb5f18; end: 108bb5f1f; -[SCBloopsOnboardingAnalyticsServices listItemOnboardingEventEmitter] */

undefined8 FUN_108bb5f18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb5f20; end: 108bb5f4f; -[SCBloopsOnboardingAnalyticsServices .cxx_destruct] */

void FUN_108bb5f20(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb5f50; end: 108bb5f57; -[SCBloopsCTAServices onboardingFactory] */

undefined8 FUN_108bb5f50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb5f58; end: 108bb5f5f; -[SCBloopsCTAServices onboardingStateProvider] */

undefined8 FUN_108bb5f58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb5f60; end: 108bb5f67; -[SCBloopsCTAServices targetsService] */

undefined8 FUN_108bb5f60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb5f68; end: 108bb5fa3; -[SCBloopsCTAServices .cxx_destruct] */

void FUN_108bb5f68(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb5fa4; end: 108bb5fab; -[SCBloopsCTPOptionsServices bloopsCTPOptionsService] */

undefined8 FUN_108bb5fa4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb5fac; end: 108bb5fb7; -[SCBloopsCTPOptionsServices .cxx_destruct] */

void FUN_108bb5fac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb5fb8; end: 108bb5fe7; -[SCBloopsFeatureInfoService .cxx_destruct] */

void FUN_108bb5fb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb5fe8; end: 108bb6163; -[SCBloopsFeatureListenerAnnouncer description] */

void FUN_108bb5fe8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_108bb6164(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108bb6164; end: 108bb61c3;  */

void FUN_108bb6164(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 108bb61c4; end: 108bb646f; -[SCBloopsFeatureListenerAnnouncer addListener:] */

undefined8 FUN_108bb61c4(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plStack_a0;
  long *plStack_98;
  undefined1 auStack_90 [8];
  long *plStack_88;
  long *plStack_80;
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  plVar3 = (long *)0x30;
  __Znwm();
  plVar11 = plVar3 + 1;
  *plVar11 = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR_FUN_110ab58d8;
  plVar10 = plVar3 + 3;
  *plVar10 = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  plStack_70 = plVar10;
  plStack_68 = plVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_108bb6470(plVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_a0 = plVar10;
    plStack_98 = plVar3;
    FUN_108bb65b0(puVar8,&plStack_a0);
    if (plStack_98 != (long *)0x0) {
      plVar3 = plStack_98 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_98;
      } while (cVar1 != '\0');
LAB_108bb6378:
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar12 = plVar6[1];
    lVar7 = lVar5;
    if (lVar5 != lVar12) {
      do {
        lVar4 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar7;
        if (lVar4 == param_3) break;
        lVar7 = lVar7 + 8;
        lVar5 = lVar12;
      } while (lVar7 != lVar12);
      plVar6 = (long *)*puVar8;
      lVar12 = plVar6[1];
    }
    if (lVar5 != lVar12) {
      uVar9 = 0;
      goto LAB_108bb6398;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_108bb6470(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_108bb6470(plVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_88 = plVar10;
    plStack_80 = plVar3;
    FUN_108bb65b0(puVar8,&plStack_88);
    if (plStack_80 != (long *)0x0) {
      plVar3 = plStack_80 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        plVar6 = plStack_80;
      } while (cVar1 != '\0');
      goto LAB_108bb6378;
    }
  }
  uVar9 = 1;
LAB_108bb6398:
  plVar3 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 108bb6470; end: 108bb65af;  */

void FUN_108bb6470(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar2 = param_1[1];
  if (uVar2 < (ulong)param_1[2]) {
    _objc_copyWeak(uVar2,param_2);
    lVar9 = uVar2 + 8;
  }
  else {
    lVar9 = uVar2 - *param_1;
    uVar2 = (lVar9 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
      FUN_108bb6948();
LAB_108bb65ac:
      func_0x000104bd35f4();
      plVar5 = param_1;
      __ZNSt3__112__get_sp_mutEPKv();
      __ZNSt3__18__sp_mut4lockEv();
      lVar9 = *param_2;
      lVar11 = param_1[1];
      lVar4 = *param_1;
      param_1[1] = param_2[1];
      *param_1 = lVar9;
      param_2[1] = lVar11;
      *param_2 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(plVar5);
      return;
    }
    uVar6 = param_1[2] - *param_1;
    uVar7 = (long)uVar6 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      lVar4 = 0;
    }
    else {
      if (uVar7 >> 0x3d != 0) goto LAB_108bb65ac;
      lVar4 = uVar7 << 3;
      __Znwm();
    }
    lVar9 = lVar4 + lVar9;
    _objc_copyWeak(lVar9,param_2);
    lVar8 = *param_1;
    lVar3 = param_1[1];
    lVar1 = lVar9 + (lVar8 - lVar3);
    lVar11 = lVar8;
    lVar10 = lVar1;
    if (lVar3 != lVar8) {
      do {
        _objc_moveWeak(lVar10,lVar11);
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar11 != lVar3);
      do {
        _objc_destroyWeak(lVar8);
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar3);
      lVar8 = *param_1;
    }
    lVar9 = lVar9 + 8;
    *param_1 = lVar1;
    param_1[1] = lVar9;
    param_1[2] = lVar4 + uVar7 * 8;
    if (lVar8 != 0) {
      __ZdlPv(lVar8);
    }
  }
  param_1[1] = lVar9;
  return;
}



/* Entry: 108bb65b0; end: 108bb65f7;  */

void FUN_108bb65b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_1;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_2;
  uVar4 = param_1[1];
  uVar3 = *param_1;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_2[1] = uVar4;
  *param_2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar1);
  return;
}



/* Entry: 108bb65f8; end: 108bb6827; -[SCBloopsFeatureListenerAnnouncer removeListener:] */

void FUN_108bb65f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_108bb67ac;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_108bb6660;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_108bb65b0(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_108bb67ac;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_108bb6660:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110ab58d8;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          FUN_108bb6470(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    FUN_108bb65b0(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_108bb67ac;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_108bb67ac:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bb6828; end: 108bb68ff; -[SCBloopsFeatureListenerAnnouncer bloopsFeatureStatusDidChange:] */

void FUN_108bb6828(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  FUN_108bb6164(&plStack_40,param_1 + 0x48);
  if (plStack_40 != (long *)0x0) {
    lVar2 = plStack_40[1];
    for (lVar6 = *plStack_40; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf1dd20();
      _objc_release(lVar5);
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_38);
      return;
    }
  }
  return;
}



/* Entry: 108bb6900; end: 108bb6927; -[SCBloopsFeatureListenerAnnouncer .cxx_destruct] */

void FUN_108bb6900(long param_1)

{
  FUN_108bb695c(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 108bb6928; end: 108bb6947; -[SCBloopsFeatureListenerAnnouncer .cxx_construct] */

void FUN_108bb6928(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0x32aaaba7;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 108bb6948; end: 108bb695b;  */

undefined * FUN_108bb6948(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 108bb695c; end: 108bb69b3;  */

long FUN_108bb695c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 108bb69b4; end: 108bb69c3;  */

void FUN_108bb69b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab58d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108bb69c4; end: 108bb69e3;  */

void FUN_108bb69c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ab58d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108bb69e4; end: 108bb6a4b;  */

void FUN_108bb69e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 108bb6a4c; end: 108bb6a4f;  */

void FUN_108bb6a4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108bb6a50; end: 108bb6a57; -[SCBloopsServices onboardingControllerFactory] */

undefined8 FUN_108bb6a50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb6a58; end: 108bb6a5f; -[SCBloopsServices targetsService] */

undefined8 FUN_108bb6a58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb6a60; end: 108bb6a67; -[SCBloopsServices bloopsMetricsService] */

undefined8 FUN_108bb6a60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb6a68; end: 108bb6aa3; -[SCBloopsServices .cxx_destruct] */

void FUN_108bb6a68(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb6aa4; end: 108bb6b17; -[SCBloopsStickersPresentationServices initWithPresentationModelProvider:] */

undefined1 * FUN_108bb6aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd850;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bb6b18; end: 108bb6b1f; -[SCBloopsStickersPresentationServices presentationModelProvider] */

undefined8 FUN_108bb6b18(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb6b20; end: 108bb6b4f; -[SCBloopsStickersPresentationServices setPresentationModelProvider:] */

void FUN_108bb6b20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bb6b50; end: 108bb6b5b; -[SCBloopsStickersPresentationServices .cxx_destruct] */

void FUN_108bb6b50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb6b5c; end: 108bb6b63; -[SCBloopsStickersPresentationModel personSource] */

undefined8 FUN_108bb6b5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108bb6b64; end: 108bb6b93; -[SCBloopsStickersPresentationModel setPersonSource:] */

void FUN_108bb6b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bb6b94; end: 108bb6b9b; -[SCBloopsStickersPresentationModel searchQuery] */

undefined8 FUN_108bb6b94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108bb6b9c; end: 108bb6bcb; -[SCBloopsStickersPresentationModel setSearchQuery:] */

void FUN_108bb6b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bb6bcc; end: 108bb6bd3; -[SCBloopsStickersPresentationModel needsCheckPersonsSource] */

undefined1 FUN_108bb6bcc(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108bb6bd4; end: 108bb6bdb; -[SCBloopsStickersPresentationModel setNeedsCheckPersonsSource:] */

void FUN_108bb6bd4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108bb6bdc; end: 108bb6c0b; -[SCBloopsStickersPresentationModel .cxx_destruct] */

void FUN_108bb6bdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108bb6c0c; end: 108bb6c13; -[SCBloopsUserServices userGRPCService] */

undefined8 FUN_108bb6c0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108bb6c14; end: 108bb6c1f; -[SCBloopsUserServices currentUserCache] */

void FUN_108bb6c14(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 108bb6c20; end: 108bb6c2b; -[SCBloopsUserServices getMyDataCache] */

void FUN_108bb6c20(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x20,1);
  return;
}



/* Entry: 108bb6c2c; end: 108bb6c37; -[SCBloopsUserServices friendsCache] */

void FUN_108bb6c2c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 108bb6c38; end: 108bb6c8b; -[SCBloopsUserServices .cxx_destruct] */

void FUN_108bb6c38(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb6c8c; end: 108bb6cbb; -[SCCameraDimensionsServices setDimensionsProvider:] */

void FUN_108bb6c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bb6cbc; end: 108bb6cc7; -[SCCameraDimensionsServices .cxx_destruct] */

void FUN_108bb6cbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bb6cc8; end: 108bb6dcb; -[SCMemoryUsagePerfLogger logBackgroundMemoryUsage:] */

undefined8 ***
FUN_108bb6cc8(undefined8 **param_1,undefined8 param_2,undefined8 param_3,undefined8 **param_4,
             undefined8 param_5,undefined8 param_6,undefined8 **param_7,undefined8 **param_8,
             undefined8 **param_9)

{
  int iVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  undefined8 ***pppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 **ppuVar11;
  undefined8 **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_50;
  
  pppuVar2 = (undefined8 ***)PTR_PTR_1126b15f8;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_alloc();
  ppuVar5 = (undefined8 **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = (undefined8 **)0x3;
  ppuVar8 = ppuVar5;
  func_0x00010c010c60();
  _objc_release(ppuVar5);
  puVar3 = PTR_PTR_1126b1600;
  func_0x00010c22bdc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  pppuVar6 = pppuVar2;
  func_0x00010c0aa440(puVar3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar6);
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar8);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(puStack_50);
  _objc_retain(&PTR____CFConstantStringClassReference_110eeb518);
  _objc_retain(param_4);
  puStack_b8 = PTR_PTR_1126fd868;
  pppuVar4 = &ppuStack_c0;
  ppuStack_c0 = pppuVar2;
  _objc_msgSendSuper2(pppuVar4,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined8 ***)0x0) {
    ppuVar5 = (undefined8 **)PTR_PTR_1126ae810;
    _objc_opt_new();
    ppuVar11 = pppuVar4[0xb];
    pppuVar4[0xb] = ppuVar5;
    _objc_release(ppuVar11);
    _objc_retain(pppuVar6);
    ppuVar5 = pppuVar4[1];
    pppuVar4[1] = pppuVar6;
    _objc_release(ppuVar5);
    _objc_retain(ppuVar7);
    ppuVar5 = pppuVar4[2];
    pppuVar4[2] = ppuVar7;
    _objc_release(ppuVar5);
    _objc_retain(ppuVar8);
    ppuVar5 = pppuVar4[5];
    pppuVar4[5] = ppuVar8;
    _objc_release(ppuVar5);
    _objc_retain(param_7);
    ppuVar5 = pppuVar4[3];
    pppuVar4[3] = param_7;
    _objc_release(ppuVar5);
    _objc_retain(param_9);
    ppuVar5 = pppuVar4[0xd];
    pppuVar4[0xd] = param_9;
    _objc_release(ppuVar5);
    _objc_retain(puStack_50);
    ppuVar5 = pppuVar4[4];
    pppuVar4[4] = (undefined8 **)puStack_50;
    _objc_release(ppuVar5);
    _objc_retain(&PTR____CFConstantStringClassReference_110eeb518);
    ppuVar5 = pppuVar4[0x19];
    pppuVar4[0x19] = (undefined8 **)&PTR____CFConstantStringClassReference_110eeb518;
    _objc_release(ppuVar5);
    ppuVar5 = (undefined8 **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = pppuVar4[0x1c];
    pppuVar4[0x1c] = ppuVar5;
    _objc_release(ppuVar11);
    func_0x00010be93420(pppuVar4);
    ppuVar5 = (undefined8 **)PTR_PTR_1126daf98;
    func_0x00010c0db2c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = pppuVar4[0x1a];
    pppuVar4[0x1a] = ppuVar5;
    _objc_release(ppuVar11);
    ppuVar5 = (undefined8 **)PTR_PTR_1126daf98;
    func_0x00010c0db2c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = pppuVar4[0x1b];
    pppuVar4[0x1b] = ppuVar5;
    _objc_release(ppuVar11);
    ppuVar5 = (undefined8 **)PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = pppuVar4[0x1d];
    pppuVar4[0x1d] = ppuVar5;
    _objc_release(ppuVar11);
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277620();
    _objc_release(puVar3);
    pppuVar4[8] = (undefined8 **)0x1;
    *(undefined1 *)(pppuVar4 + 9) = 0;
    pppuVar4[0x15] = (undefined8 **)0xffffffffffffffff;
    func_0x00010beec800(pppuVar4[5]);
    pppuVar4[6] = param_1;
    ppuVar5 = (undefined8 **)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    ppuVar11 = pppuVar4[0x13];
    pppuVar4[0x13] = ppuVar5;
    _objc_release(ppuVar11);
    _objc_retain(param_8);
    ppuVar5 = pppuVar4[0x14];
    pppuVar4[0x14] = param_8;
    _objc_release(ppuVar5);
    ppuVar5 = param_4;
    _objc_retainBlock();
    ppuVar11 = pppuVar4[0x1f];
    pppuVar4[0x1f] = ppuVar5;
    _objc_release(ppuVar11);
    ppuVar5 = (undefined8 **)PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c270940(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = pppuVar4[0x16];
    pppuVar4[0x16] = ppuVar5;
    _objc_release(ppuVar11);
    puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0();
    iVar1 = (int)puVar3;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc020();
    _objc_release();
    func_0x000107c318f0();
    uVar9 = 0x14;
    if (iVar1 != 0) {
      uVar9 = 1;
    }
    *(undefined4 *)(pppuVar4 + 0x17) = uVar9;
  }
  _objc_release(param_4);
  _objc_release(&PTR____CFConstantStringClassReference_110eeb518);
  _objc_release(puStack_50);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(pppuVar6);
  return pppuVar4;
}



/* Entry: 108bb6dcc; end: 108bb714b; -[SCMemoryUsageReporter initWithGrapheneLogger:blizzardLogger:timeProvider:deviceMemoryBucket:crashBlizzardLogger:circumstanceEngine:reportQueue:memoryPressureState:composerMemoryStatsProvider:] */

undefined8 *
FUN_108bb6dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126fd868;
  puVar2 = &uStack_70;
  uStack_70 = param_2;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = puVar2[0xb];
    puVar2[0xb] = puVar3;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = puVar2[1];
    puVar2[1] = param_4;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = puVar2[2];
    puVar2[2] = param_5;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = puVar2[5];
    puVar2[5] = param_6;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = puVar2[3];
    puVar2[3] = param_7;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar5 = puVar2[0xd];
    puVar2[0xd] = param_9;
    _objc_release(uVar5);
    _objc_retain(param_10);
    uVar5 = puVar2[4];
    puVar2[4] = param_10;
    _objc_release(uVar5);
    _objc_retain(param_11);
    uVar5 = puVar2[0x19];
    puVar2[0x19] = param_11;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar2[0x1c];
    puVar2[0x1c] = puVar3;
    _objc_release(uVar5);
    func_0x00010be93420(puVar2);
    puVar3 = PTR_PTR_1126daf98;
    func_0x00010c0db2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar2[0x1a];
    puVar2[0x1a] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126daf98;
    func_0x00010c0db2c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar2[0x1b];
    puVar2[0x1b] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar2[0x1d];
    puVar2[0x1d] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277620();
    _objc_release(puVar3);
    puVar2[8] = 1;
    *(undefined1 *)(puVar2 + 9) = 0;
    puVar2[0x15] = 0xffffffffffffffff;
    func_0x00010beec800(puVar2[5]);
    puVar2[6] = param_1;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_alloc_init();
    uVar5 = puVar2[0x13];
    puVar2[0x13] = puVar3;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = puVar2[0x14];
    puVar2[0x14] = param_8;
    _objc_release(uVar5);
    uVar5 = param_12;
    _objc_retainBlock();
    uVar6 = puVar2[0x1f];
    puVar2[0x1f] = uVar5;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x00010c270940(0x404e000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar2[0x16];
    puVar2[0x16] = puVar3;
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0();
    iVar1 = (int)puVar3;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc020();
    _objc_release();
    func_0x000107c318f0();
    uVar4 = 0x14;
    if (iVar1 != 0) {
      uVar4 = 1;
    }
    *(undefined4 *)(puVar2 + 0x17) = uVar4;
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 108bb714c; end: 108bb7767; -[SCMemoryUsageReporter subscribeOnAppLifecycleEvent:memoryUsageSnapshot:currentPageEvent:] */

void FUN_108bb714c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_1);
  uVar2 = param_3;
  func_0x00010c2a6420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_108bb7768;
  puStack_90 = &UNK_110846510;
  _objc_copyWeak(auStack_88,auStack_80);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf72840(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x108bb7794;
  puStack_b8 = &UNK_110846510;
  _objc_copyWeak(auStack_b0,auStack_80);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2a6a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x108bb77c0;
  puStack_e0 = &UNK_110846510;
  _objc_copyWeak(auStack_d8,auStack_80);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf75dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_108bb77ec;
  puStack_108 = &UNK_110846510;
  _objc_copyWeak(auStack_100,auStack_80);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf79200(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_108bb7b1c;
  puStack_130 = &UNK_1108a9250;
  _objc_copyWeak(auStack_128,auStack_80);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c0e0e60(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar1;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x108bb7b64;
  puStack_158 = &UNK_110890ff0;
  _objc_copyWeak(auStack_150,auStack_80);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_5;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x108bb7bac;
  puStack_180 = &UNK_110872360;
  _objc_copyWeak(auStack_178,auStack_80);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c0e0e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1a0,auStack_80);
  uVar3 = uVar2;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bb7768; end: 108bb77eb;  */

void FUN_108bb7768(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beeb040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bb77ec; end: 108bb79bf;  */

void FUN_108bb77ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x00010bdfd8e0(lVar2);
    lVar3 = *(long *)(lVar2 + 0x68);
    FUN_108bbadb0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010becbec0();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_c0 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0xffffffffffffffff;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108bb79c0;
    puStack_a0 = &UNK_110847658;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    uStack_d0 = 0x108bb79d4;
    puStack_c8 = &UNK_110847658;
    puStack_98 = puStack_c0;
    puStack_88 = puStack_c0;
    func_0x00010c0bf100(*(undefined8 *)(lVar2 + 0xd8));
    lVar5 = lVar3;
    func_0x00010c0b4ca0(lVar3);
    uVar6 = 0;
    _dispatch_time(0,lVar5 * 1000000000);
    uVar7 = 9;
    _dispatch_get_global_queue(9,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_120 = puVar1;
    uStack_118 = 0xc2000000;
    pcStack_110 = FUN_108bb79e8;
    puStack_108 = &UNK_110889e90;
    lStack_100 = lVar2;
    _objc_copyWeak(auStack_f0,param_1 + 0x20);
    puStack_f8 = &uStack_90;
    lStack_e8 = lVar4;
    func_0x000107c27d84(uVar6,uVar7,&puStack_120);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_f0);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 108bb79c0; end: 108bb79e7;  */

void FUN_108bb79c0(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 108bb79e8; end: 108bb7a8f;  */

void FUN_108bb79e8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_copyWeak(auStack_40,param_1 + 0x30);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010befa3a0(uVar1);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 108bb7a90; end: 108bb7b1b;  */

void FUN_108bb7a90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x60);
    uVar4 = *(undefined8 *)(lVar1 + 0x50);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = lVar1;
    func_0x00010be5f4e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be8f380(lVar1,param_2,uVar3,uVar4,uVar5,lVar2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18));
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bb7b1c; end: 108bb7c3b;  */

void FUN_108bb7b1c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdff4e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bb7c3c; end: 108bb7cc3; -[SCMemoryUsageReporter _timeBucket] */

undefined8 FUN_108bb7c3c(double param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  func_0x00010beec800(*(undefined8 *)(param_2 + 0x28));
  param_1 = param_1 - *(double *)(param_2 + 0x30);
  if (0.0 <= param_1) {
    uVar2 = (ulong)(param_1 / 60.0);
    if ((long)uVar2 < 1) {
      uVar1 = 0;
    }
    else if (uVar2 < 5) {
      uVar1 = 1;
    }
    else if (uVar2 < 10) {
      uVar1 = 2;
    }
    else {
      uVar1 = 3;
      if (0x13 < uVar2) {
        uVar1 = 4;
      }
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 108bb7cc4; end: 108bb7cd3; -[SCMemoryUsageReporter _isBackground] */

bool FUN_108bb7cc4(long param_1)

{
  return *(long *)(param_1 + 0x40) == 2;
}



/* Entry: 108bb7cd4; end: 108bb7cdb; -[SCMemoryUsageReporter _setApplicationState:] */

void FUN_108bb7cd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 108bb7cdc; end: 108bb7e73; -[SCMemoryUsageReporter _didUpdateMemoryUsageStatus:] */

void FUN_108bb7cdc(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf01020();
  if ((int)lVar4 == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = param_3;
    _objc_release(uVar2);
    lVar3 = param_3;
    func_0x00010c0ca3a0();
    lVar4 = *(long *)(param_1 + 0x50);
    if (lVar4 < lVar3) {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar5);
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x70) = uVar5;
      _objc_release(uVar2);
      lVar4 = *(long *)(param_1 + 0x50);
    }
    lVar3 = param_3;
    func_0x00010c0ca3a0();
    if (lVar4 <= lVar3) {
      lVar4 = lVar3;
    }
    *(long *)(param_1 + 0x50) = lVar4;
    lVar4 = *(long *)(param_1 + 0x80);
    lVar3 = param_3;
    func_0x00010c0ca3a0();
    if (lVar4 <= lVar3) {
      lVar4 = lVar3;
    }
    *(long *)(param_1 + 0x80) = lVar4;
    lVar4 = *(long *)(param_1 + 0x88);
    lVar3 = param_3;
    func_0x00010c0ca3a0();
    if (lVar3 <= lVar4) {
      lVar4 = lVar3;
    }
    *(long *)(param_1 + 0x88) = lVar4;
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    lVar4 = param_3;
    func_0x00010c0ca3a0(param_3);
    func_0x00010befc800((double)lVar4,uVar2);
    func_0x00010be8ff40(param_1);
  }
  else if ((*(long *)(param_1 + 0xf8) != 0) &&
          (uVar1 = param_1, func_0x00010be3e500(), (uVar1 & 1) == 0)) {
    _objc_initWeak(auStack_38,param_1);
    lVar4 = *(long *)(param_1 + 0xf8);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108bb7e74;
    puStack_48 = &UNK_110ab5918;
    _objc_copyWeak(auStack_40,auStack_38);
    (**(code **)(lVar4 + 0x10))(lVar4,&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108bb7e74; end: 108bb7f33;  */

void FUN_108bb7e74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    _objc_copyWeak(auStack_58,param_1 + 0x20);
    uStack_50 = param_2;
    uStack_48 = param_3;
    func_0x00010befa3a0(uVar2);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108bb7f34; end: 108bb7f6f;  */

void FUN_108bb7f34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(lVar2 + 0x100);
    if (*(long *)(lVar2 + 0x100) <= lVar3) {
      lVar1 = lVar3;
    }
    *(long *)(lVar2 + 0x100) = lVar1;
    *(long *)(lVar2 + 0x108) = lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}


