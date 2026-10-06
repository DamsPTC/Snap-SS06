/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106adb1cc; end: 106adb40b; -[SCBlizzardRequestUrlProvider _getUploadUrlWithQueryItemDictionary:] */

undefined * FUN_106adb1cc(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bf529e0(), lVar1 == 0)) {
    func_0x00010c28ea80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
    _objc_alloc(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8);
    func_0x00010c28ea80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057bc0(puVar2,param_2,param_1,0);
    _objc_release(param_1);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    puVar3 = puVar2;
    func_0x00010c11d4e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar1 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(param_3);
          }
          puVar3 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
          uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          lVar5 = param_3;
          func_0x00010c0dff20(param_3,param_2,uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11d4c0(puVar3,param_2,uVar6,lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4,param_2,puVar3);
          _objc_release(puVar3);
          _objc_release(lVar5);
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        lVar1 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(param_3);
    func_0x00010c1e6460(puVar2,param_2,puVar4);
    param_1 = puVar2;
    func_0x00010bdc2b80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_3 + 8);
}



/* Entry: 106adb40c; end: 106adb413; -[SCBlizzardRequestUrlProvider uploadUrl] */

undefined8 FUN_106adb40c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106adb414; end: 106adb443; -[SCBlizzardRequestUrlProvider setUploadUrl:] */

void FUN_106adb414(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106adb444; end: 106adb44b; -[SCBlizzardRequestUrlProvider spectrumUrl] */

undefined8 FUN_106adb444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106adb44c; end: 106adb47b; -[SCBlizzardRequestUrlProvider setSpectrumUrl:] */

void FUN_106adb44c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106adb47c; end: 106adb4ab; -[SCBlizzardRequestUrlProvider setCollectorURLs:] */

void FUN_106adb47c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106adb4ac; end: 106adb4e7; -[SCBlizzardRequestUrlProvider .cxx_destruct] */

void FUN_106adb4ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106adb4e8; end: 106adb5bb; -[SCBlizzardUploadJobProcessor processJobWithJobConfig:input:context:onComplete:] */

undefined8 FUN_106adb4e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long in_x5;
  
  _objc_retain(in_x5);
  puVar1 = PTR_PTR_1126d0378;
  func_0x00010c28ec80();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126d0378;
    func_0x00010c28ec60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x0) {
      puVar1 = PTR_PTR_1126d0378;
      func_0x00010c28ec80(PTR_PTR_1126d0378);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c3ba0();
      _objc_release(puVar1);
      puVar1 = PTR_PTR_1126d0378;
      func_0x00010c28ec60(PTR_PTR_1126d0378);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c3b80();
      _objc_release(puVar1);
      uVar3 = 0;
      goto LAB_106adb590;
    }
  }
  uVar3 = 1;
LAB_106adb590:
  (**(code **)(in_x5 + 0x10))(in_x5,uVar3,0);
  _objc_release(in_x5);
  return 0;
}



/* Entry: 106adb5bc; end: 106adb643; +[SCBlizzardFallbackSessionDelegate shared] */

void FUN_106adb5bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106adb644;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001136c4b18 != -1) {
    func_0x00010002a2fc(0x1136c4b18,&puStack_48);
  }
  uVar1 = uRam00000001136c4b10;
  _objc_retain(uRam00000001136c4b10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106adb644; end: 106adb66b;  */

void FUN_106adb644(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam00000001136c4b10;
  uRam00000001136c4b10 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106adb66c; end: 106adb67f; -[SCBlizzardFallbackSessionDelegate URLSessionDidFinishEventsForBackgroundURLSession:] */

void FUN_106adb66c(void)

{
  char *pcVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  char *pcStack_28;
  
  pcVar1 = "APPSTORE";
  func_0x0001000d77b8("APPSTORE",&PTR___NSConcreteGlobalBlock_11095f170);
  func_0x000107c61180();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_100c3b500;
  puStack_30 = &UNK_110849530;
  pcStack_28 = pcVar1;
  func_0x000107c61174();
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
  func_0x000107c61170(pcStack_28);
  func_0x000107c61170(pcVar1);
  return;
}



/* Entry: 106adb680; end: 106adb7fb; -[SCBlizzardUploadManager _shouldUseBackgroundUploadForRequestInfo:] */

char * FUN_106adb680(ulong param_1,undefined8 param_2,char *param_3,char *param_4,undefined8 param_5
                    )

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  char *unaff_x26;
  char *pcVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined *puStack_4e8;
  undefined *puStack_4e0;
  char *pcStack_4d8;
  char *pcStack_4d0;
  char *pcStack_4c8;
  undefined1 ***pppuStack_4c0;
  code *pcStack_4b8;
  undefined *puStack_4b0;
  char *pcStack_4a8;
  undefined *puStack_4a0;
  char *pcStack_498;
  char *pcStack_490;
  undefined1 uStack_488;
  undefined1 uStack_487;
  char *pcStack_478;
  undefined4 uStack_46c;
  char *pcStack_468;
  char *pcStack_460;
  char *pcStack_458;
  char *pcStack_450;
  char *pcStack_448;
  char *pcStack_440;
  char *pcStack_438;
  undefined *puStack_430;
  char *pcStack_428;
  undefined *puStack_420;
  char *pcStack_418;
  char *pcStack_410;
  char *pcStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  char *pcStack_3f0;
  char *pcStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long lStack_310;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  char *pcStack_288;
  undefined8 uStack_280;
  char *pcStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined **ppuStack_220;
  char *pcStack_218;
  undefined *puStack_210;
  char *pcStack_208;
  long lStack_180;
  undefined1 *puStack_120;
  code *pcStack_118;
  char acStack_110 [8];
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char acStack_c8 [128];
  long lStack_48;
  
  pcVar4 = acStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = param_3;
  _objc_retain(param_3);
  func_0x00010bf9c520();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1d140();
  if ((uVar1 & 1) == 0) {
    _objc_release(param_1);
LAB_106adb7a8:
    pcVar4 = pcVar10;
    pcVar10 = (char *)0x0;
  }
  else {
    pcVar13 = param_3;
    func_0x00010c113c80();
    _objc_retainAutoreleasedReturnValue();
    pcVar12 = pcVar13;
    func_0x00010c2827c0();
    _objc_release(pcVar13);
    _objc_release(param_1);
    if (pcVar12 != (char *)0x0) goto LAB_106adb7a8;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    acStack_110[0] = '\0';
    acStack_110[1] = '\0';
    acStack_110[2] = '\0';
    acStack_110[3] = '\0';
    acStack_110[4] = '\0';
    acStack_110[5] = '\0';
    acStack_110[6] = '\0';
    acStack_110[7] = '\0';
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    pcVar13 = param_3;
    func_0x00010bfad440();
    _objc_retainAutoreleasedReturnValue();
    param_4 = acStack_c8;
    param_5 = 0x10;
    pcVar10 = pcVar13;
    func_0x00010bf52a60();
    if (pcVar10 != (char *)0x0) {
      lVar11 = *plStack_100;
      do {
        pcVar12 = (char *)0x0;
        do {
          if (*plStack_100 != lVar11) {
            _objc_enumerationMutation(pcVar13);
          }
          uVar1 = *(ulong *)(lStack_108 + (long)pcVar12 * 8);
          func_0x00010c2304a0();
          if ((uVar1 & 1) != 0) {
            pcVar10 = (char *)0x0;
            goto LAB_106adb7ec;
          }
          pcVar12 = pcVar12 + 1;
        } while (pcVar10 != pcVar12);
        param_4 = acStack_c8;
        param_5 = 0x10;
        pcVar10 = pcVar13;
        pcVar4 = acStack_110;
        func_0x00010bf52a60();
      } while (pcVar10 != (char *)0x0);
    }
    pcVar10 = (char *)0x1;
LAB_106adb7ec:
    _objc_release(pcVar13);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar10;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_106adb7fc;
  lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar4);
  _objc_retain(param_4);
  _objc_retain(param_5);
  pcVar10 = param_3;
  func_0x00010bfcde60(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_106ac57b4();
  _objc_release(pcVar10);
  pcVar13 = param_3;
  func_0x00010beeb920();
  _objc_retainAutoreleasedReturnValue();
  pcVar10 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  uStack_280 = param_5;
  pcStack_278 = pcVar13;
  if (pcVar13 == (char *)0x0) {
    pcVar10 = param_3;
    func_0x00010bfcde60(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ac58a4();
    _objc_release(pcVar10);
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    pcVar10 = param_4;
    func_0x00010bfad440();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined *)0x10;
    pcVar13 = pcVar10;
    func_0x00010bf52a60();
    if (pcVar13 != (char *)0x0) {
      lVar11 = *plStack_260;
      do {
        pcVar12 = (char *)0x0;
        do {
          if (*plStack_260 != lVar11) {
            _objc_enumerationMutation(pcVar10);
          }
          func_0x00010c200500(*(undefined8 *)(lStack_268 + (long)pcVar12 * 8));
          pcVar12 = pcVar12 + 1;
        } while (pcVar13 != pcVar12);
        puVar9 = (undefined *)0x10;
        pcVar13 = pcVar10;
        func_0x00010bf52a60();
      } while (pcVar13 != (char *)0x0);
    }
    _objc_release(pcVar10);
    func_0x00010bf00c20();
    _objc_retainAutoreleasedReturnValue();
    pcVar13 = param_4;
    func_0x00010bfad440();
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = param_4;
    func_0x00010bfad440();
    _objc_retainAutoreleasedReturnValue();
    pcVar12 = pcVar10;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar12;
    func_0x00010c125a80();
    pcVar14 = pcVar13;
    func_0x00010bef8480(param_3);
    _objc_release(pcVar12);
    _objc_release(pcVar10);
  }
  else {
    pcVar13 = param_4;
    func_0x00010c28ea80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar13);
    func_0x00010c1a4fc0(pcVar10);
    func_0x00010c166e40(pcVar10);
    pcVar12 = param_3;
    func_0x00010bf14780();
    _objc_retainAutoreleasedReturnValue();
    pcVar13 = pcVar12;
    func_0x00010c28e8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar12);
    pcVar12 = param_3;
    _objc_opt_class(param_3);
    func_0x00010c08fa60(pcVar4);
    func_0x00010bea8460(pcVar12);
    unaff_x26 = param_3;
    func_0x00010bf146e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_230 = &PTR____CFConstantStringClassReference_110e6e138;
    ppuStack_228 = &PTR____CFConstantStringClassReference_110e6e158;
    pcStack_288 = pcVar4;
    pcStack_218 = param_4;
    func_0x00010c08fa60();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_220 = &PTR____CFConstantStringClassReference_110e6e178;
    pcStack_208 = pcStack_278;
    puVar9 = (undefined *)0x3;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_210 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    pcVar12 = param_3;
    func_0x00010bf146e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c26a820(pcVar13);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    func_0x00010c1d0640(pcVar12);
    _objc_release(pcVar4);
    pcVar4 = pcStack_288;
    _objc_release(pcVar12);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_sync_exit(unaff_x26);
    _objc_release(unaff_x26);
    pcVar12 = param_4;
    func_0x00010bfad440();
    _objc_retainAutoreleasedReturnValue();
    pcVar14 = pcVar12;
    func_0x00010bdc6cc0(param_3);
    _objc_release(pcVar12);
    func_0x00010c13d1c0(pcVar13);
    param_3 = pcVar10;
  }
  _objc_release(pcVar13);
  _objc_release(param_3);
  _objc_release(pcStack_278);
  _objc_release(uStack_280);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
    return pcVar4;
  }
  ___stack_chk_fail();
  _objc_sync_exit(unaff_x26);
  __Unwind_Resume();
  pcStack_298 = FUN_106adbc54;
  lStack_310 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_3e0 = pcVar14;
  ppuStack_2a0 = &puStack_120;
  _objc_retain(pcVar14);
  _objc_retain(pcVar5);
  _objc_retain(puVar9);
  pcVar10 = pcVar4;
  func_0x00010bf146e0(pcVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  pcVar13 = pcVar4;
  func_0x00010bf146e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26a820(pcVar5);
  func_0x00010c0df840(puVar2);
  _objc_retainAutoreleasedReturnValue();
  pcVar12 = pcVar13;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(pcVar13);
  if (pcVar12 == (char *)0x0) {
    pcVar14 = (char *)0x0;
    pcStack_3d8 = (char *)0x0;
    pcVar13 = (char *)0x0;
  }
  else {
    pcVar13 = pcVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar14 = pcVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar14;
    func_0x00010c2827c0();
    pcStack_3d8 = pcVar6;
    _objc_release(pcVar14);
    pcVar14 = pcVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar4;
    func_0x00010bf146e0(pcVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c26a820(pcVar5);
    func_0x00010c0df840(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(pcVar6);
    _objc_release(puVar2);
    _objc_release(pcVar6);
  }
  _objc_release(pcVar12);
  _objc_sync_exit(pcVar10);
  _objc_release(pcVar10);
  if (pcVar13 == (char *)0x0) {
    pcVar13 = pcVar5;
    func_0x00010c26a5c0(pcVar5);
    _objc_retainAutoreleasedReturnValue();
    pcVar12 = pcVar4;
    func_0x00010be70060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar13);
    if (pcVar12 == (char *)0x0) {
      pcVar13 = (char *)0x0;
      goto LAB_106adc3f4;
    }
    pcVar6 = pcVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar13 = pcVar12;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = PTR__OBJC_CLASS___NSURL_1126ae598;
    pcVar7 = pcVar12;
    func_0x00010c0e00e0(pcVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar14);
    _objc_release(pcVar7);
    pcStack_448 = pcVar10;
    pcStack_440 = pcVar12;
    pcStack_438 = pcVar13;
    if (pcVar13 == (char *)0x0) {
      pcStack_3d8 = (char *)0x0;
    }
    else {
      func_0x00010c2827c0();
      pcStack_3d8 = pcVar13;
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = 0;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    plStack_3c0 = (long *)0x0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    pcVar10 = pcVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar13 = pcVar10;
    func_0x00010bf52a60();
    if (pcVar13 != (char *)0x0) {
      lVar11 = *plStack_3c0;
      do {
        pcVar12 = (char *)0x0;
        do {
          if (*plStack_3c0 != lVar11) {
            _objc_enumerationMutation(pcVar10);
          }
          pcVar14 = pcVar4;
          func_0x00010bdfb1a0(pcVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(pcVar14);
          pcVar12 = pcVar12 + 1;
        } while (pcVar13 != pcVar12);
        pcVar13 = pcVar10;
        func_0x00010bf52a60();
      } while (pcVar13 != (char *)0x0);
    }
    _objc_release(pcVar10);
    pcVar10 = pcVar6;
    func_0x00010c0e00e0(pcVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(pcVar10);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = PTR_PTR_1126d04e8;
    puStack_420 = puVar3;
    _objc_alloc();
    pcVar13 = pcVar6;
    pcStack_450 = pcVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar6;
    pcStack_428 = pcVar13;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcStack_3e8 = pcVar10;
    func_0x00010c2827c0();
    pcVar13 = pcVar6;
    pcStack_458 = pcVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcStack_3f0 = pcVar13;
    func_0x00010c2827c0();
    pcVar10 = pcVar6;
    pcStack_460 = pcVar13;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcStack_3f8 = pcVar10;
    func_0x00010c2827c0();
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    pcVar13 = pcVar6;
    pcStack_468 = pcVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcStack_400 = pcVar13;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar6;
    puStack_430 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcStack_408 = pcVar10;
    func_0x00010bf1f3c0();
    uStack_46c = SUB84(pcVar10,0);
    pcVar10 = pcVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcStack_410 = pcVar10;
    func_0x00010bf885a0(pcVar10);
    pcVar10 = pcVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcStack_418 = pcVar10;
    func_0x00010c2827c0();
    pcVar12 = pcVar6;
    pcStack_478 = pcVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar14 = pcVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar13 = pcVar7;
    func_0x00010bf1f3c0();
    pcVar10 = pcVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar10;
    func_0x00010bf1f3c0();
    uStack_487 = SUB81(pcVar8,0);
    uStack_488 = SUB81(pcVar13,0);
    pcStack_4a8 = pcStack_478;
    puStack_4b0 = puStack_420;
    pcVar13 = pcStack_450;
    puStack_4a0 = puVar2;
    pcStack_498 = pcVar12;
    pcStack_490 = pcVar14;
    func_0x00010c027140(uVar15,pcStack_450);
    _objc_release(pcVar10);
    _objc_release(pcVar7);
    _objc_release(pcVar14);
    _objc_release(pcVar12);
    _objc_release(pcStack_418);
    _objc_release(pcStack_410);
    _objc_release(pcStack_408);
    _objc_release(puStack_430);
    _objc_release(pcStack_400);
    _objc_release(pcStack_3f8);
    _objc_release(pcStack_3f0);
    _objc_release(pcStack_3e8);
    _objc_release(pcStack_428);
    _objc_release(puStack_420);
    _objc_release(puVar2);
    _objc_release(pcStack_438);
    _objc_release(pcVar6);
    _objc_release(pcStack_440);
    pcVar14 = pcStack_448;
    if (puVar9 != (undefined *)0x0) goto LAB_106adbe18;
LAB_106adc320:
    pcVar12 = pcVar4;
    func_0x00010bfcde60(pcVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ac582c();
  }
  else {
    if (puVar9 == (undefined *)0x0) goto LAB_106adc320;
LAB_106adbe18:
    pcVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = puVar9;
    func_0x00010bf3ec40();
    puStack_4b0 = puVar2;
    func_0x00010c14de00(pcVar12);
    _objc_retainAutoreleasedReturnValue();
    pcVar10 = pcVar4;
    func_0x00010bfcde60(pcVar4);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ac58a4();
    _objc_release(pcVar10);
  }
  _objc_release(pcVar12);
  if (pcVar14 != (char *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar2);
  }
  pcVar12 = pcVar13;
  func_0x00010bfad440(pcVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c1a0(pcVar4);
  _objc_release(pcVar12);
  pcVar12 = pcVar5;
  func_0x00010c13b720();
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar12;
  func_0x00010bf9c200();
  if (0 < (long)pcVar6) {
    func_0x00010bf9c200(pcVar12);
  }
  func_0x00010be0b9c0(pcVar4);
  _objc_release(pcVar12);
LAB_106adc3f4:
  _objc_release(pcVar14);
  _objc_release(pcVar13);
  _objc_release(puVar9);
  _objc_release(pcVar5);
  pcVar4 = pcStack_3e0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_310) {
    ___stack_chk_fail();
    _objc_sync_exit(pcVar10);
    __Unwind_Resume(pcVar4);
    pcVar10 = "APPSTORE";
    pcStack_4b8 = FUN_106adc478;
    pcStack_4d0 = pcVar5;
    pcStack_4c8 = pcVar4;
    pppuStack_4c0 = &ppuStack_2a0;
    func_0x0001000d77b8("APPSTORE",&PTR___NSConcreteGlobalBlock_11095f170);
    func_0x000107c61180();
    puStack_4f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_4f0 = 0xc2000000;
    puStack_4e8 = &UNK_100c3b500;
    puStack_4e0 = &UNK_110849530;
    pcStack_4d8 = pcVar10;
    func_0x000107c61174();
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_4f8);
    func_0x000107c61170(pcStack_4d8);
    func_0x000107c61170(pcVar10);
    return pcVar10;
  }
  return pcVar4;
}



/* Entry: 106adb7fc; end: 106adbc53; -[SCBlizzardUploadManager _uploadBlizzardRequestInBackground:uploadRequestInfo:headers:] */

void FUN_106adb7fc(undefined *param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *unaff_x26;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  char *pcStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined1 **ppuStack_3b0;
  code *pcStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined1 uStack_378;
  undefined1 uStack_377;
  undefined *puStack_368;
  undefined4 uStack_35c;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined *puStack_318;
  undefined *puStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_200;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar9 = param_1;
  func_0x00010bfcde60(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_106ac57b4();
  _objc_release(puVar9);
  puVar2 = param_1;
  func_0x00010beeb920();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  uStack_170 = param_5;
  puStack_168 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar9 = param_1;
    func_0x00010bfcde60(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ac58a4();
    _objc_release(puVar9);
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    puVar9 = param_4;
    func_0x00010bfad440();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined *)0x10;
    puVar2 = puVar9;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar12 = *plStack_150;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_150 != lVar12) {
            _objc_enumerationMutation(puVar9);
          }
          func_0x00010c200500(*(undefined8 *)(lStack_158 + (long)puVar8 * 8));
          puVar8 = puVar8 + 1;
        } while (puVar2 != puVar8);
        puVar8 = (undefined *)0x10;
        puVar2 = puVar9;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar9);
    func_0x00010bf00c20();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_4;
    func_0x00010bfad440();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_4;
    func_0x00010bfad440();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar11;
    func_0x00010c125a80();
    puVar10 = puVar2;
    func_0x00010bef8480(param_1);
    _objc_release(puVar11);
    _objc_release(puVar9);
  }
  else {
    puVar2 = param_4;
    func_0x00010c28ea80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c137160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c1a4fc0(puVar9);
    func_0x00010c166e40(puVar9);
    puVar8 = param_1;
    func_0x00010bf14780();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x00010c28e8c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar8 = param_1;
    _objc_opt_class(param_1);
    func_0x00010c08fa60(param_3);
    func_0x00010bea8460(puVar8);
    unaff_x26 = param_1;
    func_0x00010bf146e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_120 = &PTR____CFConstantStringClassReference_110e6e138;
    ppuStack_118 = &PTR____CFConstantStringClassReference_110e6e158;
    puStack_178 = param_3;
    puStack_108 = param_4;
    func_0x00010c08fa60();
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_110 = &PTR____CFConstantStringClassReference_110e6e178;
    puStack_f8 = puStack_168;
    puVar8 = (undefined *)0x3;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_100 = puVar11;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf146e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c26a820(puVar2);
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar10;
    func_0x00010c1d0640(puVar4);
    _objc_release(puVar10);
    param_3 = puStack_178;
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar11);
    _objc_sync_exit(unaff_x26);
    _objc_release(unaff_x26);
    puVar11 = param_4;
    func_0x00010bfad440();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar11;
    func_0x00010bdc6cc0(param_1);
    _objc_release(puVar11);
    func_0x00010c13d1c0(puVar2);
    param_1 = puVar9;
  }
  _objc_release(puVar2);
  _objc_release(param_1);
  _objc_release(puStack_168);
  _objc_release(uStack_170);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(unaff_x26);
  __Unwind_Resume();
  pcStack_188 = FUN_106adbc54;
  lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2d0 = puVar10;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  puVar2 = param_3;
  func_0x00010bf146e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  puVar11 = param_3;
  func_0x00010bf146e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26a820(puVar5);
  func_0x00010c0df840(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar11);
  if (puVar10 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    puStack_2c8 = (undefined *)0x0;
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = puVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x00010c2827c0();
    puStack_2c8 = puVar3;
    _objc_release(puVar11);
    puVar11 = puVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bf146e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c26a820(puVar5);
    func_0x00010c0df840(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  _objc_release(puVar10);
  _objc_sync_exit(puVar2);
  _objc_release(puVar2);
  if (puVar9 == (undefined *)0x0) {
    puVar9 = puVar5;
    func_0x00010c26a5c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_3;
    func_0x00010be70060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    if (puVar10 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      goto LAB_106adc3f4;
    }
    puVar3 = puVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar4 = puVar10;
    func_0x00010c0e00e0(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar4);
    puStack_338 = puVar9;
    puStack_330 = puVar10;
    puStack_328 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puStack_2c8 = (undefined *)0x0;
    }
    else {
      func_0x00010c2827c0();
      puStack_2c8 = puVar2;
    }
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2a8 = 0;
    plStack_2b0 = (long *)0x0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    puVar9 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar12 = *plStack_2b0;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_2b0 != lVar12) {
            _objc_enumerationMutation(puVar9);
          }
          puVar4 = param_3;
          func_0x00010bdfb1a0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar11);
          _objc_release(puVar4);
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar2 = puVar9;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar9);
    puVar9 = puVar3;
    func_0x00010c0e00e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d04e8;
    puStack_310 = puVar9;
    _objc_alloc();
    puVar9 = puVar3;
    puStack_340 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    puStack_318 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_2d8 = puVar2;
    func_0x00010c2827c0();
    puVar9 = puVar3;
    puStack_348 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_2e0 = puVar9;
    func_0x00010c2827c0();
    puVar2 = puVar3;
    puStack_350 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_2e8 = puVar2;
    func_0x00010c2827c0();
    puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar10 = puVar3;
    puStack_358 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_2f0 = puVar10;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    puStack_320 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_2f8 = puVar2;
    func_0x00010bf1f3c0();
    uStack_35c = SUB84(puVar2,0);
    puVar9 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_300 = puVar9;
    func_0x00010bf885a0(puVar9);
    puVar9 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_308 = puVar9;
    func_0x00010c2827c0();
    puVar10 = puVar3;
    puStack_368 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010bf1f3c0();
    puVar2 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf1f3c0();
    uStack_377 = SUB81(puVar7,0);
    uStack_378 = SUB81(puVar9,0);
    puStack_398 = puStack_368;
    puStack_3a0 = puStack_310;
    puVar9 = puStack_340;
    puStack_390 = puVar11;
    puStack_388 = puVar10;
    puStack_380 = puVar4;
    func_0x00010c027140(uVar13,puStack_340);
    _objc_release(puVar2);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_release(puStack_308);
    _objc_release(puStack_300);
    _objc_release(puStack_2f8);
    _objc_release(puStack_320);
    _objc_release(puStack_2f0);
    _objc_release(puStack_2e8);
    _objc_release(puStack_2e0);
    _objc_release(puStack_2d8);
    _objc_release(puStack_318);
    _objc_release(puStack_310);
    _objc_release(puVar11);
    _objc_release(puStack_328);
    _objc_release(puVar3);
    _objc_release(puStack_330);
    puVar11 = puStack_338;
    if (puVar8 != (undefined *)0x0) goto LAB_106adbe18;
LAB_106adc320:
    puVar10 = param_3;
    func_0x00010bfcde60(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ac582c();
  }
  else {
    if (puVar8 == (undefined *)0x0) goto LAB_106adc320;
LAB_106adbe18:
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = puVar8;
    func_0x00010bf3ec40();
    puStack_3a0 = puVar2;
    func_0x00010c14de00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010bfcde60(param_3);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ac58a4();
    _objc_release(puVar2);
  }
  _objc_release(puVar10);
  if (puVar11 != (undefined *)0x0) {
    puVar10 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar10);
  }
  puVar10 = puVar9;
  func_0x00010bfad440(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c1a0(param_3);
  _objc_release(puVar10);
  puVar10 = puVar5;
  func_0x00010c13b720();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar10;
  func_0x00010bf9c200();
  if (0 < (long)puVar3) {
    func_0x00010bf9c200(puVar10);
  }
  func_0x00010be0b9c0(param_3);
  _objc_release(puVar10);
LAB_106adc3f4:
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar5);
  puVar9 = puStack_2d0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_200) {
    ___stack_chk_fail();
    _objc_sync_exit(puVar2);
    __Unwind_Resume(puVar9);
    pcVar1 = "APPSTORE";
    pcStack_3a8 = FUN_106adc478;
    puStack_3c0 = puVar5;
    puStack_3b8 = puVar9;
    ppuStack_3b0 = &puStack_190;
    func_0x0001000d77b8("APPSTORE",&PTR___NSConcreteGlobalBlock_11095f170);
    func_0x000107c61180();
    puStack_3e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3e0 = 0xc2000000;
    puStack_3d8 = &UNK_100c3b500;
    puStack_3d0 = &UNK_110849530;
    pcStack_3c8 = pcVar1;
    func_0x000107c61174();
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_3e8);
    func_0x000107c61170(pcStack_3c8);
    func_0x000107c61170(pcVar1);
    return;
  }
  return;
}



/* Entry: 106adbc54; end: 106adc477; -[SCBlizzardUploadManager URLSession:task:didCompleteWithError:] */

void FUN_106adbc54(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  char *pcStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined1 uStack_1f8;
  undefined1 uStack_1f7;
  undefined *puStack_1e8;
  undefined4 uStack_1dc;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_150 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_1;
  func_0x00010bf146e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  puVar11 = param_1;
  func_0x00010bf146e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26a820(param_4);
  func_0x00010c0df840(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar11);
  if (puVar3 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    puStack_148 = (undefined *)0x0;
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar11;
    func_0x00010c2827c0();
    puStack_148 = puVar10;
    _objc_release(puVar11);
    puVar11 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf146e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c26a820(param_4);
    func_0x00010c0df840(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(puVar4);
    _objc_release(puVar10);
    _objc_release(puVar4);
  }
  _objc_release(puVar3);
  _objc_sync_exit(puVar2);
  _objc_release(puVar2);
  if (puVar9 == (undefined *)0x0) {
    lVar12 = param_4;
    func_0x00010c26a5c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010be70060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar12);
    if (puVar9 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      goto LAB_106adc3f4;
    }
    puVar3 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar4 = puVar9;
    func_0x00010c0e00e0(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar4);
    puStack_1b8 = puVar2;
    puStack_1b0 = puVar9;
    puStack_1a8 = puVar10;
    if (puVar10 == (undefined *)0x0) {
      puStack_148 = (undefined *)0x0;
    }
    else {
      func_0x00010c2827c0();
      puStack_148 = puVar10;
    }
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar9 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar12 = *plStack_130;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar12) {
            _objc_enumerationMutation(puVar9);
          }
          puVar4 = param_1;
          func_0x00010bdfb1a0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar11);
          _objc_release(puVar4);
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar2 = puVar9;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar9);
    puVar9 = puVar3;
    func_0x00010c0e00e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d04e8;
    puStack_190 = puVar9;
    _objc_alloc();
    puVar9 = puVar3;
    puStack_1c0 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    puStack_198 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar2;
    func_0x00010c2827c0();
    puVar9 = puVar3;
    puStack_1c8 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = puVar9;
    func_0x00010c2827c0();
    puVar2 = puVar3;
    puStack_1d0 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = puVar2;
    func_0x00010c2827c0();
    puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar10 = puVar3;
    puStack_1d8 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = puVar10;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    puStack_1a0 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = puVar2;
    func_0x00010bf1f3c0();
    uStack_1dc = SUB84(puVar2,0);
    puVar9 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_180 = puVar9;
    func_0x00010bf885a0(puVar9);
    puVar9 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_188 = puVar9;
    func_0x00010c2827c0();
    puVar10 = puVar3;
    puStack_1e8 = puVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010bf1f3c0();
    puVar2 = puVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010bf1f3c0();
    uStack_1f7 = SUB81(puVar6,0);
    uStack_1f8 = SUB81(puVar9,0);
    puStack_218 = puStack_1e8;
    puStack_220 = puStack_190;
    puVar9 = puStack_1c0;
    puStack_210 = puVar11;
    puStack_208 = puVar10;
    puStack_200 = puVar4;
    func_0x00010c027140(uVar8,puStack_1c0);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar10);
    _objc_release(puStack_188);
    _objc_release(puStack_180);
    _objc_release(puStack_178);
    _objc_release(puStack_1a0);
    _objc_release(puStack_170);
    _objc_release(puStack_168);
    _objc_release(puStack_160);
    _objc_release(puStack_158);
    _objc_release(puStack_198);
    _objc_release(puStack_190);
    _objc_release(puVar11);
    _objc_release(puStack_1a8);
    _objc_release(puVar3);
    _objc_release(puStack_1b0);
    puVar11 = puStack_1b8;
    if (param_5 != (undefined *)0x0) goto LAB_106adbe18;
LAB_106adc320:
    puVar3 = param_1;
    func_0x00010bfcde60(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ac582c();
  }
  else {
    if (param_5 == (undefined *)0x0) goto LAB_106adc320;
LAB_106adbe18:
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = param_5;
    func_0x00010bf3ec40();
    puStack_220 = puVar2;
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bfcde60(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ac58a4();
    _objc_release(puVar2);
  }
  _objc_release(puVar3);
  if (puVar11 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cc60();
    _objc_release(puVar3);
  }
  puVar3 = puVar9;
  func_0x00010bfad440(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be8c1a0(param_1);
  _objc_release(puVar3);
  lVar12 = param_4;
  func_0x00010c13b720();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar12;
  func_0x00010bf9c200();
  if (0 < lVar7) {
    func_0x00010bf9c200(lVar12);
  }
  func_0x00010be0b9c0(param_1);
  _objc_release(lVar12);
LAB_106adc3f4:
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(param_5);
  _objc_release(param_4);
  uVar8 = uStack_150;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_sync_exit(puVar2);
    __Unwind_Resume(uVar8);
    pcVar1 = "APPSTORE";
    pcStack_228 = FUN_106adc478;
    lStack_240 = param_4;
    uStack_238 = uVar8;
    puStack_230 = &stack0xfffffffffffffff0;
    func_0x0001000d77b8("APPSTORE",&PTR___NSConcreteGlobalBlock_11095f170);
    func_0x000107c61180();
    puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_260 = 0xc2000000;
    puStack_258 = &UNK_100c3b500;
    puStack_250 = &UNK_110849530;
    pcStack_248 = pcVar1;
    func_0x000107c61174();
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_268);
    func_0x000107c61170(pcStack_248);
    func_0x000107c61170(pcVar1);
    return;
  }
  return;
}



/* Entry: 106adc478; end: 106adc48b; -[SCBlizzardUploadManager URLSessionDidFinishEventsForBackgroundURLSession:] */

void FUN_106adc478(void)

{
  char *pcVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  char *pcStack_28;
  
  pcVar1 = "APPSTORE";
  func_0x0001000d77b8("APPSTORE",&PTR___NSConcreteGlobalBlock_11095f170);
  func_0x000107c61180();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_100c3b500;
  puStack_30 = &UNK_110849530;
  pcStack_28 = pcVar1;
  func_0x000107c61174();
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_48);
  func_0x000107c61170(pcStack_28);
  func_0x000107c61170(pcVar1);
  return;
}



/* Entry: 106adc48c; end: 106adc4b3; +[SCBlizzardUploadManager setBackgroundSessionCompletionHandler:] */

void FUN_106adc48c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = uRam00000001136c4b00;
  uRam00000001136c4b00 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106adc4b4; end: 106adc5d3; +[SCBlizzardUploadManager ensureBackgroundSessionExists] */

void FUN_106adc4b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126d0378;
  func_0x00010c28ec60();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    if (puRam00000001136c4b08 != (undefined *)0x0) goto LAB_106adc5b0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010bf9c520();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf1d140();
    _objc_release(puVar2);
    if ((int)puVar3 == 0) goto LAB_106adc5b0;
    puVar2 = puVar1;
    func_0x00010bf14780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0 || puRam00000001136c4b08 != (undefined *)0x0) goto LAB_106adc5b0;
  }
  puVar4 = PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8;
  func_0x00010bf14420(PTR__OBJC_CLASS___NSURLSessionConfiguration_1126c7fd8,param_2,
                      &PTR____CFConstantStringClassReference_110e6e0d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  puVar5 = PTR_PTR_1126d04f0;
  func_0x00010c22b6a0(PTR_PTR_1126d04f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1606c0(puVar2,param_2,puVar4,puVar5,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puRam00000001136c4b08;
  puRam00000001136c4b08 = puVar2;
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
LAB_106adc5b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106adc5d4; end: 106adc697; -[SCBlizzardUploadManager _writeDataToTempFile:] */

/* WARNING: Removing unreachable block (ram,0x000106adc630) */

void FUN_106adc5d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bdf48e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x00010c14e080(param_3);
    _objc_retain(param_1);
    lVar1 = param_1;
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106adc698; end: 106adc7d7; -[SCBlizzardUploadManager _createTempFileURLForBackgroundUpload] */

void FUN_106adc698(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar1 = param_1;
  func_0x0001000f73a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad320(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bdc2c80(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf55da0();
  _objc_release(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    func_0x00010bfcde60(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_106ac58a4();
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bdc2c60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = puVar3;
  }
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106adc7d8; end: 106adc8a3; +[SCBlizzardUploadManager _setTaskDescription:withUploadRequestInfo:tempFileURL:payloadSize:] */

void FUN_106adc7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  func_0x00010bea1420(param_1,param_2,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_1,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x00010c008340();
  func_0x00010c2127e0(param_3,param_2,puVar2);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106adc8a4; end: 106add0e7; +[SCBlizzardUploadManager _serializeContextToDict:tempFileURL:payloadSize:] */

void FUN_106adc8a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
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
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined *puVar33;
  long lVar34;
  undefined **ppuStack_3e8;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfad440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar34 = 0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(lVar2);
      }
      puVar33 = *(undefined **)(lVar34 * 8);
      ppuStack_130 = &PTR____CFConstantStringClassReference_110e18b78;
      _objc_retain(puVar33);
      puVar4 = puVar33;
      func_0x00010bfacec0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_128 = &PTR____CFConstantStringClassReference_110e6e458;
      puVar5 = puVar33;
      puStack_d0 = puVar4;
      func_0x00010c0ad4a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_120 = &PTR____CFConstantStringClassReference_110dd2078;
      puStack_c8 = puVar5;
      func_0x00010c125a80(puVar33);
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_118 = &PTR____CFConstantStringClassReference_110e6e398;
      puStack_c0 = puVar6;
      func_0x00010bf99ca0(puVar33);
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_110 = &PTR____CFConstantStringClassReference_110e6e3d8;
      puStack_b8 = puVar7;
      func_0x00010bfaca40(puVar33);
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_108 = &PTR____CFConstantStringClassReference_110e6e3f8;
      puStack_b0 = puVar8;
      func_0x00010bfe3060(puVar33);
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_100 = &PTR____CFConstantStringClassReference_110e6e418;
      puStack_a8 = puVar9;
      func_0x00010bf67b20(puVar33);
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_f8 = &PTR____CFConstantStringClassReference_110e6e3b8;
      puStack_a0 = puVar10;
      func_0x00010bf5ab00(puVar33);
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_f0 = &PTR____CFConstantStringClassReference_110e6e2d8;
      puStack_98 = puVar11;
      func_0x00010c073620(puVar33);
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_e8 = &PTR____CFConstantStringClassReference_110e6e2f8;
      puStack_90 = puVar12;
      func_0x00010c07f1c0(puVar33);
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_e0 = &PTR____CFConstantStringClassReference_110e6e438;
      puStack_88 = puVar13;
      func_0x00010c06eee0(puVar33);
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_d8 = &PTR____CFConstantStringClassReference_110e6e378;
      puVar15 = puVar33;
      puStack_80 = puVar14;
      func_0x00010bf8bd60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar33);
      puVar33 = puVar15;
      if (puVar15 == (undefined *)0x0) {
        puVar33 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar16 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_78 = puVar33;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      if (puVar15 == (undefined *)0x0) {
        _objc_release(puVar33);
      }
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010befa120(puVar1);
      _objc_release(puVar16);
      lVar34 = lVar34 + 1;
    } while (lVar3 != lVar34);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  lVar3 = param_3;
  func_0x00010c0ad4a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_3;
  func_0x00010c28ea80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar17;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_3;
  func_0x00010c113c80();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_3;
  func_0x00010c125a80();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0dde00(param_3);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0ddde0(param_3);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0de600(param_3);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c06cee0(param_3);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26f860(param_3);
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar19 = param_3;
  func_0x00010c1351a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfad3a0(param_3);
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c073620(param_3);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07f1c0(param_3);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_4;
  puStack_1c8 = puVar4;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uStack_1c0 = uVar20;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar32 = &puStack_1c8;
  puVar15 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1b8 = puVar5;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar20);
  _objc_release(puVar4);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(lVar19);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(lVar18);
  _objc_release(lVar34);
  _objc_release(lVar2);
  _objc_release(lVar17);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(ppuVar32);
    ppuVar21 = ppuVar32;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
    ppuVar22 = ppuVar21;
    _objc_opt_isKindOfClass(ppuVar21,puVar1);
    if (((ulong)ppuVar22 & 1) == 0) {
      ppuStack_3e8 = ppuVar32;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuStack_3e8 = (undefined **)0x0;
    }
    _objc_release(ppuVar21);
    puVar15 = PTR_PTR_1126d0390;
    _objc_alloc();
    ppuVar21 = ppuVar32;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    ppuVar22 = ppuVar32;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    ppuVar23 = ppuVar32;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar24 = ppuVar32;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    ppuVar25 = ppuVar32;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    ppuVar26 = ppuVar32;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    ppuVar27 = ppuVar32;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2827c0();
    ppuVar28 = ppuVar32;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    ppuVar29 = ppuVar32;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    ppuVar30 = ppuVar32;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    ppuVar31 = ppuVar32;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010aa0(puVar15);
    _objc_release(ppuVar31);
    _objc_release(ppuVar30);
    _objc_release(ppuVar29);
    _objc_release(ppuVar28);
    _objc_release(ppuVar27);
    _objc_release(ppuVar26);
    _objc_release(ppuVar25);
    _objc_release(ppuVar24);
    _objc_release(ppuVar23);
    _objc_release(ppuVar22);
    _objc_release(ppuVar21);
    _objc_release(ppuStack_3e8);
    _objc_release(ppuVar32);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 106add0e8; end: 106add3c7; -[SCBlizzardUploadManager _deserializeFileFromDict:] */

void FUN_106add0e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
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
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_opt_class(PTR__OBJC_CLASS___NSNull_1126aef28);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  if ((uVar3 & 1) == 0) {
    uStack_68 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uStack_68 = 0;
  }
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126d0390;
  _objc_alloc();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0();
  uVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  uVar6 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  uVar7 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  uVar8 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2827c0();
  uVar9 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar10 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar11 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar12 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010aa0(puVar2);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106add3c8; end: 106add4b7; -[SCBlizzardUploadManager _parseContextFromTaskDescription:] */

void FUN_106add3c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010bf64920(param_3,param_2,4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar2 = puVar1;
    _objc_opt_isKindOfClass(puVar1,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x00010bfcde60(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_106ac58a4();
      _objc_release(param_1);
      puVar3 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar1);
      puVar3 = puVar1;
    }
    _objc_release(puVar1);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106add4b8; end: 106add57f; -[SCBlizzardUploadManager _fetchActiveBackgroundUploadFilenamesWithCompletion:] */

void FUN_106add4b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf14780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf14780(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106add580;
    puStack_48 = &UNK_11095f140;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010bfcb0a0(lVar1,param_2,&puStack_60);
    _objc_release(lVar1);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106add580; end: 106add8d7;  */

void FUN_106add580(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  long unaff_x24;
  undefined *puVar12;
  long unaff_x26;
  undefined **unaff_x27;
  long unaff_x28;
  undefined *puVar13;
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_290;
  long lStack_280;
  undefined **ppuStack_278;
  long lStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined *puStack_258;
  long lStack_250;
  undefined *puStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  ulong uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_218 = param_2;
  lStack_200 = param_1;
  _objc_retain(param_2);
  _objc_retain(param_3);
  uStack_210 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  lStack_208 = param_3;
  func_0x00010bf52a60();
  if (param_3 != 0) {
    lStack_1f8 = *plStack_1a0;
    unaff_x27 = &PTR____CFConstantStringClassReference_110e18b78;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1a0 != lStack_1f8) {
          _objc_enumerationMutation(lStack_208);
        }
        lVar9 = *(long *)(lStack_1a8 + lVar11 * 8);
        lVar2 = lVar9;
        func_0x00010c252440();
        if ((lVar2 == 0) || (lVar2 = lVar9, func_0x00010c252440(), lVar2 == 1)) {
          unaff_x28 = *(long *)(lStack_200 + 0x20);
          func_0x00010c26a5c0(lVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be70060();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar9);
          lVar2 = unaff_x28;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar2;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar2);
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          _objc_retain(lVar9);
          lVar2 = lVar9;
          func_0x00010bf52a60();
          if (lVar2 != 0) {
            unaff_x22 = *plStack_1e0;
            do {
              unaff_x26 = 0;
              do {
                if (*plStack_1e0 != unaff_x22) {
                  _objc_enumerationMutation(lVar9);
                }
                unaff_x24 = *(long *)(lStack_1e8 + unaff_x26 * 8);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (unaff_x24 != 0) {
                  func_0x00010befa120(puVar1);
                }
                _objc_release(unaff_x24);
                unaff_x26 = unaff_x26 + 1;
              } while (lVar2 != unaff_x26);
              lVar2 = lVar9;
              func_0x00010bf52a60();
            } while (lVar2 != 0);
          }
          _objc_release(lVar9);
          _objc_release(lVar9);
          _objc_release(unaff_x28);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != param_3);
      param_3 = lStack_208;
      func_0x00010bf52a60();
    } while (param_3 != 0);
  }
  _objc_release(lStack_208);
  uVar10 = *(undefined8 *)(lStack_200 + 0x20);
  _objc_retain(uVar10);
  _objc_sync_enter(uVar10);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  func_0x00010c162540(*(undefined8 *)(lStack_200 + 0x20));
  _objc_release(puVar3);
  puVar7 = (undefined *)0x1;
  func_0x00010c162720(*(undefined8 *)(lStack_200 + 0x20));
  _objc_sync_exit(uVar10);
  _objc_release(uVar10);
  if (*(long *)(lStack_200 + 0x28) != 0) {
    (**(code **)(*(long *)(lStack_200 + 0x28) + 0x10))();
  }
  _objc_release(puVar1);
  _objc_release(uStack_210);
  _objc_release(lStack_208);
  uVar4 = uStack_218;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(uVar10);
  uVar5 = uVar4;
  __Unwind_Resume();
  puVar8 = &uStack_350;
  pcStack_228 = FUN_106add8d8;
  lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = puVar7;
  lStack_280 = unaff_x28;
  ppuStack_278 = unaff_x27;
  lStack_270 = unaff_x26;
  uStack_268 = 0;
  lStack_260 = unaff_x24;
  puStack_258 = puVar1;
  lStack_250 = unaff_x22;
  puStack_248 = puVar3;
  uStack_240 = uVar4;
  uStack_238 = uVar10;
  puStack_230 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(uVar5);
  _objc_sync_enter(uVar5);
  uVar4 = uVar5;
  func_0x00010bef04a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf529e0();
  _objc_release(uVar4);
  if (uVar6 == 0) {
    _objc_retain(puVar7);
    puVar1 = puVar7;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    _objc_retain(puVar7);
    puVar3 = puVar7;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar11 = *plStack_340;
      do {
        puVar13 = (undefined *)0x0;
        do {
          if (*plStack_340 != lVar11) {
            _objc_enumerationMutation(puVar7);
          }
          uVar10 = *(undefined8 *)(lStack_348 + (long)puVar13 * 8);
          uVar4 = uVar5;
          func_0x00010bef04a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfacec0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          func_0x00010bf4b900();
          _objc_release(uVar10);
          _objc_release(uVar4);
          if ((uVar6 & 1) == 0) {
            func_0x00010befa120(puVar1);
          }
          puVar13 = puVar13 + 1;
        } while (puVar3 != puVar13);
        puVar3 = puVar7;
        puVar8 = &uStack_350;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(puVar7);
    puVar13 = (undefined *)puVar8;
  }
  _objc_sync_exit(uVar5);
  _objc_release(uVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_290) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(uVar5);
  __Unwind_Resume();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar13);
  _objc_retain(puVar7);
  _objc_sync_enter(puVar7);
  puVar1 = puVar7;
  func_0x00010bef04a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar12 = puVar7;
    func_0x00010bef04a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar12;
    func_0x00010c0d3c80();
    _objc_release(puVar12);
  }
  _objc_release(puVar1);
  _objc_retain(puVar13);
  puVar1 = puVar13;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar1 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar13);
      }
      uVar10 = *(undefined8 *)((long)puVar12 * 8);
      func_0x00010bfacec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3);
      _objc_release(uVar10);
      puVar12 = puVar12 + 1;
    } while (puVar1 != puVar12);
    puVar1 = puVar13;
    func_0x00010bf52a60();
  }
  _objc_release(puVar13);
  puVar1 = puVar3;
  func_0x00010bf51e00();
  puVar12 = puVar1;
  func_0x00010c162540(puVar7);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_sync_exit(puVar7);
  _objc_release(puVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(puVar7);
  __Unwind_Resume();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar12);
  _objc_retain(puVar13);
  _objc_sync_enter(puVar13);
  puVar1 = puVar13;
  func_0x00010bef04a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf529e0();
  _objc_release(puVar1);
  if (puVar3 != (undefined *)0x0) {
    puVar1 = puVar13;
    func_0x00010bef04a0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar1);
    _objc_retain(puVar12);
    puVar1 = puVar12;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(puVar12);
        }
        uVar10 = *(undefined8 *)((long)puVar7 * 8);
        func_0x00010bfacec0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d360(puVar3);
        _objc_release(uVar10);
        puVar7 = puVar7 + 1;
      } while (puVar1 != puVar7);
      puVar1 = puVar12;
      func_0x00010bf52a60();
    }
    _objc_release(puVar12);
    puVar1 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c162540(puVar13);
    _objc_release(puVar1);
    _objc_release(puVar3);
  }
  _objc_sync_exit(puVar13);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(puVar13);
  __Unwind_Resume(puVar12);
  lVar11 = lRam00000001136c4b00;
  _objc_retainBlock();
  if (lVar11 != 0) {
    (**(code **)(lVar11 + 0x10))(lVar11);
    lVar2 = lRam00000001136c4b00;
    lRam00000001136c4b00 = 0;
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar11);
  return;
}



/* Entry: 106add8d8; end: 106addadf; -[SCBlizzardUploadManager _filterOutFilesInActiveBackgroundUploads:] */

void FUN_106add8d8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long lVar9;
  undefined *puVar10;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined1 auStack_328 [128];
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar8 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  puVar2 = param_1;
  func_0x00010bef04a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    puVar3 = param_3;
    func_0x00010bf52a60();
    if (puVar3 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x23 = *(undefined **)(lStack_128 + (long)puVar10 * 8);
          unaff_x24 = param_1;
          func_0x00010bef04a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = unaff_x23;
          func_0x00010bfacec0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = unaff_x24;
          func_0x00010bf4b900(unaff_x24,param_2,unaff_x26);
          _objc_release(unaff_x26);
          _objc_release(unaff_x24);
          if (((ulong)unaff_x25 & 1) == 0) {
            func_0x00010befa120(puVar2,param_2,unaff_x23);
          }
          puVar10 = puVar10 + 1;
        } while (puVar3 != puVar10);
        puVar3 = param_3;
        puVar8 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined *)0x0);
    }
    _objc_release(param_3);
    puVar10 = (undefined *)puVar8;
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  puVar3 = param_3;
  __Unwind_Resume();
  pcStack_138 = FUN_106addae0;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  uStack_160 = 0;
  puStack_158 = puVar2;
  puStack_150 = param_3;
  puStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(puVar3);
  _objc_sync_enter(puVar3);
  puVar2 = puVar3;
  func_0x00010bef04a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    unaff_x23 = puVar3;
    func_0x00010bef04a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = unaff_x23;
    func_0x00010c0d3c80();
    _objc_release(unaff_x23);
  }
  _objc_release(puVar2);
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  lStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  puStack_240 = (undefined8 *)0x0;
  _objc_retain(puVar10);
  puVar2 = puVar10;
  func_0x00010bf52a60(puVar10,param_2,&uStack_250,auStack_208,0x10);
  if (puVar2 != (undefined *)0x0) {
    unaff_x24 = (undefined *)*puStack_240;
    do {
      unaff_x25 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_240 != unaff_x24) {
          _objc_enumerationMutation(puVar10);
        }
        unaff_x23 = *(undefined **)(lStack_248 + (long)unaff_x25 * 8);
        func_0x00010bfacec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4,param_2,unaff_x23);
        _objc_release(unaff_x23);
        unaff_x25 = unaff_x25 + 1;
      } while (puVar2 != unaff_x25);
      puVar2 = puVar10;
      func_0x00010bf52a60(puVar10,param_2,&uStack_250,auStack_208,0x10);
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar10);
  puVar2 = puVar4;
  func_0x00010bf51e00();
  puVar7 = puVar2;
  func_0x00010c162540(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_sync_exit(puVar3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(puVar3);
  puVar5 = puVar10;
  __Unwind_Resume();
  pcStack_258 = FUN_106addcdc;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2a0 = unaff_x26;
  puStack_298 = unaff_x25;
  puStack_290 = unaff_x24;
  puStack_288 = unaff_x23;
  puStack_280 = puVar2;
  puStack_278 = puVar4;
  puStack_270 = puVar10;
  puStack_268 = puVar3;
  ppuStack_260 = &puStack_140;
  _objc_retain(puVar7);
  _objc_retain(puVar5);
  _objc_sync_enter(puVar5);
  puVar2 = puVar5;
  func_0x00010bef04a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar5;
    func_0x00010bef04a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    lStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    plStack_360 = (long *)0x0;
    _objc_retain(puVar7);
    puVar2 = puVar7;
    func_0x00010bf52a60(puVar7,param_2,&uStack_370,auStack_328,0x10);
    if (puVar2 != (undefined *)0x0) {
      lVar9 = *plStack_360;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (*plStack_360 != lVar9) {
            _objc_enumerationMutation(puVar7);
          }
          uVar6 = *(undefined8 *)(lStack_368 + (long)puVar10 * 8);
          func_0x00010bfacec0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360(puVar3,param_2,uVar6);
          _objc_release(uVar6);
          puVar10 = puVar10 + 1;
        } while (puVar2 != puVar10);
        puVar2 = puVar7;
        func_0x00010bf52a60(puVar7,param_2,&uStack_370,auStack_328,0x10);
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar7);
    puVar2 = puVar3;
    func_0x00010bf51e00(puVar3);
    func_0x00010c162540(puVar5,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_sync_exit(puVar5);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(puVar5);
  __Unwind_Resume(puVar7);
  lVar9 = lRam00000001136c4b00;
  _objc_retainBlock();
  if (lVar9 != 0) {
    (**(code **)(lVar9 + 0x10))(lVar9);
    lVar1 = lRam00000001136c4b00;
    lRam00000001136c4b00 = 0;
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 106addae0; end: 106addcdb; -[SCBlizzardUploadManager _addFilesToActiveSet:] */

void FUN_106addae0(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
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
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  puVar1 = param_1;
  func_0x00010bef04a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = param_1;
    func_0x00010bef04a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar5 != 0) {
    lVar4 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        func_0x00010bfacec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar7,param_2,uVar3);
        _objc_release(uVar3);
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
      lVar5 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(param_3);
  puVar1 = puVar7;
  func_0x00010bf51e00();
  puVar2 = puVar1;
  func_0x00010c162540(param_1);
  _objc_release(puVar1);
  _objc_release(puVar7);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar2);
  _objc_retain(param_3);
  _objc_sync_enter(param_3);
  lVar5 = param_3;
  func_0x00010bef04a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar5;
  func_0x00010bf529e0();
  _objc_release(lVar5);
  if (lVar4 != 0) {
    lVar5 = param_3;
    func_0x00010bef04a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010c0d3c80();
    _objc_release(lVar5);
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    lStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    _objc_retain(puVar2);
    puVar1 = puVar2;
    func_0x00010bf52a60(puVar2,param_2,&uStack_240,auStack_1f8,0x10);
    if (puVar1 != (undefined *)0x0) {
      lVar5 = *plStack_230;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_230 != lVar5) {
            _objc_enumerationMutation(puVar2);
          }
          uVar3 = *(undefined8 *)(lStack_238 + (long)puVar7 * 8);
          func_0x00010bfacec0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360(lVar4,param_2,uVar3);
          _objc_release(uVar3);
          puVar7 = puVar7 + 1;
        } while (puVar1 != puVar7);
        puVar1 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_240,auStack_1f8,0x10);
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    lVar5 = lVar4;
    func_0x00010bf51e00(lVar4);
    func_0x00010c162540(param_3,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_sync_exit(param_3);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_3);
  __Unwind_Resume(puVar2);
  lVar5 = lRam00000001136c4b00;
  _objc_retainBlock();
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5);
    lVar4 = lRam00000001136c4b00;
    lRam00000001136c4b00 = 0;
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 106addcdc; end: 106addec7; -[SCBlizzardUploadManager _removeFilesFromActiveSet:] */

void FUN_106addcdc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lVar1 = param_1;
  func_0x00010bef04a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bef04a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0d3c80();
    _objc_release(lVar1);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar1 != 0) {
      lVar4 = *plStack_110;
      do {
        lVar5 = 0;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(param_3);
          }
          uVar3 = *(undefined8 *)(lStack_118 + lVar5 * 8);
          func_0x00010bfacec0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360(lVar2,param_2,uVar3);
          _objc_release(uVar3);
          lVar5 = lVar5 + 1;
        } while (lVar1 != lVar5);
        lVar1 = param_3;
        func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(param_3);
    lVar1 = lVar2;
    func_0x00010bf51e00(lVar2);
    func_0x00010c162540(param_1,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume(param_3);
  lVar1 = lRam00000001136c4b00;
  _objc_retainBlock();
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
    lVar2 = lRam00000001136c4b00;
    lRam00000001136c4b00 = 0;
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106addec8; end: 106addf0f;  */

void FUN_106addec8(void)

{
  long lVar1;
  long lVar2;
  
  lVar2 = lRam00000001136c4b00;
  _objc_retainBlock();
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2);
    lVar1 = lRam00000001136c4b00;
    lRam00000001136c4b00 = 0;
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106addf10; end: 106addf9f; -[SCBlizzardUploadManager _shouldUseForegroundURLSessionForRequestInfo:] */

bool FUN_106addf10(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010bf9c520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf1d160();
  if ((int)uVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010c113c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c2827c0();
    bVar1 = lVar4 == 0;
    _objc_release(lVar3);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106addfa0; end: 106ade12f; -[SCBlizzardUploadManager _uploadBlizzardRequestWithForegroundURLSession:uploadRequestInfo:headers:onComplete:] */

void FUN_106addfa0(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = param_1;
  func_0x00010c2bf420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c083e80();
  _objc_release(uVar1);
  puVar5 = param_5;
  lVar6 = param_3;
  if ((uVar2 & 1) == 0) {
    lVar3 = param_3;
    func_0x00010c14cea0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      _objc_retain(lVar3);
      _objc_release(param_3);
      puVar4 = param_5;
      func_0x00010c0d3c80(param_5);
      func_0x00010c1d0640();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_5);
      _objc_release(puVar4);
      lVar6 = lVar3;
    }
    _objc_release(lVar3);
  }
  func_0x00010bee5880(param_1,param_2,lVar6,puVar5,1,param_3,param_5,param_4,param_6);
  _objc_release(puVar5);
  _objc_release(lVar6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ade130; end: 106ade39b; -[SCBlizzardUploadManager _uploadForegroundURLSessionBody:bodyHeaders:attempt:eventsData:headers:uploadRequestInfo:onComplete:] */

void FUN_106ade130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar2 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  uVar1 = param_8;
  func_0x00010c28ea80(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137160(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c1a4fc0(puVar2);
  func_0x00010c166e40(puVar2);
  _objc_initWeak(auStack_68,param_1);
  puVar3 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  func_0x00010c22bfa0(PTR__OBJC_CLASS___NSURLSession_1126c7fe8);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(param_9);
  uStack_70 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar4 = puVar3;
  func_0x00010c28e8a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010c13d1c0(puVar4);
  _objc_release(puVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_9);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ade39c; end: 106ade5d3;  */

void FUN_106ade39c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == 0) || (param_4 != 0)) {
LAB_106ade440:
    if (*(ulong *)(param_1 + 0x58) < 4) {
      uVar2 = 0;
      _dispatch_time(0,(long)((double)*(ulong *)(param_1 + 0x58) * 1000000000.0));
      uVar3 = 0x11;
      _dispatch_get_global_queue(0x11,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_106ade5d4;
      puStack_98 = &UNK_11087d5a8;
      _objc_copyWeak(auStack_60,param_1 + 0x50);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      uStack_90 = uVar4;
      _objc_retain(uVar5);
      uStack_58 = *(undefined8 *)(param_1 + 0x58);
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      uStack_88 = uVar5;
      _objc_retain(uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x40);
      uStack_80 = uVar4;
      _objc_retain(uVar5);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uStack_78 = uVar5;
      _objc_retain(uVar6);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      uStack_70 = uVar6;
      _objc_retain(uVar4);
      uStack_68 = uVar4;
      func_0x00010058c530(uVar2,uVar3,&puStack_b0);
      _objc_release(uVar3);
      _objc_release(uStack_68);
      _objc_release(uStack_70);
      _objc_release(uStack_78);
      _objc_release(uStack_80);
      _objc_release(uStack_88);
      _objc_release(uStack_90);
      _objc_destroyWeak(auStack_60);
      goto LAB_106ade5a0;
    }
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bee5680();
  }
  else {
    lVar1 = param_3;
    func_0x00010c252ee0();
    if (99 < lVar1 - 200U) goto LAB_106ade440;
    lVar1 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x28));
    func_0x00010c08fa60(param_2);
    func_0x00010be0b9c0(lVar1);
  }
  _objc_release(lVar1);
LAB_106ade5a0:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106ade5d4; end: 106ade623;  */

void FUN_106ade5d4(long param_1)

{
  param_1 = param_1 + 0x50;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee5880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ade624; end: 106ade653; +[SCBlizzardUploadManager setConnectivityStateProvider:] */

void FUN_106ade624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = uRam00000001136c4b28;
  uRam00000001136c4b28 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ade654; end: 106ade71b; -[SCBlizzardUploadManager _maybeUploadFromTimerTrigger] */

void FUN_106ade654(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0b3ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010befa3a0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106ade71c; end: 106ade753;  */

void FUN_106ade71c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c3be0(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ade754; end: 106ade843; -[SCBlizzardUploadManager maybeUploadWithTrigger:] */

void FUN_106ade754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar3 = 0;
  do {
    uVar1 = param_1;
    func_0x00010bf00c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf99cc0();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bdda1a0(param_1,param_2,lVar3,uVar2,param_3);
    if ((int)uVar1 != 0) {
      func_0x00010be9b960(param_1,param_2,lVar3,1,param_3,0,0);
      func_0x00010be9b960(param_1,param_2,lVar3,1,param_3,1,0);
      break;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ade844; end: 106ade90b; -[SCBlizzardUploadManager maybeUploadFromBGWakeUp] */

void FUN_106ade844(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0b3ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010befa3a0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106ade90c; end: 106ade943;  */

void FUN_106ade90c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c3be0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ade944; end: 106adeb77; -[SCBlizzardUploadManager prepareRequestHeadersWithIsFrame:] */

void FUN_106ade944(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c220220();
  lVar5 = param_1;
  func_0x00010bf463a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar1);
  _objc_release(lVar5);
  lVar5 = param_1;
  func_0x00010c2438c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  if (lVar2 != 0) {
    lVar5 = param_1;
    func_0x00010c2438c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar2;
    func_0x00010c243800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar5 != 0) {
      FUN_106ac8028(*(undefined8 *)(param_1 + 0x68),1);
      func_0x00010c220220(puVar1);
      goto LAB_106adea88;
    }
  }
  FUN_106ac80c4(*(undefined8 *)(param_1 + 0x68),1);
  lVar5 = 0;
LAB_106adea88:
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = param_1;
  func_0x00010c26f600(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar1);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(lVar5);
  _objc_release(puVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106adeb78; end: 106adef43; -[SCBlizzardUploadManager _serializeToLoggedEventListFromFiles:] */

/* WARNING: Removing unreachable block (ram,0x000106aded14) */

void FUN_106adeb78(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined ***pppuVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126d0500;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_3);
  ppuVar7 = param_3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (ppuVar7 != (undefined **)0x0) {
    ppuVar16 = (undefined **)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_3);
      }
      ppuVar17 = *(undefined ***)((long)ppuVar16 * 8);
      lVar8 = param_1;
      func_0x00010bf00c20();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bfa5da0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      puVar10 = PTR_PTR_1126d0430;
      func_0x00010c0f40e0(PTR_PTR_1126d0430);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      if (lVar9 == 0) {
        uVar15 = *(undefined8 *)(param_1 + 0x68);
        ppuVar11 = ppuVar17;
        func_0x00010c0ad4a0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = &PTR____CFConstantStringClassReference_110db8b78;
        if (ppuVar11 != (undefined **)0x0) {
          ppuVar1 = ppuVar11;
        }
        FUN_106ac4a74(uVar15,ppuVar1,&PTR____CFConstantStringClassReference_110e6e598,1);
        _objc_release(ppuVar11);
        lVar8 = param_1;
        func_0x00010bf00c20(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_f8 = ppuVar17;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12c620(lVar8);
        _objc_release(puVar12);
        _objc_release(lVar8);
      }
      else {
        func_0x00010befa120(puVar5);
        func_0x00010befa120(puVar6);
        func_0x00010bf99ca0();
      }
      _objc_release(puVar10);
      _objc_release(lVar9);
      _objc_release(0);
      ppuVar16 = (undefined **)((long)ppuVar16 + 1);
    } while (ppuVar7 != ppuVar16);
    ppuVar7 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  func_0x00010c197dc0(puVar4);
  ppuStack_128 = &PTR____CFConstantStringClassReference_110e6e4f8;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110e6e4d8;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110e6e518;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_110 = puVar4;
  puStack_108 = puVar6;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &puStack_110;
  pppuVar13 = &ppuStack_128;
  puVar14 = (undefined *)0x3;
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_100 = puVar10;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar7);
  _objc_retain(pppuVar13);
  _objc_retain(puVar14);
  _objc_retain(param_6);
  _objc_retain(ppuVar7);
  iVar3 = (int)param_3[0xf];
  func_0x00010c083e80();
  ppuVar16 = ppuVar7;
  if (iVar3 != 0) {
    ppuVar16 = param_3;
    func_0x00010be23f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    if (ppuVar16 == (undefined **)0x0) {
      _objc_retain(ppuVar7);
      ppuVar16 = ppuVar7;
    }
    else {
      puVar4 = puVar14;
      func_0x00010c0d3c80(puVar14);
      func_0x00010c1d0560();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(puVar4);
      puVar14 = puVar5;
    }
  }
  ppuVar17 = param_3;
  func_0x00010beb70c0();
  if ((int)ppuVar17 == 0) {
    ppuVar17 = param_3;
    func_0x00010beb7200();
    if ((int)ppuVar17 == 0) {
      func_0x00010bee5680(param_3);
    }
    else {
      func_0x00010bee56a0(param_3);
    }
  }
  else {
    func_0x00010bee5660(param_3);
  }
  _objc_release(ppuVar16);
  _objc_release(param_6);
  _objc_release(puVar14);
  _objc_release(pppuVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 106adef44; end: 106adf0d3; -[SCBlizzardUploadManager _uploadBlizzardRequest:uploadRequestInfo:headers:onComplete:] */

void FUN_106adef44(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x78);
  func_0x00010c083e80();
  lVar2 = param_3;
  if (iVar1 != 0) {
    lVar2 = param_1;
    func_0x00010be23f00(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    if (lVar2 == 0) {
      _objc_retain(param_3);
      lVar2 = param_3;
    }
    else {
      puVar3 = param_5;
      func_0x00010c0d3c80(param_5);
      func_0x00010c1d0560();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72020(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_5);
      _objc_release(puVar3);
      param_5 = puVar4;
    }
  }
  lVar5 = param_1;
  func_0x00010beb70c0(param_1,param_2,param_4);
  if ((int)lVar5 == 0) {
    lVar5 = param_1;
    func_0x00010beb7200(param_1,param_2,param_4);
    if ((int)lVar5 == 0) {
      func_0x00010bee5680(param_1,param_2,lVar2,param_4,param_5,param_6);
    }
    else {
      func_0x00010bee56a0(param_1,param_2,lVar2,param_4,param_5,param_6);
    }
  }
  else {
    func_0x00010bee5660(param_1,param_2,lVar2,param_4,param_5);
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106adf0d4; end: 106adf403; -[SCBlizzardUploadManager _uploadBlizzardRequestViaNativeStack:uploadRequestInfo:headers:onComplete:] */

void FUN_106adf0d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar8 = param_6;
  _objc_retain(param_6);
  if (lRam00000001136c4b20 == 0) {
    FUN_106ac573c(*(undefined8 *)(param_1 + 0x68),1);
  }
  else {
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e6e498;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    lVar2 = lRam00000001136c4b20;
    func_0x00010bfe4d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_4;
    func_0x00010c28ea80(param_4);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106adf404;
    puStack_88 = &UNK_110884ec8;
    lVar4 = lVar3;
    lStack_80 = param_1;
    func_0x00010bf225e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_initWeak(auStack_a8,param_1);
    lVar2 = lRam00000001136c4b20;
    func_0x00010bfe4c00(lRam00000001136c4b20);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b7220;
    func_0x00010c135080(PTR_PTR_1126b7220);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2af9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0x11;
    _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_b0,auStack_a8);
    _objc_retain(param_4);
    _objc_retain(param_6);
    func_0x00010c25f600(lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_b0);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_a8);
    _objc_release(lVar4);
    _objc_release(ppuVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106adf404; end: 106adf44f;  */

void FUN_106adf404(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  func_0x00010c1af260(param_2);
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x78);
  func_0x00010c083e80();
  if ((uVar1 & 1) == 0) {
    func_0x00010c290220(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106adf450; end: 106adf50f;  */

void FUN_106adf450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c08fa60(uVar3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = param_5;
  func_0x00010c08fa60(param_5);
  _objc_release(param_5);
  func_0x00010be0b9c0(lVar1,param_2,uVar4,uVar3,param_4,uVar2,param_6,
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106adf510; end: 106adf5d7; -[SCBlizzardUploadManager _maybeUploadSpectrumFromTimerTrigger] */

void FUN_106adf510(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0b3ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010befa3a0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106adf5d8; end: 106adf60f;  */

void FUN_106adf5d8(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c3bc0(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106adf610; end: 106adf71f; -[SCBlizzardUploadManager maybeUploadSpectrumWithTrigger:] */

void FUN_106adf610(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar5 = 0;
  bVar7 = false;
  do {
    bVar8 = false;
    lVar6 = 1;
    do {
      uVar2 = param_1;
      func_0x00010bf00c20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf99cc0();
      _objc_release(uVar2);
      uVar2 = param_1;
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c249ac0();
      _objc_release(uVar2);
      if (uVar4 <= uVar3) {
        bVar8 = true;
        func_0x00010be9b960(param_1,param_2,uVar5,lVar6,param_3,0,1);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 4);
    uVar5 = 1;
    bVar1 = !bVar7;
    bVar7 = true;
  } while (bVar1 && !bVar8);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106adf720; end: 106adf7e7; -[SCBlizzardUploadManager maybeUploadSpectrumFromBGWakeUp] */

void FUN_106adf720(undefined8 param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c0b3ce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010befa3a0(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106adf7e8; end: 106adf81f;  */

void FUN_106adf7e8(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c3bc0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106adf820; end: 106adf8f3; -[SCBlizzardUploadManager uploadEventsEagerlyWithEventsData:eventCount:priority:region:seqItemsCount:isSpectrum:onComplete:] */

void FUN_106adf820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,byte param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_9);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf00c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c276500();
  func_0x00010bdf2840(param_1,param_2,param_3,param_5,param_6,uVar2,param_4,param_7,0,4,param_8 ^ 1)
  ;
  _objc_release(param_9);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106adf8f4; end: 106adfa47; -[SCBlizzardUploadManager prepareSpectrumRequestHeadersWithRegion:] */

void FUN_106adf8f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_1;
  func_0x00010c26f600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110db3bb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110e6e5d8);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (param_3 == 2) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110e6d278;
  }
  else {
    if (param_3 != 3) goto LAB_106adf9f0;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e6d298;
  }
  func_0x00010c220220(puVar1,param_2,ppuVar5,&PTR____CFConstantStringClassReference_110dadcb8);
LAB_106adf9f0:
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106adfa48; end: 106adfe5f; -[SCBlizzardUploadManager _serializeToSpectrumSequentialItemListFromFiles:] */

void FUN_106adfa48(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  long unaff_x27;
  long unaff_x28;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  long lStack_240;
  long lStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar21 = PTR_PTR_1126d04d8;
  _objc_opt_new();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_1b8 = puVar21;
  _objc_opt_new();
  puVar21 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  puStack_1c0 = puVar21;
  _objc_retain(param_3);
  lStack_1b0 = param_3;
  func_0x00010bf52a60();
  puVar21 = (undefined *)0x0;
  if (param_3 == 0) {
    lStack_1a0 = 0;
  }
  else {
    lStack_198 = *plStack_170;
    lStack_1a0 = 0;
    puStack_1c8 = puVar1;
    lStack_190 = param_3;
    do {
      lVar20 = 0;
      do {
        if (*plStack_170 != lStack_198) {
          _objc_enumerationMutation(lStack_1b0);
        }
        lVar19 = *(long *)(lStack_178 + lVar20 * 8);
        lVar2 = param_1;
        func_0x00010bf00c20();
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = lVar2;
        func_0x00010bfa5da0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        lStack_188 = 0;
        puVar3 = PTR_PTR_1126d04d8;
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x27 = lStack_188;
        _objc_retain(lStack_188);
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((unaff_x27 == 0) && (puVar3 != (undefined *)0x0)) {
          puVar5 = puVar3;
          func_0x00010c249c20(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar1);
          _objc_release(puVar5);
          func_0x00010c207c00(puStack_1b8);
          func_0x00010befa120(puStack_1c0);
          lVar2 = lVar19;
          func_0x00010bf99ca0();
          if (lVar2 == 0) {
            FUN_106ac8788(*(undefined8 *)(param_1 + 0x68),
                          &PTR____CFConstantStringClassReference_110e6e5f8,1);
          }
          else {
            func_0x00010bf99ca0();
            lStack_1a0 = lVar19 + lStack_1a0;
            puVar5 = puVar1;
            func_0x00010bf529e0();
            puVar21 = puVar5 + (long)puVar21;
          }
        }
        else {
          uVar18 = *(undefined8 *)(param_1 + 0x68);
          if (unaff_x28 == 0) {
            FUN_106ac8788(uVar18,&PTR____CFConstantStringClassReference_110e6e598,1);
          }
          else {
            lVar2 = unaff_x27;
            func_0x00010bf87dc0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = unaff_x27;
            puStack_1a8 = puVar21;
            func_0x00010bf3ec40();
            lStack_1e0 = lVar2;
            lStack_1d8 = lVar4;
            func_0x00010c14de00(puVar5);
            _objc_retainAutoreleasedReturnValue();
            FUN_106ac8788(uVar18,puVar5,1);
            puVar1 = puStack_1c8;
            _objc_release(puVar5);
            puVar21 = puStack_1a8;
            _objc_release(lVar2);
          }
          lVar2 = param_1;
          func_0x00010bf00c20(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
          lStack_f8 = lVar19;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12c620(lVar2);
          _objc_release(puVar5);
          _objc_release(lVar2);
        }
        _objc_release(puVar3);
        _objc_release(unaff_x28);
        _objc_release(unaff_x27);
        lVar20 = lVar20 + 1;
      } while (lStack_190 != lVar20);
      lVar20 = lStack_1b0;
      func_0x00010bf52a60();
      lStack_190 = lVar20;
    } while (lVar20 != 0);
  }
  lVar20 = lStack_1b0;
  lStack_190 = 0;
  _objc_release(lStack_1b0);
  puVar3 = puStack_1b8;
  puVar5 = puStack_1c0;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110e6e4b8;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110e6e4d8;
  puStack_118 = puStack_1b8;
  puStack_110 = puStack_1c0;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110e6e518;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_120 = &PTR____CFConstantStringClassReference_110e6e538;
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_108 = puVar6;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar16 = &puStack_118;
  pppuVar17 = &ppuStack_138;
  uVar18 = 4;
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_100 = puVar7;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar1);
  _objc_release(puVar3);
  lVar2 = lVar20;
  _objc_release(lVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puStack_228 = puVar5;
    puStack_218 = puVar3;
    lStack_208 = lVar20;
    pcStack_1e8 = FUN_106adfe60;
    lStack_240 = unaff_x28;
    lStack_238 = unaff_x27;
    puStack_230 = puVar21;
    puStack_220 = puVar1;
    puStack_210 = puVar7;
    puStack_200 = puVar6;
    puStack_1f8 = puVar8;
    puStack_1f0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar16);
    _objc_retain(pppuVar17);
    _objc_retain(uVar18);
    _objc_retain(param_6);
    if (lRam00000001136c4b30 == 0) {
      uVar9 = uRam00000001136c4b20;
      func_0x00010bfe4d40();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uRam00000001136c4b20;
      func_0x00010bfe4c00();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = &PTR____CFConstantStringClassReference_110e6e498;
      func_0x00010c25ce40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      uVar11 = uVar9;
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      pppuVar13 = pppuVar17;
      func_0x00010c28ea80(pppuVar17);
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar11;
      func_0x00010bf225e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppuVar13);
      _objc_release(uVar11);
      _objc_initWeak(auStack_248,lVar2);
      uVar11 = uVar10;
      func_0x00010c269d40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR_PTR_1126b7220;
      func_0x00010c135080(PTR_PTR_1126b7220);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar21;
      func_0x00010c2af9a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = 0x11;
      _dispatch_get_global_queue(0x11,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(ppuVar16);
      _objc_copyWeak(auStack_250,auStack_248);
      _objc_retain(pppuVar17);
      _objc_retain(param_6);
      func_0x00010c25f600(uVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar15);
      _objc_release(puVar5);
      _objc_release(puVar1);
      _objc_release(puVar21);
      _objc_release(uVar11);
      _objc_release(param_6);
      _objc_release(pppuVar17);
      _objc_destroyWeak(auStack_250);
      _objc_release(ppuVar16);
      _objc_destroyWeak(auStack_248);
      _objc_release(uVar14);
      _objc_release(ppuVar12);
      _objc_release(uVar10);
      _objc_release(uVar9);
    }
    else {
      func_0x00010bee5dc0(lVar2);
    }
    _objc_release(param_6);
    _objc_release(uVar18);
    _objc_release(pppuVar17);
    _objc_release(ppuVar16);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 106adfe60; end: 106ae0177; -[SCBlizzardUploadManager _uploadSpectrumRequest:uploadRequestInfo:headers:onComplete:] */

void FUN_106adfe60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (lRam00000001136c4b30 == 0) {
    uVar1 = uRam00000001136c4b20;
    func_0x00010bfe4d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uRam00000001136c4b20;
    func_0x00010bfe4c00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e6e498;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_4;
    func_0x00010c28ea80(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf225e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_initWeak(auStack_68,param_1);
    uVar3 = uVar2;
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b7220;
    func_0x00010c135080(PTR_PTR_1126b7220);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2af9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0x11;
    _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_6);
    func_0x00010c25f600(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar3);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
    _objc_release(uVar5);
    _objc_release(ppuVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    func_0x00010bee5dc0(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ae0178; end: 106ae01b7;  */

void FUN_106ae0178(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c1af260(param_2);
  func_0x00010c290220(param_2);
  func_0x00010c2907c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ae01b8; end: 106ae0277;  */

void FUN_106ae01b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c08fa60(uVar3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = param_5;
  func_0x00010c08fa60(param_5);
  _objc_release(param_5);
  func_0x00010be0b9c0(lVar1,param_2,uVar4,uVar3,param_4,uVar2,param_6,
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ae0278; end: 106ae055f; -[SCBlizzardUploadManager _uploadSpectrumAuthenticatedRequest:uploadRequestInfo:headers:onComplete:] */

void FUN_106ae0278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain(param_6);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e6e498;
  func_0x00010c25ce40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uRam00000001136c4b30;
  func_0x00010bfe4d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010c28ea80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf225e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = uRam00000001136c4b30;
  func_0x00010bfe4c00(uRam00000001136c4b30);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = 0x11;
  _dispatch_get_global_queue(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c25f600(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar4);
  _objc_release(ppuVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106ae0560; end: 106ae05b3;  */

void FUN_106ae0560(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c1af260(param_2);
  func_0x00010c290220(param_2);
  func_0x00010c290a40(param_2);
  func_0x00010c2907c0(param_2);
  func_0x00010c28fde0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106ae05b4; end: 106ae0673;  */

void FUN_106ae05b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c08fa60(uVar3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = param_5;
  func_0x00010c08fa60(param_5);
  _objc_release(param_5);
  func_0x00010be0b9c0(lVar1,param_2,uVar4,uVar3,param_4,uVar2,param_6,
                      *(undefined8 *)(param_1 + 0x30));
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ae0674; end: 106ae075b; -[SCBlizzardUploadManager _canUploadFilesForPriority:eventCount:trigger:] */

uint FUN_106ae0674(ulong param_1,undefined8 param_2,long param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    uVar4 = (uint)(param_4 != 0);
  }
  else {
    uVar1 = param_1;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf9a480();
    _objc_release(uVar1);
    if (param_3 == 1) {
      uVar4 = (uint)(uVar2 <= param_4);
    }
    else {
      if (uVar2 <= param_4) {
        uVar3 = uRam00000001136c4b28;
        func_0x00010c06f0c0();
        if ((int)uVar3 != 0) {
          if (param_5 != 0) {
            func_0x00010bf062a0();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = param_1;
            func_0x00010c06c3c0();
            if ((uVar1 & 1) != 0) {
              uVar3 = uRam00000001136c4b28;
              func_0x00010c06f160(uRam00000001136c4b28);
              uVar4 = (uint)uVar3;
              _objc_release(param_1);
              goto LAB_106ae0734;
            }
            _objc_release(param_1);
          }
          uVar4 = 1;
          goto LAB_106ae0734;
        }
      }
      uVar4 = 0;
    }
  }
LAB_106ae0734:
  return uVar4 & 1;
}



/* Entry: 106ae075c; end: 106ae08a7; -[SCBlizzardUploadManager _scheduleUploadForPriority:region:trigger:isFrame:isSpectrum:] */

void FUN_106ae075c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [8];
  
  uVar1 = param_1;
  func_0x00010bf9c520();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1d140();
  if ((int)uVar2 == 0) {
    _objc_release(uVar1);
  }
  else {
    uVar2 = param_1;
    func_0x00010bef0840();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      _objc_initWeak(auStack_58,param_1);
      _objc_copyWeak(auStack_80,auStack_58);
      uStack_60 = (undefined1)param_6;
      uStack_5f = (undefined1)param_7;
      uStack_78 = param_3;
      uStack_70 = param_4;
      uStack_68 = param_5;
      func_0x00010be0f180(param_1);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_58);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010be057f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__doScheduleUploadForPriority_reg_11255ef98,param_3,param_4,param_5,
             param_6,param_7);
  return;
}



/* Entry: 106ae08a8; end: 106ae08e7;  */

void FUN_106ae08a8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be057e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106ae08e8; end: 106ae0ddf; -[SCBlizzardUploadManager _doScheduleUploadForPriority:region:trigger:isFrame:isSpectrum:] */

void FUN_106ae08e8(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8,
                  undefined *param_9)

{
  undefined *puVar1;
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
  long lVar12;
  long lVar13;
  double dVar14;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 uStack_170;
  byte bStack_16f;
  undefined8 uStack_168;
  undefined *puStack_140;
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
  puVar2 = param_4;
  puVar9 = param_5;
  puVar3 = param_6;
  puVar10 = param_7;
  puVar11 = param_8;
  _objc_retain();
  _objc_sync_enter(param_2);
  puStack_140 = (undefined *)0x0;
  do {
    puVar1 = param_2;
    func_0x00010c0c1ee0();
    if (puVar1 <= puStack_140) {
LAB_106ae0d4c:
      _objc_sync_exit(param_2);
      puVar1 = param_2;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return;
      }
      ___stack_chk_fail();
      _objc_sync_exit(param_2);
      __Unwind_Resume();
      _objc_retain(puVar2);
      _objc_retain(puStack_180);
      _objc_retain(uStack_168);
      if ((puVar2 != (undefined *)0x0) &&
         (puVar4 = puVar2, func_0x00010c08fa60(), puVar4 != (undefined *)0x0)) {
        puVar4 = puVar1;
        func_0x00010c26f600();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf5e5e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puVar4 = puVar1;
        func_0x00010c26f600(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5e680();
        dVar14 = param_1;
        _objc_release(puVar4);
        puVar4 = puVar1;
        func_0x00010c08a860();
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 == (undefined *)0x0) {
          dVar14 = 0.0;
        }
        else {
          puVar6 = puVar1;
          func_0x00010c08a860(puVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          dVar14 = param_1 - dVar14;
          _objc_release(puVar6);
        }
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1b8e40(puVar1,param_3,puVar4);
        _objc_release(puVar4);
        puVar4 = puVar1;
        func_0x00010bf45e20();
        _objc_retainAutoreleasedReturnValue();
        puStack_220 = puVar4;
        puVar6 = puVar1;
        if ((bStack_16f & 1) == 0) {
          func_0x00010c11df80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          func_0x00010c28f8a0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          func_0x00010bf062a0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar4;
          func_0x00010c06c3c0();
          puStack_228 = puVar6;
          func_0x00010bf40c00(puVar6,param_3,puStack_220,puVar7,puVar10,puVar11,puVar9);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
        }
        else {
          func_0x00010c11dfa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          func_0x00010c28f8a0();
          _objc_retainAutoreleasedReturnValue();
          puStack_228 = puVar6;
          func_0x00010bf40be0();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar6);
        puVar4 = PTR_PTR_1126d04e8;
        _objc_alloc(PTR_PTR_1126d04e8);
        puVar6 = puVar1;
        func_0x00010bf062a0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c06c3c0();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c027140(dVar14,puVar4,param_3,puStack_220,puVar10,puVar11,param_9,puStack_228,
                            puVar7,puVar5,puStack_178,puStack_180,puVar8,puVar9,uStack_170);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar6);
        puVar11 = puVar1;
        if (bStack_16f == 0) {
          func_0x00010c109e80(puVar1,param_3,uStack_170);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bee5640(puVar1,param_3,puVar2,puVar4,puVar11,uStack_168);
        }
        else {
          func_0x00010c109fa0(puVar1,param_3,puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bee5de0(puVar1,param_3,puVar2,puVar4,puVar11,uStack_168);
        }
        _objc_release(puVar11);
        _objc_release(puVar4);
        _objc_release(puStack_228);
        _objc_release(puStack_220);
        _objc_release(puVar5);
      }
      _objc_release(uStack_168);
      _objc_release(puStack_180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = param_2;
    if ((int)param_8 == 0) {
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar11;
      func_0x00010c28da00();
    }
    else {
      func_0x00010bf45e20();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar11;
      func_0x00010c249a20();
    }
    _objc_release(puVar11);
    puVar1 = param_2;
    func_0x00010bf00c20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = (undefined *)((ulong)param_7 & 0xffffffff);
    puVar11 = (undefined *)((ulong)param_8 & 0xffffffff);
    puVar4 = puVar1;
    puVar9 = param_5;
    func_0x00010bfc24a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_2;
    puVar2 = puVar4;
    func_0x00010be16240();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0d3c80();
    _objc_release(puVar4);
    _objc_release(puVar1);
    puVar1 = puVar5;
    func_0x00010bf529e0();
    if (puVar1 == (undefined *)0x0) {
      _objc_release(puVar5);
      goto LAB_106ae0d4c;
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_alloc_init();
    puVar3 = param_2;
    if ((int)param_7 == 0) {
      if ((int)param_8 != 0) {
        func_0x00010bea14a0(param_2,param_3,puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar3;
        func_0x00010c0dff20();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar3;
        func_0x00010c0dff20(puVar3,param_3,&PTR____CFConstantStringClassReference_110e6e518);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar2;
        func_0x00010c2827c0();
        _objc_release(puVar2);
        puVar2 = puVar3;
        func_0x00010c0dff20(puVar3,param_3,&PTR____CFConstantStringClassReference_110e6e538);
        _objc_retainAutoreleasedReturnValue();
        param_9 = puVar2;
        func_0x00010c2827c0();
        _objc_release(puVar2);
        puVar2 = puVar3;
        func_0x00010c0dff20(puVar3,param_3,&PTR____CFConstantStringClassReference_110e6e4d8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        puVar9 = puVar10;
        func_0x00010bf63640(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0(puVar1,param_3,puVar9);
        puVar5 = puVar2;
        goto LAB_106ae0bcc;
      }
      param_1 = 0.0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(puVar5);
      puVar3 = puVar5;
      func_0x00010bf52a60(puVar5,param_3,&uStack_130,auStack_f0,0x10);
      puVar11 = (undefined *)0x0;
      if (puVar3 != (undefined *)0x0) {
        lVar13 = *plStack_120;
        do {
          puVar10 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar13) {
              _objc_enumerationMutation(puVar5);
            }
            lVar12 = *(long *)(lStack_128 + (long)puVar10 * 8);
            puVar2 = param_2;
            func_0x00010bf00c20();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar2;
            func_0x00010bfa5da0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf06ae0(puVar1,param_3,puVar9);
            _objc_release(puVar9);
            _objc_release(puVar2);
            func_0x00010bf99ca0();
            puVar11 = puVar11 + lVar12;
            puVar10 = puVar10 + 1;
          } while (puVar3 != puVar10);
          puVar3 = puVar5;
          func_0x00010bf52a60(puVar5,param_3,&uStack_130,auStack_f0,0x10);
        } while (puVar3 != (undefined *)0x0);
      }
      param_9 = (undefined *)0x0;
      puVar3 = puVar5;
    }
    else {
      func_0x00010bea1480(param_2,param_3,puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar3;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010c0dff20(puVar3,param_3,&PTR____CFConstantStringClassReference_110e6e518);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar2;
      func_0x00010c2827c0();
      _objc_release(puVar2);
      puVar2 = puVar3;
      func_0x00010c0dff20(puVar3,param_3,&PTR____CFConstantStringClassReference_110e6e4d8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar9 = puVar10;
      func_0x00010bf63640(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ae0(puVar1,param_3,puVar9);
      param_9 = (undefined *)0x0;
      puVar5 = puVar2;
LAB_106ae0bcc:
      _objc_release(puVar9);
      _objc_release(puVar10);
    }
    _objc_release(puVar3);
    puVar4 = param_2;
    func_0x00010bf00c20();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    func_0x00010c276500();
    uStack_168 = 0;
    bStack_16f = (byte)param_8;
    uStack_170 = SUB81(param_7,0);
    puVar2 = puVar1;
    puVar9 = param_4;
    puVar3 = param_5;
    func_0x00010bdf2840(param_2);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar5);
    puStack_140 = puStack_140 + 1;
    puStack_180 = puVar5;
    puStack_178 = param_6;
  } while( true );
}



/* Entry: 106ae0de0; end: 106ae11bf; -[SCBlizzardUploadManager _createRequestWithPayload:priority:region:numEventsOnDisk:numEventsToUpload:numSeqItemsToUpload:filesToUpload:trigger:isFrame:isSpectrum:onComplete:] */

void FUN_106ae0de0(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,uint param_12,undefined4 param_13,
                  undefined8 param_14)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  double dVar8;
  long lStack_a8;
  long lStack_a0;
  
  _objc_retain(param_4);
  _objc_retain(param_10);
  _objc_retain(param_14);
  if ((param_4 != 0) && (lVar1 = param_4, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = param_2;
    func_0x00010c26f600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5e5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c26f600(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5e680();
    dVar8 = param_1;
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c08a860();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      dVar8 = 0.0;
    }
    else {
      lVar3 = param_2;
      func_0x00010c08a860(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar8 = param_1 - dVar8;
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8e40(param_2,param_3,puVar4);
    _objc_release(puVar4);
    lVar1 = param_2;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_a0 = lVar1;
    lVar3 = param_2;
    if ((param_12 & 0x100) == 0) {
      func_0x00010c11df80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      func_0x00010c28f8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2;
      func_0x00010bf062a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c06c3c0();
      lStack_a8 = lVar3;
      func_0x00010bf40c00(lVar3,param_3,lStack_a0,lVar5,param_7,param_8,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    else {
      func_0x00010c11dfa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      func_0x00010c28f8a0();
      _objc_retainAutoreleasedReturnValue();
      lStack_a8 = lVar3;
      func_0x00010bf40be0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar3);
    puVar4 = PTR_PTR_1126d04e8;
    _objc_alloc(PTR_PTR_1126d04e8);
    lVar1 = param_2;
    func_0x00010bf062a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c06c3c0();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c027140(dVar8,puVar4,param_3,lStack_a0,param_7,param_8,param_9,lStack_a8,lVar3,lVar2
                        ,param_11,param_10,puVar6,puVar7,(undefined1)param_12);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(lVar1);
    lVar1 = param_2;
    if (param_12._1_1_ == '\0') {
      func_0x00010c109e80(param_2,param_3,(undefined1)param_12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee5640(param_2,param_3,param_4,puVar4,lVar1,param_14);
    }
    else {
      func_0x00010c109fa0(param_2,param_3,param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee5de0(param_2,param_3,param_4,puVar4,lVar1,param_14);
    }
    _objc_release(lVar1);
    _objc_release(puVar4);
    _objc_release(lStack_a8);
    _objc_release(lStack_a0);
    _objc_release(lVar2);
  }
  _objc_release(param_14);
  _objc_release(param_10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106ae11c0; end: 106ae1443; -[SCBlizzardUploadManager _executeCompletionBlockWithRequestInfo:payloadSize:response:responseSizeInBytes:error:onComplete:] */

void FUN_106ae11c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,long param_9)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar2 = param_2;
  func_0x00010c26f600(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c1351a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  bVar1 = false;
  if ((param_6 != 0) && (param_8 == 0)) {
    lVar5 = param_6;
    func_0x00010c252ee0(param_6);
    bVar1 = lVar5 - 200U < 100;
  }
  if (param_9 != 0) {
    (**(code **)(param_9 + 0x10))(param_9,bVar1);
  }
  puVar6 = PTR_PTR_1126d0508;
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010c0ad4a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c252ee0(param_6);
  func_0x00010c0df780(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c027160(param_1);
  _objc_release(puVar7);
  _objc_release(uVar2);
  _objc_initWeak(auStack_78,param_2);
  func_0x00010c0b3ce0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_4);
  _objc_retain(puVar6);
  func_0x00010befa3a0(param_2);
  _objc_release(param_2);
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar6);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 106ae1444; end: 106ae148b;  */

void FUN_106ae1444(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdfcea0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
    func_0x00010c0b2700(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106ae148c; end: 106ae1a9b; -[SCBlizzardUploadManager logUploadGrapheneMetricsWithRequestWithInfo:responseInfo:] */

void FUN_106ae148c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = param_4;
  func_0x00010c073620();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if ((int)uVar4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  _objc_retain(ppuVar1);
  uVar4 = param_4;
  func_0x00010c07f1c0();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db8118;
  if ((int)uVar4 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db8138;
  }
  _objc_retain(ppuVar2);
  uVar4 = param_4;
  func_0x00010c113c80(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126d0348;
  func_0x00010bdc0e00(PTR_PTR_1126d0348);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c125a80(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0dff20(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar6);
  uVar9 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = param_5;
  func_0x00010c0ad4a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010bfad440(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010bf529e0();
  FUN_106ac8e48(uVar9,ppuVar1,ppuVar2,uVar4,uVar5,puVar7,uVar8);
  _objc_release(uVar10);
  _objc_release(uVar4);
  uVar9 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = param_5;
  func_0x00010c0ad4a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010bfad440(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar10;
  func_0x00010bf529e0();
  FUN_106ac921c(uVar9,ppuVar1,ppuVar2,uVar4,uVar5,puVar7,uVar8);
  _objc_release(uVar10);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010c0823c0();
  if ((int)uVar4 != 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x68);
    uVar4 = param_5;
    func_0x00010c0ad4a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_4;
    func_0x00010bfad440(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x00010bf529e0();
    FUN_106ac95ec(uVar9,ppuVar1,ppuVar2,uVar4,uVar5,puVar7,uVar8);
    _objc_release(uVar10);
    _objc_release(uVar4);
  }
  uVar10 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = param_5;
  func_0x00010c0ad4a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135b00(param_5);
  FUN_106ac7678(uVar10,&PTR____CFConstantStringClassReference_110e6dab8,ppuVar1,ppuVar2,uVar4,uVar5,
                puVar7);
  _objc_release(uVar4);
  uVar10 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = param_4;
  func_0x00010c06cee0();
  ppuVar3 = &PTR____CFConstantStringClassReference_110db8118;
  if ((int)uVar4 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110db8138;
  }
  uVar4 = param_5;
  func_0x00010c0ad4a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_5;
  func_0x00010c252ee0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_106ac6a8c(uVar10,ppuVar3,&PTR____CFConstantStringClassReference_110e6dab8,uVar4,puVar7,uVar9,1
               );
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar4);
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = param_5;
  func_0x00010c252ee0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  FUN_106ac6e60(uVar8,ppuVar1,ppuVar2,uVar5,puVar7,uVar10,1);
  _objc_release(uVar10);
  _objc_release(uVar4);
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = param_5;
  func_0x00010c0ad4a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_5;
  func_0x00010c1366a0(param_5);
  FUN_106ac779c(uVar8,&PTR____CFConstantStringClassReference_110e6dab8,ppuVar1,ppuVar2,uVar4,uVar5,
                puVar7,uVar10);
  _objc_release(uVar4);
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = param_5;
  func_0x00010c0ad4a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_5;
  func_0x00010c1366a0(param_5);
  FUN_106ac7be4(uVar8,&PTR____CFConstantStringClassReference_110e6dab8,ppuVar1,ppuVar2,uVar4,uVar5,
                puVar7,uVar10);
  _objc_release(uVar4);
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = param_5;
  func_0x00010c0ad4a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_5;
  func_0x00010c13bc40(param_5);
  FUN_106ac813c(uVar8,uVar4,puVar7,uVar10);
  _objc_release(uVar4);
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = param_5;
  func_0x00010c0ad4a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010c0dde00(param_4);
  FUN_106ac3e58(uVar8,&PTR____CFConstantStringClassReference_110e6dab8,uVar4,puVar7,uVar10);
  _objc_release(uVar4);
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = param_5;
  func_0x00010c0ad4a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010c0ddde0(param_4);
  FUN_106ac35cc(uVar8,&PTR____CFConstantStringClassReference_110e6dab8,ppuVar1,ppuVar2,uVar4,uVar5,
                puVar7,uVar10);
  _objc_release(uVar4);
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  uVar4 = param_5;
  func_0x00010c0ad4a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010c0ddde0(param_4);
  FUN_106ac3a14(uVar8,&PTR____CFConstantStringClassReference_110e6dab8,ppuVar1,ppuVar2,uVar4,uVar5,
                puVar7,uVar10);
  _objc_release(uVar4);
  uVar4 = param_4;
  func_0x00010c07f1c0();
  if ((int)uVar4 != 0) {
    uVar10 = *(undefined8 *)(param_2 + 0x68);
    uVar4 = param_4;
    func_0x00010c0de600(param_4);
    FUN_106ac8578(uVar10,uVar4);
    uVar10 = *(undefined8 *)(param_2 + 0x68);
    uVar4 = param_4;
    func_0x00010c0de600(param_4);
    FUN_106ac8500(uVar10,uVar4);
  }
  func_0x00010c26f860(param_4);
  if (param_1 != 0.0) {
    uVar10 = *(undefined8 *)(param_2 + 0x68);
    uVar4 = param_5;
    func_0x00010c0ad4a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f860(param_4);
    FUN_106ac53e0(uVar10,&PTR____CFConstantStringClassReference_110e6dab8,uVar4,puVar7);
    _objc_release(uVar4);
  }
  _objc_release(puVar7);
  _objc_release(uVar5);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106ae1a9c; end: 106ae1bb3; -[SCBlizzardUploadManager _didCompleteRequestWithInfo:responseInfo:] */

void FUN_106ae1a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_3;
  func_0x00010bfad440(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c0823c0();
  uVar3 = param_1;
  if ((int)uVar2 == 0) {
    func_0x00010bf00c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb1920(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c125a80();
    func_0x00010bef8480(uVar3,param_2,uVar1,uVar4);
    _objc_release(uVar2);
  }
  else {
    func_0x00010bf00c20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c620();
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106ae1bb4; end: 106ae1c2b; -[SCBlizzardUploadManager _getZstdCompressedData:] */

void FUN_106ae1bb4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  func_0x00010bf456a0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar2 = lVar1, func_0x00010c08fa60(), lVar2 == 0)) {
    FUN_106aca9b4(*(undefined8 *)(param_1 + 0x68),1);
    lVar2 = 0;
  }
  else {
    FUN_106aca93c(*(undefined8 *)(param_1 + 0x68),1);
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 106ae1c2c; end: 106ae1c33; -[SCBlizzardUploadManager config] */

undefined8 FUN_106ae1c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106ae1c34; end: 106ae1c63; -[SCBlizzardUploadManager setConfig:] */

void FUN_106ae1c34(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ae1c64; end: 106ae1c6b; -[SCBlizzardUploadManager appStateProvider] */

undefined8 FUN_106ae1c64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106ae1c6c; end: 106ae1c9b; -[SCBlizzardUploadManager setAppStateProvider:] */

void FUN_106ae1c6c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106ae1c9c; end: 106ae1ca3; -[SCBlizzardUploadManager timeProvider] */

undefined8 FUN_106ae1c9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106ae1ca4; end: 106ae1cd3; -[SCBlizzardUploadManager setTimeProvider:] */

void FUN_106ae1ca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae1cd4; end: 106ae1cdb; -[SCBlizzardUploadManager loggingQueue] */

undefined8 FUN_106ae1cd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106ae1cdc; end: 106ae1d0b; -[SCBlizzardUploadManager setLoggingQueue:] */

void FUN_106ae1cdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae1d0c; end: 106ae1d13; -[SCBlizzardUploadManager urlProvider] */

undefined8 FUN_106ae1d0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106ae1d14; end: 106ae1d43; -[SCBlizzardUploadManager setUrlProvider:] */

void FUN_106ae1d14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae1d44; end: 106ae1d4b; -[SCBlizzardUploadManager configVersion] */

undefined8 FUN_106ae1d44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106ae1d4c; end: 106ae1d7b; -[SCBlizzardUploadManager setConfigVersion:] */

void FUN_106ae1d4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae1d7c; end: 106ae1d83; -[SCBlizzardUploadManager snapTokenProvider] */

undefined8 FUN_106ae1d7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106ae1d84; end: 106ae1d8b; -[SCBlizzardUploadManager uploadTimer] */

undefined8 FUN_106ae1d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106ae1d8c; end: 106ae1dbb; -[SCBlizzardUploadManager setUploadTimer:] */

void FUN_106ae1d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae1dbc; end: 106ae1dc3; -[SCBlizzardUploadManager maxConcurrentRequests] */

undefined8 FUN_106ae1dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106ae1dc4; end: 106ae1dcb; -[SCBlizzardUploadManager setMaxConcurrentRequests:] */

void FUN_106ae1dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 106ae1dcc; end: 106ae1dd3; -[SCBlizzardUploadManager lastUploadUptimeInSeconds] */

undefined8 FUN_106ae1dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106ae1dd4; end: 106ae1e03; -[SCBlizzardUploadManager setLastUploadUptimeInSeconds:] */

void FUN_106ae1dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae1e04; end: 106ae1e0b; -[SCBlizzardUploadManager isSpectrumUploader] */

undefined1 FUN_106ae1e04(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106ae1e0c; end: 106ae1e13; -[SCBlizzardUploadManager setIsSpectrumUploader:] */

void FUN_106ae1e0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106ae1e14; end: 106ae1e1b; -[SCBlizzardUploadManager allTiersFileQueue] */

undefined8 FUN_106ae1e14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106ae1e1c; end: 106ae1e4b; -[SCBlizzardUploadManager setAllTiersFileQueue:] */

void FUN_106ae1e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae1e4c; end: 106ae1e53; -[SCBlizzardUploadManager graphene] */

undefined8 FUN_106ae1e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106ae1e54; end: 106ae1e5b; -[SCBlizzardUploadManager experimentProvider] */

undefined8 FUN_106ae1e54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106ae1e5c; end: 106ae1e8b; -[SCBlizzardUploadManager setExperimentProvider:] */

void FUN_106ae1e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae1e8c; end: 106ae1e93; -[SCBlizzardUploadManager zstdCompressor] */

undefined8 FUN_106ae1e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106ae1e94; end: 106ae1ec3; -[SCBlizzardUploadManager setZstdCompressor:] */

void FUN_106ae1e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106ae1ec4; end: 106ae1ecb; -[SCBlizzardUploadManager backgroundUploadSession] */

undefined8 FUN_106ae1ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106ae1ecc; end: 106ae1efb; -[SCBlizzardUploadManager setBackgroundUploadSession:] */

void FUN_106ae1ecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


