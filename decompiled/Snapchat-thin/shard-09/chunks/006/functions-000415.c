/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f87148; end: 106f872db;  */

void FUN_106f87148(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar4 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
  if (lVar3 != 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar4);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar6 = *(undefined8 *)(lVar3 + 0x20);
    _objc_copyWeak(auStack_58,param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    _objc_retain(param_2);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar6);
    _objc_release(param_4);
    _objc_release(param_2);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar1);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 106f872dc; end: 106f8737b;  */

void FUN_106f872dc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be27d80(lVar1,param_2,
                        *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28),
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f8737c; end: 106f8762f; -[SCSpectaclesRPCNetworkClient _handleDataTaskComplete:rpcRequest:response:data:error:] */

void FUN_106f8737c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar5 = param_6;
  if (param_7 == 0) {
    uVar1 = param_5;
    func_0x00010bf001c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
LAB_106f8748c:
      lVar6 = *(long *)(param_1 + 0x38);
      lStack_68 = 0;
      func_0x00010c0d7f20(lVar6,param_2,uVar5,param_5,&lStack_68);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lStack_68;
      _objc_retain(lStack_68);
      if (lVar7 == 0) {
        if ((*(long *)(param_1 + 0x28) == 0) || (param_4 != *(long *)(param_1 + 0x28))) {
          lVar7 = param_1;
          func_0x00010c0cbd20(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf42ca0();
          _objc_release(lVar7);
        }
        else {
          func_0x00010be28e40(param_1,param_2,lVar6);
        }
        goto LAB_106f875d4;
      }
      func_0x00010bf48ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf42c80();
      _objc_release(param_1);
      _objc_release(lVar6);
      param_6 = uVar5;
    }
    else {
      uVar4 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf48ce0();
      if ((uVar4 & 1) != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bf678c0(uVar5,param_2,param_6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_6);
        goto LAB_106f8748c;
      }
      lVar7 = param_1;
      func_0x00010bf48ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e78258,1,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf42c80(lVar7,param_2,param_1,puVar8);
      _objc_release(puVar8);
    }
    _objc_release(lVar7);
    goto LAB_106f875e8;
  }
  lVar7 = param_7;
  func_0x00010bf3ec40();
  lVar6 = param_1;
  if (lVar7 == -0x3e9) {
    func_0x00010c0cbd20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42ce0();
LAB_106f875d4:
    _objc_release(lVar6);
    param_6 = uVar5;
  }
  else {
    lVar7 = param_7;
    func_0x00010bf3ec40();
    if (lVar7 != -999) {
      func_0x00010bf48ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf42c80();
      goto LAB_106f875d4;
    }
  }
  func_0x00010be5d980(param_1,param_2,param_3);
LAB_106f875e8:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f87630; end: 106f876d7; -[SCSpectaclesRPCNetworkClient _resumeAllTasks] */

void FUN_106f87630(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f876d8; end: 106f877df;  */

void FUN_106f876d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    unaff_x20 = *(long *)(param_1 + 0x18);
    _objc_retain(unaff_x20);
    lVar1 = unaff_x20;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar3 = *plStack_100;
      do {
        lVar4 = 0;
        do {
          if (*plStack_100 != lVar3) {
            _objc_enumerationMutation(unaff_x20);
          }
          func_0x00010c13d1c0(*(undefined8 *)(lStack_108 + lVar4 * 8));
          lVar4 = lVar4 + 1;
        } while (lVar1 != lVar4);
        lVar1 = unaff_x20;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(unaff_x20);
  }
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_106f877e0;
  lStack_130 = unaff_x20;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_138,lVar1);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  _objc_copyWeak(auStack_140,auStack_138);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  return;
}



/* Entry: 106f877e0; end: 106f87887; -[SCSpectaclesRPCNetworkClient _suspendAllTasks] */

void FUN_106f877e0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f87888; end: 106f8798f;  */

void FUN_106f87888(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    unaff_x20 = *(long *)(param_1 + 0x18);
    _objc_retain(unaff_x20);
    lVar1 = unaff_x20;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar3 = *plStack_100;
      do {
        lVar4 = 0;
        do {
          if (*plStack_100 != lVar3) {
            _objc_enumerationMutation(unaff_x20);
          }
          func_0x00010c264060(*(undefined8 *)(lStack_108 + lVar4 * 8));
          lVar4 = lVar4 + 1;
        } while (lVar1 != lVar4);
        lVar1 = unaff_x20;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(unaff_x20);
  }
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_106f87990;
  lStack_130 = unaff_x20;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_138,lVar1);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  _objc_copyWeak(auStack_140,auStack_138);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  return;
}



/* Entry: 106f87990; end: 106f87a37; -[SCSpectaclesRPCNetworkClient _cancelAllTasks] */

void FUN_106f87990(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106f87a38; end: 106f87b3f;  */

void FUN_106f87a38(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar4 = *(long *)(param_1 + 0x18);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar4);
        }
        func_0x00010bf2dba0(*(undefined8 *)(lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar4;
      func_0x00010bf52a60();
    }
    _objc_release(lVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 106f87b40; end: 106f87b47; -[SCSpectaclesRPCNetworkClient _markURLTaskComplete:] */

void FUN_106f87b40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_removeObject__112628ef8);
  return;
}



/* Entry: 106f87b48; end: 106f87d2b; -[SCSpectaclesRPCNetworkClient _URLrequestWithRPCRequest:encryptMessage:] */

void FUN_106f87b48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar2 = *(ulong *)(param_1 + 0x38);
  func_0x00010c1423e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  if (uVar3 == 0) {
    param_1 = 0;
    goto LAB_106f87d04;
  }
  func_0x00010bf529e0(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110db2d78);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137160(puVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c1a4fc0(puVar6,param_2,&PTR____CFConstantStringClassReference_110dada18);
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = uVar3;
  func_0x000106f829c0();
  func_0x00010c229380(uVar9,param_2,uVar3,uVar7 & 0xffffffff);
  uVar7 = uVar3;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c08fa60();
  if (uVar8 == 0) {
LAB_106f87ce0:
    param_1 = 0;
  }
  else {
    uVar8 = uVar7;
    if ((int)param_4 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
      func_0x00010bf48ce0();
      if (iVar1 == 0) goto LAB_106f87ce0;
      uVar8 = *(ulong *)(param_1 + 0x30);
      func_0x00010bf93920(uVar8,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
    }
    func_0x00010c1a4f00(puVar6,param_2,uVar8);
    uVar7 = uVar8;
    func_0x00010c08fa60(uVar8);
    func_0x00010bdf8920(param_1,param_2,puVar6,param_4,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
  }
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(puVar6);
  _objc_release(puVar4);
LAB_106f87d04:
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106f87d2c; end: 106f87f97; -[SCSpectaclesRPCNetworkClient _decorateURLRequest:encryptedMessage:contentLength:] */

void FUN_106f87d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c0d3c80();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2201e0(param_3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_alloc();
  uVar7 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057bc0();
  _objc_release(uVar7);
  puVar2 = puVar1;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_alloc_init();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  _objc_alloc();
  puVar4 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02dc20();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSURLQueryItem_1126ae5d0;
  _objc_alloc();
  func_0x00010c02dc20();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf09f80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e6460(puVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  puVar5 = puVar1;
  func_0x00010bdc2b80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21afe0(param_3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(puVar1 + 0x40);
  func_0x00010c0d99e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar1 + 0x28);
  *(undefined8 *)(puVar1 + 0x28) = uVar7;
  _objc_release(uVar10);
  if (*(long *)(puVar1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be17b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (puVar1,PTR_s__fireRequest_encryptMessage__112563860,*(long *)(puVar1 + 0x28),0);
    return;
  }
  uVar7 = *(undefined8 *)(puVar1 + 0x40);
  func_0x00010bf221e0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(puVar1 + 0x30);
  *(undefined8 *)(puVar1 + 0x30) = uVar7;
  _objc_release(uVar10);
  if (puVar1[0x10] == '\x01') {
    uVar8 = *(ulong *)(puVar1 + 0x30);
    func_0x00010bf48ce0();
    if ((uVar8 & 1) == 0) {
      func_0x00010bf48ec0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf42c80(puVar1);
      _objc_release(puVar2);
      goto LAB_106f880a8;
    }
  }
  puVar1[0x48] = 1;
  func_0x00010be95b80(puVar1);
  func_0x00010bf48ec0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42cc0();
LAB_106f880a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f87f98; end: 106f880bb; -[SCSpectaclesRPCNetworkClient _setupEncryption] */

void FUN_106f87f98(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0d99e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _objc_release(uVar4);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be17b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__fireRequest_encryptMessage__112563860,*(long *)(param_1 + 0x28),0);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf221e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar4);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar2 = *(ulong *)(param_1 + 0x30);
    func_0x00010bf48ce0();
    if ((uVar2 & 1) == 0) {
      func_0x00010bf48ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf42c80(param_1);
      _objc_release(puVar3);
      goto LAB_106f880a8;
    }
  }
  *(undefined1 *)(param_1 + 0x48) = 1;
  func_0x00010be95b80(param_1);
  func_0x00010bf48ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42cc0();
LAB_106f880a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f880bc; end: 106f880e3; -[SCSpectaclesRPCNetworkClient _handleEncryptionSetupResponse:] */

void FUN_106f880bc(long param_1)

{
  func_0x00010bfd0fc0(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010beac570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupEncryption_112588b00);
  return;
}



/* Entry: 106f880e4; end: 106f880fb; -[SCSpectaclesRPCNetworkClient connectivityDelegate] */

void FUN_106f880e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f880fc; end: 106f88107; -[SCSpectaclesRPCNetworkClient setConnectivityDelegate:] */

void FUN_106f880fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 106f88108; end: 106f8811f; -[SCSpectaclesRPCNetworkClient messagingDelegate] */

void FUN_106f88108(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f88120; end: 106f8812b; -[SCSpectaclesRPCNetworkClient setMessagingDelegate:] */

void FUN_106f88120(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 106f8812c; end: 106f881a7; -[SCSpectaclesRPCNetworkClient .cxx_destruct] */

void FUN_106f8812c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f881a8; end: 106f8826b; -[SCSpectaclesLagunaContentMetadata initWithData:] */

undefined8 * FUN_106f881a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f80b8;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126d3960;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    lVar4 = puVar1[1];
    _objc_release(0);
    puVar5 = (undefined8 *)0x0;
    if (lVar4 == 0) goto LAB_106f88244;
  }
  _objc_retain(puVar1);
  puVar5 = puVar1;
LAB_106f88244:
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar5;
}



/* Entry: 106f8826c; end: 106f882a7; -[SCSpectaclesLagunaContentMetadata serializedSize] */

undefined8 FUN_106f8826c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c15ebe0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f882a8; end: 106f882eb; -[SCSpectaclesLagunaContentMetadata rawData] */

void FUN_106f882a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f882ec; end: 106f8836b; -[SCSpectaclesLagunaContentMetadata contentType] */

bool FUN_106f882ec(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd9060();
  if ((uVar3 & 1) == 0) {
    _objc_release(uVar2);
    bVar1 = false;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0c6c20();
    bVar1 = (int)uVar3 == 2;
    _objc_release(param_1);
    _objc_release(uVar2);
  }
  return bVar1;
}



/* Entry: 106f8836c; end: 106f8840b; -[SCSpectaclesLagunaContentMetadata videoDuration] */

void FUN_106f8836c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde460();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c299e40();
    func_0x00010c0df720((double)uVar1 / 1000.0,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f8840c; end: 106f8849f; -[SCSpectaclesLagunaContentMetadata timeOfCapture] */

void FUN_106f8840c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdafa0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c123ae0();
    func_0x00010bf655e0((double)uVar1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f884a0; end: 106f8851f; -[SCSpectaclesLagunaContentMetadata randBytes] */

void FUN_106f884a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfdad60();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c11f0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f88520; end: 106f88583; -[SCSpectaclesLagunaContentMetadata multisnapGroupID] */

void FUN_106f88520(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0d28c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f88584; end: 106f8858b; -[SCSpectaclesLagunaContentMetadata multisnapIndex] */

undefined8 FUN_106f88584(void)

{
  return 0;
}



/* Entry: 106f8858c; end: 106f88593; -[SCSpectaclesLagunaContentMetadata isHEVC] */

undefined8 FUN_106f8858c(void)

{
  return 0;
}



/* Entry: 106f88594; end: 106f8860f; -[SCSpectaclesLagunaContentMetadata firmwareVersion] */

void FUN_106f88594(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c0c68;
  _objc_alloc(PTR_PTR_1126c0c68);
  func_0x00010c27f820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f88610; end: 106f886a3; -[SCSpectaclesLagunaContentMetadata batterySoc] */

void FUN_106f88610(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd48e0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf176a0();
    func_0x00010c0df760(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f886a4; end: 106f886ab; -[SCSpectaclesLagunaContentMetadata hasCharging] */

undefined8 FUN_106f886a4(void)

{
  return 0;
}



/* Entry: 106f886ac; end: 106f886b3; -[SCSpectaclesLagunaContentMetadata charging] */

undefined8 FUN_106f886ac(void)

{
  return 0;
}



/* Entry: 106f886b4; end: 106f88747; -[SCSpectaclesLagunaContentMetadata storagePercentage] */

void FUN_106f886b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdcc00();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c257260();
    func_0x00010c0df820(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f88748; end: 106f887db; -[SCSpectaclesLagunaContentMetadata socTemperature] */

void FUN_106f88748(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd40a0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf02360();
    func_0x00010c0df760(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f887dc; end: 106f8886f; -[SCSpectaclesLagunaContentMetadata nordicTemperature] */

void FUN_106f887dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd9960();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0ddb20();
    func_0x00010c0df760(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f88870; end: 106f88877; -[SCSpectaclesLagunaContentMetadata wifiTemperature] */

undefined8 FUN_106f88870(void)

{
  return 0;
}



/* Entry: 106f88878; end: 106f8890b; -[SCSpectaclesLagunaContentMetadata ambientLightIntensity] */

void FUN_106f88878(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd40c0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf02400();
    func_0x00010c0df760(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f8890c; end: 106f8899f; -[SCSpectaclesLagunaContentMetadata sensorBeginTemperature] */

void FUN_106f8890c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdbe00();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c15e160();
    func_0x00010c0df760(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f889a0; end: 106f88a33; -[SCSpectaclesLagunaContentMetadata sensorEndTemperature] */

void FUN_106f889a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdbe20();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c15e200();
    func_0x00010c0df760(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f88a34; end: 106f88ac7; -[SCSpectaclesLagunaContentMetadata sensorCurrentDgc] */

void FUN_106f88a34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd7dc0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfe8b00();
    func_0x00010c0df820(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f88ac8; end: 106f88b5b; -[SCSpectaclesLagunaContentMetadata sensorCurrentAgc] */

void FUN_106f88ac8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd7da0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfe8ae0();
    func_0x00010c0df820(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f88b5c; end: 106f88bef; -[SCSpectaclesLagunaContentMetadata startEvIndex] */

void FUN_106f88b5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdca20();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c24eb20();
    func_0x00010c0df820(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f88bf0; end: 106f88c83; -[SCSpectaclesLagunaContentMetadata endEvIndex] */

void FUN_106f88bf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd6aa0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf94860();
    func_0x00010c0df820(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f88c84; end: 106f88c8b; -[SCSpectaclesLagunaContentMetadata droppedFramesVin0] */

undefined8 FUN_106f88c84(void)

{
  return 0;
}



/* Entry: 106f88c8c; end: 106f88c93; -[SCSpectaclesLagunaContentMetadata droppedFramesVin1] */

undefined8 FUN_106f88c8c(void)

{
  return 0;
}



/* Entry: 106f88c94; end: 106f88d27; -[SCSpectaclesLagunaContentMetadata nordicLastBootSession] */

void FUN_106f88c94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd9840();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0db260();
    func_0x00010c0df820(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f88d28; end: 106f88da7; -[SCSpectaclesLagunaContentMetadata bleUUID] */

void FUN_106f88d28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfd4ae0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf1cb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106f88da8; end: 106f88e3b; -[SCSpectaclesLagunaContentMetadata bleConnected] */

void FUN_106f88da8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd4ac0();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf1ca60();
    func_0x00010c0df6e0(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f88e3c; end: 106f88e7f; -[SCSpectaclesLagunaContentMetadata buttonPressType] */

long FUN_106f88e3c(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf21ae0();
  _objc_release(param_1);
  uVar2 = (int)uVar3 - 1;
  lVar1 = 0;
  if (uVar2 < 7) {
    lVar1 = (ulong)uVar2 + 1;
  }
  return lVar1;
}



/* Entry: 106f88e80; end: 106f88f13; -[SCSpectaclesLagunaContentMetadata snapcodeDetected] */

void FUN_106f88e80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc540();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c244fa0();
    func_0x00010c0df6e0(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f88f14; end: 106f88fa7; -[SCSpectaclesLagunaContentMetadata userAssociated] */

void FUN_106f88f14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  func_0x00010c27f820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde080();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((int)uVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x00010c27f820(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c291360();
    func_0x00010c0df6e0(puVar3,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f88fa8; end: 106f88faf; -[SCSpectaclesLagunaContentMetadata buttonSide] */

undefined8 FUN_106f88fa8(void)

{
  return 0;
}



/* Entry: 106f88fb0; end: 106f88fb7; -[SCSpectaclesLagunaContentMetadata location] */

undefined8 FUN_106f88fb0(void)

{
  return 0;
}



/* Entry: 106f88fb8; end: 106f88fbf; -[SCSpectaclesLagunaContentMetadata genericAssetMetadata] */

undefined8 FUN_106f88fb8(void)

{
  return 0;
}



/* Entry: 106f88fc0; end: 106f88fc7; -[SCSpectaclesLagunaContentMetadata flightMode] */

undefined8 FUN_106f88fc0(void)

{
  return 0;
}



/* Entry: 106f88fc8; end: 106f88fcf; -[SCSpectaclesLagunaContentMetadata flightId] */

undefined8 FUN_106f88fc8(void)

{
  return 0;
}



/* Entry: 106f88fd0; end: 106f88fd7; -[SCSpectaclesLagunaContentMetadata isValid] */

undefined8 FUN_106f88fd0(void)

{
  return 1;
}



/* Entry: 106f88fd8; end: 106f88fdf; -[SCSpectaclesLagunaContentMetadata underlyingProto] */

undefined8 FUN_106f88fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f88fe0; end: 106f8900f; -[SCSpectaclesLagunaContentMetadata setUnderlyingProto:] */

void FUN_106f88fe0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f89010; end: 106f8901b; -[SCSpectaclesLagunaContentMetadata .cxx_destruct] */

void FUN_106f89010(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f8901c; end: 106f8909f; -[SCSpectaclesLagunaEncryptionResponseMessage initWithEncryptionResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106f8901c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f80c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112761c24;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f890a0; end: 106f890f7; -[SCSpectaclesLagunaEncryptionResponseMessage responseStatus] */

undefined8 FUN_106f890a0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  func_0x00010bf93f60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c252d60();
  _objc_release(param_1);
  uVar1 = (int)uVar2 - 1;
  if (uVar1 < 4) {
    uVar2 = *(undefined8 *)(&UNK_10de194e0 + (ulong)uVar1 * 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 106f890f8; end: 106f891d3; -[SCSpectaclesLagunaEncryptionResponseMessage receivedReadyForUserAssociationMessage] */

bool FUN_106f890f8(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_1;
  func_0x00010bf93f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd9100();
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_1;
    func_0x00010bf93f60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfd9140();
    if ((int)uVar5 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010bf93f60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0cba00();
      bVar1 = (int)uVar6 == 4;
      _objc_release(uVar5);
      _objc_release(param_1);
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 106f891d4; end: 106f892af; -[SCSpectaclesLagunaEncryptionResponseMessage receivedUserAssociationDoneMessage] */

bool FUN_106f891d4(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_1;
  func_0x00010bf93f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd9100();
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_1;
    func_0x00010bf93f60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfd9140();
    if ((int)uVar5 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010bf93f60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c0cb140();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0cba00();
      bVar1 = (int)uVar6 == 5;
      _objc_release(uVar5);
      _objc_release(param_1);
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 106f892b0; end: 106f892bf; -[SCSpectaclesLagunaEncryptionResponseMessage encryptionResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f892b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761c24);
}



/* Entry: 106f892c0; end: 106f892d3; -[SCSpectaclesLagunaEncryptionResponseMessage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f892c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761c24,0);
  return;
}



/* Entry: 106f892d4; end: 106f8945f; -[SCSpectaclesLagunaNetworkClient initWithStream:encryptionKey:networkTimeout:connectivityDelegate:messagingDelegate:] */

undefined1 *
FUN_106f892d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_6);
  _objc_initWeak(auStack_60,param_7);
  puStack_68 = PTR_PTR_1126f80c8;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x28));
    puVar3 = PTR_PTR_1126d38b8;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    func_0x00010c195ce0(*(undefined8 *)((long)puVar1 + 0x38));
    *(undefined8 *)((long)puVar1 + 0x48) = param_1;
    puVar3 = PTR_PTR_1126d3968;
    _objc_alloc();
    func_0x00010c00a2c0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar4 = auStack_58;
    _objc_loadWeakRetained(puVar4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),puVar4);
    _objc_release(puVar4);
    puVar4 = auStack_60;
    _objc_loadWeakRetained(puVar4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),puVar4);
    _objc_release(puVar4);
  }
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106f89460; end: 106f894f3; -[SCSpectaclesLagunaNetworkClient dealloc] */

void FUN_106f89460(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d9e0();
  _objc_release(uVar1);
  func_0x00010c20e520(param_1);
  uVar1 = param_1;
  func_0x00010bef1960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
  _objc_release(uVar1);
  func_0x00010c162e40(param_1);
  puStack_28 = PTR_PTR_1126f80c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106f894f4; end: 106f89573; -[SCSpectaclesLagunaNetworkClient start] */

void FUN_106f894f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c264320();
  if ((int)uVar1 == 0) {
    func_0x00010c25c420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e8e20();
  }
  else {
    func_0x00010c162480(param_1,param_2,1);
    func_0x00010c2104a0(param_1,param_2,0);
    func_0x00010bebf540(param_1);
    func_0x00010bf48ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42cc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f89574; end: 106f895a7; -[SCSpectaclesLagunaNetworkClient suspend] */

void FUN_106f89574(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c162480(param_1,param_2,0);
  func_0x00010c2104a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bec2c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopActivityTimer_11258e4c8);
  return;
}



/* Entry: 106f895a8; end: 106f895ef; -[SCSpectaclesLagunaNetworkClient halt] */

void FUN_106f895a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c162480(param_1,param_2,0);
  uVar1 = param_1;
  func_0x00010c25c420(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d9e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bec2c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopActivityTimer_11258e4c8);
  return;
}



/* Entry: 106f895f0; end: 106f8962b; -[SCSpectaclesLagunaNetworkClient isConnected] */

undefined8 FUN_106f895f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0791a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106f8962c; end: 106f896c7; +[SCSpectaclesLagunaNetworkClient _shortData:] */

void FUN_106f8962c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c08fa60(param_3);
  func_0x00010c0df840(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e8fd78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf64920(puVar2,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106f896c8; end: 106f897f7; +[SCSpectaclesLagunaNetworkClient _requestDescription:] */

void FUN_106f896c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd7580();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010bfbc4e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd6200();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_3;
      func_0x00010bf51e00(param_3);
      uVar1 = param_3;
      func_0x00010bfbc4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010bf64c80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beb2200(param_1,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfbc4e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c189980();
      _objc_release(uVar4);
      _objc_release(param_1);
      _objc_release(uVar3);
      _objc_release(uVar1);
      uVar1 = uVar2;
      func_0x00010bf6e340(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      goto LAB_106f897d8;
    }
  }
  uVar1 = param_3;
  func_0x00010bf6e340(param_3);
  _objc_retainAutoreleasedReturnValue();
LAB_106f897d8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f897f8; end: 106f899c3; +[SCSpectaclesLagunaNetworkClient _responseDescription:] */

void FUN_106f897f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd9040();
  uVar3 = param_3;
  uVar4 = param_3;
  if ((int)uVar1 == 0) {
LAB_106f898b8:
    uVar1 = param_3;
    func_0x00010bfd8ae0();
    if ((int)uVar1 != 0) {
      uVar1 = param_3;
      func_0x00010c0ae600();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfd8ac0();
      _objc_release(uVar1);
      if ((int)uVar2 != 0) {
        func_0x00010bf51e00(param_3);
        func_0x00010c0ae600(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar4;
        func_0x00010c0a4900();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beb2200(param_1,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010c0ae600(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c0260();
        goto LAB_106f89950;
      }
    }
    uVar1 = param_3;
    func_0x00010bf6e340(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_3;
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfd8f80();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_106f898b8;
    func_0x00010bf51e00(param_3);
    func_0x00010c0c64c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c0c4820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beb2200(param_1,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c0c64c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4460();
LAB_106f89950:
    _objc_release(uVar2);
    _objc_release(param_1);
    _objc_release(uVar1);
    _objc_release(uVar4);
    uVar1 = uVar3;
    func_0x00010bf6e340(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f899c4; end: 106f89c4f; -[SCSpectaclesLagunaNetworkClient sendRequest:] */

void FUN_106f899c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
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
  lVar1 = param_1;
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bf48ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e78258,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42c80(lVar1,param_2,param_1,puVar7);
    _objc_release(puVar7);
  }
  else {
    lVar1 = param_3;
    func_0x00010bf9c300(param_3);
    func_0x00010c1d73a0(param_1,param_2,lVar1);
    lVar1 = param_3;
    func_0x00010c087c60();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar1);
          }
          lVar3 = *(long *)(lStack_128 + lVar9 * 8);
          func_0x00010bf63640(lVar3);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_1;
          func_0x00010bf94040();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf48ce0();
          _objc_release(lVar4);
          if ((int)lVar5 != 0) {
            lVar4 = param_1;
            func_0x00010bf94040(param_1);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            func_0x00010bf93920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar3);
            _objc_release(lVar4);
            lVar3 = lVar5;
          }
          lVar4 = param_1;
          func_0x00010c25c420(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_1;
          func_0x00010c0cb2c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bf64c40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2bda00(lVar4,param_2,lVar6);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar3);
          lVar9 = lVar9 + 1;
        } while (lVar2 != lVar9);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar2 != 0);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    return;
  }
  return;
}



/* Entry: 106f89c50; end: 106f89c53; -[SCSpectaclesLagunaNetworkClient cancelOutstandingRequest] */

void FUN_106f89c50(void)

{
  return;
}



/* Entry: 106f89c54; end: 106f89cbb; -[SCSpectaclesLagunaNetworkClient _startActivityTimer] */

void FUN_106f89c54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010c1a67c0(param_1,param_2,0);
  puVar1 = PTR_PTR_1126bc890;
  func_0x00010c0d8220(param_1);
  func_0x00010c150380(puVar1,param_2,param_1,PTR_s__checkIfResponseTimedOut_112536498,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c162e40(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f89cbc; end: 106f89cfb; -[SCSpectaclesLagunaNetworkClient _stopActivityTimer] */

void FUN_106f89cbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bef1960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c069d00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c162e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setActivityTimer__1126365b0,0);
  return;
}



/* Entry: 106f89cfc; end: 106f89d53; -[SCSpectaclesLagunaNetworkClient _checkIfResponseTimedOut] */

void FUN_106f89cfc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bfda9c0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a67d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHasProcessedData__112647410,0);
    return;
  }
  func_0x00010c0cbd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f89d54; end: 106f89eaf; -[SCSpectaclesLagunaNetworkClient _handleAmbaResponseData:] */

/* WARNING: Removing unreachable block (ram,0x000106f89db8) */

void FUN_106f89d54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126d3970;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  _objc_retain(0);
  puVar2 = puVar1;
  func_0x00010bfd9040();
  if ((int)puVar2 != 0) {
    puVar2 = puVar1;
    func_0x00010c0c64c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfd61e0();
    if (((ulong)puVar3 & 1) == 0) {
      _objc_release(puVar2);
    }
    else {
      puVar3 = puVar1;
      func_0x00010c0c64c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf63fa0();
      _objc_release(puVar3);
      _objc_release(puVar2);
      if ((int)puVar4 != 0) {
        puVar2 = puVar1;
        func_0x00010c0c64c0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c189640();
        _objc_release(puVar2);
        _objc_retain(puVar1);
        uVar5 = *(undefined8 *)(param_1 + 8);
        *(undefined **)(param_1 + 8) = puVar1;
        _objc_release(uVar5);
        goto LAB_106f89e88;
      }
    }
  }
  func_0x00010be2eba0(param_1,param_2,puVar1);
LAB_106f89e88:
  _objc_release(puVar1);
  _objc_release(0);
  return;
}



/* Entry: 106f89eb0; end: 106f89f33; -[SCSpectaclesLagunaNetworkClient _handleAmbaDataMessage:] */

void FUN_106f89eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar2);
  _objc_retain(param_3);
  uVar1 = uVar2;
  func_0x00010c0c64c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4460();
  _objc_release(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  func_0x00010be2eba0(param_1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106f89f34; end: 106f89fc7; -[SCSpectaclesLagunaNetworkClient _handleReceivedResponse:] */

void FUN_106f89f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0ef300(param_1);
  func_0x00010c1d73a0(param_1,param_2,lVar1 + -1);
  lVar1 = param_1;
  func_0x00010c0cbd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d3978;
  _objc_alloc(PTR_PTR_1126d3978);
  func_0x00010bff2ca0();
  _objc_release(param_3);
  func_0x00010bf42ca0(lVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f89fc8; end: 106f8a097; -[SCSpectaclesLagunaNetworkClient _exchangeNonces] */

void FUN_106f89fc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d3178;
  func_0x00010c0db120(PTR_PTR_1126d3178,param_2,0x10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf94040(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ac80();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126d3230;
  _objc_alloc_init(PTR_PTR_1126d3230);
  puVar4 = puVar3;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7160();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c0cb140(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6ec0();
  _objc_release(puVar4);
  func_0x00010be9efe0(param_1,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106f8a098; end: 106f8a1bf; -[SCSpectaclesLagunaNetworkClient _sendEncryptionSetupRequest:] */

void FUN_106f8a098(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = param_1;
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bf48ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e78258,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42c80(puVar3,param_2,param_1,puVar1);
  }
  else {
    func_0x00010c25c420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cb2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bf64c40(param_1,param_2,uVar2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bda00(puVar3,param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar2);
    puVar1 = param_1;
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f8a1c0; end: 106f8a3cb; -[SCSpectaclesLagunaNetworkClient _handleEncryptionSetupResponseData:] */

/* WARNING: Removing unreachable block (ram,0x000106f8a228) */

void FUN_106f8a1c0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126d3980;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c008360();
  _objc_release(param_3);
  _objc_retain(0);
  uVar2 = param_1;
  func_0x00010bf94040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf48ce0();
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) goto LAB_106f8a24c;
  puVar4 = puVar1;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0cba00();
  _objc_release(puVar4);
  if ((int)puVar5 == 8) {
    uVar2 = param_1;
    func_0x00010bf94040(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0cb140(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0cb3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ef020(uVar2,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf94040();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf48ce0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) goto LAB_106f8a374;
    func_0x00010c162480(param_1,param_2,1);
    func_0x00010bf48ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42cc0();
    uVar2 = param_1;
  }
  else {
LAB_106f8a374:
    uVar2 = param_1;
    func_0x00010bf48ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e78258,1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf42c80(uVar2,param_2,param_1,puVar4);
    _objc_release(puVar4);
  }
  _objc_release(uVar2);
LAB_106f8a24c:
  _objc_release(puVar1);
  _objc_release(0);
  return;
}



/* Entry: 106f8a3cc; end: 106f8a51b; -[SCSpectaclesLagunaNetworkClient messageBufferReceivedData:messageType:] */

void FUN_106f8a3cc(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if (param_4 < 2) {
    if (param_4 == 0) {
      func_0x00010be25980(param_1,param_2,param_3);
    }
    else if (param_4 == 1) {
      uVar1 = param_1;
      func_0x00010bf94040();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf48ce0();
      _objc_release(uVar1);
      if ((uVar2 & 1) == 0) {
        uVar1 = param_1;
        func_0x00010bf48ec0(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                            &PTR____CFConstantStringClassReference_110e78258,1,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf42c80(uVar1,param_2,param_1,puVar3);
        _objc_release(puVar3);
      }
      else {
        uVar2 = param_1;
        func_0x00010bf94040();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar2;
        func_0x00010bf678c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        func_0x00010be25980(param_1,param_2,uVar1);
      }
      _objc_release(uVar1);
    }
  }
  else if (param_4 == 2) {
    func_0x00010be28e60(param_1,param_2,param_3);
  }
  else if (param_4 == 3) {
    func_0x00010be25960(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f8a51c; end: 106f8a53f; -[SCSpectaclesLagunaNetworkClient channelDidOpen:] */

void FUN_106f8a51c(undefined8 param_1)

{
  func_0x00010bebf540();
                    /* WARNING: Could not recover jumptable at 0x00010be0b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__exchangeNonces_112560740);
  return;
}



/* Entry: 106f8a540; end: 106f8a59b; -[SCSpectaclesLagunaNetworkClient channel:didError:] */

void FUN_106f8a540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf48ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42c80();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f8a59c; end: 106f8a5f7; -[SCSpectaclesLagunaNetworkClient channel:didReadData:] */

void FUN_106f8a59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c1a67c0(param_1,param_2,1);
  func_0x00010c0cb2c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1147e0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f8a5f8; end: 106f8a5ff; -[SCSpectaclesLagunaNetworkClient channelDidWriteData:] */

void FUN_106f8a5f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a67d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setHasProcessedData__112647410,1);
  return;
}



/* Entry: 106f8a600; end: 106f8a63f; -[SCSpectaclesLagunaNetworkClient channelDidClose:] */

void FUN_106f8a600(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c25c420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d9e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c20e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStream__112661370,0);
  return;
}



/* Entry: 106f8a640; end: 106f8a657; -[SCSpectaclesLagunaNetworkClient connectivityDelegate] */

void FUN_106f8a640(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f8a658; end: 106f8a663; -[SCSpectaclesLagunaNetworkClient setConnectivityDelegate:] */

void FUN_106f8a658(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106f8a664; end: 106f8a67b; -[SCSpectaclesLagunaNetworkClient messagingDelegate] */

void FUN_106f8a664(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f8a67c; end: 106f8a687; -[SCSpectaclesLagunaNetworkClient setMessagingDelegate:] */

void FUN_106f8a67c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 106f8a688; end: 106f8a68f; -[SCSpectaclesLagunaNetworkClient stream] */

undefined8 FUN_106f8a688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106f8a690; end: 106f8a6bf; -[SCSpectaclesLagunaNetworkClient setStream:] */

void FUN_106f8a690(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f8a6c0; end: 106f8a6c7; -[SCSpectaclesLagunaNetworkClient messageBuffer] */

undefined8 FUN_106f8a6c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}


