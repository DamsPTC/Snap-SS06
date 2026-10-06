/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104d327ac; end: 104d32807;  */

void FUN_104d327ac(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  _objc_retain(*(undefined8 *)(param_2 + 0x38));
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),7);
  return;
}



/* Entry: 104d32808; end: 104d32d8b; -[SCLoginJanusService _loginWithPasswordResponseWithResponse:error:usernameOrEmail:tempIdentity:submitRequestTime:networkRequestId:success:failure:] */

void FUN_104d32808(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0900();
  _objc_release(uVar1);
  if (param_3 != (undefined *)0x0) {
    func_0x000106b7ef08(param_3);
  }
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  func_0x00010c13bc00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010bde4480();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    (**(code **)(param_9 + 0x10))(param_9,lVar3);
    goto LAB_104d32b6c;
  }
  puVar10 = param_3;
  func_0x00010bf98a00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar10;
  func_0x00010bfe4e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar5 = param_3;
  func_0x00010c252ee0();
  puVar10 = PTR_PTR_1126af540;
  puVar6 = param_3;
  switch((ulong)puVar5 & 0xffffffff) {
  case 0:
  case 7:
  case 9:
  case 10:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x16:
LAB_104d32a1c:
    func_0x00010bfbed40(PTR_PTR_1126af540);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 1:
  case 2:
  case 3:
  case 5:
  case 8:
  case 0x13:
  case 0x15:
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126af528;
    func_0x00010bf43e00(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar1);
    _objc_release(puVar10);
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126af360;
    _objc_alloc();
    puVar10 = param_3;
    func_0x000106b786d0(param_3,param_5,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1faa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40(param_4);
    func_0x00010c03fca0(puVar5);
    (**(code **)(param_8 + 0x10))(param_8,puVar5);
    _objc_release(puVar5);
    goto LAB_104d32b54;
  case 4:
    func_0x00010c0b3ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    FUN_104d32d8c();
    _objc_retainAutoreleasedReturnValue();
    goto code_r0x000104d32d4c;
  case 6:
    func_0x00010beed540();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar6;
    func_0x00010bfe4e60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010beed540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06c4e0();
    puVar8 = param_3;
    func_0x00010beed540();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bf06800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beed560(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
code_r0x000104d32d4c:
    _objc_release(puVar6);
    break;
  case 0xb:
    func_0x00010c2704c0(PTR_PTR_1126af540);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xc:
  case 0xe:
    func_0x00010bf5c2e0(PTR_PTR_1126af540);
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xd:
  case 0x17:
    uVar1 = param_5;
    func_0x000106b78300();
    if ((int)uVar1 == 0) {
      uVar1 = param_5;
      func_0x000106b78280();
      puVar10 = PTR_PTR_1126af540;
      if ((int)uVar1 == 0) {
        func_0x00010c294640(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bf8d9e0();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar10 = PTR_PTR_1126af540;
      func_0x00010c0faf20(PTR_PTR_1126af540);
      _objc_retainAutoreleasedReturnValue();
    }
    break;
  default:
    if ((int)puVar5 == -0x4524111) goto LAB_104d32a1c;
    puVar10 = (undefined *)0x0;
  }
  puVar6 = PTR_PTR_1126af548;
  _objc_alloc(PTR_PTR_1126af548);
  func_0x00010bf3ec40(param_4);
  func_0x00010c0196e0(puVar6);
  (**(code **)(param_9 + 0x10))(param_9,puVar6);
LAB_104d32b54:
  _objc_release(puVar6);
  _objc_release(puVar10);
  _objc_release(puVar4);
LAB_104d32b6c:
  _objc_release(lVar3);
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d32d8c; end: 104d32e37;  */

void FUN_104d32d8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010540c8f4(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af540;
  uVar2 = param_1;
  func_0x00010c0ed400(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe4e20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5c300(puVar4,param_2,uVar3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 104d32e38; end: 104d33013; -[SCLoginJanusService completeChannelVerification:code:networkRequestId:success:failure:] */

void FUN_104d32e38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af528;
  func_0x00010c251d80(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010be79040(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d33014; end: 104d330cb;  */

void FUN_104d33014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde29e0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104d330cc; end: 104d334cf; -[SCLoginJanusService _completeChannelVerification:code:networkRequestId:deviceCheckToken:tempIdentity:clientInit:cofTags:success:failure:] */

void FUN_104d330cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar1 = PTR_PTR_1126afa08;
  func_0x00010c0cb140(PTR_PTR_1126afa08);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bfb2ee0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17abc0(puVar1);
  _objc_release(uVar7);
  func_0x00010c17aba0(puVar1);
  func_0x00010c19b6c0(puVar1);
  func_0x00010c17dfe0(puVar1);
  uVar2 = param_4;
  func_0x00010c294660(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf71140(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar11 = *(undefined8 *)(param_2 + 0x20);
  uVar10 = *(undefined8 *)(param_2 + 0x48);
  uVar12 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfc3b00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x15;
  func_0x00010540c48c(0x15,uVar2,uVar3,param_7,uVar7,uVar9,uVar11,uVar10,uVar12,uVar5,param_6,
                      *(undefined8 *)(param_2 + 0x80));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0900(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_80,param_2);
  _CACurrentMediaTime();
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7b20();
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126af528;
  func_0x00010c1368c0(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80(uVar7);
  _objc_release(puVar8);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010540bd48(uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_80);
  _objc_retain(param_8);
  uStack_88 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_11);
  _objc_retain(param_12);
  func_0x00010c298660(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104d334d0; end: 104d33543;  */

void FUN_104d334d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bee84e0(*(undefined8 *)(param_1 + 0x48));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d33544; end: 104d3398b; -[SCLoginJanusService _verifyChannelVerificationResponse:error:tempIdentity:submitRequestTime:networkRequestId:success:failure:] */

void FUN_104d33544(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_3 != (undefined *)0x0) {
    func_0x00010540d354(param_3);
  }
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  func_0x00010c13bc00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80();
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010bde43c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,lVar4);
    goto LAB_104d3381c;
  }
  puVar5 = param_3;
  func_0x00010bf98a00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfe4e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = param_3;
  func_0x00010c252ee0();
  puVar8 = (undefined *)0x0;
  iVar1 = (int)puVar5;
  if (iVar1 < 0xb) {
    if (iVar1 < 1) {
      if ((iVar1 == -0x4524111) || (iVar1 == 0)) {
LAB_104d337a4:
        puVar8 = PTR_PTR_1126af540;
        func_0x00010bfbed40(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_104d337c4;
    }
    if (iVar1 != 1) {
      if ((iVar1 == 2) || (iVar1 == 10)) goto LAB_104d337a4;
      goto LAB_104d337c4;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126af528;
    func_0x00010bf43e00(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar2);
    _objc_release(puVar5);
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126af360;
    _objc_alloc(PTR_PTR_1126af360);
    puVar8 = PTR_PTR_1126af368;
    func_0x00010c261740(PTR_PTR_1126af368);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bf1faa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40(param_4);
    func_0x00010c03fca0(puVar7);
    (**(code **)(param_7 + 0x10))(param_7,puVar7);
    _objc_release(puVar7);
  }
  else {
    if (iVar1 < 0xe) {
      if (iVar1 == 0xb) {
        puVar8 = PTR_PTR_1126af540;
        func_0x00010c2704c0(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (iVar1 == 0xc) {
        puVar8 = PTR_PTR_1126af540;
        func_0x00010c282380(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (iVar1 == 0xd) {
        puVar8 = PTR_PTR_1126af540;
        func_0x00010bf5c2e0(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (iVar1 - 0xeU < 2) goto LAB_104d337a4;
LAB_104d337c4:
    puVar5 = PTR_PTR_1126af548;
    _objc_alloc(PTR_PTR_1126af548);
    func_0x00010bf3ec40(param_4);
    func_0x00010c0196e0(puVar5);
    (**(code **)(param_8 + 0x10))(param_8,puVar5);
  }
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar6);
LAB_104d3381c:
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d3398c; end: 104d33b67; -[SCLoginJanusService reactivateWithIdentifier:reactivationToken:networkRequestId:success:failure:] */

void FUN_104d3398c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af528;
  func_0x00010c251d80(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010be79040(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d33b68; end: 104d33e6f;  */

void FUN_104d33b68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_104d32680();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126af530;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010bf71140(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar1 + 0x10);
    uVar9 = *(undefined8 *)(lVar1 + 0x18);
    uVar13 = *(undefined8 *)(lVar1 + 0x20);
    uVar10 = *(undefined8 *)(lVar1 + 0x48);
    uVar11 = *(undefined8 *)(lVar1 + 0x58);
    uVar5 = *(undefined8 *)(lVar1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010bfc3b00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0xc;
    func_0x00010540c48c(0xc,uVar2,uVar4,param_2,uVar7,uVar9,uVar13,uVar10,uVar11,uVar12,
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(lVar1 + 0x80));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0900(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar12);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c1e7e20(puVar3);
    _CACurrentMediaTime();
    uVar7 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7b20();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(lVar1 + 0x88);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126af528;
    func_0x00010c1368c0(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar7);
    _objc_release(puVar8);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar1 + 0x58);
    func_0x00010540bd48(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar12);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar5);
    _objc_retain(uVar2);
    func_0x00010c120fc0(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar12);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104d33e70; end: 104d33eab;  */

void FUN_104d33e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010be86220(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x20),param_2,
                      param_2,param_3,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 104d33eac; end: 104d3427b; -[SCLoginJanusService _reactivateAccountResponseWithResponse:error:usernameOrEmail:tempIdentity:submitRequestTime:networkRequestId:success:failure:] */

void FUN_104d33eac(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_3 != (undefined *)0x0) {
    func_0x000106b7f0c8(param_3);
  }
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  func_0x00010c13bc00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80();
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010bde43c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    (**(code **)(param_9 + 0x10))(param_9,lVar4);
    goto LAB_104d34114;
  }
  puVar7 = param_3;
  func_0x00010bf98a00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x00010bfe4e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = param_3;
  func_0x00010c252ee0();
  uVar1 = (uint)puVar7;
  puVar7 = PTR_PTR_1126af540;
  if (uVar1 < 0xf) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x7405U) != 0) goto LAB_104d34094;
    if (uVar1 != 1) {
      if (uVar1 != 0xb) goto LAB_104d341a8;
      func_0x00010c2704c0(PTR_PTR_1126af540);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104d340b4;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126af528;
    func_0x00010bf43e00(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar2);
    _objc_release(puVar7);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126af360;
    _objc_alloc(PTR_PTR_1126af360);
    puVar7 = param_3;
    func_0x000106b786d0(param_3,param_5,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40(param_4);
    func_0x00010c03fca0(puVar6);
    (**(code **)(param_8 + 0x10))(param_8,puVar6);
  }
  else {
LAB_104d341a8:
    if (uVar1 == 0xfbadbeef) {
LAB_104d34094:
      func_0x00010bfbed40(PTR_PTR_1126af540);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar7 = (undefined *)0x0;
    }
LAB_104d340b4:
    puVar6 = PTR_PTR_1126af548;
    _objc_alloc(PTR_PTR_1126af548);
    func_0x00010bf3ec40(param_4);
    func_0x00010c0196e0(puVar6);
    (**(code **)(param_9 + 0x10))(param_9,puVar6);
  }
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
LAB_104d34114:
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d3427c; end: 104d3448b; -[SCLoginJanusService complete2FALogInWithUsernameOrEmail:confirmationCode:twoFAPreAuthToken:rememberDevice:twoFAMethod:success:failure:] */

void FUN_104d3427c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  uVar1 = param_9;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af528;
  func_0x00010c251d80(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_5);
  uStack_78 = param_7;
  _objc_retain(param_4);
  uStack_70 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x00010be79040(param_1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d3448c; end: 104d347ef;  */

void FUN_104d3448c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126afa10;
    _objc_opt_new(PTR_PTR_1126afa10);
    func_0x00010c21ac20();
    func_0x00010c21ac40(puVar2);
    func_0x00010c21ac00(puVar2);
    func_0x00010c1e9cc0(puVar2);
    func_0x00010c17dfe0(puVar2);
    func_0x00010c19b6c0(puVar2);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010bf71140(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
    uVar8 = *(undefined8 *)(lVar1 + 0x18);
    uVar10 = *(undefined8 *)(lVar1 + 0x20);
    uVar11 = *(undefined8 *)(lVar1 + 0x48);
    uVar12 = *(undefined8 *)(lVar1 + 0x58);
    uVar4 = *(undefined8 *)(lVar1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar4;
    func_0x00010bfc3b00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x18;
    func_0x00010540c48c(0x18,uVar9,uVar3,param_2,uVar6,uVar8,uVar10,uVar11,uVar12,uVar13,uVar14,
                        *(undefined8 *)(lVar1 + 0x80));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0900(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _CACurrentMediaTime();
    uVar6 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7b20();
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(lVar1 + 0x88);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126af528;
    func_0x00010c1368c0(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar6);
    _objc_release(puVar7);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(lVar1 + 0x58);
    func_0x00010540bd48(uVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar14 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(*(undefined8 *)(param_1 + 0x40));
    uVar13 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar13);
    func_0x00010c298b80(uVar6);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar13);
    _objc_release(uVar14);
    _objc_release(param_3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104d347f0; end: 104d3480f;  */

void FUN_104d347f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee87f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20),
             PTR_s__verifyTwoFAResponseWithResponse_112597ba0,param_2,param_3,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 104d34810; end: 104d348cb;  */

void FUN_104d34810(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  return;
}



/* Entry: 104d348cc; end: 104d34d03; -[SCLoginJanusService _verifyTwoFAResponseWithResponse:error:tempIdentity:submitRequestTime:networkRequestId:success:failure:] */

void FUN_104d348cc(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_3 != (undefined *)0x0) {
    func_0x00010540dc3c(param_3);
  }
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  func_0x00010c13bc00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80();
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010bde43c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,lVar4);
    goto LAB_104d34ba4;
  }
  puVar5 = param_3;
  func_0x00010bf98a00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfe4e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = param_3;
  func_0x00010c252ee0();
  puVar9 = (undefined *)0x0;
  iVar1 = (int)puVar5;
  if (iVar1 < 0xb) {
    if (iVar1 < 1) {
      if ((iVar1 == -0x4524111) || (iVar1 == 0)) {
LAB_104d34b2c:
        puVar9 = PTR_PTR_1126af540;
        func_0x00010bfbed40(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_104d34b4c;
    }
    if (iVar1 != 1) {
      if ((iVar1 == 2) || (iVar1 == 10)) goto LAB_104d34b2c;
      goto LAB_104d34b4c;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126af528;
    func_0x00010bf43e00(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar2);
    _objc_release(puVar5);
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126af360;
    _objc_alloc(PTR_PTR_1126af360);
    puVar9 = PTR_PTR_1126af368;
    func_0x00010c261740(PTR_PTR_1126af368);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bf1faa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40(param_4);
    func_0x00010c03fca0(puVar7);
    puVar8 = param_3;
    func_0x00010c124320(param_3);
    (**(code **)(param_7 + 0x10))(param_7,puVar7,puVar8);
    _objc_release(puVar7);
  }
  else {
    if (iVar1 < 0xe) {
      if (iVar1 == 0xb) {
        puVar9 = PTR_PTR_1126af540;
        func_0x00010c2704c0(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
      else if ((iVar1 == 0xc) || (iVar1 == 0xd)) {
        puVar9 = PTR_PTR_1126af540;
        func_0x00010bf5c2e0(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (iVar1 - 0xeU < 2) goto LAB_104d34b2c;
LAB_104d34b4c:
    puVar5 = PTR_PTR_1126af548;
    _objc_alloc(PTR_PTR_1126af548);
    func_0x00010bf3ec40(param_4);
    func_0x00010c0196e0(puVar5);
    (**(code **)(param_8 + 0x10))(param_8,puVar5);
  }
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(puVar6);
LAB_104d34ba4:
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d34d04; end: 104d34ecf; -[SCLoginJanusService logInWithOdlvChallenge:solution:success:failure:] */

void FUN_104d34d04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af528;
  func_0x00010c251d80(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010be79040(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d34ed0; end: 104d35307;  */

void FUN_104d34ed0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126afa18;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_104d35308;
    uStack_88 = 0x104d35318;
    uStack_80 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08bda0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0befa0();
    _objc_release(uVar3);
    func_0x00010c1d0a00(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf480a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d09a0(puVar2);
    _objc_release(uVar3);
    func_0x00010c0ee1e0();
    func_0x00010c1d0a20(puVar2);
    func_0x00010c17dfe0(puVar2);
    func_0x00010c19b6c0(puVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c294660();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010bf71140();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    uVar9 = *(undefined8 *)(lVar1 + 0x18);
    uVar10 = *(undefined8 *)(lVar1 + 0x20);
    uVar12 = *(undefined8 *)(lVar1 + 0x48);
    uVar13 = *(undefined8 *)(lVar1 + 0x58);
    uVar6 = *(undefined8 *)(lVar1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar6;
    func_0x00010bfc3b00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar11;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x17;
    func_0x00010540c48c(0x17,uVar4,uVar5,param_2,uVar3,uVar9,uVar10,uVar12,uVar13,uVar11,uVar14,
                        *(undefined8 *)(lVar1 + 0x80));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0900(puVar2);
    _objc_release(uVar7);
    _objc_release(uVar14);
    _objc_release(uVar11);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _CACurrentMediaTime();
    uVar3 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7b20();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + 0x88);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126af528;
    func_0x00010c1368c0(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar3);
    _objc_release(puVar8);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar1 + 0x58);
    func_0x00010540bd48(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(*(undefined8 *)(param_1 + 0x38));
    uVar11 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar11);
    func_0x00010c298940(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(uVar11);
    _objc_release(uVar14);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104d35308; end: 104d3531f;  */

void FUN_104d35308(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d35320; end: 104d35357;  */

void FUN_104d35320(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d35358; end: 104d3537b;  */

void FUN_104d35358(void)

{
  return;
}



/* Entry: 104d3537c; end: 104d357c3; -[SCLoginJanusService _verifyODLVResponseWithResponse:error:tempIdentity:submitRequestTime:networkRequestId:success:failure:] */

void FUN_104d3537c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_3 != (undefined *)0x0) {
    func_0x00010540d7c8(param_3);
  }
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  func_0x00010c13bc00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80();
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010bde43c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,lVar4);
    goto LAB_104d35654;
  }
  puVar5 = param_3;
  func_0x00010bf98a00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfe4e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = param_3;
  func_0x00010c252ee0();
  puVar8 = (undefined *)0x0;
  iVar1 = (int)puVar5;
  if (iVar1 < 0xb) {
    if (iVar1 < 1) {
      if ((iVar1 == -0x4524111) || (iVar1 == 0)) {
LAB_104d355dc:
        puVar8 = PTR_PTR_1126af540;
        func_0x00010bfbed40(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_104d355fc;
    }
    if (iVar1 != 1) {
      if ((iVar1 == 2) || (iVar1 == 10)) goto LAB_104d355dc;
      goto LAB_104d355fc;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126af528;
    func_0x00010bf43e00(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar2);
    _objc_release(puVar5);
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126af360;
    _objc_alloc(PTR_PTR_1126af360);
    puVar8 = PTR_PTR_1126af368;
    func_0x00010c261740(PTR_PTR_1126af368);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bf1faa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40(param_4);
    func_0x00010c03fca0(puVar7);
    (**(code **)(param_7 + 0x10))(param_7,puVar7);
    _objc_release(puVar7);
  }
  else {
    if (iVar1 < 0xe) {
      if (iVar1 == 0xb) {
        puVar8 = PTR_PTR_1126af540;
        func_0x00010c2704c0(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (iVar1 == 0xc) {
        puVar8 = PTR_PTR_1126af540;
        func_0x00010c069bc0(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (iVar1 == 0xd) {
        puVar8 = PTR_PTR_1126af540;
        func_0x00010bf5c2e0(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (iVar1 - 0xeU < 2) goto LAB_104d355dc;
LAB_104d355fc:
    puVar5 = PTR_PTR_1126af548;
    _objc_alloc(PTR_PTR_1126af548);
    func_0x00010bf3ec40(param_4);
    func_0x00010c0196e0(puVar5);
    (**(code **)(param_8 + 0x10))(param_8,puVar5);
  }
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar6);
LAB_104d35654:
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d357c4; end: 104d359df; -[SCLoginJanusService logInWithMagicCode:usernameOrEmail:sessionToken:deliveryMechanism:networkRequestId:useCase:success:failure:] */

void FUN_104d357c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af528;
  func_0x00010c251d80(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_4);
  uStack_70 = param_8;
  _objc_retain(param_5);
  _objc_retain(param_3);
  uStack_78 = param_6;
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010be79040(param_1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d359e0; end: 104d35dcf;  */

void FUN_104d359e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_2 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    FUN_104d32680();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126afa20;
    func_0x00010c0cb140(PTR_PTR_1126afa20);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x000106b78280();
    if ((int)uVar7 == 0) {
      uVar7 = uVar2;
      func_0x000106b78300();
      if ((int)uVar7 == 0) {
        func_0x00010c21f760(puVar3);
      }
      else {
        func_0x00010c1db1c0(puVar3);
      }
    }
    else {
      func_0x00010c194080(puVar3);
    }
    func_0x00010c21d640(puVar3);
    func_0x00010c1fdec0(puVar3);
    func_0x00010c1c0860(puVar3);
    func_0x00010c1c0880(puVar3);
    func_0x00010c17dfe0(puVar3);
    func_0x00010c19b6c0(puVar3);
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010bf71140(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar1 + 0x10);
    uVar9 = *(undefined8 *)(lVar1 + 0x18);
    uVar12 = *(undefined8 *)(lVar1 + 0x20);
    uVar10 = *(undefined8 *)(lVar1 + 0x48);
    uVar13 = *(undefined8 *)(lVar1 + 0x58);
    uVar5 = *(undefined8 *)(lVar1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar5;
    func_0x00010bfc3b00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0x16;
    func_0x00010540c48c(0x16,uVar2,uVar4,param_3,uVar7,uVar9,uVar12,uVar10,uVar13,uVar11,
                        *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(lVar1 + 0x80));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0900(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar11);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _CACurrentMediaTime();
    uVar7 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7b20();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(lVar1 + 0x88);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126af528;
    func_0x00010c1368c0(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar7);
    _objc_release(puVar8);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar1 + 0x58);
    func_0x00010540bd48(uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,param_2 + 0x50);
    _objc_retain(param_4);
    uVar11 = *(undefined8 *)(param_2 + 0x38);
    uStack_80 = param_1;
    _objc_retain(uVar11);
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    _objc_retain(uVar5);
    func_0x00010c2988a0(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar11);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_88);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d35dd0; end: 104d35e43;  */

void FUN_104d35dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be5ad20(*(undefined8 *)(param_1 + 0x48));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d35e44; end: 104d3628b; -[SCLoginJanusService _loginWithMagicCodeRespondWithResponse:error:tempIdentity:submitRequestTime:networkRequestId:success:failure:] */

void FUN_104d35e44(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_3 != (undefined *)0x0) {
    func_0x000106b7e964(param_3);
  }
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  func_0x00010c13bc00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80();
  _objc_release(uVar2);
  lVar4 = param_1;
  func_0x00010bde43c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,lVar4);
    goto LAB_104d3611c;
  }
  puVar5 = param_3;
  func_0x00010bf98a00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bfe4e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = param_3;
  func_0x00010c252ee0();
  puVar8 = (undefined *)0x0;
  iVar1 = (int)puVar5;
  if (iVar1 < 0xb) {
    if (iVar1 < 1) {
      if ((iVar1 == -0x4524111) || (iVar1 == 0)) {
LAB_104d360a4:
        puVar8 = PTR_PTR_1126af540;
        func_0x00010bfbed40(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_104d360c4;
    }
    if (iVar1 != 1) {
      if ((iVar1 == 3) || (iVar1 == 10)) goto LAB_104d360a4;
      goto LAB_104d360c4;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126af528;
    func_0x00010bf43e00(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar2);
    _objc_release(puVar5);
    _objc_release(uVar2);
    puVar7 = PTR_PTR_1126af360;
    _objc_alloc(PTR_PTR_1126af360);
    puVar8 = PTR_PTR_1126af368;
    func_0x00010c261740(PTR_PTR_1126af368);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_3;
    func_0x00010bf1faa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40(param_4);
    func_0x00010c03fca0(puVar7);
    (**(code **)(param_7 + 0x10))(param_7,puVar7);
    _objc_release(puVar7);
  }
  else {
    if (iVar1 < 0xe) {
      if (iVar1 == 0xb) {
        puVar8 = PTR_PTR_1126af540;
        func_0x00010bf48c00(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (iVar1 == 0xc) {
        puVar8 = PTR_PTR_1126af540;
        func_0x00010c282380(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
      else if (iVar1 == 0xd) {
        puVar8 = PTR_PTR_1126af540;
        func_0x00010bf5c2e0(PTR_PTR_1126af540);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (iVar1 - 0xeU < 2) goto LAB_104d360a4;
LAB_104d360c4:
    puVar5 = PTR_PTR_1126af548;
    _objc_alloc(PTR_PTR_1126af548);
    func_0x00010bf3ec40(param_4);
    func_0x00010c0196e0(puVar5);
    (**(code **)(param_8 + 0x10))(param_8,puVar5);
  }
  _objc_release(puVar5);
  _objc_release(puVar8);
  _objc_release(puVar6);
LAB_104d3611c:
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d3628c; end: 104d3648b; -[SCLoginJanusService resendMagicCodeWithUsernameOrEmail:sessionToken:deliveryMechanism:useCase:success:failure:] */

void FUN_104d3628c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  uVar1 = param_8;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af528;
  func_0x00010c251d80(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_3);
  uStack_70 = param_6;
  _objc_retain(param_4);
  uStack_78 = param_5;
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010bfa6480(uVar2);
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d3648c; end: 104d367e3;  */

void FUN_104d3648c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    FUN_104d32680();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126afa28;
    func_0x00010c0cb140(PTR_PTR_1126afa28);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x000106b78280();
    if ((int)uVar7 == 0) {
      uVar7 = uVar2;
      func_0x000106b78300();
      if ((int)uVar7 == 0) {
        func_0x00010c21f760(puVar3);
      }
      else {
        func_0x00010c1db1c0(puVar3);
      }
    }
    else {
      func_0x00010c194080(puVar3);
    }
    func_0x00010c083b00(PTR_PTR_1126afa00);
    func_0x00010c1b5b20(puVar3);
    func_0x00010c21d640(puVar3);
    func_0x00010c1fdec0(puVar3);
    func_0x00010c1c0880(puVar3);
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010bf71140(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(lVar1 + 0x10);
    uVar9 = *(undefined8 *)(lVar1 + 0x18);
    uVar12 = *(undefined8 *)(lVar1 + 0x20);
    uVar13 = *(undefined8 *)(lVar1 + 0x48);
    uVar11 = *(undefined8 *)(lVar1 + 0x58);
    uVar5 = *(undefined8 *)(lVar1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bfc3b00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar10;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0x12;
    func_0x00010540c48c(0x12,uVar2,uVar4,param_2,uVar7,uVar9,uVar12,uVar13,uVar11,uVar10,uVar14,
                        *(undefined8 *)(lVar1 + 0x80));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0900(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar14);
    _objc_release(uVar10);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _CACurrentMediaTime();
    uVar7 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7b20();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(lVar1 + 0x88);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126af528;
    func_0x00010c1368c0(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar7);
    _objc_release(puVar8);
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar1 + 0x58);
    func_0x00010540bd48(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(*(undefined8 *)(param_1 + 0x38));
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar10);
    func_0x00010c15c120(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_release(uVar10);
    _objc_release(uVar14);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104d367e4; end: 104d367ff;  */

void FUN_104d367e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9f690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x20),
             PTR_s__sendLoginCodeResponseWithRespon_112585748,param_2,param_3,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 104d36800; end: 104d36ad3; -[SCLoginJanusService _sendLoginCodeResponseWithResponse:error:submitRequestTime:networkRequestId:success:failure:] */

void FUN_104d36800(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  code *pcVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 != 0) {
    func_0x000106b7e814(param_3);
  }
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(uVar3);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  func_0x00010c13bc00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80();
  _objc_release(uVar3);
  lVar5 = param_1;
  func_0x00010bde43e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,lVar5,1);
    goto LAB_104d369e4;
  }
  lVar6 = param_3;
  func_0x00010bf98a00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bfe4e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c252ee0();
  uVar2 = (uint)lVar6;
  if (uVar2 < 0x11) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x1d405) != 0) goto LAB_104d369c8;
    if ((uVar1 & 0x2800) == 0) {
      if (uVar2 != 1) goto LAB_104d36ac0;
      uVar3 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126af528;
      func_0x00010bf43e00(PTR_PTR_1126af528);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aae80(uVar3);
      _objc_release(puVar8);
      _objc_release(uVar3);
      (**(code **)(param_6 + 0x10))(param_6,0);
      goto LAB_104d369dc;
    }
    pcVar9 = *(code **)(param_7 + 0x10);
    uVar3 = 1;
LAB_104d369d8:
    (*pcVar9)(param_7,lVar7,uVar3);
  }
  else {
LAB_104d36ac0:
    if (uVar2 == 0xfbadbeef) {
LAB_104d369c8:
      pcVar9 = *(code **)(param_7 + 0x10);
      uVar3 = 0;
      goto LAB_104d369d8;
    }
  }
LAB_104d369dc:
  _objc_release(lVar7);
LAB_104d369e4:
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d36ad4; end: 104d36d6b; -[SCLoginJanusService appLogin:networkRequestId:completion:] */

void FUN_104d36ad4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  puStack_138 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104d39e20;
  puStack_a0 = &UNK_110842b58;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x104d39e34;
  puStack_c8 = &UNK_11084bf60;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  uStack_f8 = 0x104d39e48;
  puStack_f0 = &UNK_11084bf60;
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x104d39e5c;
  puStack_118 = &UNK_11084bf30;
  puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_150 = 0xc2000000;
  uStack_148 = 0x104d39e70;
  puStack_140 = &UNK_110842b88;
  puStack_110 = puStack_138;
  puStack_e8 = puStack_138;
  puStack_c0 = puStack_138;
  puStack_98 = puStack_138;
  puStack_88 = puStack_138;
  func_0x00010c0c0d00(param_3);
  uVar3 = puStack_88[3];
  __Block_object_dispose(&uStack_90,8);
  _objc_release(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af528;
  func_0x00010c251d80(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_initWeak(&puStack_b8,param_1);
  _objc_copyWeak(auStack_168,&puStack_b8);
  _objc_retain(param_4);
  uStack_160 = uVar3;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be79040(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_168);
  _objc_destroyWeak(&puStack_b8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d36d6c; end: 104d370ab;  */

void FUN_104d36d6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126afa30;
    func_0x00010c0cb140(PTR_PTR_1126afa30);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c083b00(PTR_PTR_1126afa00);
    func_0x00010c1b5b20(puVar2);
    lVar3 = lVar1;
    func_0x00010bdccca0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c08a0(puVar2);
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010bdccc20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173220(puVar2);
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010bdcccc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0920(puVar2);
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010bdccc60(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ca60(puVar2);
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010bdfbfa0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cf20(puVar2);
    _objc_release(lVar3);
    func_0x00010c1aee20(puVar2);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0f6420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16c920(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _CACurrentMediaTime();
    uVar5 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7b20();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(lVar1 + 0x88);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126af528;
    func_0x00010c1368c0(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar5);
    _objc_release(puVar6);
    _objc_release(uVar5);
    lVar3 = lVar1;
    func_0x00010bdccc40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    func_0x00010bf05a20(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(lVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 104d370ac; end: 104d370cb;  */

void FUN_104d370ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdcccf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             PTR_s__appLoginResondWithResponse_erro_112550cd8,param_2,param_3,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104d370cc; end: 104d37377; -[SCLoginJanusService _appLoginResondWithResponse:error:submitRequestTime:networkRequestId:networkEndpoint:completion:] */

void FUN_104d370cc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bdccd00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdccd20(param_1);
  puVar2 = PTR_PTR_1126afa38;
  _objc_alloc(PTR_PTR_1126afa38);
  func_0x00010bf3ec40(param_4);
  func_0x00010c0196c0(puVar2);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(uVar3);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  _objc_release(param_4);
  func_0x00010c13bc00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80();
  _objc_release(uVar3);
  lVar5 = param_3;
  func_0x00010bf10d20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if (lVar6 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf10d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9a60(uVar3);
    _objc_release(lVar5);
    _objc_release(uVar3);
  }
  lVar5 = param_3;
  func_0x00010c252ee0();
  if ((int)lVar5 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126af528;
    func_0x00010bf43e00(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar3);
    _objc_release(puVar7);
    _objc_release(uVar3);
  }
  if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,puVar2);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d37378; end: 104d3751b; -[SCLoginJanusService appLoginAnswerChallenge:authenticationSessionPayload:completion:] */

void FUN_104d37378(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af528;
  func_0x00010c251d80(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be79040(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d3751c; end: 104d376eb;  */

void FUN_104d3751c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = param_2 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126afa40;
    func_0x00010c0cb140(PTR_PTR_1126afa40);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a8e0();
    lVar3 = lVar1;
    func_0x00010bdfbfa0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18cf20(puVar2,param_3,lVar3);
    _objc_release(lVar3);
    func_0x00010c16c920(puVar2,param_3,*(undefined8 *)(param_2 + 0x28));
    _CACurrentMediaTime();
    uVar4 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7b20();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(lVar1 + 0x88);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126af528;
    func_0x00010c1368c0(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar4,param_3,puVar5,8,*(undefined8 *)(param_2 + 0x30));
    _objc_release(puVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(lVar1 + 0x58);
    func_0x00010540bd48(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104d376ec;
    puStack_78 = &UNK_11084bdb0;
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    lStack_70 = lVar1;
    uStack_58 = param_1;
    _objc_retain(*(undefined8 *)(param_2 + 0x38));
    uStack_68 = uVar7;
    uStack_60 = uVar8;
    func_0x00010bf05a00(uVar6,param_3,puVar2,uVar4,&puStack_90);
    _objc_release(uVar6);
    _objc_release(uStack_60);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104d376ec; end: 104d37707;  */

void FUN_104d376ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdccbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             PTR_s__appLoginAnswerChallengeRespondW_112550c90,param_2,param_3,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104d37708; end: 104d379a3; -[SCLoginJanusService _appLoginAnswerChallengeRespondWithResponse:error:submitRequestTime:networkRequestId:completion:] */

void FUN_104d37708(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bdccbe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdccc00(param_1);
  puVar2 = PTR_PTR_1126afa48;
  _objc_alloc(PTR_PTR_1126afa48);
  func_0x00010bf3ec40(param_4);
  func_0x00010c0196c0(puVar2);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(uVar3);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  _objc_release(param_4);
  func_0x00010c13bc00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80();
  _objc_release(uVar3);
  lVar5 = param_3;
  func_0x00010bf10d20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  if (lVar6 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf10d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9a60(uVar3);
    _objc_release(lVar5);
    _objc_release(uVar3);
  }
  lVar5 = param_3;
  func_0x00010c252ee0();
  if ((int)lVar5 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126af528;
    func_0x00010bf43e00(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar3);
    _objc_release(puVar7);
    _objc_release(uVar3);
  }
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,puVar2);
  }
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d379a4; end: 104d37c5b; -[SCLoginJanusService fetchLoginOptionsWithNetworkRequestId:completion:] */

void FUN_104d379a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126af528;
  func_0x00010c251d80(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80(uVar1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126afa50;
  _objc_opt_new(PTR_PTR_1126afa50);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0f6420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c920(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  lVar4 = param_2;
  func_0x00010bdccca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c08a0(puVar2);
  _objc_release(lVar4);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7b20();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126af528;
  func_0x00010c1368c0(PTR_PTR_1126af528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80(uVar1);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_initWeak(auStack_68,param_2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010540bd48(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfa82c0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104d37c5c; end: 104d37ccb;  */

void FUN_104d37c5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be12460(*(undefined8 *)(param_1 + 0x38));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104d37ccc; end: 104d37f7f; -[SCLoginJanusService _fetchLoginOptionsWithResponse:error:submitRequestTime:networkRequestId:completion:] */

void FUN_104d37ccc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar5 = param_3;
  func_0x00010c252ee0();
  if ((int)lVar5 == 1) {
    lVar5 = param_3;
    func_0x00010bf10d20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    if (lVar1 != 0) {
      lVar5 = param_3;
      func_0x00010bf10d20(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9a60();
      _objc_release(uVar2);
      _objc_release(lVar5);
    }
  }
  if (param_3 != 0) {
    func_0x00010540cf44(param_3);
  }
  lVar5 = param_3;
  func_0x00010bfda040();
  if ((int)lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_3;
    func_0x00010c0f4e80(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126af528;
  func_0x00010bf3ec40(param_4);
  func_0x00010c13bc00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aae80();
  _objc_release(uVar2);
  lVar1 = param_3;
  func_0x00010c252ee0();
  if ((int)lVar1 == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126af528;
    func_0x00010bf43e00(PTR_PTR_1126af528);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0aae80(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  puVar4 = PTR_PTR_1126afa58;
  _objc_alloc(PTR_PTR_1126afa58);
  func_0x00010bf3ec40(param_4);
  func_0x00010c019700(puVar4);
  if (param_6 != 0) {
    (**(code **)(param_6 + 0x10))(param_6,puVar4);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d37f80; end: 104d37f83; -[SCLoginJanusService _prepareRequestForEndpoint:networkRequestId:completion:] */

void FUN_104d37f80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be79030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__prepareRequestConcurrentlytForE_11257bda8);
  return;
}



/* Entry: 104d37f84; end: 104d383f3; -[SCLoginJanusService _prepareRequestConcurrentlytForEndpoint:networkRequestId:completion:] */

void FUN_104d37f84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  uVar1 = param_5;
  _objc_retain();
  _dispatch_group_create();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae2e0();
  _objc_release(uVar2);
  _dispatch_group_enter(uVar1);
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_104d35308;
  uStack_88 = 0x104d35318;
  uStack_80 = 0;
  puStack_a0 = &uStack_a8;
  _objc_initWeak(auStack_b0,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_104d383f4;
  puStack_e8 = &UNK_110849c80;
  _objc_copyWeak(auStack_c0,auStack_b0);
  lStack_e0 = param_1;
  puStack_c8 = &uStack_a8;
  uStack_b8 = param_3;
  _objc_retain(param_4);
  uStack_d8 = param_4;
  uStack_d0 = uVar1;
  func_0x00010bfa6480(uVar2);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae2e0();
  _objc_release(uVar2);
  _dispatch_group_enter(uVar1);
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_104d35308;
  uStack_110 = 0x104d35318;
  uStack_108 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_178 = 0xc2000000;
  uStack_170 = 0x104d38498;
  puStack_168 = &UNK_110849c80;
  puStack_128 = &uStack_130;
  _objc_copyWeak(auStack_140,auStack_b0);
  lStack_160 = param_1;
  puStack_148 = &uStack_130;
  uStack_138 = param_3;
  _objc_retain(param_4);
  uStack_158 = param_4;
  uStack_150 = uVar1;
  func_0x00010bf46540(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae2e0();
  _objc_release(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf3d120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar2;
  func_0x00010c26ada0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bfdecc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010540b7e8(uVar3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf70640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b700(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae2e0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  uStack_1b8 = 0x104d38554;
  puStack_1b0 = &UNK_11084be40;
  puStack_190 = &uStack_a8;
  puStack_188 = &uStack_130;
  uStack_1a8 = uVar2;
  uStack_1a0 = uVar4;
  uStack_198 = param_5;
  _objc_retain(param_5);
  func_0x000100bc0718(uVar1,uVar3,&puStack_1c8);
  _objc_release(uVar3);
  _objc_release(uStack_198);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uStack_158);
  _objc_destroyWeak(auStack_140);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  _objc_release(uStack_d8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 104d383f4; end: 104d385bf;  */

void FUN_104d383f4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = param_2;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae2e0();
    _objc_release(uVar2);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d385c0; end: 104d38663;  */

void FUN_104d385c0(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  return;
}



/* Entry: 104d38664; end: 104d3875f; -[SCLoginJanusService _computeLogInErrorMessageFromError:isEmptyResponse:] */

void FUN_104d38664(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06f000();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bf3ec40();
    _objc_release(uVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (uVar2 == 0) goto LAB_104d386e4;
    func_0x000108b9aabc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_release(uVar1);
LAB_104d386e4:
    if (((param_4 & 1) == 0) && (uVar1 = param_3, func_0x00010bf3ec40(), uVar1 == 0)) {
      puVar3 = (undefined *)0x0;
      goto LAB_104d38738;
    }
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000108b9aad4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf3ec40();
  func_0x00010c14de00(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
LAB_104d38738:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104d38760; end: 104d3888f; -[SCLoginJanusService _computeLogInErrorFromError:isEmptyResponse:protoStatusCode:] */

void FUN_104d38760(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bde43e0(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
    goto LAB_104d38868;
  }
  uVar2 = *(ulong *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c06f000();
  if ((uVar3 & 1) == 0) {
    lVar4 = param_3;
    func_0x00010bf3ec40();
    _objc_release(uVar2);
    if (lVar4 == 0) goto LAB_104d38810;
    puVar5 = PTR_PTR_1126af540;
    func_0x00010bf48c00(PTR_PTR_1126af540,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_release(uVar2);
LAB_104d38810:
    puVar5 = PTR_PTR_1126af540;
    func_0x00010bfbed40(PTR_PTR_1126af540,param_2,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = PTR_PTR_1126af548;
  _objc_alloc(PTR_PTR_1126af548);
  lVar4 = param_3;
  func_0x00010bf3ec40(param_3);
  func_0x00010c0196e0(puVar6,param_2,lVar4,param_5,puVar5);
  _objc_release(puVar5);
LAB_104d38868:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104d38890; end: 104d38ab3; -[SCLoginJanusService _computePasswordLogInErrorFromError:isEmptyResponse:protoStatusCode:] */

void FUN_104d38890(long param_1,undefined8 param_2,undefined *param_3,int param_4,undefined8 param_5
                  )

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar5 = (undefined *)0x0;
  if ((param_4 == 0) || (param_3 == (undefined *)0x0)) goto LAB_104d38a18;
  puVar1 = param_3;
  func_0x00010bf3ec40();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar1 == (undefined *)0x2) {
    func_0x000108b9ab4c();
    _objc_retainAutoreleasedReturnValue();
LAB_104d38988:
    func_0x00010bf3ec40();
    func_0x00010c14de00(puVar5,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar4 = PTR_PTR_1126af540;
LAB_104d389c0:
    func_0x00010bfbed40(puVar4,param_2,puVar5,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (puVar1 == (undefined *)0x10) {
      func_0x000108b9ab34();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104d38988;
    }
    if (puVar1 != (undefined *)0xe) {
      func_0x000108b9ab64();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104d38988;
    }
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06f000();
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar3 != 0) {
      puVar1 = param_3;
      func_0x00010540ba80();
      puVar4 = PTR_PTR_1126af540;
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if ((int)puVar1 == 0) {
        func_0x000108b9ab04();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104d38988;
      }
      puVar5 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_104d389c0;
    }
    func_0x000108b9ab1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40();
    func_0x00010c14de00(puVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126af540;
    func_0x00010bf48c00(PTR_PTR_1126af540,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126af548;
  _objc_alloc(PTR_PTR_1126af548);
  puVar1 = param_3;
  func_0x00010bf3ec40(param_3);
  func_0x00010c0196e0(puVar5,param_2,puVar1,param_5,puVar4);
  _objc_release(puVar4);
LAB_104d38a18:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104d38ab4; end: 104d38d17; -[SCLoginJanusService _appLoginContext:createLoginIdsIfNotAvailable:networkEndpoint:] */

void FUN_104d38ab4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126afa60;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc3b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c171a40(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc74c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c08c0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c17ce20(puVar1,param_2,param_3);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfc3a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0820(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25d160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17de60(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17caa0(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010af82634();
  func_0x00010c0df7c0(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dacc0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010540bb20(param_5);
  uVar3 = uVar2;
  func_0x00010bfc3c20(uVar2,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d780(puVar1,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d38d18; end: 104d38d93; -[SCLoginJanusService _appLoginBootstrapParams:cofTags:] */

void FUN_104d38d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afa68;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17dfe0();
  _objc_release(param_4);
  func_0x00010c19b6c0(puVar1,param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d38d94; end: 104d38ea7; -[SCLoginJanusService _appLoginIdentifier:] */

void FUN_104d38d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126afa70;
  _objc_retain(param_3);
  _objc_opt_new();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104d38ea8;
  puStack_30 = &UNK_1108450c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104d38eb4;
  puStack_58 = &UNK_11084be70;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x104d38f3c;
  puStack_80 = &UNK_11084be70;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_104d38fc0;
  puStack_a8 = &UNK_11084bea0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104d39158;
  puStack_d0 = &UNK_1108450f8;
  puStack_c8 = puVar1;
  puStack_a0 = puVar1;
  puStack_78 = puVar1;
  puStack_50 = puVar1;
  puStack_28 = puVar1;
  func_0x00010c0c0d00(param_3,param_2,&puStack_48,&puStack_70,&puStack_98,&puStack_c0,&puStack_e8);
  _objc_release(param_3);
  _objc_retain(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d38ea8; end: 104d38eb3;  */

void FUN_104d38ea8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setTivNonce__112663428,param_2);
  return;
}



/* Entry: 104d38eb4; end: 104d38fbf;  */

void FUN_104d38eb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afa78;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c169740(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c1a9980(puVar1);
  _objc_release(param_2);
  func_0x00010c1cdaa0(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104d38fc0; end: 104d39157;  */

void FUN_104d38fc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126afa88;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c1d95e0(*(undefined8 *)(param_1 + 0x20));
  uVar2 = param_2;
  func_0x000100576d08(param_2,auStack_58,auStack_60);
  _objc_release(param_2);
  if ((int)uVar2 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar4);
  }
  func_0x00010c21e620(puVar1);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126afa90;
  _objc_opt_new(PTR_PTR_1126afa90);
  func_0x00010c1d9520(puVar1);
  func_0x00010c17cb20(puVar4);
  _objc_release(param_3);
  func_0x00010c2029a0(puVar4);
  _objc_release(param_4);
  func_0x00010c16c9c0(puVar4);
  _objc_release(param_5);
  puVar3 = PTR_PTR_1126afa98;
  _objc_opt_new(PTR_PTR_1126afa98);
  func_0x00010c1fb020(puVar4);
  func_0x00010c186080(puVar3);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 104d39158; end: 104d39233;  */

void FUN_104d39158(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126afaa0;
  _objc_opt_new(PTR_PTR_1126afaa0);
  func_0x00010c16a180(*(undefined8 *)(param_1 + 0x20));
  if (param_2 == 0) {
    if ((param_3 != 0) && (param_4 != 0)) {
      puVar2 = PTR_PTR_1126afaa8;
      _objc_opt_new(PTR_PTR_1126afaa8);
      func_0x00010c1db1c0();
      func_0x00010c1db1e0(puVar2);
      func_0x00010c1db140(puVar1);
      _objc_release(puVar2);
    }
  }
  else {
    func_0x00010c194080(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104d39234; end: 104d3935f; -[SCLoginJanusService _appLoginPrincipalCredential:] */

void FUN_104d39234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_104d35308;
  uStack_30 = 0x104d35318;
  uStack_28 = 0;
  func_0x00010c0c0d00(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104d39360; end: 104d39397;  */

void FUN_104d39360(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d39398; end: 104d3939f;  */

void FUN_104d39398(void)

{
  return;
}



/* Entry: 104d393a0; end: 104d3940f;  */

void FUN_104d393a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d39410; end: 104d394c3; -[SCLoginJanusService _appLoginClientAttestationPayload] */

void FUN_104d39410(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720(param_1 * 1000.0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bfbf000(uVar1,param_3,puVar3,&PTR____CFConstantStringClassReference_110db05b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104d394c4; end: 104d39523; -[SCLoginJanusService _deviceToken] */

void FUN_104d394c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afab0;
  func_0x00010c0cb140(PTR_PTR_1126afab0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf71140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d39524; end: 104d3961f; -[SCLoginJanusService _appLoginCallOptionsBuiler:] */

void FUN_104d39524(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010540bd48(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010c271a40(PTR_PTR_1126ae748,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_104d39620;
  puStack_58 = &UNK_110847310;
  lStack_50 = param_1;
  puStack_48 = puVar2;
  func_0x00010c0c0d00(param_3,param_2,&puStack_70,0,0,0,0);
  _objc_release(param_3);
  _objc_retain(puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104d39620; end: 104d39657;  */

void FUN_104d39620(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010becc620(uVar1);
  func_0x00010c1eeba0(*(undefined8 *)(param_1 + 0x28),param_2,uVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104d39658; end: 104d39683; -[SCLoginJanusService _tivNonceLoginTimeoutInMs] */

long FUN_104d39658(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110db0718,30000,0);
  return (long)(int)uVar1;
}



/* Entry: 104d39684; end: 104d39697; -[SCLoginJanusService _appLoginStatusCode:] */

undefined * FUN_104d39684(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 == 0) {
    return (undefined *)0x0;
  }
  puVar2 = PTR_PTR_1126b8bc0;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_3 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 104d39698; end: 104d39a93; -[SCLoginJanusService _appLoginResultDetail:error:] */

void FUN_104d39698(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06f000();
    _objc_release(uVar2);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar3 == 0) {
      func_0x000108b9aabc();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108b9aad4();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf3ec40();
    func_0x00010c14de00(puVar5,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    param_1 = PTR_PTR_1126afab8;
    func_0x00010bf993e0(PTR_PTR_1126afab8,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = param_3;
    func_0x00010c252ee0();
    puVar10 = PTR_PTR_1126afab8;
    iVar1 = (int)puVar5;
    puVar5 = param_3;
    if (iVar1 < 6) {
      if (iVar1 < 2) {
        if ((iVar1 == -0x4524111) || (iVar1 == 0)) goto LAB_104d397f0;
        if (iVar1 != 1) goto LAB_104d398a4;
        func_0x00010bf1faa0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2618a0(puVar10,param_2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        param_1 = puVar10;
        goto LAB_104d398a0;
      }
      if (iVar1 < 4) {
        if (iVar1 == 2) {
          func_0x00010bf34c60(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = param_3;
          func_0x00010bf10d20(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf34d40(puVar10,param_2,puVar5,puVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (iVar1 != 3) goto LAB_104d398a4;
          func_0x00010beed440(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar5;
          func_0x00010c1210e0();
          puVar4 = PTR_PTR_1126afac0;
          _objc_alloc(PTR_PTR_1126afac0);
          puVar6 = puVar5;
          func_0x00010bfe4e60(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar5;
          func_0x00010c121100(puVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c02b3e0(puVar4,param_2,puVar6,(int)puVar10 == 1,puVar7);
          _objc_release(puVar7);
          _objc_release(puVar6);
          puVar10 = PTR_PTR_1126afab8;
          func_0x00010c1210a0(PTR_PTR_1126afab8,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        if (iVar1 != 4) {
          if (iVar1 == 5) {
            param_1 = PTR_PTR_1126afab8;
            func_0x00010c124b00(PTR_PTR_1126afab8);
            _objc_retainAutoreleasedReturnValue();
          }
          goto LAB_104d398a4;
        }
        func_0x00010beed540(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar5;
        func_0x00010bfe4e60();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_3;
        func_0x00010beed540(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c06c4e0();
        puVar8 = param_3;
        func_0x00010beed540(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010bf06800();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010beed560(puVar10,param_2,puVar4,puVar7,puVar9);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar6);
      }
    }
    else {
      if (5 < iVar1 - 9U) {
        if (iVar1 == 6) {
          func_0x00010c0b4060(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b4080(puVar10,param_2,puVar5);
          _objc_retainAutoreleasedReturnValue();
          param_1 = puVar10;
          goto LAB_104d398a0;
        }
        if (iVar1 != 7) goto LAB_104d398a4;
      }
LAB_104d397f0:
      func_0x00010bf98a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010bfe4e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf993e0(puVar10,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar4);
    param_1 = puVar10;
  }
LAB_104d398a0:
  _objc_release(puVar5);
LAB_104d398a4:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104d39a94; end: 104d39aa7; -[SCLoginJanusService _appLoginAnswerChallengeStatusCode:] */

undefined * FUN_104d39a94(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 == 0) {
    return (undefined *)0x0;
  }
  puVar2 = PTR_PTR_1126b8bc8;
  func_0x00010bf6e760();
  func_0x00010bfac8c0();
  lVar3 = *(long *)(puVar2 + 8);
  uVar1 = *(uint *)(lVar3 + 0x14);
  if ((int)uVar1 < 0) {
    lVar4 = *(long *)(param_3 + 0x40);
    if (*(int *)(lVar4 + (ulong)-uVar1 * 4) != *(int *)(lVar3 + 0x10)) goto code_r0x0001001115e8;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x40);
    if ((*(uint *)(lVar4 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) == 0) {
code_r0x0001001115e8:
      func_0x000107c4163c(puVar2);
      return puVar2;
    }
  }
  return (undefined *)(ulong)*(uint *)(lVar4 + (ulong)*(uint *)(lVar3 + 0x18));
}



/* Entry: 104d39aa8; end: 104d39d2f; -[SCLoginJanusService _appLoginAnswerChallengeResultDetail:error:] */

void FUN_104d39aa8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *unaff_x22;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == (undefined *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06f000();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar3 == 0) {
      func_0x000108b9aabc();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108b9aad4();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010bf3ec40();
    func_0x00010c14de00(puVar4,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126afac8;
    func_0x00010bf993e0(PTR_PTR_1126afac8,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = param_3;
    func_0x00010c252ee0();
    puVar5 = PTR_PTR_1126afac8;
    uVar1 = (uint)puVar4;
    puVar4 = param_3;
    if (uVar1 < 0xd) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x1e05U) != 0) goto LAB_104d39b0c;
      if (uVar1 == 1) {
        func_0x00010bf1faa0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2618a0(puVar5,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_104d39bf4;
      }
      if (uVar1 != 4) goto LAB_104d39ce8;
      func_0x00010beed540(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bfe4e60();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_3;
      func_0x00010beed540(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c06c4e0();
      puVar9 = param_3;
      func_0x00010beed540(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf06800();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beed560(puVar5,param_2,puVar6,puVar8,puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar7);
    }
    else {
LAB_104d39ce8:
      if (uVar1 != 0xfbadbeef) goto LAB_104d39bfc;
LAB_104d39b0c:
      func_0x00010bf98a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar4;
      func_0x00010bfe4e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf993e0(puVar5,param_2,puVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar6);
  }
LAB_104d39bf4:
  _objc_release(puVar4);
  unaff_x22 = puVar5;
LAB_104d39bfc:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 104d39d30; end: 104d39e1f; -[SCLoginJanusService .cxx_destruct] */

void FUN_104d39d30(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d39e20; end: 104d39e83;  */

void FUN_104d39e20(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  return;
}



/* Entry: 104d39e84; end: 104d3a103; -[SCUnauthenticatedOdlvJanusService initWithUnifiedGrpcJanusLoginService:deviceIdentifierProvider:loginSessionService:authenticationSessionInfoProvider:deviceIdManager:deviceCheckManager:preLoginAttestationProvider:circumstanceEngine:identityRequestLogger:clientIdProvider:cloudAccountIdProvider:] */

undefined8 *
FUN_104d39e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126e3f38;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
  }
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



/* Entry: 104d3a104; end: 104d3a25b; -[SCUnauthenticatedOdlvJanusService sendOdlvAuthRequestWithOdlvOtpType:challenge:successBlock:failureBlock:] */

void FUN_104d3a104(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  uStack_50 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfa6480(uVar1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104d3a25c; end: 104d3a5c7;  */

void FUN_104d3a25c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126afad8;
    func_0x00010c0cb140();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_104d3a5c8;
    uStack_88 = 0x104d3a5d8;
    uStack_80 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c08bda0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0befa0();
    _objc_release(uVar3);
    func_0x00010c083b00(PTR_PTR_1126afa00);
    func_0x00010c1b5b20(puVar2);
    func_0x00010c1d0a00(puVar2);
    func_0x00010c1d0a20(puVar2);
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010bf71140();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c294660(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    uVar11 = *(undefined8 *)(lVar1 + 0x18);
    uVar13 = *(undefined8 *)(lVar1 + 0x20);
    uVar10 = *(undefined8 *)(lVar1 + 0x38);
    uVar12 = *(undefined8 *)(lVar1 + 0x40);
    uVar6 = *(undefined8 *)(lVar1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bfc3b00();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0x13;
    func_0x00010540c48c(0x13,uVar5,uVar4,param_2,uVar3,uVar11,uVar13,uVar10,uVar12,uVar7,uVar8,
                        *(undefined8 *)(lVar1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0900(puVar2);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _CACurrentMediaTime();
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7b20();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010540bd48(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar12);
    func_0x00010c15c2e0(uVar3);
    _objc_release(uVar10);
    _objc_release(uVar3);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar4);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104d3a5c8; end: 104d3a5df;  */

void FUN_104d3a5c8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104d3a5e0; end: 104d3a617;  */

void FUN_104d3a5e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104d3a618; end: 104d3a637;  */

void FUN_104d3a618(void)

{
  return;
}



/* Entry: 104d3a638; end: 104d3a687;  */

void FUN_104d3a638(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),7);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x38,param_2 + 0x38);
  return;
}



/* Entry: 104d3a688; end: 104d3a8e3; -[SCUnauthenticatedOdlvJanusService _sendODLVCodeResponseWithResponse:error:submitRequestTime:successBlock:failureBlock:] */

void FUN_104d3a688(long param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5,
                  long param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != (undefined *)0x0) {
    func_0x00010540d69c(param_3);
  }
  _CACurrentMediaTime();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(uVar2);
  _objc_release(uVar2);
  if (param_4 == 0) {
    puVar3 = param_3;
    func_0x00010c252ee0();
    uVar1 = (uint)puVar3;
    puVar4 = PTR_PTR_1126afae0;
    puVar3 = param_3;
    if (uVar1 < 0x11) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x1f405U) != 0) goto LAB_104d3a7c8;
      if (uVar1 == 1) {
        (**(code **)(param_5 + 0x10))(param_5);
        goto LAB_104d3a838;
      }
      if (uVar1 != 0xb) goto LAB_104d3a8c0;
      _objc_alloc(PTR_PTR_1126afae0);
      func_0x00010bf98a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bfe4e20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
LAB_104d3a8c0:
      if (uVar1 != 0xfbadbeef) goto LAB_104d3a838;
LAB_104d3a7c8:
      _objc_alloc(PTR_PTR_1126afae0);
      func_0x00010bf98a00(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010bfe4e20();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c010820(puVar4);
    (**(code **)(param_6 + 0x10))(param_6,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar5);
  }
  else {
    puVar3 = PTR_PTR_1126afae0;
    _objc_alloc(PTR_PTR_1126afae0);
    puVar4 = puVar3;
    FUN_104d3b258();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010820(puVar3);
    _objc_release(puVar4);
    (**(code **)(param_6 + 0x10))(param_6,puVar3);
  }
  _objc_release(puVar3);
LAB_104d3a838:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d3a8e4; end: 104d3a97f; -[SCUnauthenticatedOdlvJanusService .cxx_destruct] */

void FUN_104d3a8e4(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d3a980; end: 104d3abff; -[SCUnauthenticatedTwoFAJanusService initWithUnifiedGrpcJanusLoginService:deviceIdentifierProvider:loginSessionService:authenticationSessionInfoProvider:deviceIdManager:deviceCheckManager:preLoginAttestationProvider:circumstanceEngine:identityRequestLogger:clientIdProvider:cloudAccountIdProvider:] */

undefined8 *
FUN_104d3a980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126e3f40;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
  }
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



/* Entry: 104d3ac00; end: 104d3ad77; -[SCUnauthenticatedTwoFAJanusService resendTwoFACodeToUsernameOrEmail:preAuthToken:successBlock:failureBlock:] */

void FUN_104d3ac00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfa6480(uVar1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104d3ad78; end: 104d3afef;  */

void FUN_104d3ad78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126afae8;
    _objc_opt_new();
    func_0x00010c21ac40();
    func_0x00010c21ac20(puVar2);
    func_0x00010c083b00(PTR_PTR_1126afa00);
    func_0x00010c1b5b20(puVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010bf71140(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(lVar1 + 0x10);
    uVar11 = *(undefined8 *)(lVar1 + 0x18);
    uVar10 = *(undefined8 *)(lVar1 + 0x20);
    uVar9 = *(undefined8 *)(lVar1 + 0x38);
    uVar12 = *(undefined8 *)(lVar1 + 0x40);
    uVar4 = *(undefined8 *)(lVar1 + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfc3b00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x14;
    func_0x00010540c48c(0x14,uVar13,uVar3,param_2,uVar8,uVar11,uVar10,uVar9,uVar12,uVar5,uVar6,
                        *(undefined8 *)(lVar1 + 0x58));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0900(puVar2);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _CACurrentMediaTime();
    uVar8 = *(undefined8 *)(lVar1 + 0x48);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7b20();
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(lVar1 + 0x40);
    func_0x00010540bd48(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar12);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar11);
    func_0x00010c15d7e0(uVar8);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar11);
    _objc_release(uVar12);
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104d3aff0; end: 104d3b00b;  */

void FUN_104d3aff0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea0f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             PTR_s__sendTwoFACodeResponseWithRespon_112585d88,param_2,param_3,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 104d3b00c; end: 104d3b1bb; -[SCUnauthenticatedTwoFAJanusService _sendTwoFACodeResponseWithResponse:error:submitRequestTime:successBlock:failureBlock:] */

void FUN_104d3b00c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 0) {
    func_0x00010540db10(param_3);
  }
  _CACurrentMediaTime();
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3ec40(param_4);
  func_0x00010c0a7b40(lVar2);
  _objc_release(lVar2);
  if (param_4 == 0) {
    lVar2 = param_3;
    func_0x00010c252ee0();
    uVar1 = (uint)lVar2;
    if (uVar1 < 0x11) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x1fc05U) == 0) {
        if (uVar1 == 1) {
          (**(code **)(param_5 + 0x10))(param_5);
          goto LAB_104d3b15c;
        }
        goto LAB_104d3b1a8;
      }
    }
    else {
LAB_104d3b1a8:
      if (uVar1 != 0xfbadbeef) goto LAB_104d3b15c;
    }
    lVar2 = param_3;
    func_0x00010bf98a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfe4e20();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,lVar3);
    _objc_release(lVar3);
  }
  else {
    FUN_104d3b258();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,lVar2);
  }
  _objc_release(lVar2);
LAB_104d3b15c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104d3b1bc; end: 104d3b257; -[SCUnauthenticatedTwoFAJanusService .cxx_destruct] */

void FUN_104d3b1bc(long param_1)

{
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104d3b258; end: 104d3b26f;  */

void FUN_104d3b258(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db0798;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110db0798,
                      &PTR____CFConstantStringClassReference_110db07b8,0);
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



/* Entry: 104d3b270; end: 104d3b667; -[SCUserPhoneVerificationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3b270(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104d3b668;
  puStack_90 = &UNK_11084c040;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar3;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104d3b6a8;
  puStack_b8 = &UNK_11084c070;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afaf0;
  _objc_alloc(PTR_PTR_1126afaf0);
  lVar17 = (long)_DAT_11271192c;
  lVar5 = param_1 + lVar17;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112711938;
  _objc_loadWeakRetained(lVar7);
  lVar8 = param_1 + _DAT_11271193c;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c0fb000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0570c0(puVar4);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar10 = PTR_PTR_1126aeb48;
  _objc_alloc();
  func_0x00010c0404c0();
  puVar11 = PTR_PTR_1126afaf8;
  _objc_alloc();
  lVar5 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar9 = lVar17;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112711940;
  _objc_loadWeakRetained(lVar7);
  lVar12 = lVar7;
  func_0x00010c154a40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112711944;
  _objc_loadWeakRetained(lVar8);
  lVar13 = lVar8;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010bde72a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040680();
  lVar16 = (long)_DAT_112711948;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar11;
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar8);
  _objc_release(lVar12);
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release(lVar17);
  _objc_release(lVar6);
  _objc_release(lVar5);
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar16));
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 104d3b668; end: 104d3b727;  */

void FUN_104d3b668(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be73800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d3b728; end: 104d3b7b3; -[SCUserPhoneVerificationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3b728(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11271192c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126e3f48;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104d3b7b4; end: 104d3b873; -[SCUserPhoneVerificationEntryPoint _phoneEntryService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3b7b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126afb00;
  _objc_alloc(PTR_PTR_1126afb00);
  lVar2 = param_1 + _DAT_11271193c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0faf00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271192c;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  FUN_104d3b874();
  func_0x00010c0358e0(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d3b874; end: 104d3b957;  */

undefined8 FUN_104d3b874(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0be000(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104d3b958; end: 104d3ba17; -[SCUserPhoneVerificationEntryPoint _codeVerificationService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3b958(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126afb08;
  _objc_alloc(PTR_PTR_1126afb08);
  lVar2 = param_1 + _DAT_11271193c;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0faf00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271192c;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  FUN_104d3b874();
  func_0x00010c0358e0(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d3ba18; end: 104d3ba93; -[SCUserPhoneVerificationEntryPoint _userPhoneVerificationLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3ba18(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126afb10;
  _objc_alloc(PTR_PTR_1126afb10);
  param_1 = param_1 + _DAT_11271194c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a940(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104d3ba94; end: 104d3baef; -[SCUserPhoneVerificationEntryPoint _contactSyncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3ba94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010beb2e40();
  if ((int)lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112711950;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf4a700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104d3baf0; end: 104d3bb5f; -[SCUserPhoneVerificationEntryPoint _shouldContactSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104d3baf0(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_112711954;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 104d3bb60; end: 104d3bc33; -[SCUserPhoneVerificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104d3bb60(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112711930,0);
  _objc_destroyWeak(param_1 + _DAT_112711938);
  _objc_storeStrong(param_1 + _DAT_112711934,0);
  _objc_destroyWeak(param_1 + _DAT_112711950);
  _objc_destroyWeak(param_1 + _DAT_112711944);
  _objc_destroyWeak(param_1 + _DAT_112711940);
  _objc_destroyWeak(param_1 + _DAT_112711960);
  _objc_destroyWeak(param_1 + _DAT_11271195c);
  _objc_destroyWeak(param_1 + _DAT_112711954);
  _objc_destroyWeak(param_1 + _DAT_11271192c);
  _objc_destroyWeak(param_1 + _DAT_11271194c);
  _objc_destroyWeak(param_1 + _DAT_11271193c);
  _objc_destroyWeak(param_1 + _DAT_112711958);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112711948,0);
  return;
}



/* Entry: 104d3bc34; end: 104d3bc6f;  */

void FUN_104d3bc34(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  return;
}



/* Entry: 104d3bc70; end: 104d3bce3; -[SCUserPhoneVerificationLoggerImpl initWithUserBlizzardLogger:] */

undefined1 * FUN_104d3bc70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e3f50;
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



/* Entry: 104d3bce4; end: 104d3bd73; -[SCUserPhoneVerificationLoggerImpl logUserPhoneVerificationSuccess:hasResentCode:verifyCodeAttemptCount:] */

void FUN_104d3bce4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
                  )

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afb18;
  _objc_opt_new(PTR_PTR_1126afb18);
  func_0x00010c206c40();
  func_0x00010c1a6920(puVar1,param_2,param_4);
  func_0x00010c16b460(puVar1,param_2,(long)param_5);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


