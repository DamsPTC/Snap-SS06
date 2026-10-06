/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107ded61c; end: 107ded63f; -[SCWebServerConnection isUsingIPv6] */

bool FUN_107ded61c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf25f00();
  return *(char *)(lVar1 + 1) == '\x1e';
}



/* Entry: 107ded640; end: 107ded743; -[SCWebServerConnection _initializeResponseHeadersWithStatusCode:] */

void FUN_107ded640(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + 0x68) = param_3;
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CFHTTPMessageCreateResponse(uVar1,param_3,0,*(undefined8 *)PTR__kCFHTTPVersion1_1_11034bad8);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _CFHTTPMessageSetHeaderFieldValue();
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15f440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _CFHTTPMessageSetHeaderFieldValue(uVar4,&PTR____CFConstantStringClassReference_110ebf438,uVar1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_107def9a4();
  _CFHTTPMessageSetHeaderFieldValue(uVar1,&PTR____CFConstantStringClassReference_110ebf458,puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d7eb0;
  func_0x00010c1362e0(PTR_PTR_1126d7eb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e0e0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107ded744; end: 107ded80f; -[SCWebServerConnection _startProcessingRequest] */

void FUN_107ded744(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010c1085c0(param_1,param_2,*(undefined8 *)(param_1 + 0x48));
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107ded810;
    puStack_40 = &UNK_110a0d4f8;
    lStack_38 = param_1;
    func_0x00010c115280(param_1,param_2,*(undefined8 *)(param_1 + 0x48),&puStack_58);
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126d7eb0;
    func_0x00010c1363e0(PTR_PTR_1126d7eb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e0e0(uVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    func_0x00010be17180(param_1,param_2,lVar1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 107ded810; end: 107ded81b;  */

void FUN_107ded810(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be17190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__finishProcessingRequest__112563600,param_2);
  return;
}



/* Entry: 107ded81c; end: 107dedb93; -[SCWebServerConnection _finishProcessingRequest:] */

void FUN_107ded81c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  if (param_3 == 0) goto LAB_107ded894;
  lVar3 = param_3;
  func_0x00010bfd4b60();
  if (((int)lVar3 == 0) || (func_0x00010c1096a0(param_3), (*(byte *)(param_1 + 0x38) & 1) != 0)) {
LAB_107ded870:
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(long *)(param_1 + 0x60) = param_3;
    _objc_release(uVar2);
  }
  else {
    lVar3 = param_3;
    func_0x00010c0f8be0();
    _objc_retain(0);
    if ((int)lVar3 != 0) goto LAB_107ded870;
  }
  _objc_release(0);
LAB_107ded894:
  if (*(long *)(param_1 + 0x60) == 0) {
    func_0x00010beec5c0(param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    puVar7 = PTR_PTR_1126d7eb0;
    func_0x00010bf991a0(PTR_PTR_1126d7eb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e0e0(uVar2);
    _objc_release(puVar7);
  }
  else {
    func_0x00010c252ee0();
    func_0x00010be3ba00(param_1);
    lVar3 = *(long *)(param_1 + 0x60);
    func_0x00010c089680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c089680(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      FUN_107def9a4();
      _CFHTTPMessageSetHeaderFieldValue
                (uVar2,&PTR____CFConstantStringClassReference_110ea53d8,uVar5);
      _objc_release(uVar4);
    }
    lVar3 = *(long *)(param_1 + 0x60);
    func_0x00010bf8bce0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010bf8bce0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _CFHTTPMessageSetHeaderFieldValue
                (uVar2,&PTR____CFConstantStringClassReference_110ea53f8,uVar4);
      _objc_release(uVar4);
    }
    lVar3 = *(long *)(param_1 + 0x60);
    func_0x00010c252ee0();
    if (199 < lVar3) {
      lVar3 = *(long *)(param_1 + 0x60);
      func_0x00010c252ee0();
      if (lVar3 < 300) {
        lVar3 = *(long *)(param_1 + 0x60);
        func_0x00010bf265a0();
        ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar2 = *(undefined8 *)(param_1 + 0x58);
        if (lVar3 == 0) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110ebf498;
        }
        else {
          func_0x00010bf265a0();
          func_0x00010c14de00(ppuVar6);
        }
        _CFHTTPMessageSetHeaderFieldValue
                  (uVar2,&PTR____CFConstantStringClassReference_110ea5398,ppuVar6);
      }
    }
    lVar3 = *(long *)(param_1 + 0x60);
    func_0x00010bf4dac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010bf4dac0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      FUN_107def694();
      _CFHTTPMessageSetHeaderFieldValue
                (uVar2,&PTR____CFConstantStringClassReference_110dbea38,uVar5);
      _objc_release(uVar4);
    }
    lVar3 = *(long *)(param_1 + 0x60);
    func_0x00010bf4c940();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar3 != -1) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010bf4c940();
      func_0x00010c14de00(puVar7);
      _CFHTTPMessageSetHeaderFieldValue
                (uVar2,&PTR____CFConstantStringClassReference_110dd69f8,puVar7);
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x60);
    func_0x00010c294940();
    if (iVar1 != 0) {
      _CFHTTPMessageSetHeaderFieldValue
                (*(undefined8 *)(param_1 + 0x58),&PTR____CFConstantStringClassReference_110ebf4b8,
                 &PTR____CFConstantStringClassReference_110ebf4d8);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010befd000(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97ce0();
    _objc_release(uVar2);
    func_0x00010beeba60(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107dedb94; end: 107dedb9f;  */

void FUN_107dedb94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFHTTPMessageSetHeaderFieldValue_11034baa0)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58));
  return;
}



/* Entry: 107dedba0; end: 107dedc13;  */

void FUN_107dedba0(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  if ((int)param_2 == 0) {
    if (*(char *)(param_1 + 0x28) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010c0f85b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60),PTR_s_performClose_11261bb88);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x28) != '\0') {
    uStack_18 = *(undefined8 *)(param_1 + 0x20);
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_107dedc14;
    puStack_20 = &UNK_110841f20;
    func_0x00010beeb840(uStack_18,param_2,&puStack_38);
    return;
  }
  return;
}



/* Entry: 107dedc14; end: 107dedc83;  */

void FUN_107dedc14(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c0f85a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60));
  if ((param_2 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  puVar1 = PTR_PTR_1126d7eb0;
  func_0x00010bf991a0(PTR_PTR_1126d7eb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e0e0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107dedc84; end: 107dede17; -[SCWebServerConnection _readBodyWithLength:initialData:] */

void FUN_107dedc84(long param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x48);
  uStack_48 = 0;
  func_0x00010c0f8be0(uVar1,param_2,&uStack_48);
  uVar4 = uStack_48;
  _objc_retain(uStack_48);
  if ((uVar1 & 1) != 0) {
    lVar2 = param_4;
    func_0x00010c08fa60();
    uVar5 = uVar4;
    if (lVar2 != 0) {
      uVar1 = *(ulong *)(param_1 + 0x48);
      uStack_50 = uVar4;
      func_0x00010c0f96a0(uVar1,param_2,param_4,&uStack_50);
      uVar5 = uStack_50;
      _objc_retain(uStack_50);
      _objc_release(uVar4);
      if ((uVar1 & 1) == 0) {
        uStack_58 = uVar5;
        func_0x00010c0f85c0(*(undefined8 *)(param_1 + 0x48),param_2,&uStack_58);
        uVar4 = uStack_58;
        _objc_retain(uStack_58);
        _objc_release(uVar5);
        goto LAB_107dedde0;
      }
      lVar2 = param_4;
      func_0x00010c08fa60();
      param_3 = param_3 - lVar2;
    }
    if (param_3 != 0) {
      uStack_80 = 0xc2000000;
      pcStack_78 = FUN_107dede18;
      puStack_70 = &UNK_110848bd8;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_68 = param_1;
      _objc_retain(uVar5);
      uStack_60 = uVar5;
      func_0x00010be86340(param_1,param_2,param_3,&puStack_88);
      _objc_release(uStack_60);
      goto LAB_107deddf0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uStack_90 = uVar5;
    func_0x00010c0f85c0(uVar3,param_2,&uStack_90);
    uVar4 = uStack_90;
    _objc_retain(uStack_90);
    _objc_release(uVar5);
    if ((int)uVar3 != 0) {
      func_0x00010bec12a0(param_1);
      uVar5 = uVar4;
      goto LAB_107deddf0;
    }
  }
LAB_107dedde0:
  func_0x00010beec5c0(param_1,param_2,*(undefined8 *)(param_1 + 0x48),500);
  uVar5 = uVar4;
LAB_107deddf0:
  _objc_release(uVar5);
  _objc_release(param_4);
  return;
}



/* Entry: 107dede18; end: 107dede8b;  */

void FUN_107dede18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  uStack_38 = 0;
  func_0x00010c0f85c0(uVar2,param_2,&uStack_38);
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  if ((int)uVar2 == 0) {
    func_0x00010beec5c0(*(long *)(param_1 + 0x20),param_2,
                        *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48),500);
  }
  else {
    func_0x00010bec12a0();
  }
  _objc_release(uVar1);
  return;
}



/* Entry: 107dede8c; end: 107dedff3; -[SCWebServerConnection _readChunkedBodyWithInitialData:] */

void FUN_107dede8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x48);
  uStack_38 = 0;
  func_0x00010c0f8be0(uVar2,param_2,&uStack_38);
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  if ((uVar2 & 1) == 0) {
    func_0x00010beec5c0(param_1,param_2,*(undefined8 *)(param_1 + 0x48),500);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    func_0x00010c008240();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x107dedf80;
    puStack_50 = &UNK_110848bd8;
    lStack_48 = param_1;
    _objc_retain(uVar1);
    uStack_40 = uVar1;
    func_0x00010be865c0(param_1,param_2,puVar3,&puStack_68);
    _objc_release(uStack_40);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107dedff4; end: 107dee08f; -[SCWebServerConnection _readRequestHeaders] */

void FUN_107dedff4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  _CFHTTPMessageCreateEmpty(uVar1,1);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  puVar2 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  func_0x00010bffc4a0();
  func_0x00010be86520(param_1);
  _objc_release(puVar2);
  return;
}



/* Entry: 107dee090; end: 107dee5a3;  */

/* WARNING: Possible PIC construction at 0x000107dee4b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107dee52c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107dee4b4) */

void FUN_107dee090(long param_1,ulong param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 uVar20;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_2;
  _objc_retain(param_2);
  iVar15 = (int)uVar12;
  if (param_2 == 0) {
    func_0x00010beec5c0();
  }
  else {
    ppuVar2 = *(undefined ***)(*(long *)(param_1 + 0x20) + 0x40);
    _CFHTTPMessageCopyRequestMethod();
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c22e0e0();
    if ((iVar1 != 0) && (ppuVar3 = ppuVar2, func_0x00010c0720c0(), (int)ppuVar3 != 0)) {
      _objc_release(ppuVar2);
      *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x38) = 1;
      ppuVar2 = &PTR____CFConstantStringClassReference_110deec98;
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
    _CFHTTPMessageCopyAllHeaderFields();
    puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x40);
    _CFHTTPMessageCopyRequestURL();
    if (puVar5 == (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      puVar6 = PTR____NSDictionary0__struct_11034ab58;
    }
    else {
      puVar6 = puVar5;
      _CFURLCopyPath();
      puVar19 = puVar6;
      FUN_107defc34();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      iVar15 = 0;
      puVar7 = puVar5;
      _CFURLCopyQueryString();
      puVar6 = PTR____NSDictionary0__struct_11034ab58;
      if (puVar7 != (undefined *)0x0) {
        puVar6 = puVar7;
        FUN_107defc68();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
      }
    }
    if ((((ppuVar2 == (undefined **)0x0 || puVar5 == (undefined *)0x0) || lVar4 == 0) ||
        puVar19 == (undefined *)0x0) || puVar6 == (undefined *)0x0) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
LAB_107dee1e0:
      func_0x00010beec5c0(uVar8);
    }
    else {
      lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 8);
      func_0x00010bfd3360();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar9;
      func_0x00010bf52a60();
      lVar14 = lRam0000000000000000;
      while (lVar11 != 0) {
        lVar17 = 0;
        do {
          if (lRam0000000000000000 != lVar14) {
            _objc_enumerationMutation(lVar9);
          }
          uVar20 = *(undefined8 *)(lVar17 * 8);
          lVar18 = *(long *)(param_1 + 0x20);
          _objc_retain(uVar20);
          uVar8 = *(undefined8 *)(lVar18 + 0x50);
          *(undefined8 *)(lVar18 + 0x50) = uVar20;
          _objc_release(uVar8);
          lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
          func_0x00010c0bcc20();
          _objc_retainAutoreleasedReturnValue();
          lVar18 = lVar10;
          ppuVar3 = ppuVar2;
          (**(code **)(lVar10 + 0x10))();
          iVar15 = (int)ppuVar3;
          _objc_retainAutoreleasedReturnValue();
          uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
          *(long *)(*(long *)(param_1 + 0x20) + 0x48) = lVar18;
          _objc_release(uVar8);
          _objc_release(lVar10);
          if (*(long *)(*(long *)(param_1 + 0x20) + 0x48) != 0) goto LAB_107dee31c;
          lVar17 = lVar17 + 1;
        } while (lVar11 != lVar17);
        lVar11 = lVar9;
        func_0x00010bf52a60();
      }
      uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50) = 0;
      _objc_release(uVar8);
LAB_107dee31c:
      _objc_release(lVar9);
      lVar11 = *(long *)(param_1 + 0x20);
      if (*(long *)(lVar11 + 0x48) == 0) {
        puVar7 = PTR_PTR_1126c0020;
        _objc_alloc();
        func_0x00010c02bcc0();
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
        *(undefined **)(*(long *)(param_1 + 0x20) + 0x48) = puVar7;
        _objc_release(uVar8);
        func_0x00010beec5c0();
      }
      else {
        func_0x00010c09d780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1befe0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
        _objc_release(lVar11);
        uVar8 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c129bc0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ea1e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
        _objc_release(uVar8);
        iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
        func_0x00010bfd4b60();
        if (iVar1 == 0) {
          func_0x00010bec12a0();
        }
        else {
          func_0x00010c1098a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
          uVar12 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x48);
          func_0x00010c294940();
          if ((uVar12 & 1) == 0) {
            uVar12 = param_2;
            func_0x00010c08fa60();
            uVar13 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x48);
            func_0x00010bf4c940();
            if (uVar13 < uVar12) {
              uVar8 = *(undefined8 *)(param_1 + 0x20);
              goto LAB_107dee1e0;
            }
          }
          lVar11 = lVar4;
          func_0x00010c0dff20();
          _objc_retainAutoreleasedReturnValue();
          if (lVar11 == 0) {
            iVar15 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
            func_0x00010c294940();
            lVar16 = *(long *)(param_1 + 0x20);
            if (iVar15 == 0) {
              uVar8 = *(undefined8 *)(lVar16 + 0x48);
              func_0x00010bf4c940(uVar8);
              goto code_r0x00010be86320;
            }
            goto code_r0x00010be86380;
          }
          lVar14 = lVar11;
          func_0x00010bf32ee0();
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          if (lVar14 == 0) {
            _objc_retain(param_2);
            func_0x00010beeb8e0(uVar8);
            _objc_release(param_2);
          }
          else {
            func_0x00010beec5c0(uVar8);
          }
          _objc_release(lVar11);
        }
      }
    }
    _objc_release(puVar6);
    _objc_release(puVar19);
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(ppuVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  ___stack_chk_fail();
  if (iVar15 == 0) {
    return;
  }
  iVar15 = (int)*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x48);
  func_0x00010c294940();
  lVar16 = *(long *)(param_2 + 0x20);
  if (iVar15 == 0) {
    uVar8 = *(undefined8 *)(lVar16 + 0x48);
    func_0x00010bf4c940(uVar8);
    param_2 = *(ulong *)(param_2 + 0x28);
code_r0x00010be86320:
                    /* WARNING: Could not recover jumptable at 0x00010be86330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (lVar16,PTR_s__readBodyWithLength_initialData__11257f268,uVar8,param_2);
    return;
  }
  param_2 = *(ulong *)(param_2 + 0x28);
code_r0x00010be86380:
                    /* WARNING: Could not recover jumptable at 0x00010be86390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar16,PTR_s__readChunkedBodyWithInitialData__11257f280,param_2);
  return;
}



/* Entry: 107dee5a4; end: 107dee60b;  */

void FUN_107dee5a4(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010c294940();
  lVar3 = *(long *)(param_1 + 0x20);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be86390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (lVar3,PTR_s__readChunkedBodyWithInitialData__11257f280,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x48);
  func_0x00010bf4c940(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be86330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar3,PTR_s__readBodyWithLength_initialData__11257f268,uVar2,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 107dee60c; end: 107dee797; -[SCWebServerConnection initWithServer:localAddress:remoteAddress:socket:] */

undefined1 *
FUN_107dee60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126fb358;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    *(undefined4 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    puVar3 = PTR_PTR_1126d7eb0;
    func_0x00010c251d80(PTR_PTR_1126d7eb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e0e0(uVar2);
    _objc_release(puVar3);
    func_0x00010c2a6c40(*(undefined8 *)((long)puVar1 + 8));
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c0e8e20();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x00010bf3dd20(puVar1);
      puVar4 = (undefined1 *)0x0;
      goto LAB_107dee758;
    }
    *(undefined1 *)((long)puVar1 + 0x70) = 1;
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    puVar3 = PTR_PTR_1126d7eb0;
    func_0x00010bf48540(PTR_PTR_1126d7eb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7e0e0(uVar2);
    _objc_release(puVar3);
    func_0x00010be866c0(puVar1);
  }
  _objc_retain(puVar1);
  puVar4 = (undefined1 *)puVar1;
LAB_107dee758:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 107dee798; end: 107dee7b3; -[SCWebServerConnection localAddressString] */

/* WARNING: Removing unreachable block (ram,0x000107deff4c) */

void FUN_107dee798(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *apuStack_429 [128];
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf25f00();
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    param_3 = apuStack_429;
    param_4 = 0x401;
    _getnameinfo();
    if ((int)lVar1 < 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      param_3 = &PTR____CFConstantStringClassReference_110ebf6f8;
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    ppuVar3 = &puStack_490;
    puStack_488 = PTR_PTR_1126fb368;
    puStack_490 = puVar2;
    _objc_msgSendSuper2(&puStack_490,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined **)0x0) {
      *(undefined ***)((long)ppuVar3 + 8) = param_3;
      *(undefined8 *)((long)ppuVar3 + 0x10) = param_4;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dee7b4; end: 107dee7cf; -[SCWebServerConnection remoteAddressString] */

/* WARNING: Removing unreachable block (ram,0x000107deff4c) */

void FUN_107dee7b4(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *apuStack_429 [128];
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf25f00();
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)0x0;
  if (lVar1 != 0) {
    param_3 = apuStack_429;
    param_4 = 0x401;
    _getnameinfo();
    if ((int)lVar1 < 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      param_3 = &PTR____CFConstantStringClassReference_110ebf6f8;
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    ppuVar3 = &puStack_490;
    puStack_488 = PTR_PTR_1126fb368;
    puStack_490 = puVar2;
    _objc_msgSendSuper2(&puStack_490,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined **)0x0) {
      *(undefined ***)((long)ppuVar3 + 8) = param_3;
      *(undefined8 *)((long)ppuVar3 + 0x10) = param_4;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dee7d0; end: 107dee84b; -[SCWebServerConnection dealloc] */

void FUN_107dee7d0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3dd20();
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x00010bf3d9e0(param_1);
  }
  func_0x00010bf757e0(*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x40) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_1126fb358;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107dee84c; end: 107dee8db; -[SCWebServerConnection closeSocket] */

void FUN_107dee84c(long param_1,undefined8 param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  piVar1 = (int *)(ulong)*(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
    _close();
    puVar2 = PTR_PTR_1126d7eb0;
    uVar3 = *(undefined8 *)(param_1 + 8);
    if ((int)piVar1 == 0) {
      func_0x00010bf3df80(PTR_PTR_1126d7eb0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ___error();
      func_0x00010bf991a0(puVar2,param_2,(long)*piVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf7e0e0(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  return;
}



/* Entry: 107dee8dc; end: 107dee8e3; -[SCWebServerConnection server] */

undefined8 FUN_107dee8dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107dee8e4; end: 107dee8eb; -[SCWebServerConnection localAddressData] */

undefined8 FUN_107dee8e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dee8ec; end: 107dee8f3; -[SCWebServerConnection remoteAddressData] */

undefined8 FUN_107dee8ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dee8f4; end: 107dee8fb; -[SCWebServerConnection totalBytesRead] */

undefined8 FUN_107dee8f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dee8fc; end: 107dee903; -[SCWebServerConnection totalBytesWritten] */

undefined8 FUN_107dee8fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dee904; end: 107dee963; -[SCWebServerConnection .cxx_destruct] */

void FUN_107dee904(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107dee964; end: 107dee96b; -[SCWebServerConnection open] */

undefined8 FUN_107dee964(void)

{
  return 1;
}



/* Entry: 107dee96c; end: 107dee97b; -[SCWebServerConnection didReadBytes:length:] */

void FUN_107dee96c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + param_4;
  return;
}



/* Entry: 107dee97c; end: 107dee98b; -[SCWebServerConnection didWriteBytes:length:] */

void FUN_107dee97c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + param_4;
  return;
}



/* Entry: 107dee98c; end: 107dee993; -[SCWebServerConnection preflightRequest:] */

undefined8 FUN_107dee98c(void)

{
  return 0;
}



/* Entry: 107dee994; end: 107deea2b; -[SCWebServerConnection processRequest:completion:] */

void FUN_107dee994(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010bf0c100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf51e00(param_4);
  (**(code **)(lVar1 + 0x10))(lVar1,param_3,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107deea2c; end: 107deea5b; -[SCWebServerConnection abortRequest:withStatusCode:] */

void FUN_107deea2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010be3ba00(param_1,param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010beeba70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__writeHeadersWithCompletionBlock_112598840,
             &PTR___NSConcreteGlobalBlock_110a0d528);
  return;
}



/* Entry: 107deea5c; end: 107deea5f;  */

void FUN_107deea5c(void)

{
  return;
}



/* Entry: 107deea60; end: 107deea63; -[SCWebServerConnection close] */

void FUN_107deea60(void)

{
  return;
}



/* Entry: 107deea64; end: 107deeb9b; -[SCWebServerDataRequest open:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_107deea64(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_1;
  func_0x00010bf4c940();
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  if (lVar5 == -1) {
    _objc_alloc_init();
  }
  else {
    _objc_alloc();
    lVar5 = param_1;
    func_0x00010bf4c940(param_1);
    func_0x00010bffc4a0(puVar1,param_2,lVar5);
  }
  lVar5 = (long)_DAT_11276fc40;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  lVar5 = *(long *)(param_1 + lVar5);
  if ((param_3 != (undefined8 *)0x0) && (lVar5 == 0)) {
    uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_40 = &PTR____CFConstantStringClassReference_110ebf558;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240(puVar1,param_2,&PTR____CFConstantStringClassReference_110ebf538,
                        0xffffffffffffffff,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = puVar1;
    _objc_release(puVar2);
  }
  uVar3 = (ulong)(lVar5 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar3;
  }
  ___stack_chk_fail();
  func_0x00010bf06ae0(*(undefined8 *)(uVar3 + (long)_DAT_11276fc40));
  return 1;
}



/* Entry: 107deeb9c; end: 107deebbf; -[SCWebServerDataRequest writeData:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107deeb9c(long param_1)

{
  func_0x00010bf06ae0(*(undefined8 *)(param_1 + _DAT_11276fc40));
  return 1;
}



/* Entry: 107deebc0; end: 107deebc7; -[SCWebServerDataRequest close:] */

undefined8 FUN_107deebc0(void)

{
  return 1;
}



/* Entry: 107deebc8; end: 107deebd7; -[SCWebServerDataRequest data] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107deebc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276fc40);
}



/* Entry: 107deebd8; end: 107deec17; -[SCWebServerDataRequest setData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107deebd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fc40;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107deec18; end: 107deec67; -[SCWebServerDataRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107deec18(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276fc40,0);
  _objc_storeStrong(param_1 + _DAT_11276fc44,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fc48,0);
  return;
}



/* Entry: 107deec68; end: 107deed73; -[SCWebServerDataRequest text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107deec68(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11276fc48;
  if (*(long *)(param_1 + lVar5) == 0) {
    lVar1 = param_1;
    func_0x00010bf4dac0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfda7c0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010bf4dac0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      FUN_107def7fc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      lVar1 = param_1;
      func_0x00010bf63640(param_1);
      _objc_retainAutoreleasedReturnValue();
      FUN_107def954(lVar2);
      func_0x00010c008340();
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined **)(param_1 + lVar5) = puVar3;
      _objc_release(uVar4);
      _objc_release(lVar1);
      _objc_release(lVar2);
    }
  }
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 107deed74; end: 107deee5b; -[SCWebServerDataRequest jsonObject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107deed74(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11276fc44;
  lVar5 = *(long *)(param_1 + lVar6);
  if (lVar5 == 0) {
    uVar1 = param_1;
    func_0x00010bf4dac0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_107def788();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110e01958);
    if ((((uVar1 & 1) != 0) ||
        (uVar1 = uVar2,
        func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ebf5b8),
        (uVar1 & 1) != 0)) ||
       (uVar1 = uVar2,
       func_0x00010c0720c0(uVar2,param_2,&PTR____CFConstantStringClassReference_110ebf5d8),
       (int)uVar1 != 0)) {
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x00010bdc1900(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,
                          *(undefined8 *)(param_1 + (long)_DAT_11276fc40),0,0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(undefined **)(param_1 + lVar6) = puVar3;
      _objc_release(uVar4);
    }
    _objc_release(uVar2);
    lVar5 = *(long *)(param_1 + lVar6);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 107deee5c; end: 107deeec7; +[SCWebServerDataResponse responseWithData:contentType:] */

void FUN_107deee5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c0082a0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107deeec8; end: 107deef9f; -[SCWebServerDataResponse initWithData:contentType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107deeec8(undefined1 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    ppuVar3 = (undefined1 **)0x0;
  }
  else {
    puStack_38 = PTR_PTR_1126fb360;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
    if (ppuVar3 != (undefined1 **)0x0) {
      lVar2 = (long)_DAT_11276fc4c;
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)((long)ppuVar3 + lVar2);
      *(long *)((long)ppuVar3 + lVar2) = param_3;
      _objc_release(uVar1);
      func_0x00010c182a00(ppuVar3);
      func_0x00010c08fa60(param_3);
      func_0x00010c182140(ppuVar3);
    }
    _objc_retain(ppuVar3);
    param_1 = (undefined1 *)ppuVar3;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return (undefined1 *)ppuVar3;
}



/* Entry: 107deefa0; end: 107def013; -[SCWebServerDataResponse readData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107deefa0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11276fc50;
  if (*(char *)(param_1 + lVar2) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = *(undefined **)(param_1 + _DAT_11276fc4c);
    _objc_retain(puVar1);
    *(undefined1 *)(param_1 + lVar2) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107def014; end: 107def027; -[SCWebServerDataResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107def014(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276fc4c,0);
  return;
}



/* Entry: 107def028; end: 107def06f; +[SCWebServerDataResponse responseWithText:] */

void FUN_107def028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c0511e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107def070; end: 107def0b7; +[SCWebServerDataResponse responseWithHTML:] */

void FUN_107def070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c019800();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107def0b8; end: 107def11f; +[SCWebServerDataResponse responseWithHTMLTemplate:variables:] */

void FUN_107def0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c019820();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107def120; end: 107def167; +[SCWebServerDataResponse responseWithJSONObject:] */

void FUN_107def120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c020720();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107def168; end: 107def1cf; +[SCWebServerDataResponse responseWithJSONObject:contentType:] */

void FUN_107def168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(param_1);
  func_0x00010c020740();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107def1d0; end: 107def24b; -[SCWebServerDataResponse initWithText:] */

undefined8 FUN_107def1d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c0082a0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110ebf5f8);
    _objc_retain();
    uVar1 = param_1;
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107def24c; end: 107def2c7; -[SCWebServerDataResponse initWithHTML:] */

undefined8 FUN_107def24c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c0082a0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110ebf618);
    _objc_retain();
    uVar1 = param_1;
  }
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 107def2c8; end: 107def3b3; -[SCWebServerDataResponse initWithHTMLTemplate:variables:] */

undefined8
FUN_107def2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c004040();
  _objc_release(param_3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_107def3b4;
  puStack_40 = &UNK_110882060;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf97ce0(param_4,param_2,&puStack_58);
  _objc_release(param_4);
  func_0x00010c019800(param_1,param_2,puVar1);
  _objc_retain();
  _objc_release(puStack_38);
  _objc_release(puVar1);
  _objc_release(param_1);
  return param_1;
}



/* Entry: 107def3b4; end: 107def453;  */

void FUN_107def3b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c130f80(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107def454; end: 107def45f; -[SCWebServerDataResponse initWithJSONObject:] */

void FUN_107def454(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c020750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithJSONObject_contentType__1125e5bb8,param_3,
             &PTR____CFConstantStringClassReference_110e01958);
  return;
}



/* Entry: 107def460; end: 107def4fb; -[SCWebServerDataResponse initWithJSONObject:contentType:] */

undefined8
FUN_107def460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c0082a0(param_1,param_2,puVar1,param_4);
    _objc_retain();
    uVar2 = param_1;
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 107def4fc; end: 107def693;  */

void FUN_107def4fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (puRam0000000113727fc0 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    _objc_alloc_init();
    puVar3 = puRam0000000113727fc0;
    puRam0000000113727fc0 = puVar2;
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c26fd80(PTR__OBJC_CLASS___NSTimeZone_1126b7518,param_2,
                        &PTR____CFConstantStringClassReference_110ebf658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215860(puRam0000000113727fc0,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c189b60(puRam0000000113727fc0,param_2,
                        &PTR____CFConstantStringClassReference_110ebf678);
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    _objc_alloc(PTR__OBJC_CLASS___NSLocale_1126af788);
    func_0x00010c026a60();
    func_0x00010c1bf3e0(puRam0000000113727fc0,param_2,puVar3);
    _objc_release(puVar3);
  }
  if (puRam0000000113727fc8 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
    _objc_alloc_init();
    puVar3 = puRam0000000113727fc8;
    puRam0000000113727fc8 = puVar2;
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
    func_0x00010c26fd80(PTR__OBJC_CLASS___NSTimeZone_1126b7518,param_2,
                        &PTR____CFConstantStringClassReference_110ebf658);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c215860(puRam0000000113727fc8,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c189b60(puRam0000000113727fc8,param_2,
                        &PTR____CFConstantStringClassReference_110ebf698);
    puVar3 = PTR__OBJC_CLASS___NSLocale_1126af788;
    _objc_alloc(PTR__OBJC_CLASS___NSLocale_1126af788);
    func_0x00010c026a60();
    func_0x00010c1bf3e0(puRam0000000113727fc8,param_2,puVar3);
    _objc_release(puVar3);
  }
  if (puRam0000000113824750 != (undefined *)0x0) {
    return;
  }
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  lVar1 = (long)puRam0000000113824750;
  puRam0000000113824750 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107def694; end: 107def787;  */

void FUN_107def694(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010c11f420(param_1,param_2,&PTR____CFConstantStringClassReference_110db97b8);
    lVar1 = param_1;
    if (lVar4 == 0x7fffffffffffffff) {
      lVar4 = param_1;
      func_0x00010c0b5ac0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c260c20(param_1,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010c260c00(param_1,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c25ce40(lVar2,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 107def788; end: 107def7fb;  */

void FUN_107def788(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar2 = param_1;
  if ((param_1 == 0) ||
     (lVar1 = param_1,
     func_0x00010c11f420(param_1,param_2,&PTR____CFConstantStringClassReference_110db97b8),
     lVar1 == 0x7fffffffffffffff)) {
    _objc_retain(param_1);
  }
  else {
    func_0x00010c260c20(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107def7fc; end: 107def953;  */

void FUN_107def7fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSScanner_1126b3380;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  func_0x00010c04e820();
  _objc_release(param_1);
  func_0x00010c179e80(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar1;
  func_0x00010c14f600();
  if ((int)puVar3 != 0) {
    func_0x00010c14f4e0(puVar1);
    puVar3 = puVar1;
    func_0x00010c14f4e0();
    if ((int)puVar3 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c2a4be0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14f5e0(puVar1);
      _objc_retain(0);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c14f600(puVar1);
      _objc_retain(0);
    }
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 107def954; end: 107def9a3;  */

long FUN_107def954(long param_1)

{
  long lVar1;
  
  _objc_retain();
  if (param_1 != 0) {
    lVar1 = param_1;
    _CFStringConvertIANACharSetNameToEncoding();
    _CFStringConvertEncodingToNSStringEncoding();
    if (lVar1 != 0xffffffff) goto LAB_107def98c;
  }
  lVar1 = 4;
LAB_107def98c:
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 107def9a4; end: 107defa97;  */

void FUN_107def9a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  uVar1 = uRam0000000113824750;
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107defa98;
  uStack_30 = 0x107defaa8;
  uStack_28 = 0;
  _objc_retain(param_1);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107defa98; end: 107defaaf;  */

void FUN_107defa98(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107defab0; end: 107defaf7;  */

void FUN_107defab0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = uRam0000000113727fc0;
  func_0x00010c25d400(uRam0000000113727fc0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107defaf8; end: 107defbeb;  */

void FUN_107defaf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  uVar1 = uRam0000000113824750;
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_107defa98;
  uStack_30 = 0x107defaa8;
  uStack_28 = 0;
  _objc_retain(param_1);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107defbec; end: 107defc33;  */

void FUN_107defbec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = uRam0000000113727fc0;
  func_0x00010bf65160(uRam0000000113727fc0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107defc34; end: 107defc67;  */

void FUN_107defc34(undefined8 param_1)

{
  _CFURLCreateStringByReplacingPercentEscapesUsingEncoding
            (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,param_1,
             &PTR____CFConstantStringClassReference_110daafd8,0x8000100);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107defc68; end: 107defecb;  */

void FUN_107defc68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuStack_70;
  long lStack_68;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSScanner_1126b3380;
  _objc_alloc();
  func_0x00010c04e820();
  func_0x00010c17ace0();
  lStack_68 = 0;
  puVar3 = puVar2;
  func_0x00010c14f600(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9ab8,&lStack_68);
  lVar4 = lStack_68;
  _objc_retain(lStack_68);
  if ((int)puVar3 != 0) {
    lVar7 = lVar4;
    do {
      puVar3 = puVar2;
      func_0x00010c06c740();
      lVar4 = lVar7;
      if (((ulong)puVar3 & 1) != 0) break;
      puVar3 = puVar2;
      func_0x00010c14ed80(puVar2);
      func_0x00010c1f6320(puVar2,param_2,puVar3 + 1);
      ppuStack_70 = (undefined **)0x0;
      func_0x00010c14f600(puVar2,param_2,&PTR____CFConstantStringClassReference_110df6378,
                          &ppuStack_70);
      ppuVar5 = ppuStack_70;
      _objc_retain(ppuStack_70);
      ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar5 != (undefined **)0x0) {
        ppuVar6 = ppuVar5;
      }
      func_0x00010c25cfc0(lVar7,param_2,&PTR____CFConstantStringClassReference_110dae918,
                          &PTR____CFConstantStringClassReference_110db2d98);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      if (lVar4 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar4;
        FUN_107defc34();
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar5 = ppuVar6;
      func_0x00010c25cfc0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110dae918,
                          &PTR____CFConstantStringClassReference_110db2d98);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar6);
      if (ppuVar5 == (undefined **)0x0) {
        ppuVar6 = (undefined **)0x0;
      }
      else {
        ppuVar6 = ppuVar5;
        FUN_107defc34();
        _objc_retainAutoreleasedReturnValue();
        if ((lVar7 != 0) && (ppuVar6 != (undefined **)0x0)) {
          func_0x00010c1d0560(puVar1,param_2,ppuVar6,lVar7);
        }
      }
      puVar3 = puVar2;
      func_0x00010c06c740();
      if (((ulong)puVar3 & 1) != 0) {
        _objc_release(ppuVar6);
        _objc_release(lVar7);
        _objc_release(ppuVar5);
        break;
      }
      puVar3 = puVar2;
      func_0x00010c14ed80(puVar2);
      func_0x00010c1f6320(puVar2,param_2,puVar3 + 1);
      _objc_release(ppuVar6);
      _objc_release(lVar7);
      _objc_release(ppuVar5);
      _objc_release(lVar4);
      lStack_68 = 0;
      puVar3 = puVar2;
      func_0x00010c14f600(puVar2,param_2,&PTR____CFConstantStringClassReference_110db9ab8,&lStack_68
                         );
      lVar4 = lStack_68;
      _objc_retain(lStack_68);
      lVar7 = lVar4;
    } while (((ulong)puVar3 & 1) != 0);
  }
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107defecc; end: 107deff87;  */

void FUN_107defecc(undefined1 *param_1,ulong param_2,undefined **param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined1 auStack_449 [32];
  undefined *apuStack_429 [128];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)0x0;
  if (param_1 != (undefined1 *)0x0) {
    param_3 = apuStack_429;
    param_4 = 0x401;
    _getnameinfo(param_1,*param_1,param_3,0x401,auStack_449,0x20,0xb);
    if ((int)param_1 < 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((param_2 & 1) == 0) {
        param_3 = apuStack_429;
        func_0x00010c25da80();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        param_3 = &PTR____CFConstantStringClassReference_110ebf6f8;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_490;
  puStack_488 = PTR_PTR_1126fb368;
  puStack_490 = puVar1;
  _objc_msgSendSuper2(&puStack_490,PTR_s_init_1125d9248);
  if (ppuVar2 != (undefined **)0x0) {
    *(undefined ***)((long)ppuVar2 + 8) = param_3;
    *(undefined8 *)((long)ppuVar2 + 0x10) = param_4;
  }
  return;
}



/* Entry: 107deff88; end: 107deffd3; -[SCWebServerBodyDecoder initWithRequest:writer:] */

void FUN_107deff88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fb368;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 107deffd4; end: 107deffdb; -[SCWebServerBodyDecoder open:] */

void FUN_107deffd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_open__112617da8);
  return;
}



/* Entry: 107deffdc; end: 107deffe3; -[SCWebServerBodyDecoder writeData:error:] */

void FUN_107deffdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2bda30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_writeData_error__11268d0b0);
  return;
}



/* Entry: 107deffe4; end: 107deffeb; -[SCWebServerBodyDecoder close:] */

void FUN_107deffe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3da10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_close__1125ad028);
  return;
}



/* Entry: 107deffec; end: 107df00a7; -[SCWebServerGZipDecoder open:] */

undefined8 FUN_107deffec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lStack_30;
  undefined *puStack_28;
  
  uVar3 = 0;
  lVar1 = param_1 + 0x18;
  _inflateInit2_(lVar1,0x1f,&UNK_10f45dced,0x70);
  if ((int)lVar1 == 0) {
    puStack_28 = PTR_PTR_1126fb370;
    lStack_30 = param_1;
    _objc_msgSendSuper2(&lStack_30,PTR_s_open__112617da8,param_3);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    _deflateEnd(param_1 + 0x18);
  }
  else if (param_3 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_3 = puVar2;
    return 0;
  }
  return 0;
}



/* Entry: 107df00a8; end: 107df0273; -[SCWebServerGZipDecoder writeData:error:] */

undefined1 * FUN_107df00a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lStack_60;
  undefined *puStack_58;
  
  plVar8 = &lStack_60;
  _objc_retain(param_3);
  uVar3 = param_3;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  puVar9 = (undefined8 *)(param_1 + 0x18);
  *puVar9 = uVar3;
  uVar3 = param_3;
  func_0x00010c08fa60();
  *(int *)(param_1 + 0x20) = (int)uVar3;
  puVar4 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_alloc();
  func_0x00010c022640();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x00010c08fa60();
    puVar6 = puVar4;
    _objc_retainAutorelease();
    func_0x00010c0d3c60();
    *(undefined **)(param_1 + 0x30) = puVar6;
    *(int *)(param_1 + 0x38) = (int)puVar5;
    puVar7 = puVar9;
    _inflate(puVar9,0);
    uVar2 = (uint)puVar7;
    if (uVar2 < 2) {
      uVar1 = *(uint *)(param_1 + 0x38);
      lVar10 = (long)puVar5 - (ulong)uVar1;
      while (uVar1 == 0) {
        func_0x00010c08fa60(puVar4);
        func_0x00010c1ba840(puVar4);
        puVar5 = puVar4;
        func_0x00010c08fa60();
        puVar6 = puVar4;
        _objc_retainAutorelease();
        func_0x00010c0d3c60();
        *(undefined **)(param_1 + 0x30) = puVar6 + lVar10;
        *(int *)(param_1 + 0x38) = (int)((long)puVar5 - lVar10);
        puVar7 = puVar9;
        _inflate(puVar9,0);
        uVar2 = (uint)puVar7;
        if (1 < uVar2) goto LAB_107df0148;
        uVar1 = *(uint *)(param_1 + 0x38);
        lVar10 = (((long)puVar5 - lVar10) - (ulong)uVar1) + lVar10;
      }
      if (uVar2 != 0) {
        *(undefined1 *)(param_1 + 0x88) = 1;
      }
      func_0x00010c1ba840(puVar4);
      if (lVar10 == 0) {
        plVar8 = (long *)0x1;
      }
      else {
        puStack_58 = PTR_PTR_1126fb370;
        lStack_60 = param_1;
        _objc_msgSendSuper2(&lStack_60,PTR_s_writeData_error__11268d0b0,puVar4,param_4);
      }
      goto LAB_107df0244;
    }
LAB_107df0148:
    if (param_4 != (undefined8 *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      plVar8 = (long *)0x0;
      *param_4 = puVar5;
      goto LAB_107df0244;
    }
  }
  plVar8 = (long *)0x0;
LAB_107df0244:
  _objc_release(puVar4);
  _objc_release(param_3);
  return (undefined1 *)plVar8;
}



/* Entry: 107df0274; end: 107df02c3; -[SCWebServerGZipDecoder close:] */

void FUN_107df0274(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  _inflateEnd(param_1 + 0x18);
  puStack_28 = PTR_PTR_1126fb370;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_close__1125ad028,param_3);
  return;
}



/* Entry: 107df02c4; end: 107df0823; -[SCWebServerRequest initWithMethod:url:headers:path:query:] */

undefined8 *
FUN_107df02c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126fb378;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar13 = puVar1[1];
    puVar1[1] = uVar2;
    _objc_release(uVar13);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar13 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar13);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    uVar13 = puVar1[3];
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar13;
    FUN_107def694();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar14);
    _objc_release(uVar13);
    uVar14 = puVar1[3];
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar14;
    FUN_107def694();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar2;
    func_0x00010c0720c0();
    *(char *)(puVar1 + 7) = (char)uVar13;
    _objc_release(uVar2);
    _objc_release(uVar14);
    lVar3 = puVar1[3];
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      if (*(char *)(puVar1 + 7) == '\x01') {
        if (puVar1[6] == 0) {
          puVar1[6] = &PTR____CFConstantStringClassReference_110dd69d8;
LAB_107df04d4:
          _objc_release();
        }
      }
      else if (puVar1[6] != 0) {
        puVar1[6] = 0;
        goto LAB_107df04d4;
      }
      puVar1[8] = 0xffffffffffffffff;
    }
    else {
      lVar4 = lVar3;
      func_0x00010c067fc0();
      if (((*(byte *)(puVar1 + 7) & 1) != 0) || (lVar4 < 0)) {
        _objc_release(lVar3);
        puVar15 = (undefined8 *)0x0;
        goto LAB_107df07d0;
      }
      puVar1[8] = lVar4;
      if (puVar1[6] == 0) {
        puVar1[6] = &PTR____CFConstantStringClassReference_110dd69d8;
        _objc_release(0);
      }
    }
    lVar4 = puVar1[3];
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      FUN_107defaf8();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf51e00();
      uVar2 = puVar1[9];
      puVar1[9] = lVar6;
      _objc_release(uVar2);
      _objc_release(lVar5);
    }
    uVar2 = puVar1[3];
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar13);
    puVar1[0xc] = 0;
    puVar1[0xb] = 0xffffffffffffffff;
    lVar6 = puVar1[3];
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar6;
    FUN_107def694();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    if ((lVar5 != 0) && (lVar6 = lVar5, func_0x00010bfda7c0(), (int)lVar6 != 0)) {
      lVar6 = lVar5;
      func_0x00010c260c00();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar6;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      lVar6 = lVar11;
      func_0x00010bf529e0();
      lVar7 = lVar11;
      if (lVar6 == 1) {
        lVar6 = lVar11;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010bf44740();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        _objc_release(lVar6);
        lVar6 = lVar7;
        func_0x00010bf529e0();
        if (lVar6 == 2) {
          lVar11 = lVar7;
          func_0x00010c0dfd20();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar11;
          func_0x00010c067fc0();
          lVar9 = lVar7;
          func_0x00010c0dfd20();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar9;
          func_0x00010c067fc0();
          lVar10 = lVar11;
          func_0x00010c08fa60();
          if ((lVar10 == 0) || (lVar8 < 0)) {
LAB_107df06cc:
            lVar10 = lVar11;
            func_0x00010c08fa60();
            if ((lVar10 != 0) && (-1 < lVar8)) {
              puVar1[0xb] = lVar8;
              lVar6 = -1;
              goto LAB_107df0710;
            }
            lVar8 = lVar9;
            func_0x00010c08fa60();
            if ((lVar8 != 0) && (0 < lVar6)) {
              puVar1[0xb] = 0xffffffffffffffff;
              goto LAB_107df0710;
            }
          }
          else {
            lVar10 = lVar9;
            func_0x00010c08fa60();
            if ((lVar10 == 0) || (lVar6 < lVar8)) goto LAB_107df06cc;
            puVar1[0xb] = lVar8;
            lVar6 = (lVar6 - lVar8) + 1;
LAB_107df0710:
            puVar1[0xc] = lVar6;
          }
          _objc_release(lVar9);
          _objc_release(lVar11);
        }
      }
      _objc_release(lVar7);
    }
    lVar11 = puVar1[3];
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar11;
    func_0x00010c11f420();
    _objc_release(lVar11);
    if (lVar6 != 0x7fffffffffffffff) {
      *(undefined1 *)(puVar1 + 0xd) = 1;
    }
    puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar2 = puVar1[0x11];
    puVar1[0x11] = puVar12;
    _objc_release(uVar2);
    puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar12;
    _objc_release(uVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_retain(puVar1);
  puVar15 = puVar1;
LAB_107df07d0:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar15;
}



/* Entry: 107df0824; end: 107df0833; -[SCWebServerRequest hasBody] */

bool FUN_107df0824(long param_1)

{
  return *(long *)(param_1 + 0x30) != 0;
}



/* Entry: 107df0834; end: 107df0847; -[SCWebServerRequest hasByteRange] */

bool FUN_107df0834(long param_1)

{
  return *(long *)(param_1 + 0x58) != -1 || *(long *)(param_1 + 0x60) != 0;
}



/* Entry: 107df0848; end: 107df084f; -[SCWebServerRequest attributeForKey:] */

void FUN_107df0848(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dff30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_objectForKey__1126159e0);
  return;
}



/* Entry: 107df0850; end: 107df0857; -[SCWebServerRequest open:] */

undefined8 FUN_107df0850(void)

{
  return 1;
}



/* Entry: 107df0858; end: 107df085f; -[SCWebServerRequest writeData:error:] */

undefined8 FUN_107df0858(void)

{
  return 1;
}



/* Entry: 107df0860; end: 107df0867; -[SCWebServerRequest close:] */

undefined8 FUN_107df0860(void)

{
  return 1;
}



/* Entry: 107df0868; end: 107df093f; -[SCWebServerRequest prepareForWriting] */

void FUN_107df0868(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  *(long *)(param_1 + 0x98) = param_1;
  lVar1 = param_1;
  func_0x00010bfe02c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_107def694();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0720c0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    puVar5 = PTR_PTR_1126d7eb8;
    _objc_alloc();
    func_0x00010c03ed60();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x88),param_2,puVar5);
    *(undefined **)(param_1 + 0x98) = puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar5);
    return;
  }
  return;
}



/* Entry: 107df0940; end: 107df095f; -[SCWebServerRequest performOpen:] */

undefined8 FUN_107df0940(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010c0e8e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_open__112617da8);
  return uVar1;
}



/* Entry: 107df0960; end: 107df0967; -[SCWebServerRequest performWriteData:error:] */

void FUN_107df0960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2bda30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_writeData_error__11268d0b0);
  return;
}



/* Entry: 107df0968; end: 107df096f; -[SCWebServerRequest performClose:] */

void FUN_107df0968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3da10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x98),PTR_s_close__1125ad028);
  return;
}



/* Entry: 107df0970; end: 107df0977; -[SCWebServerRequest setAttribute:forKey:] */

void FUN_107df0970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c220230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x90),PTR_s_setValue_forKey__112665ab0);
  return;
}



/* Entry: 107df0978; end: 107df0993; -[SCWebServerRequest localAddressString] */

/* WARNING: Removing unreachable block (ram,0x000107deff4c) */

void FUN_107df0978(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *apuStack_429 [128];
  long lStack_28;
  
  lVar3 = *(long *)(param_1 + 0x70);
  func_0x00010bf25f00();
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)0x0;
  if (lVar3 != 0) {
    param_3 = apuStack_429;
    param_4 = 0x401;
    _getnameinfo();
    if ((int)lVar3 < 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      param_3 = &PTR____CFConstantStringClassReference_110ebf6f8;
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    ppuVar2 = &puStack_490;
    puStack_488 = PTR_PTR_1126fb368;
    puStack_490 = puVar1;
    _objc_msgSendSuper2(&puStack_490,PTR_s_init_1125d9248);
    if (ppuVar2 != (undefined **)0x0) {
      *(undefined ***)((long)ppuVar2 + 8) = param_3;
      *(undefined8 *)((long)ppuVar2 + 0x10) = param_4;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107df0994; end: 107df09af; -[SCWebServerRequest remoteAddressString] */

/* WARNING: Removing unreachable block (ram,0x000107deff4c) */

void FUN_107df0994(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_490;
  undefined *puStack_488;
  undefined *apuStack_429 [128];
  long lStack_28;
  
  lVar3 = *(long *)(param_1 + 0x78);
  func_0x00010bf25f00();
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)0x0;
  if (lVar3 != 0) {
    param_3 = apuStack_429;
    param_4 = 0x401;
    _getnameinfo();
    if ((int)lVar3 < 0) {
      puVar1 = (undefined *)0x0;
    }
    else {
      param_3 = &PTR____CFConstantStringClassReference_110ebf6f8;
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    ppuVar2 = &puStack_490;
    puStack_488 = PTR_PTR_1126fb368;
    puStack_490 = puVar1;
    _objc_msgSendSuper2(&puStack_490,PTR_s_init_1125d9248);
    if (ppuVar2 != (undefined **)0x0) {
      *(undefined ***)((long)ppuVar2 + 8) = param_3;
      *(undefined8 *)((long)ppuVar2 + 0x10) = param_4;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107df09b0; end: 107df09b7; -[SCWebServerRequest method] */

undefined8 FUN_107df09b0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107df09b8; end: 107df09bf; -[SCWebServerRequest URL] */

undefined8 FUN_107df09b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107df09c0; end: 107df09c7; -[SCWebServerRequest headers] */

undefined8 FUN_107df09c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107df09c8; end: 107df09cf; -[SCWebServerRequest path] */

undefined8 FUN_107df09c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107df09d0; end: 107df09d7; -[SCWebServerRequest query] */

undefined8 FUN_107df09d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107df09d8; end: 107df09df; -[SCWebServerRequest contentType] */

undefined8 FUN_107df09d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107df09e0; end: 107df09e7; -[SCWebServerRequest contentLength] */

undefined8 FUN_107df09e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107df09e8; end: 107df09ef; -[SCWebServerRequest ifModifiedSince] */

undefined8 FUN_107df09e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107df09f0; end: 107df09f7; -[SCWebServerRequest ifNoneMatch] */

undefined8 FUN_107df09f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107df09f8; end: 107df0a03; -[SCWebServerRequest byteRange] */

undefined1  [16] FUN_107df09f8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x58);
}


