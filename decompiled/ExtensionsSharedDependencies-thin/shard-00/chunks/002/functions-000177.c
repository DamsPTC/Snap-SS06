/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00430cd8; end: 00431003; -[SCSnapTokenNetworkRequests _buildRequestAndSubmitAccessTokenFetchWithServerScopeNames:refreshToken:needsCloud1TLToken:op:completionPerformer:successBlock:failureBlock:] */

void FUN_00430cd8(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar5;
  undefined8 in_stack_00000000;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [120];
  
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  func_0x0077c180(auStack_e8,param_1);
  puVar1 = auStack_e8;
  FUN_00436d90(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  _objc_retainAutorelease();
  func_0x007896e0();
  puVar3 = auStack_e8;
  FUN_0054a1cc(puVar3,puVar5,puVar1);
  if ((int)puVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _objc_retainAutorelease(puVar2);
    puVar5 = puVar2;
  }
  _objc_release(puVar2);
  _objc_retain(puVar5);
  uVar4 = in_x5;
  func_0x00789420(in_x5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f2c0();
  _objc_release(uVar4);
  _objc_initWeak(auStack_f0,param_1);
  func_0x0078b8c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_f8,auStack_f0);
  _objc_retain(in_x5);
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_x5);
  _objc_retain(in_stack_00000000);
  func_0x00792380(param_1);
  _objc_release(param_1);
  _objc_release(in_stack_00000000);
  _objc_release(in_x5);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x5);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_f0);
  _objc_release(puVar5);
  FUN_00436564(auStack_e8);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  return;
}



/* Entry: 00431004; end: 004310ab;  */

void FUN_00431004(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00789420(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f220();
    _objc_release(uVar2);
    func_0x0077be00(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 004310ac; end: 004310fb;  */

void FUN_004310ac(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
                    /* WARNING: Could not recover jumptable at 0x0077a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_0099acf0)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 004310fc; end: 004311f3;  */

void FUN_004310fc(long param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00789420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f220();
  _objc_release(uVar1);
  if ((param_2 & 0xfffffffffffffffd) == 0x191) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x0078c100(PTR__OBJC_CLASS___NSString_00ac2988);
    _objc_retainAutoreleasedReturnValue();
    func_0x00788840(uVar1);
    _objc_release(puVar2);
    uVar1 = 4;
  }
  else {
    uVar1 = 3;
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004311f4; end: 00431347; -[SCSnapTokenNetworkRequests _accessTokenHttpSuccessWithResponseData:successBlock:failureBlock:] */

void FUN_004311f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  ppuStack_98 = &PTR_FUN_009e3cd0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  puStack_68 = &DAT_00b69408;
  uStack_60 = 0;
  uStack_58 = 0;
  _objc_retain(param_3);
  uVar1 = param_3;
  _objc_retainAutorelease();
  func_0x0077fde0();
  uVar2 = param_3;
  func_0x007882e0();
  lStack_48 = (long)(int)uVar2;
  pppuVar3 = &ppuStack_98;
  uStack_50 = uVar1;
  FUN_00549e34(pppuVar3,&uStack_50);
  _objc_release(param_3);
  if (((ulong)pppuVar3 & 1) == 0) {
    (**(code **)(param_5 + 0x10))(param_5,5,0);
  }
  else {
    func_0x0077be60(param_1);
  }
  FUN_00437364(&ppuStack_98);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 00431348; end: 00431443; -[SCSnapTokenNetworkRequests _accessTokenSuccessWithResponse:successBlock:failureBlock:] */

void FUN_00431348(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  iVar1 = *(int *)(param_3 + 0x40);
  if (iVar1 - 2U < 3) {
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    if (*(int *)(param_3 + 0x20) != 0) {
      FUN_00437288(auStack_78,0,param_3);
      (**(code **)(param_4 + 0x10))(param_4,auStack_78);
      FUN_00437364(auStack_78);
      goto LAB_004313b8;
    }
    uVar2 = 5;
  }
  else {
    uVar2 = 2;
    if (iVar1 != 5) {
      uVar2 = 5;
    }
  }
  (**(code **)(param_5 + 0x10))(param_5,uVar2,0);
LAB_004313b8:
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 00431444; end: 00431a4f; -[SCSnapTokenNetworkRequests _buildAccessTokenRequestForRefreshToken:serverScopeNames:needsCloud1TLToken:] */

/* WARNING: Removing unreachable block (ram,0x00431584) */

long FUN_00431444(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 int param_6)

{
  ulong *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  char cStack_f1;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar12 = param_1 + 2;
  param_1[3] = 0;
  *puVar12 = 0;
  param_1[8] = &DAT_00b69408;
  *param_1 = &PTR_FUN_009e3be0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[9] = &DAT_00b69408;
  param_1[10] = &DAT_00b69408;
  param_1[0xc] = &DAT_00b69408;
  param_1[0xb] = &DAT_00b69408;
  param_1[0xd] = &DAT_00b69408;
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  FUN_0042b548(&uStack_108,param_4);
  uVar8 = param_1[1];
  if ((uVar8 & 1) != 0) {
    uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
  }
  FUN_00532e74(param_1 + 8,&uStack_108,uVar8);
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  _objc_retain(param_5);
  lVar7 = param_5;
  func_0x00780ea0();
  do {
    if (lVar7 == 0) {
      lVar6 = 0;
      _objc_release(param_5);
      lVar7 = param_2;
      func_0x0078b8c0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar7;
      func_0x00781f40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      if (lVar10 != 0) {
        FUN_0042b548(&uStack_108,lVar10);
        uVar8 = param_1[1];
        if ((uVar8 & 1) != 0) {
          uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
        }
        FUN_00532e74(param_1 + 9,&uStack_108,uVar8);
        if (cStack_f1 < '\0') {
          __ZdlPv(uStack_108);
        }
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
      func_0x00438918();
      func_0x00789cc0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00792100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar4 != (undefined *)0x0) {
        FUN_0042b548(&uStack_108,puVar4);
        uVar8 = param_1[1];
        if ((uVar8 & 1) != 0) {
          uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
        }
        FUN_00532e74(param_1 + 10,&uStack_108,uVar8);
        if (cStack_f1 < '\0') {
          __ZdlPv(uStack_108);
        }
      }
      if (param_6 != 0) {
        *(undefined1 *)(param_1 + 0xe) = 1;
      }
      lVar7 = param_2;
      func_0x0077dba0();
      if ((int)lVar7 != 0) {
        *(undefined1 *)((long)param_1 + 0x71) = 1;
        lVar6 = param_2;
        func_0x0077cac0();
        _objc_retainAutoreleasedReturnValue();
        func_0x0077cb00();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_2;
        func_0x007882e0();
        if ((lVar7 != 0) && (lVar7 = lVar6, func_0x007882e0(), lVar7 != 0)) {
          _objc_retainAutorelease(param_2);
          lVar7 = param_2;
          func_0x0077fde0();
          lVar5 = param_2;
          func_0x007882e0(param_2);
          uVar8 = param_1[1];
          if ((uVar8 & 1) != 0) {
            uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
          }
          FUN_00532db8(param_1 + 0xc,lVar7,lVar5,uVar8);
          FUN_0042b548(&uStack_108,lVar6);
          uVar8 = param_1[1];
          if ((uVar8 & 1) != 0) {
            uVar8 = *(ulong *)(uVar8 & 0xfffffffffffffffe);
          }
          FUN_00532e74(param_1 + 0xd,&uStack_108,uVar8);
          if (cStack_f1 < '\0') {
            __ZdlPv(uStack_108);
          }
        }
        _objc_release(param_2);
        _objc_release(lVar6);
      }
      _objc_release(puVar4);
      _objc_release(lVar10);
      _objc_release(param_5);
      lVar7 = param_4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_70) {
        ___stack_chk_fail();
        if (cStack_f1 < '\0') {
          __ZdlPv(uStack_108);
        }
        _objc_release(param_2);
        _objc_release(lVar6);
        _objc_release(puVar4);
        _objc_release(lVar10);
        FUN_00436564(param_1);
        _objc_release(param_5);
        _objc_release(param_4);
        __Unwind_Resume();
        lVar6 = *(long *)(lVar7 + 0x10);
        func_0x00792720();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar10 = 0;
        if (lVar6 != 0) {
          lVar7 = *(long *)(lVar7 + 0x10);
          func_0x00792720(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar7;
          func_0x0077fbe0();
          _objc_release(lVar7);
        }
        return lVar10;
      }
      return lVar7;
    }
    lVar10 = 0;
    do {
      uVar9 = *(undefined8 *)(lVar10 * 8);
      _objc_retain(uVar9);
      FUN_0042b548(&uStack_108,uVar9);
      iVar2 = *(int *)(param_1 + 3);
      uVar8 = param_1[2];
      if ((uVar8 & 1) == 0) {
        if ((int)(uint)(uVar8 != 0) <= iVar2) {
          if (uVar8 != 0) {
LAB_00431634:
            FUN_0054cdf0(puVar12,1);
            uVar8 = *puVar12;
          }
          goto LAB_00431644;
        }
LAB_004315dc:
        *(int *)(param_1 + 3) = iVar2 + 1;
        puVar1 = puVar12;
        if ((uVar8 & 1) != 0) {
          puVar1 = (ulong *)(uVar8 + (long)iVar2 * 8 + 7);
        }
        puVar11 = (undefined8 *)*puVar1;
        if (*(char *)((long)puVar11 + 0x17) < '\0') {
          __ZdlPv(*puVar11);
        }
        puVar11[2] = CONCAT17(cStack_f1,uStack_f8);
        puVar11[1] = uStack_100;
        *puVar11 = uStack_108;
      }
      else {
        if (iVar2 < *(int *)(uVar8 - 1)) goto LAB_004315dc;
        if (*(int *)((long)param_1 + 0x1c) < *(int *)(uVar8 - 1)) goto LAB_00431634;
LAB_00431644:
        if ((uVar8 & 1) != 0) {
          *(int *)(uVar8 - 1) = *(int *)(uVar8 - 1) + 1;
        }
        uVar8 = param_1[4];
        func_0x00431eb4(uVar8,&uStack_108);
        iVar2 = *(int *)(param_1 + 3);
        *(int *)(param_1 + 3) = iVar2 + 1;
        puVar1 = puVar12;
        if ((param_1[2] & 1) != 0) {
          puVar1 = (ulong *)(param_1[2] + (long)iVar2 * 8 + 7);
        }
        *puVar1 = uVar8;
        if (cStack_f1 < '\0') {
          __ZdlPv(uStack_108);
        }
      }
      _objc_release(uVar9);
      lVar10 = lVar10 + 1;
    } while (lVar7 != lVar10);
    lVar7 = param_5;
    func_0x00780ea0();
  } while( true );
}



/* Entry: 00431a50; end: 00431ad3; -[SCSnapTokenNetworkRequests _shouldAddAttestationOnAccessTokenRefresh] */

undefined8 FUN_00431a50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00792720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00792720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0077fbe0();
    _objc_release(uVar2);
  }
  return uVar3;
}



/* Entry: 00431ad4; end: 00431b8f; -[SCSnapTokenNetworkRequests _generateAttestationRequestToken] */

void FUN_00431ad4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = 8;
  puVar1 = PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  func_0x00792160(PTR__OBJC_CLASS___NSMutableString_00ac2cc0,param_2,8);
  _objc_retainAutoreleasedReturnValue();
  do {
    ppuVar2 = &PTR____CFConstantStringClassReference_00a248c0;
    func_0x007882e0(&PTR____CFConstantStringClassReference_00a248c0);
    _arc4random_uniform();
    func_0x00780140(&PTR____CFConstantStringClassReference_00a248c0,param_2,
                    (ulong)ppuVar2 & 0xffffffff);
    func_0x0077eec0(puVar1,param_2,&PTR____CFConstantStringClassReference_00a248e0);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar3 = puVar1;
  func_0x00780e20(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 00431b90; end: 00431d6b; -[SCSnapTokenNetworkRequests _getAttestationPayloadWithRequestToken:] */

void FUN_00431b90(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x007882e0();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    puVar2 = PTR_PTR_00ac2b08;
    _objc_alloc_init();
    func_0x0078fea0();
    func_0x0078fe60(puVar2);
    func_0x0078fee0(puVar2);
    puVar3 = puVar2;
    func_0x007814c0();
    _objc_retainAutoreleasedReturnValue();
    _CACurrentMediaTime();
    puStack_88 = &uStack_80;
    uStack_80 = 0;
    uStack_70 = 0x3032000000;
    pcStack_68 = FUN_00431d6c;
    uStack_60 = 0x431d7c;
    uStack_58 = 0;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    puStack_b8 = PTR___NSConcreteStackBlock_00999f30;
    dVar5 = 1.60807493534087e-314;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_00431d84;
    puStack_a0 = &UNK_009e3a00;
    puStack_78 = puStack_88;
    _objc_retain(puVar3);
    puStack_98 = puVar3;
    lStack_90 = param_2;
    _dispatch_sync(uVar4,&puStack_b8);
    _CACurrentMediaTime();
    func_0x00788760(dVar5 - param_1,*(undefined8 *)(param_2 + 8));
    uVar4 = puStack_78[5];
    _objc_retain(uVar4);
    _objc_release(puStack_98);
    __Block_object_dispose(&uStack_80,8);
    _objc_release(uStack_58);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar4);
  return;
}



/* Entry: 00431d6c; end: 00431d83;  */

void FUN_00431d6c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 00431d84; end: 00431de7;  */

void FUN_00431d84(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  dVar4 = param_1;
  FUN_002967b4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_2 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  _CACurrentMediaTime();
                    /* WARNING: Could not recover jumptable at 0x00788750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (dVar4 - param_1,*(undefined8 *)(*(long *)(param_2 + 0x28) + 8),
             PTR_s_logAttestationGenerationLatencyW_00abced8);
  return;
}



/* Entry: 00431de8; end: 00431e57;  */

void FUN_00431de8(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x007799d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_00999f10)(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  return;
}



/* Entry: 00431e58; end: 00431e5f; -[SCSnapTokenNetworkRequests requestsProvider] */

undefined8 FUN_00431e58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00431e60; end: 00431efb; -[SCSnapTokenNetworkRequests .cxx_destruct] */

void FUN_00431e60(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00431efc; end: 0043201f; -[SCSnapTokenStorage initWithLogger:diskStorage:validator:useInMemoryRefreshTokenForValidityCheck:] */

undefined1 *
FUN_00431efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_00ac3b30;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x59) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = 0;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = 0;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x58) = param_6;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00432020; end: 0043219b; -[SCSnapTokenStorage getRefreshTokenAsyncWithCompletionPerformer:userId:completion:] */

void FUN_00432020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  pcVar1 = "getRefreshTokenAsyncWithCompletionPerformer:userId:completion";
  FUN_00634ecc();
  pcStack_48 = pcVar1;
  func_0x0077d180();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_1);
  func_0x0078a560(param_3);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 0043219c; end: 00432213;  */

void FUN_0043219c(long param_1)

{
  FUN_00634f88(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18));
                    /* WARNING: Could not recover jumptable at 0x004321cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 00432214; end: 0043238f; -[SCSnapTokenStorage getCloud1TLTokenAsyncWithCompletionPerformer:userId:completion:] */

void FUN_00432214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  pcVar1 = "getCloud1TLTokenAsyncWithCompletionPerformer:userId:completion";
  FUN_00634ecc();
  pcStack_48 = pcVar1;
  func_0x0077d100();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  _objc_retain(param_1);
  func_0x0078a560(param_3);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 00432390; end: 004323c3;  */

void FUN_00432390(long param_1)

{
  FUN_00634f88(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18));
                    /* WARNING: Could not recover jumptable at 0x004323c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 004323c4; end: 004323d3; -[SCSnapTokenStorage setSnapSessionSyncWithRefreshToken:accessTokens:userId:] */

void FUN_004323c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0077db70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__setSnapSessionSyncWithRefreshTo_00aba3d0,param_3,param_4,0,param_5,1);
  return;
}



/* Entry: 004323d4; end: 00432493; -[SCSnapTokenStorage _setSnapSessionSyncWithRefreshToken:accessTokens:cloud1TLToken:userId:isSessionVerified:] */

void FUN_004323d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 == 0) {
    func_0x0077c2e0(param_1,param_2,param_6);
  }
  else {
    func_0x0077dfa0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00432494; end: 004325eb; -[SCSnapTokenStorage loadAccessTokensIntoMemoryForUserId:tokenForType:] */

void FUN_00432494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [88];
  char cStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_00ac2c90;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x9012000000;
  pcStack_c8 = FUN_004325ec;
  pcStack_c0 = FUN_0043262c;
  uStack_b8 = 0;
  auStack_b0[0] = 0;
  cStack_58 = '\0';
  _objc_retain(param_4);
  func_0x00782f60(puVar1);
  FUN_004307bc(param_1,puStack_d8 + 6);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_e0,8);
  if (cStack_58 == '\x01') {
    FUN_00437fe8(auStack_b0);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 004325ec; end: 0043262b;  */

void FUN_004325ec(long param_1,long param_2)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  if (*(char *)(param_2 + 0x88) == '\x01') {
    FUN_00435494((undefined1 *)(param_1 + 0x30),param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x88) = 1;
  }
  return;
}



/* Entry: 0043262c; end: 00432643;  */

long FUN_0043262c(long param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      FUN_00437e3c();
    }
    func_0x00532f74(param_1 + 0x58);
    func_0x00532f74(param_1 + 0x60);
    FUN_00437b14(param_1 + 0x40);
    return param_1 + 0x30;
  }
  return param_1;
}



/* Entry: 00432644; end: 0043277b;  */

void FUN_00432644(long param_1,long param_2)

{
  undefined1 *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_2;
  FUN_0043277c(param_2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x20) == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x0077d0e0(&uStack_90);
  }
  if (param_2 == *(long *)(param_1 + 0x38)) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    puVar1 = (undefined1 *)(lVar4 + 0x30);
    cVar2 = *(char *)(lVar4 + 0x88);
    if (cVar2 == (char)uStack_38) {
      if (&uStack_90 != (undefined8 *)puVar1 && cVar2 != '\0') {
        FUN_00438050(puVar1);
        FUN_0043874c(puVar1,&uStack_90);
      }
    }
    else {
      if (cVar2 == '\0') {
        FUN_00437f0c(puVar1,0,&uStack_90);
      }
      else {
        FUN_00437fe8(puVar1);
      }
      *(bool *)(lVar4 + 0x88) = cVar2 == '\0';
    }
  }
  if ((char)uStack_38 == '\x01') {
    FUN_00437fe8(&uStack_90);
  }
  _objc_release(lVar3);
  return;
}



/* Entry: 0043277c; end: 004327db;  */

void FUN_0043277c(void)

{
  _objc_alloc(PTR_PTR_00ac2cb8);
  func_0x00784b20();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 004327dc; end: 004329b7; -[SCSnapTokenStorage getAccessTokenAsyncForFetchOperation:userId:completionPerformer:completion:] */

void FUN_004327dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  undefined1 auStack_130 [88];
  char cStack_d8;
  undefined1 auStack_d0 [88];
  char cStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  pcVar1 = "getAccessTokenAsyncForFetchOperation:userId:completionPerformer:completion";
  FUN_00634ecc();
  pcStack_58 = pcVar1;
  func_0x0077d0e0(auStack_d0,param_1);
  _objc_retain(param_6);
  FUN_004307bc(auStack_130,auStack_d0);
  func_0x0078a560(param_5);
  if (cStack_d8 == '\x01') {
    FUN_00437fe8(auStack_130);
  }
  _objc_release(param_6);
  if (cStack_78 == '\x01') {
    FUN_00437fe8(auStack_d0);
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 004329b8; end: 00432a3f;  */

void FUN_004329b8(long param_1)

{
  long lVar1;
  undefined1 auStack_80 [88];
  char cStack_28;
  
  FUN_00634f88(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18));
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_004307bc(auStack_80,param_1 + 0x30);
  (**(code **)(lVar1 + 0x10))(lVar1,auStack_80);
  if (cStack_28 == '\x01') {
    FUN_00437fe8(auStack_80);
  }
  return;
}



/* Entry: 00432a40; end: 00432aaf;  */

void FUN_00432a40(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  FUN_004307bc(param_1 + 0x30,param_2 + 0x30);
  return;
}



/* Entry: 00432ab0; end: 00432aef;  */

void FUN_00432ab0(long param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    FUN_00437fe8(param_1 + 0x30);
  }
  __Block_object_dispose(*(undefined8 *)(param_1 + 0x28),8);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 00432af0; end: 00432b7f; -[SCSnapTokenStorage getAccessTokenSyncForAccessType:userId:] */

void FUN_00432af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  _objc_retain(param_5);
  FUN_0043277c(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077d0e0(param_1,param_2,param_3,param_5,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_5);
  return;
}



/* Entry: 00432b80; end: 00432b83; -[SCSnapTokenStorage getMemoryCachedAccessTokenSyncForOp:userId:] */

void FUN_00432b80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077d150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s__loadInMemoryAccessTokenForOp__00aba148);
  return;
}



/* Entry: 00432b84; end: 00432bf7; -[SCSnapTokenStorage setAccessTokensSyncWithUserId:accessTokens:] */

void FUN_00432b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_3);
  if (*(long *)(param_4 + 0x18) == 0) {
    func_0x0077c2c0(param_1,param_2,param_3);
  }
  else {
    func_0x0077dee0(param_1,param_2,param_4,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00432bf8; end: 00432caf; -[SCSnapTokenStorage setAccessTokenSyncWithUserId:accessToken:accessType:] */

void FUN_00432bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_88 [88];
  
  _objc_retain(param_3);
  if (*(char *)(param_4 + 0x58) == '\x01') {
    FUN_00437f0c(auStack_88,0,param_4);
    func_0x0077dec0(param_1);
    FUN_00437fe8(auStack_88);
  }
  else {
    func_0x0077c2a0(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 00432cb0; end: 00432d2f; -[SCSnapTokenStorage setCloud1TLTokenSyncWithUserId:cloud1TLToken:] */

void FUN_00432cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x007882e0();
  if (lVar1 != 0) {
    func_0x0077df20(param_1,param_2,param_4,param_3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00432d30; end: 00432d87; -[SCSnapTokenStorage handleInvalidationSyncForUserId:] */

void FUN_00432d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x0078e740(param_1,param_2,1);
  func_0x0077c2e0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00432d88; end: 00432e37; -[SCSnapTokenStorage clearAllAccessTokensSyncWithUserId:] */

void FUN_00432d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_00ac2c90;
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_00432e38;
  puStack_48 = &UNK_009e3ac0;
  uStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00782f60(puVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 00432e38; end: 00432e6b;  */

void FUN_00432e38(long param_1,undefined8 param_2)

{
  func_0x0077d780(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x0077d770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeAccessTokenFromDiskForAcc_00aba2d0,param_2
             ,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 00432e6c; end: 00432ecb; -[SCSnapTokenStorage clearAllInMemoryAccessTokensSyncWithUserId:] */

void FUN_00432e6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_00999f30;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_00432ecc;
  puStack_20 = &UNK_009e3af0;
  uStack_18 = param_1;
  func_0x00782f60(PTR_PTR_00ac2c90,param_2,&puStack_38);
  return;
}



/* Entry: 00432ecc; end: 00432ed7;  */

void FUN_00432ecc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeAccessTokenFromMemoryForA_00aba2d8,param_2
            );
  return;
}



/* Entry: 00432ed8; end: 00432fbf; -[SCSnapTokenStorage getAccessTokenDirectlyFromPersistentStorageForAccesstype:userId:] */

void FUN_00432ed8(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uVar2 = *(ulong *)(param_2 + 0x48);
  func_0x0077e200(uVar2,param_3,param_5,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x007882e0();
  if (uVar3 == 0) {
    *param_1 = 0;
    param_1[0x58] = 0;
  }
  else {
    ppuStack_78 = &PTR_FUN_009e3ef0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    puStack_50 = &DAT_00b69408;
    puStack_48 = &DAT_00b69408;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uVar3 = uVar2;
    FUN_00432fc0(uVar2,&ppuStack_78);
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      *param_1 = 0;
    }
    else {
      FUN_00435494(param_1,&ppuStack_78);
    }
    param_1[0x58] = !bVar1;
    FUN_00437fe8(&ppuStack_78);
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 00432fc0; end: 00433047;  */

undefined8 FUN_00432fc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain();
  uVar1 = param_1;
  _objc_retainAutorelease();
  func_0x0077fde0();
  uVar2 = param_1;
  func_0x007882e0();
  lStack_38 = (long)(int)uVar2;
  uStack_40 = uVar1;
  FUN_00549e34(param_2,&uStack_40);
  _objc_release(param_1);
  return param_2;
}



/* Entry: 00433048; end: 0043304f; -[SCSnapTokenStorage updateWithSession:userId:] */

void FUN_00433048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0077dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__updateWithSession_userId_isSess_00aba4f0,param_3,param_4,1);
  return;
}



/* Entry: 00433050; end: 00433057; -[SCSnapTokenStorage updateWithUnverifiedSession:userId:] */

void FUN_00433050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0077dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s__updateWithSession_userId_isSess_00aba4f0,param_3,param_4,0);
  return;
}



/* Entry: 00433058; end: 004331fb; -[SCSnapTokenStorage _updateWithSession:userId:isSessionVerified:] */

void FUN_00433058(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [40];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x007882e0();
  if ((lVar1 == 0) || (lVar1 = param_3, func_0x00791c80(), (int)lVar1 != 1)) {
    func_0x00788a00(*(undefined8 *)(param_1 + 0x40));
  }
  else {
    FUN_0042b650(auStack_68,param_3,param_4,*(undefined8 *)(param_1 + 0x40));
    lVar1 = param_3;
    func_0x0078b100();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x007882e0();
    if (lVar2 == 0) {
      func_0x00788a00(*(undefined8 *)(param_1 + 0x40));
    }
    else {
      lVar2 = param_3;
      func_0x00780440();
      _objc_retainAutoreleasedReturnValue();
      func_0x007882e0();
      func_0x00788a00(*(undefined8 *)(param_1 + 0x40));
      func_0x0077db60(param_1);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    FUN_0042c000(auStack_68);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 004331fc; end: 004332eb; -[SCSnapTokenStorage hasValidSnapTokenSession:] */

bool FUN_004331fc(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00787360();
  if ((int)lVar2 == 0) {
    lVar2 = param_3;
    func_0x007882e0();
    if (lVar2 != 0) {
      if (*(char *)(param_1 + 0x58) == '\x01') {
        func_0x0077d180(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1;
        func_0x007882e0();
      }
      else {
        func_0x0077d6c0(param_1,param_2,param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1;
        func_0x007882e0();
      }
      bVar1 = lVar2 != 0;
      _objc_release(param_1);
      goto LAB_004332a8;
    }
  }
  else {
    func_0x00788940(*(undefined8 *)(param_1 + 0x40),param_2,
                    &PTR____CFConstantStringClassReference_00a249a0);
  }
  bVar1 = false;
LAB_004332a8:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 004332ec; end: 0043343b; -[SCSnapTokenStorage _updateRefreshToken:accessTokens:cloud1TLToken:userId:isSessionVerified:] */

void FUN_004332ec(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  char *pcVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x007882e0();
  if ((lVar1 == 0) || (lVar1 = param_1, func_0x00787360(), (int)lVar1 == 0)) {
    pcVar2 = "_updateRefreshToken:accessTokens:userId";
    func_0x00634fc8("_updateRefreshToken:accessTokens:userId");
    func_0x0077dfc0(param_1,param_2,param_3,param_6,param_7);
    if (*(long *)(param_4 + 0x18) == 0) {
      func_0x0077c2c0(param_1,param_2,param_6);
    }
    else {
      func_0x0077dee0(param_1,param_2,param_4,param_6);
    }
    lVar1 = param_5;
    func_0x007882e0();
    if (lVar1 != 0) {
      func_0x0077df20(param_1,param_2,param_5,param_6);
    }
    FUN_00635084(pcVar2);
  }
  else {
    func_0x00788940(*(undefined8 *)(param_1 + 0x40),param_2,
                    &PTR____CFConstantStringClassReference_00a249c0);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0043343c; end: 004334e3; -[SCSnapTokenStorage _clearAllTokensForUserId:] */

void FUN_0043343c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  
  _objc_retain(param_3);
  pcVar1 = "_clearAllTokensForUserId";
  func_0x00634fc8("_clearAllTokensForUserId");
  func_0x0077c320(param_1,param_2,param_3);
  func_0x0077c2c0(param_1,param_2,param_3);
  func_0x0077c300(param_1,param_2,param_3);
  FUN_00635084(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004334e4; end: 004335df; -[SCSnapTokenStorage _updateAccessTokens:userId:] */

void FUN_004334e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  pcVar2 = "_updateAccessTokens:userId:";
  func_0x00634fc8("_updateAccessTokens:userId:");
  puVar1 = PTR_PTR_00ac2c90;
  puStack_78 = PTR___NSConcreteStackBlock_00999f30;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_004335e0;
  puStack_60 = &UNK_009e3b20;
  uStack_58 = param_1;
  uStack_48 = param_3;
  _objc_retain(param_4);
  uStack_50 = param_4;
  func_0x00782f60(puVar1,param_2,&puStack_78);
  _objc_release(uStack_50);
  FUN_00635084(pcVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 004335e0; end: 0043367b;  */

void FUN_004335e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [88];
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x30);
  uStack_28 = param_2;
  FUN_00430828(lVar2,&uStack_28);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x30);
    FUN_00430828(lVar2,&uStack_28);
    if (lVar2 == 0) {
      FUN_00435534();
      FUN_00437fe8(auStack_80);
      __Unwind_Resume();
      _objc_retain(param_3);
      pcVar3 = "_clearAccessTokensForUserId:";
      func_0x00634fc8("_clearAccessTokensForUserId:");
      puVar1 = PTR_PTR_00ac2c90;
      _objc_retain(param_3);
      func_0x00782f60(puVar1);
      _objc_release(param_3);
      FUN_00635084(pcVar3);
      _objc_release(param_3);
      return;
    }
    FUN_00437f0c(auStack_80,0,lVar2 + 0x18);
    func_0x0077dec0(uVar4);
    FUN_00437fe8(auStack_80);
  }
  return;
}



/* Entry: 0043367c; end: 00433767; -[SCSnapTokenStorage _clearAccessTokensForUserId:] */

void FUN_0043367c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  pcVar2 = "_clearAccessTokensForUserId:";
  func_0x00634fc8("_clearAccessTokensForUserId:");
  puVar1 = PTR_PTR_00ac2c90;
  puStack_60 = PTR___NSConcreteStackBlock_00999f30;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_00433768;
  puStack_48 = &UNK_009e3ac0;
  uStack_40 = param_1;
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x00782f60(puVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  FUN_00635084(pcVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 00433768; end: 00433777;  */

void FUN_00433768(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0077c2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__clearAccessTokenForAccessType_u_00ab9da0,param_2
             ,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 00433778; end: 00433a6f; -[SCSnapTokenStorage _loadAccessTokenForUserId:op:] */

void FUN_00433778(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_110 [8];
  ulong uStack_108;
  byte bStack_b8;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  byte bStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  pcVar3 = "_loadAccessTokenForUserId:op:";
  func_0x00634fc8("_loadAccessTokenForUserId:op:");
  func_0x0077e220(param_5);
  func_0x0077d160(auStack_b0,param_2);
  if (bStack_58 == 1) {
    iVar2 = (int)*(undefined8 *)(param_2 + 0x50);
    func_0x00787f00();
    if (iVar2 != 0) {
LAB_00433908:
      *param_1 = 0;
      param_1[0x58] = 0;
      if (bStack_58 == 1) {
        FUN_00435494(param_1,auStack_b0);
        param_1[0x58] = 1;
      }
      goto LAB_0043393c;
    }
    func_0x0077e220(param_5);
    func_0x0077c2a0(param_2);
  }
  else {
    func_0x0077cae0(auStack_110,param_2);
    if (bStack_58 == bStack_b8) {
      if (bStack_58 != 0) {
        if ((uStack_a8 & 1) != 0) {
          uStack_a8 = *(ulong *)(uStack_a8 & 0xfffffffffffffffe);
        }
        if ((uStack_108 & 1) != 0) {
          uStack_108 = *(ulong *)(uStack_108 & 0xfffffffffffffffe);
        }
        if (uStack_a8 == uStack_108) {
          FUN_0043882c(auStack_b0,auStack_110);
        }
        else {
          FUN_00438050(auStack_b0);
          FUN_0043874c(auStack_b0,auStack_110);
        }
      }
    }
    else {
      bVar1 = bStack_58 == 0;
      bStack_58 = bVar1;
      if (bVar1) {
        FUN_00435494(auStack_b0,auStack_110);
      }
      else {
        FUN_00437fe8();
      }
    }
    if (bStack_b8 == 1) {
      FUN_00437fe8(auStack_110);
    }
    if ((bStack_58 & 1) != 0) {
      uVar4 = *(ulong *)(param_2 + 0x50);
      func_0x00787f00();
      if ((uVar4 & 1) == 0) {
        puVar6 = PTR_PTR_00ac2c90;
        func_0x00791680(PTR_PTR_00ac2c90);
        _objc_retainAutoreleasedReturnValue();
        func_0x0077d760(param_2);
        *param_1 = 0;
        param_1[0x58] = 0;
        _objc_release(puVar6);
        goto LAB_0043393c;
      }
      func_0x0077e220(param_5);
      func_0x0077dae0(param_2);
      uVar5 = param_5;
      func_0x00789420(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078e300();
      _objc_release(uVar5);
      goto LAB_00433908;
    }
  }
  *param_1 = 0;
  param_1[0x58] = 0;
LAB_0043393c:
  if (bStack_58 == 1) {
    FUN_00437fe8(auStack_b0);
  }
  FUN_00635084(pcVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 00433a70; end: 00433c6b; -[SCSnapTokenStorage _getAccessTokenFromDiskForUserId:op:] */

void FUN_00433a70(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [88];
  undefined1 auStack_b0 [88];
  byte bStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  pcVar1 = "_getAccessTokenFromDiskForUserId:op:";
  func_0x00634fc8("_getAccessTokenFromDiskForUserId:op:");
  puVar2 = PTR_PTR_00ac2c90;
  func_0x0077e220(param_5);
  func_0x00791680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x007882e0();
  if (puVar3 != (undefined *)0x0) {
    func_0x0077e220(param_5);
    func_0x0077d640(auStack_b0,param_2);
    if ((bStack_58 & 1) != 0) {
      FUN_00437f0c(auStack_108,0,auStack_b0);
      FUN_0042b74c();
      func_0x00788700(*(undefined8 *)(param_2 + 0x40));
      uVar4 = param_5;
      func_0x00789420(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x0078eb00();
      _objc_release(uVar4);
      FUN_00435494(param_1,auStack_108);
      param_1[0x58] = 1;
      FUN_00437fe8(auStack_108);
      if (bStack_58 == 1) {
        FUN_00437fe8(auStack_b0);
      }
      goto LAB_00433ba4;
    }
  }
  *param_1 = 0;
  param_1[0x58] = 0;
LAB_00433ba4:
  _objc_release(puVar2);
  FUN_00635084(pcVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 00433c6c; end: 00433d7f; -[SCSnapTokenStorage _updateAccessToken:accessType:userId:] */

void FUN_00433c6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  long lVar2;
  undefined1 auStack_98 [88];
  
  _objc_retain(param_5);
  pcVar1 = "_updateAccessToken:accessType:userId:";
  func_0x00634fc8("_updateAccessToken:accessType:userId:");
  lVar2 = param_1;
  func_0x00787360();
  if ((int)lVar2 == 0) {
    func_0x0077dae0(param_1);
    FUN_00437f0c(auStack_98,0,param_3);
    func_0x0077e100(param_1);
    FUN_00437fe8(auStack_98);
  }
  else {
    func_0x00788940(*(undefined8 *)(param_1 + 0x40));
  }
  FUN_00635084(pcVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 00433d80; end: 00433e27; -[SCSnapTokenStorage _clearAccessTokenForAccessType:userId:] */

void FUN_00433d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  
  _objc_retain(param_4);
  pcVar1 = "_clearAccessTokenForAccessType:userId:";
  func_0x00634fc8("_clearAccessTokenForAccessType:userId:");
  func_0x0077d780(param_1,param_2,param_3);
  func_0x0077d760(param_1,param_2,param_3,param_4);
  FUN_00635084(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 00433e28; end: 00433f2b; -[SCSnapTokenStorage _loadRefreshTokenForUserId:] */

void FUN_00433e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  
  _objc_retain(param_3);
  pcVar1 = "_loadRefreshTokenForUserId:";
  func_0x00634fc8("_loadRefreshTokenForUserId:");
  _os_unfair_lock_lock(param_1 + 0x34);
  lVar2 = param_1;
  func_0x0078b100();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x34);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x0077d6c0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x34);
    func_0x0078fbc0(param_1,param_2,lVar2);
    _os_unfair_lock_unlock(param_1 + 0x34);
  }
  FUN_00635084(pcVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar2);
  return;
}



/* Entry: 00433f2c; end: 00434003; -[SCSnapTokenStorage _updateRefreshToken:userId:isSessionVerified:] */

void FUN_00433f2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  char *pcVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  pcVar1 = "_updateRefreshToken:userId:";
  func_0x00634fc8("_updateRefreshToken:userId:");
  _os_unfair_lock_lock(param_1 + 0x34);
  func_0x0078fbc0(param_1,param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x34);
  if (param_5 != 0) {
    func_0x0077e140(param_1,param_2,param_3,param_4);
  }
  FUN_00635084(pcVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00434004; end: 004340ab; -[SCSnapTokenStorage _clearRefreshTokenForUserId:] */

void FUN_00434004(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  
  _objc_retain(param_3);
  pcVar1 = "_clearRefreshTokenForUserId:";
  func_0x00634fc8("_clearRefreshTokenForUserId:");
  _os_unfair_lock_lock(param_1 + 0x34);
  func_0x0078fbc0(param_1,param_2,0);
  _os_unfair_lock_unlock(param_1 + 0x34);
  func_0x0077d860(param_1,param_2,param_3);
  FUN_00635084(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004340ac; end: 004341af; -[SCSnapTokenStorage _loadCloud1TLTokenForUserId:] */

void FUN_004340ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  
  _objc_retain(param_3);
  pcVar1 = "_loadCloud1TLTokenForUserId:";
  func_0x00634fc8("_loadCloud1TLTokenForUserId:");
  _os_unfair_lock_lock(param_1 + 0x38);
  lVar2 = param_1;
  func_0x007803e0();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x38);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x0077d660(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x38);
    func_0x0078d4c0(param_1,param_2,lVar2);
    _os_unfair_lock_unlock(param_1 + 0x38);
  }
  FUN_00635084(pcVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar2);
  return;
}



/* Entry: 004341b0; end: 0043427f; -[SCSnapTokenStorage _updateCloud1TLToken:userId:] */

void FUN_004341b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  pcVar1 = "_updateCloud1TLToken:userId:";
  func_0x00634fc8("_updateCloud1TLToken:userId:");
  _os_unfair_lock_lock(param_1 + 0x38);
  func_0x0078d4c0(param_1,param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x38);
  func_0x0077e120(param_1,param_2,param_3,param_4);
  FUN_00635084(pcVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00434280; end: 00434327; -[SCSnapTokenStorage _clearCloud1TLTokenForUserId:] */

void FUN_00434280(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  
  _objc_retain(param_3);
  pcVar1 = "_clearCloud1TLTokenForUserId:";
  func_0x00634fc8("_clearCloud1TLTokenForUserId:");
  _os_unfair_lock_lock(param_1 + 0x38);
  func_0x0078d4c0(param_1,param_2,0);
  _os_unfair_lock_unlock(param_1 + 0x38);
  func_0x0077d7c0(param_1,param_2,param_3);
  FUN_00635084(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00434328; end: 004343c3; -[SCSnapTokenStorage _loadInMemoryAccessTokenForOp:] */

void FUN_00434328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  
  _objc_retain(param_4);
  pcVar1 = "_loadInMemoryAccessTokenForOp:";
  func_0x00634fc8("_loadInMemoryAccessTokenForOp:");
  func_0x0077d160(param_1,param_2,param_3,param_4,1);
  FUN_00635084(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 004343c4; end: 0043457f; -[SCSnapTokenStorage _loadInMemoryAccessTokenForOp:shouldValidate:] */

void FUN_004343c4(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                 )

{
  char *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_b0 [88];
  byte bStack_58;
  
  _objc_retain(param_4);
  pcVar1 = "_loadInMemoryAccessTokenForOp:shouldValidate:";
  func_0x00634fc8("_loadInMemoryAccessTokenForOp:shouldValidate:");
  func_0x0077e220(param_4);
  func_0x0077bde0(auStack_b0,param_2);
  if ((bStack_58 & 1) == 0) {
LAB_004344c8:
    *param_1 = 0;
    param_1[0x58] = 0;
  }
  else {
    FUN_0042b74c();
    func_0x00788700(*(undefined8 *)(param_2 + 0x40));
    uVar2 = param_4;
    func_0x00789420(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078eb00();
    _objc_release(uVar2);
    if (param_5 != 0) {
      uVar3 = *(ulong *)(param_2 + 0x50);
      func_0x00787f00();
      if ((uVar3 & 1) == 0) {
        func_0x0077d780(param_2);
        goto LAB_004344c8;
      }
    }
    uVar2 = param_4;
    func_0x00789420(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078e300();
    _objc_release(uVar2);
    FUN_004307bc(param_1,auStack_b0);
  }
  if (bStack_58 == 1) {
    FUN_00437fe8(auStack_b0);
  }
  FUN_00635084(pcVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 00434580; end: 0043463b; -[SCSnapTokenStorage _accessTokenFromMemoryForAccessType:] */

void FUN_00434580(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  long lVar2;
  undefined8 uStack_38;
  
  pcVar1 = "_accessTokenFromMemoryForAccessType:";
  uStack_38 = param_4;
  func_0x00634fc8("_accessTokenFromMemoryForAccessType:");
  _os_unfair_lock_lock(param_2 + 0x30);
  lVar2 = param_2 + 8;
  func_0x0042b938(lVar2,&uStack_38);
  if (lVar2 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_00437f0c(param_1,0,lVar2 + 0x18);
  }
  param_1[0x58] = lVar2 != 0;
  _os_unfair_lock_unlock(param_2 + 0x30);
  FUN_00635084(pcVar1);
  return;
}



/* Entry: 0043463c; end: 004347e7; -[SCSnapTokenStorage _removeAccessTokenFromMemoryForAccessTypeKey:] */

void FUN_0043463c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_38;
  
  pcVar2 = "_removeAccessTokenFromMemoryForAccessTypeKey:";
  uStack_38 = param_3;
  func_0x00634fc8("_removeAccessTokenFromMemoryForAccessTypeKey:");
  _os_unfair_lock_lock(param_1 + 0x30);
  plVar3 = (long *)(param_1 + 8);
  func_0x0042b938(plVar3,&uStack_38);
  if (plVar3 == (long *)0x0) goto LAB_00434798;
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar4 = *plVar3;
  uVar5 = plVar3[1];
  uVar7 = uVar6 - 1;
  if ((uVar6 & uVar7) == 0) {
    uVar5 = uVar7 & uVar5;
  }
  else if (uVar6 <= uVar5) {
    uVar10 = 0;
    if (uVar6 != 0) {
      uVar10 = uVar5 / uVar6;
    }
    uVar5 = uVar5 - uVar10 * uVar6;
  }
  lVar8 = *(long *)(param_1 + 8);
  plVar1 = *(long **)(lVar8 + uVar5 * 8);
  do {
    plVar9 = plVar1;
    plVar1 = (long *)*plVar9;
  } while ((long *)*plVar9 != plVar3);
  if (plVar9 == (long *)(param_1 + 0x18)) {
LAB_00434700:
    if (lVar4 == 0) {
LAB_00434734:
      *(undefined8 *)(lVar8 + uVar5 * 8) = 0;
      lVar4 = *plVar3;
      goto LAB_0043473c;
    }
    uVar10 = *(ulong *)(lVar4 + 8);
    if ((uVar6 & uVar7) == 0) {
      uVar11 = uVar10 & uVar7;
    }
    else {
      uVar11 = uVar10;
      if (uVar6 <= uVar10) {
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar10 / uVar6;
        }
        uVar11 = uVar10 - uVar11 * uVar6;
      }
    }
    if (uVar11 != uVar5) goto LAB_00434734;
LAB_00434744:
    if ((uVar6 & uVar7) == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar6 <= uVar10) {
      uVar7 = 0;
      if (uVar6 != 0) {
        uVar7 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar7 * uVar6;
    }
    if (uVar10 != uVar5) {
      *(long **)(lVar8 + uVar10 * 8) = plVar9;
      lVar4 = *plVar3;
    }
  }
  else {
    uVar10 = plVar9[1];
    if ((uVar6 & uVar7) == 0) {
      uVar10 = uVar10 & uVar7;
    }
    else if (uVar6 <= uVar10) {
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar11 * uVar6;
    }
    if (uVar10 != uVar5) goto LAB_00434700;
LAB_0043473c:
    if (lVar4 != 0) {
      uVar10 = *(ulong *)(lVar4 + 8);
      goto LAB_00434744;
    }
  }
  *plVar9 = lVar4;
  *plVar3 = 0;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  FUN_00437fe8(plVar3 + 3);
  __ZdlPv(plVar3);
LAB_00434798:
  _os_unfair_lock_unlock(param_1 + 0x30);
  FUN_00635084(pcVar2);
  return;
}



/* Entry: 004347e8; end: 00434a73; -[SCSnapTokenStorage _setInMemoryAccessTokenValue:forAccessTypeKey:] */

void FUN_004347e8(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  char *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong unaff_x24;
  float fVar11;
  
  func_0x00634fc8("_setInMemoryAccessTokenValue:forAccessTypeKey:");
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar10 = *(ulong *)(param_1 + 0x10);
  if (uVar10 != 0) {
    uVar5 = uVar10 - 1;
    if ((uVar10 & uVar5) == 0) {
      unaff_x24 = uVar5 & param_4;
    }
    else {
      unaff_x24 = param_4;
      if (uVar10 <= param_4) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = param_4 / uVar10;
        }
        unaff_x24 = param_4 - uVar8 * uVar10;
      }
    }
    plVar6 = *(long **)(*(long *)(param_1 + 8) + unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_004348b4;
          uVar8 = plVar6[1];
          if (uVar8 != param_4) break;
          if (plVar6[2] == param_4) {
            lVar7 = (long)(plVar6 + 3);
            if (param_3 != lVar7) {
              FUN_00438050(lVar7);
              FUN_0043874c(lVar7,param_3);
            }
            goto LAB_004349e4;
          }
        }
        if ((uVar10 & uVar5) == 0) {
          uVar8 = uVar8 & uVar5;
        }
        else if (uVar10 <= uVar8) {
          uVar2 = 0;
          if (uVar10 != 0) {
            uVar2 = uVar8 / uVar10;
          }
          uVar8 = uVar8 - uVar2 * uVar10;
        }
      } while (uVar8 == unaff_x24);
    }
  }
LAB_004348b4:
  pcVar3 = section_00000068.sectname + 8;
  __Znwm();
  puVar1 = (undefined8 *)(param_1 + 0x18);
  pcVar3[0] = '\0';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = '\0';
  pcVar3[7] = '\0';
  *(ulong *)(pcVar3 + 8) = param_4;
  *(ulong *)(pcVar3 + 0x10) = param_4;
  FUN_00437f0c(pcVar3 + 0x18,0,param_3);
  fVar11 = (float)(*(long *)(param_1 + 0x20) + 1);
  if ((uVar10 == 0) || (*(float *)(param_1 + 0x28) * (float)uVar10 < fVar11)) {
    uVar5 = 1;
    if (2 < uVar10) {
      uVar5 = (ulong)((uVar10 & uVar10 - 1) != 0);
    }
    uVar5 = uVar5 | uVar10 << 1;
    uVar10 = (ulong)(fVar11 / *(float *)(param_1 + 0x28));
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    FUN_0042bc20(param_1 + 8,uVar5);
    uVar10 = *(ulong *)(param_1 + 0x10);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & param_4;
    }
    else {
      unaff_x24 = param_4;
      if (uVar10 <= param_4) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = param_4 / uVar10;
        }
        unaff_x24 = param_4 - uVar5 * uVar10;
      }
    }
  }
  lVar7 = *(long *)(param_1 + 8);
  puVar9 = *(undefined8 **)(lVar7 + unaff_x24 * 8);
  if (puVar9 == (undefined8 *)0x0) {
    *(undefined8 *)pcVar3 = *puVar1;
    *puVar1 = pcVar3;
    *(undefined8 **)(lVar7 + unaff_x24 * 8) = puVar1;
    if (*(long *)pcVar3 != 0) {
      uVar5 = *(ulong *)(*(long *)pcVar3 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar5 = uVar5 & uVar10 - 1;
      }
      else if (uVar10 <= uVar5) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar5 / uVar10;
        }
        uVar5 = uVar5 - uVar8 * uVar10;
      }
      *(char **)(lVar7 + uVar5 * 8) = pcVar3;
    }
  }
  else {
    *(undefined8 *)pcVar3 = *puVar9;
    *puVar9 = pcVar3;
  }
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
LAB_004349e4:
  _os_unfair_lock_unlock(param_1 + 0x30);
  puVar4 = PTR_PTR_00ac3358;
  func_0x007914e0(PTR_PTR_00ac3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00782900();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar4);
  return;
}



/* Entry: 00434a74; end: 00434c4b; -[SCSnapTokenStorage _readAccessTokenFromDiskForAccessType:userId:op:] */

void FUN_00434a74(undefined1 *param_1,double param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  double dVar6;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  pcVar2 = "_readAccessTokenFromDiskForAccessType:userId:op:";
  func_0x00634fc8("_readAccessTokenFromDiskForAccessType:userId:op:");
  _CACurrentMediaTime();
  uVar3 = *(ulong *)(param_3 + 0x48);
  dVar6 = param_2;
  func_0x0077e200();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  uVar4 = param_7;
  func_0x00789420(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078ea80(dVar6 - param_2);
  _objc_release(uVar4);
  if (uVar3 == 0) {
    *param_1 = 0;
    param_1[0x58] = 0;
  }
  else {
    ppuStack_b8 = &PTR_FUN_009e3ef0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    puStack_90 = &DAT_00b69408;
    puStack_88 = &DAT_00b69408;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uVar5 = uVar3;
    FUN_00432fc0(uVar3,&ppuStack_b8);
    bVar1 = (uVar5 & 1) == 0;
    if (bVar1) {
      func_0x0077d760(param_3);
      *param_1 = 0;
    }
    else {
      FUN_00435494(param_1,&ppuStack_b8);
    }
    param_1[0x58] = !bVar1;
    FUN_00437fe8(&ppuStack_b8);
  }
  _objc_release(uVar3);
  FUN_00635084(pcVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 00434c4c; end: 00434da7; -[SCSnapTokenStorage _writeToDiskAccessToken:accessType:userId:] */

void FUN_00434c4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  pcVar1 = "_writeToDiskAccessToken:accessType:userId:";
  func_0x00634fc8("_writeToDiskAccessToken:accessType:userId:");
  uVar2 = param_3;
  FUN_004385c0(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  func_0x00781720(PTR__OBJC_CLASS___NSMutableData_00ac2cc8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  _objc_retainAutorelease();
  func_0x007896e0();
  FUN_0054a1cc(param_3,puVar5,uVar2);
  if ((int)param_3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _objc_retainAutorelease(puVar3);
    puVar5 = puVar3;
  }
  _objc_release(puVar3);
  _objc_retain(puVar5);
  uVar4 = *(ulong *)(param_1 + 0x48);
  func_0x0078c9a0();
  if ((uVar4 & 1) == 0) {
    func_0x00791680(PTR_PTR_00ac2c90);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _objc_release(puVar5);
  FUN_00635084(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_5);
  return;
}



/* Entry: 00434da8; end: 00434e5f; -[SCSnapTokenStorage _removeAccessTokenFromDiskForAccessType:userId:] */

void FUN_00434da8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  pcVar1 = "_removeAccessTokenFromDiskForAccessType:userId:";
  func_0x00634fc8("_removeAccessTokenFromDiskForAccessType:userId:");
  uVar2 = *(ulong *)(param_1 + 0x48);
  func_0x0078b260(uVar2,param_2,param_4,param_3);
  if ((uVar2 & 1) == 0) {
    func_0x00791680(PTR_PTR_00ac2c90,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  FUN_00635084(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_4);
  return;
}



/* Entry: 00434e60; end: 00434f87; -[SCSnapTokenStorage _readRefreshTokenFromDiskForUserId:] */

void FUN_00434e60(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  pcVar1 = "_readRefreshTokenFromDiskForUserId:";
  func_0x00634fc8("_readRefreshTokenFromDiskForUserId:");
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x0078b120(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x007882e0();
  if (lVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
    _objc_alloc();
    func_0x007851e0();
    puVar5 = puVar4;
    func_0x007882e0();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar4);
      puVar5 = puVar4;
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
  FUN_00635084(pcVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 00434f88; end: 00435073; -[SCSnapTokenStorage _writeToDiskRefreshToken:userId:] */

void FUN_00434f88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  pcVar1 = "_writeToDiskRefreshToken:userId:";
  func_0x00634fc8("_writeToDiskRefreshToken:userId:");
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = param_3;
  func_0x007815a0(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078fbe0(uVar3,param_2,uVar2,param_4);
  _objc_release(uVar2);
  FUN_00635084(pcVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00435074; end: 004350ff; -[SCSnapTokenStorage _removeRefreshTokenFromDiskForUserId:] */

void FUN_00435074(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  
  _objc_retain(param_3);
  pcVar1 = "_removeRefreshTokenFromDiskForUserId:";
  func_0x00634fc8("_removeRefreshTokenFromDiskForUserId:");
  func_0x0078b540(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  FUN_00635084(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00435100; end: 00435227; -[SCSnapTokenStorage _readCloud1TLTokenFromDiskForUserId:] */

void FUN_00435100(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  pcVar1 = "_readCloud1TLTokenFromDiskForUserId:";
  func_0x00634fc8("_readCloud1TLTokenFromDiskForUserId:");
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x00780400(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x007882e0();
  if (lVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
    _objc_alloc();
    func_0x007851e0();
    puVar5 = puVar4;
    func_0x007882e0();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar4);
      puVar5 = puVar4;
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar2);
  FUN_00635084(pcVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar5);
  return;
}



/* Entry: 00435228; end: 00435313; -[SCSnapTokenStorage _writeToDiskCloud1TLToken:userId:] */

void FUN_00435228(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  pcVar1 = "_writeToDiskCloud1TLToken:userId:";
  func_0x00634fc8("_writeToDiskCloud1TLToken:userId:");
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = param_3;
  func_0x007815a0(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078d4e0(uVar3,param_2,uVar2,param_4);
  _objc_release(uVar2);
  FUN_00635084(pcVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00435314; end: 0043539f; -[SCSnapTokenStorage _removeCloud1TLTokenFromDiskForUserId:] */

void FUN_00435314(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  
  _objc_retain(param_3);
  pcVar1 = "_removeCloud1TLTokenFromDiskForUserId:";
  func_0x00634fc8("_removeCloud1TLTokenFromDiskForUserId:");
  func_0x0078b2c0(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
  FUN_00635084(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 004353a0; end: 004353a7; -[SCSnapTokenStorage refreshToken] */

undefined8 FUN_004353a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 004353a8; end: 004353d7; -[SCSnapTokenStorage setRefreshToken:] */

void FUN_004353a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 004353d8; end: 004353df; -[SCSnapTokenStorage cloud1TLToken] */

undefined8 FUN_004353d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 004353e0; end: 0043540f; -[SCSnapTokenStorage setCloud1TLToken:] */

void FUN_004353e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00435410; end: 00435417; -[SCSnapTokenStorage invalidated] */

undefined1 FUN_00435410(long param_1)

{
  return *(undefined1 *)(param_1 + 0x59);
}



/* Entry: 00435418; end: 0043541f; -[SCSnapTokenStorage setInvalidated:] */

void FUN_00435418(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x59) = param_3;
  return;
}



/* Entry: 00435420; end: 0043547b; -[SCSnapTokenStorage .cxx_destruct] */

long * FUN_00435420(long param_1)

{
  long *plVar1;
  long lVar2;
  
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  plVar1 = (long *)(param_1 + 8);
  func_0x0042c038(plVar1,*(undefined8 *)(param_1 + 0x18));
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 0043547c; end: 00435493; -[SCSnapTokenStorage .cxx_construct] */

void FUN_0043547c(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  return;
}



/* Entry: 00435494; end: 0043552b;  */

undefined8 * FUN_00435494(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *param_1 = &PTR_FUN_009e3ef0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = &DAT_00b69408;
  param_1[6] = &DAT_00b69408;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      FUN_0043882c(param_1,param_2);
    }
    else {
      FUN_00438050(param_1);
      FUN_0043874c(param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 0043552c; end: 00435533;  */

void FUN_0043552c(void)

{
  return;
}



/* Entry: 00435534; end: 00435583;  */

void FUN_00435534(void)

{
  dword *pdVar1;
  dword *pdVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  ___cxa_allocate_exception();
  FUN_00435584();
  pdVar2 = pdVar1;
  ___cxa_throw(pdVar1,PTR___ZTISt12out_of_range_0099c608,PTR___ZNSt12out_of_rangeD1Ev_009988e8);
  ___cxa_free_exception(pdVar1);
  __Unwind_Resume();
  __ZNSt11logic_errorC2EPKc();
  *(undefined **)pdVar2 = PTR___ZTVSt12out_of_range_00998e00 + 0x10;
  return;
}



/* Entry: 00435584; end: 004355a7;  */

void FUN_00435584(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12out_of_range_00998e00 + 0x10);
  return;
}



/* Entry: 004355a8; end: 0043561b; -[SCApplicationCircumstanceEngineServices initWithCircumstanceEngineLazy:] */

undefined1 * FUN_004355a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac3b38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 0043561c; end: 00435623; -[SCApplicationCircumstanceEngineServices circumstanceEngine] */

void FUN_0043561c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00792730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(*(undefined8 *)(param_1 + 8),PTR_s_target_00abf6d8);
  return;
}



/* Entry: 00435624; end: 0043562b; -[SCApplicationCircumstanceEngineServices circumstanceEngineLazy] */

undefined8 FUN_00435624(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 0043562c; end: 00435637; -[SCApplicationCircumstanceEngineServices .cxx_destruct] */

void FUN_0043562c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00435638; end: 004356db; -[SCCircumstanceEngineServices initWithCircumstanceEngine:ipInferredCountryCodeProvider:] */

undefined1 *
FUN_00435638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3b40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
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



/* Entry: 004356dc; end: 004356e3; -[SCCircumstanceEngineServices circumstanceEngine] */

undefined8 FUN_004356dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 004356e4; end: 004356eb; -[SCCircumstanceEngineServices ipInferredCountryCodeProvider] */

undefined8 FUN_004356e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 004356ec; end: 0043571b; -[SCCircumstanceEngineServices .cxx_destruct] */

void FUN_004356ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0043571c; end: 004357c7; -[SCConfigResult initWithStudyName:experimentId:] */

undefined1 *
FUN_0043571c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac3b48;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 004357c8; end: 004357eb; -[SCConfigResult copyWithZone:] */

undefined8 FUN_004357c8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 004357ec; end: 0043585f; -[SCConfigResult hash] */

undefined8 * FUN_004357ec(long param_1,undefined8 param_2,undefined8 *param_3)

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
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x007843a0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x007843a0();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x0076fd30(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_004358e0:
    puVar6 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_004358ec;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x007877e0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x007877e0();
          goto LAB_004358ec;
        }
        goto LAB_004358e0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_004358ec:
  _objc_release(param_3);
  return puVar6;
}


