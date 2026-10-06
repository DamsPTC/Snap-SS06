/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10509828c; end: 10509828f; -[SCArroyoProfileChatMessagesUpdateTracker didCreateConversation:] */

void FUN_10509828c(void)

{
  return;
}



/* Entry: 105098290; end: 105098293; -[SCArroyoProfileChatMessagesUpdateTracker didRemoveConversation:] */

void FUN_105098290(void)

{
  return;
}



/* Entry: 105098294; end: 105098297; -[SCArroyoProfileChatMessagesUpdateTracker didSendStart:] */

void FUN_105098294(void)

{
  return;
}



/* Entry: 105098298; end: 10509829b; -[SCArroyoProfileChatMessagesUpdateTracker didSendComplete:] */

void FUN_105098298(void)

{
  return;
}



/* Entry: 10509829c; end: 10509829f; -[SCArroyoProfileChatMessagesUpdateTracker didConfirmConversationServerCreation:] */

void FUN_10509829c(void)

{
  return;
}



/* Entry: 1050982a0; end: 10509831b; -[SCArroyoProfileChatMessagesUpdateTracker didConversationReset:messages:] */

void FUN_1050982a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7a080(uVar2,param_2,uVar1,param_4);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10509831c; end: 105098327; -[SCArroyoProfileChatMessagesUpdateTracker .cxx_destruct] */

void FUN_10509831c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105098328; end: 1050984eb; -[SCNMessagingMessage isAttachmentMessage] */

bool FUN_105098328(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22ac80();
  _objc_release(uVar2);
  if ((int)uVar3 == 7) {
    bVar1 = true;
  }
  else {
    uVar2 = param_1;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf0e740();
    _objc_release(uVar2);
    bVar1 = false;
    if (uVar3 != 0) {
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      plStack_110 = (long *)0x0;
      uVar2 = param_1;
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf0e720();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar3;
      func_0x00010bf52a60(uVar3,param_2,&uStack_120,auStack_d8,0x10);
      bVar1 = false;
      if (uVar2 != 0) {
        lVar7 = *plStack_110;
        do {
          uVar8 = 0;
          do {
            if (*plStack_110 != lVar7) {
              _objc_enumerationMutation(uVar3);
            }
            lVar6 = *(long *)(lStack_118 + uVar8 * 8);
            lVar4 = lVar6;
            func_0x00010bdc2c40();
            _objc_retainAutoreleasedReturnValue();
            if (lVar4 != 0) {
              _objc_release();
LAB_10509849c:
              bVar1 = true;
              goto LAB_1050984a0;
            }
            func_0x00010c0c4180();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar6 != 0) goto LAB_10509849c;
            uVar8 = uVar8 + 1;
          } while (uVar2 != uVar8);
          uVar2 = uVar3;
          func_0x00010bf52a60(uVar3,param_2,&uStack_120,auStack_d8,0x10);
        } while (uVar2 != 0);
        bVar1 = false;
      }
LAB_1050984a0:
      _objc_release(uVar3);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return bVar1;
  }
  ___stack_chk_fail();
  uVar2 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf9e280();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    uVar8 = uVar2;
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010c245420();
    _objc_release(uVar8);
    _objc_release(uVar3);
    if (uVar5 != 0) {
      uVar3 = uVar2;
      func_0x00010bf9e280();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c245400();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar3);
      uVar3 = uVar5;
      func_0x00010bfd7640();
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) {
        bVar1 = false;
        goto LAB_105098604;
      }
    }
  }
  uVar3 = param_1;
  func_0x00010c06e580();
  if (((uVar3 & 1) == 0) && (func_0x00010c07ea80(), (param_1 & 1) == 0)) {
    uVar3 = uVar2;
    func_0x00010c22a700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c22ac80();
    bVar1 = (int)uVar8 == 8;
    _objc_release(uVar3);
  }
  else {
    bVar1 = true;
  }
LAB_105098604:
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 1050984ec; end: 105098623; -[SCNMessagingMessage isProfileMediaMessage] */

bool FUN_1050984ec(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = param_1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf9e280();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 != 0) {
    uVar4 = uVar2;
    func_0x00010bf9e280();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c245420();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (uVar5 != 0) {
      uVar3 = uVar2;
      func_0x00010bf9e280();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c245400();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar3);
      uVar3 = uVar5;
      func_0x00010bfd7640();
      _objc_release(uVar5);
      if ((uVar3 & 1) != 0) {
        bVar1 = false;
        goto LAB_105098604;
      }
    }
  }
  uVar3 = param_1;
  func_0x00010c06e580();
  if (((uVar3 & 1) == 0) && (func_0x00010c07ea80(), (param_1 & 1) == 0)) {
    uVar3 = uVar2;
    func_0x00010c22a700(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c22ac80();
    bVar1 = (int)uVar4 == 8;
    _objc_release(uVar3);
  }
  else {
    bVar1 = true;
  }
LAB_105098604:
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 105098624; end: 1050986e7;  */

void FUN_105098624(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c246ca0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110865688);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = lVar2;
    func_0x00010bf6e760(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0cb5a0();
    func_0x00010c0df7c0(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1050986e8; end: 1050987cb;  */

undefined * FUN_1050986e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010bf6e760(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb5a0();
  func_0x00010c0df7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf6e760(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0cb5a0(uVar2);
  func_0x00010c0df7c0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf433a0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  return puVar4;
}



/* Entry: 1050987cc; end: 10509883f; -[SCGrapheneChatProfileMetric2 init] */

undefined1 * FUN_1050987cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e5ea8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105098840; end: 105098a5b;  */

void FUN_105098840(double param_1,long param_2,char *param_3,undefined1 *param_4,undefined8 *param_5
                  ,undefined1 *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined8 *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar6 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  puVar5 = param_4;
  puVar8 = (undefined1 *)param_5;
  puVar10 = param_6;
  _objc_retain(param_3);
  puVar13 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_88,pcVar1);
    param_4 = auStack_a0;
    unaff_x24 = auStack_70;
    pcVar1 = unaff_x26;
    if ((int)param_5 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    puVar13 = auStack_a0;
    puVar5 = (undefined1 *)puVar6;
    puVar8 = param_6;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      param_5 = &uStack_c0;
    } while (lVar11 != -0x48);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_c8 = FUN_105098a5c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puVar7 = puVar5;
  puVar9 = puVar8;
  pcStack_110 = unaff_x26;
  pcStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = (undefined1 *)param_5;
  puStack_e8 = puVar13;
  pcStack_e0 = pcVar2;
  pcStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    pcVar2 = "true";
    if ((int)puVar5 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_148,pcVar2);
    pcVar2 = "true";
    if ((int)puVar8 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_130,pcVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    pcVar4 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108656f8,&uStack_180,puVar10);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar11 = 0;
    puVar7 = (undefined1 *)puVar6;
    puVar9 = puVar10;
    do {
      if ((&cStack_119)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x48);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    FUN_105098a5c(pcVar2,pcVar4,puVar7,puVar9,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar4);
  return;
}



/* Entry: 105098a5c; end: 105098c77;  */

void FUN_105098a5c(double param_1,long param_2,char *param_3,undefined1 *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  puVar3 = param_4;
  uVar5 = param_5;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    pcVar1 = "true";
    if ((int)param_5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108656f8,&uStack_c0,param_6);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar6 = 0;
    puVar3 = (undefined1 *)puVar4;
    uVar5 = param_6;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x48);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    FUN_105098a5c(pcVar2,pcVar1,puVar3,uVar5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 105098c78; end: 105098cfb;  */

void FUN_105098c78(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_105098a5c(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105098cfc; end: 105098f17;  */

void FUN_105098cfc(double param_1,long param_2,char *param_3,undefined1 *param_4,undefined8 *param_5
                  ,undefined1 *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined8 *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined1 auStack_520 [24];
  undefined1 auStack_508 [24];
  undefined8 auStack_4f0 [2];
  char cStack_4d9;
  long lStack_4d8;
  char *pcStack_4d0;
  char *pcStack_4c8;
  undefined8 *puStack_4c0;
  undefined1 *puStack_4b8;
  undefined1 *puStack_4b0;
  undefined1 *puStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined8 auStack_430 [2];
  char cStack_419;
  long lStack_418;
  char *pcStack_410;
  char *pcStack_408;
  undefined8 *puStack_400;
  undefined1 *puStack_3f8;
  undefined1 *puStack_3f0;
  undefined1 *puStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  char *pcStack_350;
  char *pcStack_348;
  undefined8 *puStack_340;
  undefined1 *puStack_338;
  undefined1 *puStack_330;
  undefined1 *puStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  char *pcStack_290;
  char *pcStack_288;
  undefined8 *puStack_280;
  undefined1 *puStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar7 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  puVar6 = param_4;
  puVar12 = param_5;
  puVar10 = param_6;
  _objc_retain(param_3);
  puVar18 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar17 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_88,pcVar1);
    param_4 = auStack_a0;
    unaff_x24 = auStack_70;
    pcVar1 = unaff_x26;
    if ((int)param_5 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar16 = 0;
    puVar18 = auStack_a0;
    puVar6 = (undefined1 *)puVar7;
    puVar12 = (undefined8 *)param_6;
    do {
      if ((&cStack_59)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      param_5 = &uStack_c0;
    } while (lVar16 != -0x48);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_c8 = FUN_105098f18;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  puVar8 = puVar6;
  puVar7 = puVar12;
  puVar13 = puVar10;
  pcStack_110 = unaff_x26;
  pcStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = (undefined1 *)param_5;
  puStack_e8 = puVar18;
  pcStack_e0 = pcVar2;
  pcStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  puVar18 = (undefined1 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar17 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar2 = unaff_x26;
    if ((int)puVar6 == 0) {
      pcVar2 = unaff_x25;
    }
    func_0x00010002b838(auStack_148,pcVar2);
    puVar6 = auStack_160;
    unaff_x24 = auStack_130;
    pcVar2 = unaff_x26;
    if ((int)puVar12 == 0) {
      pcVar2 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    pcVar5 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar16 = 0;
    puVar18 = auStack_160;
    puVar8 = (undefined1 *)puVar9;
    puVar7 = (undefined8 *)puVar10;
    do {
      if ((&cStack_119)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar12 = &uStack_180;
    } while (lVar16 != -0x48);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  puVar11 = &uStack_240;
  pcStack_188 = FUN_105099134;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  puVar10 = puVar8;
  puVar9 = puVar7;
  puVar14 = puVar13;
  pcStack_1d0 = unaff_x26;
  pcStack_1c8 = unaff_x25;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar6;
  puStack_1b0 = (undefined1 *)puVar12;
  puStack_1a8 = puVar18;
  pcStack_1a0 = pcVar2;
  pcStack_198 = pcVar1;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar5);
  puVar18 = (undefined1 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar17 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_220,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)puVar8 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_208,pcVar1);
    puVar8 = auStack_220;
    unaff_x24 = auStack_1f0;
    pcVar1 = unaff_x26;
    if ((int)puVar7 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    pcVar3 = "";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar16 = 0;
    puVar18 = auStack_220;
    puVar10 = (undefined1 *)puVar11;
    puVar9 = (undefined8 *)puVar13;
    do {
      if ((&cStack_1d9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar7 = &uStack_240;
    } while (lVar16 != -0x48);
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  puVar11 = &uStack_300;
  pcStack_248 = FUN_105099350;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar3;
  puVar6 = puVar10;
  puVar12 = puVar9;
  puVar13 = puVar14;
  pcStack_290 = unaff_x26;
  pcStack_288 = unaff_x25;
  puStack_280 = unaff_x24;
  puStack_278 = puVar8;
  puStack_270 = (undefined1 *)puVar7;
  puStack_268 = puVar18;
  pcStack_260 = pcVar1;
  pcStack_258 = pcVar5;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar3);
  puVar18 = (undefined1 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar17 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_2e0,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)puVar10 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_2c8,pcVar1);
    puVar10 = auStack_2e0;
    unaff_x24 = auStack_2b0;
    pcVar1 = unaff_x26;
    if ((int)puVar9 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_298,3);
    pcVar2 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar16 = 0;
    puVar18 = auStack_2e0;
    puVar6 = (undefined1 *)puVar11;
    puVar12 = (undefined8 *)puVar14;
    do {
      if ((&cStack_299)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar9 = &uStack_300;
    } while (lVar16 != -0x48);
  }
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  puVar11 = &uStack_3c0;
  pcStack_308 = FUN_10509956c;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  puVar8 = puVar6;
  puVar7 = puVar12;
  puVar14 = puVar13;
  pcStack_350 = unaff_x26;
  pcStack_348 = unaff_x25;
  puStack_340 = unaff_x24;
  puStack_338 = puVar10;
  puStack_330 = (undefined1 *)puVar9;
  puStack_328 = puVar18;
  pcStack_320 = pcVar1;
  pcStack_318 = pcVar3;
  pppuStack_310 = &pppuStack_250;
  _objc_retain(pcVar2);
  puVar18 = (undefined1 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar17 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_3a0,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)puVar6 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_388,pcVar1);
    puVar6 = auStack_3a0;
    unaff_x24 = auStack_370;
    pcVar1 = unaff_x26;
    if ((int)puVar12 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_358,3);
    pcVar5 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    lVar16 = 0;
    puVar18 = auStack_3a0;
    puVar8 = (undefined1 *)puVar11;
    puVar7 = (undefined8 *)puVar13;
    do {
      if ((&cStack_359)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar12 = &uStack_3c0;
    } while (lVar16 != -0x48);
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  puVar9 = &uStack_480;
  pcStack_3c8 = FUN_105099788;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  puVar10 = puVar8;
  puVar13 = (undefined1 *)puVar7;
  puVar15 = puVar14;
  pcStack_410 = unaff_x26;
  pcStack_408 = unaff_x25;
  puStack_400 = unaff_x24;
  puStack_3f8 = puVar6;
  puStack_3f0 = (undefined1 *)puVar12;
  puStack_3e8 = puVar18;
  pcStack_3e0 = pcVar1;
  pcStack_3d8 = pcVar2;
  pppuStack_3d0 = &pppuStack_310;
  _objc_retain(pcVar5);
  puVar18 = (undefined1 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar17 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_460,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)puVar8 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_448,pcVar1);
    puVar8 = auStack_460;
    unaff_x24 = auStack_430;
    pcVar1 = unaff_x26;
    if ((int)puVar7 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_480 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_418,3);
    pcVar3 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_468 = (undefined1 *)&uStack_480;
    func_0x00010007e5dc(&puStack_468);
    lVar16 = 0;
    puVar18 = auStack_460;
    puVar10 = (undefined1 *)puVar9;
    puVar13 = puVar14;
    do {
      if ((&cStack_419)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_430 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar7 = &uStack_480;
    } while (lVar16 != -0x48);
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  puVar12 = &uStack_540;
  pcStack_488 = FUN_1050999a4;
  lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar3;
  puVar6 = puVar10;
  puVar14 = puVar13;
  pcStack_4d0 = unaff_x26;
  pcStack_4c8 = unaff_x25;
  puStack_4c0 = unaff_x24;
  puStack_4b8 = puVar8;
  puStack_4b0 = (undefined1 *)puVar7;
  puStack_4a8 = puVar18;
  pcStack_4a0 = pcVar1;
  pcStack_498 = pcVar5;
  pppuStack_490 = &pppuStack_3d0;
  _objc_retain(pcVar3);
  if (pcVar4 != (char *)0x0) {
    plVar17 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_520,pcVar1);
    pcVar1 = "true";
    if ((int)puVar10 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_508,pcVar1);
    pcVar1 = "true";
    if ((int)puVar13 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_4f0,pcVar1);
    uStack_540 = 0;
    uStack_538 = 0;
    uStack_530 = 0;
    func_0x00010007e1e8(&uStack_540,auStack_520,&lStack_4d8,3);
    pcVar2 = "\x01";
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110865928,&uStack_540,puVar15);
    puStack_528 = (undefined1 *)&uStack_540;
    func_0x00010007e5dc(&puStack_528);
    lVar16 = 0;
    puVar6 = (undefined1 *)puVar12;
    puVar14 = puVar15;
    do {
      if ((&cStack_4d9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_4f0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x48);
  }
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  __Unwind_Resume();
  _objc_retain(pcVar2);
  if (pcVar1 != (char *)0x0) {
    FUN_1050999a4(pcVar1,pcVar2,puVar6,puVar14,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
  return;
}



/* Entry: 105098f18; end: 105099133;  */

void FUN_105098f18(double param_1,long param_2,char *param_3,undefined1 *param_4,undefined8 *param_5
                  ,undefined1 *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined8 *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined1 auStack_460 [24];
  undefined1 auStack_448 [24];
  undefined8 auStack_430 [2];
  char cStack_419;
  long lStack_418;
  char *pcStack_410;
  char *pcStack_408;
  undefined8 *puStack_400;
  undefined1 *puStack_3f8;
  undefined1 *puStack_3f0;
  undefined1 *puStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 ***pppuStack_3d0;
  code *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  char *pcStack_350;
  char *pcStack_348;
  undefined8 *puStack_340;
  undefined1 *puStack_338;
  undefined1 *puStack_330;
  undefined1 *puStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  char *pcStack_290;
  char *pcStack_288;
  undefined8 *puStack_280;
  undefined1 *puStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar7 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  puVar6 = param_4;
  puVar12 = param_5;
  puVar10 = param_6;
  _objc_retain(param_3);
  puVar18 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar17 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_88,pcVar1);
    param_4 = auStack_a0;
    unaff_x24 = auStack_70;
    pcVar1 = unaff_x26;
    if ((int)param_5 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar16 = 0;
    puVar18 = auStack_a0;
    puVar6 = (undefined1 *)puVar7;
    puVar12 = (undefined8 *)param_6;
    do {
      if ((&cStack_59)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      param_5 = &uStack_c0;
    } while (lVar16 != -0x48);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_c8 = FUN_105099134;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  puVar8 = puVar6;
  puVar7 = puVar12;
  puVar13 = puVar10;
  pcStack_110 = unaff_x26;
  pcStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = (undefined1 *)param_5;
  puStack_e8 = puVar18;
  pcStack_e0 = pcVar2;
  pcStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  puVar18 = (undefined1 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar17 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar2 = unaff_x26;
    if ((int)puVar6 == 0) {
      pcVar2 = unaff_x25;
    }
    func_0x00010002b838(auStack_148,pcVar2);
    puVar6 = auStack_160;
    unaff_x24 = auStack_130;
    pcVar2 = unaff_x26;
    if ((int)puVar12 == 0) {
      pcVar2 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    pcVar5 = "";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar16 = 0;
    puVar18 = auStack_160;
    puVar8 = (undefined1 *)puVar9;
    puVar7 = (undefined8 *)puVar10;
    do {
      if ((&cStack_119)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar12 = &uStack_180;
    } while (lVar16 != -0x48);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  puVar11 = &uStack_240;
  pcStack_188 = FUN_105099350;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  puVar10 = puVar8;
  puVar9 = puVar7;
  puVar14 = puVar13;
  pcStack_1d0 = unaff_x26;
  pcStack_1c8 = unaff_x25;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar6;
  puStack_1b0 = (undefined1 *)puVar12;
  puStack_1a8 = puVar18;
  pcStack_1a0 = pcVar2;
  pcStack_198 = pcVar1;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar5);
  puVar18 = (undefined1 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar17 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_220,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)puVar8 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_208,pcVar1);
    puVar8 = auStack_220;
    unaff_x24 = auStack_1f0;
    pcVar1 = unaff_x26;
    if ((int)puVar7 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    pcVar3 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar16 = 0;
    puVar18 = auStack_220;
    puVar10 = (undefined1 *)puVar11;
    puVar9 = (undefined8 *)puVar13;
    do {
      if ((&cStack_1d9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar7 = &uStack_240;
    } while (lVar16 != -0x48);
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  puVar11 = &uStack_300;
  pcStack_248 = FUN_10509956c;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar3;
  puVar6 = puVar10;
  puVar12 = puVar9;
  puVar13 = puVar14;
  pcStack_290 = unaff_x26;
  pcStack_288 = unaff_x25;
  puStack_280 = unaff_x24;
  puStack_278 = puVar8;
  puStack_270 = (undefined1 *)puVar7;
  puStack_268 = puVar18;
  pcStack_260 = pcVar1;
  pcStack_258 = pcVar5;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar3);
  puVar18 = (undefined1 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar17 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_2e0,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)puVar10 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_2c8,pcVar1);
    puVar10 = auStack_2e0;
    unaff_x24 = auStack_2b0;
    pcVar1 = unaff_x26;
    if ((int)puVar9 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_298,3);
    pcVar2 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar16 = 0;
    puVar18 = auStack_2e0;
    puVar6 = (undefined1 *)puVar11;
    puVar12 = (undefined8 *)puVar14;
    do {
      if ((&cStack_299)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar9 = &uStack_300;
    } while (lVar16 != -0x48);
  }
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  puVar7 = &uStack_3c0;
  pcStack_308 = FUN_105099788;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  puVar8 = puVar6;
  puVar14 = (undefined1 *)puVar12;
  puVar15 = puVar13;
  pcStack_350 = unaff_x26;
  pcStack_348 = unaff_x25;
  puStack_340 = unaff_x24;
  puStack_338 = puVar10;
  puStack_330 = (undefined1 *)puVar9;
  puStack_328 = puVar18;
  pcStack_320 = pcVar1;
  pcStack_318 = pcVar3;
  pppuStack_310 = &pppuStack_250;
  _objc_retain(pcVar2);
  puVar18 = (undefined1 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar17 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_3a0,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)puVar6 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_388,pcVar1);
    puVar6 = auStack_3a0;
    unaff_x24 = auStack_370;
    pcVar1 = unaff_x26;
    if ((int)puVar12 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_358,3);
    pcVar5 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    lVar16 = 0;
    puVar18 = auStack_3a0;
    puVar8 = (undefined1 *)puVar7;
    puVar14 = puVar13;
    do {
      if ((&cStack_359)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar12 = &uStack_3c0;
    } while (lVar16 != -0x48);
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  puVar7 = &uStack_480;
  pcStack_3c8 = FUN_1050999a4;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  puVar10 = puVar8;
  puVar13 = puVar14;
  pcStack_410 = unaff_x26;
  pcStack_408 = unaff_x25;
  puStack_400 = unaff_x24;
  puStack_3f8 = puVar6;
  puStack_3f0 = (undefined1 *)puVar12;
  puStack_3e8 = puVar18;
  pcStack_3e0 = pcVar1;
  pcStack_3d8 = pcVar2;
  pppuStack_3d0 = &pppuStack_310;
  _objc_retain(pcVar5);
  if (pcVar4 != (char *)0x0) {
    plVar17 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_460,pcVar1);
    pcVar1 = "true";
    if ((int)puVar8 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_448,pcVar1);
    pcVar1 = "true";
    if ((int)puVar14 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_430,pcVar1);
    uStack_480 = 0;
    uStack_478 = 0;
    uStack_470 = 0;
    func_0x00010007e1e8(&uStack_480,auStack_460,&lStack_418,3);
    pcVar3 = "\x01";
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110865928,&uStack_480,puVar15);
    puStack_468 = (undefined1 *)&uStack_480;
    func_0x00010007e5dc(&puStack_468);
    lVar16 = 0;
    puVar10 = (undefined1 *)puVar7;
    puVar13 = puVar15;
    do {
      if ((&cStack_419)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_430 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x48);
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  __Unwind_Resume();
  _objc_retain(pcVar3);
  if (pcVar1 != (char *)0x0) {
    FUN_1050999a4(pcVar1,pcVar3,puVar10,puVar13,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
  return;
}



/* Entry: 105099134; end: 10509934f;  */

void FUN_105099134(double param_1,long param_2,char *param_3,undefined1 *param_4,undefined8 *param_5
                  ,undefined1 *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined8 *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  char *pcStack_350;
  char *pcStack_348;
  undefined8 *puStack_340;
  undefined1 *puStack_338;
  undefined1 *puStack_330;
  undefined1 *puStack_328;
  char *pcStack_320;
  char *pcStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  char *pcStack_290;
  char *pcStack_288;
  undefined8 *puStack_280;
  undefined1 *puStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar7 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  puVar6 = param_4;
  puVar12 = param_5;
  puVar10 = param_6;
  _objc_retain(param_3);
  puVar18 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar17 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_88,pcVar1);
    param_4 = auStack_a0;
    unaff_x24 = auStack_70;
    pcVar1 = unaff_x26;
    if ((int)param_5 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar16 = 0;
    puVar18 = auStack_a0;
    puVar6 = (undefined1 *)puVar7;
    puVar12 = (undefined8 *)param_6;
    do {
      if ((&cStack_59)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      param_5 = &uStack_c0;
    } while (lVar16 != -0x48);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_c8 = FUN_105099350;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  puVar8 = puVar6;
  puVar7 = puVar12;
  puVar13 = puVar10;
  pcStack_110 = unaff_x26;
  pcStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = (undefined1 *)param_5;
  puStack_e8 = puVar18;
  pcStack_e0 = pcVar2;
  pcStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  puVar18 = (undefined1 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar17 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar2 = unaff_x26;
    if ((int)puVar6 == 0) {
      pcVar2 = unaff_x25;
    }
    func_0x00010002b838(auStack_148,pcVar2);
    puVar6 = auStack_160;
    unaff_x24 = auStack_130;
    pcVar2 = unaff_x26;
    if ((int)puVar12 == 0) {
      pcVar2 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    pcVar5 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar16 = 0;
    puVar18 = auStack_160;
    puVar8 = (undefined1 *)puVar9;
    puVar7 = (undefined8 *)puVar10;
    do {
      if ((&cStack_119)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar12 = &uStack_180;
    } while (lVar16 != -0x48);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  puVar11 = &uStack_240;
  pcStack_188 = FUN_10509956c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  puVar10 = puVar8;
  puVar9 = puVar7;
  puVar14 = puVar13;
  pcStack_1d0 = unaff_x26;
  pcStack_1c8 = unaff_x25;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar6;
  puStack_1b0 = (undefined1 *)puVar12;
  puStack_1a8 = puVar18;
  pcStack_1a0 = pcVar2;
  pcStack_198 = pcVar1;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar5);
  puVar18 = (undefined1 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar17 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_220,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)puVar8 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_208,pcVar1);
    puVar8 = auStack_220;
    unaff_x24 = auStack_1f0;
    pcVar1 = unaff_x26;
    if ((int)puVar7 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    pcVar3 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar16 = 0;
    puVar18 = auStack_220;
    puVar10 = (undefined1 *)puVar11;
    puVar9 = (undefined8 *)puVar13;
    do {
      if ((&cStack_1d9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar7 = &uStack_240;
    } while (lVar16 != -0x48);
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  puVar12 = &uStack_300;
  pcStack_248 = FUN_105099788;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar3;
  puVar6 = puVar10;
  puVar13 = (undefined1 *)puVar9;
  puVar15 = puVar14;
  pcStack_290 = unaff_x26;
  pcStack_288 = unaff_x25;
  puStack_280 = unaff_x24;
  puStack_278 = puVar8;
  puStack_270 = (undefined1 *)puVar7;
  puStack_268 = puVar18;
  pcStack_260 = pcVar1;
  pcStack_258 = pcVar5;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar3);
  puVar18 = (undefined1 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar17 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_2e0,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)puVar10 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_2c8,pcVar1);
    puVar10 = auStack_2e0;
    unaff_x24 = auStack_2b0;
    pcVar1 = unaff_x26;
    if ((int)puVar9 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_298,3);
    pcVar2 = "\x02";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar16 = 0;
    puVar18 = auStack_2e0;
    puVar6 = (undefined1 *)puVar12;
    puVar13 = puVar14;
    do {
      if ((&cStack_299)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      puVar9 = &uStack_300;
    } while (lVar16 != -0x48);
  }
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  puVar12 = &uStack_3c0;
  pcStack_308 = FUN_1050999a4;
  lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar2;
  puVar8 = puVar6;
  puVar14 = puVar13;
  pcStack_350 = unaff_x26;
  pcStack_348 = unaff_x25;
  puStack_340 = unaff_x24;
  puStack_338 = puVar10;
  puStack_330 = (undefined1 *)puVar9;
  puStack_328 = puVar18;
  pcStack_320 = pcVar1;
  pcStack_318 = pcVar3;
  pppuStack_310 = &pppuStack_250;
  _objc_retain(pcVar2);
  if (pcVar4 != (char *)0x0) {
    plVar17 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar2);
    if (pcVar2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar2;
      _objc_retainAutorelease(pcVar2);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar2);
    func_0x00010002b838(auStack_3a0,pcVar1);
    pcVar1 = "true";
    if ((int)puVar6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_388,pcVar1);
    pcVar1 = "true";
    if ((int)puVar13 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_370,pcVar1);
    uStack_3c0 = 0;
    uStack_3b8 = 0;
    uStack_3b0 = 0;
    func_0x00010007e1e8(&uStack_3c0,auStack_3a0,&lStack_358,3);
    pcVar5 = "\x01";
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110865928,&uStack_3c0,puVar15);
    puStack_3a8 = (undefined1 *)&uStack_3c0;
    func_0x00010007e5dc(&puStack_3a8);
    lVar16 = 0;
    puVar8 = (undefined1 *)puVar12;
    puVar14 = puVar15;
    do {
      if ((&cStack_359)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_370 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x48);
  }
  pcVar1 = pcVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_358) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar2);
  _objc_release(pcVar2);
  __Unwind_Resume();
  _objc_retain(pcVar5);
  if (pcVar1 != (char *)0x0) {
    FUN_1050999a4(pcVar1,pcVar5,puVar8,puVar14,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
  return;
}



/* Entry: 105099350; end: 10509956b;  */

void FUN_105099350(double param_1,long param_2,char *param_3,undefined1 *param_4,undefined8 *param_5
                  ,undefined1 *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long *plVar16;
  undefined1 *puVar17;
  undefined8 *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined8 auStack_2b0 [2];
  char cStack_299;
  long lStack_298;
  char *pcStack_290;
  char *pcStack_288;
  undefined8 *puStack_280;
  undefined1 *puStack_278;
  undefined1 *puStack_270;
  undefined1 *puStack_268;
  char *pcStack_260;
  char *pcStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar7 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  puVar6 = param_4;
  puVar11 = param_5;
  puVar10 = param_6;
  _objc_retain(param_3);
  puVar17 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar16 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_88,pcVar1);
    param_4 = auStack_a0;
    unaff_x24 = auStack_70;
    pcVar1 = unaff_x26;
    if ((int)param_5 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar15 = 0;
    puVar17 = auStack_a0;
    puVar6 = (undefined1 *)puVar7;
    puVar11 = (undefined8 *)param_6;
    do {
      if ((&cStack_59)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      param_5 = &uStack_c0;
    } while (lVar15 != -0x48);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puVar9 = &uStack_180;
  pcStack_c8 = FUN_10509956c;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  puVar8 = puVar6;
  puVar7 = puVar11;
  puVar13 = puVar10;
  pcStack_110 = unaff_x26;
  pcStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = (undefined1 *)param_5;
  puStack_e8 = puVar17;
  pcStack_e0 = pcVar2;
  pcStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  puVar17 = (undefined1 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar16 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar2 = unaff_x26;
    if ((int)puVar6 == 0) {
      pcVar2 = unaff_x25;
    }
    func_0x00010002b838(auStack_148,pcVar2);
    puVar6 = auStack_160;
    unaff_x24 = auStack_130;
    pcVar2 = unaff_x26;
    if ((int)puVar11 == 0) {
      pcVar2 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    pcVar5 = "\x02";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar15 = 0;
    puVar17 = auStack_160;
    puVar8 = (undefined1 *)puVar9;
    puVar7 = (undefined8 *)puVar10;
    do {
      if ((&cStack_119)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      puVar11 = &uStack_180;
    } while (lVar15 != -0x48);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  puVar9 = &uStack_240;
  pcStack_188 = FUN_105099788;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  puVar10 = puVar8;
  puVar12 = (undefined1 *)puVar7;
  puVar14 = puVar13;
  pcStack_1d0 = unaff_x26;
  pcStack_1c8 = unaff_x25;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar6;
  puStack_1b0 = (undefined1 *)puVar11;
  puStack_1a8 = puVar17;
  pcStack_1a0 = pcVar2;
  pcStack_198 = pcVar1;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar5);
  puVar17 = (undefined1 *)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_220,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)puVar8 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_208,pcVar1);
    puVar8 = auStack_220;
    unaff_x24 = auStack_1f0;
    pcVar1 = unaff_x26;
    if ((int)puVar7 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    pcVar3 = "\x02";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar15 = 0;
    puVar17 = auStack_220;
    puVar10 = (undefined1 *)puVar9;
    puVar12 = puVar13;
    do {
      if ((&cStack_1d9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      puVar7 = &uStack_240;
    } while (lVar15 != -0x48);
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  puVar11 = &uStack_300;
  pcStack_248 = FUN_1050999a4;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar2 = pcVar3;
  puVar6 = puVar10;
  puVar13 = puVar12;
  pcStack_290 = unaff_x26;
  pcStack_288 = unaff_x25;
  puStack_280 = unaff_x24;
  puStack_278 = puVar8;
  puStack_270 = (undefined1 *)puVar7;
  puStack_268 = puVar17;
  pcStack_260 = pcVar1;
  pcStack_258 = pcVar5;
  pppuStack_250 = &ppuStack_190;
  _objc_retain(pcVar3);
  if (pcVar4 != (char *)0x0) {
    plVar16 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(auStack_2e0,pcVar1);
    pcVar1 = "true";
    if ((int)puVar10 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_2c8,pcVar1);
    pcVar1 = "true";
    if ((int)puVar12 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_2b0,pcVar1);
    uStack_300 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    func_0x00010007e1e8(&uStack_300,auStack_2e0,&lStack_298,3);
    pcVar2 = "\x01";
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110865928,&uStack_300,puVar14);
    puStack_2e8 = (undefined1 *)&uStack_300;
    func_0x00010007e5dc(&puStack_2e8);
    lVar15 = 0;
    puVar6 = (undefined1 *)puVar11;
    puVar13 = puVar14;
    do {
      if ((&cStack_299)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2b0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x48);
  }
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar3);
  _objc_release(pcVar3);
  __Unwind_Resume();
  _objc_retain(pcVar2);
  if (pcVar1 != (char *)0x0) {
    FUN_1050999a4(pcVar1,pcVar2,puVar6,puVar13,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
  return;
}



/* Entry: 10509956c; end: 105099787;  */

void FUN_10509956c(double param_1,long param_2,char *param_3,undefined1 *param_4,undefined8 *param_5
                  ,undefined1 *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  undefined8 *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  char *pcStack_1d0;
  char *pcStack_1c8;
  undefined8 *puStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined1 *puStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar7 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  puVar6 = param_4;
  puVar10 = param_5;
  puVar9 = param_6;
  _objc_retain(param_3);
  puVar16 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar15 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_88,pcVar1);
    param_4 = auStack_a0;
    unaff_x24 = auStack_70;
    pcVar1 = unaff_x26;
    if ((int)param_5 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    puVar16 = auStack_a0;
    puVar6 = (undefined1 *)puVar7;
    puVar10 = (undefined8 *)param_6;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      param_5 = &uStack_c0;
    } while (lVar14 != -0x48);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puVar7 = &uStack_180;
  pcStack_c8 = FUN_105099788;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  puVar8 = puVar6;
  puVar11 = (undefined1 *)puVar10;
  puVar13 = puVar9;
  pcStack_110 = unaff_x26;
  pcStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = (undefined1 *)param_5;
  puStack_e8 = puVar16;
  pcStack_e0 = pcVar2;
  pcStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  puVar16 = (undefined1 *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar15 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar2 = unaff_x26;
    if ((int)puVar6 == 0) {
      pcVar2 = unaff_x25;
    }
    func_0x00010002b838(auStack_148,pcVar2);
    puVar6 = auStack_160;
    unaff_x24 = auStack_130;
    pcVar2 = unaff_x26;
    if ((int)puVar10 == 0) {
      pcVar2 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    pcVar5 = "\x02";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar14 = 0;
    puVar16 = auStack_160;
    puVar8 = (undefined1 *)puVar7;
    puVar11 = puVar9;
    do {
      if ((&cStack_119)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
      puVar10 = &uStack_180;
    } while (lVar14 != -0x48);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar4 = pcVar2;
  __Unwind_Resume();
  puVar7 = &uStack_240;
  pcStack_188 = FUN_1050999a4;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar5;
  puVar9 = puVar8;
  puVar12 = puVar11;
  pcStack_1d0 = unaff_x26;
  pcStack_1c8 = unaff_x25;
  puStack_1c0 = unaff_x24;
  puStack_1b8 = puVar6;
  puStack_1b0 = (undefined1 *)puVar10;
  puStack_1a8 = puVar16;
  pcStack_1a0 = pcVar2;
  pcStack_198 = pcVar1;
  ppuStack_190 = &puStack_d0;
  _objc_retain(pcVar5);
  if (pcVar4 != (char *)0x0) {
    plVar15 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar5);
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar5;
      _objc_retainAutorelease(pcVar5);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar5);
    func_0x00010002b838(auStack_220,pcVar1);
    pcVar1 = "true";
    if ((int)puVar8 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_208,pcVar1);
    pcVar1 = "true";
    if ((int)puVar11 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_1f0,pcVar1);
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_230 = 0;
    func_0x00010007e1e8(&uStack_240,auStack_220,&lStack_1d8,3);
    pcVar3 = "\x01";
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110865928,&uStack_240,puVar13);
    puStack_228 = (undefined1 *)&uStack_240;
    func_0x00010007e5dc(&puStack_228);
    lVar14 = 0;
    puVar9 = (undefined1 *)puVar7;
    puVar12 = puVar13;
    do {
      if ((&cStack_1d9)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x48);
  }
  pcVar1 = pcVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar5);
  _objc_release(pcVar5);
  __Unwind_Resume();
  _objc_retain(pcVar3);
  if (pcVar1 != (char *)0x0) {
    FUN_1050999a4(pcVar1,pcVar3,puVar9,puVar12,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar3);
  return;
}



/* Entry: 105099788; end: 1050999a3;  */

void FUN_105099788(double param_1,long param_2,char *param_3,undefined1 *param_4,undefined8 *param_5
                  ,undefined1 *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined8 *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar6 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  puVar5 = param_4;
  puVar8 = (undefined1 *)param_5;
  puVar10 = param_6;
  _objc_retain(param_3);
  puVar13 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_88,pcVar1);
    param_4 = auStack_a0;
    unaff_x24 = auStack_70;
    pcVar1 = unaff_x26;
    if ((int)param_5 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    puVar13 = auStack_a0;
    puVar5 = (undefined1 *)puVar6;
    puVar8 = param_6;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      param_5 = &uStack_c0;
    } while (lVar11 != -0x48);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_c8 = FUN_1050999a4;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puVar7 = puVar5;
  puVar9 = puVar8;
  pcStack_110 = unaff_x26;
  pcStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = (undefined1 *)param_5;
  puStack_e8 = puVar13;
  pcStack_e0 = pcVar2;
  pcStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    pcVar2 = "true";
    if ((int)puVar5 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_148,pcVar2);
    pcVar2 = "true";
    if ((int)puVar8 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_130,pcVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    pcVar4 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110865928,&uStack_180,puVar10);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar11 = 0;
    puVar7 = (undefined1 *)puVar6;
    puVar9 = puVar10;
    do {
      if ((&cStack_119)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x48);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    FUN_1050999a4(pcVar2,pcVar4,puVar7,puVar9,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar4);
  return;
}



/* Entry: 1050999a4; end: 105099bbf;  */

void FUN_1050999a4(double param_1,long param_2,char *param_3,undefined1 *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  puVar3 = param_4;
  uVar5 = param_5;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    pcVar1 = "true";
    if ((int)param_5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110865928,&uStack_c0,param_6);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar6 = 0;
    puVar3 = (undefined1 *)puVar4;
    uVar5 = param_6;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x48);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    FUN_1050999a4(pcVar2,pcVar1,puVar3,uVar5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 105099bc0; end: 105099c43;  */

void FUN_105099bc0(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_1050999a4(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105099c44; end: 105099e5f;  */

void FUN_105099c44(double param_1,long param_2,char *param_3,undefined1 *param_4,undefined8 *param_5
                  ,undefined1 *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined8 *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined8 *puStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar6 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  puVar5 = param_4;
  puVar8 = (undefined1 *)param_5;
  puVar10 = param_6;
  _objc_retain(param_3);
  puVar13 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    unaff_x25 = "false";
    unaff_x26 = "true";
    pcVar1 = unaff_x26;
    if ((int)param_4 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(auStack_88,pcVar1);
    param_4 = auStack_a0;
    unaff_x24 = auStack_70;
    pcVar1 = unaff_x26;
    if ((int)param_5 == 0) {
      pcVar1 = unaff_x25;
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x02";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar11 = 0;
    puVar13 = auStack_a0;
    puVar5 = (undefined1 *)puVar6;
    puVar8 = param_6;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      param_5 = &uStack_c0;
    } while (lVar11 != -0x48);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puVar6 = &uStack_180;
  pcStack_c8 = FUN_105099e60;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puVar7 = puVar5;
  puVar9 = puVar8;
  pcStack_110 = unaff_x26;
  pcStack_108 = unaff_x25;
  puStack_100 = unaff_x24;
  puStack_f8 = param_4;
  puStack_f0 = (undefined1 *)param_5;
  puStack_e8 = puVar13;
  pcStack_e0 = pcVar2;
  pcStack_d8 = param_3;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    pcVar2 = "true";
    if ((int)puVar5 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_148,pcVar2);
    pcVar2 = "true";
    if ((int)puVar8 == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(auStack_130,pcVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    pcVar4 = "\x01";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108659c8,&uStack_180,puVar10);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar11 = 0;
    puVar7 = (undefined1 *)puVar6;
    puVar9 = puVar10;
    do {
      if ((&cStack_119)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x48);
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  __Unwind_Resume();
  _objc_retain(pcVar4);
  if (pcVar2 != (char *)0x0) {
    FUN_105099e60(pcVar2,pcVar4,puVar7,puVar9,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar4);
  return;
}



/* Entry: 105099e60; end: 10509a07b;  */

void FUN_105099e60(double param_1,long param_2,char *param_3,undefined1 *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  puVar3 = param_4;
  uVar5 = param_5;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    pcVar1 = "true";
    if ((int)param_4 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_88,pcVar1);
    pcVar1 = "true";
    if ((int)param_5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "\x01";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_1108659c8,&uStack_c0,param_6);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar6 = 0;
    puVar3 = (undefined1 *)puVar4;
    uVar5 = param_6;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x48);
  }
  pcVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    FUN_105099e60(pcVar2,pcVar1,puVar3,uVar5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 10509a07c; end: 10509a0ff;  */

void FUN_10509a07c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_105099e60(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10509a100; end: 10509a257; -[SCProfileChatMediaLoggingBasePlugin initWithSessionId:isGroupChat:openSource:grapheneServices:userBlizzardServices:] */

undefined1 *
FUN_10509a100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e5eb0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10509a258; end: 10509a25b; -[SCProfileChatMediaLoggingBasePlugin setPlaylistItemController:] */

void FUN_10509a258(void)

{
  return;
}



/* Entry: 10509a25c; end: 10509a25f; -[SCProfileChatMediaLoggingBasePlugin teardown] */

void FUN_10509a25c(void)

{
  return;
}



/* Entry: 10509a260; end: 10509a383; -[SCProfileChatMediaLoggingBasePlugin registeredEventsForOperaSession] */

void FUN_10509a260(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  ppuVar9 = &puStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_70 = puVar1;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_68 = puVar2;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_60 = puVar3;
  func_0x00010c0e9cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_58 = puVar4;
  func_0x00010bf17ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 5;
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  _objc_retain(uVar10);
  puVar2 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined1 *)ppuVar9;
  func_0x00010c0720c0(ppuVar9,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)puVar7 == 0) {
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined1 *)ppuVar9;
    func_0x00010c0720c0(ppuVar9,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)puVar7 != 0) {
      func_0x00010c0f5b20(*(undefined8 *)(puVar1 + 0x28));
      goto LAB_10509a508;
    }
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined1 *)ppuVar9;
    func_0x00010c0720c0(ppuVar9,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)puVar7 != 0) {
      func_0x00010c0f5b20(*(undefined8 *)(puVar1 + 0x20));
      func_0x00010be51960(puVar1,param_2,uVar10);
      goto LAB_10509a508;
    }
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010c0e9cc0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined1 *)ppuVar9;
    func_0x00010c0720c0(ppuVar9,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)puVar7 == 0) {
      puVar2 = PTR_PTR_1126b2330;
      func_0x00010bf17ae0(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined1 *)ppuVar9;
      func_0x00010c0720c0(ppuVar9,param_2,puVar2);
      _objc_release(puVar2);
      if ((int)puVar7 != 0) {
        func_0x00010c0f5b20(*(undefined8 *)(puVar1 + 0x30));
        func_0x00010be51900(puVar1,param_2,uVar10);
      }
      goto LAB_10509a508;
    }
    func_0x00010c137fe0(*(undefined8 *)(puVar1 + 0x30));
    uVar8 = *(undefined8 *)(puVar1 + 0x30);
  }
  else {
    func_0x00010c137fe0(*(undefined8 *)(puVar1 + 0x20));
    func_0x00010c137fe0(*(undefined8 *)(puVar1 + 0x28));
    func_0x00010c24d960(*(undefined8 *)(puVar1 + 0x20));
    *(long *)(puVar1 + 0x38) = *(long *)(puVar1 + 0x38) + 1;
    uVar11 = *(undefined8 *)(puVar1 + 0x48);
    uVar8 = uVar10;
    func_0x00010be36bc0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar11,param_2,uVar8);
    _objc_release(uVar8);
    puVar2 = PTR_PTR_1126b2340;
    uVar8 = uVar10;
    func_0x00010c118b40(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076c60(puVar2,param_2,uVar8);
    _objc_release(uVar8);
    if ((int)puVar2 == 0) goto LAB_10509a508;
    *(long *)(puVar1 + 0x40) = *(long *)(puVar1 + 0x40) + 1;
    uVar8 = *(undefined8 *)(puVar1 + 0x28);
  }
  func_0x00010c24d960(uVar8);
LAB_10509a508:
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar9);
  return;
}



/* Entry: 10509a384; end: 10509a5af; -[SCProfileChatMediaLoggingBasePlugin operaViewDidSendEvent:page:params:] */

void FUN_10509a384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 != 0) {
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x28));
      goto LAB_10509a508;
    }
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 != 0) {
      func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x20));
      func_0x00010be51960(param_1,param_2,param_4);
      goto LAB_10509a508;
    }
    puVar1 = PTR_PTR_1126b2330;
    func_0x00010c0e9cc0(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) {
      puVar1 = PTR_PTR_1126b2330;
      func_0x00010bf17ae0(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar1);
      _objc_release(puVar1);
      if ((int)uVar2 != 0) {
        func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x30));
        func_0x00010be51900(param_1,param_2,param_4);
      }
      goto LAB_10509a508;
    }
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x30));
    uVar2 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c24d960(*(undefined8 *)(param_1 + 0x20));
    *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = param_4;
    func_0x00010be36bc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3,param_2,uVar2);
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126b2340;
    uVar2 = param_4;
    func_0x00010c118b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c076c60(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    if ((int)puVar1 == 0) goto LAB_10509a508;
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
  }
  func_0x00010c24d960(uVar2);
LAB_10509a508:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10509a5b0; end: 10509a773; -[SCProfileChatMediaLoggingBasePlugin _logChatMediaViewWithPage:] */

void FUN_10509a5b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c13a660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b46f8;
  _objc_alloc_init(PTR_PTR_1126b46f8);
  func_0x00010c13ab00();
  _objc_release(param_3);
  func_0x00010c1e4560(puVar2);
  func_0x00010c1e44c0(puVar2);
  func_0x00010c17b7e0(puVar2);
  func_0x00010beed820(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c215780(puVar2);
  func_0x00010beed820(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c1bef60(puVar2);
  func_0x00010c0c6c20();
  func_0x00010c1c5440(puVar2);
  func_0x00010c1c7160(puVar2);
  func_0x00010c1c7320(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c293fc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfcdfa0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070a5d00();
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10509a774; end: 10509ab97; -[SCProfileChatMediaLoggingBasePlugin _logChatMediaSessionWithPage:] */

void FUN_10509a774(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  uVar8 = 4;
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar8 = 1;
  }
  uVar2 = 1;
  if (*(long *)(param_1 + 0x18) == 1) {
    uVar2 = 2;
  }
  uVar10 = 4;
  if (*(long *)(param_1 + 0x18) != 2) {
    uVar10 = uVar2;
  }
  puVar1 = PTR_PTR_1126b4700;
  _objc_alloc_init(PTR_PTR_1126b4700);
  func_0x00010c1e4560();
  func_0x00010c1e44c0(puVar1,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010c17b7e0(puVar1,param_2,uVar10);
  func_0x00010c1c5640(puVar1,param_2,*(undefined8 *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf529e0(uVar2);
  func_0x00010c1c5660(puVar1,param_2,uVar2);
  func_0x00010c1beec0(puVar1,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010beed820(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c215780(puVar1);
  func_0x00010c1c7320(puVar1,param_2,1);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c293fc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b3d60;
  func_0x00010c11a1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bb09328(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dc4318,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar2);
  uVar2 = uVar10;
  func_0x00010babd010(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dc45b8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfcdfa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c116880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126b3d60;
  func_0x00010c11a200(PTR_PTR_1126b3d60);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bb09328(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2ac460(puVar5,param_2,&PTR____CFConstantStringClassReference_110dc4318,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar2);
  uVar2 = uVar10;
  func_0x00010babd010(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dc45b8,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfcdfa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c116880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beed820(*(undefined8 *)(param_1 + 0x30));
  func_0x00010befc000(uVar3,param_2,puVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
  puVar7 = PTR_PTR_1126b3d60;
  func_0x00010c11a1e0(PTR_PTR_1126b3d60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bb09328(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dc4318,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar8);
  func_0x00010babd010(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar9;
  func_0x00010c2ac460(puVar9,param_2,&PTR____CFConstantStringClassReference_110dc45b8,uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfcdfa0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010c116880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9180();
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10509ab98; end: 10509ab9f; -[SCProfileChatMediaLoggingBasePlugin resolveChatMediaContentWithPage:] */

undefined8 FUN_10509ab98(void)

{
  return 0;
}



/* Entry: 10509aba0; end: 10509aba7; -[SCProfileChatMediaLoggingBasePlugin resolveMessageBodyTypeWithPage:] */

undefined8 FUN_10509aba0(void)

{
  return 0;
}



/* Entry: 10509aba8; end: 10509ac13; -[SCProfileChatMediaLoggingBasePlugin .cxx_destruct] */

void FUN_10509aba8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10509ac14; end: 10509ac2b;  */

void FUN_10509ac14(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc45d8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc45d8,
                      &PTR____CFConstantStringClassReference_110dc45f8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10509ac2c; end: 10509ad4f; -[SCProfileSavedMessagesFetchingMetricsTracker initWithGetMessagesMetric:getDataMetric:getLatencyMetric:grapheneRegistry:profileType:] */

undefined1 *
FUN_10509ac2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5eb8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = 0;
    puVar3 = PTR_PTR_1126b46f0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10509ad50; end: 10509ad77; -[SCProfileSavedMessagesFetchingMetricsTracker startSendingRequest] */

void FUN_10509ad50(long param_1)

{
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010c24d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_start_112671080);
  return;
}



/* Entry: 10509ad78; end: 10509af83; -[SCProfileSavedMessagesFetchingMetricsTracker receivedNumberOfMessages:numberOfData:hasMore:] */

void FUN_10509ad78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  func_0x00010c0f5b20(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c116880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar1);
  lVar3 = param_1;
  func_0x00010bdc6720(param_1,param_2,uVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfec320(uVar2,param_2,lVar3,param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar1);
  lVar4 = param_1;
  func_0x00010bdc6720(param_1,param_2,uVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bef9180(uVar2,param_2,lVar4,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar1);
  lVar5 = param_1;
  func_0x00010bdc6720(param_1,param_2,uVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfec320(uVar2,param_2,lVar5,param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf51e00(uVar1);
  lVar6 = param_1;
  func_0x00010bdc6720(param_1,param_2,uVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bef9180(uVar2,param_2,lVar6,param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf51e00(uVar1);
  lVar7 = param_1;
  func_0x00010bdc6720(param_1,param_2,uVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010beed820(*(undefined8 *)(param_1 + 0x38));
  func_0x00010befc000(uVar2,param_2,lVar7);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10509af84; end: 10509b03b; -[SCProfileSavedMessagesFetchingMetricsTracker _addCustomDimensions:hasMore:] */

void FUN_10509af84(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010bb09328(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110dc4318,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  uVar3 = uVar2;
  func_0x00010c2ac460(uVar2,param_2,&PTR____CFConstantStringClassReference_110dc4618,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10509b03c; end: 10509b08f; -[SCProfileSavedMessagesFetchingMetricsTracker .cxx_destruct] */

void FUN_10509b03c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10509b090; end: 10509b15b; -[SCProfileMessagingServices initWithProfileSavedMediaFetcher:profileSavedAttachmentsFetcher:profileChatMessagesUpdateTracker:] */

undefined1 *
FUN_10509b090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e5ec0;
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



/* Entry: 10509b15c; end: 10509b163; -[SCProfileMessagingServices profileSavedMediaFetcher] */

undefined8 FUN_10509b15c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10509b164; end: 10509b16b; -[SCProfileMessagingServices profileSavedAttachmentsFetcher] */

undefined8 FUN_10509b164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10509b16c; end: 10509b173; -[SCProfileMessagingServices profileChatMessagesUpdateTracker] */

undefined8 FUN_10509b16c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10509b174; end: 10509b1af; -[SCProfileMessagingServices .cxx_destruct] */

void FUN_10509b174(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10509b1b0; end: 10509b32b; -[SCProfileChatMessagesUpdateListenerAnnouncer description] */

void FUN_10509b1b0(long param_1)

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
  
  FUN_10509b32c(&plStack_60,param_1 + 0x48);
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



/* Entry: 10509b32c; end: 10509b38b;  */

void FUN_10509b32c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10509b38c; end: 10509b637; -[SCProfileChatMessagesUpdateListenerAnnouncer addListener:] */

undefined8 FUN_10509b38c(long param_1,undefined8 param_2,long param_3)

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
  *plVar3 = (long)&PTR_FUN_110865c38;
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
    FUN_10509b638(plVar10,auStack_90);
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
    FUN_10509b778(puVar8,&plStack_a0);
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
LAB_10509b540:
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
      goto LAB_10509b560;
    }
    for (lVar7 = *plVar6; lVar7 != lVar12; lVar7 = lVar7 + 8) {
      lVar5 = lVar7;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_10509b638(plVar10,lVar7);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_10509b638(plVar10,auStack_78);
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
    FUN_10509b778(puVar8,&plStack_88);
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
      goto LAB_10509b540;
    }
  }
  uVar9 = 1;
LAB_10509b560:
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



/* Entry: 10509b638; end: 10509b777;  */

void FUN_10509b638(long *param_1,long *param_2)

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
      FUN_10509bc8c();
LAB_10509b774:
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
      if (uVar7 >> 0x3d != 0) goto LAB_10509b774;
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



/* Entry: 10509b778; end: 10509b7bf;  */

void FUN_10509b778(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10509b7c0; end: 10509b9ef; -[SCProfileChatMessagesUpdateListenerAnnouncer removeListener:] */

void FUN_10509b7c0(long param_1,undefined8 param_2,long param_3)

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
  if (plVar6 == (long *)0x0) goto LAB_10509b974;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_10509b828;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    FUN_10509b778(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_10509b974;
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
LAB_10509b828:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110865c38;
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
          FUN_10509b638(plVar9,lVar7);
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
    FUN_10509b778(puVar8,&plStack_90);
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
    if (plStack_78 == (long *)0x0) goto LAB_10509b974;
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
LAB_10509b974:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10509b9f0; end: 10509bb17; -[SCProfileChatMessagesUpdateListenerAnnouncer didResetConversation:messages:] */

void FUN_10509b9f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_10509b32c(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf7a080(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10509bb18; end: 10509bc43; -[SCProfileChatMessagesUpdateListenerAnnouncer didUpdateConversation:updatedMessages:removedMessageIds:] */

void FUN_10509bb18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_50;
  long *plStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_10509b32c(&plStack_50,param_1 + 0x48);
  if (plStack_50 != (long *)0x0) {
    lVar2 = plStack_50[1];
    for (lVar6 = *plStack_50; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf7e140();
      _objc_release(lVar5);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10509bc44; end: 10509bc6b; -[SCProfileChatMessagesUpdateListenerAnnouncer .cxx_destruct] */

void FUN_10509bc44(long param_1)

{
  FUN_10509bca0(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 10509bc6c; end: 10509bc8b; -[SCProfileChatMessagesUpdateListenerAnnouncer .cxx_construct] */

void FUN_10509bc6c(long param_1)

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



/* Entry: 10509bc8c; end: 10509bc9f;  */

undefined * FUN_10509bc8c(void)

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



/* Entry: 10509bca0; end: 10509bcf7;  */

long FUN_10509bca0(long param_1)

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



/* Entry: 10509bcf8; end: 10509bd07;  */

void FUN_10509bcf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110865c38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10509bd08; end: 10509bd27;  */

void FUN_10509bd08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110865c38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10509bd28; end: 10509bd8f;  */

void FUN_10509bd28(long param_1)

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



/* Entry: 10509bd90; end: 10509bd93;  */

void FUN_10509bd90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10509bd94; end: 10509be8f; -[SCProfileFlatlandFriendProfileServices initWithRootViewCreatorFactory:transitionToViewStateSubject:updateScrollPositionYSubject:friendProfileScopeOptions:] */

undefined1 *
FUN_10509bd94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5ec8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10509be90; end: 10509be97; -[SCProfileFlatlandFriendProfileServices rootViewCreatorFactory] */

undefined8 FUN_10509be90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10509be98; end: 10509be9f; -[SCProfileFlatlandFriendProfileServices transitionToViewStateSubject] */

undefined8 FUN_10509be98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10509bea0; end: 10509bea7; -[SCProfileFlatlandFriendProfileServices updateScrollPositionYSubject] */

undefined8 FUN_10509bea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10509bea8; end: 10509beaf; -[SCProfileFlatlandFriendProfileServices friendProfileScopeOptions] */

undefined8 FUN_10509bea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10509beb0; end: 10509bef7; -[SCProfileFlatlandFriendProfileServices .cxx_destruct] */

void FUN_10509beb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10509bef8; end: 10509bf6b; -[SCProfileFlatlandGroupProfileServices initWithRootViewCreatorFactory:] */

undefined1 * FUN_10509bef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5ed0;
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



/* Entry: 10509bf6c; end: 10509bf73; -[SCProfileFlatlandGroupProfileServices rootViewCreatorFactory] */

undefined8 FUN_10509bf6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10509bf74; end: 10509bf7f; -[SCProfileFlatlandGroupProfileServices .cxx_destruct] */

void FUN_10509bf74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10509bf80; end: 10509c0a3; -[SCProfileFlatlandGroupProfileParams initWithParticipants:displayName:userIdToLastInteractedTimestamp:groupId:profileSessionId:] */

undefined1 *
FUN_10509bf80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e5ed8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10509c0a4; end: 10509c0c7; -[SCProfileFlatlandGroupProfileParams copyWithZone:] */

undefined8 FUN_10509c0a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10509c0c8; end: 10509c0cf; -[SCProfileFlatlandGroupProfileParams participants] */

undefined8 FUN_10509c0c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10509c0d0; end: 10509c0d7; -[SCProfileFlatlandGroupProfileParams displayName] */

undefined8 FUN_10509c0d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10509c0d8; end: 10509c0df; -[SCProfileFlatlandGroupProfileParams userIdToLastInteractedTimestamp] */

undefined8 FUN_10509c0d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10509c0e0; end: 10509c0e7; -[SCProfileFlatlandGroupProfileParams groupId] */

undefined8 FUN_10509c0e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10509c0e8; end: 10509c0ef; -[SCProfileFlatlandGroupProfileParams profileSessionId] */

undefined8 FUN_10509c0e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10509c0f0; end: 10509c143; -[SCProfileFlatlandGroupProfileParams .cxx_destruct] */

void FUN_10509c0f0(long param_1)

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



/* Entry: 10509c144; end: 10509c1b7; -[SCFriendshipProfileRouteActionsImpl initWithNotificationServices:] */

undefined1 * FUN_10509c144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5ee0;
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



/* Entry: 10509c1b8; end: 10509c257; -[SCFriendshipProfileRouteActionsImpl presentErrorStatusMessage] */

void FUN_10509c1b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0dc640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126afde0;
  FUN_10509de38();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf55ce0(puVar3,param_2,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c25f340(uVar2,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10509c258; end: 10509c263; -[SCFriendshipProfileRouteActionsImpl .cxx_destruct] */

void FUN_10509c258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10509c264; end: 10509c3b7; -[SCFriendshipProfileWorkflow initWithScope:router:snapchatterServices:conversationIdServices:snapProServices:circumstanceEngine:] */

undefined1 *
FUN_10509c264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e5ee8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10509c3b8; end: 10509c4af; -[SCFriendshipProfileWorkflow fetchPresentingDataFromSource:onSuccess:] */

void FUN_10509c3b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c25ebc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10509c4b0;
  puStack_70 = &UNK_110865c78;
  lStack_68 = param_1;
  uStack_58 = param_3;
  _objc_retain(param_4);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10509c528;
  puStack_a8 = &UNK_110865ca8;
  lStack_a0 = param_1;
  uStack_98 = param_4;
  uStack_90 = param_3;
  uStack_60 = param_4;
  _objc_retain(param_4);
  func_0x00010c0c00e0(uVar2,param_2,&puStack_88,&puStack_c0);
  _objc_release(uVar2);
  _objc_release(uStack_98);
  _objc_release(uStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10509c4b0; end: 10509c527;  */

void FUN_10509c4b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010be14200(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    func_0x00010bfa5bc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10509c528; end: 10509c537;  */

void FUN_10509c528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be14210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchSnapchatterFromSource_onSu_112562a20,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10509c538; end: 10509c673; -[SCFriendshipProfileWorkflow fetchCompleteSnapchatterWithOnSuccess:existingSnapchatter:] */

void FUN_10509c538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c244ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10509c674;
  puStack_78 = &UNK_110851620;
  uStack_70 = uVar1;
  uStack_68 = param_4;
  lStack_60 = param_1;
  uStack_58 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c2448c0(uVar3,param_2,uVar4,PTR___dispatch_main_q_11034be20,&puStack_90);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 10509c674; end: 10509c747;  */

void FUN_10509c674(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_2 == 0) {
    if (param_3 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
    }
    else {
      lVar1 = param_3;
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    func_0x00010c10c2e0(*(undefined8 *)(param_1 + 0x30));
    _objc_release(ppuVar2);
  }
  else {
    func_0x00010c10c2e0(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10509c748; end: 10509c89f; -[SCFriendshipProfileWorkflow _fetchSnapchatterFromSource:onSuccess:] */

void FUN_10509c748(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  puVar4 = puVar3;
  func_0x00010c09d7c0(uVar6);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  uVar6 = *(undefined8 *)(param_4 + 0x20);
  _objc_retain(puVar4);
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2e860(uVar6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10509c8a0; end: 10509c90b;  */

void FUN_10509c8a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be2e860(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10509c90c; end: 10509c91f; -[SCFriendshipProfileWorkflow _handlePublicInfoResult:error:onSuccess:] */

void FUN_10509c90c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  if ((param_3 != 0) && (param_4 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c10c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_presentFriendshipOrPublicProfile_112620ad8,param_3,param_5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf756f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didEncounterError_1125baf60);
  return;
}



/* Entry: 10509c920; end: 10509ca6f; -[SCFriendshipProfileWorkflow presentFriendshipOrPublicProfile:onSuccess:] */

void FUN_10509c920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c232000(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae810;
  _objc_opt_new();
  puVar3 = puVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c0e0ea0(uVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10509ca70;
  puStack_78 = &UNK_110865cd8;
  uStack_70 = param_1;
  uStack_68 = param_3;
  puStack_60 = puVar2;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10509ca70; end: 10509caaf;  */

void FUN_10509ca70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf1f3c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010be7b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s__presentFriendshipOrPublicProfil_11257c7e8,uVar2,param_2,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10509cab0; end: 10509cb83; -[SCFriendshipProfileWorkflow _shouldWrapViewControllerForFriendProfile] */

ulong FUN_10509cab0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0762a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  if (uVar1 == 0 || lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = uVar1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf4bb00();
    if ((uVar5 & 1) == 0) {
      uVar5 = uVar4;
      func_0x00010bf4bb00(uVar4,param_2,&PTR____CFConstantStringClassReference_110dc46d8);
    }
    else {
      uVar5 = 1;
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 10509cb84; end: 10509cc77; -[SCFriendshipProfileWorkflow _presentFriendshipOrPublicProfile:shouldPresentPublicProfile:subscription:onSuccess:] */

void FUN_10509cb84(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  func_0x00010bf86d80(param_5);
  puVar3 = PTR_PTR_1126b4708;
  if (param_4 == 0) {
    uVar2 = param_3;
    func_0x00010c242760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07bd60();
    _objc_release(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
      func_0x000108fab1cc();
      if (iVar1 != 0) {
        func_0x00010be134c0(param_1);
        goto LAB_10509cc58;
      }
    }
    func_0x00010be7b940(param_1);
  }
  else if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,param_3,1,0,0);
  }
LAB_10509cc58:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10509cc78; end: 10509ce17; -[SCFriendshipProfileWorkflow _fetchPublicProfileForSnapchatter:onSuccess:] */

void FUN_10509cc78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1176a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfd32a0(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10509ce18; end: 10509cf2b;  */

void FUN_10509ce18(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      func_0x00010be7b940();
      _objc_release(param_1);
    }
    else {
      _objc_copyWeak(auStack_38,param_1 + 0x30);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar3);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar2);
      func_0x00010c2a14c0(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10509cf2c; end: 10509d01b;  */

void FUN_10509cf2c(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_2 != 0) && (param_3 == 0)) {
    uVar1 = param_2;
    func_0x00010bf25000();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c07a1e0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained(param_1);
      uVar1 = param_2;
      func_0x00010bf25000(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfe5ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee0460(param_1);
      _objc_release(uVar2);
      _objc_release(uVar1);
      goto LAB_10509cff4;
    }
  }
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7b940();
LAB_10509cff4:
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10509d01c; end: 10509d373; -[SCFriendshipProfileWorkflow _updateSnapchatterWithPublicProfileId:snapchatter:onSuccess:] */

void FUN_10509d01c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  puVar1 = PTR_PTR_1126b15c8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c07a6a0();
  uVar6 = param_4;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bf8e9c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c06d560();
  uVar10 = param_4;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_4;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_4;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_4;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_4;
  func_0x00010c0d3e20();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_4;
  func_0x00010c08f840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c102000();
  uVar16 = param_4;
  func_0x00010c105520();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_4;
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_4;
  func_0x00010beef400();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_4;
  func_0x00010c105040();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_4;
  func_0x00010c1022a0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_4;
  func_0x00010c149b60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb80();
  _objc_release(param_4);
  func_0x00010c05c0e0(puVar1,param_2,uVar2,uVar3,uVar4,uVar5 & 0xffffffff,uVar6,uVar7,uVar8,
                      (char)uVar9);
  _objc_release(param_3);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010be7b940(param_1,param_2,puVar1,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


