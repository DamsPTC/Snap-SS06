/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000211a0; end: 10002120b;  */

void FUN_1000211a0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,1,&lStack_28,param_1 + 0x50);
  }
  return;
}



/* Entry: 10002120c; end: 10002120f; -[SCOneTapLoginUserData copyWithZone:] */

void FUN_10002120c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_1000a05d8)();
  return;
}



/* Entry: 100021210; end: 10002121f; -[SCOneTapLoginUserDataSnapshot copyWithZone:] */

void FUN_100021210(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_1000a05d8)();
  return;
}



/* Entry: 100021220; end: 1000213a7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_100021220(undefined4 param_1,undefined1 *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_40;
  uint uStack_3c;
  long lStack_38;
  
  puVar5 = &uStack_40;
  lStack_38 = *(long *)PTR____stack_chk_guard_1000a0110;
  iVar4 = (int)param_2;
  if (lRam00000001000e9408 != -1) {
    func_0x00010006b104();
  }
  if (lRam00000001000e9410 == 0) {
    if (lRam00000001000e9400 != -1) goto LAB_100021378;
    bVar2 = SBORROW4(iVar4,iRam00000001000e93f0);
    iVar1 = iVar4 - iRam00000001000e93f0;
    bVar3 = iVar4 == iRam00000001000e93f0;
    if (iVar4 < iRam00000001000e93f0) goto LAB_100021318;
    goto LAB_1000212e4;
  }
  uStack_3c = iVar4 << 0x10 | ((uint)param_3 & 0xff) << 8 | param_4 & 0xff;
  uStack_40 = param_1;
  __availability_version_check(1);
  param_2 = (undefined1 *)puVar5;
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_38) {
    return;
  }
LAB_100021374:
  do {
    while( true ) {
      ___stack_chk_fail();
LAB_100021378:
      func_0x00010006b11c();
      iVar4 = (int)param_2;
      bVar2 = SBORROW4(iVar4,iRam00000001000e93f0);
      iVar1 = iVar4 - iRam00000001000e93f0;
      bVar3 = iVar4 == iRam00000001000e93f0;
      if (iRam00000001000e93f0 <= iVar4) break;
LAB_100021318:
      if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_38) {
        return;
      }
    }
LAB_1000212e4:
    if (bVar3 || iVar1 < 0 != bVar2) {
      if ((int)param_3 < iRam00000001000e93f4) goto LAB_100021318;
      if ((int)param_3 <= iRam00000001000e93f4) {
        if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_38) {
          return;
        }
        goto LAB_100021374;
      }
    }
    if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_38) {
      return;
    }
  } while( true );
}



/* Entry: 1000213a8; end: 1000213af;  */

void FUN_1000213a8(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_1000a0110;
  if (puRam00000001000e9410 == (undefined *)0x0) {
    if (PTR___availability_version_check_1000a0118 != (undefined *)0x0) {
      puRam00000001000e9410 = PTR___availability_version_check_1000a0118;
    }
    if (puRam00000001000e9410 == (undefined *)0x0) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if (pcVar10 != (code *)0x0) {
                        pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                        _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                        if (pcVar11 != (char *)0x0) {
                          _fseek();
                          pcVar12 = pcVar11;
                          _ftell();
                          if (-1 < (long)pcVar12) {
                            _rewind(pcVar11);
                            pcVar13 = pcVar12;
                            _malloc();
                            if ((pcVar13 != (char *)0x0) &&
                               (pcVar14 = pcVar13, _fread(), pcVar14 == pcVar12)) {
                              lVar15 = 0;
                              (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                              if (lVar15 != 0) {
                                lVar16 = 0;
                                if (pcVar3 == (code *)0x0) {
                                  (*pcVar4)(0,lVar15,0,0);
                                }
                                else {
                                  (*pcVar3)();
                                }
                                if (lVar16 != 0) {
                                  lVar17 = 0;
                                  (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                  if (lVar17 != 0) {
                                    lVar18 = lVar16;
                                    (*pcVar6)(lVar16,lVar17);
                                    (*pcVar10)(lVar17);
                                    if (lVar18 != 0) {
                                      lVar17 = lVar18;
                                      (*pcVar7)();
                                      lVar19 = lVar17;
                                      (*pcVar8)();
                                      if ((lVar17 == lVar19) &&
                                         ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100),
                                         (int)lVar18 != 0)) {
                                        _sscanf(auStack_88,"%d.%d.%d");
                                      }
                                    }
                                  }
                                  (*pcVar10)(lVar16);
                                }
                                (*pcVar10)(lVar15);
                              }
                            }
                          }
                          _free();
                          _fclose(pcVar11);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010006b944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_1000a0198)(0x1000e9400,0,0x100021218);
  return;
}



/* Entry: 1000213b0; end: 1000216c7;  */

void FUN_1000213b0(ulong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_1000a0110;
  if (((param_1 & 1) != 0) || (puRam00000001000e9410 == (undefined *)0x0)) {
    if (PTR___availability_version_check_1000a0118 != (undefined *)0x0) {
      puRam00000001000e9410 = PTR___availability_version_check_1000a0118;
    }
    if (((param_1 & 1) != 0) || (puRam00000001000e9410 == (undefined *)0x0)) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if (pcVar10 != (code *)0x0) {
                        pcVar11 = "/System/Library/CoreServices/SystemVersion.plist";
                        _fopen("/System/Library/CoreServices/SystemVersion.plist","r");
                        if (pcVar11 != (char *)0x0) {
                          _fseek();
                          pcVar12 = pcVar11;
                          _ftell();
                          if (-1 < (long)pcVar12) {
                            _rewind(pcVar11);
                            pcVar13 = pcVar12;
                            _malloc();
                            if ((pcVar13 != (char *)0x0) &&
                               (pcVar14 = pcVar13, _fread(), pcVar14 == pcVar12)) {
                              lVar15 = 0;
                              (*pcVar2)(0,pcVar13,pcVar12,uVar20);
                              if (lVar15 != 0) {
                                lVar16 = 0;
                                if (pcVar3 == (code *)0x0) {
                                  (*pcVar4)(0,lVar15,0,0);
                                }
                                else {
                                  (*pcVar3)();
                                }
                                if (lVar16 != 0) {
                                  lVar17 = 0;
                                  (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                  if (lVar17 != 0) {
                                    lVar18 = lVar16;
                                    (*pcVar6)(lVar16,lVar17);
                                    (*pcVar10)(lVar17);
                                    if (lVar18 != 0) {
                                      lVar17 = lVar18;
                                      (*pcVar7)();
                                      lVar19 = lVar17;
                                      (*pcVar8)();
                                      if ((lVar17 == lVar19) &&
                                         ((*pcVar9)(lVar18,auStack_88,0x20,0x8000100),
                                         (int)lVar18 != 0)) {
                                        _sscanf(auStack_88,"%d.%d.%d");
                                      }
                                    }
                                  }
                                  (*pcVar10)(lVar16);
                                }
                                (*pcVar10)(lVar15);
                              }
                            }
                          }
                          _free();
                          _fclose(pcVar11);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lStack_68) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010006b944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__dispatch_once_f_1000a0198)(0x1000e9400,0,0x100021218);
    return;
  }
  return;
}



/* Entry: 1000216c8; end: 1000216df;  */

void FUN_1000216c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_1000a0198)(0x1000e9400,0,0x100021218);
  return;
}



/* Entry: 1000216e0; end: 10002171f; +[NotificationService load] */

void FUN_1000216e0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1000d1bb8;
  func_0x00010006ea60(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100074240();
  uRam00000001000e9418 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar1);
  return;
}



/* Entry: 100021720; end: 1000218ff; -[NotificationService init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100021720(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  puStack_48 = PTR_PTR_1000d23b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
  if (puVar2 != (undefined8 *)0x0) {
    if (lRam00000001000e9fc8 != -1) {
      _dispatch_once(0x1000e9fc8,&PTR___NSConcreteGlobalBlock_1000a3868);
    }
    func_0x000100073900(PTR_PTR_1000d1bc0);
    puVar3 = PTR__OBJC_CLASS___SCNSEUserProcessingScope_1000d1bc8;
    _objc_alloc_init();
    puVar4 = puVar3;
    func_0x000100074140();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_1000d2770);
    *(undefined **)((long)puVar2 + (long)_DAT_1000d2770) = puVar4;
    _objc_release(uVar7);
    puVar4 = puVar3;
    func_0x000100074560();
    ppuVar1 = &PTR_PTR_1000d1bd0;
    if ((int)puVar4 == 0) {
      ppuVar1 = &PTR_PTR_1000d1bd8;
    }
    puVar4 = *ppuVar1;
    _objc_alloc();
    func_0x0001000707c0();
    uVar7 = *(undefined8 *)((long)puVar2 + (long)_DAT_1000d2774);
    *(undefined **)((long)puVar2 + (long)_DAT_1000d2774) = puVar4;
    _objc_release(uVar7);
    puVar4 = puVar3;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x000100071e80();
    *(char *)((long)puVar2 + (long)_DAT_1000d2778) = (char)puVar5;
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___SCExtensionCrashManager_1000d1be0;
    func_0x000100073a00(PTR__OBJC_CLASS___SCExtensionCrashManager_1000d1be0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073d20();
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___SCExtensionCrashManager_1000d1be0;
    func_0x000100073a00(PTR__OBJC_CLASS___SCExtensionCrashManager_1000d1be0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x000100074680(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x0001000745e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000737e0(puVar4);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010006f900(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006ce80(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 100021900; end: 100021a5f; -[NotificationService didReceiveNotificationRequest:withContentHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100021900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_100021a60;
  puStack_50 = &UNK_1000a1c98;
  _objc_retain(param_4);
  ppuVar1 = &puStack_68;
  uStack_48 = param_4;
  _objc_retainBlock();
  if (*(char *)(param_1 + _DAT_1000d2778) == '\x01') {
    puVar2 = PTR__OBJC_CLASS___UNNotificationContent_1000d1be8;
    _objc_opt_new(PTR__OBJC_CLASS___UNNotificationContent_1000d1be8);
    (*(code *)ppuVar1[2])(ppuVar1,puVar2);
  }
  else {
    func_0x00010006ed40(*(undefined8 *)(param_1 + _DAT_1000d2774));
    puVar2 = PTR__OBJC_CLASS___NSDate_1000d1bb8;
    func_0x00010006ea60(PTR__OBJC_CLASS___NSDate_1000d1bb8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_1000d2770);
    func_0x000100074180(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100074240(puVar2);
    func_0x000100073000(uVar3);
    _objc_release(uVar3);
  }
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100021a60; end: 100021a83;  */

void FUN_100021a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100021a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 100021a84; end: 100021a93; -[NotificationService serviceExtensionTimeWillExpire] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100021a84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000729d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (*(undefined8 *)(param_1 + _DAT_1000d2774),
             PTR_s_serviceExtensionTimeWillExpire_1000d1268);
  return;
}



/* Entry: 100021a94; end: 100021b2b; -[NotificationService _logStartupTimeForFirstStart:] */

void FUN_100021a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  lVar1 = lRam00000001000e9420;
  puStack_48 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100021b2c;
  puStack_30 = &UNK_1000a1cc8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  uVar2 = param_3;
  if (lVar1 != -1) {
    _dispatch_once(0x1000e9420,&puStack_48);
    uVar2 = uStack_28;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 100021b2c; end: 100021c03;  */

void FUN_100021b2c(long param_1)

{
  undefined *puVar1;
  double dVar2;
  
  dVar2 = dRam00000001000e9418;
  if (lRam00000001000e9fc0 != -1) {
    _dispatch_once(0x1000e9fc0,&PTR___NSConcreteGlobalBlock_1000a1d18);
  }
  dVar2 = (dVar2 - dRam00000001000e9fb8) * 1000.0;
  func_0x000100071f20(dVar2,PTR__OBJC_CLASS___NSNumber_1000d1bf0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006db80(dVar2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar1);
  return;
}



/* Entry: 100021c04; end: 100021c0b;  */

void FUN_100021c04(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_1000a05d8)(*(undefined8 *)(param_2 + 0x20));
  return;
}



/* Entry: 100021c0c; end: 100021d17; -[NotificationService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100021c0c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1000d2770,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + _DAT_1000d2774,0);
  return;
}



/* Entry: 100021d18; end: 100021d8f; -[SCExtensionNativeLoggerDefault init] */

undefined1 * FUN_100021d18(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar2 = &uStack_30;
  puStack_28 = PTR_PTR_1000d23c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSDateFormatter_1000d1c00;
    _objc_alloc_init();
    puVar1 = puRam00000001000e9428;
    puRam00000001000e9428 = puVar3;
    _objc_release(puVar1);
    func_0x000100072da0(puRam00000001000e9428);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 100021d90; end: 100021d93; -[SCExtensionNativeLoggerDefault logTimedEvent:interval:params:] */

void FUN_100021d90(void)

{
  return;
}



/* Entry: 100021d94; end: 100021def; -[SCExtensionNativeLoggerDefault log:context:tag:message:] */

void FUN_100021d94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1000d1bb8;
  func_0x00010006ea60(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073e80(uRam00000001000e9428,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar1);
  return;
}



/* Entry: 100021df0; end: 100021e17; +[SCExtensionNativeLogging setup] */

void FUN_100021df0(void)

{
  if (lRam00000001000e9430 == -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010006b938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_1000a0190)(0x1000e9430,&PTR___NSConcreteGlobalBlock_1000a1d38);
  return;
}



/* Entry: 100021e18; end: 100021e87;  */

void FUN_100021e18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___SCNShimsPlatform_1000d1c08;
  puVar2 = PTR__OBJC_CLASS___SCNShimsPlatformParameters_1000d1c10;
  _objc_alloc(PTR__OBJC_CLASS___SCNShimsPlatformParameters_1000d1c10);
  func_0x0001000700a0();
  puVar3 = PTR_PTR_1000d1c18;
  _objc_alloc_init(PTR_PTR_1000d1c18);
  func_0x00010006ff80(puVar1,param_2,puVar2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(puVar2);
  return;
}



/* Entry: 100021e88; end: 100021ee3;  */

bool FUN_100021e88(long param_1)

{
  long lVar1;
  
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x000100073e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar1);
  return lVar1 != 0;
}



/* Entry: 100021ee4; end: 1000220ab;  */

void FUN_100021ee4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000100071be0(param_1);
  uVar2 = param_1;
  func_0x000100074620(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x000100071be0(uVar2);
  _objc_release(uVar2);
  ppuVar4 = &PTR____CFConstantStringClassReference_1000a3948;
  _SCLocalizedString(&PTR____CFConstantStringClassReference_1000a3948,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073360(uVar3);
  _objc_release(ppuVar4);
  ppuVar4 = &PTR____CFConstantStringClassReference_1000a3968;
  _SCLocalizedString(&PTR____CFConstantStringClassReference_1000a3968,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073360(uVar3);
  _objc_release(ppuVar4);
  func_0x000100073360(uVar3);
  func_0x000100073800(uVar1);
  puVar5 = PTR__OBJC_CLASS___SCNotifExtLocalizer_1000d1c20;
  uVar2 = uVar3;
  func_0x000100072060(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073ee0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073760(uVar1);
  _objc_release(puVar5);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___SCNotifExtLocalizer_1000d1c20;
  uVar2 = uVar3;
  func_0x000100072060(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073ee0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100072ba0(uVar1);
  _objc_release(puVar5);
  _objc_release(uVar2);
  func_0x000100073660(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 1000220ac; end: 1000220cf; +[SCNotifExtFixedBadgeCountProvider zeroBadgeUpdater] */

void FUN_1000220ac(void)

{
  _objc_alloc(PTR_PTR_1000d1c28);
  func_0x000100070120();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000220d0; end: 1000220f3; +[SCNotifExtFixedBadgeCountProvider oneBadgeUpdater] */

void FUN_1000220d0(void)

{
  _objc_alloc(PTR_PTR_1000d1c28);
  func_0x000100070120();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000220f4; end: 10002213b; -[SCNotifExtFixedBadgeCountProvider initWithBadgeCount:] */

void FUN_1000220f4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1000d23c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10002213c; end: 10002214f; -[SCNotifExtFixedBadgeCountProvider badgeCountProviderType] */

void FUN_10002213c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000723f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (PTR__OBJC_CLASS___SCNotifExtBadgeCountProviderType_1000d1c30,
             PTR_s_pushTypeWithTypes__1000d10f0,PTR____NSArray0__struct_1000a0070);
  return;
}



/* Entry: 100022150; end: 10002215f; -[SCNotifExtFixedBadgeCountProvider provideBadgeCount:incomingNotification:completionHandler:] */

void FUN_100022150(long param_1)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00010002215c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))(in_x4,(long)*(int *)(param_1 + 8));
  return;
}



/* Entry: 100022160; end: 10002219b; -[SCNotifExtLoggedOutNotificationModifier init] */

void FUN_100022160(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1000d23d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10002219c; end: 10002239f; -[SCNotifExtLoggedOutNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_10002219c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x000100071be0();
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar4;
  _objc_release(uVar6);
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x000100071be0();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  _objc_release(uVar7);
  _objc_release(uVar1);
  *(char *)(param_1 + 0x18) = (char)param_5;
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x000100072060(lVar2,param_2,&PTR____CFConstantStringClassReference_1000a39a8);
  _objc_retainAutoreleasedReturnValue();
  if ((param_5 == 0) || (lVar4 = lVar2, func_0x0001000713a0(), lVar4 != 0)) {
    lVar4 = lVar2;
    func_0x0001000713a0();
    lVar3 = param_3;
    func_0x00010006e720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar4 = lVar3;
      FUN_100021ee4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = param_1;
      func_0x000100071720(param_1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar6 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x000100071be0();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    _objc_release(uVar7);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x000100072060(lVar4,param_2,&PTR____CFConstantStringClassReference_1000a39e8);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      func_0x000100073660(*(undefined8 *)(param_1 + 8),param_2,0);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___UNNotificationSound_1000d1c38;
      func_0x000100073c40(PTR__OBJC_CLASS___UNNotificationSound_1000d1c38,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100073660(*(undefined8 *)(param_1 + 8),param_2,puVar5);
      _objc_release(puVar5);
    }
    func_0x0001000720a0(param_4,param_2,*(undefined8 *)(param_1 + 8));
    _objc_release(lVar4);
  }
  else {
    func_0x0001000720c0(param_4,param_2,7);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 1000223a0; end: 1000223f3; -[SCNotifExtLoggedOutNotificationModifier bestAttemptContent] */

void FUN_1000223a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___UNNotificationContent_1000d1be8;
    _objc_alloc_init(PTR__OBJC_CLASS___UNNotificationContent_1000d1be8);
  }
  else {
    func_0x000100073800(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
    puVar1 = *(undefined **)(param_1 + 8);
    _objc_retain(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar1);
  return;
}



/* Entry: 1000223f4; end: 100022557; -[SCNotifExtLoggedOutNotificationModifier loggedOutContent:] */

void FUN_1000223f4(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x000100071be0(param_3);
  ppuVar2 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  ppuVar3 = ppuVar2;
  func_0x000100071be0();
  _objc_release(ppuVar2);
  ppuVar4 = ppuVar3;
  func_0x000100072060(ppuVar3,param_2,&PTR____CFConstantStringClassReference_1000a39c8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_1000a3a08;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar2 = ppuVar4;
  }
  func_0x000100073360(ppuVar3,param_2,ppuVar2,&PTR____CFConstantStringClassReference_1000a3908);
  _objc_release(ppuVar4);
  ppuVar2 = ppuVar3;
  func_0x000100072060(ppuVar3,param_2,&PTR____CFConstantStringClassReference_1000a39a8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073360(ppuVar3,param_2,ppuVar2,&PTR____CFConstantStringClassReference_1000a3928);
  _objc_release(ppuVar2);
  func_0x000100073800(ppuVar1,param_2,ppuVar3);
  ppuVar2 = ppuVar3;
  func_0x000100072060(ppuVar3,param_2,&PTR____CFConstantStringClassReference_1000a3908);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073760(ppuVar1,param_2,ppuVar2);
  _objc_release(ppuVar2);
  ppuVar2 = ppuVar3;
  func_0x000100072060(ppuVar3,param_2,&PTR____CFConstantStringClassReference_1000a3928);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100072ba0(ppuVar1,param_2,ppuVar2);
  _objc_release(ppuVar2);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(ppuVar1);
  return;
}



/* Entry: 100022558; end: 100022587; -[SCNotifExtLoggedOutNotificationModifier .cxx_destruct] */

void FUN_100022558(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100022588; end: 1000225eb; -[SCNotifExtServerSuppressedModifier init] */

undefined1 * FUN_100022588(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1000d23d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UNNotificationContent_1000d1be8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000225ec; end: 10002264b; -[SCNotifExtServerSuppressedModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_1000225ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  _objc_retain(param_4);
  func_0x000100071f00(puVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0001000720c0(param_4,param_2,9);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 10002264c; end: 100022673; -[SCNotifExtServerSuppressedModifier bestAttemptContent] */

void FUN_10002264c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 100022674; end: 10002267f; -[SCNotifExtServerSuppressedModifier .cxx_destruct] */

void FUN_100022674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100022680; end: 1000226e3; -[SCNotifExtSuppressDuplicateModifier init] */

undefined1 * FUN_100022680(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1000d23e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UNNotificationContent_1000d1be8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000226e4; end: 100022743; -[SCNotifExtSuppressDuplicateModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_1000226e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  _objc_retain(param_4);
  func_0x000100071f00(puVar1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0001000720c0(param_4,param_2,0xd);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 100022744; end: 10002276b; -[SCNotifExtSuppressDuplicateModifier bestAttemptContent] */

void FUN_100022744(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 10002276c; end: 100022777; -[SCNotifExtSuppressDuplicateModifier .cxx_destruct] */

void FUN_10002276c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100022778; end: 1000227bf; -[SCNotifExtWrongUserModifier init] */

undefined8 FUN_100022778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCNotificationCenterProvider_1000d1c40;
  _objc_alloc_init(PTR__OBJC_CLASS___SCNotificationCenterProvider_1000d1c40);
  func_0x000100070660(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1000227c0; end: 100022853; -[SCNotifExtWrongUserModifier initWithNotificationCenterProvider:] */

undefined1 * FUN_1000227c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d23e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UNNotificationContent_1000d1be8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100022854; end: 100022997; -[SCNotifExtWrongUserModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_100022854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  *(char *)(param_1 + 0x28) = (char)param_5;
  if (param_5 == 0) {
    func_0x00010006e720();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    FUN_100021ee4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    _objc_release(uVar2);
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x000100071be0();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x000100071d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_100022998;
    puStack_50 = &UNK_1000a1d88;
    uStack_48 = uVar1;
    _objc_retain(param_4);
    uStack_40 = param_4;
    lStack_38 = param_1;
    _objc_retain(uVar1);
    func_0x00010006f6e0(uVar1,param_2,&puStack_68);
    _objc_release(uStack_40);
    _objc_release(uStack_48);
    _objc_release(uVar1);
  }
  else {
    func_0x0001000720c0(param_4,param_2,1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 100022998; end: 100022c9f;  */

/* WARNING: Possible PIC construction at 0x000100022c50: Changing call to branch */

void FUN_100022998(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010006e860();
  if (lVar2 != 0) {
    lVar11 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(param_2);
        }
        lVar13 = *(long *)(lStack_128 + lVar12 * 8);
        lVar3 = lVar13;
        func_0x0001000726a0(lVar13);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010006e720();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x000100074620();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        lVar3 = lVar13;
        func_0x0001000726a0(lVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010006fda0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        lVar3 = lVar13;
        func_0x0001000726a0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010006e720();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x000100074620();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar5;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        if (lVar7 != 0) {
          func_0x0001000726a0(lVar13);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar13;
          func_0x00010006fda0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010006dae0(puVar1);
          _objc_release(lVar3);
          _objc_release(lVar13);
        }
        _objc_release(lVar7);
        _objc_release(lVar6);
        lVar12 = lVar12 + 1;
      } while (lVar2 != lVar12);
      lVar2 = param_2;
      func_0x00010006e860();
    } while (lVar2 != 0);
  }
  _objc_release(param_2);
  puVar8 = puVar1;
  func_0x00010006e840();
  if (puVar8 == (undefined *)0x0) {
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
  }
  else {
    func_0x0001000725c0(*(undefined8 *)(param_1 + 0x20));
    puStack_160 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_100022ca0;
    puStack_148 = &UNK_1000a1d58;
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar10);
    uStack_138 = *(undefined8 *)(param_1 + 0x30);
    uStack_140 = uVar10;
    _dispatch_async(PTR___dispatch_main_q_1000a0120,&puStack_160);
    _objc_release(uStack_140);
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x28) + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x0001000720b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)(uVar10,PTR_s_onSuccess__1000d1020,uVar9);
  return;
}



/* Entry: 100022ca0; end: 100022caf;  */

void FUN_100022ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000720b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onSuccess__1000d1020,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
  return;
}



/* Entry: 100022cb0; end: 100022d5f;  */

void FUN_100022cb0(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010006bb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_1000a05d8)(*(undefined8 *)(param_2 + 0x28));
  return;
}



/* Entry: 100022d60; end: 100022da7; -[SCNotifExtWrongUserModifier bestAttemptContent] */

void FUN_100022d60(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    puVar1 = (undefined8 *)(param_1 + 0x20);
  }
  else {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    func_0x000100073800(*puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
  }
  uVar2 = *puVar1;
  _objc_retain(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar2);
  return;
}



/* Entry: 100022da8; end: 100022def; -[SCNotifExtWrongUserModifier .cxx_destruct] */

void FUN_100022da8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100022df0; end: 1000230a3;  */

undefined8 FUN_100022df0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000100072060(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar3;
  _SCNotifExtTypeContainedIn(uVar3,&PTR__OBJC_CLASS___NSConstantArray_1000abbc8);
  _objc_release(uVar3);
  return uVar1;
}



/* Entry: 1000230a4; end: 1000236a3; -[SCNotifExtModifierProvider initWithProcessingScope:eventHolder:] */

long FUN_1000230a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  undefined *puVar32;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_4;
  _objc_release(uVar1);
  lVar2 = param_3;
  func_0x00010006de60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar32 = (undefined *)0x0;
  }
  else {
    puVar32 = PTR_PTR_1000d1c58;
    _objc_alloc();
    lVar2 = param_3;
    func_0x00010006de60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x000100074680(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x0001000745e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x000100074680(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x000100073bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010006f900(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x000100074660(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070080(puVar32,param_2,lVar2,lVar4,lVar6,lVar7,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  puVar9 = PTR_PTR_1000d1c60;
  _objc_alloc();
  func_0x000100070aa0();
  puVar10 = PTR_PTR_1000d1c68;
  _objc_alloc();
  func_0x000100070800();
  puVar11 = PTR_PTR_1000d1c70;
  _objc_alloc();
  func_0x0001000707c0();
  puVar12 = PTR_PTR_1000d1c78;
  _objc_alloc();
  func_0x0001000707c0();
  puVar13 = PTR_PTR_1000d1c80;
  _objc_alloc();
  func_0x0001000707c0();
  puVar14 = PTR_PTR_1000d1c88;
  _objc_alloc();
  func_0x0001000707c0();
  puVar15 = PTR_PTR_1000d1c90;
  _objc_alloc();
  func_0x0001000707c0();
  puVar16 = PTR_PTR_1000d1c98;
  _objc_alloc();
  func_0x0001000707c0();
  puVar17 = PTR_PTR_1000d1ca0;
  _objc_alloc();
  func_0x0001000707c0();
  puVar18 = PTR_PTR_1000d1ca8;
  _objc_alloc();
  func_0x0001000707c0();
  puVar19 = PTR_PTR_1000d1cb0;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010006f900();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070940(puVar19,param_2,param_3,lVar2,puVar32);
  puVar20 = PTR_PTR_1000d1cb8;
  _objc_alloc();
  func_0x0001000707c0();
  puVar21 = PTR_PTR_1000d1cc0;
  _objc_alloc();
  func_0x0001000707c0();
  lVar3 = param_3;
  func_0x000100032d34();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1000d1cc8;
  _objc_alloc();
  func_0x0001000707c0();
  puVar23 = PTR_PTR_1000d1cd0;
  _objc_alloc();
  func_0x0001000707c0();
  puVar24 = PTR_PTR_1000d1cd8;
  _objc_alloc();
  func_0x0001000707c0();
  puVar25 = PTR_PTR_1000d1ce0;
  _objc_alloc();
  func_0x0001000707c0();
  lVar4 = param_3;
  func_0x000100074680();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x000100074120();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR_PTR_1000d1ce8;
  _objc_alloc_init();
  puVar27 = PTR_PTR_1000d1cf0;
  _objc_alloc_init();
  puVar28 = PTR_PTR_1000d1cf8;
  _objc_alloc_init();
  puVar29 = PTR_PTR_1000d1d00;
  _objc_alloc();
  lVar7 = param_3;
  func_0x000100074680();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x0001000745e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070de0(puVar29,param_2,lVar8);
  puVar30 = PTR_PTR_1000d1d08;
  _objc_alloc_init();
  lVar31 = param_3;
  func_0x00010006f900();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000705a0(param_1,param_2,puVar10,puVar11,puVar12,puVar13,puVar14,puVar15,puVar16,
                      puVar17,puVar18,puVar19,puVar20,puVar21,lVar3,puVar22,puVar23,puVar24,puVar25,
                      puVar9,lVar4,lVar5,lVar6,puVar26,puVar27,puVar28,puVar29,puVar30,lVar31);
  _objc_release(lVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(lVar3);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(lVar2);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar32);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1000236a4; end: 100023c27; -[SCNotifExtModifierProvider initWithMessagingProvider:storyOptInNotifProvider:storyViewMilestoneNotifProvider:payoutsNotifProvider:ourStoriesReplyNotifProvider:spotlightGrowthNotifProvider:friendingNotifProvider:lensNotifProvider:interactiveStickersNotifProvider:growthNotifProvider:memoriesNotifProvider:nonFriendStoriesNotifProvider:mapNotifProvider:crashRecoveryNotifProvider:sharedStoryNotifProvider:tivModifierProvider:hermodNotifProvider:sdnNotificationModifierProvider:userSession:config:systemScopedAppGroupUserDefaults:wrongUserModifier:duplicatedModifier:loggedOutNotificationModifier:processedNotifPersister:serverSuppressedModifier:grapheneLogger:] */

undefined8 *
FUN_1000236a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  puStack_70 = PTR_PTR_1000d23f0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_29);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_29;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0x1d) = 0;
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[8];
    puVar1[8] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[10];
    puVar1[10] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    _objc_release(uVar2);
  }
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
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



/* Entry: 100023c28; end: 1000240ef; -[SCNotifExtModifierProvider getModifier:suppressionEnabled:] */

void FUN_100023c28(long param_1,undefined8 param_2,ulong param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000100072280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x0001000745e0(*(undefined8 *)(param_1 + 0xa0));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar10 = lVar6;
  func_0x000100071100();
  if ((int)lVar10 != 0) {
    func_0x000100073420(*(undefined8 *)(param_1 + 0xe0));
    func_0x0001000734c0(*(undefined8 *)(param_1 + 0xe0));
    lVar10 = *(long *)(param_1 + 200);
LAB_100023dec:
    _objc_retain(lVar10);
    goto LAB_100023f2c;
  }
  if (lVar6 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xb0);
    FUN_100021e88();
    if (iVar1 != 0) {
      func_0x000100073420(*(undefined8 *)(param_1 + 0xe0));
      func_0x0001000734c0(*(undefined8 *)(param_1 + 0xe0));
      func_0x00010006cf60(param_1);
      lVar10 = *(long *)(param_1 + 0xb8);
      goto LAB_100023dec;
    }
  }
  uVar2 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010006e380();
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar8 != 0) {
    if (param_4 != 0) {
      lVar10 = *(long *)(param_1 + 0xd0);
      goto LAB_100023dec;
    }
    uVar2 = param_3;
    func_0x00010006e720(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar7);
  }
  uVar2 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (uVar7 == 0) {
    uVar2 = uVar5;
    func_0x000100022e98();
    func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((int)uVar2 != 0) {
      lVar10 = *(long *)(param_1 + 0x10);
      goto LAB_100023f10;
    }
    uVar2 = uVar5;
    _SCNotifExtTypeContainedIn(uVar5,&PTR__OBJC_CLASS___NSConstantArray_1000abbf8);
    if ((int)uVar2 != 0) {
      lVar10 = *(long *)(param_1 + 0x18);
      goto LAB_100023f10;
    }
    uVar2 = uVar5;
    func_0x0001000438f0();
    if (((uVar2 & 1) != 0) || (uVar2 = uVar5, func_0x0001000439b4(), (int)uVar2 != 0)) {
      lVar10 = *(long *)(param_1 + 0x28);
      goto LAB_100023f10;
    }
    puVar4 = PTR_PTR_1000d1cb0;
    func_0x00010006bea0();
    if ((int)puVar4 != 0) {
      lVar10 = *(long *)(param_1 + 0x40);
      goto LAB_100023f10;
    }
    uVar2 = uVar5;
    _SCNotifExtTypeContainedIn(uVar5,&PTR__OBJC_CLASS___NSConstantArray_1000abc10);
    if ((int)uVar2 != 0) {
      lVar10 = *(long *)(param_1 + 0x30);
      goto LAB_100023f10;
    }
    uVar2 = uVar5;
    func_0x000100031358();
    if ((int)uVar2 != 0) {
      lVar10 = *(long *)(param_1 + 0x38);
      goto LAB_100023f10;
    }
    uVar2 = uVar5;
    func_0x000100071100();
    if ((int)uVar2 != 0) {
      lVar10 = *(long *)(param_1 + 0x20);
      goto LAB_100023f10;
    }
    uVar2 = uVar5;
    _SCNotifExtTypeContainedIn(uVar5,&PTR__OBJC_CLASS___NSConstantArray_1000abc28);
    if ((int)uVar2 != 0) {
      lVar10 = *(long *)(param_1 + 0x68);
      goto LAB_100023f10;
    }
    uVar2 = uVar5;
    func_0x000100032d7c();
    if (((int)uVar2 != 0) && (lVar10 = *(long *)(param_1 + 0x70), lVar10 != 0)) goto LAB_100023f10;
    uVar2 = uVar5;
    FUN_1000549b0();
    if ((int)uVar2 != 0) {
      lVar10 = *(long *)(param_1 + 0x48);
      goto LAB_100023f10;
    }
    uVar2 = uVar5;
    func_0x000100071100();
    if ((int)uVar2 != 0) {
      lVar10 = *(long *)(param_1 + 0x78);
      goto LAB_100023f10;
    }
    uVar2 = uVar5;
    func_0x000100071100();
    if ((int)uVar2 != 0) {
      lVar10 = *(long *)(param_1 + 0x80);
      goto LAB_100023f10;
    }
    uVar2 = uVar5;
    func_0x0001000537dc();
    if ((int)uVar2 != 0) {
      lVar10 = *(long *)(param_1 + 0x50);
      goto LAB_100023f10;
    }
    uVar2 = uVar5;
    func_0x000100032fdc();
    if ((int)uVar2 != 0) {
      lVar10 = *(long *)(param_1 + 0x60);
      goto LAB_100023f10;
    }
    uVar2 = uVar5;
    FUN_10005d754();
    if ((int)uVar2 != 0) {
      lVar10 = *(long *)(param_1 + 0x58);
      goto LAB_100023f10;
    }
    uVar2 = uVar5;
    func_0x000100071100();
    if ((int)uVar2 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0xa8);
      func_0x00010006fd20();
      if (iVar1 != 0) {
        lVar10 = *(long *)(param_1 + 0x98);
        goto LAB_100023f10;
      }
    }
    uVar9 = *(undefined8 *)(param_1 + 0xb0);
    func_0x000100074180(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006e360();
    _objc_release(uVar9);
    func_0x00010006cd60(param_1);
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x90);
LAB_100023f10:
    func_0x00010006f760(lVar10);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar7);
LAB_100023f2c:
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(lVar10);
  return;
}



/* Entry: 1000240f0; end: 1000244f3; -[SCNotifExtModifierProvider getTaskHandlers:suppressionEnabled:] */

void FUN_1000240f0(long param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1000d1c48);
  iVar1 = (int)*(undefined8 *)(param_1 + 0xa8);
  func_0x000100071c40();
  if (iVar1 == 0) {
    puVar4 = PTR_PTR_1000d1d18;
    _objc_alloc(PTR_PTR_1000d1d18);
    func_0x0001000707c0();
    func_0x00010006dae0(puVar2);
  }
  else {
    puVar3 = PTR_PTR_1000d1d10;
    _objc_alloc(PTR_PTR_1000d1d10);
    puVar4 = *(undefined **)(param_1 + 8);
    func_0x000100071c20(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100071c60(*(undefined8 *)(param_1 + 0xa8));
    func_0x000100070340(puVar3);
    func_0x00010006dae0(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
  if ((param_4 != 0) && (*(char *)(param_1 + 0xe8) == '\x01')) {
    _objc_retain(puVar2);
    goto LAB_10002449c;
  }
  lVar10 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar10;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar5);
  _objc_release(lVar10);
  lVar10 = param_3;
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x000100072280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  if (lVar5 == 0) {
    lVar10 = lVar6;
    func_0x000100022e98();
    func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR_PTR_1000d1d20;
    _objc_alloc(PTR_PTR_1000d1d20);
    func_0x0001000707c0();
    func_0x00010006dae0(puVar2);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1000d1d28;
    _objc_alloc(PTR_PTR_1000d1d28);
    func_0x0001000707c0();
    func_0x00010006dae0(puVar2);
    _objc_release(puVar4);
    iVar1 = (int)*(undefined8 *)(param_1 + 0xa8);
    func_0x000100074780();
    if (iVar1 != 0) {
      puVar4 = PTR_PTR_1000d1d30;
      _objc_alloc(PTR_PTR_1000d1d30);
      func_0x0001000707c0();
      func_0x00010006dae0(puVar2);
      _objc_release(puVar4);
    }
    lVar7 = param_3;
    func_0x00010006e720();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar7);
    if (lVar9 != 0) goto LAB_10002447c;
    if ((int)lVar10 == 0) {
      lVar10 = lVar6;
      _SCNotifExtTypeContainedIn(lVar6,&PTR__OBJC_CLASS___NSConstantArray_1000abbf8);
      if ((int)lVar10 != 0) {
        lVar10 = *(long *)(param_1 + 0x18);
        goto LAB_10002444c;
      }
      puVar4 = PTR_PTR_1000d1c98;
      func_0x00010006bf20();
      if ((int)puVar4 != 0) {
        lVar10 = *(long *)(param_1 + 0x28);
        goto LAB_10002444c;
      }
      lVar10 = lVar6;
      FUN_100032f10();
      if ((int)lVar10 != 0) {
        lVar10 = *(long *)(param_1 + 0x60);
        goto LAB_10002444c;
      }
      lVar10 = lVar6;
      func_0x000100071100();
      if ((int)lVar10 != 0) {
        lVar10 = *(long *)(param_1 + 0x78);
        goto LAB_10002444c;
      }
      lVar10 = lVar6;
      func_0x000100071100();
      if ((int)lVar10 != 0) {
        lVar10 = *(long *)(param_1 + 0x88);
        goto LAB_10002444c;
      }
      lVar10 = lVar6;
      FUN_10005d748();
      if (((int)lVar10 != 0) || (lVar10 = lVar6, func_0x000100053874(), (int)lVar10 != 0)) {
        lVar10 = *(long *)(param_1 + 0x58);
        goto LAB_10002444c;
      }
      lVar10 = lVar6;
      func_0x000100071100();
      if ((int)lVar10 != 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0xa8);
        func_0x00010006fd20();
        if (iVar1 != 0) {
          lVar10 = *(long *)(param_1 + 0x98);
          goto LAB_10002444c;
        }
      }
    }
    else {
      lVar10 = *(long *)(param_1 + 0x10);
LAB_10002444c:
      func_0x00010006f8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar10;
      func_0x00010006e840();
      if (lVar7 != 0) {
        func_0x00010006db00(puVar2);
      }
      _objc_release(lVar10);
    }
LAB_10002447c:
    _objc_retain(puVar2);
    _objc_release(lVar9);
  }
  else {
    _objc_retain(puVar2);
  }
  _objc_release(lVar5);
  _objc_release(lVar6);
LAB_10002449c:
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 1000244f4; end: 1000246d7; -[SCNotifExtModifierProvider getSDNTaskHandlers:request:suppressionEnabled:] */

void FUN_1000244f4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_5 != 0) && ((*(byte *)(param_1 + 0xe8) & 1) != 0)) {
    uVar9 = 0;
    goto LAB_1000246ac;
  }
  uVar2 = param_4;
  func_0x00010006e720(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x000100072060(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010006e720(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000100072280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar9 = 0;
  if ((param_3 != 0) && (lVar6 == 0)) {
    lVar7 = param_3;
    func_0x00010006f360();
    uVar9 = 0;
    iVar1 = (int)lVar7;
    if (iVar1 < 7) {
      if (iVar1 == 1) {
        puVar8 = (ulong *)(param_1 + 0x58);
        uVar9 = *puVar8;
      }
      else {
        if (iVar1 != 2) {
          if (iVar1 == 4) goto LAB_100024638;
          goto LAB_10002469c;
        }
        puVar8 = (ulong *)(param_1 + 0x60);
        uVar9 = *puVar8;
      }
    }
    else if (iVar1 < 9) {
      if (iVar1 == 7) {
LAB_100024650:
        puVar8 = (ulong *)(param_1 + 0x28);
        uVar9 = *puVar8;
      }
      else {
        if (iVar1 != 8) goto LAB_10002469c;
LAB_100024638:
        puVar8 = (ulong *)(param_1 + 0x10);
        uVar9 = *puVar8;
      }
    }
    else {
      if (iVar1 != 9) {
        if (iVar1 != 0xb) goto LAB_10002469c;
        goto LAB_100024650;
      }
      puVar8 = (ulong *)(param_1 + 0x88);
      uVar9 = *puVar8;
    }
    _objc_opt_respondsToSelector(uVar9,PTR_s_getSDNTaskHandlers__1000d05f8);
    if ((uVar9 & 1) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *puVar8;
      func_0x00010006f800(uVar9);
      _objc_retainAutoreleasedReturnValue();
    }
  }
LAB_10002469c:
  _objc_release(lVar6);
  _objc_release(uVar5);
LAB_1000246ac:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar9);
  return;
}



/* Entry: 1000246d8; end: 100024b2f; -[SCNotifExtModifierProvider getBadgeCountProviders:suppressionEnabled:] */

void FUN_1000246d8(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuVar2 = param_3;
  ppuVar18 = param_4;
  _objc_retain(param_3);
  if (((int)param_4 != 0) && ((*(byte *)(param_1 + 0xe8) & 1) != 0)) {
    ppuVar19 = (undefined **)0x0;
    goto LAB_100024ae8;
  }
  ppuVar2 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  ppuVar18 = ppuVar2;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar18;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(ppuVar18);
  _objc_release(ppuVar2);
  ppuVar2 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  ppuVar18 = ppuVar4;
  func_0x000100072280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  if (lVar5 == 0) {
    ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
    _objc_opt_new();
    lVar6 = *(long *)(param_1 + 0x10);
    func_0x00010006f660();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010006e840();
    if (lVar7 != 0) {
      func_0x00010006db00(ppuVar19);
    }
    lVar8 = *(long *)(param_1 + 0x28);
    func_0x00010006f660();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar8;
    func_0x00010006e840();
    if (lVar7 != 0) {
      func_0x00010006db00(ppuVar19);
    }
    lVar9 = *(long *)(param_1 + 0x40);
    func_0x00010006f660();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar9;
    func_0x00010006e840();
    if (lVar7 != 0) {
      func_0x00010006db00(ppuVar19);
    }
    lVar10 = *(long *)(param_1 + 0x18);
    func_0x00010006f660();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar10;
    func_0x00010006e840();
    if (lVar7 != 0) {
      func_0x00010006db00(ppuVar19);
    }
    lVar11 = *(long *)(param_1 + 0x68);
    func_0x00010006f660();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar11;
    func_0x00010006e840();
    if (lVar7 != 0) {
      func_0x00010006db00(ppuVar19);
    }
    lVar12 = *(long *)(param_1 + 0x30);
    func_0x00010006f660();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar12;
    func_0x00010006e840();
    if (lVar7 != 0) {
      func_0x00010006db00(ppuVar19);
    }
    lVar13 = *(long *)(param_1 + 0x58);
    func_0x00010006f660();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar13;
    func_0x00010006e840();
    if (lVar7 != 0) {
      func_0x00010006db00(ppuVar19);
    }
    ppuVar14 = *(undefined ***)(param_1 + 0x90);
    func_0x00010006f660(ppuVar14);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar14;
    func_0x00010006db00(ppuVar19);
    _objc_release(ppuVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar6);
  }
  else {
    lVar7 = lVar5;
    func_0x000100071100();
    if ((int)lVar7 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_1000a3aa8;
      lVar7 = lVar5;
      func_0x000100071100();
      if ((int)lVar7 == 0) {
LAB_100024ad4:
        ppuVar19 = (undefined **)0x0;
        goto LAB_100024ad8;
      }
      ppuVar19 = param_3;
      func_0x00010006e720();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar19;
      func_0x000100074620();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = (undefined **)
                 PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
      ;
      func_0x0001000743a0(
                         PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                         );
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = ppuVar14;
      ppuVar2 = ppuVar15;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      ppuVar17 = ppuVar16;
      func_0x000100034e58();
      if (((ulong)ppuVar17 & 1) == 0) {
        ppuVar17 = ppuVar16;
        func_0x0001000438f0();
        _objc_release(ppuVar16);
        _objc_release(ppuVar16);
        _objc_release(ppuVar15);
        _objc_release(ppuVar14);
        _objc_release(ppuVar19);
        if (((ulong)ppuVar17 & 1) == 0) goto LAB_100024ad4;
      }
      else {
        _objc_release(ppuVar16);
        _objc_release(ppuVar16);
        _objc_release(ppuVar15);
        _objc_release(ppuVar14);
        _objc_release(ppuVar19);
      }
      puVar3 = PTR_PTR_1000d1c28;
      func_0x0001000720e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &puStack_78;
      puStack_78 = puVar3;
    }
    else {
      puVar3 = PTR_PTR_1000d1c28;
      func_0x000100074840();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = &puStack_70;
      puStack_70 = puVar3;
    }
    ppuVar18 = (undefined **)0x1;
    ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
LAB_100024ad8:
  _objc_release(lVar5);
  _objc_release(ppuVar4);
LAB_100024ae8:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(ppuVar2);
    func_0x000100071100();
    if (((ulong)ppuVar18 & 1) == 0) {
      iVar1 = (int)param_3[0x16];
      FUN_100021e88();
      if (iVar1 == 0) {
        ppuVar19 = &PTR____CFConstantStringClassReference_1000a3aa8;
      }
      else {
        ppuVar19 = (undefined **)param_3[0x14];
        ppuVar18 = ppuVar2;
        func_0x000100074620(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        _SCNotifExtCheckUser(ppuVar19,ppuVar18);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar18);
      }
    }
    else {
      ppuVar19 = (undefined **)0x0;
    }
    _objc_release(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(ppuVar19);
  return;
}



/* Entry: 100024b30; end: 100024bdb; -[SCNotifExtModifierProvider preprocessingError:type:] */

void FUN_100024b30(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  func_0x000100071100();
  if ((param_4 & 1) == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xb0);
    FUN_100021e88();
    if (iVar1 == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_1000a3aa8;
    }
    else {
      ppuVar3 = *(undefined ***)(param_1 + 0xa0);
      uVar2 = param_3;
      func_0x000100074620(param_3);
      _objc_retainAutoreleasedReturnValue();
      _SCNotifExtCheckUser(ppuVar3,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
  }
  else {
    ppuVar3 = (undefined **)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(ppuVar3);
  return;
}



/* Entry: 100024bdc; end: 100024cfb; -[SCNotifExtModifierProvider _logNotifMissingModifier:appState:] */

void FUN_100024bdc(long param_1,undefined8 param_2,undefined **param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  long lStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_38 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_48 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_3 != (undefined **)0x0) {
    ppuStack_48 = param_3;
  }
  ppuStack_58 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_1000a41e8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_1000a4208;
  if (param_4 == 0) {
    ppuStack_40 = &PTR____CFConstantStringClassReference_1000a4228;
  }
  _objc_retain(param_3);
  func_0x00010006ecc0(puVar2,param_2,&ppuStack_48,&ppuStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  ppuVar6 = ppuVar3;
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0xf0),param_2,ppuVar3,1);
  _objc_release(param_3);
  _objc_release(ppuVar3);
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  pcStack_68 = FUN_100024cfc;
  lStack_98 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (ppuVar6 != (undefined **)0x0) {
    ppuStack_a0 = ppuVar6;
  }
  ppuStack_a8 = &PTR____CFConstantStringClassReference_1000a41a8;
  ppuStack_90 = ppuVar3;
  puStack_88 = puVar2;
  lStack_80 = param_1;
  ppuStack_78 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar6);
  func_0x00010006ecc0(puVar5,param_2,&ppuStack_a0,&ppuStack_a8,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar7 = puVar2;
  func_0x00010006ff00(*(undefined8 *)(puVar4 + 0xf0),param_2,puVar2,1);
  _objc_release(ppuVar6);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  if (puVar7 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar2 = puVar7;
    func_0x00010006f360();
    uVar8 = 0;
    uVar1 = (int)puVar2 - 3;
    if ((uVar1 < 8) && ((0xa3U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar8 = *(undefined8 *)(puVar5 + *(long *)(&UNK_10008fd08 + (ulong)uVar1 * 8));
      func_0x00010006f880(uVar8,param_2,puVar7);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar8);
  return;
}



/* Entry: 100024cfc; end: 100024df7; -[SCNotifExtModifierProvider _logWrongUserGraphene:] */

void FUN_100024cfc(long param_1,undefined8 param_2,undefined **param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  lStack_38 = *(long *)PTR____stack_chk_guard_1000a0110;
  ppuStack_40 = &PTR____CFConstantStringClassReference_1000a41c8;
  if (param_3 != (undefined **)0x0) {
    ppuStack_40 = param_3;
  }
  ppuStack_48 = &PTR____CFConstantStringClassReference_1000a41a8;
  _objc_retain(param_3);
  func_0x00010006ecc0(puVar2,param_2,&ppuStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar4 = puVar3;
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0xf0),param_2,puVar3,1);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  if (puVar4 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar3 = puVar4;
    func_0x00010006f360();
    uVar5 = 0;
    uVar1 = (int)puVar3 - 3;
    if ((uVar1 < 8) && ((0xa3U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar5 = *(undefined8 *)(puVar2 + *(long *)(&UNK_10008fd08 + (ulong)uVar1 * 8));
      func_0x00010006f880(uVar5,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar5);
  return;
}



/* Entry: 100024df8; end: 100024e87; -[SCNotifExtModifierProvider suppressorForFeatureMetadata:] */

void FUN_100024df8(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010006f360();
    uVar3 = 0;
    uVar1 = (int)lVar2 - 3;
    if ((uVar1 < 8) && ((0xa3U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + *(long *)(&UNK_10008fd08 + (ulong)uVar1 * 8));
      func_0x00010006f880(uVar3,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar3);
  return;
}



/* Entry: 100024e88; end: 100024ef7; -[SCNotifExtModifierProvider displayModifierForFeatureMetadata:] */

void FUN_100024e88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010006f360();
    if (((int)lVar1 == 8) || ((int)lVar1 == 4)) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010006f7e0(uVar2,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_100024ee0;
    }
  }
  uVar2 = 0;
LAB_100024ee0:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar2);
  return;
}



/* Entry: 100024ef8; end: 10002506b; -[SCNotifExtModifierProvider .cxx_destruct] */

void FUN_100024ef8(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10002506c; end: 1000251d3; -[SCNSELoggedOutDelegate initWithProcessingScope:] */

undefined8 FUN_10002506c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  puVar1 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  func_0x00010006dfc0(PTR__OBJC_CLASS___SCLazy_1000d1d48,param_2,
                      &PTR___NSConcreteGlobalBlock_1000a1dd8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puStack_80 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1000251f0;
  puStack_68 = &UNK_1000a1df8;
  _objc_retain();
  puStack_60 = puVar1;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x00010006dfc0(puVar2,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100071c40();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    puVar5 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
    func_0x00010006dfc0(PTR__OBJC_CLASS___SCLazy_1000d1d48,param_2,
                        &PTR___NSConcreteGlobalBlock_1000a1e48);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  func_0x000100070a20(param_1,param_2,param_3,puVar1,puVar2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(puVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1000251d4; end: 1000251ef;  */

void FUN_1000251d4(void)

{
  _objc_opt_new(PTR__OBJC_CLASS___SCNSENativeAnnouncer_1000d1d50);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000251f0; end: 1000252db;  */

void FUN_1000251f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___SCNSENativeHandler_1000d1d58;
  _objc_alloc(PTR__OBJC_CLASS___SCNSENativeHandler_1000d1d58);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100074180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000100071e40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010006e640(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000100071c40();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x000100071cc0();
  func_0x000100070e00(puVar1,param_2,0,uVar2,0,0,uVar3,uVar5,(char)uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar1);
  return;
}



/* Entry: 1000252dc; end: 1000252f7;  */

void FUN_1000252dc(void)

{
  _objc_opt_new(PTR_PTR_1000d1d60);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000252f8; end: 1000253f7; -[SCNSELoggedOutDelegate initWithProcessingScope:nativeAnnouncer:nativeHandler:platformAcknowledger:] */

undefined1 *
FUN_1000252f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1000d23f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
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
    *(undefined4 *)((long)puVar1 + 0x50) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000253f8; end: 100025457; -[SCNSELoggedOutDelegate dealloc] */

void FUN_1000253f8(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010006fdc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006ee80();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1000d23f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_1000cf678);
  return;
}



/* Entry: 100025458; end: 10002557b; -[SCNSELoggedOutDelegate _loggedOutEligibleFromUserInfo:] */

ulong FUN_100025458(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  _objc_retain(param_3);
  func_0x000100071760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_retain(uVar3);
  _objc_opt_class(puVar2);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  if (uVar1 == 0) {
    _objc_retain(uVar3);
    _objc_opt_class(puVar2);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar2);
    uVar4 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar3);
    uVar5 = uVar4;
    func_0x00010006e380(uVar4);
    _objc_release(uVar4);
  }
  else {
    uVar5 = uVar3;
    func_0x00010006e380(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar5;
}



/* Entry: 10002557c; end: 10002579f; -[SCNSELoggedOutDelegate didReceiveNotificationRequest:withContentHandler:] */

void FUN_10002557c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar4 = &puStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_opt_class(param_1);
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar5);
  _os_unfair_lock_lock(param_1 + 0x50);
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _objc_release(uVar5);
  _os_unfair_lock_unlock(param_1 + 0x50);
  uVar1 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x40);
  func_0x0001000713a0();
  if (lVar3 == 0) {
    _objc_opt_class(param_1);
    func_0x00010006d780(param_1,param_2,3);
  }
  else {
    uVar1 = param_3;
    func_0x00010006e720(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010006cf80(param_1,param_2,uVar5);
    *(char *)(param_1 + 0x68) = (char)lVar3;
    _objc_release(uVar5);
    _objc_release(uVar1);
    puStack_60 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1000257a0;
    puStack_48 = &UNK_1000a1d58;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    _objc_retainBlock();
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 == 0) {
      (**(code **)((long)ppuVar4 + 0x10))(ppuVar4);
    }
    else {
      func_0x000100074180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006ed00();
      _objc_release(lVar3);
    }
    _objc_release(ppuVar4);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1000257a0; end: 1000257ab;  */

void FUN_1000257a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006d350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processNotificationRequestAfter_1000cfcc8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1000257ac; end: 100025a37; -[SCNSELoggedOutDelegate _processNotificationRequestAfterReceiveAck:] */

void FUN_1000257ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x000100072060(lVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = lVar3;
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x48);
  func_0x0001000713a0();
  _objc_opt_class(param_1);
  if (lVar4 == 0) {
    uVar8 = 3;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    func_0x000100074120();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    FUN_100021e88();
    _objc_release(uVar5);
    if ((uVar6 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___SCNotifExtModifierCallback_1000d1d70;
      _objc_alloc(PTR__OBJC_CLASS___SCNotifExtModifierCallback_1000d1d70);
      func_0x000100070c80();
      lVar4 = param_3;
      func_0x00010006e720();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x000100074620();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x0001000713a0();
      if (lVar4 == 0) {
        if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
          _objc_opt_class(param_1);
          uVar8 = 7;
        }
        else {
          lVar4 = *(long *)(param_1 + 0x18);
          func_0x000100074180();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar4 != 0) {
            func_0x00010006d360(param_1,param_2,param_3);
            goto LAB_100025a08;
          }
          _objc_opt_class(param_1);
          uVar8 = 0x15;
        }
        func_0x00010006d780(param_1,param_2,uVar8);
      }
      else {
        _objc_opt_class(param_1);
        puVar7 = PTR_PTR_1000d1cf8;
        _objc_alloc_init();
        uVar8 = *(undefined8 *)(param_1 + 0x38);
        *(undefined **)(param_1 + 0x38) = puVar7;
        _objc_release(uVar8);
        func_0x00010006ed60(*(undefined8 *)(param_1 + 0x38),param_2,param_3,puVar2,1);
      }
LAB_100025a08:
      _objc_release(lVar3);
      _objc_release(puVar2);
      goto LAB_100025a18;
    }
    _objc_opt_class(param_1);
    uVar8 = 0x14;
  }
  func_0x00010006d780(param_1,param_2,uVar8);
LAB_100025a18:
  _objc_release(param_3);
  return;
}



/* Entry: 100025a38; end: 100025a8f;  */

void FUN_100025a38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar1);
  func_0x00010006c480(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_2);
  return;
}



/* Entry: 100025a90; end: 100025a9b;  */

void FUN_100025a90(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010006d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__suppressNotificationWithReason__1000cfdd8,
             param_2);
  return;
}



/* Entry: 100025a9c; end: 100025b57; -[SCNSELoggedOutDelegate _processUsingNativeHandler:] */

void FUN_100025a9c(undefined8 param_1)

{
  func_0x00010006d220();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000746e0();
  _objc_release(param_1);
  return;
}



/* Entry: 100025b58; end: 100025da7; -[SCNSELoggedOutDelegate _nativeProcessingFutureForRequest:] */

void FUN_100025b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___SCPromise_1000d1d78;
  _objc_retain(param_3);
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___SCDisposableObserverLifecycle_1000d1d80;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar2;
  _objc_release(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100074180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010006f7a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x100025cb4;
  puStack_58 = &UNK_1000a1ef8;
  lStack_50 = param_1;
  puStack_48 = puVar1;
  _objc_retain(puVar1);
  uVar4 = uVar5;
  func_0x000100073f80(uVar5,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006e0e0();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100074180(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100071da0();
  _objc_release(param_3);
  _objc_release(uVar5);
  puVar2 = puVar1;
  func_0x00010006f600(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 100025da8; end: 100025e5f; -[SCNSELoggedOutDelegate _handleNativeProcessingResult:] */

void FUN_100025da8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
LAB_100025e30:
    uVar2 = 0x13;
  }
  else {
    lVar1 = param_3;
    func_0x000100072720();
    if (lVar1 < 3) {
      if (lVar1 == 0) goto LAB_100025e28;
      if (lVar1 == 1) {
        _objc_opt_class(param_1);
        func_0x00010006c340(param_1);
        goto LAB_100025e3c;
      }
      if (lVar1 != 2) goto LAB_100025e3c;
LAB_100025e1c:
      uVar2 = 0xe;
    }
    else {
      if (lVar1 - 4U < 4) {
LAB_100025e28:
        _objc_opt_class(param_1);
        goto LAB_100025e30;
      }
      if (lVar1 == 8) goto LAB_100025e1c;
      if (lVar1 != 3) goto LAB_100025e3c;
      _objc_opt_class(param_1);
      uVar2 = 0xd;
    }
  }
  func_0x00010006d780(param_1,param_2,uVar2);
LAB_100025e3c:
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 100025e60; end: 10002627f; -[SCNSELoggedOutDelegate _checkOTLAndMaybeDisplay] */

void FUN_100025e60(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
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
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (uVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSString_1000d1d68;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
    uVar1 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar3);
    if ((uVar1 & 1) != 0) {
      uVar1 = uVar2;
      FUN_100068c40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      FUN_100068e90();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      FUN_100068d7c();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 == 0 || uVar4 != 0) {
LAB_1000261e8:
        _objc_opt_class(param_1);
        func_0x00010006d780(param_1);
      }
      else {
        uVar18 = uVar5;
        func_0x00010006ee00();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar18;
        func_0x00010006ede0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010006fbe0();
        if ((int)uVar7 == 0) {
LAB_1000261d8:
          _objc_release(uVar6);
          _objc_release(uVar18);
          goto LAB_1000261e8;
        }
        uVar7 = uVar5;
        func_0x00010006ee00();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010006ede0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x000100071740();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x0001000742e0();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar10;
        func_0x0001000713a0();
        if (uVar11 == 0) {
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          goto LAB_1000261d8;
        }
        uVar11 = uVar5;
        func_0x00010006ee00();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar11;
        func_0x00010006ede0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        func_0x000100071740();
        _objc_retainAutoreleasedReturnValue();
        uVar14 = uVar13;
        func_0x00010006e340();
        _objc_retainAutoreleasedReturnValue();
        uVar15 = uVar14;
        func_0x0001000713a0();
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(uVar18);
        if (uVar15 == 0) goto LAB_1000261e8;
        uVar18 = uVar5;
        func_0x00010006ee00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar18;
        func_0x00010006ede0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x000100071740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        _objc_release(uVar18);
        _objc_opt_class(param_1);
        uVar16 = *(undefined8 *)(param_1 + 0x30);
        func_0x000100071be0();
        uVar18 = uVar7;
        func_0x0001000742e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x000100073760(uVar16);
        _objc_release(uVar18);
        uVar18 = uVar7;
        func_0x00010006e340(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x000100072ba0(uVar16);
        _objc_release(uVar18);
        uVar17 = uVar16;
        func_0x00010006e800();
        uVar20 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x30) = uVar17;
        _objc_release(uVar20);
        uVar18 = *(ulong *)(param_1 + 0x30);
        func_0x000100074620();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar18;
        func_0x000100072060();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar18);
        puVar3 = PTR__OBJC_CLASS___NSString_1000d1d68;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
        uVar8 = uVar6;
        _objc_opt_isKindOfClass(uVar6,puVar3);
        uVar18 = uVar6;
        if ((uVar8 & 1) == 0) {
          uVar18 = 0;
        }
        _objc_retain(uVar18);
        _objc_release(uVar6);
        uVar6 = uVar18;
        func_0x0001000713a0();
        if (uVar6 == 0) {
          _objc_opt_class(param_1);
          func_0x00010006d780(param_1);
        }
        else {
          puVar3 = PTR_PTR_1000d1d90;
          _objc_opt_new();
          puVar19 = puVar3;
          func_0x0001000710c0();
          if ((int)puVar19 == 0) {
            func_0x00010006d780(param_1);
          }
          else {
            func_0x00010006c480(param_1);
          }
          _objc_release(puVar3);
        }
        _objc_release(uVar18);
        _objc_release(uVar16);
        _objc_release(uVar7);
      }
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar1);
      goto LAB_100026214;
    }
  }
  _objc_opt_class(param_1);
  func_0x00010006d780(param_1);
LAB_100026214:
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar2);
  return;
}



/* Entry: 100026280; end: 1000262af; -[SCNSELoggedOutDelegate serviceExtensionTimeWillExpire] */

void FUN_100026280(long param_1)

{
  _objc_opt_class();
  func_0x00010006eea0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010006d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (param_1,PTR_s__suppressNotificationWithReason__1000cfdd8,0xb);
  return;
}



/* Entry: 1000262b0; end: 10002642f; -[SCNSELoggedOutDelegate _displayNotification] */

void FUN_1000262b0(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x100026364;
  puStack_40 = &UNK_1000a1cc8;
  ppuVar1 = &puStack_58;
  lStack_38 = param_1;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    func_0x000100074180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006ece0();
    _objc_release(lVar2);
  }
  _objc_release(ppuVar1);
  return;
}



/* Entry: 100026430; end: 1000265a7; -[SCNSELoggedOutDelegate _suppressNotificationWithReason:] */

void FUN_100026430(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1000264fc;
  puStack_48 = &UNK_1000a1f28;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retainBlock();
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x0001000713a0();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x000100074180(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006ed80();
      _objc_release(uVar3);
      goto LAB_1000264e0;
    }
  }
  (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
LAB_1000264e0:
  _objc_release(ppuVar1);
  return;
}



/* Entry: 1000265a8; end: 10002660f; -[SCNSELoggedOutDelegate _takePendingContentHandler] */

void FUN_1000265a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _os_unfair_lock_lock(param_1 + 0x50);
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
    _objc_release(uVar2);
  }
  _os_unfair_lock_unlock(param_1 + 0x50);
  lVar3 = lVar1;
  _objc_retainBlock(lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(lVar3);
  return;
}



/* Entry: 100026610; end: 1000266ab; -[SCNSELoggedOutDelegate .cxx_destruct] */

void FUN_100026610(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 1000266ac; end: 10002676b; -[SCNSEUnfinishedProcessingTracker initWithUserId:] */

undefined1 * FUN_1000266ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1000d2400;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x15,0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = "com.snapchat.notification.service.extension.unfinished.processing.tracker";
    _dispatch_queue_create
              ("com.snapchat.notification.service.extension.unfinished.processing.tracker",uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(char **)((long)puVar1 + 0x10) = pcVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10002676c; end: 100026913; -[SCNSEUnfinishedProcessingTracker setExecutionEvent:forNotificationId:] */

void FUN_10002676c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puStack_68 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x100026830;
    puStack_50 = &UNK_1000a1f88;
    lStack_48 = param_1;
    _objc_retain(param_4);
    lStack_40 = param_4;
    _objc_retain(param_3);
    lStack_38 = param_3;
    _dispatch_async(uVar1,&puStack_68);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100026914; end: 100026a23;  */

void FUN_100026914(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1000d1da0;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010006ffa0();
  _objc_release(param_2);
  func_0x000100073560(puVar1);
  puVar2 = puVar1;
  func_0x00010006eb40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8);
  }
  func_0x000100073360(puVar2);
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0;
  func_0x00010006dd60(PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar3);
  return;
}



/* Entry: 100026a24; end: 100026aaf; -[SCNSEUnfinishedProcessingTracker removeExecutionEventForNotificationId:] */

void FUN_100026a24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100026ab0;
  puStack_48 = &UNK_1000a1d58;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _dispatch_sync(uVar1,&puStack_60);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 100026ab0; end: 100026b73;  */

void FUN_100026ab0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98);
  func_0x000100070000();
  puStack_48 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100026b74;
  puStack_30 = &UNK_1000a1fb8;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_50 = 0;
  uStack_28 = uVar2;
  func_0x000100071b60(puVar1,param_2,&puStack_48,&uStack_50);
  uVar2 = uStack_50;
  _objc_retain(uStack_50);
  _objc_release(uStack_28);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 100026b74; end: 100026c6f;  */

void FUN_100026b74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1000d1da0;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010006ffa0();
  _objc_release(param_2);
  func_0x000100073560(puVar1);
  puVar2 = puVar1;
  func_0x00010006eb40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableDictionary_1000d1da8);
  puVar4 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar3);
  puVar3 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar2);
  func_0x000100073360(puVar3);
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0;
  func_0x00010006dd60(PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 100026c70; end: 100026c9f; -[SCNSEUnfinishedProcessingTracker .cxx_destruct] */

void FUN_100026c70(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100026ca0; end: 100026d17; -[SCNotificationExtensionBadgeOrchestrator initWithNotificationCenter:] */

undefined1 * FUN_100026ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2408;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100026d18; end: 100026dfb; -[SCNotificationExtensionBadgeOrchestrator updateBadgeCount:badgeCountProviders:completion:] */

void FUN_100026d18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_80 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100026dfc;
  puStack_68 = &UNK_1000a1fe8;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010006f6e0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100026dfc; end: 100026e0f;  */

void FUN_100026dfc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010006d8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateBadgeCount_notifications__1000cfe30,
             *(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 100026e10; end: 100026e8b;  */

void FUN_100026e10(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010006b818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_1000a00d8)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  return;
}



/* Entry: 100026e8c; end: 10002740f; -[SCNotificationExtensionBadgeOrchestrator _updateBadgeCount:notifications:badgeCountProviders:completion:] */

void FUN_100026e8c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  code *pcStack_3b8;
  undefined *puStack_3b0;
  undefined8 uStack_3a8;
  undefined8 *puStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  code *pcStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 uStack_360;
  long lStack_358;
  undefined8 *puStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  code *pcStack_338;
  undefined *puStack_330;
  undefined8 *puStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  code *pcStack_310;
  undefined *puStack_308;
  undefined8 *puStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_1b0 = &uStack_1b8;
  uStack_1b8 = 0;
  uStack_1a8 = 0x3032000000;
  pcStack_1a0 = FUN_100027410;
  uStack_198 = 0x100027420;
  uStack_190 = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1000d1db8;
  _objc_opt_new();
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  lStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  plStack_1f0 = (long *)0x0;
  _objc_retain(param_5);
  lVar7 = param_5;
  func_0x00010006e860();
  puVar1 = PTR___NSConcreteStackBlock_1000a00f0;
  if (lVar7 != 0) {
    lVar8 = *plStack_1f0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1f0 != lVar8) {
          _objc_enumerationMutation(param_5);
        }
        uVar3 = *(undefined8 *)(lStack_1f8 + lVar11 * 8);
        func_0x00010006e020(uVar3);
        _objc_retainAutoreleasedReturnValue();
        puStack_228 = puVar1;
        uStack_220 = 0xc2000000;
        uStack_218 = 0x100027428;
        puStack_210 = &UNK_1000a2018;
        _objc_retain(puVar2);
        puStack_208 = puVar2;
        func_0x000100071960(uVar3);
        _objc_release(uVar3);
        _objc_release(puStack_208);
        lVar11 = lVar11 + 1;
      } while (lVar7 != lVar11);
      lVar7 = param_5;
      func_0x00010006e860();
    } while (lVar7 != 0);
  }
  lVar7 = param_5;
  _objc_release();
  _dispatch_group_create();
  lStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  plStack_260 = (long *)0x0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  _objc_retain(param_5);
  lVar8 = param_5;
  func_0x00010006e860();
  if (lVar8 != 0) {
    lVar11 = *plStack_260;
    do {
      lVar10 = 0;
      do {
        if (*plStack_260 != lVar11) {
          _objc_enumerationMutation(param_5);
        }
        uVar9 = *(undefined8 *)(lStack_268 + lVar10 * 8);
        uStack_2a0 = 0;
        uStack_290 = 0x3032000000;
        pcStack_288 = FUN_100027434;
        pcStack_280 = FUN_10002745c;
        uStack_278 = 0;
        uVar3 = uVar9;
        puStack_298 = &uStack_2a0;
        func_0x00010006e020(uVar9);
        _objc_retainAutoreleasedReturnValue();
        puStack_2c8 = puVar1;
        uStack_2c0 = 0xc2000000;
        pcStack_2b8 = FUN_100027464;
        puStack_2b0 = &UNK_1000a2078;
        puStack_2f8 = puVar1;
        uStack_2f0 = 0xc2000000;
        pcStack_2e8 = FUN_100027640;
        puStack_2e0 = &UNK_1000a20a8;
        puStack_2d0 = &uStack_2a0;
        puStack_2a8 = &uStack_2a0;
        _objc_retain(puVar2);
        puStack_320 = puVar1;
        uStack_318 = 0xc2000000;
        pcStack_310 = FUN_10002785c;
        puStack_308 = &UNK_1000a2108;
        puStack_300 = &uStack_2a0;
        puStack_2d8 = puVar2;
        func_0x000100071960(uVar3);
        puStack_348 = puVar1;
        uStack_340 = 0xc2000000;
        pcStack_338 = FUN_100027aec;
        puStack_330 = &UNK_1000a2138;
        uVar4 = param_4;
        puStack_328 = &uStack_2a0;
        _SCFilterArray(param_4,&puStack_348);
        lVar5 = puStack_298[5];
        (**(code **)(lVar5 + 0x10))(lVar5,param_3);
        if ((int)lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          _objc_retain(param_3);
          lVar5 = param_3;
        }
        _dispatch_group_enter(lVar7);
        uVar6 = 0;
        _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_398 = puVar1;
        uStack_390 = 0xc2000000;
        pcStack_388 = FUN_100027b44;
        puStack_380 = &UNK_1000a2198;
        puStack_350 = &uStack_1b8;
        uStack_378 = uVar9;
        uStack_370 = uVar4;
        lStack_368 = lVar5;
        uStack_360 = param_1;
        _objc_retain(lVar7);
        lStack_358 = lVar7;
        _objc_retain(lVar5);
        _objc_retain(uVar4);
        _dispatch_async(uVar6,&puStack_398);
        _objc_release(uVar6);
        _objc_release(lStack_358);
        _objc_release(lStack_368);
        _objc_release(uStack_370);
        _objc_release(lVar5);
        _objc_release(uVar4);
        _objc_release(puStack_2d8);
        _objc_release(uVar3);
        __Block_object_dispose(&uStack_2a0,8);
        _objc_release(uStack_278);
        lVar10 = lVar10 + 1;
      } while (lVar8 != lVar10);
      lVar8 = param_5;
      func_0x00010006e860();
    } while (lVar8 != 0);
  }
  _objc_release(param_5);
  uVar3 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_3c8 = puVar1;
  uStack_3c0 = 0xc2000000;
  pcStack_3b8 = FUN_100027d84;
  puStack_3b0 = &UNK_1000a21c8;
  puStack_3a0 = &uStack_1b8;
  uStack_3a8 = param_6;
  _objc_retain();
  _dispatch_group_notify(lVar7,uVar3,&puStack_3c8);
  _objc_release(uVar3);
  _objc_release(uStack_3a8);
  _objc_release(lVar7);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_1b8,8);
  _objc_release(uStack_190);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = 8;
  __Block_object_dispose(&uStack_1b8);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  return;
}



/* Entry: 100027410; end: 100027433;  */

void FUN_100027410(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100027434; end: 10002745b;  */

void FUN_100027434(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 10002745c; end: 100027463;  */

void FUN_10002745c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100027464; end: 1000274fb;  */

void FUN_100027464(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1000274fc;
  puStack_30 = &UNK_1000a2048;
  uStack_28 = param_2;
  _objc_retain(param_2);
  ppuVar1 = &puStack_48;
  _objc_retainBlock();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined ***)(lVar3 + 0x28) = ppuVar1;
  _objc_release(uVar2);
  _objc_release(uStack_28);
  _objc_release(param_2);
  return;
}



/* Entry: 1000274fc; end: 100027623;  */

undefined8 FUN_1000274fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_2;
    func_0x00010006e720(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100072060(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006e6e0(uVar5);
    _objc_release(lVar3);
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(param_2);
  return uVar5;
}


