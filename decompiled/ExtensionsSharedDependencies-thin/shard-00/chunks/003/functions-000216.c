/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004ad910; end: 004ada3b;  */

undefined8 FUN_004ad910(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  ulong *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long lStack_48;
  ulong *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_50 = 0;
  lStack_48 = 0;
  puStack_40 = (ulong *)0x0;
  uStack_54 = 6;
  uVar8 = 4;
  _thread_info(param_2,4,&uStack_50,&uStack_54);
  if ((int)param_2 == 0) {
    puVar4 = &uStack_50;
    uVar8 = 0x18;
    func_0x004abb1c();
    puVar2 = puStack_40;
    if ((int)puVar4 == 0) goto LAB_004ada0c;
    uVar8 = 8;
    puVar5 = puStack_40;
    func_0x004abb1c();
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (ulong *)0x0) || ((int)puVar5 == 0)) goto LAB_004ada0c;
    if (lStack_48 != 0) {
      uVar6 = *puVar2;
      puVar4 = (undefined8 *)0x0;
      if ((uVar6 == 0) || (_dispatch_queue_get_label(), puVar4 = (undefined8 *)0x0, uVar6 == 0))
      goto LAB_004ada0c;
      uVar7 = uVar6;
      _strlen();
      lVar9 = 0;
      iVar3 = (int)uVar7;
      while ((lVar9 <= iVar3 && (0xffffffa0 < *(byte *)(uVar6 + lVar9) - 0x7f))) {
        lVar9 = lVar9 + 1;
      }
      if (*(char *)(uVar6 + lVar9) == '\0') {
        iVar1 = param_4 + -1;
        if (iVar3 <= param_4 + -1) {
          iVar1 = iVar3;
        }
        _strncpy(param_3,uVar6,(long)iVar1);
        *(undefined1 *)(param_3 + iVar1) = 0;
        puVar4 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        uVar8 = uVar6;
        goto LAB_004ada0c;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_004ada0c:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  lVar9 = 0;
  do {
    lVar10 = lVar9;
    if (lVar10 == 400) {
      return 0;
    }
    lVar9 = lVar10 + 1;
  } while (uVar8 != *(uint *)((long)puVar4 + lVar10 * 4));
  return puVar4[lVar10 + 0x32];
}



/* Entry: 004ada3c; end: 004ada6b;  */

undefined8 FUN_004ada3c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    if (lVar2 == 400) {
      return 0;
    }
    lVar1 = lVar2 * 4;
    lVar2 = lVar2 + 1;
  } while (param_2 != *(uint *)(param_1 + lVar1));
  return *(undefined8 *)(param_1 + lVar2 * 8 + 0x188);
}



/* Entry: 004ada6c; end: 004adad3;  */

int * FUN_004ada6c(long param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar1 = (int *)(param_1 + 0x20);
  uVar3 = (ulong)*(uint *)(param_1 + 0x10);
  do {
    if (uVar3 == 0) {
      return (int *)0x0;
    }
    if (*piVar1 == 0x19) {
      piVar2 = piVar1 + 2;
      _strncmp(piVar2,param_2,0x10);
      if ((int)piVar2 == 0) {
        return piVar1;
      }
    }
    piVar1 = (int *)((long)piVar1 + (ulong)(uint)piVar1[1]);
    uVar3 = uVar3 - 1;
  } while( true );
}



/* Entry: 004adad4; end: 004adc97;  */

void FUN_004adad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x007856e0();
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___NSError_00ac2b00;
  func_0x004adca8();
  func_0x00782040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00782e40(puVar2,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 004adc98; end: 004adcbf;  */

undefined8 FUN_004adc98(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  return 0;
}



/* Entry: 004adcc0; end: 004ae0c7; +[KSCrashReportFilterAppleFmt initialize] */

void FUN_004adcc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init();
  uVar1 = puRam0000000000b618c8;
  puRam0000000000b618c8 = puVar2;
  func_0x004b1320(uVar1);
  puVar2 = puRam0000000000b618c8;
  puVar3 = PTR__OBJC_CLASS___NSLocale_00ac2990;
  func_0x00788500(PTR__OBJC_CLASS___NSLocale_00ac2990,param_2,
                  &PTR____CFConstantStringClassReference_00a27f20);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ec40(puVar2,param_2,puVar3);
  func_0x004b11dc();
  func_0x0078d8e0(puRam0000000000b618c8,param_2,&PTR____CFConstantStringClassReference_00a27f40);
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_00ac2f98;
  _objc_alloc_init();
  uVar1 = puRam0000000000b618d0;
  puRam0000000000b618d0 = puVar2;
  func_0x004b1320(uVar1);
  puVar2 = puRam0000000000b618d0;
  puVar3 = PTR__OBJC_CLASS___NSLocale_00ac2990;
  func_0x00788500(PTR__OBJC_CLASS___NSLocale_00ac2990,param_2,
                  &PTR____CFConstantStringClassReference_00a27f20);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ec40(puVar2,param_2,puVar3);
  func_0x004b11a4();
  func_0x0078d8e0(puRam0000000000b618d0,param_2,&PTR____CFConstantStringClassReference_00a27f60);
  puVar2 = puRam0000000000b618d0;
  puVar3 = PTR__OBJC_CLASS___NSTimeZone_00ac2f88;
  func_0x00792980(PTR__OBJC_CLASS___NSTimeZone_00ac2f88,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00790ae0(puVar2,param_2,puVar3);
  func_0x004b11a4();
  puVar2 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f1e0(PTR__OBJC_CLASS___NSArray_00ac2c28,param_2,
                  &PTR____CFConstantStringClassReference_00a274a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077f1e0(PTR__OBJC_CLASS___NSArray_00ac2c28,param_2,
                  &PTR____CFConstantStringClassReference_00a28120);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077f1e0(PTR__OBJC_CLASS___NSArray_00ac2c28,param_2,
                  &PTR____CFConstantStringClassReference_00a282a0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  _objc_alloc();
  func_0x00785e40();
  uVar1 = puRam0000000000b618d8;
  puRam0000000000b618d8 = puVar3;
  func_0x004b1320(uVar1);
  func_0x004b11dc();
  func_0x004b11a4();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 004ae0c8; end: 004ae0eb; +[KSCrashReportFilterAppleFmt filterWithReportStyle:] */

void FUN_004ae0c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_alloc();
  func_0x007865e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 004ae0ec; end: 004ae11b; +[KSCrashReportFilterAppleFmt constructPreambleWithTraceNum:objName:pc:] */

void FUN_004ae0ec(undefined8 param_1,undefined8 param_2)

{
  func_0x004b1288();
  func_0x007921a0(param_1,param_2,&PTR____CFConstantStringClassReference_00a28500);
  return;
}



/* Entry: 004ae11c; end: 004ae147; +[KSCrashReportFilterAppleFmt constructUnSymbolicatedFrameWithObjAddr:pc:] */

void FUN_004ae11c(undefined8 param_1,undefined8 param_2)

{
  func_0x004b1288();
  func_0x007921a0(param_1,param_2,&PTR____CFConstantStringClassReference_00a28520);
  return;
}



/* Entry: 004ae148; end: 004ae19f; -[KSCrashReportFilterAppleFmt initWithReportStyle:] */

undefined1 * FUN_004ae148(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3d98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0078fc00(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 004ae1a0; end: 004ae24b; -[KSCrashReportFilterAppleFmt majorVersion:] */

ulong FUN_004ae1a0(ulong param_1)

{
  ulong uVar1;
  
  func_0x00784980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x004b12e4();
  func_0x004b1300();
  if ((uVar1 & 1) != 0) {
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b11a4();
  }
  uVar1 = param_1;
  _objc_opt_respondsToSelector(param_1,PTR_s_intValue_00abc970);
  if ((uVar1 & 1) == 0) {
    param_1 = 0;
  }
  else {
    func_0x007871a0(param_1);
  }
  func_0x004b11a4();
  func_0x004b11ac();
  return param_1;
}



/* Entry: 004ae24c; end: 004ae3bb; -[KSCrashReportFilterAppleFmt filterReports:onCompletion:] */

/* WARNING: Removing unreachable block (ram,0x004ae2f0) */

undefined ** FUN_004ae24c(ulong param_1,undefined8 param_2,ulong param_3,undefined **param_4)

{
  undefined1 in_ZR;
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  ulong uVar7;
  
  func_0x004b1178();
  func_0x004b11d4();
  func_0x004b1280();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  uVar5 = param_3;
  func_0x00780e80();
  func_0x0077f1a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b1318();
  func_0x004b1350();
  uVar2 = param_3;
  func_0x004b11f4();
  while (uVar2 != 0) {
    uVar7 = 0;
    do {
      uVar6 = *(ulong *)(uVar7 * 8);
      uVar3 = param_1;
      uVar5 = uVar6;
      func_0x00788c80();
      if ((int)uVar3 == 3) {
        uVar3 = param_1;
        func_0x00792a60();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar6;
        if (uVar3 != 0) {
          func_0x0077e720(puVar1);
          uVar5 = uVar3;
        }
        func_0x004b11b4();
      }
      uVar7 = uVar7 + 1;
      in_ZR = uVar7 == uVar2;
    } while (uVar7 < uVar2);
    func_0x004b1350();
    uVar2 = param_3;
    func_0x004b11f4();
  }
  ppuVar4 = (undefined **)0x0;
  func_0x004b11ac();
  if (param_4 != (undefined **)0x0) {
    uVar5 = 1;
    (*(code *)param_4[2])(param_4,puVar1,1,0);
    ppuVar4 = param_4;
  }
  func_0x004b11c4();
  func_0x004b11a4();
  func_0x004b11ac();
  func_0x004b1110(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x004b11d4();
    uVar2 = uVar5;
    func_0x0078ae00();
    if (uVar2 == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_00a285a0;
    }
    else {
      uVar2 = uVar5;
      func_0x0078ae00();
      if (uVar2 == 0) {
        ppuVar4 = &PTR____CFConstantStringClassReference_00a285c0;
      }
      else {
        uVar2 = uVar5;
        func_0x007878e0();
        if ((uVar2 & 1) == 0) {
          func_0x007878e0();
          ppuVar4 = &PTR____CFConstantStringClassReference_00a28600;
          if ((int)uVar5 == 0) {
            ppuVar4 = &PTR____CFConstantStringClassReference_00a27180;
          }
        }
        else {
          ppuVar4 = &PTR____CFConstantStringClassReference_00a285e0;
        }
      }
    }
    func_0x004b11ac();
    return ppuVar4;
  }
  return ppuVar4;
}



/* Entry: 004ae3bc; end: 004ae46b; -[KSCrashReportFilterAppleFmt CPUType:] */

undefined ** FUN_004ae3bc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  func_0x004b11d4();
  uVar1 = param_3;
  func_0x0078ae00(param_3,param_2,&PTR____CFConstantStringClassReference_00a28580);
  if (uVar1 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_00a285a0;
  }
  else {
    uVar1 = param_3;
    func_0x0078ae00(param_3,param_2,&PTR____CFConstantStringClassReference_00a27420);
    if (uVar1 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_00a285c0;
    }
    else {
      uVar1 = param_3;
      func_0x007878e0(param_3,param_2,&PTR____CFConstantStringClassReference_00a28480);
      if ((uVar1 & 1) == 0) {
        func_0x007878e0(param_3,param_2,&PTR____CFConstantStringClassReference_00a27480);
        ppuVar2 = &PTR____CFConstantStringClassReference_00a28600;
        if ((int)param_3 == 0) {
          ppuVar2 = &PTR____CFConstantStringClassReference_00a27180;
        }
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_00a285e0;
      }
    }
  }
  func_0x004b11ac();
  return ppuVar2;
}



/* Entry: 004ae46c; end: 004ae52b; -[KSCrashReportFilterAppleFmt CPUArchForMajor:minor:] */

void FUN_004ae46c(undefined8 param_1,undefined8 param_2,int param_3)

{
  if ((((param_3 != 7) && (param_3 != 0x100000c)) && (param_3 != 0x1000007)) && (param_3 != 0xc)) {
    func_0x004b1288();
    func_0x007921a0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 004ae52c; end: 004ae883; -[KSCrashReportFilterAppleFmt backtraceString:reportStyle:mainExecutableName:] */

void FUN_004ae52c(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4,
                 undefined8 *param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  ulong uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  func_0x004b1124();
  puVar1 = param_5;
  _objc_retain();
  func_0x004b125c();
  func_0x00791e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar2 = param_3;
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a276c0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = &uStack_130;
  uStack_138 = uVar2;
  func_0x004b11f4();
  if (uStack_138 != 0) {
    iVar12 = 0;
    lVar9 = *plStack_120;
    do {
      uVar11 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(uVar2);
        }
        uVar10 = *(undefined8 *)(lStack_128 + uVar11 * 8);
        uVar3 = uVar10;
        func_0x00789ea0(uVar10,param_2,&PTR____CFConstantStringClassReference_00a28660);
        _objc_retainAutoreleasedReturnValue();
        func_0x00788b40();
        func_0x004b11dc();
        func_0x00789ea0(uVar10,param_2,&PTR____CFConstantStringClassReference_00a28680);
        _objc_retainAutoreleasedReturnValue();
        func_0x00788b40();
        func_0x004b11ec();
        uVar4 = uVar10;
        func_0x00789ea0(uVar10,param_2,&PTR____CFConstantStringClassReference_00a27720);
        _objc_retainAutoreleasedReturnValue();
        func_0x00788240();
        _objc_retainAutoreleasedReturnValue();
        func_0x004b11ec();
        func_0x00789ea0(uVar10,param_2,&PTR____CFConstantStringClassReference_00a286a0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00788b40();
        func_0x004b11e4();
        func_0x00789ea0(uVar10,param_2,&PTR____CFConstantStringClassReference_00a278c0);
        _objc_retainAutoreleasedReturnValue();
        if (param_5 == (undefined8 *)0x0) {
          iVar8 = 3;
        }
        else {
          uVar5 = uVar4;
          func_0x007878e0(uVar4,param_2,param_5);
          iVar8 = 0;
          if ((int)uVar5 == 0) {
            iVar8 = 3;
          }
        }
        if (param_4 != 1) {
          iVar8 = param_4;
        }
        uVar5 = param_1;
        _objc_opt_class();
        _objc_retainAutorelease(uVar4);
        func_0x0077bcc0();
        func_0x00780b60(uVar5,param_2,iVar12,uVar4,uVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class();
        func_0x00780b80();
        _objc_retainAutoreleasedReturnValue();
        if (iVar8 == 0) {
LAB_004ae7c8:
          func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a28740);
        }
        else {
          puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
          _objc_opt_class();
          func_0x004b1198();
          if (((ulong)puVar6 & 1) == 0) goto LAB_004ae7c8;
          func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                          &PTR____CFConstantStringClassReference_00a286e0);
          _objc_retainAutoreleasedReturnValue();
          if (iVar8 == 1) goto LAB_004ae7c8;
          if (iVar8 == 2) {
            func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a28720);
          }
          else if (iVar8 == 3) {
            func_0x007878e0(uVar10,param_2,&PTR____CFConstantStringClassReference_00a28700);
            goto LAB_004ae7c8;
          }
        }
        iVar12 = iVar12 + 1;
        func_0x004b11b4();
        func_0x004b11dc();
        func_0x004b11e4();
        func_0x004b11ac();
        func_0x004b121c();
        uVar11 = uVar11 + 1;
        in_ZR = uVar11 == uStack_138;
      } while (uVar11 < uStack_138);
      puVar7 = &uStack_130;
      uStack_138 = uVar2;
      func_0x004b11f4(uVar2,param_2,puVar7,auStack_f0);
    } while (uStack_138 != 0);
  }
  func_0x004b12dc();
  func_0x004b11c4();
  _objc_release(param_3);
  func_0x004b1110(uStack_70);
  if (!(bool)in_ZR) {
    puVar1 = puVar7;
    ___stack_chk_fail();
    func_0x00788bc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00791f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b11ac();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004ae884; end: 004ae8d3; -[KSCrashReportFilterAppleFmt toCompactUUID:] */

void FUN_004ae884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00788bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00791f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11ac();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return;
}



/* Entry: 004ae8d4; end: 004ae92f; -[KSCrashReportFilterAppleFmt stringFromDate:] */

void FUN_004ae8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x004b11d4();
  puVar1 = PTR__OBJC_CLASS___NSDate_00ac2c88;
  _objc_opt_class();
  func_0x004b1198();
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uRam0000000000b618c8;
    func_0x00792080(uRam0000000000b618c8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x004b11ac();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 004ae930; end: 004ae93f; -[KSCrashReportFilterAppleFmt recrashReport:] */

void FUN_004ae930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00789eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_3,PTR_s_objectForKey__00abd4b8,&PTR____CFConstantStringClassReference_00a270a0);
  return;
}



/* Entry: 004ae940; end: 004ae94f; -[KSCrashReportFilterAppleFmt systemReport:] */

void FUN_004ae940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00789eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_3,PTR_s_objectForKey__00abd4b8,&PTR____CFConstantStringClassReference_00a273a0);
  return;
}



/* Entry: 004ae950; end: 004ae95f; -[KSCrashReportFilterAppleFmt infoReport:] */

void FUN_004ae950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00789eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_3,PTR_s_objectForKey__00abd4b8,&PTR____CFConstantStringClassReference_00a273c0);
  return;
}



/* Entry: 004ae960; end: 004ae96f; -[KSCrashReportFilterAppleFmt processReport:] */

void FUN_004ae960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00789eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_3,PTR_s_objectForKey__00abd4b8,&PTR____CFConstantStringClassReference_00a28760);
  return;
}



/* Entry: 004ae970; end: 004ae97f; -[KSCrashReportFilterAppleFmt crashReport:] */

void FUN_004ae970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00789eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_3,PTR_s_objectForKey__00abd4b8,&PTR____CFConstantStringClassReference_00a27060);
  return;
}



/* Entry: 004ae980; end: 004ae98f; -[KSCrashReportFilterAppleFmt binaryImagesReport:] */

void FUN_004ae980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00789eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_3,PTR_s_objectForKey__00abd4b8,&PTR____CFConstantStringClassReference_00a28780);
  return;
}



/* Entry: 004ae990; end: 004aeaeb; -[KSCrashReportFilterAppleFmt crashedThread:] */

/* WARNING: Removing unreachable block (ram,0x004aea28) */

void FUN_004ae990(ulong param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  ulong uVar5;
  
  func_0x004b1178();
  func_0x00781000();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x004b1350();
  uVar2 = uVar1;
  func_0x004b11f4();
  do {
    if (uVar2 == 0) {
      func_0x004b11a4();
      func_0x00789ea0(param_1,param_2,&PTR____CFConstantStringClassReference_00a27640);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
LAB_004aeab0:
      func_0x004b11a4();
      func_0x004b11ac();
      func_0x004b1110(extraout_x8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        func_0x00784980();
        _objc_retainAutoreleasedReturnValue();
        func_0x00789ea0();
        _objc_retainAutoreleasedReturnValue();
        func_0x004b11ac();
        uVar4 = param_1;
      }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar4);
      return;
    }
    uVar5 = 0;
    do {
      in_ZR = 1;
      uVar4 = *(ulong *)(uVar5 * 8);
      uVar3 = uVar4;
      func_0x00789ea0(uVar4,param_2,&PTR____CFConstantStringClassReference_00a27680);
      _objc_retainAutoreleasedReturnValue();
      func_0x0077fbc0();
      func_0x004b11b4();
      if ((uVar3 & 1) != 0) {
        param_1 = uVar4;
        _objc_retain(uVar4);
        func_0x004b11a4();
        goto LAB_004aeab0;
      }
      uVar5 = uVar5 + 1;
      in_ZR = uVar5 == uVar2;
    } while (uVar5 < uVar2);
    func_0x004b1350();
    uVar2 = uVar1;
    func_0x004b11f4();
  } while( true );
}



/* Entry: 004aeaec; end: 004aeb2f; -[KSCrashReportFilterAppleFmt mainExecutableNameForReport:] */

void FUN_004aeaec(undefined8 param_1)

{
  func_0x00784980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11ac();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004aeb30; end: 004aebcf; -[KSCrashReportFilterAppleFmt cpuArchForReport:] */

void FUN_004aeb30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x007926c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x007871a0();
  func_0x004b11dc();
  func_0x00789ea0(uVar1,param_2,&PTR____CFConstantStringClassReference_00a287c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x007871a0();
  func_0x004b11dc();
  func_0x0077b8e0(param_1,param_2,uVar2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11a4();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004aebd0; end: 004aed73; -[KSCrashReportFilterAppleFmt headerStringForReport:] */

void FUN_004aebd0(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  undefined1 auStack_6d [21];
  undefined8 uStack_58;
  
  func_0x004b1178();
  uStack_58 = extraout_x8;
  func_0x004b11d4();
  puVar1 = param_1;
  func_0x007926c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00784980();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11c4();
  puVar3 = puVar2;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x004b130c();
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    _objc_opt_class();
    func_0x004b130c();
    if (((ulong)puVar4 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_00ac2c88;
      _objc_opt_new();
    }
    else {
      func_0x007871a0(puVar2);
      FUN_004a7198((long)(int)puVar2,auStack_6d);
      func_0x00792220();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puRam0000000000b618d0;
      func_0x007818a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x004b11cc();
    }
  }
  else {
    puVar2 = puRam0000000000b618d0;
    func_0x007818a0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00784400();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11b4();
  func_0x004b11bc();
  func_0x004b11c4();
  func_0x004b11a4();
  func_0x004b11ac();
  func_0x004b1110(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    param_1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
    _objc_retain(puVar2);
    _objc_retain(puVar3);
    _objc_retain(puVar1);
    func_0x00791e20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ea0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077b900();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b11fc();
    func_0x004b11ec();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b11fc();
    func_0x004b11ec();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b11fc();
    func_0x004b11e4();
    func_0x004b11ec();
    func_0x004b11fc();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b11fc();
    func_0x004b11ec();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b11fc();
    func_0x004b11e4();
    func_0x004b11ec();
    func_0x004b11fc();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b11fc();
    func_0x004b11ec();
    func_0x004b11fc();
    func_0x00792080();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b11b4();
    func_0x004b11fc();
    func_0x004b11cc();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b11c4();
    func_0x004b11fc();
    func_0x004b11ec();
    func_0x004b11cc();
    func_0x004b11b4();
    func_0x004b11fc();
    func_0x004b11bc();
    func_0x004b11dc();
    func_0x004b11a4();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004aed74; end: 004af07b; -[KSCrashReportFilterAppleFmt headerStringForSystemInfo:reportID:crashTime:] */

void FUN_004aed74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00791e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a28800);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a27400);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077b900(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11fc();
  func_0x004b11ec();
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a26c60);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11fc();
  func_0x004b11ec();
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a27620);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a28880);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11fc();
  func_0x004b11e4();
  func_0x004b11ec();
  func_0x004b11fc();
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a27d60);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11fc();
  func_0x004b11ec();
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a27d80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a27da0);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11fc();
  func_0x004b11e4();
  func_0x004b11ec();
  func_0x004b11fc();
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a28940);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11fc();
  func_0x004b11ec();
  func_0x004b11fc();
  func_0x00792080(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11b4();
  func_0x004b11fc();
  func_0x004b11cc();
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a289a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a289c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a289e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11c4();
  func_0x004b11fc();
  func_0x004b11ec();
  func_0x004b11cc();
  func_0x004b11b4();
  func_0x004b11fc();
  func_0x004b11bc();
  func_0x004b11dc();
  func_0x004b11a4();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004af07c; end: 004af3db; -[KSCrashReportFilterAppleFmt binaryImagesStringForReport:] */

long FUN_004af07c(long param_1,long param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_70;
  
  lVar8 = param_1;
  func_0x004b1124();
  func_0x004b125c();
  func_0x00791e20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x0077fa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x007926c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_00a28a20;
  func_0x0077ef80(lVar8);
  if (lVar9 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f180();
    _objc_retainAutoreleasedReturnValue();
    func_0x00791a00();
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x004b1318();
    ppuVar5 = &puStack_130;
    puVar2 = puVar1;
    func_0x004b11f4();
    if (puVar2 != (undefined *)0x0) {
      lVar9 = *plStack_120;
      do {
        puVar7 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(puVar1);
          }
          lVar6 = *(long *)(lStack_128 + (long)puVar7 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
          _objc_opt_class();
          func_0x004b1198();
          if (((ulong)puVar3 & 1) != 0) {
            func_0x00789ea0(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x007871a0();
            func_0x004b11a4();
            func_0x00789ea0(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x007871a0();
            func_0x004b11a4();
            func_0x00789ea0();
            _objc_retainAutoreleasedReturnValue();
            func_0x004b12f0();
            func_0x004b11a4();
            func_0x00789ea0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00788b40();
            func_0x004b11b4();
            lVar4 = lVar6;
            func_0x004b1274();
            func_0x00789ea0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00788240();
            _objc_retainAutoreleasedReturnValue();
            func_0x00789ea0(lVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00792a80();
            _objc_retainAutoreleasedReturnValue();
            func_0x004b11cc();
            if (lVar4 == 0) {
              ppuVar5 = &PTR____CFConstantStringClassReference_00a27120;
            }
            else {
              lVar6 = param_1;
              func_0x007878e0();
              ppuVar5 = &PTR____CFConstantStringClassReference_00a21380;
              if ((int)lVar6 == 0) {
                ppuVar5 = &PTR____CFConstantStringClassReference_00a27120;
              }
            }
            _objc_retain(ppuVar5);
            func_0x0077b8e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x0077eec0(lVar8);
            func_0x004b11cc();
            func_0x004b11a4();
            func_0x004b11ac();
            func_0x004b11b4();
            func_0x004b11ec();
          }
          puVar7 = puVar7 + 1;
          in_ZR = puVar7 == puVar2;
        } while (puVar7 < puVar2);
        ppuVar5 = &puStack_130;
        puVar2 = puVar1;
        func_0x004b11f4();
      } while (puVar2 != (undefined *)0x0);
    }
    func_0x004b11ac();
    func_0x004b11ac();
  }
  _objc_release(param_1);
  func_0x004b12f8();
  func_0x004b11dc();
  func_0x004b11ac();
  func_0x004b1110(uStack_70);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar8);
    return lVar8;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x004b1280();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  _objc_opt_class();
  func_0x004b1198();
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    _objc_opt_class();
    func_0x004b1300();
    if (((ulong)puVar1 & 1) != 0) {
      func_0x00789ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00789ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = 0;
      if ((param_2 != 0) && (ppuVar5 != (undefined **)0x0)) {
        func_0x007806a0(param_2);
        lVar8 = param_2;
      }
      func_0x004b11bc();
      func_0x004b11c4();
      goto LAB_004af48c;
    }
  }
  lVar8 = 0;
LAB_004af48c:
  func_0x004b11a4();
  func_0x004b11ac();
  return lVar8;
}



/* Entry: 004af3dc; end: 004af4ab;  */

long FUN_004af3dc(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  func_0x004b1280();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  _objc_opt_class();
  func_0x004b1198();
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    _objc_opt_class();
    func_0x004b1300();
    if (((ulong)puVar1 & 1) != 0) {
      func_0x00789ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00789ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = 0;
      if ((param_2 != 0) && (param_3 != 0)) {
        func_0x007806a0(param_2);
        lVar2 = param_2;
      }
      func_0x004b11bc();
      func_0x004b11c4();
      goto LAB_004af48c;
    }
  }
  lVar2 = 0;
LAB_004af48c:
  func_0x004b11a4();
  func_0x004b11ac();
  return lVar2;
}



/* Entry: 004af4ac; end: 004af6e7; -[KSCrashReportFilterAppleFmt crashedThreadCPUStateStringForReport:cpuArch:] */

void FUN_004af4ac(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  func_0x004b1188();
  func_0x004b1280();
  func_0x004b1268();
  func_0x00781040();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_00a212a0;
  }
  else {
    ppuVar2 = param_1;
    func_0x00789ea0(param_1,param_2,&PTR____CFConstantStringClassReference_00a28ae0);
    _objc_retainAutoreleasedReturnValue();
    func_0x007871a0();
    func_0x004b11bc();
    func_0x004b1250();
    func_0x0077b900();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x004b125c();
    func_0x00791e20();
    _objc_retainAutoreleasedReturnValue();
    func_0x0077eec0();
    func_0x00789ea0(param_1,param_2,&PTR____CFConstantStringClassReference_00a276e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b11bc();
    ppuVar4 = ppuRam0000000000b618d8;
    func_0x00789ea0(ppuRam0000000000b618d8,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar4 = param_1;
      func_0x0077eae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00791a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x004b11bc();
    }
    ppuVar5 = ppuVar4;
    func_0x00780e80();
    ppuVar7 = (undefined **)0x0;
    while (ppuVar7 < ppuVar5) {
      ppuVar1 = (undefined **)((long)ppuVar7 + 4U);
      if (ppuVar5 <= (undefined **)((long)ppuVar7 + 4U)) {
        ppuVar1 = ppuVar5;
      }
      for (; ppuVar7 < ppuVar1; ppuVar7 = (undefined **)((long)ppuVar7 + 1)) {
        ppuVar6 = ppuVar4;
        func_0x00789e00(ppuVar4,param_2,ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00789ea0(param_1,param_2,ppuVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x004b12f0();
        func_0x004b11a4();
        _objc_retainAutorelease();
        func_0x0077fea0();
        func_0x0077eec0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_00a28b20);
        func_0x004b11ac();
      }
      func_0x0077ef80(ppuVar3,param_2,&PTR____CFConstantStringClassReference_00a27380);
    }
    func_0x004b11cc();
    func_0x004b11b4();
    _objc_release(ppuVar2);
  }
  func_0x004b11dc();
  func_0x004b11a4();
  func_0x004b11ac();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar3);
  return;
}



/* Entry: 004af6e8; end: 004afb57; -[KSCrashReportFilterAppleFmt extraInfoStringForReport:mainExecutableName:] */

void FUN_004af6e8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  func_0x004b11d4();
  lVar1 = param_4;
  _objc_retain();
  func_0x004b125c();
  func_0x00791e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0077ef80();
  func_0x004b1344();
  func_0x007926c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x004b1344();
  func_0x00781000();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b12c8();
  lVar4 = lVar3;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (lVar6 != 0) {
    lVar7 = param_1;
    func_0x0077ba00(param_1,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x004b1214();
    func_0x004b11bc();
  }
  func_0x004b1344();
  func_0x00781040();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 != 0) {
    lVar6 = lVar7;
    func_0x00789ea0(lVar7,param_2,&PTR____CFConstantStringClassReference_00a27a20);
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 != 0) {
      lVar8 = lVar6;
      func_0x00789ea0(lVar6,param_2,&PTR____CFConstantStringClassReference_00a28bc0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00788b40();
      func_0x00789ea0(lVar6,param_2,&PTR____CFConstantStringClassReference_00a28be0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00788b40();
      func_0x00789ea0(lVar6,param_2,&PTR____CFConstantStringClassReference_00a276c0);
      _objc_retainAutoreleasedReturnValue();
      func_0x004b1214();
      _objc_release(lVar6);
      func_0x004b121c();
      _objc_release(lVar8);
    }
    func_0x00789ea0(lVar7,param_2,&PTR____CFConstantStringClassReference_00a27820);
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      func_0x004b12bc();
      func_0x0077ba00();
      _objc_retainAutoreleasedReturnValue();
      func_0x004b1214();
      func_0x004b11a4();
    }
    func_0x004b11b4();
    func_0x004b11bc();
  }
  func_0x004b1344();
  func_0x0078aa80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11a4();
  if (lVar7 != 0) {
    func_0x00789ea0(lVar7,param_2,&PTR____CFConstantStringClassReference_00a27bc0);
    _objc_retainAutoreleasedReturnValue();
    func_0x004b12f0();
    func_0x004b11a4();
    func_0x004b1274();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ea0(lVar7,param_2,&PTR____CFConstantStringClassReference_00a27b20);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00789ea0(lVar7,param_2,&PTR____CFConstantStringClassReference_00a28b60);
    _objc_retainAutoreleasedReturnValue();
    func_0x004b11c4();
    func_0x004b1214();
    if (lVar6 != 0) {
      func_0x0077ba00(param_1,param_2,lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x004b1214();
      func_0x004b11a4();
    }
    func_0x00789ea0(lVar7,param_2,&PTR____CFConstantStringClassReference_00a276a0);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x0078b6a0(param_1);
    func_0x0077f700(param_1,param_2,lVar7,lVar6,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x004b1224(lVar1);
    func_0x004b11c4();
    func_0x004b11a4();
    func_0x004b11cc();
    func_0x004b11b4();
  }
  func_0x00789ea0(lVar2,param_2,&PTR____CFConstantStringClassReference_00a28c80);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x0077ba00(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x004b1214();
    func_0x004b11a4();
  }
  func_0x00789ea0(param_3,param_2,&PTR____CFConstantStringClassReference_00a27060);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x004b1214();
  }
  func_0x004b11cc();
  func_0x004b11b4();
  func_0x004b11c4();
  func_0x004b121c();
  func_0x004b12dc();
  func_0x004b11bc();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x004b12f8();
  func_0x004b11e4();
  func_0x004b11ac();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar1);
  return;
}



/* Entry: 004afb58; end: 004afbef; -[KSCrashReportFilterAppleFmt JSONForObject:] */

void FUN_004afb58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lStack_38;
  
  lStack_38 = 0;
  puVar2 = PTR_PTR_00ac2f28;
  func_0x00782680(PTR_PTR_00ac2f28,param_2,param_3,3,&lStack_38);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lStack_38;
  func_0x004b1318();
  func_0x004b1288();
  if (lVar1 == 0) {
    _objc_alloc();
    func_0x007851e0();
  }
  else {
    func_0x007921a0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x004b11a4();
  func_0x004b11ac();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 004afbf0; end: 004afe93; -[KSCrashReportFilterAppleFmt isZombieNSException:] */

undefined ** FUN_004afbf0(undefined **param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  undefined8 uStack_70;
  
  func_0x004b1124();
  ppuVar2 = param_1;
  func_0x00781000(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b12c8();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = ppuVar2;
  func_0x00789ea0(ppuVar2,param_2,&PTR____CFConstantStringClassReference_00a28d00);
  _objc_retainAutoreleasedReturnValue();
  func_0x007878e0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_00a27780);
  if (((int)ppuVar3 == 0) ||
     (func_0x007878e0(ppuVar14,param_2,&PTR____CFConstantStringClassReference_00a28d20),
     ppuVar3 = ppuVar14, (int)ppuVar14 == 0)) {
    ppuVar14 = (undefined **)0x0;
  }
  else {
    ppuVar4 = param_1;
    func_0x0078aa80(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar4;
    func_0x004b11cc();
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar14 = (undefined **)0x0;
    }
    else {
      func_0x00789ea0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_00a27bc0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00781040(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = param_1;
      func_0x00789ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00789ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x004b11cc();
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      _objc_retain(ppuVar3);
      ppuVar5 = ppuVar3;
      func_0x004b11f4(ppuVar3,param_2,&uStack_130,auStack_f0);
      ppuVar14 = (undefined **)0x0;
      if (ppuVar5 != (undefined **)0x0) {
        lVar15 = *plStack_120;
        do {
          ppuVar14 = (undefined **)0x0;
          do {
            in_ZR = *plStack_120 == lVar15;
            if (!(bool)in_ZR) {
              _objc_enumerationMutation(ppuVar3);
            }
            ppuVar6 = ppuVar3;
            func_0x00789ea0(ppuVar3,param_2,*(undefined8 *)(lStack_128 + (long)ppuVar14 * 8));
            _objc_retainAutoreleasedReturnValue();
            if ((ppuVar4 != (undefined **)0x0) &&
               (func_0x007878a0(ppuVar6,param_2,ppuVar4), ((ulong)ppuVar6 & 1) != 0)) {
              func_0x004b11cc();
              ppuVar14 = (undefined **)0x1;
              goto LAB_004afe2c;
            }
            func_0x004b11cc();
            ppuVar14 = (undefined **)((long)ppuVar14 + 1);
            in_ZR = ppuVar14 == ppuVar5;
          } while (ppuVar14 < ppuVar5);
          ppuVar5 = ppuVar3;
          func_0x004b11f4(ppuVar3,param_2,&uStack_130,auStack_f0);
        } while (ppuVar5 != (undefined **)0x0);
        ppuVar14 = (undefined **)0x0;
      }
LAB_004afe2c:
      func_0x004b121c();
      func_0x004b121c();
      _objc_release();
      func_0x004b11ec();
      ppuVar3 = param_1;
    }
    func_0x004b11ec();
  }
  func_0x004b11b4();
  func_0x004b11bc();
  func_0x004b11c4();
  func_0x004b11dc();
  func_0x004b11a4();
  func_0x004b11ac();
  func_0x004b1110(uStack_70);
  if ((bool)in_ZR) {
    return ppuVar14;
  }
  ___stack_chk_fail();
  func_0x004b1188();
  func_0x004b125c();
  func_0x00791e20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x004b1268();
  func_0x00781040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x004b1268();
  func_0x00781000();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b12c8();
  ppuVar6 = ppuVar5;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00789ea0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_00a27b00);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar6;
  func_0x00789ea0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_00a28d40);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar8;
  func_0x004b1268();
  func_0x0078aa80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11dc();
  ppuVar10 = ppuVar6;
  func_0x00789ea0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_00a28d60);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar6;
  func_0x00789ea0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_00a27740);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar6;
  func_0x00789ea0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_00a277a0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar11;
  func_0x00789ea0(ppuVar11,param_2,&PTR____CFConstantStringClassReference_00a27760);
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = &PTR____CFConstantStringClassReference_00a28d80;
  if (ppuVar13 != (undefined **)0x0) {
    ppuVar14 = ppuVar13;
  }
  func_0x004b1274();
  ppuVar13 = ppuVar12;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar13 == (undefined **)0x0) {
    ppuVar13 = ppuVar12;
    func_0x00789ea0(ppuVar12,param_2,&PTR____CFConstantStringClassReference_00a277a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00792100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar13);
  }
  func_0x00789ea0(ppuVar11,param_2,&PTR____CFConstantStringClassReference_00a28d00);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b122c();
  func_0x004b122c();
  func_0x00789ea0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_00a27bc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00788b40();
  func_0x004b122c();
  func_0x004b11e4();
  func_0x00789ea0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_00a28ae0);
  iVar1 = (int)ppuVar4;
  _objc_retainAutoreleasedReturnValue();
  func_0x007871a0();
  func_0x004b122c();
  func_0x004b11e4();
  if (ppuVar7 == (undefined **)0x0) {
    func_0x004b1268();
    func_0x00787fa0();
    if (iVar1 == 0) {
      if (ppuVar10 == (undefined **)0x0) {
        func_0x004b12d4();
        if (iVar1 == 0) {
          func_0x004b12d4();
          ppuVar4 = ppuVar12;
          if ((iVar1 != 0) || (func_0x004b12d4(), ppuVar4 = ppuVar11, iVar1 != 0)) {
            func_0x00789ea0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_00a28ee0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00792120(ppuVar2,param_2,ppuVar4);
            _objc_retainAutoreleasedReturnValue();
            func_0x004b11b4();
            func_0x007882e0();
            if (ppuVar2 != (undefined **)0x0) {
              func_0x004b1224(ppuVar3);
            }
            func_0x004b11c4();
          }
        }
        else {
          func_0x004b1274();
          ppuVar4 = ppuVar8;
          func_0x00789ea0(ppuVar8);
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuVar4;
          func_0x004b12ac();
          func_0x00789ea0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00792240(ppuVar2,param_2,ppuVar4,ppuVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x004b1168();
          func_0x004b11c4();
          func_0x004b11cc();
          _objc_release(ppuVar4);
        }
      }
      else {
        func_0x004b1274();
        ppuVar4 = ppuVar10;
        func_0x00789ea0(ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x004b12ac();
        func_0x00789ea0();
        _objc_retainAutoreleasedReturnValue();
        func_0x004b1330();
        func_0x007921e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x0077ef80(ppuVar3,param_2,ppuVar4);
        func_0x004b11b4();
        func_0x004b11e4();
        func_0x004b11cc();
        func_0x007933c0(ppuVar2,param_2,ppuVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x007882e0();
        if (ppuVar2 != (undefined **)0x0) {
          func_0x004b122c();
        }
        ppuVar2 = ppuVar6;
        func_0x00789ea0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_00a28e60);
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar2 != (undefined **)0x0) {
          ppuVar2 = ppuVar6;
          func_0x00789ea0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_00a28e80);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar6;
          func_0x00789ea0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_00a28ea0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00789ea0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_00a27660);
          _objc_retainAutoreleasedReturnValue();
          func_0x00782440(ppuVar2);
          func_0x00780e80();
          func_0x00782440(ppuVar4);
          func_0x004b122c();
          func_0x004b11e4();
          func_0x004b11cc();
          func_0x004b12dc();
        }
        func_0x004b11c4();
        func_0x004b11ec();
      }
    }
    else {
      func_0x004b1274();
      func_0x00789ea0(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00789ea0(ppuVar9,param_2,&PTR____CFConstantStringClassReference_00a27b20);
      _objc_retainAutoreleasedReturnValue();
      func_0x004b1330();
      func_0x00792240();
      _objc_retainAutoreleasedReturnValue();
      func_0x004b1168();
      func_0x004b11c4();
      func_0x004b11e4();
      func_0x004b11cc();
      func_0x0077ef80(ppuVar3,param_2,&PTR____CFConstantStringClassReference_00a28e20);
    }
  }
  else {
    func_0x004b1274();
    ppuVar4 = ppuVar7;
    func_0x00789ea0(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = ppuVar4;
    func_0x004b12ac();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00792240(ppuVar2,param_2,ppuVar4,ppuVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x004b1168();
    func_0x004b11c4();
    func_0x004b11cc();
    func_0x004b11e4();
  }
  func_0x00789ea0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_00a214a0);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar6 != (undefined **)0x0) {
    iVar1 = 0xa27a60;
    func_0x007878e0(&PTR____CFConstantStringClassReference_00a27a60,param_2,ppuVar6);
    if (iVar1 != 0) {
      func_0x004b122c();
    }
  }
  func_0x004b11c4();
  func_0x004b11dc();
  func_0x004b121c();
  _objc_release(ppuVar14);
  _objc_release(ppuVar12);
  func_0x004b12f8();
  _objc_release(ppuVar10);
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  func_0x004b11e4();
  func_0x004b11bc();
  _objc_release(ppuVar5);
  func_0x004b11b4();
  func_0x004b11ac();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar3);
  return ppuVar3;
}



/* Entry: 004afe94; end: 004b051f; -[KSCrashReportFilterAppleFmt errorInfoStringForReport:] */

void FUN_004afe94(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long unaff_x22;
  
  func_0x004b1188();
  func_0x004b125c();
  func_0x00791e20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = param_1;
  func_0x004b1268();
  func_0x00781040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x004b1268();
  func_0x00781000();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b12c8();
  ppuVar5 = ppuVar4;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00789ea0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_00a27b00);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar5;
  func_0x00789ea0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_00a28d40);
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x004b1268();
  func_0x0078aa80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11dc();
  ppuVar9 = ppuVar5;
  func_0x00789ea0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_00a28d60);
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar5;
  func_0x00789ea0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_00a27740);
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar5;
  func_0x00789ea0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_00a277a0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar10;
  func_0x00789ea0(ppuVar10,param_2,&PTR____CFConstantStringClassReference_00a27760);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_00a28d80;
  if (ppuVar12 != (undefined **)0x0) {
    ppuVar1 = ppuVar12;
  }
  func_0x004b1274();
  ppuVar12 = ppuVar11;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar12 = ppuVar11;
    func_0x00789ea0(ppuVar11,param_2,&PTR____CFConstantStringClassReference_00a277a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00792100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar12);
  }
  func_0x00789ea0(ppuVar10,param_2,&PTR____CFConstantStringClassReference_00a28d00);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b122c();
  func_0x004b122c();
  func_0x00789ea0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_00a27bc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00788b40();
  func_0x004b122c();
  func_0x004b11e4();
  func_0x00789ea0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_00a28ae0);
  iVar2 = (int)ppuVar3;
  _objc_retainAutoreleasedReturnValue();
  func_0x007871a0();
  func_0x004b122c();
  func_0x004b11e4();
  if (ppuVar6 == (undefined **)0x0) {
    func_0x004b1268();
    func_0x00787fa0();
    if (iVar2 == 0) {
      if (ppuVar9 == (undefined **)0x0) {
        func_0x004b12d4();
        if (iVar2 == 0) {
          func_0x004b12d4();
          ppuVar3 = ppuVar11;
          if ((iVar2 != 0) || (func_0x004b12d4(), ppuVar3 = ppuVar10, iVar2 != 0)) {
            func_0x00789ea0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_00a28ee0);
            _objc_retainAutoreleasedReturnValue();
            func_0x00792120();
            _objc_retainAutoreleasedReturnValue();
            func_0x004b11b4();
            func_0x007882e0();
            if (unaff_x22 != 0) {
              func_0x004b1224(param_1);
            }
            func_0x004b11c4();
          }
        }
        else {
          func_0x004b1274();
          ppuVar3 = ppuVar7;
          func_0x00789ea0(ppuVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x004b12ac();
          func_0x00789ea0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00792240();
          _objc_retainAutoreleasedReturnValue();
          func_0x004b1168();
          func_0x004b11c4();
          func_0x004b11cc();
          _objc_release(ppuVar3);
        }
      }
      else {
        func_0x004b1274();
        ppuVar3 = ppuVar9;
        func_0x00789ea0(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x004b12ac();
        func_0x00789ea0();
        _objc_retainAutoreleasedReturnValue();
        func_0x004b1330();
        func_0x007921e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x0077ef80(param_1,param_2,ppuVar3);
        func_0x004b11b4();
        func_0x004b11e4();
        func_0x004b11cc();
        func_0x007933c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x007882e0();
        if (unaff_x22 != 0) {
          func_0x004b122c();
        }
        ppuVar3 = ppuVar5;
        func_0x00789ea0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_00a28e60);
        _objc_retainAutoreleasedReturnValue();
        if (ppuVar3 != (undefined **)0x0) {
          ppuVar3 = ppuVar5;
          func_0x00789ea0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_00a28e80);
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar5;
          func_0x00789ea0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_00a28ea0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00789ea0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_00a27660);
          _objc_retainAutoreleasedReturnValue();
          func_0x00782440(ppuVar3);
          func_0x00780e80();
          func_0x00782440(ppuVar10);
          func_0x004b122c();
          func_0x004b11e4();
          func_0x004b11cc();
          func_0x004b12dc();
        }
        func_0x004b11c4();
        func_0x004b11ec();
      }
    }
    else {
      func_0x004b1274();
      func_0x00789ea0(ppuVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00789ea0(ppuVar8,param_2,&PTR____CFConstantStringClassReference_00a27b20);
      _objc_retainAutoreleasedReturnValue();
      func_0x004b1330();
      func_0x00792240();
      _objc_retainAutoreleasedReturnValue();
      func_0x004b1168();
      func_0x004b11c4();
      func_0x004b11e4();
      func_0x004b11cc();
      func_0x0077ef80(param_1,param_2,&PTR____CFConstantStringClassReference_00a28e20);
    }
  }
  else {
    func_0x004b1274();
    func_0x00789ea0(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x004b12ac();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00792240();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b1168();
    func_0x004b11c4();
    func_0x004b11cc();
    func_0x004b11e4();
  }
  func_0x00789ea0(ppuVar5,param_2,&PTR____CFConstantStringClassReference_00a214a0);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar5 != (undefined **)0x0) {
    iVar2 = 0xa27a60;
    func_0x007878e0(&PTR____CFConstantStringClassReference_00a27a60,param_2,ppuVar5);
    if (iVar2 != 0) {
      func_0x004b122c();
    }
  }
  func_0x004b11c4();
  func_0x004b11dc();
  func_0x004b121c();
  _objc_release(ppuVar1);
  _objc_release(ppuVar11);
  func_0x004b12f8();
  _objc_release(ppuVar9);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  func_0x004b11e4();
  func_0x004b11bc();
  _objc_release(ppuVar4);
  func_0x004b11b4();
  func_0x004b11ac();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004b0520; end: 004b0547; -[KSCrashReportFilterAppleFmt stringWithUncaughtExceptionName:reason:] */

void FUN_004b0520(undefined8 param_1,undefined8 param_2)

{
  func_0x004b1288();
  func_0x007921a0(param_1,param_2,&PTR____CFConstantStringClassReference_00a28f20);
  return;
}



/* Entry: 004b0548; end: 004b056f; -[KSCrashReportFilterAppleFmt stringWithHandledExceptionName:reason:] */

void FUN_004b0548(undefined8 param_1,undefined8 param_2)

{
  func_0x004b1288();
  func_0x007921a0(param_1,param_2,&PTR____CFConstantStringClassReference_00a28f40);
  return;
}



/* Entry: 004b0570; end: 004b05e7; -[KSCrashReportFilterAppleFmt stringWithApplicationSpecificInformationUserInfo:] */

void FUN_004b0570(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x004b11d4();
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x004b1198();
  if ((((ulong)puVar1 & 1) == 0) || (func_0x007882e0(), param_3 == 0)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a28f60);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x004b11ac();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004b05e8; end: 004b075f; -[KSCrashReportFilterAppleFmt userExceptionTrace:] */

/* WARNING: Removing unreachable block (ram,0x004b06bc) */

void FUN_004b05e8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  ulong uVar6;
  
  func_0x004b1178();
  func_0x004b11d4();
  func_0x004b125c();
  func_0x00791e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    func_0x004b122c();
  }
  uVar2 = param_3;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x004b11f4();
  while (uVar1 != 0) {
    uVar6 = 0;
    do {
      func_0x0077eec0(param_1);
      uVar6 = uVar6 + 1;
      in_ZR = uVar6 == uVar1;
    } while (uVar6 < uVar1);
    uVar1 = uVar2;
    func_0x004b11f4();
  }
  func_0x007882e0();
  if (param_1 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_00a212a0;
    ppuVar3 = (undefined **)0x0;
  }
  else {
    ppuVar3 = &PTR____CFConstantStringClassReference_00a28fe0;
    func_0x00791ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
  }
  func_0x004b11c4();
  func_0x004b11dc();
  func_0x004b11a4();
  func_0x004b11ac();
  func_0x004b1110(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x004b135c();
    func_0x004b1188();
    func_0x004b1280();
    func_0x004b125c();
    func_0x00791e20();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x0077eec0();
    func_0x004b12e4();
    func_0x004b1198();
    if ((((ulong)ppuVar4 & 1) == 0) ||
       (uVar1 = param_3, _objc_opt_respondsToSelector(param_3,PTR_s_objectForKey__00abd4b8),
       (uVar1 & 1) == 0)) {
      func_0x004b1214();
    }
    else {
      func_0x00789ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0077fbc0();
      func_0x004b11b4();
      func_0x00789ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x007871a0();
      func_0x004b11b4();
      func_0x004b1274();
      uVar1 = param_3;
      func_0x00789ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00789ea0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00789ea0();
      _objc_retainAutoreleasedReturnValue();
      if ((uVar1 != 0) || (uVar6 != 0)) {
        func_0x004b1214();
      }
      func_0x004b1214();
      if (uVar5 != 0) {
        func_0x00782440(uVar5);
        func_0x004b1214();
        func_0x00789ea0();
        _objc_retainAutoreleasedReturnValue();
        func_0x0077fbc0();
        func_0x004b11e4();
        func_0x004b1214();
      }
      func_0x00789ea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078b6a0(uVar2);
      func_0x0077f700(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x004b1224(ppuVar3);
      func_0x004b11c4();
      func_0x004b11bc();
      func_0x004b11ec();
      func_0x004b11cc();
      func_0x004b11b4();
    }
    func_0x004b11a4();
    func_0x004b11ac();
    ppuVar4 = ppuVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar4);
  return;
}



/* Entry: 004b0760; end: 004b098b; -[KSCrashReportFilterAppleFmt threadStringForThread:mainExecutableName:] */

void FUN_004b0760(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  
  func_0x004b135c();
  func_0x004b1188();
  func_0x004b1280();
  func_0x004b125c();
  func_0x00791e20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0077eec0();
  func_0x004b12e4();
  func_0x004b1198();
  if (((uVar1 & 1) == 0) || (uVar1 = unaff_x19, _objc_opt_respondsToSelector(), (uVar1 & 1) == 0)) {
    func_0x004b1214();
  }
  else {
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fbc0();
    func_0x004b11b4();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x007871a0();
    func_0x004b11b4();
    func_0x004b1274();
    uVar1 = unaff_x19;
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x19;
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 != 0) || (uVar2 != 0)) {
      func_0x004b1214();
    }
    func_0x004b1214();
    if (unaff_x19 != 0) {
      func_0x00782440(unaff_x19);
      func_0x004b1214();
      func_0x00789ea0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0077fbc0();
      func_0x004b11e4();
      func_0x004b1214();
    }
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078b6a0();
    func_0x0077f700();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b1224(param_1);
    func_0x004b11c4();
    func_0x004b11bc();
    func_0x004b11ec();
    func_0x004b11cc();
    func_0x004b11b4();
  }
  func_0x004b11a4();
  func_0x004b11ac();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004b098c; end: 004b0b6f; -[KSCrashReportFilterAppleFmt threadListStringForReport:mainExecutableName:] */

undefined8 * FUN_004b098c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_70;
  
  puVar1 = param_1;
  func_0x004b1124();
  func_0x004b1280();
  func_0x004b125c();
  func_0x00791e20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x004b1268();
  func_0x00781000();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar6;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b12c8();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar6;
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x007877e0();
  if ((int)puVar4 != 0) {
    func_0x00789ea0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined8 *)0x0) {
      func_0x00791a40();
      _objc_retainAutoreleasedReturnValue();
      func_0x004b11b4();
    }
    func_0x004b11e4();
  }
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar2);
  puVar6 = &uStack_130;
  puVar4 = puVar2;
  func_0x004b11f4();
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = *plStack_120;
    do {
      puVar6 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != lVar5) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00792840(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x0077ef80(puVar1);
        func_0x004b121c();
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        in_ZR = puVar6 == puVar4;
      } while (puVar6 < puVar4);
      puVar6 = &uStack_130;
      puVar4 = puVar2;
      func_0x004b11f4();
    } while (puVar4 != (undefined8 *)0x0);
  }
  func_0x004b11b4();
  _objc_release(puVar3);
  func_0x004b11cc();
  func_0x004b11b4();
  func_0x004b11bc();
  func_0x004b11a4();
  _objc_release(param_3);
  func_0x004b1110(uStack_70);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x004b11d4();
  func_0x00789ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11ac();
  func_0x007806a0(puVar6);
  func_0x004b11dc();
  func_0x004b11a4();
  return puVar6;
}



/* Entry: 004b0b70; end: 004b0bf3;  */

undefined8 FUN_004b0b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x004b11d4();
  func_0x00789ea0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11ac();
  func_0x007806a0(param_3);
  func_0x004b11dc();
  func_0x004b11a4();
  return param_3;
}



/* Entry: 004b0bf4; end: 004b0d37; -[KSCrashReportFilterAppleFmt crashReportString:] */

void FUN_004b0bf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  func_0x004b11d4();
  func_0x00791e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x004b1250();
  func_0x00788c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b1250();
  func_0x007843e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b113c();
  func_0x004b11bc();
  func_0x004b1250();
  func_0x00782dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b113c();
  func_0x004b11bc();
  func_0x004b1250();
  func_0x00792820();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b113c();
  func_0x004b11bc();
  func_0x004b1250();
  func_0x00780f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b1250();
  func_0x00781060();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077ef80(puVar1,param_2,puVar2);
  func_0x004b11b4();
  func_0x004b11bc();
  func_0x004b1250();
  func_0x007808c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b113c();
  func_0x004b11bc();
  func_0x004b1250();
  func_0x0077fa20();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b113c();
  func_0x004b11bc();
  func_0x004b1250();
  func_0x00783080();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11a4();
  func_0x004b1224(puVar1);
  func_0x004b11c4();
  func_0x004b11dc();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004b0d38; end: 004b0ea7; -[KSCrashReportFilterAppleFmt composerThreadsString:] */

void FUN_004b0d38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  func_0x004b135c();
  func_0x00781000();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b12c8();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x007815a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_00a212a0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_00ac29a8;
    func_0x0077ba20();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(0);
    puVar2 = puVar1;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x004b1288();
    _objc_opt_class();
    _objc_opt_isKindOfClass(puVar2,puVar3);
    func_0x004b11ec();
    if (((ulong)puVar2 & 1) == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_00a212a0;
    }
    else {
      func_0x00789f00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_00a29160;
      func_0x00791ec0(&PTR____CFConstantStringClassReference_00a29160);
      _objc_retainAutoreleasedReturnValue();
      func_0x004b11e4();
    }
    func_0x004b11cc();
    func_0x004b11b4();
  }
  func_0x004b11bc();
  func_0x004b11c4();
  func_0x004b11dc();
  func_0x004b11a4();
  func_0x004b11ac();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar4);
  return;
}



/* Entry: 004b0ea8; end: 004b104b; -[KSCrashReportFilterAppleFmt recrashReportString:] */

void FUN_004b0ea8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x004b135c();
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  func_0x004b11d4();
  func_0x00791e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b12bc();
  func_0x0078b060();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x007926c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00788240();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b12bc();
  func_0x00781000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077ef80(puVar1);
  func_0x004b12bc();
  func_0x00782dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b1294();
  func_0x004b121c();
  func_0x00792840(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b1294();
  func_0x004b121c();
  func_0x00780f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b12bc();
  func_0x00781060();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b11b4();
  func_0x0077ef80(puVar1);
  func_0x004b11ec();
  func_0x004b121c();
  func_0x00789ea0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x004b11fc();
  }
  func_0x004b11b4();
  func_0x004b11e4();
  func_0x004b11cc();
  func_0x004b11bc();
  func_0x004b11c4();
  func_0x004b11dc();
  func_0x004b11a4();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004b104c; end: 004b10ff; -[KSCrashReportFilterAppleFmt toAppleFormat:] */

void FUN_004b104c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  undefined8 unaff_x22;
  
  func_0x004b1188();
  func_0x004b125c();
  func_0x00791e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  if (unaff_x19 == 0) {
    func_0x004b1268();
    func_0x00781020();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00781020();
    _objc_retainAutoreleasedReturnValue();
    func_0x0077ef80(param_1,param_2,unaff_x22);
    func_0x004b11bc();
    func_0x004b1268();
    func_0x0078b080();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x004b1168();
  func_0x004b11c4();
  func_0x004b11dc();
  func_0x004b11ac();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004b1100; end: 004b1107; -[KSCrashReportFilterAppleFmt reportStyle] */

undefined4 FUN_004b1100(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 004b1108; end: 004b1377; -[KSCrashReportFilterAppleFmt setReportStyle:] */

void FUN_004b1108(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 004b1378; end: 004b13f3; -[KSCrashReportFilterCombine initWithFilters:keys:] */

undefined1 * FUN_004b1378(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x004b2b94();
  func_0x004b2c34();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_00abbf70);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0078e100(puVar1);
    func_0x0078eaa0(puVar1);
  }
  func_0x004b2c00();
  func_0x004b2be8();
  return puVar1;
}



/* Entry: 004b13f4; end: 004b14c3; +[KSCrashReportFilterCombine argBlockWithFilters:andKeys:] */

void FUN_004b13f4(undefined8 param_1)

{
  undefined8 unaff_x19;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x004b2ddc();
  func_0x004b2bd8();
  func_0x004b2c34();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x004b2c34();
  func_0x004b2c2c();
  func_0x004b2d14();
  func_0x00780e20();
  func_0x004b2c08();
  _objc_release(unaff_x19);
  func_0x004b2d00();
  func_0x004b2be0(&uStack_50);
  func_0x004b2c00();
  func_0x004b2be8();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004b14c4; end: 004b15cb;  */

void FUN_004b14c4(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_2);
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == '\x01') {
    if (param_2 != (undefined *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_004b1564;
    }
    func_0x004b2d7c();
    FUN_004ab180();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_00ac2c28;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_00ac2c28);
    puVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if (((ulong)puVar3 & 1) != 0) {
      param_2 = PTR_PTR_00ac2f38;
      func_0x007835e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x004b2be8();
    }
    puVar2 = param_2;
    func_0x007809e0();
    if (((ulong)puVar2 & 1) == 0) {
      func_0x004b2d7c();
      FUN_004ab180();
      goto LAB_004b15b4;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x28);
LAB_004b1564:
    func_0x0077e720(uVar1);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  *(byte *)(lVar4 + 0x18) = *(byte *)(lVar4 + 0x18) ^ 1;
LAB_004b15b4:
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 004b15cc; end: 004b161b;  */

void FUN_004b15cc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x004b2c10();
  func_0x004b2e9c();
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)
            (unaff_x20 + 0x30,*(undefined8 *)(unaff_x19 + 0x30),8);
  return;
}



/* Entry: 004b161c; end: 004b16e7; +[KSCrashReportFilterCombine filterWithFiltersAndKeys:] */

void FUN_004b161c(void)

{
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x25;
  
  func_0x004b2b94();
  func_0x0077f120(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077f120(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b2c2c();
  while (unaff_x19 != 0) {
    func_0x004b2db0();
    func_0x004b2cd0();
    func_0x004b2c9c();
    unaff_x19 = unaff_x25;
  }
  func_0x004b2c3c();
  func_0x004b2e6c();
  func_0x004b2e3c();
  func_0x004b2c08();
  func_0x004b2c00();
  func_0x004b2be8();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(unaff_x21);
  return;
}



/* Entry: 004b16e8; end: 004b17b7; -[KSCrashReportFilterCombine initWithFiltersAndKeys:] */

undefined8 FUN_004b16e8(void)

{
  long unaff_x19;
  undefined8 unaff_x21;
  long unaff_x25;
  
  func_0x004b2b94();
  func_0x0077f120(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077f120(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  func_0x0077f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b2c2c();
  while (unaff_x19 != 0) {
    func_0x004b2db0();
    func_0x004b2cd0();
    func_0x004b2c9c();
    unaff_x19 = unaff_x25;
  }
  func_0x004b2c3c();
  func_0x004b2e3c();
  func_0x004b2c08();
  func_0x004b2c00();
  func_0x004b2be8();
  return unaff_x21;
}



/* Entry: 004b17b8; end: 004b1af7; -[KSCrashReportFilterCombine filterReports:onCompletion:] */

void FUN_004b17b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x004b2ddc();
  func_0x004b2bd8();
  func_0x004b2c34();
  lVar2 = param_1;
  func_0x007836c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00788100();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00780e80();
  if (lVar4 == 0) {
    if (unaff_x20 != 0) {
      func_0x004b2df8();
      func_0x004b2cc4();
    }
  }
  else {
    lVar5 = lVar3;
    func_0x00780e80();
    puVar1 = PTR__OBJC_CLASS___NSError_00ac2b00;
    if (lVar4 == lVar5) {
      func_0x004b2d08();
      func_0x0077f1a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_90 = &uStack_98;
      uStack_98 = 0;
      uStack_88 = 0x2020000000;
      uStack_80 = 0;
      uStack_c8 = 0;
      uStack_b8 = 0x3032000000;
      pcStack_b0 = FUN_004b1af8;
      pcStack_a8 = FUN_004b1b20;
      uStack_a0 = 0;
      puStack_f0 = &uStack_f8;
      uStack_f8 = 0;
      uStack_e8 = 0x3042000000;
      puStack_c0 = &uStack_c8;
      func_0x004b2ea4();
      _objc_initWeak(auStack_d0,0);
      puVar1 = PTR___NSConcreteStackBlock_00999f30;
      puStack_120 = PTR___NSConcreteStackBlock_00999f30;
      uStack_118 = 0xc2000000;
      pcStack_110 = FUN_004b1b3c;
      puStack_108 = &UNK_009e4b88;
      ppuVar6 = &puStack_120;
      puStack_100 = &uStack_c8;
      func_0x00780e20();
      puStack_190 = puVar1;
      uStack_188 = 0xc2000000;
      pcStack_180 = FUN_004b1b74;
      puStack_178 = &UNK_009eca68;
      func_0x004b2c34();
      lStack_170 = param_1;
      _objc_retain(ppuVar6);
      _objc_retain(lVar5);
      lStack_168 = lVar5;
      _objc_retain(lVar2);
      lStack_160 = lVar2;
      func_0x004b2c2c();
      _objc_retain(lVar3);
      func_0x00780e20(&puStack_190);
      func_0x004b2de8();
      _objc_storeWeak(puStack_f0 + 5,puStack_c0[5]);
      func_0x00789e00(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x007835a0();
      _objc_release(lVar2);
      _objc_release(lVar3);
      _objc_release(unaff_x19);
      _objc_release(lStack_160);
      _objc_release(lStack_168);
      _objc_release(ppuVar6);
      _objc_release(unaff_x20);
      func_0x004b2c9c();
      func_0x004b2be0(&uStack_f8);
      _objc_destroyWeak(auStack_d0);
      func_0x004b2be0(&uStack_c8);
      _objc_release(uStack_a0);
      func_0x004b2be0(&uStack_98);
    }
    else {
      _objc_opt_class(param_1);
      func_0x00781e40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00780e80();
      func_0x00782e20(puVar1);
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x20 != 0) {
        func_0x004b2df8();
        func_0x004b2cb8();
      }
      func_0x004b2c9c();
    }
    func_0x004b2c3c();
  }
  func_0x004b2c08();
  func_0x004b2c70();
  func_0x004b2c00();
  func_0x004b2be8();
  return;
}



/* Entry: 004b1af8; end: 004b1b1f;  */

void FUN_004b1af8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  _objc_retainBlock();
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 004b1b20; end: 004b1b3b;  */

void FUN_004b1b20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 004b1b3c; end: 004b1b6f;  */

void FUN_004b1b3c(void)

{
  func_0x004b2bf0();
  func_0x004b2c44(FUN_004b1b70);
  return;
}



/* Entry: 004b1b70; end: 004b1b73;  */

void FUN_004b1b70(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004b1b74; end: 004b1de3;  */

void FUN_004b1b74(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong extraout_x9;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  ulong uVar8;
  ulong uVar9;
  
  func_0x004b2ce8();
  func_0x004b2c34();
  if ((unaff_x19 == 0) || ((unaff_x22 & 1) == 0)) {
    if ((unaff_x22 & 1) == 0) {
      if (*(long *)(unaff_x21 + 0x48) != 0) {
        func_0x004b2e24(*(undefined8 *)(*(long *)(unaff_x21 + 0x48) + 0x10));
      }
    }
    else if (unaff_x19 == 0) {
      lVar7 = *(long *)(unaff_x21 + 0x48);
      func_0x004b2d6c();
      func_0x00781e40();
      _objc_retainAutoreleasedReturnValue();
      func_0x004b2dc0();
      func_0x00782e20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 != 0) {
        func_0x004b2cb8(*(undefined8 *)(lVar7 + 0x10),lVar7,0);
      }
      func_0x004b2c9c();
      func_0x004b2c3c();
    }
    func_0x004b2e18();
  }
  else {
    func_0x0077e720(*(undefined8 *)(unaff_x21 + 0x28));
    func_0x004b2eb8(*(undefined8 *)(unaff_x21 + 0x58));
    if (extraout_x9 < *(ulong *)(unaff_x21 + 0x68)) {
      uVar1 = *(undefined8 *)(unaff_x21 + 0x30);
      func_0x00789e00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x004b2e74(*(undefined8 *)(unaff_x21 + 0x60));
      func_0x007835a0(uVar1);
      func_0x004b2c70();
      func_0x004b2c08();
    }
    else {
      uVar2 = *(ulong *)(unaff_x21 + 0x28);
      func_0x00789e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00780e80();
      uVar3 = uVar2;
      func_0x004b2c08();
      func_0x004b2d08();
      func_0x0077f1a0();
      _objc_retainAutoreleasedReturnValue();
      for (uVar8 = 0; uVar8 != uVar2; uVar8 = uVar8 + 1) {
        puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
        func_0x00782000(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
        _objc_retainAutoreleasedReturnValue();
        for (uVar9 = 0; uVar9 < *(ulong *)(unaff_x21 + 0x68); uVar9 = uVar9 + 1) {
          uVar5 = *(ulong *)(unaff_x21 + 0x28);
          func_0x00789e00();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00780e80();
          if (uVar8 < uVar6) {
            uVar6 = uVar5;
            func_0x00789e00(uVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00789e00(*(undefined8 *)(unaff_x21 + 0x40));
            _objc_retainAutoreleasedReturnValue();
            func_0x0078f4a0(puVar4);
            func_0x004b2c00();
            _objc_release(uVar6);
          }
          _objc_release(uVar5);
        }
        func_0x0077e720(uVar3);
        _objc_release(puVar4);
      }
      lVar7 = *(long *)(unaff_x21 + 0x48);
      if (lVar7 != 0) {
        func_0x004b2e24(*(undefined8 *)(lVar7 + 0x10),lVar7,uVar3,1);
      }
      func_0x004b2e18();
      func_0x004b2c08();
    }
  }
  func_0x004b2c00();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(unaff_x19);
  return;
}



/* Entry: 004b1de4; end: 004b1ea3;  */

void FUN_004b1de4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x004b2c10();
  func_0x004b2e9c();
  _objc_retain(*(undefined8 *)(unaff_x19 + 0x30));
  _objc_retain(*(undefined8 *)(unaff_x19 + 0x38));
  _objc_retain(*(undefined8 *)(unaff_x19 + 0x40));
  func_0x004b2da8(unaff_x20 + 0x48,*(undefined8 *)(unaff_x19 + 0x48));
  func_0x004b2da8(unaff_x20 + 0x50,*(undefined8 *)(unaff_x19 + 0x50));
  __Block_object_assign(unaff_x20 + 0x58,*(undefined8 *)(unaff_x19 + 0x58),8);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)
            (unaff_x20 + 0x60,*(undefined8 *)(unaff_x19 + 0x60),8);
  return;
}



/* Entry: 004b1ea4; end: 004b1ea7; -[KSCrashReportFilterCombine filters] */

undefined8 FUN_004b1ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004b1ea8; end: 004b1ec7; -[KSCrashReportFilterCombine setFilters:] */

void FUN_004b1ea8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004b2b54();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004b1ec8; end: 004b1ecf; -[KSCrashReportFilterCombine keys] */

undefined8 FUN_004b1ec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004b1ed0; end: 004b1eef; -[KSCrashReportFilterCombine setKeys:] */

void FUN_004b1ed0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004b2b54();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004b1ef0; end: 004b1f1f; -[KSCrashReportFilterCombine .cxx_destruct] */

void FUN_004b1ef0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004b1f20; end: 004b1fbf; +[KSCrashReportFilterPipeline filterWithFilters:] */

void FUN_004b1f20(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x24;
  
  func_0x004b2b94();
  func_0x004b2d08();
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b2bf0();
  func_0x004b2bb8(FUN_004b1fc0);
  func_0x004b2d14();
  func_0x004b2ba4();
  while (unaff_x19 != 0) {
    func_0x004b2bc8();
    func_0x004b2b68();
    func_0x004b2c3c();
    unaff_x19 = unaff_x24;
  }
  func_0x004b2c08();
  func_0x004b2d00();
  func_0x004b2e6c();
  func_0x00785620();
  func_0x004b2c00();
  func_0x004b2be8();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004b1fc0; end: 004b1fc3;  */

void FUN_004b1fc0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__00aba6c0,param_2);
  return;
}



/* Entry: 004b1fc4; end: 004b205f; -[KSCrashReportFilterPipeline initWithFilters:] */

undefined8 FUN_004b1fc4(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x24;
  
  FUN_004b2b54();
  func_0x004b2d08();
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b2bf0();
  func_0x004b2bb8(FUN_004b2060);
  func_0x004b2d14();
  func_0x004b2ba4();
  while (unaff_x19 != 0) {
    func_0x004b2bc8();
    func_0x004b2b68();
    func_0x004b2c3c();
    unaff_x19 = unaff_x24;
  }
  func_0x004b2c08();
  func_0x004b2d00();
  func_0x004b2ecc();
  func_0x00785620();
  func_0x004b2c70();
  func_0x004b2be8();
  return param_1;
}



/* Entry: 004b2060; end: 004b2063;  */

void FUN_004b2060(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__00aba6c0,param_2);
  return;
}



/* Entry: 004b2064; end: 004b2157; -[KSCrashReportFilterPipeline initWithFiltersArray:] */

ulong FUN_004b2064(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined8 extraout_x8;
  ulong unaff_x22;
  long unaff_x24;
  ulong uVar2;
  
  func_0x004b2e08();
  func_0x004b2bd8();
  func_0x004b2d1c(PTR_PTR_00ac3da8);
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x004b2d08();
    func_0x0077f120();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b2c2c();
    func_0x004b2b80();
    if (uVar1 != 0) {
      func_0x004b2ed8();
      do {
        uVar2 = 0;
        do {
          if (unaff_x24 != 0x100000cfeedfacf) {
            uVar1 = param_3;
            _objc_enumerationMutation();
          }
          func_0x004b2d98();
          func_0x004b2e48();
          if ((uVar1 & 1) == 0) {
            func_0x004b2e54();
          }
          else {
            func_0x004b2e60();
          }
          uVar2 = uVar2 + 1;
          in_ZR = uVar2 == unaff_x22;
        } while (uVar2 < unaff_x22);
        func_0x004b2b80();
        unaff_x22 = uVar1;
      } while (uVar1 != 0);
    }
    func_0x004b2be8();
    func_0x004b2ecc();
    func_0x0078e100();
    func_0x004b2c70();
  }
  func_0x004b2be8();
  func_0x004b2ca4(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x004b2b58();
  func_0x007836c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00787100();
  func_0x004b2be8();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return param_1;
}



/* Entry: 004b2158; end: 004b2197; -[KSCrashReportFilterPipeline addFilter:] */

void FUN_004b2158(void)

{
  undefined8 unaff_x20;
  
  FUN_004b2b54();
  func_0x007836c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00787100();
  func_0x004b2be8();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(unaff_x20);
  return;
}



/* Entry: 004b2198; end: 004b23db; -[KSCrashReportFilterPipeline filterReports:onCompletion:] */

void FUN_004b2198(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x004b2ddc();
  func_0x004b2bd8();
  func_0x004b2c34();
  lVar2 = param_1;
  func_0x007836c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00780e80();
  if (lVar3 == 0) {
    if (unaff_x20 != 0) {
      func_0x004b2df8();
      func_0x004b2cc4();
    }
  }
  else {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0x3032000000;
    pcStack_a8 = FUN_004b1af8;
    pcStack_a0 = FUN_004b1b20;
    uStack_98 = 0;
    puStack_e8 = &uStack_f0;
    uStack_f0 = 0;
    uStack_e0 = 0x3042000000;
    puStack_b8 = &uStack_c0;
    func_0x004b2ea4();
    _objc_initWeak(auStack_c8,0);
    puVar1 = PTR___NSConcreteStackBlock_00999f30;
    puStack_118 = PTR___NSConcreteStackBlock_00999f30;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_004b23dc;
    puStack_100 = &UNK_009e4b88;
    ppuVar4 = &puStack_118;
    puStack_f8 = &uStack_c0;
    func_0x00780e20();
    puStack_170 = puVar1;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_004b2414;
    puStack_158 = &UNK_009ecac8;
    func_0x004b2c34();
    lStack_150 = param_1;
    _objc_retain(ppuVar4);
    _objc_retain(lVar2);
    lStack_148 = lVar2;
    func_0x00780e20(&puStack_170);
    func_0x004b2de8();
    _objc_storeWeak(puStack_e8 + 5,puStack_b8[5]);
    func_0x00789e00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x007835a0();
    func_0x004b2c3c();
    func_0x004b2d00();
    _objc_release(ppuVar4);
    _objc_release(unaff_x20);
    func_0x004b2c08();
    func_0x004b2be0(&uStack_f0);
    _objc_destroyWeak(auStack_c8);
    func_0x004b2be0(&uStack_c0);
    _objc_release(uStack_98);
    func_0x004b2be0(&uStack_90);
  }
  func_0x004b2c70();
  func_0x004b2c00();
  func_0x004b2be8();
  return;
}



/* Entry: 004b23dc; end: 004b240f;  */

void FUN_004b23dc(void)

{
  func_0x004b2bf0();
  func_0x004b2c44(FUN_004b2410);
  return;
}



/* Entry: 004b2410; end: 004b2413;  */

void FUN_004b2410(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004b2414; end: 004b253b;  */

void FUN_004b2414(void)

{
  undefined8 uVar1;
  ulong extraout_x9;
  long unaff_x19;
  long unaff_x21;
  ulong unaff_x22;
  long lVar2;
  
  func_0x004b2ce8();
  func_0x004b2c34();
  if ((unaff_x19 == 0) || ((unaff_x22 & 1) == 0)) {
    if ((unaff_x22 & 1) == 0) {
      if (*(long *)(unaff_x21 + 0x30) != 0) {
        uVar1 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x10);
        goto LAB_004b2510;
      }
    }
    else if (unaff_x19 == 0) {
      lVar2 = *(long *)(unaff_x21 + 0x30);
      func_0x004b2d6c();
      func_0x00781e40();
      _objc_retainAutoreleasedReturnValue();
      func_0x004b2dc0();
      func_0x00782e20();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        func_0x004b2cb8(*(undefined8 *)(lVar2 + 0x10),lVar2,0);
      }
      func_0x004b2c9c();
      func_0x004b2c3c();
    }
  }
  else {
    func_0x004b2eb8(*(undefined8 *)(unaff_x21 + 0x40));
    if (extraout_x9 < *(ulong *)(unaff_x21 + 0x50)) {
      uVar1 = *(undefined8 *)(unaff_x21 + 0x28);
      func_0x00789e00(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x004b2e74(*(undefined8 *)(unaff_x21 + 0x48));
      func_0x007835a0(uVar1);
      func_0x004b2c70();
      func_0x004b2c08();
      goto LAB_004b2520;
    }
    if (*(long *)(unaff_x21 + 0x30) != 0) {
      uVar1 = *(undefined8 *)(*(long *)(unaff_x21 + 0x30) + 0x10);
LAB_004b2510:
      func_0x004b2e24(uVar1);
    }
  }
  (**(code **)(*(long *)(unaff_x21 + 0x38) + 0x10))();
LAB_004b2520:
  func_0x004b2c00();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 004b253c; end: 004b25cb;  */

void FUN_004b253c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x004b2c10();
  func_0x004b2e9c();
  func_0x004b2da8(unaff_x20 + 0x30,*(undefined8 *)(unaff_x19 + 0x30));
  func_0x004b2da8(unaff_x20 + 0x38,*(undefined8 *)(unaff_x19 + 0x38));
  __Block_object_assign(unaff_x20 + 0x40,*(undefined8 *)(unaff_x19 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)
            (unaff_x20 + 0x48,*(undefined8 *)(unaff_x19 + 0x48),8);
  return;
}



/* Entry: 004b25cc; end: 004b25cf; -[KSCrashReportFilterPipeline filters] */

undefined8 FUN_004b25cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004b25d0; end: 004b25ef; -[KSCrashReportFilterPipeline setFilters:] */

void FUN_004b25d0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004b2b54();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004b25f0; end: 004b25f3; -[KSCrashReportFilterPipeline .cxx_destruct] */

void FUN_004b25f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004b25f4; end: 004b2693; +[KSCrashReportFilterSubset filterWithKeys:] */

void FUN_004b25f4(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x24;
  
  func_0x004b2b94();
  func_0x004b2d08();
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b2bf0();
  func_0x004b2bb8(FUN_004b2694);
  func_0x004b2d14();
  func_0x004b2ba4();
  while (unaff_x19 != 0) {
    func_0x004b2bc8();
    func_0x004b2b68();
    func_0x004b2c3c();
    unaff_x19 = unaff_x24;
  }
  func_0x004b2c08();
  func_0x004b2d00();
  func_0x004b2e6c();
  func_0x00785a20();
  func_0x004b2c00();
  func_0x004b2be8();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004b2694; end: 004b2697;  */

void FUN_004b2694(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__00aba6c0,param_2);
  return;
}



/* Entry: 004b2698; end: 004b2733; -[KSCrashReportFilterSubset initWithKeys:] */

undefined8 FUN_004b2698(undefined8 param_1)

{
  long unaff_x19;
  long unaff_x24;
  
  FUN_004b2b54();
  func_0x004b2d08();
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b2bf0();
  func_0x004b2bb8(FUN_004b2734);
  func_0x004b2d14();
  func_0x004b2ba4();
  while (unaff_x19 != 0) {
    func_0x004b2bc8();
    func_0x004b2b68();
    func_0x004b2c3c();
    unaff_x19 = unaff_x24;
  }
  func_0x004b2c08();
  func_0x004b2d00();
  func_0x004b2ecc();
  func_0x00785a20();
  func_0x004b2c70();
  func_0x004b2be8();
  return param_1;
}



/* Entry: 004b2734; end: 004b2737;  */

void FUN_004b2734(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077e730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__00aba6c0,param_2);
  return;
}



/* Entry: 004b2738; end: 004b282b; -[KSCrashReportFilterSubset initWithKeysArray:] */

/* WARNING: Removing unreachable block (ram,0x004b28e8) */
/* WARNING: Removing unreachable block (ram,0x004b2964) */

ulong FUN_004b2738(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar6;
  ulong uVar7;
  ulong unaff_x22;
  long unaff_x24;
  ulong uVar8;
  undefined8 uVar9;
  
  func_0x004b2e08();
  func_0x004b2bd8();
  func_0x004b2d1c(PTR_PTR_00ac3db0);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x004b2d08();
    func_0x0077f120();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b2c2c();
    func_0x004b2b80();
    if (uVar1 != 0) {
      func_0x004b2ed8();
      do {
        uVar8 = 0;
        do {
          if (unaff_x24 != 0x100000cfeedfacf) {
            uVar1 = param_3;
            _objc_enumerationMutation();
          }
          func_0x004b2d98();
          func_0x004b2e48();
          if ((uVar1 & 1) == 0) {
            func_0x004b2e54();
          }
          else {
            func_0x004b2e60();
          }
          uVar8 = uVar8 + 1;
          in_ZR = uVar8 == unaff_x22;
        } while (uVar8 < unaff_x22);
        func_0x004b2b80();
        unaff_x22 = uVar1;
      } while (uVar1 != 0);
    }
    uVar1 = 0;
    func_0x004b2be8();
    func_0x004b2ecc();
    func_0x0078ea40();
    func_0x004b2c70();
  }
  func_0x004b2be8();
  func_0x004b2ca4(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x004b2ddc();
    func_0x004b2e08();
    func_0x004b2bd8();
    func_0x004b2c34();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x00780e80(param_3);
    func_0x0077f1a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b2c2c();
    uVar8 = param_3;
    func_0x004b2c68();
    while (uVar8 != 0) {
      uVar6 = 0;
      do {
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
        func_0x00781fe0(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x007880e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x004b2c68();
        while (uVar5 != 0) {
          uVar7 = 0;
          do {
            uVar9 = *(undefined8 *)(uVar7 * 8);
            func_0x00783700();
            _objc_retainAutoreleasedReturnValue();
            func_0x00788240(uVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x0078f4a0(puVar3);
            _objc_release(uVar9);
            func_0x004b2c00();
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar5);
          uVar5 = uVar4;
          func_0x004b2c68();
        }
        _objc_release(uVar4);
        func_0x0077e720(puVar2);
        func_0x004b2c9c();
        uVar6 = uVar6 + 1;
        in_ZR = uVar6 == uVar8;
      } while (uVar6 < uVar8);
      uVar8 = param_3;
      func_0x004b2c68();
    }
    _objc_release(param_3);
    if (param_1 != 0) {
      func_0x004b2cc4(*(undefined8 *)(param_1 + 0x10),param_1,puVar2);
    }
    func_0x004b2c00();
    func_0x004b2be8();
    _objc_release(param_3);
    func_0x004b2ca4(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x004b2ddc();
      func_0x004b2bd8();
      func_0x004b2c34();
      uVar1 = param_1;
      func_0x00789ee0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar1 == 0) {
        func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
        _objc_retainAutoreleasedReturnValue();
        func_0x00789ee0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x004b2c08();
        uVar1 = param_1;
      }
      func_0x004b2c00();
      func_0x004b2be8();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
      return uVar1;
    }
    return param_3;
  }
  return param_1;
}



/* Entry: 004b282c; end: 004b2a8b; -[KSCrashReportFilterSubset filterReports:onCompletion:] */

/* WARNING: Removing unreachable block (ram,0x004b28e8) */
/* WARNING: Removing unreachable block (ram,0x004b2964) */

void FUN_004b282c(ulong param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x8;
  ulong unaff_x19;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  
  func_0x004b2ddc();
  func_0x004b2e08();
  func_0x004b2bd8();
  func_0x004b2c34();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x00780e80();
  func_0x0077f1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b2c2c();
  uVar2 = unaff_x19;
  func_0x004b2c68();
  while (uVar2 != 0) {
    uVar7 = 0;
    do {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
      func_0x00781fe0(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x007880e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x004b2c68();
      while (uVar5 != 0) {
        uVar8 = 0;
        do {
          uVar9 = *(undefined8 *)(uVar8 * 8);
          func_0x00783700();
          _objc_retainAutoreleasedReturnValue();
          func_0x00788240(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x0078f4a0(puVar3);
          _objc_release(uVar9);
          func_0x004b2c00();
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
        uVar5 = uVar4;
        func_0x004b2c68();
      }
      _objc_release(uVar4);
      func_0x0077e720(puVar1);
      func_0x004b2c9c();
      uVar7 = uVar7 + 1;
      in_ZR = uVar7 == uVar2;
    } while (uVar7 < uVar2);
    uVar2 = unaff_x19;
    func_0x004b2c68();
  }
  _objc_release(unaff_x19);
  if (unaff_x20 != 0) {
    func_0x004b2cc4(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20,puVar1);
  }
  func_0x004b2c00();
  func_0x004b2be8();
  _objc_release(unaff_x19);
  func_0x004b2ca4(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x004b2ddc();
    func_0x004b2bd8();
    func_0x004b2c34();
    lVar6 = unaff_x20;
    func_0x00789ee0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988);
      _objc_retainAutoreleasedReturnValue();
      func_0x00789ee0(unaff_x20);
      _objc_retainAutoreleasedReturnValue();
      func_0x004b2c08();
      lVar6 = unaff_x20;
    }
    func_0x004b2c00();
    func_0x004b2be8();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar6);
    return;
  }
  return;
}



/* Entry: 004b2a8c; end: 004b2b2f; -[KSCrashReportFilterSubset findObjFromReport:byKeyPath:] */

void FUN_004b2a8c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  
  func_0x004b2ddc();
  func_0x004b2bd8();
  func_0x004b2c34();
  lVar1 = unaff_x19;
  func_0x00789ee0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                    &PTR____CFConstantStringClassReference_00a29260);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b2c08();
    lVar1 = unaff_x19;
  }
  func_0x004b2c00();
  func_0x004b2be8();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar1);
  return;
}



/* Entry: 004b2b30; end: 004b2b33; -[KSCrashReportFilterSubset keyPaths] */

undefined8 FUN_004b2b30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004b2b34; end: 004b2b53; -[KSCrashReportFilterSubset setKeyPaths:] */

void FUN_004b2b34(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_004b2b54();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004b2b54; end: 004b2eeb; -[KSCrashReportFilterSubset .cxx_destruct] */

void FUN_004b2b54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 004b2eec; end: 004b3043; +[KSCrashReportFilterSnapAir filterForSnapAir] */

void FUN_004b2eec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_00ac2fa0;
  func_0x00783640(PTR_PTR_00ac2fa0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac2fa8;
  func_0x00783620(PTR_PTR_00ac2fa8,param_2,&PTR____CFConstantStringClassReference_00a292c0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_00ac2fb0;
  func_0x00783600(PTR_PTR_00ac2fb0,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_00ac2f38;
  func_0x007835e0(PTR_PTR_00ac2f38,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 004b3044; end: 004b304b;  */

/* WARNING: Removing unreachable block (ram,0x004b30e8) */

void FUN_004b3044(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar4 = param_1;
  _objc_retain();
  func_0x004b387c();
  func_0x004b387c();
  func_0x004b3860();
  puVar1 = PTR_s_intValue_00abc970;
  puVar2 = PTR_s_objectAtIndex__00abd490;
  puVar3 = PTR_s_objectForKey__00abd4b8;
  do {
    uVar5 = unaff_x20;
    PTR_s_intValue_00abc970 = puVar1;
    PTR_s_objectAtIndex__00abd490 = puVar2;
    PTR_s_objectForKey__00abd4b8 = puVar3;
    if (uVar4 == 0) {
LAB_004b321c:
      func_0x004b3850();
      _objc_retain(param_1);
      uVar4 = uVar5;
LAB_004b3238:
      func_0x004b3850();
      func_0x004b3858();
      if (*(long *)PTR____stack_chk_guard_00999f88 != lVar7) {
        ___stack_chk_fail();
        func_0x004b3894();
        _objc_retain(uVar4);
        while ((uVar5 = uVar4, func_0x007882e0(), uVar5 != 0 &&
               (uVar5 = uVar4, func_0x00780140(), (int)uVar5 == 0x2f))) {
          func_0x00792440();
          _objc_retainAutoreleasedReturnValue();
          func_0x004b3874();
        }
        func_0x00780860(uVar4);
        _objc_retainAutoreleasedReturnValue();
        FUN_004b304c(param_3,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x004b3858();
        func_0x004b3874();
        func_0x004b3850();
        param_1 = param_3;
      }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
      return;
    }
    uVar9 = 0;
    do {
      uVar8 = *(ulong *)(uVar9 * 8);
      uVar5 = param_1;
      _objc_opt_respondsToSelector(param_1,puVar3);
      if ((uVar5 & 1) == 0) {
        uVar5 = param_1;
        _objc_opt_respondsToSelector(param_1,puVar2);
        if (((uVar5 & 1) == 0) ||
           (uVar5 = uVar8, _objc_opt_respondsToSelector(uVar8,puVar1), (uVar5 & 1) == 0)) {
LAB_004b3230:
          func_0x004b3850();
          param_1 = 0;
          goto LAB_004b3238;
        }
        puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_00ac2988);
        uVar5 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar6);
        if ((uVar5 & 1) != 0) {
          _objc_retain(uVar8);
          uVar5 = uVar8;
          func_0x007882e0();
          if (uVar5 == 0) {
            _objc_release(uVar8);
          }
          else {
            uVar5 = uVar8;
            func_0x00780140();
            _objc_release(uVar8);
            if (9 < (int)uVar5 - 0x30U) goto LAB_004b3230;
          }
        }
        func_0x007871a0(uVar8);
        func_0x00789e00();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00789ea0();
        _objc_retainAutoreleasedReturnValue();
      }
      unaff_x20 = param_1;
      func_0x004b3858();
      uVar5 = uVar4;
      if (param_1 == 0) goto LAB_004b321c;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
    func_0x004b3860();
    uVar4 = unaff_x20;
    puVar1 = PTR_s_intValue_00abc970;
    puVar2 = PTR_s_objectAtIndex__00abd490;
    puVar3 = PTR_s_objectForKey__00abd4b8;
  } while( true );
}



/* Entry: 004b304c; end: 004b327f;  */

/* WARNING: Removing unreachable block (ram,0x004b30e8) */

void FUN_004b304c(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar4 = param_1;
  _objc_retain();
  func_0x004b387c();
  func_0x004b387c();
  func_0x004b3860();
  puVar1 = PTR_s_intValue_00abc970;
  puVar2 = PTR_s_objectAtIndex__00abd490;
  puVar3 = PTR_s_objectForKey__00abd4b8;
  do {
    uVar5 = unaff_x20;
    PTR_s_intValue_00abc970 = puVar1;
    PTR_s_objectAtIndex__00abd490 = puVar2;
    PTR_s_objectForKey__00abd4b8 = puVar3;
    if (uVar4 == 0) {
LAB_004b321c:
      func_0x004b3850();
      _objc_retain(param_1);
      uVar4 = uVar5;
LAB_004b3238:
      func_0x004b3850();
      func_0x004b3858();
      if (*(long *)PTR____stack_chk_guard_00999f88 != lVar7) {
        ___stack_chk_fail();
        func_0x004b3894();
        _objc_retain(uVar4);
        while ((uVar5 = uVar4, func_0x007882e0(), uVar5 != 0 &&
               (uVar5 = uVar4, func_0x00780140(), (int)uVar5 == 0x2f))) {
          func_0x00792440();
          _objc_retainAutoreleasedReturnValue();
          func_0x004b3874();
        }
        func_0x00780860(uVar4);
        _objc_retainAutoreleasedReturnValue();
        FUN_004b304c(param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x004b3858();
        func_0x004b3874();
        func_0x004b3850();
        param_1 = param_2;
      }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
      return;
    }
    uVar9 = 0;
    do {
      uVar8 = *(ulong *)(uVar9 * 8);
      uVar5 = param_1;
      _objc_opt_respondsToSelector(param_1,puVar3);
      if ((uVar5 & 1) == 0) {
        uVar5 = param_1;
        _objc_opt_respondsToSelector(param_1,puVar2);
        if (((uVar5 & 1) == 0) ||
           (uVar5 = uVar8, _objc_opt_respondsToSelector(uVar8,puVar1), (uVar5 & 1) == 0)) {
LAB_004b3230:
          func_0x004b3850();
          param_1 = 0;
          goto LAB_004b3238;
        }
        puVar6 = PTR__OBJC_CLASS___NSString_00ac2988;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_00ac2988);
        uVar5 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar6);
        if ((uVar5 & 1) != 0) {
          _objc_retain(uVar8);
          uVar5 = uVar8;
          func_0x007882e0();
          if (uVar5 == 0) {
            _objc_release(uVar8);
          }
          else {
            uVar5 = uVar8;
            func_0x00780140();
            _objc_release(uVar8);
            if (9 < (int)uVar5 - 0x30U) goto LAB_004b3230;
          }
        }
        func_0x007871a0(uVar8);
        func_0x00789e00();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00789ea0();
        _objc_retainAutoreleasedReturnValue();
      }
      unaff_x20 = param_1;
      func_0x004b3858();
      uVar5 = uVar4;
      if (param_1 == 0) goto LAB_004b321c;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
    func_0x004b3860();
    uVar4 = unaff_x20;
    puVar1 = PTR_s_intValue_00abc970;
    puVar2 = PTR_s_objectAtIndex__00abd490;
    puVar3 = PTR_s_objectForKey__00abd4b8;
  } while( true );
}



/* Entry: 004b3280; end: 004b3287;  */

void FUN_004b3280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x004b3894(param_1,param_3);
  _objc_retain();
  while ((lVar1 = unaff_x20, func_0x007882e0(), lVar1 != 0 &&
         (lVar1 = unaff_x20, func_0x00780140(), (int)lVar1 == 0x2f))) {
    func_0x00792440();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b3874();
  }
  func_0x00780860(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
  FUN_004b304c();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b3858();
  func_0x004b3874();
  func_0x004b3850();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(unaff_x19);
  return;
}



/* Entry: 004b3288; end: 004b333b;  */

void FUN_004b3288(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x004b3894();
  _objc_retain();
  while ((lVar1 = unaff_x20, func_0x007882e0(), lVar1 != 0 &&
         (lVar1 = unaff_x20, func_0x00780140(), (int)lVar1 == 0x2f))) {
    func_0x00792440();
    _objc_retainAutoreleasedReturnValue();
    func_0x004b3874();
  }
  func_0x00780860(unaff_x20);
  _objc_retainAutoreleasedReturnValue();
  FUN_004b304c();
  _objc_retainAutoreleasedReturnValue();
  func_0x004b3858();
  func_0x004b3874();
  func_0x004b3850();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(unaff_x19);
  return;
}



/* Entry: 004b333c; end: 004b333f;  */

void FUN_004b333c(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *unaff_x20;
  
  func_0x004b388c();
  _objc_retain();
  func_0x004b387c();
  func_0x004b3884();
  puVar3 = PTR__OBJC_CLASS___NSException_00ac2f30;
  if (param_3 == 0) {
    func_0x007921a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00782f20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    func_0x004b3850();
    _objc_exception_throw(puVar3);
LAB_004b34a8:
    ppuVar2 = &PTR____CFConstantStringClassReference_00a294a0;
  }
  else {
    func_0x004b3884();
    func_0x00789e00();
    _objc_retainAutoreleasedReturnValue();
    FUN_004b3764();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x20;
    _objc_opt_respondsToSelector();
    if (((ulong)puVar3 & 1) != 0) {
      func_0x0078f4a0(unaff_x20);
LAB_004b3410:
      func_0x004b38a0();
      _objc_release(param_4);
      func_0x004b3850();
      func_0x004b3858();
      goto code_r0x0077aa60;
    }
    puVar3 = param_4;
    _objc_opt_respondsToSelector(param_4,PTR_s_intValue_00abc970);
    if (((ulong)puVar3 & 1) == 0) goto LAB_004b34a8;
    puVar3 = unaff_x20;
    _objc_opt_respondsToSelector(unaff_x20,PTR_s_replaceObjectAtIndex_withObject__00abda80);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x007871a0(param_4);
      func_0x0078b5c0(unaff_x20);
      goto LAB_004b3410;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_00a29480;
  }
  func_0x004b3884();
  puVar3 = puVar3 + -1;
  func_0x00792300();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b3830();
  func_0x00782f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  _objc_retain(ppuVar2);
  _objc_retain(puVar1);
  func_0x00780860(puVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_004b3340(puVar1,ppuVar2,puVar3);
  func_0x004b3874();
  func_0x004b3858();
code_r0x0077aa60:
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 004b3340; end: 004b351b;  */

void FUN_004b3340(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *unaff_x20;
  
  func_0x004b388c();
  _objc_retain();
  func_0x004b387c();
  func_0x004b3884();
  puVar3 = PTR__OBJC_CLASS___NSException_00ac2f30;
  if (param_2 == 0) {
    func_0x007921a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00782f20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    func_0x004b3850();
    _objc_exception_throw(puVar3);
LAB_004b34a8:
    ppuVar2 = &PTR____CFConstantStringClassReference_00a294a0;
  }
  else {
    func_0x004b3884();
    func_0x00789e00();
    _objc_retainAutoreleasedReturnValue();
    FUN_004b3764();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x20;
    _objc_opt_respondsToSelector();
    if (((ulong)puVar3 & 1) != 0) {
      func_0x0078f4a0(unaff_x20);
LAB_004b3410:
      func_0x004b38a0();
      _objc_release(param_3);
      func_0x004b3850();
      func_0x004b3858();
      goto code_r0x0077aa60;
    }
    puVar3 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_intValue_00abc970);
    if (((ulong)puVar3 & 1) == 0) goto LAB_004b34a8;
    puVar3 = unaff_x20;
    _objc_opt_respondsToSelector(unaff_x20,PTR_s_replaceObjectAtIndex_withObject__00abda80);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x007871a0(param_3);
      func_0x0078b5c0(unaff_x20);
      goto LAB_004b3410;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_00a29480;
  }
  func_0x004b3884();
  puVar3 = puVar3 + -1;
  func_0x00792300();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_opt_class();
  func_0x007921a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x004b3830();
  func_0x00782f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_exception_throw();
  _objc_retain(ppuVar2);
  _objc_retain(puVar1);
  func_0x00780860(puVar3);
  _objc_retainAutoreleasedReturnValue();
  FUN_004b3340(puVar1,ppuVar2,puVar3);
  func_0x004b3874();
  func_0x004b3858();
code_r0x0077aa60:
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 004b351c; end: 004b351f;  */

void FUN_004b351c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00780860(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_004b3340(param_1,param_3,param_4);
  func_0x004b3874();
  func_0x004b3858();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 004b3520; end: 004b3593;  */

void FUN_004b3520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00780860(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_004b3340(param_1,param_2,param_3);
  func_0x004b3874();
  func_0x004b3858();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004b3594; end: 004b359b;  */

void FUN_004b3594(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined **ppuVar3;
  ulong unaff_x20;
  undefined **ppuVar4;
  
  func_0x004b388c();
  func_0x004b387c();
  func_0x004b3884();
  func_0x00789e00();
  _objc_retainAutoreleasedReturnValue();
  FUN_004b3764();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = unaff_x20;
  _objc_opt_respondsToSelector();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    _objc_opt_respondsToSelector(param_3,PTR_s_intValue_00abc970);
    if ((uVar2 & 1) == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_00a29500;
    }
    else {
      uVar2 = unaff_x20;
      _objc_opt_respondsToSelector(unaff_x20,PTR_s_removeObjectAtIndex__00abda30);
      if ((uVar2 & 1) != 0) {
        func_0x007871a0(param_3);
        func_0x0078b480(unaff_x20);
        goto LAB_004b364c;
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_00a294e0;
    }
    func_0x004b3884();
    func_0x00792300();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    _objc_opt_class();
    ppuVar3 = ppuVar4;
    func_0x007921a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x004b3830();
    func_0x00782f20();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    _objc_exception_throw();
    func_0x004b388c();
    func_0x00780860(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    FUN_004b359c(ppuVar4,ppuVar3);
    func_0x004b3874();
  }
  else {
    func_0x0078b4a0(unaff_x20);
LAB_004b364c:
    func_0x004b3858();
    func_0x004b38a0();
    func_0x004b3850();
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}


