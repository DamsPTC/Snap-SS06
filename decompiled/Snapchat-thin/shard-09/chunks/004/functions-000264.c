/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106cc64bc; end: 106cc64e3; -[SCTracingServicesCLIManager notificationsQueue] */

void FUN_106cc64bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cc64e4; end: 106cc650b; -[SCTracingServicesCLIManager CLITracingDirectory] */

void FUN_106cc64e4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106cc650c; end: 106cc6517; -[SCTracingServicesCLIManager installUncaughtExceptionHandler] */

void FUN_106cc650c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbc44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSSetUncaughtExceptionHandler_1103455e0)(FUN_106cc6518);
  return;
}



/* Entry: 106cc6518; end: 106cc6817;  */

undefined * FUN_106cc6518(undefined *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar15 = PTR_PTR_1126d20c8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar15;
  func_0x00010bdc1100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  puVar10 = puVar15;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  if (puVar5 != (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_opt_new();
    puVar7 = param_1;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010c121ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf06ba0(puVar6);
    func_0x00010bf06ba0(puVar6);
    func_0x00010bf06ba0(puVar6);
    puVar10 = param_1;
    func_0x00010bf282a0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar10;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar15 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar10);
        }
        func_0x00010c282800();
        func_0x00010bf06ba0(puVar6);
        puVar16 = puVar16 + 1;
      } while (puVar15 != puVar16);
      puVar15 = puVar10;
      func_0x00010bf52a60();
    }
    _objc_release(puVar10);
    puVar15 = puVar6;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar5;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar11;
    func_0x00010bf561e0(puVar16);
    _objc_release(puVar11);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  if (puVar4 == (undefined *)0x0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    uVar3 = 0;
    __dyld_get_image_header();
    __dyld_image_count();
    if (uVar3 != 0) {
      uVar17 = 0;
      do {
        uVar12 = uVar17;
        __dyld_get_image_name();
        if (uVar12 != 0) {
          uVar13 = uVar12;
          _strnlen();
          _strnstr(uVar12,"Snapchat",uVar13);
          if (uVar12 != 0) {
            __dyld_get_image_header();
            break;
          }
        }
        uVar1 = (int)uVar17 + 1;
        uVar17 = (ulong)uVar1;
      } while (uVar3 != uVar1);
    }
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar4;
    func_0x00010c0f5800(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar7;
    func_0x00010bf561e0(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar10);
  return puVar15;
}



/* Entry: 106cc6818; end: 106cc69bf; -[SCTracingServicesCLIManager writeLoadAddressToDirectory:] */

undefined * FUN_106cc6818(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  
  _objc_retain(param_3);
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  if (lVar3 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar2 = 0;
    __dyld_get_image_header();
    __dyld_image_count();
    if (uVar2 != 0) {
      uVar11 = 0;
      do {
        uVar4 = uVar11;
        __dyld_get_image_name();
        if (uVar4 != 0) {
          uVar5 = uVar4;
          _strnlen();
          _strnstr(uVar4,"Snapchat",uVar5);
          if (uVar4 != 0) {
            __dyld_get_image_header();
            break;
          }
        }
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulong)uVar1;
      } while (uVar2 != uVar1);
    }
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010c0f5800(lVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf561e0(puVar8);
    _objc_release(lVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  return puVar10;
}



/* Entry: 106cc69c0; end: 106cc6abf; -[SCTracingServicesCLIManager writeTraceData:toTracingDirectory:] */

undefined * FUN_106cc69c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  func_0x00010c25da80(puVar4,param_2,&UNK_10f3ce3dd);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bdc2c60(param_4,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar4);
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0f5800(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf561e0(puVar2,param_2,lVar3,param_3,0);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 106cc6ac0; end: 106cc6b63; -[SCTracingServicesCLIManager registerForCLITraceStart:] */

undefined4 FUN_106cc6ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106cc6b64;
  puStack_50 = &UNK_11096faa0;
  lStack_48 = param_1;
  uStack_40 = param_3;
  _objc_retain(param_3);
  _notify_register_dispatch(&UNK_10f3ce291,&uStack_34,uVar1,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return uStack_34;
}



/* Entry: 106cc6b64; end: 106cc6bbf;  */

void FUN_106cc6b64(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 1) != 0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))();
  if ((int)lVar1 == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18) = 1;
    puVar2 = &UNK_10f3ce3a6;
  }
  else {
    puVar2 = &UNK_10f3ce329;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__notify_post_11034c718)(puVar2);
  return;
}



/* Entry: 106cc6bc0; end: 106cc6c63; -[SCTracingServicesCLIManager registerForCLITraceStop:] */

undefined4 FUN_106cc6bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106cc6c64;
  puStack_50 = &UNK_11096faa0;
  lStack_48 = param_1;
  uStack_40 = param_3;
  _objc_retain(param_3);
  _notify_register_dispatch(&UNK_10f3ce2b4,&uStack_34,uVar1,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return uStack_34;
}



/* Entry: 106cc6c64; end: 106cc6cef;  */

void FUN_106cc6c64(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    (**(code **)(lVar1 + 0x10))();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar3 = &UNK_10f3ce351;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010c2be5e0(lVar2,param_2,lVar1,*(undefined8 *)(lVar2 + 0x10));
      puVar3 = &UNK_10f3ce300;
      if ((int)lVar2 == 0) {
        puVar3 = &UNK_10f3ce378;
      }
    }
    _notify_post(puVar3);
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 106cc6cf0; end: 106cc6cf7; -[SCTracingServicesCLIManager unregisterForCLITrace:] */

void FUN_106cc6cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__notify_cancel_11034c710)(param_3);
  return;
}



/* Entry: 106cc6cf8; end: 106cc6cff; -[SCTracingServicesCLIManager hasActiveTracingSession] */

undefined1 FUN_106cc6cf8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 106cc6d00; end: 106cc6d47; -[SCTracingServicesCLIManager dealloc] */

void FUN_106cc6d00(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _notify_cancel(*(undefined4 *)(param_1 + 0x1c));
  puStack_28 = PTR_PTR_1126f62d0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106cc6d48; end: 106cc6d77; -[SCTracingServicesCLIManager .cxx_destruct] */

void FUN_106cc6d48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc6d78; end: 106cc6deb; -[SCGrapheneTracesdkMetric2 init] */

undefined1 * FUN_106cc6d78(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f62d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106cc6dec; end: 106cc701b;  */

void FUN_106cc6dec(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar8 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = acStack_98;
    pcVar4 = acStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11096fad0,pcVar4,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_106cc701c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = pcVar1;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar3 != (char *)0x0) {
    plVar7 = *(long **)(pcVar3 + 8);
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
    func_0x00010002b838(auStack_100,pcVar2);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x00010007e1e8(&uStack_120,auStack_100,&lStack_e8,1);
    pcVar5 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11096fb20,&uStack_120,pcVar4);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x00010007e5dc(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  pcVar4 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar2 = pcVar4;
  __Unwind_Resume();
  puStack_148 = (undefined1 *)&uStack_160;
  pcStack_128 = FUN_106cc7190;
  if (pcVar2 != (char *)0x0) {
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    pcStack_140 = pcVar4;
    pcStack_138 = pcVar1;
    ppuStack_130 = &puStack_b0;
    (**(code **)(**(long **)(pcVar2 + 8) + 0x18))
              (*(long **)(pcVar2 + 8),&UNK_11096fb70,&uStack_160,pcVar5);
    func_0x00010007e5dc(&puStack_148);
  }
  return;
}



/* Entry: 106cc701c; end: 106cc718f;  */

void FUN_106cc701c(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11096fb20,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106cc7190;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_11096fb70,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106cc7190; end: 106cc7207;  */

void FUN_106cc7190(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11096fb70,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106cc7208; end: 106cc737b;  */

void FUN_106cc7208(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11096fbc0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_106cc737c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar4 = pcVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar7 = *(long **)(pcVar2 + 8);
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
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    pcVar4 = "";
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11096fc10,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_106cc74f0;
  if (pcVar3 != (char *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    pcStack_120 = pcVar2;
    pcStack_118 = pcVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_11096fc60,&uStack_140,pcVar4);
    func_0x00010007e5dc(&puStack_128);
  }
  return;
}



/* Entry: 106cc737c; end: 106cc74ef;  */

void FUN_106cc737c(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_11096fc10,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_106cc74f0;
  if (pcVar3 != (char *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    pcStack_a0 = pcVar2;
    pcStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(pcVar3 + 8) + 0x18))
              (*(long **)(pcVar3 + 8),&UNK_11096fc60,&uStack_c0,pcVar1);
    func_0x00010007e5dc(&puStack_a8);
  }
  return;
}



/* Entry: 106cc74f0; end: 106cc7567;  */

void FUN_106cc74f0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11096fc60,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106cc7568; end: 106cc75df;  */

void FUN_106cc7568(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11096fd00,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106cc75e0; end: 106cc7657;  */

void FUN_106cc75e0(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_11096fd50,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 106cc7658; end: 106cc76bf; +[TokenDistributionConfig descriptor] */

void FUN_106cc7658(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7d70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b30730,
                        &PTR____CFConstantStringClassReference_110e82738,&PTR_DAT_1131845e8,
                        &PTR_s_id_p_113184640,2,0x18,0x1c);
    puRam00000001136c7d70 = puVar1;
  }
  return;
}



/* Entry: 106cc76c0; end: 106cc7727; +[TokenBucketDistributionConfig descriptor] */

void FUN_106cc76c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7d78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b30780,
                        &PTR____CFConstantStringClassReference_110e82758,&PTR_DAT_1131845e8,
                        &PTR_DAT_113184700,3,0x20,0x1c);
    puRam00000001136c7d78 = puVar1;
  }
  return;
}



/* Entry: 106cc7728; end: 106cc778f; +[BaselineSamplingPolicy descriptor] */

void FUN_106cc7728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7d98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b308c0,
                        &PTR____CFConstantStringClassReference_110e827d8,&PTR_DAT_1131845e8,
                        &PTR_DAT_1131846c0,2,0x10,0x1c);
    puRam00000001136c7d98 = puVar1;
  }
  return;
}



/* Entry: 106cc7790; end: 106cc77f7; +[AndroidTraceConfig descriptor] */

void FUN_106cc7790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c7da0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b30910,
                        &PTR____CFConstantStringClassReference_110e827f8,&PTR_DAT_1131845e8,
                        &PTR_DAT_113184900,9,0x40,0x1c);
    puRam00000001136c7da0 = puVar1;
  }
  return;
}



/* Entry: 106cc77f8; end: 106cc789b; -[SCSnapServices initWithSnapSendEvents:contextualNotificationTriggerEvents:] */

undefined1 *
FUN_106cc77f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f62e8;
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



/* Entry: 106cc789c; end: 106cc78a3; -[SCSnapServices snapSendEvents] */

undefined8 FUN_106cc789c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc78a4; end: 106cc78ab; -[SCSnapServices contextualNotificationTriggerEvents] */

undefined8 FUN_106cc78a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc78ac; end: 106cc78db; -[SCSnapServices .cxx_destruct] */

void FUN_106cc78ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc78dc; end: 106cc7927; +[SCContextualNotificationTrigger chatExited] */

void FUN_106cc78dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2c48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106cc7928; end: 106cc796f; +[SCContextualNotificationTrigger snapSentFromFriendsFeed] */

void FUN_106cc7928(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2c48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106cc7970; end: 106cc79bb; +[SCContextualNotificationTrigger snapViewedOnFriendsFeed] */

void FUN_106cc7970(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c2c48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106cc79bc; end: 106cc79df; -[SCContextualNotificationTrigger copyWithZone:] */

undefined8 FUN_106cc79bc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106cc79e0; end: 106cc79e7; -[SCContextualNotificationTrigger hash] */

undefined8 FUN_106cc79e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc79e8; end: 106cc7a2b; -[SCContextualNotificationTrigger internalInit] */

void FUN_106cc79e8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f62f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106cc7a2c; end: 106cc7ab3; -[SCContextualNotificationTrigger isEqual:] */

bool FUN_106cc7a2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106cc7ab4; end: 106cc7b4f; -[SCContextualNotificationTrigger matchSnapSentFromFriendsFeed:snapViewedOnFriendsFeed:chatExited:] */

void FUN_106cc7ab4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  lVar1 = param_5;
  if ((((lVar2 == 2) || (lVar1 = param_4, lVar2 == 1)) || (lVar1 = param_3, lVar2 == 0)) &&
     (lVar1 != 0)) {
    (**(code **)(lVar1 + 0x10))();
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106cc7b50; end: 106cc7bd7; -[SCSnapSendEvent initWithRecipientIds:includesMyStory:] */

undefined1 *
FUN_106cc7b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f62f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc7bd8; end: 106cc7bfb; -[SCSnapSendEvent copyWithZone:] */

undefined8 FUN_106cc7bd8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106cc7bfc; end: 106cc7c67; -[SCSnapSendEvent hash] */

undefined8 * FUN_106cc7bfc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106cc7cec;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_106cc7cec;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_106cc7cec;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_106cc7cec:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 106cc7c68; end: 106cc7d07; -[SCSnapSendEvent isEqual:] */

long FUN_106cc7c68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106cc7cec;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_106cc7cec;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106cc7cec;
    }
  }
  lVar3 = 1;
LAB_106cc7cec:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106cc7d08; end: 106cc7d0f; -[SCSnapSendEvent recipientIds] */

undefined8 FUN_106cc7d08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc7d10; end: 106cc7d17; -[SCSnapSendEvent includesMyStory] */

undefined1 FUN_106cc7d10(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106cc7d18; end: 106cc7d23; -[SCSnapSendEvent .cxx_destruct] */

void FUN_106cc7d18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106cc7d24; end: 106cc7d97; -[SCBitmojiFashionNotificationServices initWithProvider:] */

undefined1 * FUN_106cc7d24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6300;
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



/* Entry: 106cc7d98; end: 106cc7d9f; -[SCBitmojiFashionNotificationServices provider] */

undefined8 FUN_106cc7d98(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc7da0; end: 106cc7dab; -[SCBitmojiFashionNotificationServices .cxx_destruct] */

void FUN_106cc7da0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc7dac; end: 106cc7ea7; -[SCBloopsStorySharingServices initWithBloopsStoryShareSender:bloopsStoryShareMediaPreparer:bloopsStoryShareMediaConverter:bloopsStoryConversationResolver:] */

undefined1 *
FUN_106cc7dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f6308;
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



/* Entry: 106cc7ea8; end: 106cc7eaf; -[SCBloopsStorySharingServices bloopsStoryShareSender] */

undefined8 FUN_106cc7ea8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc7eb0; end: 106cc7eb7; -[SCBloopsStorySharingServices bloopsStoryShareMediaPreparer] */

undefined8 FUN_106cc7eb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc7eb8; end: 106cc7ebf; -[SCBloopsStorySharingServices bloopsStoryShareMediaConverter] */

undefined8 FUN_106cc7eb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106cc7ec0; end: 106cc7ec7; -[SCBloopsStorySharingServices bloopsStoryConversationResolver] */

undefined8 FUN_106cc7ec0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106cc7ec8; end: 106cc7f0f; -[SCBloopsStorySharingServices .cxx_destruct] */

void FUN_106cc7ec8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc7f10; end: 106cc80af; -[SCBloopsStoryShareModel initWithCompositeStoryId:snapId:previewMedia:previewMediaMetadata:bloopsSelfiePosition:additionalText:conversations:platformAnalytics:] */

undefined1 *
FUN_106cc7f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f6310;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc80b0; end: 106cc80d3; -[SCBloopsStoryShareModel copyWithZone:] */

undefined8 FUN_106cc80b0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106cc80d4; end: 106cc8187; -[SCBloopsStoryShareModel hash] */

undefined8 * FUN_106cc80d4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  lStack_48 = (long)*(int *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar1;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106cc8290:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106cc829c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(int *)(puVar3 + 1) == *(int *)(param_3 + 1))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  puVar6 = (undefined8 *)puVar3[8];
                  if (puVar6 != (undefined8 *)param_3[8]) {
                    func_0x00010c071ae0();
                    goto LAB_106cc829c;
                  }
                  goto LAB_106cc8290;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106cc829c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106cc8188; end: 106cc82b7; -[SCBloopsStoryShareModel isEqual:] */

long FUN_106cc8188(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106cc8290:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106cc829c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 8) == *(int *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if (lVar3 != *(long *)(param_3 + 0x40)) {
                    func_0x00010c071ae0();
                    goto LAB_106cc829c;
                  }
                  goto LAB_106cc8290;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106cc829c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106cc82b8; end: 106cc82bf; -[SCBloopsStoryShareModel compositeStoryId] */

undefined8 FUN_106cc82b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc82c0; end: 106cc82c7; -[SCBloopsStoryShareModel snapId] */

undefined8 FUN_106cc82c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106cc82c8; end: 106cc82cf; -[SCBloopsStoryShareModel previewMedia] */

undefined8 FUN_106cc82c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106cc82d0; end: 106cc82d7; -[SCBloopsStoryShareModel previewMediaMetadata] */

undefined8 FUN_106cc82d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106cc82d8; end: 106cc82df; -[SCBloopsStoryShareModel bloopsSelfiePosition] */

undefined4 FUN_106cc82d8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106cc82e0; end: 106cc82e7; -[SCBloopsStoryShareModel additionalText] */

undefined8 FUN_106cc82e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106cc82e8; end: 106cc82ef; -[SCBloopsStoryShareModel conversations] */

undefined8 FUN_106cc82e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106cc82f0; end: 106cc82f7; -[SCBloopsStoryShareModel platformAnalytics] */

undefined8 FUN_106cc82f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106cc82f8; end: 106cc8363; -[SCBloopsStoryShareModel .cxx_destruct] */

void FUN_106cc82f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106cc8364; end: 106cc840f; -[SCBloopsStoryShareRecipient initWithRecipientId:groupParticipants:] */

undefined1 *
FUN_106cc8364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6318;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc8410; end: 106cc8433; -[SCBloopsStoryShareRecipient copyWithZone:] */

undefined8 FUN_106cc8410(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106cc8434; end: 106cc84a7; -[SCBloopsStoryShareRecipient hash] */

undefined8 * FUN_106cc8434(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106cc8528:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106cc8534;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106cc8534;
        }
        goto LAB_106cc8528;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106cc8534:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106cc84a8; end: 106cc854f; -[SCBloopsStoryShareRecipient isEqual:] */

long FUN_106cc84a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106cc8528:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106cc8534;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106cc8534;
        }
        goto LAB_106cc8528;
      }
    }
    lVar3 = 0;
  }
LAB_106cc8534:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106cc8550; end: 106cc8557; -[SCBloopsStoryShareRecipient recipientId] */

undefined8 FUN_106cc8550(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc8558; end: 106cc855f; -[SCBloopsStoryShareRecipient groupParticipants] */

undefined8 FUN_106cc8558(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc8560; end: 106cc858f; -[SCBloopsStoryShareRecipient .cxx_destruct] */

void FUN_106cc8560(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc8590; end: 106cc8597; -[SCBloopsContextServices infoCardVCFactory] */

undefined8 FUN_106cc8590(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc8598; end: 106cc85a3; -[SCBloopsContextServices .cxx_destruct] */

void FUN_106cc8598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc85a4; end: 106cc85ab; -[SCLensStoryLensProcessingServices lensProcessingManager] */

undefined8 FUN_106cc85a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc85ac; end: 106cc85b3; -[SCLensStoryLensProcessingServices lensProcessingUIContainer] */

undefined8 FUN_106cc85ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc85b4; end: 106cc85bb; -[SCLensStoryLensProcessingServices lensProcessingUIGesturesManager] */

undefined8 FUN_106cc85b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106cc85bc; end: 106cc8603; -[SCLensStoryLensProcessingServices .cxx_destruct] */

void FUN_106cc85bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc8604; end: 106cc86a7; -[SCLensStoryLensLifeCycleObject initWithLensId:resultPromise:] */

undefined1 *
FUN_106cc8604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6330;
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



/* Entry: 106cc86a8; end: 106cc86cb; -[SCLensStoryLensLifeCycleObject copyWithZone:] */

undefined8 FUN_106cc86a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106cc86cc; end: 106cc873f; -[SCLensStoryLensLifeCycleObject hash] */

undefined8 * FUN_106cc86cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106cc87c0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106cc87cc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106cc87cc;
        }
        goto LAB_106cc87c0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106cc87cc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106cc8740; end: 106cc87e7; -[SCLensStoryLensLifeCycleObject isEqual:] */

long FUN_106cc8740(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106cc87c0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106cc87cc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106cc87cc;
        }
        goto LAB_106cc87c0;
      }
    }
    lVar3 = 0;
  }
LAB_106cc87cc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106cc87e8; end: 106cc87ef; -[SCLensStoryLensLifeCycleObject lensId] */

undefined8 FUN_106cc87e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc87f0; end: 106cc87f7; -[SCLensStoryLensLifeCycleObject resultPromise] */

undefined8 FUN_106cc87f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc87f8; end: 106cc8827; -[SCLensStoryLensLifeCycleObject .cxx_destruct] */

void FUN_106cc87f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc8828; end: 106cc8833; -[SCCameraNavigationServices .cxx_destruct] */

void FUN_106cc8828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc8834; end: 106cc883b; -[SCCommerceShoppingLensLaunchServices shoppingLensScopeLauncher] */

undefined8 FUN_106cc8834(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc883c; end: 106cc8843; -[SCCommerceShoppingLensLaunchServices shoppingLensLauncherScopeServices] */

undefined8 FUN_106cc883c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106cc8844; end: 106cc8873; -[SCCommerceShoppingLensLaunchServices .cxx_destruct] */

void FUN_106cc8844(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc8874; end: 106cc88e7; -[SCFriendsFeedMoreUnreadDataServices initWithFriendsFeedMoreUnreadProvider:] */

undefined1 * FUN_106cc8874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f6348;
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



/* Entry: 106cc88e8; end: 106cc88ef; -[SCFriendsFeedMoreUnreadDataServices friendsFeedMoreUnreadProvider] */

undefined8 FUN_106cc88e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106cc88f0; end: 106cc88fb; -[SCFriendsFeedMoreUnreadDataServices .cxx_destruct] */

void FUN_106cc88f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106cc88fc; end: 106cc89a7; -[SCFriendsFeedMoreUnreadVisibilityContext initWithShouldShow:count:] */

undefined1 *
FUN_106cc88fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f6350;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106cc89a8; end: 106cc89cb; -[SCFriendsFeedMoreUnreadVisibilityContext copyWithZone:] */

undefined8 FUN_106cc89a8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106cc89cc; end: 106cc8a3f; -[SCFriendsFeedMoreUnreadVisibilityContext hash] */

undefined8 * FUN_106cc89cc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106cc8ac0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106cc8acc;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_106cc8acc;
        }
        goto LAB_106cc8ac0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106cc8acc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106cc8a40; end: 106cc8ae7; -[SCFriendsFeedMoreUnreadVisibilityContext isEqual:] */

long FUN_106cc8a40(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106cc8ac0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106cc8acc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_106cc8acc;
        }
        goto LAB_106cc8ac0;
      }
    }
    lVar3 = 0;
  }
LAB_106cc8acc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106cc8ae8; end: 106cc8aef; -[SCFriendsFeedMoreUnreadVisibilityContext shouldShow] */

undefined8 FUN_106cc8ae8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


