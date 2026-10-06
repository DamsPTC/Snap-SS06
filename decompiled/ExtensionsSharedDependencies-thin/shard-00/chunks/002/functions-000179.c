/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00439b6c; end: 00439bb3; -[SCArchiveLoader .cxx_destruct] */

void FUN_00439b6c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00439bb4; end: 00439bb7; -[SCArchiveUtils startServicesWithGrapheneRegistry:] */

void FUN_00439bb4(void)

{
  return;
}



/* Entry: 00439bb8; end: 00439c0b; +[SCArchiveUtils shared] */

void FUN_00439bb8(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b5fda8 != -1) {
    _dispatch_once(0xb5fda8,&PTR___NSConcreteGlobalBlock_009e3ff0);
  }
  uVar1 = uRam0000000000b5fda0;
  _objc_retain(uRam0000000000b5fda0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00439c0c; end: 00439c37;  */

void FUN_00439c0c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac2cd8;
  _objc_alloc_init();
  uVar1 = puRam0000000000b5fda0;
  puRam0000000000b5fda0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00439c38; end: 00439c9b; -[SCArchiveUtils init] */

undefined1 * FUN_00439c38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3b78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac2ce0;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00439c9c; end: 00439d23; -[SCArchiveUtils saveObject:toPath:] */

undefined8 FUN_00439c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_opt_class(param_3);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078bec0(param_1,param_2,param_3,param_4,uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 00439d24; end: 00439edb; -[SCArchiveUtils saveObject:toPath:type:] */

undefined8
FUN_00439d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  FUN_0043a178(param_3,param_4);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  func_0x00782040(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078cce0();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0077f480();
  _objc_retainAutoreleasedReturnValue();
  func_0x007834a0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00788720(param_1);
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  func_0x007834e0(PTR__OBJC_CLASS___NSURL_00ac2a90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  if ((int)param_3 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078ff40(puVar2);
    _objc_retain(0);
    _objc_release(puVar3);
    _objc_release(0);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  return param_3;
}



/* Entry: 00439edc; end: 0043a003; -[SCArchiveUtils loadObjectOfType:fromPath:] */

void FUN_00439edc(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x0043a314();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  _NSClassFromString();
  _objc_retain(uVar1);
  if ((lVar2 == 0) || (uVar3 = uVar1, _objc_opt_isKindOfClass(uVar1,lVar2), (uVar3 & 1) == 0)) {
    _objc_release(uVar1);
LAB_00439f58:
    lVar2 = param_3;
    _NSProtocolFromString();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    if (lVar2 == 0) {
      _objc_release();
      _objc_release(0);
      uVar3 = 0;
    }
    else {
      uVar4 = uVar1;
      FUN_0076f6e8(uVar1,lVar2);
      _objc_release(uVar1);
      _objc_release(lVar2);
      uVar3 = 0;
      if (((int)uVar4 != 0) && (uVar1 != 0)) goto LAB_00439fc0;
    }
  }
  else {
    uVar3 = uVar1;
    if (uVar1 == 0) goto LAB_00439f58;
  }
  _objc_release(uVar1);
  uVar1 = uVar3;
LAB_00439fc0:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0043a004; end: 0043a0ab; -[SCArchiveUtils removeFileAtPath:] */

undefined * FUN_0043a004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x007833a0();
  _objc_release(puVar2);
  if ((int)puVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
    func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x0078b3e0();
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 0043a0ac; end: 0043a10f; -[SCArchiveUtils pathWithFileName:] */

void FUN_0043a0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_005b5b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00791e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0043a110; end: 0043a16b; -[SCArchiveUtils logArchiveWritesWithType:fileSize:] */

void FUN_0043a110(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  FUN_00443e5c(uVar1,param_3,1);
  FUN_00443ff4(*(undefined8 *)(param_1 + 8),param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0043a16c; end: 0043a177; -[SCArchiveUtils .cxx_destruct] */

void FUN_0043a16c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0043a178; end: 0043a5f3;  */

/* WARNING: Removing unreachable block (ram,0x0043a2ac) */

undefined1 * FUN_0043a178(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
  _objc_retainAutoreleasedReturnValue();
  func_0x007833a0();
  _objc_release(puVar1);
  if (lRam0000000000b5fdb8 != -1) {
    _dispatch_once(0xb5fdb8,&PTR___NSConcreteGlobalBlock_009e4010);
  }
  if (cRam0000000000b5fdb0 == '\x01') {
    puVar1 = PTR_PTR_00ac2ce8;
    func_0x00781760();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined1 *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSData_00ac2b10;
      _objc_alloc_init(PTR__OBJC_CLASS___NSData_00ac2b10);
    }
    puVar2 = puVar1;
    func_0x0078c180(puVar1);
    _objc_retain(0);
    puVar3 = PTR_PTR_00ac2cf0;
    func_0x007914e0(PTR_PTR_00ac2cf0);
    _objc_retainAutoreleasedReturnValue();
    func_0x007887e0();
    _objc_release(0);
    _objc_release(puVar3);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8;
    func_0x0077efe0(PTR__OBJC_CLASS___NSKeyedArchiver_00ac2ac8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    func_0x0078c160(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 0043a5f4; end: 0043a61f;  */

void FUN_0043a5f4(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_00a4ea48;
  func_0x00787200();
  uRam0000000000b5fdb0 = ppuVar1 != (undefined **)0x2;
  return;
}



/* Entry: 0043a620; end: 0043a713;  */

bool FUN_0043a620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retainAutorelease(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x007834c0();
  uVar1 = param_4;
  _objc_retainAutorelease(param_4);
  func_0x0077bcc0();
  _objc_release(param_4);
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x0077fde0();
  uVar3 = param_3;
  func_0x007882e0(param_3);
  _objc_release(param_3);
  _setxattr(param_5,uVar1,uVar2,uVar3,0,1);
  if ((param_6 != (undefined8 *)0x0) && ((int)param_5 != 0)) {
    puVar4 = PTR__OBJC_CLASS___NSError_00ac2b00;
    func_0x00782e40();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_6 = puVar4;
  }
  return (int)param_5 == 0;
}



/* Entry: 0043a714; end: 0043a877;  */

void FUN_0043a714(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  _objc_retainAutorelease();
  func_0x007834c0();
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x007834c0();
  _getxattr(lVar1,uVar2,0,0,0,1);
  if (lVar1 == -1) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
    func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_4;
    _objc_retainAutorelease();
    func_0x007834c0();
    uVar2 = param_3;
    _objc_retainAutorelease(param_3);
    func_0x0077bcc0();
    puVar5 = puVar3;
    _objc_retainAutorelease(puVar3);
    func_0x007896e0();
    _getxattr(lVar4,uVar2,puVar5,lVar1,0,1);
    puVar5 = PTR__OBJC_CLASS___NSError_00ac2b00;
    if ((param_5 != (undefined8 *)0x0) && (lVar4 != lVar1)) {
      ___error();
      func_0x00782e40();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = puVar5;
    }
    puVar5 = puVar3;
    func_0x00780e20(puVar3);
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 0043a878; end: 0043a8d3;  */

undefined4 FUN_0043a878(void)

{
  func_0x007833c0();
  return 0;
}



/* Entry: 0043a8d4; end: 0043aa17;  */

void FUN_0043a8d4(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  ppuVar4 = &puStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar1 = param_3;
  _objc_retain(param_3);
  if (param_3 == (undefined **)0x0) {
    ppuVar5 = (undefined **)0x0;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    puStack_120 = (undefined *)0x0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    ppuVar1 = param_3;
    func_0x0078a420();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00780ea0();
    if (ppuVar2 != (undefined **)0x0) {
      lVar6 = *plStack_110;
      do {
        ppuVar7 = (undefined **)0x0;
        do {
          if (*plStack_110 != lVar6) {
            _objc_enumerationMutation(ppuVar1);
          }
          ppuVar5 = *(undefined ***)(lStack_118 + (long)ppuVar7 * 8);
          ppuVar3 = ppuVar5;
          ppuVar4 = &PTR____CFConstantStringClassReference_00a24b80;
          func_0x007878e0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_00a24b80);
          if ((int)ppuVar3 == 0) {
            _objc_retain(ppuVar5);
            goto LAB_0043a9c4;
          }
          ppuVar7 = (undefined **)((long)ppuVar7 + 1);
        } while (ppuVar2 != ppuVar7);
        ppuVar2 = ppuVar1;
        ppuVar4 = &puStack_120;
        func_0x00780ea0(ppuVar1,param_2,&puStack_120,auStack_d8,0x10);
      } while (ppuVar2 != (undefined **)0x0);
    }
    ppuVar5 = (undefined **)0x0;
LAB_0043a9c4:
    _objc_release(ppuVar1);
    ppuVar1 = ppuVar4;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    ppuVar4 = ppuVar1;
    _objc_retain(ppuVar1);
    func_0x005b5cd8();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00791e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    func_0x007834e0(param_3,param_2,ppuVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    ppuVar5 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar5);
  return;
}



/* Entry: 0043aa18; end: 0043aa9f;  */

void FUN_0043aa18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x005b5cd8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00791e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x007834e0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0043aaa0; end: 0043aba7;  */

void FUN_0043aaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00791ea0(param_3,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078bfc0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0043aba8; end: 0043abc3;  */

void FUN_0043aba8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078ff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_setResourceValue_forKey_error__00abece0,PTR____kCFBooleanTrue_00999d28,
             *(undefined8 *)PTR__NSURLIsExcludedFromBackupKey_00999d00,0);
  return;
}



/* Entry: 0043abc4; end: 0043ac27;  */

undefined8 FUN_0043abc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  uStack_30 = 0;
  func_0x007840a0(param_1,param_2,&uStack_28,
                  *(undefined8 *)PTR__NSURLIsExcludedFromBackupKey_00999d00,&uStack_30);
  uVar2 = uStack_28;
  uVar1 = uStack_30;
  _objc_retain(uStack_30);
  func_0x0077fbc0(uVar2);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 0043ac28; end: 0043aca7; -[SCAbandonedDirectoryCheck initWithDirectory:] */

undefined1 * FUN_0043ac28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3b80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = 0x41446f4000000000;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0043aca8; end: 0043ad2f; +[SCAbandonedDirectoryCheck markDirectory:] */

undefined8 FUN_0043aca8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  _objc_retain(param_3);
  func_0x007817e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x0078ff40(param_3,param_2,puVar1,
                  *(undefined8 *)PTR__NSURLContentModificationDateKey_00999ce0,&uStack_38);
  _objc_release(param_3);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 0043ad30; end: 0043adbf; -[SCAbandonedDirectoryCheck _shouldIgnoreDirectory:toIgnore:] */

long FUN_0043ad30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) {
    lVar2 = 0;
    func_0x00780e80();
    if (lVar2 != 0) {
      lVar2 = 0;
      goto LAB_0043ad9c;
    }
  }
  uVar1 = param_3;
  func_0x00783480(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00780c20(param_4,param_2,uVar1);
  _objc_release(uVar1);
LAB_0043ad9c:
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 0043adc0; end: 0043b0b3; -[SCAbandonedDirectoryCheck sweepDirectoriesWhileIgnoring:dispatchGroup:] */

long FUN_0043adc0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  double dVar14;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  dVar14 = 6.81691147847594e-313;
  uStack_b8 = 0x2020000000;
  uStack_b0 = 0;
  puVar3 = PTR_PTR_00ac2cf8;
  _objc_alloc_init();
  puVar6 = PTR_PTR_00ac2d00;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x0078a400(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uStack_88 = *(undefined8 *)PTR__NSURLContentModificationDateKey_00999ce0;
  uStack_80 = *(undefined8 *)PTR__NSURLIsDirectoryKey_00999cf8;
  puVar5 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_00999f30;
  puStack_110 = PTR___NSConcreteStackBlock_00999f30;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_0043b0b4;
  puStack_f8 = &UNK_009e4030;
  lStack_f0 = param_1;
  _objc_retain(param_3);
  puStack_d0 = &uStack_c8;
  lStack_e8 = param_3;
  _objc_retain(puVar2);
  puStack_e0 = puVar2;
  _objc_retain(puVar3);
  puStack_d8 = puVar3;
  func_0x00792e00(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  ppuStack_a8 = &PTR____CFConstantStringClassReference_00a25080;
  puVar6 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_00a252a0;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  puStack_98 = puVar6;
  puStack_90 = puVar2;
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar5;
  _objc_release(uVar4);
  _objc_release(puVar6);
  if (param_4 == 0) {
    ppuVar12 = (undefined **)0x0;
  }
  else {
    _dispatch_group_enter(param_4);
    puStack_138 = puVar1;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_0043b270;
    puStack_120 = &UNK_009e4060;
    _objc_retain(param_4);
    ppuVar12 = &puStack_138;
    lStack_118 = param_4;
    _objc_retainBlock();
    _objc_release(lStack_118);
  }
  ppuVar10 = ppuVar12;
  func_0x00780320(puVar3);
  _objc_release(ppuVar12);
  _objc_release(puStack_d8);
  _objc_release(puStack_e0);
  _objc_release(lStack_e8);
  _objc_release(puVar3);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_78) {
    return param_3;
  }
  ___stack_chk_fail();
  uVar4 = 8;
  __Block_object_dispose(&uStack_c8,8);
  __Unwind_Resume();
  _objc_retain(uVar4);
  _objc_retain(ppuVar10);
  ppuVar12 = ppuVar10;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar12;
  func_0x0077fbc0();
  _objc_release(ppuVar12);
  if ((int)ppuVar7 != 0) {
    ppuVar12 = ppuVar10;
    func_0x00789f00(ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00792920();
    uVar8 = *(ulong *)(param_3 + 0x20);
    if ((dVar14 < -*(double *)(uVar8 + 0x10)) && (func_0x0077dbc0(), (uVar8 & 1) == 0)) {
      lVar11 = *(long *)(*(long *)(param_3 + 0x40) + 8);
      *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
      uVar13 = *(undefined8 *)(param_3 + 0x30);
      uVar9 = uVar4;
      func_0x00788240(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077e720(uVar13);
      _objc_release(uVar9);
      func_0x00789580(*(undefined8 *)(param_3 + 0x38));
    }
    _objc_release(ppuVar12);
  }
  _objc_release(ppuVar10);
  _objc_release(uVar4);
  return 1;
}



/* Entry: 0043b0b4; end: 0043b1df;  */

undefined8 FUN_0043b0b4(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077fbc0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_4;
    func_0x00789f00(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00792920();
    uVar3 = *(ulong *)(param_2 + 0x20);
    if ((param_1 < -*(double *)(uVar3 + 0x10)) && (func_0x0077dbc0(), (uVar3 & 1) == 0)) {
      lVar4 = *(long *)(*(long *)(param_2 + 0x40) + 8);
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      uVar2 = param_3;
      func_0x00788240(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077e720(uVar5);
      _objc_release(uVar2);
      func_0x00789580(*(undefined8 *)(param_2 + 0x38));
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 0043b1e0; end: 0043b26f;  */

void FUN_0043b1e0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  return;
}



/* Entry: 0043b270; end: 0043b277;  */

void FUN_0043b270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077a42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_0099a128)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 0043b278; end: 0043b30b; -[SCAbandonedDirectoryCheck kindName] */

void FUN_0043b278(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00788240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00788bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x007843a0();
  func_0x0078c100(puVar3,param_2,&PTR____CFConstantStringClassReference_00a24be0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0043b30c; end: 0043b37b; -[SCAbandonedDirectoryCheck removeExpiredContentAsyncForReason:dispatchGroup:] */

void FUN_0043b30c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_00ac2a68;
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_4);
  func_0x0078c940(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792580(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 0043b37c; end: 0043b37f; -[SCAbandonedDirectoryCheck removeAllUserSessionDataAsync] */

void FUN_0043b37c(void)

{
  return;
}



/* Entry: 0043b380; end: 0043b383; -[SCAbandonedDirectoryCheck handleEmergencyDiskConditionWithDispatchGroup:] */

void FUN_0043b380(void)

{
  return;
}



/* Entry: 0043b384; end: 0043b3ab; -[SCAbandonedDirectoryCheck reportMetrics] */

void FUN_0043b384(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0043b3ac; end: 0043b3db; -[SCAbandonedDirectoryCheck .cxx_destruct] */

void FUN_0043b3ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0043b3dc; end: 0043b517; -[SCDirectoryScrubMatcher initWithMatch:type:olderThan:lastModifiedRequired:policyPath:] */

undefined1 *
FUN_0043b3dc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_00ac3b88;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x0077d5a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSDate_00ac2c88;
    func_0x00781940(-param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_6;
    if (param_7 == 0) {
      func_0x0077db00(puVar1);
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_00a24e00;
      func_0x00791ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
      *(undefined ***)((long)puVar1 + 0x30) = ppuVar5;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 0043b518; end: 0043b53f; -[SCDirectoryScrubMatcher pattern] */

void FUN_0043b518(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0043b540; end: 0043b787; -[SCDirectoryScrubMatcher _setMetricsIdentifier] */

void FUN_0043b540(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x007878e0(uVar1,param_2,&PTR____CFConstantStringClassReference_00a24c00);
  if ((int)uVar1 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x007878e0(uVar1,param_2,&PTR____CFConstantStringClassReference_00a24c20);
    if ((int)uVar1 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      func_0x007878e0(uVar1,param_2,&PTR____CFConstantStringClassReference_00a24c40);
      if ((int)uVar1 == 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x10);
        func_0x007878e0(uVar1,param_2,&PTR____CFConstantStringClassReference_00a24c60);
        if ((int)uVar1 == 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x10);
          func_0x007878e0(uVar1,param_2,&PTR____CFConstantStringClassReference_00a24c80);
          if ((int)uVar1 != 0) {
            uVar1 = *(undefined8 *)(param_1 + 0x30);
            *(undefined ***)(param_1 + 0x30) = &PTR____CFConstantStringClassReference_00a24c80;
            goto LAB_0043b5e0;
          }
          uVar1 = *(undefined8 *)(param_1 + 0x10);
          func_0x007878e0(uVar1,param_2,&PTR____CFConstantStringClassReference_00a24ca0);
          if ((int)uVar1 == 0) {
            uVar1 = *(undefined8 *)(param_1 + 0x10);
            func_0x007878e0(uVar1,param_2,&PTR____CFConstantStringClassReference_00a24cc0);
            if ((int)uVar1 == 0) {
              uVar1 = *(undefined8 *)(param_1 + 0x10);
              func_0x007878e0(uVar1,param_2,&PTR____CFConstantStringClassReference_00a24ce0);
              if ((int)uVar1 == 0) {
                uVar1 = *(undefined8 *)(param_1 + 0x10);
                func_0x007878e0(uVar1,param_2,&PTR____CFConstantStringClassReference_00a24d00);
                if ((int)uVar1 == 0) {
                  uVar1 = *(undefined8 *)(param_1 + 0x10);
                  func_0x007878e0(uVar1,param_2,&PTR____CFConstantStringClassReference_00a24d20);
                  if ((int)uVar1 == 0) {
                    uVar1 = *(undefined8 *)(param_1 + 0x10);
                    func_0x007878e0(uVar1,param_2,&PTR____CFConstantStringClassReference_00a24d40);
                    if ((int)uVar1 == 0) {
                      uVar1 = *(undefined8 *)(param_1 + 0x10);
                      func_0x007878e0(uVar1,param_2,&PTR____CFConstantStringClassReference_00a24da0)
                      ;
                      if ((int)uVar1 == 0) {
                        uVar1 = *(undefined8 *)(param_1 + 0x10);
                        func_0x007878e0(uVar1,param_2,
                                        &PTR____CFConstantStringClassReference_00a24d60);
                        if ((int)uVar1 == 0) {
                          uVar1 = *(undefined8 *)(param_1 + 0x10);
                          func_0x007878e0(uVar1,param_2,
                                          &PTR____CFConstantStringClassReference_00a24d80);
                          if ((int)uVar1 == 0) {
                            uVar2 = *(undefined8 *)(param_1 + 0x10);
                            func_0x007878e0(uVar2,param_2,
                                            &PTR____CFConstantStringClassReference_00a24dc0);
                            uVar1 = *(undefined8 *)(param_1 + 0x30);
                            if ((int)uVar2 == 0) {
                              ppuVar3 = &PTR____CFConstantStringClassReference_00a24fe0;
                            }
                            else {
                              ppuVar3 = &PTR____CFConstantStringClassReference_00a24fc0;
                            }
                          }
                          else {
                            uVar1 = *(undefined8 *)(param_1 + 0x30);
                            ppuVar3 = &PTR____CFConstantStringClassReference_00a24fa0;
                          }
                        }
                        else {
                          uVar1 = *(undefined8 *)(param_1 + 0x30);
                          ppuVar3 = &PTR____CFConstantStringClassReference_00a24f80;
                        }
                      }
                      else {
                        uVar1 = *(undefined8 *)(param_1 + 0x30);
                        ppuVar3 = &PTR____CFConstantStringClassReference_00a24f60;
                      }
                    }
                    else {
                      uVar1 = *(undefined8 *)(param_1 + 0x30);
                      ppuVar3 = &PTR____CFConstantStringClassReference_00a24f40;
                    }
                  }
                  else {
                    uVar1 = *(undefined8 *)(param_1 + 0x30);
                    ppuVar3 = &PTR____CFConstantStringClassReference_00a24f20;
                  }
                }
                else {
                  uVar1 = *(undefined8 *)(param_1 + 0x30);
                  ppuVar3 = &PTR____CFConstantStringClassReference_00a24f00;
                }
              }
              else {
                uVar1 = *(undefined8 *)(param_1 + 0x30);
                ppuVar3 = &PTR____CFConstantStringClassReference_00a24ee0;
              }
            }
            else {
              uVar1 = *(undefined8 *)(param_1 + 0x30);
              ppuVar3 = &PTR____CFConstantStringClassReference_00a24ec0;
            }
          }
          else {
            uVar1 = *(undefined8 *)(param_1 + 0x30);
            ppuVar3 = &PTR____CFConstantStringClassReference_00a24ea0;
          }
        }
        else {
          uVar1 = *(undefined8 *)(param_1 + 0x30);
          ppuVar3 = &PTR____CFConstantStringClassReference_00a24e80;
        }
      }
      else {
        uVar1 = *(undefined8 *)(param_1 + 0x30);
        ppuVar3 = &PTR____CFConstantStringClassReference_00a24e60;
      }
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      ppuVar3 = &PTR____CFConstantStringClassReference_00a24e40;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    ppuVar3 = &PTR____CFConstantStringClassReference_00a24e20;
  }
  *(undefined ***)(param_1 + 0x30) = ppuVar3;
LAB_0043b5e0:
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0043b788; end: 0043b7fb; -[SCDirectoryScrubMatcher _predicateForType:parameter:] */

void FUN_0043b788(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *unaff_x20;
  
  _objc_retain(param_4);
  if (param_3 < 4) {
    unaff_x20 = PTR__OBJC_CLASS___NSPredicate_00ac2d08;
    func_0x0078a7c0(PTR__OBJC_CLASS___NSPredicate_00ac2d08,param_2,(&PTR_PTR_009e4110)[param_3]);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(unaff_x20);
  return;
}



/* Entry: 0043b7fc; end: 0043b8e3; -[SCDirectoryScrubMatcher match:lastModified:] */

undefined8 FUN_0043b7fc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  if ((param_3 == 0) || ((param_4 == 0 && ((*(byte *)(param_1 + 0x28) & 1) != 0)))) {
    uVar4 = 1;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 1) {
      func_0x0078a440(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      lVar3 = *(long *)(param_1 + 0x18);
    }
    if (lVar3 != 3) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00782ec0(uVar4,param_2,lVar1);
      if ((int)uVar4 == 0) {
        uVar4 = 2;
        goto LAB_0043b8c0;
      }
    }
    if (*(char *)(param_1 + 0x28) == '\x01') {
      puVar2 = PTR__OBJC_CLASS___NSDate_00ac2c88;
      func_0x00787620(PTR__OBJC_CLASS___NSDate_00ac2c88,param_2,param_4,
                      *(undefined8 *)(param_1 + 0x20));
      if ((int)puVar2 == 0) {
        uVar4 = 3;
        goto LAB_0043b8c0;
      }
    }
    uVar4 = 0;
  }
LAB_0043b8c0:
  _objc_release(param_4);
  _objc_release(lVar1);
  return uVar4;
}



/* Entry: 0043b8e4; end: 0043b8eb; -[SCDirectoryScrubMatcher metricsIdentifier] */

undefined8 FUN_0043b8e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 0043b8ec; end: 0043b8f3; -[SCDirectoryScrubMatcher setMetricsIdentifier:] */

void FUN_0043b8ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 0043b8f4; end: 0043b93b; -[SCDirectoryScrubMatcher .cxx_destruct] */

void FUN_0043b8f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0043b93c; end: 0043b96f; -[SCDirectoryScrubber initWithDirectory:] */

void FUN_0043b93c(void)

{
  func_0x00785380();
  return;
}



/* Entry: 0043b970; end: 0043bc6b; -[SCDirectoryScrubber initWithDirectory:fileMatchers:directoryMatchers:enforceUserScoping:maxDepth:maxMatchCount:isDryRun:enableSymlinkSplicing:] */

undefined8 *
FUN_0043b970(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
            undefined *param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
            undefined4 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_98 = PTR_PTR_00ac3b90;
  puVar1 = &uStack_a0;
  uStack_a0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_00ac2d10;
    _objc_alloc();
    func_0x00785b80(0);
    puVar4 = PTR_PTR_00ac2d10;
    puStack_90 = puVar3;
    _objc_alloc();
    func_0x00785b80(0);
    puVar5 = PTR_PTR_00ac2d10;
    puStack_88 = puVar4;
    _objc_alloc();
    func_0x00785b80(0);
    puVar6 = PTR_PTR_00ac2d10;
    puStack_80 = puVar5;
    _objc_alloc();
    func_0x00785b80(0);
    puVar7 = PTR_PTR_00ac2d10;
    puStack_78 = puVar6;
    _objc_alloc();
    func_0x00785b80(0);
    puVar8 = PTR__OBJC_CLASS___NSArray_00ac2c28;
    puStack_70 = puVar7;
    func_0x0077f200();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar8;
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar4 = PTR____NSArray0__struct_00999d10;
    puVar3 = PTR____NSArray0__struct_00999d10;
    if (param_4 != (undefined *)0x0) {
      puVar3 = param_4;
    }
    _objc_retain(puVar3);
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    if (param_5 != (undefined *)0x0) {
      puVar4 = param_5;
    }
    _objc_retain(puVar4);
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 7) = param_6;
    puVar3 = PTR_PTR_00ac2ce0;
    _objc_alloc_init();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00781fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00781fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 10) = (undefined1)param_9;
    puVar1[0xb] = param_7;
    puVar1[0xc] = param_8;
    *(undefined1 *)(puVar1 + 0xd) = param_9._1_1_;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSString_00ac2988;
  uVar9 = *(undefined8 *)(param_3 + 8);
  func_0x00788240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar9;
  func_0x00788bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c100(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return puVar1;
}



/* Entry: 0043bc6c; end: 0043bcf3; -[SCDirectoryScrubber kindName] */

void FUN_0043bc6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00788240();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00788bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c100(puVar3,param_2,&PTR____CFConstantStringClassReference_00a250e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0043bcf4; end: 0043c3c7; -[SCDirectoryScrubber removeExpiredContentAsyncForReason:dispatchGroup:] */

/* WARNING: Removing unreachable block (ram,0x0043bf70) */
/* WARNING: Removing unreachable block (ram,0x0043c018) */
/* WARNING: Removing unreachable block (ram,0x0043bfd0) */

void FUN_0043bcf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_4);
  puStack_140 = &uStack_148;
  uStack_148 = 0;
  uStack_138 = 0x2020000000;
  uStack_130 = *(undefined8 *)(param_1 + 0x60);
  puStack_170 = &uStack_178;
  uStack_178 = 0;
  uStack_168 = 0x3032000000;
  pcStack_160 = FUN_0043c3c8;
  uStack_158 = 0x43c3d8;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_alloc_init();
  puVar2 = PTR_PTR_00ac2cf8;
  puStack_150 = puVar1;
  _objc_alloc_init();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x0078a420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00780e80();
  _objc_release(uVar3);
  uStack_a8 = *(undefined8 *)PTR__NSURLIsDirectoryKey_00999cf8;
  uStack_a0 = *(undefined8 *)PTR__NSURLFileSizeKey_00999cf0;
  uStack_98 = *(undefined8 *)PTR__NSURLContentModificationDateKey_00999ce0;
  uStack_90 = *(undefined8 *)PTR__NSURLCreationDateKey_00999ce8;
  uStack_88 = *(undefined8 *)PTR__NSURLContentAccessDateKey_00999cd8;
  puVar1 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  func_0x007834e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_00ac2c00;
  _objc_opt_new();
  puStack_190 = &uStack_198;
  uStack_198 = 0;
  uStack_188 = 0x2020000000;
  uStack_180 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x00780e80();
  if (lVar6 != 0) {
    ppuVar7 = *(undefined ***)(param_1 + 0x20);
    func_0x00789e20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x0078a4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar7);
    if (*(long *)(param_1 + 0x58) == 1 && ppuVar8 == &PTR____CFConstantStringClassReference_00a24de0
       ) {
      puVar9 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
      func_0x00781c40();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar9;
      func_0x00780d60();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      _objc_release(puVar9);
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00789e20(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar10;
      func_0x00789400();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar12;
      func_0x00780e80(puVar12);
      FUN_00444988(uVar14,uVar3,puVar9);
      _objc_release(uVar3);
      _objc_release(uVar10);
      _objc_retain(puVar12);
      puVar9 = puVar12;
      func_0x00780ea0();
      while (puVar9 != (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
        do {
          uVar3 = *(undefined8 *)((long)puVar13 * 8);
          func_0x0078b9e0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(0);
          _objc_release(0);
          if ((long)puStack_140[3] < 1) {
            _objc_release(uVar3);
            goto LAB_0043c168;
          }
          _objc_retainAutorelease(puVar5);
          puVar11 = puVar5;
          func_0x0077dea0(puVar5);
          _os_unfair_lock_lock();
          func_0x0077d840(param_1);
          _os_unfair_lock_unlock(puVar11);
          _objc_release(uVar3);
          puVar13 = puVar13 + 1;
        } while (puVar9 != puVar13);
        puVar9 = puVar12;
        func_0x00780ea0();
      }
LAB_0043c168:
      _objc_release(puVar12);
      _objc_release(puVar12);
      _objc_release(0);
      goto LAB_0043c180;
    }
  }
  puVar9 = PTR_PTR_00ac2d00;
  _objc_retain(puVar5);
  _objc_retain(puVar2);
  func_0x00792e00(puVar9);
  _objc_release(puVar2);
  _objc_release(puVar5);
LAB_0043c180:
  lVar6 = *(long *)(param_1 + 0x20);
  func_0x00780e80();
  puVar9 = PTR__OBJC_CLASS___NSString_00ac2988;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  if (lVar6 == 1) {
    puVar12 = *(undefined **)(param_1 + 0x20);
    func_0x00789e20(puVar12);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00789400();
    _objc_retainAutoreleasedReturnValue();
    FUN_00444814(uVar3,puVar9,puStack_190[3]);
  }
  else {
    puVar12 = *(undefined **)(param_1 + 8);
    func_0x00788240();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078c100(puVar9);
    _objc_retainAutoreleasedReturnValue();
    FUN_00444814(uVar3,puVar9,puStack_190[3]);
  }
  _objc_release(puVar9);
  _objc_release(puVar12);
  uVar3 = puStack_170[5];
  func_0x00780e20();
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  _objc_release(uVar10);
  func_0x00780320(puVar2);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x0077c8e0(param_1);
  }
  else {
    func_0x0077c8c0(param_1);
  }
  __Block_object_dispose(&uStack_198,8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_178,8);
  _objc_release(puStack_150);
  __Block_object_dispose(&uStack_148,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_198,8);
  __Block_object_dispose(&uStack_178,8);
  lVar6 = 8;
  __Block_object_dispose(&uStack_148);
  __Unwind_Resume();
  *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  return;
}



/* Entry: 0043c3c8; end: 0043c3df;  */

void FUN_0043c3c8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 0043c3e0; end: 0043c563;  */

undefined8 FUN_0043c3e0(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (0 < *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18)) {
    if (param_3 != 0) {
      cVar1 = *(char *)(*(long *)(param_1 + 0x20) + 0x68);
      lVar5 = param_2;
      func_0x0078a400();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar5;
      if (cVar1 == '\x01') {
        func_0x00791fc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
      }
      lVar3 = lVar2;
      func_0x0078a420();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00780e80();
      _objc_release(lVar3);
      uVar6 = 1;
      lVar5 = lVar5 - *(long *)(param_1 + 0x50);
      if ((-1 < lVar5) && (lVar5 <= *(long *)(*(long *)(param_1 + 0x20) + 0x58))) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        _objc_retainAutorelease(uVar4);
        func_0x0077dea0();
        _os_unfair_lock_lock();
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        func_0x0077de00(uVar6);
        _os_unfair_lock_unlock(uVar4);
      }
      goto LAB_0043c520;
    }
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    *(long *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) + 1;
  }
  lVar2 = 0;
  uVar6 = 1;
LAB_0043c520:
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar6;
}



/* Entry: 0043c564; end: 0043c6af;  */

void FUN_0043c564(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  return;
}



/* Entry: 0043c6b0; end: 0043c827; -[SCDirectoryScrubber removeAllUserSessionDataAsync] */

undefined * FUN_0043c6b0(undefined *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar2 = param_1;
  if (param_1[0x38] == '\x01') {
    puVar2 = PTR_PTR_00ac2cf8;
    _objc_alloc_init();
    puVar1 = PTR_PTR_00ac2d00;
    param_3 = *(ulong *)(param_1 + 8);
    puVar3 = PTR__OBJC_CLASS___NSArray_00ac2c28;
    func_0x0077f200();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    _objc_retain(puVar2);
    func_0x00792e00(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar5) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x0077fbc0();
  _objc_release(param_3);
  if ((uVar4 & 1) == 0) {
    func_0x007895a0(*(undefined8 *)(puVar2 + 0x20));
  }
  _objc_release(param_2);
  return (undefined *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 0043c828; end: 0043c8ab;  */

undefined8 FUN_0043c828(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x0077fbc0();
  _objc_release(param_3);
  if ((uVar1 & 1) == 0) {
    func_0x007895a0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(param_2);
  return 1;
}



/* Entry: 0043c8ac; end: 0043c8b7;  */

void FUN_0043c8ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00780330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_clearTrashAsync__00abadc0,0);
  return;
}



/* Entry: 0043c8b8; end: 0043c8bb; -[SCDirectoryScrubber handleEmergencyDiskConditionWithDispatchGroup:] */

void FUN_0043c8b8(void)

{
  return;
}



/* Entry: 0043c8bc; end: 0043c8e3; -[SCDirectoryScrubber reportMetrics] */

void FUN_0043c8bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0043c8e4; end: 0043c93b; -[SCDirectoryScrubber _emitDeleteFilesMetrics] */

void FUN_0043c8e4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_0043c93c;
  puStack_20 = &UNK_009e41c0;
  lStack_18 = param_1;
  func_0x00782b60(*(undefined8 *)(param_1 + 0x40),param_2,&puStack_38);
  return;
}



/* Entry: 0043c93c; end: 0043cac3;  */

void FUN_0043c93c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00787200();
  FUN_00444470(uVar4,&PTR____CFConstantStringClassReference_00a213e0,param_2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00787200();
  FUN_00444470(uVar4,&PTR____CFConstantStringClassReference_00a250c0,param_2,uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00789f00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00787200();
  FUN_004446a0(uVar4,param_2,uVar3);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0043cac4; end: 0043cb1b; -[SCDirectoryScrubber _emitDryDeleteFilesMetrics] */

void FUN_0043cac4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_0043cb1c;
  puStack_20 = &UNK_009e41c0;
  lStack_18 = param_1;
  func_0x00782b60(*(undefined8 *)(param_1 + 0x48),param_2,&puStack_38);
  return;
}



/* Entry: 0043cb1c; end: 0043cbef;  */

void FUN_0043cb1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00787200();
  FUN_00444188(uVar3,param_2,uVar2);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar1 = param_3;
  func_0x00789f00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00787200(uVar1);
  FUN_004442fc(uVar3,param_2,uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0043cbf0; end: 0043cef7; -[SCDirectoryScrubber _removeFileIfExpired:properties:fileTrasher:metrics:currentMaxCount:] */

void FUN_0043cbf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00789f00(param_4,param_2,*(undefined8 *)PTR__NSURLContentModificationDateKey_00999ce0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00788240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_c0 = PTR___NSConcreteStackBlock_00999f30;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x43cd74;
  puStack_a8 = &UNK_009e41f0;
  uStack_a0 = uVar2;
  uStack_98 = uVar1;
  uStack_90 = param_3;
  lStack_88 = param_1;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  func_0x00782c00(uVar3,param_2,&puStack_c0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 0043cef8; end: 0043cf97;  */

void FUN_0043cef8(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  _objc_retain(*(undefined8 *)(param_2 + 0x40));
  _objc_retain(*(undefined8 *)(param_2 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(*(undefined8 *)(param_2 + 0x50));
  return;
}



/* Entry: 0043cf98; end: 0043d2fb; -[SCDirectoryScrubber _removeDirectoryIfExpired:properties:fileTrasher:metrics:currentMaxCount:] */

void FUN_0043cf98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_4;
  func_0x00789f00(param_4,param_2,*(undefined8 *)PTR__NSURLContentModificationDateKey_00999ce0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00788240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puStack_c0 = PTR___NSConcreteStackBlock_00999f30;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x43d11c;
  puStack_a8 = &UNK_009e41f0;
  uStack_a0 = uVar2;
  uStack_98 = uVar1;
  lStack_90 = param_1;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  func_0x00782c00(uVar3,param_2,&puStack_c0);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 0043d2fc; end: 0043d543; -[SCDirectoryScrubber _updateMetricsDataForRealRun:incrementCountBy:incrementSizeBy:deletionResult:] */

void FUN_0043d2fc(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar8 = param_5;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00789ea0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    ppuStack_88 = &PTR____CFConstantStringClassReference_00a213e0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new();
    ppuStack_80 = &PTR____CFConstantStringClassReference_00a250c0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    puStack_78 = puVar2;
    _objc_opt_new();
    uVar8 = 2;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    puStack_70 = puVar3;
    func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8,param_2,&puStack_78,&ppuStack_88,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0(*(undefined8 *)(param_1 + 0x40),param_2,puVar4,param_3);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  lVar5 = *(long *)(param_1 + 0x40);
  func_0x00789f00(lVar5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar5 = lVar1;
  func_0x00789f00(lVar1,param_2,&PTR____CFConstantStringClassReference_00a25080);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00787200();
  func_0x00789c80(puVar2,param_2,lVar6 + param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(lVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_00a25080);
  _objc_release(puVar2);
  _objc_release(lVar5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  ppuVar7 = &PTR____CFConstantStringClassReference_00a250a0;
  lVar5 = lVar1;
  func_0x00789f00(lVar1,param_2,&PTR____CFConstantStringClassReference_00a250a0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00793120();
  func_0x0077c4c0(param_1,param_2,param_5);
  func_0x00789d60(puVar2,param_2,param_1 + lVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0078f4e0(lVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_00a250a0);
  _objc_release(puVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  lVar1 = *(long *)(param_3 + 0x48);
  func_0x00789ea0(lVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
    func_0x0078f4e0(*(undefined8 *)(param_3 + 0x48),param_2,puVar2,puVar3);
    _objc_release(puVar2);
  }
  lVar6 = *(long *)(param_3 + 0x48);
  func_0x00789f00(lVar6,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar1 = lVar6;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00787200();
  func_0x00789c80(puVar2,param_2,lVar5 + (long)ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(lVar6,param_2,puVar2,&PTR____CFConstantStringClassReference_00a25080);
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar1 = lVar6;
  func_0x00789f00(lVar6,param_2,&PTR____CFConstantStringClassReference_00a250a0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00793120();
  func_0x0077c4c0(param_3,param_2,uVar8);
  func_0x00789d60(puVar2,param_2,param_3 + lVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(lVar6,param_2,puVar2,&PTR____CFConstantStringClassReference_00a250a0);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar3);
  return;
}



/* Entry: 0043d544; end: 0043d6cf; -[SCDirectoryScrubber _updateMetricsDataForDryRun:incrementCountBy:incrementSizeBy:] */

void FUN_0043d544(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 )

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00789ea0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
    func_0x0078f4e0(*(undefined8 *)(param_1 + 0x48),param_2,puVar2,param_3);
    _objc_release(puVar2);
  }
  lVar3 = *(long *)(param_1 + 0x48);
  func_0x00789f00(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar1 = lVar3;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00787200();
  func_0x00789c80(puVar2,param_2,lVar4 + param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(lVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_00a25080);
  _objc_release(puVar2);
  _objc_release(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar1 = lVar3;
  func_0x00789f00(lVar3,param_2,&PTR____CFConstantStringClassReference_00a250a0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00793120();
  func_0x0077c4c0(param_1,param_2,param_5);
  func_0x00789d60(puVar2,param_2,param_1 + lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(lVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_00a250a0);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0043d6d0; end: 0043d6e7; -[SCDirectoryScrubber _convertByteToKB:] */

long FUN_0043d6d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (long)((double)param_3 / 1000.0);
}



/* Entry: 0043d6e8; end: 0043d93b; -[SCDirectoryScrubber _getFilesCountAndSizeInDirectory:] */

undefined * FUN_0043d6e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_00ac2d00;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  lVar7 = param_3;
  func_0x0078a400(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = *(undefined8 *)PTR__NSURLIsDirectoryKey_00999cf8;
  uStack_58 = *(undefined8 *)PTR__NSURLFileSizeKey_00999cf0;
  uStack_50 = *(undefined8 *)PTR__NSURLContentModificationDateKey_00999ce0;
  uStack_48 = *(undefined8 *)PTR__NSURLCreationDateKey_00999ce8;
  uStack_40 = *(undefined8 *)PTR__NSURLContentAccessDateKey_00999cd8;
  puVar1 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792e00(puVar2);
  _objc_release(puVar1);
  _objc_release(lVar7);
  ppuStack_80 = &PTR____CFConstantStringClassReference_00a25080;
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_00a250a0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  puStack_70 = puVar2;
  func_0x00789d60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &puStack_70;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  puStack_68 = puVar1;
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  __Unwind_Resume();
  _objc_retain(ppuVar6);
  ppuVar4 = ppuVar6;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x0077fbc0();
  _objc_release(ppuVar4);
  if (((ulong)ppuVar5 & 1) == 0) {
    lVar7 = *(long *)(*(long *)(param_3 + 0x20) + 8);
    *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + 1;
    ppuVar4 = ppuVar6;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00793120();
    lVar7 = *(long *)(*(long *)(param_3 + 0x28) + 8);
    *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + (long)ppuVar5;
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar6);
  return (undefined *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 0043d93c; end: 0043d9ff;  */

undefined8 FUN_0043d93c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00789f00(param_3,param_2,*(undefined8 *)PTR__NSURLIsDirectoryKey_00999cf8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077fbc0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
    uVar1 = param_3;
    func_0x00789f00(param_3,param_2,*(undefined8 *)PTR__NSURLFileSizeKey_00999cf0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00793120();
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(ulong *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + uVar2;
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return 1;
}



/* Entry: 0043da00; end: 0043da6b;  */

void FUN_0043da00(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  return;
}



/* Entry: 0043da6c; end: 0043dc5b; -[SCDirectoryScrubber _updateMetrics:fileUrl:properties:] */

void FUN_0043da6c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00788240(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x0077c6e0(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00789f00(param_4,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x007878e0(uVar1,param_3,&PTR____CFConstantStringClassReference_00a25060);
  uVar4 = param_5;
  if ((int)uVar3 == 0) {
    uVar4 = 0;
  }
  uVar3 = param_2;
  func_0x0077df00(param_2,param_3,uVar2,param_6,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(param_4,param_3,uVar3,uVar1);
  _objc_release(uVar3);
  uVar4 = param_6;
  func_0x00789f00(param_6,param_3,*(undefined8 *)PTR__NSURLContentModificationDateKey_00999ce0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792920();
  if (-2678400.0 <= param_1) {
    func_0x00792920(uVar4);
    if (-1814400.0 <= param_1) {
      func_0x00792920(uVar4);
      if (-1209600.0 <= param_1) goto LAB_0043dc14;
      ppuVar5 = &PTR____CFConstantStringClassReference_00a25160;
    }
    else {
      ppuVar5 = &PTR____CFConstantStringClassReference_00a25140;
    }
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_00a25120;
  }
  uVar3 = param_4;
  func_0x00789f00(param_4,param_3,ppuVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077df00(param_2,param_3,uVar3,param_6,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4e0(param_4,param_3,param_2,ppuVar5);
  _objc_release(param_2);
  _objc_release(uVar3);
LAB_0043dc14:
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 0043dc5c; end: 0043de0b; -[SCDirectoryScrubber _determineMetricsBucketForFile:] */

/* WARNING: Removing unreachable block (ram,0x0043dce8) */

void FUN_0043dc5c(long param_1,undefined8 param_2,undefined ***param_3)

{
  long lVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined ****ppppuVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined ***pppuStack_1c8;
  undefined ***pppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined ***pppuStack_1a0;
  undefined *puStack_198;
  undefined ***pppuStack_190;
  long lStack_188;
  
  lVar11 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  lVar12 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar12);
  lVar10 = 0x10;
  lVar1 = lVar12;
  func_0x00780ea0();
  do {
    if (lVar1 == 0) {
      _objc_release(lVar12);
      ppuVar7 = &PTR____CFConstantStringClassReference_00a25180;
      uVar9 = 0x400;
      pppuVar3 = param_3;
      func_0x0078ae20();
      ppuVar13 = (undefined **)param_3;
      if (pppuVar3 == (undefined ***)0x7fffffffffffffff) {
        func_0x0078a440();
        _objc_retainAutoreleasedReturnValue();
        pppuVar2 = (undefined ***)ppuVar13;
        func_0x007882e0();
        pppuVar3 = (undefined ***)ppuVar7;
        if (pppuVar2 == (undefined ***)0x0) {
          _objc_release(ppuVar13);
          ppuVar13 = &PTR____CFConstantStringClassReference_00a25060;
          pppuVar3 = (undefined ***)ppuVar7;
        }
      }
      else {
        func_0x007924a0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = param_2;
      }
LAB_0043ddc8:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_00999f88 != lVar11) {
        ___stack_chk_fail();
        lStack_188 = *(long *)PTR____stack_chk_guard_00999f88;
        _objc_retain(pppuVar3);
        _objc_retain(lVar10);
        _objc_retain(uVar9);
        pppuVar2 = pppuVar3;
        func_0x00789f00(pppuVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00793100();
        _objc_release(pppuVar2);
        pppuVar2 = pppuVar3;
        func_0x00789f00(pppuVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00793100();
        _objc_release(pppuVar2);
        uVar4 = uVar9;
        func_0x00789f00(uVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
        func_0x00793140(uVar4);
        _objc_release(uVar4);
        if (lVar10 == 0) {
          ppuStack_1d8 = &PTR____CFConstantStringClassReference_00a25080;
          param_3 = (undefined ***)PTR__OBJC_CLASS___NSNumber_00ac29d8;
          func_0x00789d40();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_1d0 = &PTR____CFConstantStringClassReference_00a252c0;
          pppuVar6 = (undefined ***)PTR__OBJC_CLASS___NSNumber_00ac29d8;
          pppuStack_1c8 = param_3;
          func_0x00789d40();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar8 = &pppuStack_1c8;
          pppuVar2 = &ppuStack_1d8;
          ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSDictionary_00ac29e8;
          pppuStack_1c0 = pppuVar6;
          func_0x00782080();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x0077bee0();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_1b8 = &PTR____CFConstantStringClassReference_00a25080;
          pppuVar6 = (undefined ***)PTR__OBJC_CLASS___NSNumber_00ac29d8;
          func_0x00789d40();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_1b0 = &PTR____CFConstantStringClassReference_00a252c0;
          puVar5 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
          pppuStack_1a0 = pppuVar6;
          func_0x00789d40();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_1a8 = &PTR____CFConstantStringClassReference_00a252a0;
          ppppuVar8 = &pppuStack_1a0;
          pppuVar2 = &ppuStack_1b8;
          ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSDictionary_00ac29e8;
          puStack_198 = puVar5;
          pppuStack_190 = param_3;
          func_0x00782080();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar5);
        }
        _objc_release(pppuVar6);
        _objc_release(param_3);
        _objc_release(lVar10);
        _objc_release(pppuVar3);
        if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_188) {
          ___stack_chk_fail();
          _objc_retain(ppppuVar8);
          func_0x00789f00();
          _objc_retainAutoreleasedReturnValue();
          pppuVar3 = (undefined ***)PTR____NSArray0__struct_00999d10;
          if (pppuVar2 != (undefined ***)0x0) {
            pppuVar3 = pppuVar2;
          }
          pppuVar2 = pppuVar3;
          func_0x00780e80();
          ppuVar13 = (undefined **)pppuVar3;
          if (pppuVar2 < (undefined ***)((long)&MACH_HEADER.cpusubtype + 2)) {
            func_0x0077f140(pppuVar3);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_retain(pppuVar3);
          }
          _objc_release(pppuVar3);
          _objc_release(ppppuVar8);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar13);
      return;
    }
    lVar14 = 0;
    do {
      ppuVar13 = *(undefined ***)(lVar14 * 8);
      uVar9 = 0;
      pppuVar2 = (undefined ***)ppuVar13;
      pppuVar3 = param_3;
      func_0x00788f00();
      if (pppuVar2 == (undefined ***)0x0) {
        func_0x0078a4e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        goto LAB_0043ddc8;
      }
      lVar14 = lVar14 + 1;
    } while (lVar1 != lVar14);
    lVar10 = 0x10;
    lVar1 = lVar12;
    func_0x00780ea0();
  } while( true );
}



/* Entry: 0043de0c; end: 0043e05f; -[SCDirectoryScrubber _updateBucket:properties:filenameForDetails:] */

void FUN_0043de0c(undefined *param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined ***pppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined **ppuVar10;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00789f00(param_3,param_2,&PTR____CFConstantStringClassReference_00a25080);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00793100();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00789f00(param_3,param_2,&PTR____CFConstantStringClassReference_00a252c0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00793100();
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00789f00(param_4,param_2,*(undefined8 *)PTR__NSURLFileSizeKey_00999cf0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar5 = lVar2;
  func_0x00793140(lVar2);
  _objc_release(lVar2);
  if (param_5 == 0) {
    ppuStack_b8 = &PTR____CFConstantStringClassReference_00a25080;
    param_1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,lVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_b0 = &PTR____CFConstantStringClassReference_00a252c0;
    puVar7 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    puStack_a8 = param_1;
    func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,lVar5 + lVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = &puStack_a8;
    pppuVar9 = &ppuStack_b8;
    pppuVar8 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    puStack_a0 = puVar7;
    func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8,param_2,ppuVar10,pppuVar9,2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0077bee0(param_1,param_2,param_5,param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_98 = &PTR____CFConstantStringClassReference_00a25080;
    puVar7 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,lVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR____CFConstantStringClassReference_00a252c0;
    puVar6 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    puStack_80 = puVar7;
    func_0x00789d40(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,lVar5 + lVar4);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_88 = &PTR____CFConstantStringClassReference_00a252a0;
    ppuVar10 = &puStack_80;
    pppuVar9 = &ppuStack_98;
    pppuVar8 = (undefined ***)PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    puStack_78 = puVar6;
    puStack_70 = param_1;
    func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8,param_2,ppuVar10,pppuVar9,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  _objc_release(puVar7);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(ppuVar10);
    func_0x00789f00(pppuVar9,param_2,&PTR____CFConstantStringClassReference_00a252a0);
    _objc_retainAutoreleasedReturnValue();
    pppuVar1 = (undefined ***)PTR____NSArray0__struct_00999d10;
    if (pppuVar9 != (undefined ***)0x0) {
      pppuVar1 = pppuVar9;
    }
    pppuVar9 = pppuVar1;
    func_0x00780e80();
    pppuVar8 = pppuVar1;
    if (pppuVar9 < (undefined ***)((long)&MACH_HEADER.cpusubtype + 2)) {
      func_0x0077f140(pppuVar1,param_2,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(pppuVar1);
    }
    _objc_release(pppuVar1);
    _objc_release(ppuVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(pppuVar8);
  return;
}



/* Entry: 0043e060; end: 0043e107; -[SCDirectoryScrubber _addFilename:toBucket:] */

void FUN_0043e060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  _objc_retain(param_3);
  func_0x00789f00(param_4,param_2,&PTR____CFConstantStringClassReference_00a252a0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_00999d10;
  if (param_4 != (undefined1 *)0x0) {
    puVar1 = param_4;
  }
  puVar2 = puVar1;
  func_0x00780e80();
  puVar3 = puVar1;
  if (puVar2 < (undefined1 *)((long)&MACH_HEADER.cpusubtype + 2)) {
    func_0x0077f140(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 0043e108; end: 0043e1c7; -[SCDirectoryScrubber _addError:fileUrl:metrics:] */

void FUN_0043e108(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac2d18;
  if (param_3 != 0) {
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00788240(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782a20(puVar1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x0077bf00(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_00a252e0,param_5);
    _objc_release(param_5);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(param_4);
    return;
  }
  return;
}



/* Entry: 0043e1c8; end: 0043e293; -[SCDirectoryScrubber _addNewParameter:forKey:metrics:] */

void FUN_0043e1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_5;
  func_0x00789f00(param_5,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f120();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0(param_5,param_2,puVar1,param_4);
  }
  func_0x0077e720(puVar1,param_2,param_3);
  puVar2 = puVar1;
  func_0x00780e80();
  if ((undefined1 *)((long)&MACH_HEADER.cpusubtype + 2) < puVar2) {
    func_0x0078b480(puVar1,param_2,0);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0043e294; end: 0043e3af; -[SCDirectoryScrubber _traversalOperationForFile:withProperties:trasher:maxCount:reportingMetrics:] */

undefined8
FUN_0043e294(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar3 = *(undefined8 *)PTR__NSURLIsDirectoryKey_00999cf8;
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00789f00(param_4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077fbc0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x0077d840(param_1,param_2,param_3,param_4,param_5,param_7,param_6);
    _objc_release(param_5);
    func_0x0077df40(param_1,param_2,param_7,param_3,param_4);
  }
  else {
    func_0x0077d820(param_1,param_2,param_3,param_4,param_5,param_7,param_6);
    _objc_release(param_5);
  }
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 0043e3b0; end: 0043e427; -[SCDirectoryScrubber .cxx_destruct] */

void FUN_0043e3b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0043e428; end: 0043e4d3; -[SCDiskUsageMetric init:localSizeBytes:recursiveSizeBytes:fileCount:] */

undefined1 *
FUN_0043e428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_00ac3b98;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined8 *)((long)puVar2 + 8) = param_3;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar2 + 0x10) = param_4;
    *(undefined8 *)((long)puVar2 + 0x18) = param_5;
    *(undefined8 *)((long)puVar2 + 0x30) = 0;
    puVar1 = PTR____NSArray0__struct_00999d10;
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x20) = param_6;
    *(undefined **)((long)puVar2 + 0x28) = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 0043e4d4; end: 0043e66b; -[SCDiskUsageMetric init:localSizeBytes:fileCount:reportLimit:subdirectories:] */

undefined8 *
FUN_0043e4d4(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_58;
  
  puVar5 = &uStack_130;
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar7 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_7);
  puStack_e0 = PTR_PTR_00ac3b98;
  puVar1 = &uStack_e8;
  uStack_e8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar1[2] = param_4;
    lVar3 = param_7;
    func_0x00780e20();
    uVar2 = puVar1[5];
    puVar1[5] = lVar3;
    _objc_release(uVar2);
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    puVar1[6] = param_6;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_7);
    lVar3 = param_7;
    func_0x00780ea0();
    if (lVar3 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_7);
          }
          lVar4 = *(long *)(lStack_128 + lVar11 * 8);
          func_0x0078b0a0();
          puVar1[3] = puVar1[3] + lVar4;
          lVar11 = lVar11 + 1;
        } while (lVar3 != lVar11);
        lVar3 = param_7;
        puVar5 = &uStack_130;
        func_0x00780ea0();
      } while (lVar3 != 0);
    }
    _objc_release(param_7);
    puVar7 = puVar5;
  }
  _objc_release(param_7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar7);
    puVar5 = (undefined8 *)param_3[1];
    func_0x00791ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar5;
    func_0x00788240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar7;
    func_0x0078a400();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00791ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar10;
    func_0x00788240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar5);
    if ((puVar1 == puVar6) || (puVar5 = puVar1, func_0x007878e0(), ((ulong)puVar5 & 1) != 0)) {
      puVar10 = (undefined8 *)param_3[3];
      puVar5 = puVar7;
      func_0x0078b0a0();
      if (puVar10 == puVar5) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        puVar8 = (undefined8 *)param_3[3];
        puVar10 = puVar7;
        func_0x0078b0a0();
        puVar5 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        if (puVar10 < puVar8) {
          puVar5 = (undefined8 *)0xffffffffffffffff;
        }
      }
    }
    else {
      puVar5 = puVar6;
      if (puVar1 != (undefined8 *)0x0) {
        puVar5 = puVar1;
      }
      func_0x007806a0(puVar5);
    }
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(puVar7);
    return puVar5;
  }
  return puVar1;
}



/* Entry: 0043e66c; end: 0043e79f; -[SCDiskUsageMetric compare:] */

ulong FUN_0043e66c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00791ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00788240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x0078a400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00791ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00788240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar1);
  if ((uVar2 == uVar3) || (uVar1 = uVar2, func_0x007878e0(uVar2,param_2,uVar3), (uVar1 & 1) != 0)) {
    uVar5 = *(ulong *)(param_1 + 0x18);
    uVar1 = param_3;
    func_0x0078b0a0();
    if (uVar5 == uVar1) {
      uVar1 = 0;
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x18);
      uVar5 = param_3;
      func_0x0078b0a0();
      uVar1 = 1;
      if (uVar5 < uVar4) {
        uVar1 = 0xffffffffffffffff;
      }
    }
  }
  else {
    uVar1 = uVar2;
    uVar5 = uVar3;
    if (uVar2 == 0) {
      uVar1 = uVar3;
      uVar5 = 0;
    }
    func_0x007806a0(uVar1,param_2,uVar5);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 0043e7a0; end: 0043e923; -[SCDiskUsageMetric isEqual:] */

bool FUN_0043e7a0(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
    goto LAB_0043e904;
  }
  lVar2 = param_1;
  _objc_opt_class(param_1);
  lVar4 = param_3;
  func_0x00787ac0(param_3,param_2,lVar2);
  if ((int)lVar4 == 0) {
    bVar1 = false;
    goto LAB_0043e904;
  }
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x0078a400();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 8);
  if (lVar2 == lVar4) {
    lVar3 = param_3;
    func_0x0078a400(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x007877e0(lVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 == 0) goto LAB_0043e8f8;
    lVar2 = param_3;
    func_0x00792340();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar2 != lVar4) goto LAB_0043e80c;
    lVar3 = param_3;
    func_0x00792340(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00787800(lVar4,param_2,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 == 0) goto LAB_0043e8f8;
    lVar2 = param_3;
    func_0x00788460();
    if (lVar2 != *(long *)(param_1 + 0x10)) goto LAB_0043e8f8;
    lVar2 = param_3;
    func_0x0078b0a0();
    if (lVar2 != *(long *)(param_1 + 0x18)) goto LAB_0043e8f8;
    lVar2 = param_3;
    func_0x00783340(param_3);
    bVar1 = lVar2 == *(long *)(param_1 + 0x20);
  }
  else {
LAB_0043e80c:
    _objc_release(lVar2);
LAB_0043e8f8:
    bVar1 = false;
  }
  _objc_release(param_3);
LAB_0043e904:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 0043e924; end: 0043e9df; -[SCDiskUsageMetric hash] */

ulong FUN_0043e924(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  ulong auStack_50 [5];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x007843a0(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x007843a0();
  auStack_50[1] = lVar2;
  auVar4 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x10),*(undefined1 (*) [16])(param_1 + 0x10),8,
                    1);
  auStack_50[3] = auVar4._8_8_;
  auStack_50[2] = auVar4._0_8_;
  auStack_50[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = 8;
  do {
    uVar1 = *(ulong *)((long)auStack_50 + lVar3) | uVar1 << 0x20;
    uVar1 = ~uVar1 + uVar1 * 0x40000;
    uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
    uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
    uVar1 = uVar1 ^ uVar1 >> 0x16;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x28);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return uVar1;
  }
  ___stack_chk_fail();
  return *(ulong *)(lVar2 + 8);
}



/* Entry: 0043e9e0; end: 0043e9e7; -[SCDiskUsageMetric path] */

undefined8 FUN_0043e9e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0043e9e8; end: 0043e9ef; -[SCDiskUsageMetric localSizeBytes] */

undefined8 FUN_0043e9e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0043e9f0; end: 0043e9f7; -[SCDiskUsageMetric recursiveSizeBytes] */

undefined8 FUN_0043e9f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0043e9f8; end: 0043e9ff; -[SCDiskUsageMetric fileCount] */

undefined8 FUN_0043e9f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0043ea00; end: 0043ea07; -[SCDiskUsageMetric reportLimit] */

undefined8 FUN_0043ea00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 0043ea08; end: 0043ea0f; -[SCDiskUsageMetric subdirectories] */

undefined8 FUN_0043ea08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 0043ea10; end: 0043ea3f; -[SCDiskUsageMetric .cxx_destruct] */

void FUN_0043ea10(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0043ea40; end: 0043ee33; -[SCDiskUsageResult _scanRoot:] */

void FUN_0043ea40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0077bca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x007837a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x0077bca0(puVar1,param_2,0xd,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x007837a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x0077bca0(puVar1,param_2,5,1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x007837a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _NSTemporaryDirectory();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar11 = PTR__OBJC_CLASS___NSURL_00ac2a90;
    func_0x00783500(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,puVar2,1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableSet_00ac2ac0;
  func_0x0078c940();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar3;
  func_0x00783480();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    func_0x0077e720(puVar6,param_2,puVar7);
  }
  _objc_release(puVar7);
  puVar7 = puVar4;
  func_0x00783480();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    func_0x0077e720(puVar6,param_2,puVar7);
  }
  _objc_release(puVar7);
  puVar7 = puVar5;
  func_0x00783480();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    func_0x0077e720(puVar6,param_2,puVar7);
  }
  _objc_release(puVar7);
  puVar7 = puVar11;
  func_0x00783480();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 != (undefined *)0x0) {
    func_0x0077e720(puVar6,param_2,puVar7);
  }
  _objc_release(puVar7);
  _objc_retain(puVar6);
  uVar8 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar6;
  _objc_release(uVar8);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x0077c720(param_1,param_2,puVar3,0x14,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    func_0x0077e720(puVar7,param_2,lVar9);
  }
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x0077c720(param_1,param_2,puVar4,0x14,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    func_0x0077e720(puVar7,param_2,lVar9);
  }
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x0077c720(param_1,param_2,puVar5,10,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    func_0x0077e720(puVar7,param_2,lVar9);
  }
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x0077c720(param_1,param_2,puVar11,10,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    func_0x0077e720(puVar7,param_2,lVar9);
  }
  _objc_release(lVar9);
  puVar10 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70;
  func_0x0077efc0(PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x0077c700(param_1,param_2,puVar10,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  if (lVar9 != 0) {
    func_0x0077e720(puVar7,param_2,lVar9);
  }
  _objc_release(lVar9);
  uVar8 = param_3;
  func_0x00787520();
  if ((int)uVar8 == 0) {
    _objc_retain(puVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar7;
    _objc_release(uVar8);
    func_0x0077da00(param_1,param_2,param_3);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = PTR____NSArray0__struct_00999d10;
    _objc_release(uVar8);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar2);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0043ee34; end: 0043ee7b; +[SCDiskUsageResult scan:] */

void FUN_0043ee34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc_init(param_1);
  func_0x0077d9e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0043ee7c; end: 0043f027; -[SCDiskUsageResult _scan:] */

void FUN_0043ee7c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar8 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  func_0x0077da20(param_1,param_2,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_1;
  _objc_opt_class();
  func_0x0077c9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar2;
  func_0x00780ea0();
  if (lVar11 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar13 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar2);
        }
        lVar7 = param_1;
        func_0x0077c720(param_1,param_2,*(undefined8 *)(lStack_128 + lVar13 * 8),10,param_3);
        _objc_retainAutoreleasedReturnValue();
        if (lVar7 != 0) {
          func_0x0077e720(puVar1,param_2,lVar7);
        }
        _objc_release(lVar7);
        lVar13 = lVar13 + 1;
      } while (lVar11 != lVar13);
      lVar11 = lVar2;
      puVar8 = &uStack_130;
      func_0x00780ea0();
    } while (lVar11 != 0);
  }
  _objc_release(lVar2);
  uVar3 = param_3;
  func_0x00787520();
  puVar10 = PTR____NSArray0__struct_00999d10;
  if ((uVar3 & 1) == 0) {
    _objc_retain(puVar1);
    puVar10 = puVar1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar10;
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = (undefined *)puVar8;
  puVar10 = (undefined *)puVar8;
  _objc_retain();
  FUN_005b5ac0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSURL_00ac2a90;
    func_0x007834e0(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    puVar10 = puVar5;
    func_0x0077c700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (uVar3 != 0) {
      uVar6 = uVar3;
      func_0x00783340();
      *(ulong *)(param_3 + 0x20) = uVar6;
      uVar6 = uVar3;
      func_0x00788460();
      *(ulong *)(param_3 + 0x28) = uVar6;
      lStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      plStack_250 = (long *)0x0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      lVar11 = *(long *)(param_3 + 0x10);
      _objc_retain(lVar11);
      lVar2 = lVar11;
      func_0x00780ea0();
      if (lVar2 != 0) {
        lVar12 = *plStack_250;
        do {
          lVar13 = 0;
          do {
            if (*plStack_250 != lVar12) {
              _objc_enumerationMutation(lVar11);
            }
            lVar7 = *(long *)(lStack_258 + lVar13 * 8);
            func_0x0078b0a0();
            *(long *)(param_3 + 0x28) = *(long *)(param_3 + 0x28) + lVar7;
            lVar13 = lVar13 + 1;
          } while (lVar2 != lVar13);
          lVar2 = lVar11;
          puVar9 = &uStack_260;
          func_0x00780ea0();
        } while (lVar2 != 0);
      }
      _objc_release(lVar11);
      puVar10 = (undefined *)puVar9;
    }
    _objc_release(uVar3);
  }
  _objc_release(puVar1);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_198) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_00ac2d00;
    if (puVar10 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      func_0x00791e80(puVar10,param_2,&PTR____CFConstantStringClassReference_00a251a0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00782220(puVar1,param_2,&PTR____CFConstantStringClassReference_00a251e0,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      if (puVar1 == (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = PTR__OBJC_CLASS___NSURL_00ac2a90;
        func_0x007834e0(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar10);
    return;
  }
  return;
}



/* Entry: 0043f028; end: 0043f1cb; -[SCDiskUsageResult _scanHome:] */

void FUN_0043f028(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = param_3;
  puVar7 = param_3;
  _objc_retain();
  FUN_005b5ac0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_00ac2a90;
    func_0x007834e0(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    puVar7 = puVar2;
    func_0x0077c700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x00783340();
      *(long *)(param_1 + 0x20) = lVar4;
      lVar4 = lVar3;
      func_0x00788460();
      *(long *)(param_1 + 0x28) = lVar4;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lVar8 = *(long *)(param_1 + 0x10);
      _objc_retain(lVar8);
      lVar4 = lVar8;
      func_0x00780ea0();
      if (lVar4 != 0) {
        lVar9 = *plStack_120;
        do {
          lVar10 = 0;
          do {
            if (*plStack_120 != lVar9) {
              _objc_enumerationMutation(lVar8);
            }
            lVar5 = *(long *)(lStack_128 + lVar10 * 8);
            func_0x0078b0a0();
            *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lVar5;
            lVar10 = lVar10 + 1;
          } while (lVar4 != lVar10);
          lVar4 = lVar8;
          puVar6 = &uStack_130;
          func_0x00780ea0();
        } while (lVar4 != 0);
      }
      _objc_release(lVar8);
      puVar7 = (undefined *)puVar6;
    }
    _objc_release(lVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_00ac2d00;
  if (puVar7 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x00791e80(puVar7,param_2,&PTR____CFConstantStringClassReference_00a251a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782220(puVar1,param_2,&PTR____CFConstantStringClassReference_00a251e0,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar1 == (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSURL_00ac2a90;
      func_0x007834e0(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar7);
  return;
}



/* Entry: 0043f1cc; end: 0043f273; +[SCDiskUsageResult _userScopedURLForDirectoryPath:] */

void FUN_0043f1cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac2d00;
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00791e80(param_3,param_2,&PTR____CFConstantStringClassReference_00a251a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00782220(puVar1,param_2,&PTR____CFConstantStringClassReference_00a251e0,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSURL_00ac2a90;
      func_0x007834e0(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0043f274; end: 0043f2e3; +[SCDiskUsageResult _globalScopedURLForDirectoryPath:] */

void FUN_0043f274(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x00791e80(param_3,param_2,&PTR____CFConstantStringClassReference_00a251c0);
    _objc_retainAutoreleasedReturnValue();
    func_0x007834e0(puVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0043f2e4; end: 0043f443; +[SCDiskUsageResult _extraDirectoriesToDeepScan] */

void FUN_0043f2e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x005b5c0c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0077cbc0(param_1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lVar3 != 0) {
    func_0x0077e720(puVar1,param_2,lVar3);
  }
  _objc_release(lVar3);
  func_0x005b5b40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x0077cbc0(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    func_0x0077e720(puVar1,param_2,lVar4);
  }
  _objc_release(lVar4);
  func_0x005b5c0c();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0077e040(param_1,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if (lVar3 != 0) {
    func_0x0077e720(puVar1,param_2,lVar3);
  }
  _objc_release(lVar3);
  func_0x005b5b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e040(param_1,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  if (param_1 != 0) {
    func_0x0077e720(puVar1,param_2,param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0043f444; end: 0043f80f; -[SCDiskUsageResult _determineMetricsForDirectoryAndSubdirectories:reportLimit:cancelationToken:] */

undefined *
FUN_0043f444(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            ulong param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long *plStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  ulong uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar9 = (undefined *)0x0;
  if (param_3 != (undefined8 *)0x0) {
    uVar12 = param_5;
    func_0x00787520();
    if ((uVar12 & 1) == 0) {
      puStack_118 = &uStack_120;
      uStack_120 = 0;
      uStack_110 = 0x2020000000;
      uStack_108 = 0;
      puStack_138 = &uStack_140;
      uStack_140 = 0;
      uStack_130 = 0x2020000000;
      uStack_128 = 0;
      puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
      func_0x0077f120();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_00ac2d00;
      uStack_80 = *(undefined8 *)PTR__NSURLIsDirectoryKey_00999cf8;
      uStack_78 = *(undefined8 *)PTR__NSURLFileSizeKey_00999cf0;
      puVar2 = PTR__OBJC_CLASS___NSArray_00ac2c28;
      func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
      _objc_retainAutoreleasedReturnValue();
      puStack_180 = PTR___NSConcreteStackBlock_00999f30;
      uStack_178 = 0xc2000000;
      pcStack_170 = FUN_0043f810;
      puStack_168 = &UNK_009e4250;
      puStack_150 = &uStack_120;
      _objc_retain(puVar1);
      puStack_148 = &uStack_140;
      puStack_160 = puVar1;
      _objc_retain(param_5);
      uStack_158 = param_5;
      func_0x00792e20(puVar9);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
      func_0x00780e80(puVar1);
      func_0x0077f1a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      lStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      plStack_1b0 = (long *)0x0;
      _objc_retain(puVar1);
      puVar5 = &uStack_1c0;
      puVar3 = puVar1;
      func_0x00780ea0();
      if (puVar3 != (undefined8 *)0x0) {
        lVar10 = *plStack_1b0;
        do {
          puVar8 = (undefined8 *)0x0;
          do {
            if (*plStack_1b0 != lVar10) {
              _objc_enumerationMutation(puVar1);
            }
            puVar11 = *(undefined8 **)(lStack_1b8 + (long)puVar8 * 8);
            uVar12 = param_5;
            func_0x00787520();
            if ((uVar12 & 1) != 0) {
              puVar9 = (undefined *)0x0;
              puVar3 = puVar1;
              goto LAB_0043f740;
            }
            uVar12 = param_1[1];
            puVar4 = puVar11;
            func_0x00783480();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00780c20();
            _objc_release(puVar4);
            if ((uVar12 & 1) == 0) {
              puVar4 = param_1;
              func_0x0077c700();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar11;
              if (puVar4 != (undefined8 *)0x0) {
                puVar5 = puVar4;
                func_0x0077e720(puVar2);
              }
              _objc_release(puVar4);
            }
            puVar8 = (undefined8 *)((long)puVar8 + 1);
          } while (puVar3 != puVar8);
          puVar5 = &uStack_1c0;
          puVar3 = puVar1;
          func_0x00780ea0();
        } while (puVar3 != (undefined8 *)0x0);
      }
      _objc_release(puVar1);
      uVar12 = param_5;
      func_0x00787520();
      if ((uVar12 & 1) == 0) {
        puVar9 = PTR_PTR_00ac2d20;
        _objc_alloc();
        puVar3 = param_3;
        func_0x0078a400();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x007849c0();
LAB_0043f740:
        _objc_release(puVar3);
      }
      else {
        puVar9 = (undefined *)0x0;
      }
      _objc_release(puVar2);
      _objc_release(uStack_158);
      _objc_release(puStack_160);
      _objc_release(puVar1);
      __Block_object_dispose(&uStack_140,8);
      __Block_object_dispose(&uStack_120,8);
    }
    else {
      puVar9 = (undefined *)0x0;
    }
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_140,8);
  uVar7 = 8;
  __Block_object_dispose(&uStack_120,8);
  __Unwind_Resume();
  _objc_retain(uVar7);
  _objc_retain(puVar5);
  puVar1 = puVar5;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00793100();
  *(undefined **)(*(long *)(param_3[6] + 8) + 0x18) =
       (undefined *)(*(long *)(*(long *)(param_3[6] + 8) + 0x18) + (long)puVar3);
  _objc_release(puVar1);
  puVar1 = puVar5;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar1;
  func_0x0077fbc0();
  _objc_release(puVar1);
  if ((int)puVar5 == 0) {
    *(long *)(*(long *)(param_3[7] + 8) + 0x18) = *(long *)(*(long *)(param_3[7] + 8) + 0x18) + 1;
  }
  else {
    func_0x0077e720(param_3[4]);
  }
  uVar6 = param_3[5];
  func_0x00787520(uVar6);
  _objc_release(uVar7);
  return (undefined *)(ulong)((uint)uVar6 ^ 1);
}



/* Entry: 0043f810; end: 0043f90b;  */

uint FUN_0043f810(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00793100();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + lVar1;
  _objc_release(lVar4);
  lVar4 = param_3;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = lVar4;
  func_0x0077fbc0();
  _objc_release(lVar4);
  if ((int)lVar1 == 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + 1;
  }
  else {
    func_0x0077e720(*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00787520(uVar2);
  _objc_release(param_2);
  return (uint)uVar2 ^ 1;
}



/* Entry: 0043f90c; end: 0043f997;  */

void FUN_0043f90c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  return;
}



/* Entry: 0043f998; end: 0043fbeb; -[SCDiskUsageResult _determineMetricsForDirectory:cancelationToken:] */

undefined * FUN_0043f998(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar6 = param_3;
  uVar7 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) ||
     (uVar1 = param_4, func_0x00787520(), puVar9 = PTR_PTR_00ac2d00, (uVar1 & 1) != 0)) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puStack_80 = &uStack_88;
    uStack_88 = 0;
    uStack_78 = 0x2020000000;
    uStack_70 = 0;
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x2020000000;
    uStack_90 = 0;
    puStack_c0 = &uStack_c8;
    uStack_c8 = 0;
    uStack_b8 = 0x2020000000;
    uStack_b0 = 0;
    uStack_68 = *(undefined8 *)PTR__NSURLIsDirectoryKey_00999cf8;
    uStack_60 = *(undefined8 *)PTR__NSURLFileSizeKey_00999cf0;
    puVar2 = PTR__OBJC_CLASS___NSArray_00ac2c28;
    func_0x0077f200();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    uVar7 = 1;
    uVar6 = param_3;
    func_0x00792e20(puVar9);
    _objc_release(puVar2);
    uVar1 = param_4;
    func_0x00787520();
    if ((uVar1 & 1) == 0) {
      puVar9 = PTR_PTR_00ac2d20;
      _objc_alloc();
      uVar1 = param_3;
      func_0x0078a400();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = puStack_80[3];
      uVar6 = uVar1;
      func_0x007849e0();
      _objc_release(uVar1);
    }
    else {
      puVar9 = (undefined *)0x0;
    }
    _objc_release(param_4);
    __Block_object_dispose(&uStack_c8,8);
    __Block_object_dispose(&uStack_a8,8);
    __Block_object_dispose(&uStack_88,8);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_58) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_c8,8);
    __Block_object_dispose(&uStack_a8,8);
    uVar5 = 8;
    __Block_object_dispose(&uStack_88,8);
    __Unwind_Resume();
    _objc_retain(uVar5);
    _objc_retain(uVar6);
    _objc_retain(uVar7);
    if ((uVar7 == 0) || (uVar1 = uVar7, func_0x007883a0(), uVar1 == 1)) {
      uVar1 = uVar6;
      func_0x00789f00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00793100();
      lVar8 = *(long *)(*(long *)(param_3 + 0x28) + 8);
      *(ulong *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + uVar3;
      _objc_release(uVar1);
      uVar1 = uVar6;
      func_0x00789f00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x0077fbc0();
      _objc_release(uVar1);
      if ((uVar3 & 1) == 0) {
        lVar8 = *(long *)(*(long *)(param_3 + 0x30) + 8);
        *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + 1;
      }
    }
    uVar1 = uVar6;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00793100();
    lVar8 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    *(ulong *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + uVar3;
    _objc_release(uVar1);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00787520(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    return (undefined *)(ulong)((uint)uVar4 ^ 1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar9);
  return puVar9;
}



/* Entry: 0043fbec; end: 0043fd53;  */

uint FUN_0043fbec(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 == 0) || (lVar4 = param_4, func_0x007883a0(), lVar4 == 1)) {
    uVar1 = param_3;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00793100();
    lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    *(ulong *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + uVar2;
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0077fbc0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + 1;
    }
  }
  uVar1 = param_3;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00793100();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  *(ulong *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + uVar2;
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00787520(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return (uint)uVar3 ^ 1;
}


