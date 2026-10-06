/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0043fd54; end: 0043fdeb;  */

void FUN_0043fd54(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  return;
}



/* Entry: 0043fdec; end: 00440113; -[SCDiskUsageResult enumerateMetrics:] */

/* WARNING: Removing unreachable block (ram,0x0043ffe0) */

void FUN_0043fdec(long param_1,undefined8 param_2,undefined8 *param_3,int param_4,dword *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lStack_200;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar11 = param_3;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  if ((lVar1 != 0) && (puVar11 = (undefined8 *)0x0, *(long *)(param_1 + 0x18) != 0)) {
    func_0x0077f160();
    _objc_retainAutoreleasedReturnValue();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lVar2 = param_1;
    func_0x0077c740();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = &uStack_1b0;
    param_4 = (int)auStack_f0;
    param_5 = &MACH_HEADER.ncmds;
    lStack_200 = lVar2;
    func_0x00780ea0();
    if (lStack_200 != 0) {
      lVar12 = *plStack_1a0;
      do {
        lVar14 = 0;
        do {
          if (*plStack_1a0 != lVar12) {
            _objc_enumerationMutation(lVar2);
          }
          puVar4 = PTR_PTR_00ac2d00;
          uVar15 = *(undefined8 *)(lStack_1a8 + lVar14 * 8);
          uVar3 = uVar15;
          func_0x0078a400(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00791660(puVar4);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)param_3[2])(param_3,uVar15,puVar4);
          _objc_release(puVar4);
          _objc_release(uVar3);
          puVar4 = PTR_PTR_00ac2d00;
          uVar3 = uVar15;
          func_0x0078a400(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00791660();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          uVar3 = uVar15;
          func_0x00792340(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x0078b680(uVar15);
          lVar5 = param_1;
          func_0x0077c740();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          lVar6 = lVar5;
          func_0x00780ea0();
          while (lVar6 != 0) {
            lVar13 = 0;
            do {
              uVar16 = *(undefined8 *)(lVar13 * 8);
              uVar3 = uVar16;
              func_0x0078a400(uVar16);
              _objc_retainAutoreleasedReturnValue();
              uVar15 = uVar3;
              func_0x00788240();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar4;
              func_0x00791e80();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)param_3[2])(param_3,uVar16,puVar7);
              _objc_release(puVar7);
              _objc_release(uVar15);
              _objc_release(uVar3);
              lVar13 = lVar13 + 1;
            } while (lVar6 != lVar13);
            lVar6 = lVar5;
            func_0x00780ea0();
          }
          _objc_release(lVar5);
          _objc_release(puVar4);
          lVar14 = lVar14 + 1;
        } while (lVar14 != lStack_200);
        puVar11 = &uStack_1b0;
        param_4 = (int)auStack_f0;
        param_5 = &MACH_HEADER.ncmds;
        lStack_200 = lVar2;
        func_0x00780ea0();
      } while (lStack_200 != 0);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar11);
    _objc_retain(puVar11);
    puVar8 = puVar11;
    if (param_4 != 0) {
      func_0x00791a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
    }
    puVar10 = puVar8;
    if (((long)param_5 < 1) || (puVar9 = puVar8, func_0x00780e80(), puVar9 <= param_5)) {
      _objc_retain(puVar8);
    }
    else {
      func_0x00792300(puVar8);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar8);
    _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar10);
    return;
  }
  return;
}



/* Entry: 00440114; end: 004401d3; -[SCDiskUsageResult _determineOrdering:sort:limit:] */

void FUN_00440114(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = param_3;
  if (param_4 != 0) {
    func_0x00791a80(param_3,param_2,PTR_s_compare__00abaea0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  uVar3 = uVar1;
  if (((long)param_5 < 1) || (uVar2 = uVar1, func_0x00780e80(), uVar2 <= param_5)) {
    _objc_retain(uVar1);
  }
  else {
    func_0x00792300(uVar1,param_2,0,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 004401d4; end: 004401db; -[SCDiskUsageResult rootFileCount] */

undefined8 FUN_004401d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 004401dc; end: 004401e3; -[SCDiskUsageResult rootRecursiveSizeBytes] */

undefined8 FUN_004401dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 004401e4; end: 0044021f; -[SCDiskUsageResult .cxx_destruct] */

void FUN_004401e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00440220; end: 004402a7; -[SCFileIOErrorMetric initWithFileIOType:fileIOCount:fileIOErrorCount:] */

undefined1 *
FUN_00440220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac3ba0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00781fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 004402a8; end: 00440357; -[SCFileIOErrorMetric logFileIOWithError:] */

void FUN_004402a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x0077c920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789f00(uVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x007871a0();
    func_0x00789c60(puVar4,param_2,(int)uVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0(*(undefined8 *)(param_1 + 0x20),param_2,puVar4,lVar1);
    _objc_release(puVar4);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(lVar1);
    return;
  }
  return;
}



/* Entry: 00440358; end: 004403eb; -[SCFileIOErrorMetric topErrorCodesWithLimit:] */

void FUN_00440358(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00788120(uVar1,param_2,&PTR___NSConcreteGlobalBlock_009e42d0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00780e80();
  if (uVar2 <= param_3) {
    param_3 = uVar2;
  }
  uVar2 = uVar1;
  func_0x00792300(uVar1,param_2,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x007820a0(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 004403ec; end: 0044040b;  */

bool FUN_004403ec(undefined8 param_1,long param_2)

{
  func_0x007806a0(param_2);
  return param_2 == 0;
}



/* Entry: 0044040c; end: 0044044f; -[SCFileIOErrorMetric _errorDescription:] */

void FUN_0044040c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00780460();
  func_0x0078c100(puVar1,param_2,&PTR____CFConstantStringClassReference_00a248a0);
  return;
}



/* Entry: 00440450; end: 004404bf; -[SCFileIOErrorMetric compare:] */

undefined8 FUN_00440450(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar3 = *(ulong *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00792f20();
  if (uVar3 == uVar1) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(ulong *)(param_1 + 8);
    uVar1 = param_3;
    func_0x00792f20();
    uVar2 = 1;
    if (uVar3 < uVar1) {
      uVar2 = 0xffffffffffffffff;
    }
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 004404c0; end: 004405a7; -[SCFileIOErrorMetric isEqual:] */

long FUN_004404c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    lVar2 = 1;
    goto LAB_0044058c;
  }
  lVar2 = param_1;
  _objc_opt_class(param_1);
  lVar1 = param_3;
  func_0x00787ac0(param_3,param_2,lVar2);
  if ((int)lVar1 == 0) {
    lVar2 = 0;
    goto LAB_0044058c;
  }
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00792f20();
  if (lVar2 == *(long *)(param_1 + 8)) {
    lVar2 = param_3;
    func_0x00783420();
    if (lVar2 != *(long *)(param_1 + 0x10)) goto LAB_00440580;
    lVar2 = param_3;
    func_0x00783440();
    if (lVar2 != *(long *)(param_1 + 0x18)) goto LAB_00440580;
    lVar1 = param_3;
    func_0x00783460(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00787880();
    _objc_release(lVar1);
  }
  else {
LAB_00440580:
    lVar2 = 0;
  }
  _objc_release(param_3);
LAB_0044058c:
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 004405a8; end: 0044064b; -[SCFileIOErrorMetric hash] */

ulong FUN_004405a8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong auStack_48 [4];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = *(ulong *)(param_1 + 8);
  auStack_48[2] = *(undefined8 *)(param_1 + 0x18);
  auStack_48[1] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x007843a0();
  auStack_48[3] = lVar1;
  lVar2 = 8;
  do {
    uVar3 = *(ulong *)((long)auStack_48 + lVar2) | uVar3 << 0x20;
    uVar3 = ~uVar3 + uVar3 * 0x40000;
    uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
    uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x20);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return uVar3;
  }
  ___stack_chk_fail();
  return *(ulong *)(lVar1 + 8);
}



/* Entry: 0044064c; end: 00440653; -[SCFileIOErrorMetric type] */

undefined8 FUN_0044064c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00440654; end: 0044065b; -[SCFileIOErrorMetric fileIOCount] */

undefined8 FUN_00440654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0044065c; end: 00440663; -[SCFileIOErrorMetric fileIOErrorCount] */

undefined8 FUN_0044065c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00440664; end: 0044066b; -[SCFileIOErrorMetric fileIOErrorCountByCode] */

undefined8 FUN_00440664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0044066c; end: 00440677; -[SCFileIOErrorMetric .cxx_destruct] */

void FUN_0044066c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x20,0);
  return;
}



/* Entry: 00440678; end: 00440777; -[SCFileIOErrorMonitor init] */

undefined8 * FUN_00440678(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_00ac3ba8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    func_0x00785a40();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    uVar4 = puVar1[1];
    _objc_retain(puVar1);
    func_0x0078a560(uVar4);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 00440778; end: 0044077f;  */

void FUN_00440778(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077d910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__resetErrorMetrics_00aba338);
  return;
}



/* Entry: 00440780; end: 004407d3; +[SCFileIOErrorMonitor shared] */

void FUN_00440780(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b5fdc8 != -1) {
    _dispatch_once(0xb5fdc8,&PTR___NSConcreteGlobalBlock_009e42f0);
  }
  uVar1 = uRam0000000000b5fdc0;
  _objc_retain(uRam0000000000b5fdc0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004407d4; end: 004407ff;  */

void FUN_004407d4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac2cf0;
  _objc_alloc_init();
  uVar1 = puRam0000000000b5fdc0;
  puRam0000000000b5fdc0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00440800; end: 0044086f; -[SCFileIOErrorMonitor _resetErrorMetrics] */

void FUN_00440800(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  func_0x0077f120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR_PTR_00ac2d28;
  _objc_alloc(PTR_PTR_00ac2d28);
  func_0x007855a0();
  func_0x0077e720(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00440870; end: 0044088b; -[SCFileIOErrorMonitor _nameForFileIOType:] */

undefined ** FUN_00440870(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_00a25200;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a212a0;
  }
  return ppuVar1;
}



/* Entry: 0044088c; end: 00440923; -[SCFileIOErrorMonitor logFileWriteWithError:type:] */

void FUN_0044088c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_00440924;
  puStack_50 = &UNK_009e4310;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x0078a560(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 00440924; end: 00440967;  */

void FUN_00440924(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x0078c0c0(uVar1,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x007887c0();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00440968; end: 00440a37; -[SCFileIOErrorMonitor generateReport:] */

void FUN_00440968(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCPromise_00ac2d30;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_00440a38;
  puStack_50 = &UNK_009e4340;
  lStack_48 = param_1;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  _objc_retain();
  _objc_retain(param_3);
  func_0x0078a560(uVar3,param_2,&puStack_68);
  puVar2 = puVar1;
  func_0x00783be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_40);
  _objc_release(uStack_38);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00440a38; end: 00440b13;  */

void FUN_00440a38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  func_0x00781fe0(PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x0078c0c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0077d420(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))(lVar4,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 != 0) {
    func_0x0077e4e0(puVar1);
  }
  _objc_release(lVar4);
  _objc_release(uVar2);
  func_0x0077d900(*(undefined8 *)(param_1 + 0x20));
  func_0x00780740(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00440b14; end: 00440b4f;  */

void FUN_00440b14(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  return;
}



/* Entry: 00440b50; end: 00440b7f; -[SCFileIOErrorMonitor .cxx_destruct] */

void FUN_00440b50(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00440b80; end: 00440b8b; -[SCFileTrasher moveFileToTrash:error:] */

void FUN_00440b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0077d410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__moveItemAtURL_isDirectory_error_00aba1f8,param_3,0,param_4);
  return;
}



/* Entry: 00440b8c; end: 00440b97; -[SCFileTrasher moveDirectoryToTrash:error:] */

void FUN_00440b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0077d410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__moveItemAtURL_isDirectory_error_00aba1f8,param_3,1,param_4);
  return;
}



/* Entry: 00440b98; end: 00440d17; -[SCFileTrasher clearTrashAsync:] */

void FUN_00440b98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
  }
  else {
    func_0x00780e20();
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar2);
    uVar2 = 0x11;
    func_0x00612910(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_00999f30;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x440c94;
    puStack_48 = &UNK_009e3670;
    lStack_40 = lVar1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    _objc_retain(lVar1);
    _dispatch_async(uVar2,&puStack_60);
    _objc_release(uVar2);
    _objc_release(lStack_38);
    _objc_release(lStack_40);
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 00440d18; end: 00440e27; -[SCFileTrasher _determineTrashDirectory] */

void FUN_00440d18(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    lVar5 = param_1;
    func_0x005b5cd8();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    _SCUUID();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00791e80(lVar5,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar5);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
    func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00781120();
    _objc_retain(0);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSURL_00ac2a90;
    func_0x00783500(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,lVar2,1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(0);
    _objc_release(lVar2);
    lVar5 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar5);
  return;
}



/* Entry: 00440e28; end: 00440f4f; -[SCFileTrasher _moveItemAtURL:isDirectory:error:] */

bool FUN_00440e28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lStack_58;
  
  _objc_retain(param_3);
  func_0x0077c760();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    bVar2 = false;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
    func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    _SCUUID();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x0077bae0(param_1,param_2,puVar4,param_4);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    func_0x007895e0(puVar3,param_2,param_3,lVar5,&lStack_58);
    lVar1 = lStack_58;
    _objc_retain(lStack_58);
    _objc_release(lVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    bVar2 = lVar1 == 0;
    if ((param_5 != (long *)0x0) && (lVar1 != 0)) {
      _objc_retainAutorelease(lVar1);
      *param_5 = lVar1;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 00440f50; end: 00440f5b; -[SCFileTrasher .cxx_destruct] */

void FUN_00440f50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00440f5c; end: 00440faf; +[SCFreeDiskSpaceMonitor performer] */

void FUN_00440f5c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b5fdd8 != -1) {
    _dispatch_once(0xb5fdd8,&PTR___NSConcreteGlobalBlock_009e4370);
  }
  uVar1 = uRam0000000000b5fdd0;
  _objc_retain(uRam0000000000b5fdd0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00440fb0; end: 00440ff3;  */

void FUN_00440fb0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
  _objc_alloc();
  func_0x00785a40();
  uVar1 = puRam0000000000b5fdd0;
  puRam0000000000b5fdd0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00440ff4; end: 00441047; +[SCFreeDiskSpaceMonitor sharedInstance] */

void FUN_00440ff4(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b5fde0 != -1) {
    _dispatch_once(0xb5fde0,&PTR___NSConcreteGlobalBlock_009e4390);
  }
  uVar1 = uRam0000000000b5fde8;
  _objc_retain(uRam0000000000b5fde8);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00441048; end: 00441073;  */

void FUN_00441048(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac2d38;
  _objc_alloc_init();
  uVar1 = puRam0000000000b5fde8;
  puRam0000000000b5fde8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00441074; end: 004410fb; -[SCFreeDiskSpaceMonitor init] */

undefined1 * FUN_00441074(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3bb0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac2d40;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_00ac2d48;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 8) = 99;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 004410fc; end: 004411a7; -[SCFreeDiskSpaceMonitor addListener:] */

void FUN_004410fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_00ac2d38;
  func_0x0078a680(PTR_PTR_00ac2d38);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_004411a8;
  puStack_48 = &UNK_009e36d0;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x0078a560(puVar1,param_2,&puStack_60);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 004411a8; end: 004411df;  */

void FUN_004411a8(long param_1)

{
  func_0x0077dc80(*(undefined8 *)(param_1 + 0x20));
  func_0x00782180(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0077e6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),PTR_s_addListener__00aba6b0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 004411e0; end: 004411e7; -[SCFreeDiskSpaceMonitor removeListener:] */

void FUN_004411e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0078b450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_removeListener__00abda20);
  return;
}



/* Entry: 004411e8; end: 004412f3; -[SCFreeDiskSpaceMonitor _startMonitoring] */

void FUN_004411e8(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00784820();
  if (iVar1 == 1) {
    func_0x0077d700(param_1);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50;
    func_0x00781c00(PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e7c0();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50;
    func_0x00781c00(PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e7c0();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_00ac2d58;
    func_0x007915a0(PTR_PTR_00ac2d58);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x0077d460(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078bbe0(puVar2,param_2,param_1,lVar3);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(puVar2);
    return;
  }
  return;
}



/* Entry: 004412f4; end: 0044136f; -[SCFreeDiskSpaceMonitor _processDiskChangeNotificationUpdate] */

void FUN_004412f4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac2d38;
  func_0x0078a680(PTR_PTR_00ac2d38);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a560();
  _objc_release(puVar1);
  return;
}



/* Entry: 00441370; end: 004413bf;  */

void FUN_00441370(double param_1,long param_2)

{
  _CACurrentMediaTime();
  if (5.0 < param_1 - *(double *)(*(long *)(param_2 + 0x20) + 0x20)) {
    func_0x0077d700();
    *(double *)(*(long *)(param_2 + 0x20) + 0x20) = param_1;
  }
  return;
}



/* Entry: 004413c0; end: 0044147b; -[SCFreeDiskSpaceMonitor _recheckFileSystemFreeDiskSpace] */

void FUN_004413c0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  puVar2 = PTR_PTR_00ac2d00;
  func_0x00783b20(PTR_PTR_00ac2d00,param_2,0);
  lVar3 = 2;
  if (0x7c < (ulong)puVar2 >> 0x16) {
    lVar3 = 3;
  }
  lVar1 = 1;
  if (0x18 < (ulong)puVar2 >> 0x17) {
    lVar1 = lVar3;
  }
  lVar3 = 0;
  if (4 < (ulong)puVar2 >> 0x17) {
    lVar3 = lVar1;
  }
  *(long *)(param_1 + 8) = lVar3;
  if (lVar4 != lVar3) {
    func_0x00782180(*(undefined8 *)(param_1 + 0x10));
  }
  puVar2 = PTR_PTR_00ac2d58;
  func_0x007915a0(PTR_PTR_00ac2d58);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x0077d460(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00791300(puVar2,param_2,lVar3,param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar2);
  return;
}



/* Entry: 0044147c; end: 004414df; -[SCFreeDiskSpaceMonitor runWithServiceTerm:] */

void FUN_0044147c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x0077d700(param_2);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x20) = param_1;
  func_0x0077d460(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00782920(param_4,param_3,param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 004414e0; end: 00441527; -[SCFreeDiskSpaceMonitor dedicatedQueue] */

void FUN_004414e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_opt_class();
  func_0x0078a680();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0078ace0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00441528; end: 00441537; -[SCFreeDiskSpaceMonitor _nextNotifier] */

void FUN_00441528(void)

{
                    /* WARNING: Could not recover jumptable at 0x0078c310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (0x4024000000000000,PTR_PTR_00ac2d60,PTR_s_scheduleAfterSeconds__00abddd0);
  return;
}



/* Entry: 00441538; end: 00441567; -[SCFreeDiskSpaceMonitor .cxx_destruct] */

void FUN_00441538(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00441568; end: 004415e3; +[SCGlobalDirectories globalDocumentDirectory:error:] */

void FUN_00441568(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_005b5b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077cba0(param_1,param_2,param_3,param_3,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004415e4; end: 004416ff; +[SCGlobalDirectories globalDocumentDirectory:excludeFromBackup:error:] */

void FUN_004415e4(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 *param_5
                 )

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_005b5b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077cba0(param_1,param_2,param_3,param_3,param_5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  if (param_1 == 0) {
    if (param_5 != (undefined8 *)0x0) {
      ppuVar2 = (undefined **)*param_5;
      _objc_retain(ppuVar2);
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar3 = ppuVar2;
        func_0x00788520(ppuVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
        goto LAB_004416d8;
      }
    }
    ppuVar3 = &PTR____CFConstantStringClassReference_00a25260;
  }
  else {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSURL_00ac2a90;
    func_0x00783500(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,param_1,1);
    _objc_retainAutoreleasedReturnValue();
    if ((param_4 != 0) && (ppuVar2 = ppuVar3, func_0x00787e60(), ((ulong)ppuVar2 & 1) == 0)) {
      func_0x0077e8c0(ppuVar3);
    }
    _objc_retain(param_1);
  }
LAB_004416d8:
  _objc_release(ppuVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00441700; end: 0044177b; +[SCGlobalDirectories globalCacheDirectory:error:] */

void FUN_00441700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x005b5c0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077cba0(param_1,param_2,param_3,param_3,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0044177c; end: 00441813; +[SCGlobalDirectories globalDocumentDirectory:migratedFromSubdirectory:error:] */

void FUN_0044177c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_005b5b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077cba0(param_1,param_2,param_3,param_4,param_5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00441814; end: 004418ab; +[SCGlobalDirectories globalCacheDirectory:migratedFromSubdirectory:error:] */

void FUN_00441814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x005b5c0c();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077cba0(param_1,param_2,param_3,param_4,param_5,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 004418ac; end: 00441937; +[SCGlobalDirectories _createGlobalScopedDirectoryForRoot:] */

void FUN_004418ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00791e80(param_3,param_2,&PTR____CFConstantStringClassReference_00a251c0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x007833a0();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    func_0x00781160(PTR_PTR_00ac2d00,param_2,param_3,1,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return;
}



/* Entry: 00441938; end: 00441a03; +[SCGlobalDirectories _migrateFromPath:toPath:] */

undefined1 FUN_00441938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac2d00;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00791ee0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00781160(puVar2,param_2,uVar1,1,0,0);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40(PTR__OBJC_CLASS___NSFileManager_00ac2b30);
  _objc_retainAutoreleasedReturnValue();
  func_0x007895c0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar2);
  return 1;
}



/* Entry: 00441a04; end: 00441c6b; +[SCGlobalDirectories _globalDirectory:migratedFromSubdirectory:error:rootDirectory:] */

void FUN_00441a04(ulong param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x0077c560(param_1,param_2,param_6);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    _objc_retain(uVar1);
    uVar7 = uVar1;
    goto LAB_00441c2c;
  }
  lVar2 = param_3;
  func_0x007882e0();
  if (lVar2 == 0) {
    uVar7 = 0;
    goto LAB_00441c2c;
  }
  uVar3 = uVar1;
  func_0x00791e80(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
  func_0x00781c40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x0078bf80();
  _objc_release(puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    if ((param_4 != 0) && (lVar2 = param_4, func_0x007882e0(), lVar2 != 0)) {
      uVar6 = param_6;
      func_0x00791e80(param_6,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
      func_0x00781c40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x0078bf80();
      _objc_release(puVar4);
      if ((int)puVar5 == 0) {
        _objc_release(uVar6);
      }
      else {
        func_0x0077d3e0(param_1,param_2,uVar6,uVar3);
        _objc_release(uVar6);
        if ((param_1 & 1) != 0) goto LAB_00441b74;
      }
    }
    puVar4 = PTR_PTR_00ac2d00;
    func_0x00781160(PTR_PTR_00ac2d00,param_2,uVar3,1,0,param_5);
    if ((int)puVar4 != 0) goto LAB_00441b74;
    uVar7 = 0;
  }
  else {
LAB_00441b74:
    puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x0078c140(PTR__OBJC_CLASS___NSString_00ac2988,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x0078c140(PTR__OBJC_CLASS___NSString_00ac2988,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar1;
      func_0x00791e80(uVar1,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = PTR_PTR_00ac2d68;
      puVar5 = PTR__OBJC_CLASS___NSURL_00ac2a90;
      func_0x007834e0(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00788ec0(puVar4,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(uVar7);
    }
    _objc_retain(uVar3);
    uVar7 = uVar3;
  }
  _objc_release(uVar3);
LAB_00441c2c:
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar7);
  return;
}



/* Entry: 00441c6c; end: 00441d2b; +[SCManagedDatastoreCollector shared] */

void FUN_00441c6c(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b5fdf8 != -1) {
    _dispatch_once(0xb5fdf8,&PTR___NSConcreteGlobalBlock_009e43b0);
  }
  uVar1 = uRam0000000000b5fdf0;
  _objc_retain(uRam0000000000b5fdf0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00441d2c; end: 00441dcb; -[SCManagedDatastoreCollector initWithQueuePerformer:] */

undefined1 * FUN_00441d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3bb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_00ac2d78;
    func_0x00788e80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00441dcc; end: 00441eab; -[SCManagedDatastoreCollector addManagedDatastore:] */

void FUN_00441dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x441e5c;
  puStack_48 = &UNK_009e36d0;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x0078a560(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 00441eac; end: 00441f7f; -[SCManagedDatastoreCollector retrieveManagedDatastore:] */

void FUN_00441eac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCPromise_00ac2d30;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_00441f80;
  puStack_50 = &UNK_009e43d0;
  puStack_48 = puVar1;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x0078a560(uVar3,param_2,&puStack_68);
  puVar2 = puVar1;
  func_0x00783be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(puStack_48);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00441f80; end: 00441fc7;  */

void FUN_00441f80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00789ea0(uVar2,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00780740(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00441fc8; end: 004420d7; -[SCManagedDatastoreCollector allManagedDatastores] */

void FUN_00441fc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___SCPromise_00ac2d30;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x442070;
  puStack_48 = &UNK_009e36d0;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x0078a560(uVar3,param_2,&puStack_60);
  puVar2 = puVar1;
  func_0x00783be0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 004420d8; end: 004421a3; -[SCManagedDatastoreCollector blockingAllManagedDatastores] */

void FUN_004420d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_004421a4;
  uStack_30 = 0x4421b4;
  uStack_28 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_00999f30;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_004421bc;
  puStack_68 = &UNK_009e4400;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x0078a5a0(*(undefined8 *)(param_1 + 8),param_2,&puStack_80);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004421a4; end: 004421bb;  */

void FUN_004421a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 004421bc; end: 00442217;  */

void FUN_004421bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00789e40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0077eb00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00442218; end: 00442247; -[SCManagedDatastoreCollector .cxx_destruct] */

void FUN_00442218(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00442248; end: 004422cb; -[SCSpaceSaverModeNotifier init] */

undefined1 * FUN_00442248(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac3bc0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = 0x41b2cc0300000000;
    *(undefined1 *)((long)puVar1 + 0x10) = 1;
    puVar2 = PTR_PTR_00ac2d38;
    func_0x007915a0(PTR_PTR_00ac2d38);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e6e0();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 004422cc; end: 004422d3; -[SCSpaceSaverModeNotifier waitUntil:] */

undefined8 FUN_004422cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004422d4; end: 0044235b; -[SCSpaceSaverModeNotifier didReceiveUpdatedFreeDiskSpaceSpaceMode:] */

void FUN_004422d4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac2d58;
  func_0x007915a0(PTR_PTR_00ac2d58);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a5e0();
  _objc_release(puVar1);
  return;
}



/* Entry: 0044235c; end: 004423a3;  */

void FUN_0044235c(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x10) == '\x01') {
    if (*(ulong *)(param_1 + 0x28) != 3) {
      return;
    }
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    if (1 < *(ulong *)(param_1 + 0x28)) {
      return;
    }
    uVar1 = 1;
    uVar2 = 0x41b2cc0300000000;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = uVar2;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10) = uVar1;
  return;
}



/* Entry: 004423a4; end: 00442477; +[SCSpaceSaverModeNotifier notifierWithSpaceSaver:] */

void FUN_004423a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_00ac2d80;
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar3 = PTR_PTR_00ac2d88;
  uVar5 = 2;
  puVar2 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f200();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x0077eca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar6) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
    _objc_retain(uVar5);
    func_0x00780460(puVar4);
    func_0x00789c80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
    func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(puVar1);
    if (*(long *)PTR____stack_chk_guard_00999f88 != lVar6) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00793030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_0099ad68)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 00442478; end: 00442557; +[SCStorageCleanupMetrics entryForError:filename:] */

void FUN_00442478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  lVar3 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_4);
  func_0x00780460(param_3);
  func_0x00789c80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00793030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)();
  return;
}



/* Entry: 00442558; end: 0044255b; -[SCUserSession cacheDirectory:error:] */

void FUN_00442558(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00793030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_unmanaged_cacheDirectory_error__00abf918);
  return;
}



/* Entry: 0044255c; end: 0044255f; -[SCUserSession documentDirectory:error:] */

void FUN_0044255c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00793050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_unmanaged_documentDirectory_erro_00abf920);
  return;
}



/* Entry: 00442560; end: 004427d7; -[SCUserSession unmanaged_cacheDirectory:error:] */

void FUN_00442560(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_004427d8;
  uStack_50 = 0x4427e8;
  uStack_48 = 0;
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (param_4 != (undefined8 *)0x0) {
    uVar1 = puStack_68[5];
    _objc_retainAutorelease();
    *param_4 = uVar1;
  }
  if (param_3 == 0) {
    uVar1 = param_1;
    func_0x007821c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_1;
    func_0x007821c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00791e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_00ac2d00;
    func_0x00781160();
    if (((ulong)puVar3 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x0078c140();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar3 != (undefined *)0x0) {
        uVar1 = param_1;
        func_0x007821c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
        func_0x0078c140(PTR__OBJC_CLASS___NSString_00ac2988);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00791e80(uVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(uVar1);
        puVar3 = PTR_PTR_00ac2d68;
        puVar5 = PTR__OBJC_CLASS___NSURL_00ac2a90;
        func_0x007834e0(PTR__OBJC_CLASS___NSURL_00ac2a90);
        _objc_retainAutoreleasedReturnValue();
        func_0x00788ec0(puVar3);
        _objc_release(puVar5);
        _objc_release(uVar4);
      }
      _objc_retain(uVar2);
      uVar1 = uVar2;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_1);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 004427d8; end: 004427ef;  */

void FUN_004427d8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 004427f0; end: 004428ab;  */

void FUN_004427f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x007933e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00793480(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_00ac2d90;
  _objc_alloc(PTR_PTR_00ac2d90);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  func_0x00785360();
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 004428ac; end: 00442ae7; -[SCUserSession unmanaged_documentDirectory:error:] */

void FUN_004428ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  _objc_opt_class();
  uVar2 = param_1;
  func_0x007933e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x007934c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(uVar1);
  uVar2 = uVar1;
  if (param_3 != 0) {
    func_0x00791e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_00999f30;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_00442ae8;
  puStack_70 = &UNK_009e44c0;
  _objc_retain(uVar1);
  uStack_68 = uVar1;
  func_0x00789ec0(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_004427d8;
  uStack_98 = 0x4427e8;
  uStack_90 = 0;
  _objc_retain(uVar2);
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00789ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != (undefined8 *)0x0) {
    uVar3 = puStack_b0[5];
    _objc_retainAutorelease();
    *param_4 = uVar3;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00442ae8; end: 00442b77;  */

void FUN_00442ae8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac2d68;
  _objc_alloc(PTR_PTR_00ac2d68);
  puVar2 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  func_0x00783500(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,*(undefined8 *)(param_1 + 0x20),1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00785340(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_00ac2d70;
  func_0x007914e0(PTR_PTR_00ac2d70);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e700();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00442b78; end: 00442ca3;  */

void FUN_00442b78(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uStack_38 = *(undefined8 *)(lVar5 + 0x28);
  puVar1 = PTR_PTR_00ac2d00;
  func_0x00781160(PTR_PTR_00ac2d00,param_2,*(undefined8 *)(param_1 + 0x20),1,1,&uStack_38);
  uVar4 = uStack_38;
  _objc_retain(uStack_38);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar4;
  _objc_release(uVar2);
  if ((int)puVar1 == 0) {
    uVar4 = 0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x0078c140(PTR__OBJC_CLASS___NSString_00ac2988,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x0078c140(PTR__OBJC_CLASS___NSString_00ac2988,param_2,*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00791e80(uVar4,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR_PTR_00ac2d68;
      puVar3 = PTR__OBJC_CLASS___NSURL_00ac2a90;
      func_0x007834e0(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00788ec0(puVar1,param_2,puVar3);
      _objc_release(puVar3);
      _objc_release(uVar4);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar4);
  return;
}



/* Entry: 00442ca4; end: 00442d23;  */

void FUN_00442ca4(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  return;
}



/* Entry: 00442d24; end: 00442e27; +[SCUserSession cleanUpOutOfScopeDocumentFilesExceptForUser:] */

void FUN_00442d24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0077ba80(PTR__OBJC_CLASS___NSString_00ac2988);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_00ac2cf8;
  _objc_alloc_init(PTR_PTR_00ac2cf8);
  puVar3 = puVar2;
  FUN_005b5b40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00791e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x005b5c0c();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00791e80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x0077c280(param_1,param_2,puVar4,puVar1,puVar2);
  func_0x0077c280(param_1,param_2,puVar5,puVar1,puVar2);
  func_0x00780320(puVar2,param_2,0);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00442e28; end: 00442fbf; +[SCUserSession _cleanUpOutOfScopeDirectoriesIn:forUserIdHash:trash:] */

undefined *
FUN_00442e28(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSURL_00ac2a90;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00791e80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00783500();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00783480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_00ac2d00;
  puVar4 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(puVar3);
  uVar1 = param_3;
  func_0x00792e00(puVar2);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x0077fbc0();
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    uVar6 = param_2;
    func_0x00783480();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x007877e0();
    _objc_release(uVar6);
    if ((uVar7 & 1) == 0) {
      func_0x00789580(*(undefined8 *)(puVar3 + 0x28));
    }
  }
  _objc_release(param_2);
  return (undefined *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 00442fc0; end: 0044306f;  */

undefined8 FUN_00442fc0(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x0077fbc0();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    uVar2 = param_2;
    func_0x00783480();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x007877e0();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) {
      func_0x00789580(*(undefined8 *)(param_1 + 0x28));
    }
  }
  _objc_release(param_2);
  return 1;
}



/* Entry: 00443070; end: 00443153; +[SCUserSession userScopedCachePathRootForUser:] */

undefined1 * FUN_00443070(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 **ppuStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0077ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
  puVar2 = puVar1;
  func_0x005b5c0c();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_48 = &PTR____CFConstantStringClassReference_00a251a0;
  puVar3 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  puStack_50 = puVar2;
  puStack_40 = puVar1;
  func_0x0077f200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_00443154;
  lStack_88 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar5 = PTR__OBJC_CLASS___NSString_00ac2988;
  puStack_80 = puVar3;
  puStack_78 = puVar2;
  puStack_70 = puVar1;
  puStack_68 = puVar4;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x0077ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
  puVar1 = puVar5;
  func_0x005b5b40();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_98 = &PTR____CFConstantStringClassReference_00a251a0;
  puVar2 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  puStack_a0 = puVar1;
  puStack_90 = puVar5;
  func_0x0077f200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_88) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  pcStack_a8 = FUN_00443238;
  lStack_e8 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  ppuStack_b0 = &puStack_60;
  func_0x0077ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
  puVar2 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0078b9c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_f8 = &PTR____CFConstantStringClassReference_00a251a0;
  puVar5 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  puStack_100 = puVar3;
  puStack_f0 = puVar1;
  func_0x0077f200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x0078a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_e8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuVar6 = &puStack_140;
  pcStack_108 = FUN_00443344;
  puStack_130 = puVar3;
  puStack_128 = puVar2;
  puStack_120 = puVar1;
  puStack_118 = puVar4;
  ppuStack_110 = &ppuStack_b0;
  _objc_retain(puVar8);
  puStack_138 = PTR_PTR_00ac3bc8;
  puStack_140 = puVar5;
  _objc_msgSendSuper2(&puStack_140,PTR_s_init_00abbf70);
  if (ppuVar6 != (undefined **)0x0) {
    puVar4 = PTR_PTR_00ac2d00;
    func_0x00781160();
    if ((int)puVar4 == 0) {
      puVar9 = (undefined1 *)0x0;
      goto LAB_00443454;
    }
    _objc_retain(puVar8);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined **)((long)ppuVar6 + 0x10) = puVar8;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_00ac2d68;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSURL_00ac2a90;
    func_0x00783500(PTR__OBJC_CLASS___NSURL_00ac2a90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00785340();
    uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined **)((long)ppuVar6 + 8) = puVar4;
    _objc_release(uVar7);
    _objc_release(puVar1);
    puVar4 = PTR_PTR_00ac2d70;
    func_0x007914e0(PTR_PTR_00ac2d70);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e700();
    _objc_release(puVar4);
  }
  _objc_retain(ppuVar6);
  puVar9 = (undefined1 *)ppuVar6;
LAB_00443454:
  _objc_release(puVar8);
  _objc_release(ppuVar6);
  return puVar9;
}



/* Entry: 00443154; end: 00443237; +[SCUserSession userScopedDocumentPathRootForUser:] */

undefined1 * FUN_00443154(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0077ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
  puVar2 = puVar1;
  FUN_005b5b40();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_48 = &PTR____CFConstantStringClassReference_00a251a0;
  puVar3 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  puStack_50 = puVar2;
  puStack_40 = puVar1;
  func_0x0077f200();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_00443238;
  lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x0077ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
  puVar2 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0078b9c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_00a251a0;
  puVar5 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  puStack_b0 = puVar3;
  puStack_a0 = puVar1;
  func_0x0077f200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x0078a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar5 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_98) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  ppuVar6 = &puStack_f0;
  pcStack_b8 = FUN_00443344;
  puStack_e0 = puVar3;
  puStack_d8 = puVar2;
  puStack_d0 = puVar1;
  puStack_c8 = puVar4;
  ppuStack_c0 = &puStack_60;
  _objc_retain(puVar8);
  puStack_e8 = PTR_PTR_00ac3bc8;
  puStack_f0 = puVar5;
  _objc_msgSendSuper2(&puStack_f0,PTR_s_init_00abbf70);
  if (ppuVar6 != (undefined **)0x0) {
    puVar4 = PTR_PTR_00ac2d00;
    func_0x00781160();
    if ((int)puVar4 == 0) {
      puVar9 = (undefined1 *)0x0;
      goto LAB_00443454;
    }
    _objc_retain(puVar8);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined **)((long)ppuVar6 + 0x10) = puVar8;
    _objc_release(uVar7);
    puVar4 = PTR_PTR_00ac2d68;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSURL_00ac2a90;
    func_0x00783500(PTR__OBJC_CLASS___NSURL_00ac2a90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00785340();
    uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined **)((long)ppuVar6 + 8) = puVar4;
    _objc_release(uVar7);
    _objc_release(puVar1);
    puVar4 = PTR_PTR_00ac2d70;
    func_0x007914e0(PTR_PTR_00ac2d70);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e700();
    _objc_release(puVar4);
  }
  _objc_retain(ppuVar6);
  puVar9 = (undefined1 *)ppuVar6;
LAB_00443454:
  _objc_release(puVar8);
  _objc_release(ppuVar6);
  return puVar9;
}



/* Entry: 00443238; end: 00443343; +[SCUserSession userScopedApplicationSupportPathRootForUser:] */

undefined1 * FUN_00443238(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x0077ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_00ac2988;
  puVar2 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0078b9c0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_58 = &PTR____CFConstantStringClassReference_00a251a0;
  puVar4 = PTR__OBJC_CLASS___NSArray_00ac2c28;
  puStack_60 = puVar3;
  puStack_50 = puVar1;
  func_0x0077f200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar4;
  func_0x0078a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_a0;
  pcStack_68 = FUN_00443344;
  puStack_90 = puVar3;
  puStack_88 = puVar2;
  puStack_80 = puVar1;
  puStack_78 = puVar5;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  puStack_98 = PTR_PTR_00ac3bc8;
  puStack_a0 = puVar4;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_00abbf70);
  if (ppuVar6 != (undefined **)0x0) {
    puVar5 = PTR_PTR_00ac2d00;
    func_0x00781160();
    if ((int)puVar5 == 0) {
      puVar9 = (undefined1 *)0x0;
      goto LAB_00443454;
    }
    _objc_retain(puVar8);
    uVar7 = *(undefined8 *)((long)ppuVar6 + 0x10);
    *(undefined **)((long)ppuVar6 + 0x10) = puVar8;
    _objc_release(uVar7);
    puVar5 = PTR_PTR_00ac2d68;
    _objc_alloc();
    puVar1 = PTR__OBJC_CLASS___NSURL_00ac2a90;
    func_0x00783500(PTR__OBJC_CLASS___NSURL_00ac2a90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00785340();
    uVar7 = *(undefined8 *)((long)ppuVar6 + 8);
    *(undefined **)((long)ppuVar6 + 8) = puVar5;
    _objc_release(uVar7);
    _objc_release(puVar1);
    puVar5 = PTR_PTR_00ac2d70;
    func_0x007914e0(PTR_PTR_00ac2d70);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e700();
    _objc_release(puVar5);
  }
  _objc_retain(ppuVar6);
  puVar9 = (undefined1 *)ppuVar6;
LAB_00443454:
  _objc_release(puVar8);
  _objc_release(ppuVar6);
  return puVar9;
}



/* Entry: 00443344; end: 0044347b; -[SCUserSessionScopedDirectory initWithDirectory:error:] */

undefined1 * FUN_00443344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_00ac3bc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_00ac2d00;
    func_0x00781160();
    if ((int)puVar2 == 0) {
      puVar5 = (undefined1 *)0x0;
      goto LAB_00443454;
    }
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_00ac2d68;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSURL_00ac2a90;
    func_0x00783500(PTR__OBJC_CLASS___NSURL_00ac2a90);
    _objc_retainAutoreleasedReturnValue();
    func_0x00785340();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar4);
    puVar2 = PTR_PTR_00ac2d70;
    func_0x007914e0(PTR_PTR_00ac2d70);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e700();
    _objc_release(puVar2);
  }
  _objc_retain(puVar1);
  puVar5 = (undefined1 *)puVar1;
LAB_00443454:
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 0044347c; end: 004434fb; -[SCUserSessionScopedDirectory invalidate] */

void FUN_0044347c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = PTR_PTR_00ac2cf8;
    _objc_alloc_init(PTR_PTR_00ac2cf8);
    puVar2 = PTR__OBJC_CLASS___NSURL_00ac2a90;
    func_0x00783500(PTR__OBJC_CLASS___NSURL_00ac2a90,param_2,*(undefined8 *)(param_1 + 0x10),1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789580(puVar1,param_2,puVar2,0);
    _objc_release(puVar2);
    func_0x00780320(puVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(puVar1);
    return;
  }
  return;
}



/* Entry: 004434fc; end: 00443503; -[SCUserSessionScopedDirectory directory] */

undefined8 FUN_004434fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00443504; end: 00443533; -[SCUserSessionScopedDirectory .cxx_destruct] */

void FUN_00443504(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00443534; end: 004437df; -[SCFreeDiskSpaceMonitorListenerAnnouncer addListener:] */

undefined8 FUN_00443534(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  qword qVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  qword *pqVar10;
  long lVar11;
  qword *pqVar12;
  long lVar13;
  qword *pqStack_a0;
  char *pcStack_98;
  undefined1 auStack_90 [8];
  qword *pqStack_88;
  char *pcStack_80;
  undefined1 auStack_78 [8];
  qword *pqStack_70;
  char *pcStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  pcVar3 = segment_command_00000020.segname + 8;
  __Znwm();
  pqVar12 = (qword *)(pcVar3 + 8);
  *pqVar12 = 0;
  *(qword *)(pcVar3 + 0x10) = 0;
  *(undefined ***)pcVar3 = &PTR_FUN_009e4560;
  pqVar10 = (qword *)(pcVar3 + 0x18);
  *pqVar10 = 0;
  *(qword *)(pcVar3 + 0x20) = 0;
  *(undefined8 *)(pcVar3 + 0x28) = 0;
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  pqStack_70 = pqVar10;
  pcStack_68 = pcVar3;
  if (plVar6 == (long *)0x0) {
    _objc_initWeak(auStack_90,param_3);
    FUN_004437e0(pqVar10,auStack_90);
    _objc_destroyWeak(auStack_90);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pqVar12,0x10);
      if (bVar2) {
        *pqVar12 = *pqVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pqStack_a0 = pqVar10;
    pcStack_98 = pcVar3;
    FUN_00443920(puVar8,&pqStack_a0);
    if (pcStack_98 != (char *)0x0) {
      pqVar10 = (qword *)(pcStack_98 + 8);
      do {
        qVar7 = *pqVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pqVar10,0x10);
        if (bVar2) {
          *pqVar10 = qVar7 - 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        pcVar3 = pcStack_98;
      } while (cVar1 != '\0');
LAB_004436e8:
      if (qVar7 == 0) {
        (**(code **)(*(long *)pcVar3 + 0x10))(pcVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar3);
      }
    }
  }
  else {
    lVar5 = *plVar6;
    lVar13 = plVar6[1];
    lVar11 = lVar5;
    if (lVar5 != lVar13) {
      do {
        lVar4 = lVar11;
        _objc_loadWeakRetained();
        _objc_release();
        lVar5 = lVar11;
        if (lVar4 == param_3) break;
        lVar11 = lVar11 + 8;
        lVar5 = lVar13;
      } while (lVar11 != lVar13);
      plVar6 = (long *)*puVar8;
      lVar13 = plVar6[1];
    }
    if (lVar5 != lVar13) {
      uVar9 = 0;
      goto LAB_00443708;
    }
    for (lVar11 = *plVar6; lVar11 != lVar13; lVar11 = lVar11 + 8) {
      lVar5 = lVar11;
      _objc_loadWeakRetained();
      _objc_release();
      if (lVar5 != 0) {
        FUN_004437e0(pqVar10,lVar11);
      }
    }
    _objc_initWeak(auStack_78,param_3);
    FUN_004437e0(pqVar10,auStack_78);
    _objc_destroyWeak(auStack_78);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pqVar12,0x10);
      if (bVar2) {
        *pqVar12 = *pqVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    pqStack_88 = pqVar10;
    pcStack_80 = pcVar3;
    FUN_00443920(puVar8,&pqStack_88);
    if (pcStack_80 != (char *)0x0) {
      pqVar10 = (qword *)(pcStack_80 + 8);
      do {
        qVar7 = *pqVar10;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pqVar10,0x10);
        if (bVar2) {
          *pqVar10 = qVar7 - 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        pcVar3 = pcStack_80;
      } while (cVar1 != '\0');
      goto LAB_004436e8;
    }
  }
  uVar9 = 1;
LAB_00443708:
  pcVar3 = pcStack_68;
  if (pcStack_68 != (char *)0x0) {
    pqVar10 = (qword *)(pcStack_68 + 8);
    do {
      qVar7 = *pqVar10;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pqVar10,0x10);
      if (bVar2) {
        *pqVar10 = qVar7 - 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (qVar7 == 0) {
      (**(code **)(*(long *)pcStack_68 + 0x10))(pcStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar3);
    }
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 004437e0; end: 0044391f;  */

void FUN_004437e0(long *param_1,long *param_2)

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
      FUN_00443ce8();
LAB_0044391c:
      FUN_0040cee8();
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
                    /* WARNING: Could not recover jumptable at 0x00779f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_00998c80)(plVar5);
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
      if (uVar7 >> 0x3d != 0) goto LAB_0044391c;
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



/* Entry: 00443920; end: 00443967;  */

void FUN_00443920(undefined8 *param_1,undefined8 *param_2)

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
                    /* WARNING: Could not recover jumptable at 0x00779f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_00998c80)(puVar1);
  return;
}



/* Entry: 00443968; end: 00443b97; -[SCFreeDiskSpaceMonitorListenerAnnouncer removeListener:] */

void FUN_00443968(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  qword qVar9;
  undefined8 *puVar10;
  qword *pqVar11;
  qword *pqVar12;
  qword *pqStack_90;
  char *pcStack_88;
  qword *pqStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  char *pcStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar10 = (undefined8 *)(param_1 + 0x48);
  plVar8 = (long *)*puVar10;
  if (plVar8 == (long *)0x0) goto LAB_00443b1c;
  lVar4 = *plVar8;
  if (plVar8[1] - lVar4 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar4 != param_3) goto LAB_004439d0;
    uStack_70 = 0;
    pcStack_68 = (char *)0x0;
    FUN_00443920(puVar10,&uStack_70);
    if (pcStack_68 == (char *)0x0) goto LAB_00443b1c;
    pqVar11 = (qword *)(pcStack_68 + 8);
    do {
      qVar9 = *pqVar11;
                    /* WARNING (jumptable): Read-only address (ram,0x00000008) is written */
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pqVar11,0x10);
      if (bVar3) {
        *pqVar11 = qVar9 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      pcVar5 = pcStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_004439d0:
    pcVar5 = segment_command_00000020.segname + 8;
    __Znwm();
    pqVar12 = (qword *)(pcVar5 + 8);
    *pqVar12 = 0;
    *(qword *)(pcVar5 + 0x10) = 0;
    *(undefined ***)pcVar5 = &PTR_FUN_009e4560;
    pqVar11 = (qword *)(pcVar5 + 0x18);
    *pqVar11 = 0;
    *(qword *)(pcVar5 + 0x20) = 0;
    *(undefined8 *)(pcVar5 + 0x28) = 0;
    lVar1 = ((long *)*puVar10)[1];
    pqStack_80 = pqVar11;
    pcStack_78 = pcVar5;
    for (lVar4 = *(long *)*puVar10; lVar4 != lVar1; lVar4 = lVar4 + 8) {
      lVar6 = lVar4;
      _objc_loadWeakRetained();
      if (lVar6 != 0) {
        lVar7 = lVar4;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar6);
        if (lVar7 != param_3) {
          FUN_004437e0(pqVar11,lVar4);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pqVar12,0x10);
      if (bVar3) {
        *pqVar12 = *pqVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pqStack_90 = pqVar11;
    pcStack_88 = pcVar5;
    FUN_00443920(puVar10,&pqStack_90);
    pcVar5 = pcStack_88;
    if (pcStack_88 != (char *)0x0) {
      pqVar11 = (qword *)(pcStack_88 + 8);
      do {
        qVar9 = *pqVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pqVar11,0x10);
        if (bVar3) {
          *pqVar11 = qVar9 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (qVar9 == 0) {
        (**(code **)(*(long *)pcStack_88 + 0x10))(pcStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar5);
      }
    }
    if (pcStack_78 == (char *)0x0) goto LAB_00443b1c;
    pqVar11 = (qword *)(pcStack_78 + 8);
    do {
      qVar9 = *pqVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pqVar11,0x10);
      if (bVar3) {
        *pqVar11 = qVar9 - 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      pcVar5 = pcStack_78;
    } while (cVar2 != '\0');
  }
  if (qVar9 == 0) {
    (**(code **)(*(long *)pcVar5 + 0x10))(pcVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar5);
  }
LAB_00443b1c:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}


