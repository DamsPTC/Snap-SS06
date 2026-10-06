/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c4faf0; end: 106c4fc37;  */

void FUN_106c4faf0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar10 = *(long *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf611c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf30b00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c27caa0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar10 + 0x10))(lVar10,uVar3,uVar6,uVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar10);
  return;
}



/* Entry: 106c4fc38; end: 106c4fd7b;  */

void FUN_106c4fc38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106c4fd7c;
  puStack_68 = &UNK_1108a4ad0;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = uVar2;
  uStack_60 = uVar6;
  func_0x00010c2656e0(uVar2,param_2,&puStack_80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puStack_a8 = puVar4;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106c50810;
  puStack_90 = &UNK_11096b638;
  uStack_88 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d1a78;
  _objc_alloc(PTR_PTR_1126d1a78);
  func_0x00010c030ac0();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c4fd7c; end: 106c500e7;  */

void FUN_106c4fd7c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_2;
  FUN_106c500e8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf30a00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf141e0();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar6 = PTR_PTR_1126ae750;
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  iVar7 = (int)puVar4;
  if (iVar7 == 0) {
    puVar6 = PTR_PTR_1126d1a80;
    func_0x00010c0db140(PTR_PTR_1126d1a80);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010bf28e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf309e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    FUN_106c50360(puVar6,puVar1,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar6);
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (iVar7 == 2) {
    puVar6 = param_2;
    func_0x00010bf28e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010bf30a00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar6);
    puVar6 = *(undefined **)(param_1 + 0x20);
    FUN_106c505ac(puVar6,*(undefined8 *)(param_1 + 0x28),puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  else {
    if (iVar7 != 1) goto LAB_106c500b4;
    puVar3 = param_2;
    func_0x00010bf28e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010bf30a00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf40c40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_106c4f2e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ec800(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar6;
    FUN_106c502bc(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010bf28e60(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf309e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    FUN_106c50360(puVar3,puVar1,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    puVar3 = puVar6;
  }
  _objc_release(puVar3);
LAB_106c500b4:
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c500e8; end: 106c502bb;  */

void FUN_106c500e8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bfd50a0();
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = param_1;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfd5200();
    _objc_release(puVar1);
    if (((ulong)puVar2 & 1) != 0) {
      puVar1 = param_1;
      func_0x00010bf28e60();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf30ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf141e0();
      _objc_release(puVar2);
      _objc_release(puVar1);
      iVar5 = (int)puVar3;
      if (iVar5 != 0) {
        if (iVar5 == 2) {
          puVar1 = param_1;
          func_0x00010bf28e60(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010bf30ca0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c099480();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          FUN_106c4f48c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar1);
          puVar1 = PTR_PTR_1126d1a98;
          func_0x00010bfcdaa0(PTR_PTR_1126d1a98,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (iVar5 != 1) goto LAB_106c50218;
          puVar1 = param_1;
          func_0x00010bf28e60(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010bf30ca0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bf40c40();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          FUN_106c4f2e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar1);
          puVar1 = PTR_PTR_1126d1a98;
          func_0x00010bf41540(PTR_PTR_1126d1a98,param_2,puVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar4);
        goto LAB_106c50218;
      }
    }
  }
  puVar1 = PTR_PTR_1126d1a98;
  func_0x00010c0db140(PTR_PTR_1126d1a98);
  _objc_retainAutoreleasedReturnValue();
LAB_106c50218:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c502bc; end: 106c5035f;  */

void FUN_106c502bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126d1a80;
  if (lVar1 == 0) {
    func_0x00010c0db140(PTR_PTR_1126d1a80);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_1;
    func_0x00010c0ec5e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf41540(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c50360; end: 106c505ab;  */

void FUN_106c50360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  double dStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x3032000000;
  pcStack_70 = FUN_106c52408;
  uStack_68 = 0x106c52418;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf141e0();
  uVar3 = 0;
  if ((int)uVar1 == 1) {
    uVar1 = param_3;
    func_0x00010bf40c40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_106c4f2e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  uStack_60 = uVar3;
  if ((puStack_80[5] == 0) && (func_0x00010c0befc0(param_2), puStack_80[5] != 0)) {
    dStack_58 = 0.0;
    func_0x00010bfc9760();
    if (dStack_58 == 0.0) {
      func_0x00010c0bf000(param_1);
    }
  }
  puVar2 = PTR_PTR_1126d1ab8;
  _objc_alloc(PTR_PTR_1126d1ab8);
  func_0x00010bffc760();
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c505ac; end: 106c50693;  */

void FUN_106c505ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c50694; end: 106c5080f;  */

void FUN_106c50694(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106c52408;
  uStack_50 = 0x106c52418;
  uStack_48 = 0;
  func_0x00010c0c0800(param_2);
  puVar5 = (undefined *)puStack_68[5];
  if (puVar5 == (undefined *)0x0) {
    puVar5 = PTR_PTR_1126d1a80;
    func_0x00010c0db140(PTR_PTR_1126d1a80);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar5);
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf28e60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf309e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  FUN_106c50360(puVar5,uVar1,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c50810; end: 106c50a4b;  */

void FUN_106c50810(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_retain(puVar3);
  puVar2 = puVar3;
  func_0x00010bfd50a0();
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = puVar3;
    func_0x00010bf28e60();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bfd51c0();
    _objc_release(puVar2);
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = puVar3;
      func_0x00010bf28e60();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bf30a00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010bf141e0();
      _objc_release(puVar2);
      _objc_release(puVar1);
      puVar2 = PTR_PTR_1126ae750;
      iVar7 = (int)puVar4;
      if ((iVar7 != 0) && (iVar7 != 2)) {
        if (iVar7 == 1) {
          puVar1 = puVar3;
          func_0x00010bf28e60(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar1;
          func_0x00010bf30a00();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bf40c40();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          FUN_106c4f2e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0ec800(puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar1);
          puVar1 = puVar2;
        }
        goto LAB_106c50994;
      }
    }
  }
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
LAB_106c50994:
  _objc_release(puVar3);
  puVar2 = puVar1;
  FUN_106c502bc(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar3;
  FUN_106c500e8(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf28e60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf309e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  FUN_106c50360(puVar2,puVar1,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106c50a4c; end: 106c50c2b;  */

void FUN_106c50a4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106c50c2c;
  puStack_80 = &UNK_11096b738;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar5);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uStack_78 = uVar5;
  _objc_retain(*(undefined8 *)(param_1 + 0x40));
  uVar5 = uVar2;
  uStack_70 = uVar6;
  uStack_68 = uVar7;
  func_0x00010c2656e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_a0,auStack_58);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d1a78;
  _objc_alloc(PTR_PTR_1126d1a78);
  func_0x00010c030ac0();
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uVar5);
  _objc_release(uStack_68);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c50c2c; end: 106c50e3f;  */

void FUN_106c50c2c(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_2 != (undefined **)0x0) {
    ppuVar1 = param_2;
  }
  _objc_retain(ppuVar1);
  lVar4 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar4);
  func_0x00010be80120();
  _objc_release(lVar4);
  ppuVar2 = *(undefined ***)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(ppuVar1);
  _objc_retain(ppuVar2);
  _objc_retain(uVar3);
  ppuVar5 = ppuVar1;
  func_0x000100c1cfbc();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  ppuVar6 = ppuVar5;
  func_0x00010bf14140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
  ppuVar6 = (undefined **)PTR_PTR_1126ae6b8;
  if (puVar7 == (undefined *)0x0) {
    puVar8 = PTR_PTR_1126d1a88;
    _objc_alloc(PTR_PTR_1126d1a88);
    ppuVar9 = ppuVar1;
    func_0x000106c50f18(ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff64e0(puVar8);
    func_0x00010c0860a0(ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  else {
    ppuVar9 = ppuVar2;
    FUN_106c505ac(ppuVar2,uVar3,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(ppuVar1);
    ppuVar6 = ppuVar9;
    func_0x00010c0b8600(ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  _objc_release(ppuVar9);
  _objc_release(puVar7);
  _objc_release(ppuVar5);
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 106c50e40; end: 106c50fcb;  */

void FUN_106c50e40(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  ppuVar2 = *(undefined ***)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar1 = ppuVar3;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(ppuVar2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be80120();
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126d1a88;
  _objc_alloc(PTR_PTR_1126d1a88);
  ppuVar3 = ppuVar1;
  func_0x000106c50f18(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff64e0(puVar4,param_2,ppuVar3,ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(ppuVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c50fcc; end: 106c5102b; -[SCPlusCustomAppThemeProviderImpl _prewarmAppAppearanceForThemeId:] */

void FUN_106c50fcc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000100c1cfbc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bdcecc0(param_1,param_2,param_3,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106c5102c; end: 106c51033; -[SCPlusCustomAppThemeProviderImpl camera] */

void FUN_106c5102c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_target_112678178);
  return;
}



/* Entry: 106c51034; end: 106c5103b; -[SCPlusCustomAppThemeProviderImpl background] */

void FUN_106c51034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_target_112678178);
  return;
}



/* Entry: 106c5103c; end: 106c51143; -[SCPlusCustomAppThemeProviderImpl setTheme:] */

void FUN_106c5103c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000100c1cfbc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010bdcecc0(param_1,param_2,param_3,0);
    puVar2 = PTR_PTR_1126d1a68;
    _objc_opt_new();
    puVar3 = PTR_PTR_1126d1a90;
    _objc_opt_new(PTR_PTR_1126d1a90);
    func_0x00010c1cafa0();
    func_0x00010c1a3d20(puVar2,param_2,puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106c51144;
    puStack_58 = &UNK_110841f80;
    lStack_50 = param_1;
    puStack_48 = puVar2;
    _objc_retain(puVar2);
    func_0x00010c0f7fc0(uVar4,param_2,&puStack_70);
    _objc_release(puStack_48);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106c51144; end: 106c511ab;  */

void FUN_106c51144(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c511ac; end: 106c512b7; -[SCPlusCustomAppThemeProviderImpl resetTheme] */

void FUN_106c511ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c1020a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000100529264();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x00010bfcd180(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcecc0(param_1,param_2,uVar1,0);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106c512b8;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(uVar2);
  func_0x00010c0f7fc0(uVar3,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uVar2);
  return;
}



/* Entry: 106c512b8; end: 106c5131f;  */

void FUN_106c512b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c51320; end: 106c51527; -[SCPlusCustomAppThemeProviderImpl initializeTheme:] */

void FUN_106c51320(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((param_3 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c27caa0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c252440();
    _objc_release(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar1);
    if (lVar4 == 0) {
      return;
    }
    lVar3 = param_1;
    func_0x00010c2660e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcecc0(param_1);
    goto LAB_106c51510;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1020a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar3;
  func_0x000100529264();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfcd180();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  FUN_106c4f910();
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = lVar2;
  func_0x00010bfcd180();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  if ((int)lVar5 == 0) {
    lVar5 = lVar1;
    func_0x00010c08fa60();
    if (lVar5 == 0) {
      _objc_release(lVar1);
      _objc_release(lVar4);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x30);
      FUN_106c4f744();
      _objc_release(lVar1);
      _objc_release(lVar4);
      if (lVar5 == 0) {
        lVar4 = lRam00000001138466f0;
        func_0x00010057bc30(lRam00000001138466f0);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar4;
        func_0x00010c26d060();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106c51460;
      }
    }
    func_0x00010be8da20(param_1);
  }
  else {
LAB_106c51460:
    func_0x00010bdcecc0(param_1);
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
LAB_106c51510:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 106c51528; end: 106c516df; -[SCPlusCustomAppThemeProviderImpl _removeThemeIfCustom] */

void FUN_106c51528(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1020a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x000100529264();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfcd180();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (lVar5 == 0) {
    func_0x00010bed5940(param_1,param_2,&PTR____CFConstantStringClassReference_110daafd8);
  }
  else {
    puVar6 = PTR_PTR_1126d1a68;
    _objc_opt_new(PTR_PTR_1126d1a68);
    lVar3 = lRam00000001138466f0;
    func_0x00010057bc30();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c26d060();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08fa60();
    _objc_release(lVar4);
    if (lVar5 != 0) {
      puVar7 = PTR_PTR_1126d1a90;
      _objc_opt_new(PTR_PTR_1126d1a90);
      func_0x00010c1a3d20(puVar6,param_2,puVar7);
      _objc_release(puVar7);
      lVar4 = lVar3;
      func_0x00010c26d060(lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bfcd180(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1cafa0();
      _objc_release(puVar7);
      _objc_release(lVar4);
    }
    puVar7 = puVar6;
    func_0x00010bf63640(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c189480(param_1,param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(lVar3);
    _objc_release(puVar6);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106c516e0; end: 106c51773; -[SCPlusCustomAppThemeProviderImpl data] */

void FUN_106c516e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c1020a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 106c51774; end: 106c5198f; -[SCPlusCustomAppThemeProviderImpl setData:] */

void FUN_106c51774(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    ppuVar1 = param_3;
    func_0x00010bf15d80();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1de200();
  _objc_release(uVar2);
  ppuVar3 = ppuVar1;
  func_0x000100529264();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf611c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440();
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  ppuVar6 = ppuVar3;
  func_0x00010bfcd180();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  FUN_106c4f910();
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38));
  ppuVar6 = ppuVar3;
  func_0x00010bfcd180(ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcecc0(param_1);
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  _objc_release(ppuVar3);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106c51990; end: 106c51a5b;  */

void FUN_106c51990(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c51a5c; end: 106c51b83; -[SCPlusCustomAppThemeProviderImpl _updateComposerTheme:] */

void FUN_106c51a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c295440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106c51b84;
  puStack_58 = &UNK_11096b7e8;
  uStack_50 = param_3;
  puStack_48 = puVar2;
  _objc_retain(puVar2);
  _objc_retain(param_3);
  func_0x00010bfc69a0(uVar5,param_2,&puStack_70);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puStack_48);
  _objc_release(uStack_50);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106c51b84; end: 106c51be3;  */

void FUN_106c51b84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba028;
  func_0x00010bfbc0e0(PTR_PTR_1126ba028,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c292b20(*(undefined8 *)(param_1 + 0x28));
  func_0x00010c213b00(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c51be4; end: 106c51c4b; -[SCPlusCustomAppThemeProviderImpl legacyCaptureColor] */

void FUN_106c51be4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf064c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106c51c4c; end: 106c51ee7; -[SCPlusCustomAppThemeProviderImpl setLegacyCaptureColor:] */

void FUN_106c51c4c(long param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf30b00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c252440();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar5 != 3) goto LAB_106c51dc4;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  _objc_retain(ppuVar1);
  ppuVar6 = *(undefined ***)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010bf064c0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar7 == ppuVar1) {
    _objc_release(ppuVar7);
LAB_106c51db8:
    _objc_release(ppuVar6);
  }
  else {
    ppuVar8 = ppuVar7;
    func_0x00010c071ae0(ppuVar7,param_2,ppuVar1);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    if (((ulong)ppuVar8 & 1) == 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c169360();
      _objc_release(uVar9);
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      uStack_60 = 0x106c51de4;
      puStack_58 = &UNK_110841f80;
      _objc_retain(param_3);
      ppuStack_50 = param_3;
      lStack_48 = param_1;
      func_0x00010c0f7fc0(uVar9,param_2,&puStack_70);
      ppuVar6 = ppuStack_50;
      goto LAB_106c51db8;
    }
  }
  _objc_release(ppuVar1);
LAB_106c51dc4:
  _objc_release(param_3);
  return;
}



/* Entry: 106c51ee8; end: 106c51f8f; -[SCPlusCustomAppThemeProviderImpl .cxx_destruct] */

void FUN_106c51ee8(long param_1)

{
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



/* Entry: 106c51f90; end: 106c52167;  */

void FUN_106c51f90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  lVar6 = *(long *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_retain(lVar6);
  ppuVar3 = (undefined **)PTR_PTR_1126ae560;
  ppuVar4 = (undefined **)PTR_PTR_1126ae558;
  if (lVar6 == 0) {
    _objc_retain(uVar2);
    ppuVar3 = &PTR____CFConstantStringClassReference_110e7b9b8;
    FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7b9b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9c80(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar2);
    _objc_opt_new();
    _objc_retain(lVar6);
    _objc_retain(uVar1);
    func_0x00010c0f7fc0(uVar2);
    ppuVar4 = ppuVar3;
    func_0x00010bfbc3e0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(lVar6);
  }
  _objc_release(ppuVar3);
  _objc_release(lVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_retain(param_2);
  func_0x00010c297260(ppuVar4);
  _objc_release(ppuVar4);
  puVar5 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c52168; end: 106c521cb;  */

void FUN_106c52168(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af5d0;
  if (param_3 == 0) {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c521cc; end: 106c523ab;  */

void FUN_106c521cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong in_stack_ffffffffffffff78;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beec820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e7b9d8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e7b9d8,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  puVar4 = PTR_PTR_1126b1058;
  _objc_alloc();
  func_0x00010c01b360();
  puVar5 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010beec820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a200(puVar5,param_2,uVar1,0,0,0,0,0,ppuVar2,
                      in_stack_ffffffffffffff78 & 0xffffffffffffff00,puVar4);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1267e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  return;
}



/* Entry: 106c523ac; end: 106c52407;  */

void FUN_106c523ac(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
    return;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e7ba18;
  FUN_106c7723c(&PTR____CFConstantStringClassReference_110e7ba18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106c52408; end: 106c5241f;  */

void FUN_106c52408(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106c52420; end: 106c52517;  */

void FUN_106c52420(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    puVar1 = PTR_PTR_1126d1a80;
    func_0x00010bfe9580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106c52518; end: 106c5252b;  */

void FUN_106c52518(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c5252c; end: 106c525ab;  */

void FUN_106c5252c(long param_1,undefined8 param_2)

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



/* Entry: 106c525ac; end: 106c52a83;  */

void FUN_106c525ac(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  puVar2 = param_1;
  func_0x00010bf141e0();
  iVar1 = (int)puVar2;
  puVar2 = param_1;
  if (iVar1 == 5) {
    func_0x00010c12a1a0();
    _objc_retainAutoreleasedReturnValue();
LAB_106c52668:
    func_0x00010c070160();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 == 4) {
      func_0x00010c099480();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106c52668;
    }
    if (iVar1 != 1) {
      puVar5 = (undefined *)0x0;
      goto LAB_106c526b4;
    }
    func_0x00010bf13d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_106c5323c();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_106c52a84();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
LAB_106c526b4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c52a84; end: 106c52b97;  */

void FUN_106c52a84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    uStack_38 = 0x106c52b24;
    puStack_30 = &UNK_11096b818;
    _objc_retain(param_1);
    lStack_28 = param_1;
    func_0x00010bf41560(puVar1,param_2,&puStack_48);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_28);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c52b98; end: 106c52e9f;  */

void FUN_106c52b98(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar8);
  _objc_retain(param_2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_106c52408;
  uStack_70 = 0x106c52418;
  uStack_68 = 0;
  func_0x00010c0c0800(param_2);
  if (puStack_88[5] == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126d1ac8;
    func_0x00010bfe94a0(PTR_PTR_1126d1ac8);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = lVar8;
  func_0x00010c0d6280(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_106c525ac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = lVar8;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000106c526d4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  if (lVar4 != 0) {
    lVar1 = lVar4;
  }
  _objc_retain(lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  lVar3 = lVar8;
  func_0x00010c0d6280();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000106c52844();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126d1ad0;
  lVar3 = lVar8;
  func_0x00010c0d6280(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0dbc80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dbca0();
  func_0x00010bfc8160(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar3);
  lVar3 = lVar8;
  if (lVar4 == 0) {
    func_0x00010c0d6280(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x000106c529b4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0d6280(lVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x000106c529b4();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126d1ac0;
  _objc_alloc(PTR_PTR_1126d1ac0);
  func_0x00010bff63a0();
  _objc_release(lVar5);
  _objc_release(puVar6);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(puVar9);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
  _objc_release(lVar8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106c52ea0; end: 106c52ee7;  */

void FUN_106c52ea0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106c52ee8; end: 106c53043;  */

void FUN_106c52ee8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar3 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  _objc_retain(lVar3);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_106c52408;
  uStack_50 = 0x106c52418;
  uStack_48 = 0;
  func_0x00010c0c0800(param_2);
  puVar1 = PTR_PTR_1126d1a88;
  _objc_alloc(PTR_PTR_1126d1a88);
  lVar4 = puStack_68[5];
  lVar2 = lVar4;
  if (lVar4 == 0) {
    lVar2 = lVar3;
    func_0x000106c50f18(lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bff64e0(puVar1);
  if (lVar4 == 0) {
    _objc_release(lVar2);
  }
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(lVar3);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c53044; end: 106c530b7;  */

void FUN_106c53044(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106c530b8; end: 106c530f3; -[SCPlusThemeValueProvider _onComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c530b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275b6f4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf436e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c530f4; end: 106c53143; -[SCPlusThemeValueProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c530f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275b6f0,0);
  _objc_storeStrong(param_1 + _DAT_11275b6f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275b6ec,0);
  return;
}



/* Entry: 106c53144; end: 106c5323b; +[SCPlusThemeNotificationBadges getNotificationBadge:] */

void FUN_106c53144(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  switch(param_3) {
  case 1:
    func_0x000106c57038();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 2:
    func_0x000106c57320();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 3:
    func_0x000106c56ec4();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 4:
    func_0x000106c56fbc();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 5:
    func_0x000106c56f40();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 6:
    func_0x000106c570b4();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 7:
    func_0x000106c57130();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 8:
    func_0x000106c571ac();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 9:
    func_0x000106c57228();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 10:
    func_0x000106c572a4();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xb:
    func_0x000106c5739c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xc:
    FUN_106c56e48();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106c5323c; end: 106c5330b;  */

void FUN_106c5323c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  
  _objc_retain();
  pcVar1 = pcRam00000001136c6e78;
  if (lRam00000001136c6e80 != -1) {
    func_0x00010002a2fc(0x1136c6e80,&PTR___NSConcreteGlobalBlock_11096b8d8);
    pcVar1 = pcRam00000001136c6e78;
  }
  pcRam00000001136c6e78 = pcVar1;
  if (param_1 != 0) {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (pcVar1 != (code *)0x0) {
      pcVar1 = pcRam00000001136c6e78;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      func_0x00010c102ea0();
      _objc_release(pcVar1);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_2);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_106c532f0;
      }
    }
  }
  param_2 = 0;
LAB_106c532f0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106c5330c; end: 106c5407b;  */

void FUN_106c5330c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
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
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined *puVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined *puVar62;
  undefined *puVar63;
  undefined *puVar64;
  undefined *puVar65;
  long lVar66;
  
  lVar66 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,FUN_106c5407c);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar38 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar40 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar41 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar42 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar43 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar44 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar45 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar46 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar47 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar49 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar51 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar52 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar53 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar54 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar55 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar56 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar57 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar58 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar59 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar60 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar61 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar62 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar63 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar64 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2972e0();
  _objc_retainAutoreleasedReturnValue();
  puVar65 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c6e78;
  puRam00000001136c6e78 = puVar65;
  _objc_release(uVar1);
  _objc_release(puVar64);
  _objc_release(puVar63);
  _objc_release(puVar62);
  _objc_release(puVar61);
  _objc_release(puVar60);
  _objc_release(puVar59);
  _objc_release(puVar58);
  _objc_release(puVar57);
  _objc_release(puVar56);
  _objc_release(puVar55);
  _objc_release(puVar54);
  _objc_release(puVar53);
  _objc_release(puVar52);
  _objc_release(puVar51);
  _objc_release(puVar50);
  _objc_release(puVar49);
  _objc_release(puVar48);
  _objc_release(puVar47);
  _objc_release(puVar46);
  _objc_release(puVar45);
  _objc_release(puVar44);
  _objc_release(puVar43);
  _objc_release(puVar42);
  _objc_release(puVar41);
  _objc_release(puVar40);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
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
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar66) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0,0,0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010b885b70(puVar3,puVar4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c5407c; end: 106c54cf3;  */

void FUN_106c5407c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0,0,0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010b885b70(puVar1,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c54cf4; end: 106c54db3;  */

void FUN_106c54cf4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3fb4141420000000,0x3fe3333340000000,0x3fd89898a0000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3fb8181820000000,0x3fe3333340000000,0x3fd8d8d8e0000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010b885b70(puVar1,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c54db4; end: 106c559d7;  */

void FUN_106c54db4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0,0x3fd1d1d1e0000000,0x3fc5151520000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3fe6363640000000,0x3fed7d7d80000000,0x3fea7a7a80000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010b885b70(puVar1,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c559d8; end: 106c55cb7;  */

void FUN_106c559d8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3fc99999a0000000,0x3fe7777780000000,0x3ff0000000000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3fc99999a0000000,0x3fe7777780000000,0x3ff0000000000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010b885b70(puVar1,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c55cb8; end: 106c55f0f;  */

void FUN_106c55cb8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3fb7171720000000,0x3fdc1c1c20000000,0x3fe0505060000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3fb7171720000000,0x3fdc1c1c20000000,0x3fe0505060000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010b885b70(puVar1,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c55f10; end: 106c56137;  */

void FUN_106c55f10(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3ff0000000000000,0x3feb3b3b40000000,0x3fba1a1a20000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3ff0000000000000,0x3feb3b3b40000000,0x3fba1a1a20000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010b885b70(puVar1,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c56138; end: 106c56b5f;  */

void FUN_106c56138(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3fe39393a0000000,0x3fb7171720000000,0x3fbc1c1c20000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3fe39393a0000000,0x3fb7171720000000,0x3fbc1c1c20000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010b885b70(puVar1,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c56b60; end: 106c56c17;  */

void FUN_106c56b60(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3fd79797a0000000,0x3fd79797a0000000,0x3fef1f1f20000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3fd79797a0000000,0x3fd79797a0000000,0x3fef1f1f20000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010b885b70(puVar1,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c56c18; end: 106c56cdf;  */

void FUN_106c56c18(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3feebebec0000000,0x3fdbdbdbe0000000,0x3fd3535360000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0x3feebebec0000000,0x3fdbdbdbe0000000,0x3fd3535360000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010b885b70(puVar1,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c56ce0; end: 106c56e47;  */

void FUN_106c56ce0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0,0x3fec1c1c20000000,0x3ff0000000000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(0,0x3fec1c1c20000000,0x3ff0000000000000,0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010b885b70(puVar1,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c56e48; end: 106c57417;  */

void FUN_106c56e48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR_PTR_1126d1ad8;
  _objc_opt_class(PTR_PTR_1126d1ad8);
  func_0x00010bf249e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8240(puVar3,param_2,&PTR____CFConstantStringClassReference_110e7c258,puVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106c57418; end: 106c574fb; +[SCSubscriptionPbPlusFreeThemeTimeWindowConfig descriptor] */

void FUN_106c57418(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6e88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25970,
                        &PTR____CFConstantStringClassReference_110e7c3d8,&PTR_DAT_1131793c8,
                        &PTR_DAT_1131793e0,3,0x20,0x1c);
    puRam00000001136c6e88 = puVar1;
  }
  return;
}



/* Entry: 106c574fc; end: 106c57507;  */

bool FUN_106c574fc(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 106c57508; end: 106c5756f; +[SCPlusCustomAppThemeCamera descriptor] */

void FUN_106c57508(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ea8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25ab0,
                        &PTR____CFConstantStringClassReference_110dcf0d8,&PTR_DAT_113179470,
                        &PTR_DAT_113179748,3,0x20,0x1c);
    puRam00000001136c6ea8 = puVar1;
  }
  return;
}



/* Entry: 106c57570; end: 106c5760b; +[SCPlusCustomAppThemeCamera_CaptureButton descriptor] */

undefined * FUN_106c57570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6eb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25b00,
                        &PTR____CFConstantStringClassReference_110e7c458,&PTR_DAT_113179470,
                        &PTR_DAT_113179588,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b25ab0);
    puRam00000001136c6eb0 = puVar1;
  }
  return puRam00000001136c6eb0;
}



/* Entry: 106c5760c; end: 106c576a7; +[SCPlusCustomAppThemeCamera_RecordingFrame descriptor] */

undefined * FUN_106c5760c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6eb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25b50,
                        &PTR____CFConstantStringClassReference_110e7c478,&PTR_DAT_113179470,
                        &PTR_DAT_1131795c8,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b25ab0);
    puRam00000001136c6eb8 = puVar1;
  }
  return puRam00000001136c6eb8;
}



/* Entry: 106c576a8; end: 106c57743; +[SCPlusCustomAppThemeCamera_BlinkingGhost descriptor] */

undefined * FUN_106c576a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ec0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25ba0,
                        &PTR____CFConstantStringClassReference_110e7c498,&PTR_DAT_113179470,
                        &PTR_DAT_1131794a8,1,0x10,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b25ab0);
    puRam00000001136c6ec0 = puVar1;
  }
  return puRam00000001136c6ec0;
}



/* Entry: 106c57744; end: 106c577c7; +[SCPlusCustomAppThemeNavigationBar_LinearGradientWrapper descriptor] */

undefined * FUN_106c57744(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ed0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25ee8,
                        &PTR____CFConstantStringClassReference_110e7c4d8,&PTR_DAT_113179470,
                        &PTR_s_linearGradient_113179608,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c6ed0 = puVar1;
  }
  return puRam00000001136c6ed0;
}



/* Entry: 106c577c8; end: 106c5784b; +[SCPlusCustomAppThemeNavigationBar_RemoteImageWrapper descriptor] */

undefined * FUN_106c577c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ed8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25f10,
                        &PTR____CFConstantStringClassReference_110e7c4f8,&PTR_DAT_113179470,
                        &PTR_DAT_113179648,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c6ed8 = puVar1;
  }
  return puRam00000001136c6ed8;
}



/* Entry: 106c5784c; end: 106c578d7; +[SCPlusCustomAppThemeNotificationBadge descriptor] */

undefined * FUN_106c5784c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ee0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25c68,
                        &PTR____CFConstantStringClassReference_110e7c518,&PTR_DAT_113179470,
                        &PTR_DAT_1131794c8,1,0xc,0x1c);
    func_0x00010c229040();
    puRam00000001136c6ee0 = puVar1;
  }
  return puRam00000001136c6ee0;
}



/* Entry: 106c578d8; end: 106c5793f; +[SCPlusCustomAppThemeChatIcons descriptor] */

void FUN_106c578d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ee8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25f38,
                        &PTR____CFConstantStringClassReference_110e7c538,&PTR_DAT_113179470,
                        &PTR_DAT_1131797a8,3,0x20,0x1c);
    puRam00000001136c6ee8 = puVar1;
  }
  return;
}



/* Entry: 106c57940; end: 106c579db; +[SCPlusCustomAppThemeChatIcons_Icon descriptor] */

undefined * FUN_106c57940(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ef0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25f60,
                        &PTR____CFConstantStringClassReference_110dac678,&PTR_DAT_113179470,
                        &PTR_DAT_1131794e8,1,0x10,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b25f38);
    puRam00000001136c6ef0 = puVar1;
  }
  return puRam00000001136c6ef0;
}



/* Entry: 106c579dc; end: 106c57a57; +[SCPlusCustomAppThemeRemoteImage descriptor] */

undefined * FUN_106c579dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6ef8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25d08,
                        &PTR____CFConstantStringClassReference_110e7c558,&PTR_DAT_113179470,
                        &PTR_s_URL_113179508,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c6ef8 = puVar1;
  }
  return puRam00000001136c6ef8;
}



/* Entry: 106c57a58; end: 106c57abf; +[SCPlusCustomAppThemeColor descriptor] */

void FUN_106c57a58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6f00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25d58,
                        &PTR____CFConstantStringClassReference_110e7c578,&PTR_DAT_113179470,
                        &PTR_DAT_113179808,4,0x14,0x1c);
    puRam00000001136c6f00 = puVar1;
  }
  return;
}



/* Entry: 106c57ac0; end: 106c57b27; +[SCPlusCustomAppThemeSIGColor descriptor] */

void FUN_106c57ac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6f08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25da8,
                        &PTR____CFConstantStringClassReference_110e7c598,&PTR_DAT_113179470,
                        &PTR_DAT_113179528,1,0x10,0x1c);
    puRam00000001136c6f08 = puVar1;
  }
  return;
}



/* Entry: 106c57b28; end: 106c57b8f; +[SCPlusCustomAppThemeLinearGradient descriptor] */

void FUN_106c57b28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6f10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25f88,
                        &PTR____CFConstantStringClassReference_110e7c5b8,&PTR_DAT_113179470,
                        &PTR_DAT_113179688,2,0x18,0x1c);
    puRam00000001136c6f10 = puVar1;
  }
  return;
}



/* Entry: 106c57b90; end: 106c57c13; +[SCPlusCustomAppThemeLinearGradient_ColorStop descriptor] */

undefined * FUN_106c57b90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6f18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25fb0,
                        &PTR____CFConstantStringClassReference_110e7c5d8,&PTR_DAT_113179470,
                        &PTR_DAT_1131796c8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c6f18 = puVar1;
  }
  return puRam00000001136c6f18;
}



/* Entry: 106c57c14; end: 106c57c7b; +[SCPlusCustomAppThemeCaptureButtonPickerConfig descriptor] */

void FUN_106c57c14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6f20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25e48,
                        &PTR____CFConstantStringClassReference_110e7c5f8,&PTR_DAT_113179470,
                        &PTR_s_optionsArray_113179548,1,0x10,0x1c);
    puRam00000001136c6f20 = puVar1;
  }
  return;
}



/* Entry: 106c57c7c; end: 106c57ce3; +[SCPlusCustomAppThemeRecordingFramePickerConfig descriptor] */

void FUN_106c57c7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6f28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b25fd8,
                        &PTR____CFConstantStringClassReference_110e7c618,&PTR_DAT_113179470,
                        &PTR_s_optionsArray_113179568,1,0x10,0x1c);
    puRam00000001136c6f28 = puVar1;
  }
  return;
}



/* Entry: 106c57ce4; end: 106c57d67; +[SCPlusCustomAppThemeRecordingFramePickerConfig_FrameConfig descriptor] */

undefined * FUN_106c57ce4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6f30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b26000,
                        &PTR____CFConstantStringClassReference_110e7c638,&PTR_DAT_113179470,
                        &PTR_DAT_113179708,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c6f30 = puVar1;
  }
  return puRam00000001136c6f30;
}



/* Entry: 106c57d68; end: 106c57dcf; +[PostCaptureAIModeConfig descriptor] */

void FUN_106c57d68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6f38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b260a0,
                        &PTR____CFConstantStringClassReference_110e7c658,&PTR_DAT_113179a08,
                        &PTR_DAT_113179a20,0xb,0x18,0x1c);
    puRam00000001136c6f38 = puVar1;
  }
  return;
}



/* Entry: 106c57dd0; end: 106c57e37; +[SCSubscriptionPbPlusStorefrontCountryConfig descriptor] */

void FUN_106c57dd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6f40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b26140,
                        &PTR____CFConstantStringClassReference_110e7c678,&PTR_DAT_113179b80,
                        &PTR_DAT_113179b98,2,0x18,0x1c);
    puRam00000001136c6f40 = puVar1;
  }
  return;
}



/* Entry: 106c57e38; end: 106c57e9f; +[SCPlusUpsellPbUpsellConfig descriptor] */

void FUN_106c57e38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6f48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b261e0,
                        &PTR____CFConstantStringClassReference_110e7c698,&PTR_DAT_113179bd8,
                        &PTR_DAT_113179bf0,2,0x18,0x1c);
    puRam00000001136c6f48 = puVar1;
  }
  return;
}



/* Entry: 106c57ea0; end: 106c57f07; +[SCPlusUpsellPbImpressionConfig descriptor] */

void FUN_106c57ea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6f50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b26230,
                        &PTR____CFConstantStringClassReference_110e7c6b8,&PTR_DAT_113179bd8,
                        &PTR_DAT_113179cb0,10,0x38,0x1c);
    puRam00000001136c6f50 = puVar1;
  }
  return;
}



/* Entry: 106c57f08; end: 106c57feb; +[SCPlusUpsellPbBump descriptor] */

void FUN_106c57f08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6f58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b26280,
                        &PTR____CFConstantStringClassReference_110e7c6d8,&PTR_DAT_113179bd8,
                        &PTR_DAT_113179c30,4,0x20,0x1c);
    puRam00000001136c6f58 = puVar1;
  }
  return;
}



/* Entry: 106c57fec; end: 106c57ff7;  */

bool FUN_106c57fec(uint param_1)

{
  return param_1 < 0x37;
}



/* Entry: 106c57ff8; end: 106c5805f; +[SCUpsellStatePbBumpState descriptor] */

void FUN_106c57ff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6f68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b26320,
                        &PTR____CFConstantStringClassReference_110e7c718,&PTR_DAT_113179df0,
                        &PTR_DAT_113179e08,3,0x18,0x1c);
    puRam00000001136c6f68 = puVar1;
  }
  return;
}



/* Entry: 106c58060; end: 106c580c7; +[SCUpsellStatePbUpsellState descriptor] */

void FUN_106c58060(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c6f70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b26370,
                        &PTR____CFConstantStringClassReference_110e7c738,&PTR_DAT_113179df0,
                        &PTR_DAT_113179e68,0xf,0x60,0x1c);
    puRam00000001136c6f70 = puVar1;
  }
  return;
}



/* Entry: 106c580c8; end: 106c580cb; -[SCPlusStoreKitJobProcessorEntryPoint begin] */

void FUN_106c580c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9b410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scheduleObserverJob_1125846a8);
  return;
}



/* Entry: 106c580cc; end: 106c581f7; -[SCPlusStoreKitJobProcessorEntryPoint _scheduleObserverJob] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c580cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b7238;
  _objc_opt_new(PTR_PTR_1126b7238);
  func_0x00010c1eeea0();
  puVar2 = PTR_PTR_1126b7240;
  _objc_opt_new(PTR_PTR_1126b7240);
  puVar3 = puVar2;
  func_0x00010bf06200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b7228;
  _objc_opt_new(PTR_PTR_1126b7228);
  func_0x00010c1b6840();
  func_0x00010c1b67e0(puVar3,param_2,puVar1);
  func_0x00010c1b6740(puVar3,param_2,1);
  func_0x00010c1b66e0(puVar3,param_2,puVar2);
  param_1 = param_1 + _DAT_11275b6f8;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c085740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f200();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106c581f8; end: 106c5829f; -[SCPlusStoreKitJobProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c581f8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275b6f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275b6fc);
  return;
}



/* Entry: 106c582a0; end: 106c583d7; -[SCPlusStoreKitServicesEntryPoint _makeUserService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c582a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_PTR_1126d1af8;
  _objc_alloc(PTR_PTR_1126d1af8);
  lVar2 = param_1 + _DAT_11275b708;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11275b70c;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11275b724;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + _DAT_11275b728;
  _objc_loadWeakRetained(lVar7);
  param_1 = param_1 + _DAT_11275b72c;
  _objc_loadWeakRetained(param_1);
  lVar8 = param_1;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035360(puVar1,param_2,lVar3,lVar5,lVar6,lVar7,lVar8);
  _objc_release(lVar8);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c583d8; end: 106c58587; -[SCPlusStoreKitServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106c583d8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275b700,0);
  _objc_destroyWeak(param_1 + _DAT_11275b704);
  _objc_destroyWeak(param_1 + _DAT_11275b72c);
  _objc_destroyWeak(param_1 + _DAT_11275b71c);
  _objc_destroyWeak(param_1 + _DAT_11275b724);
  _objc_destroyWeak(param_1 + _DAT_11275b714);
  _objc_destroyWeak(param_1 + _DAT_11275b728);
  _objc_destroyWeak(param_1 + _DAT_11275b70c);
  _objc_destroyWeak(param_1 + _DAT_11275b708);
  _objc_destroyWeak(param_1 + _DAT_11275b710);
  _objc_destroyWeak(param_1 + _DAT_11275b718);
  _objc_destroyWeak(param_1 + _DAT_11275b720);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275b730);
  return;
}



/* Entry: 106c58588; end: 106c58703;  */

void FUN_106c58588(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar5 = PTR_PTR_1126ae558;
  if (lVar1 == 0) {
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe9ca0(puVar5,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c225c20(puVar2,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_106c58704();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    uStack_68 = 0x106c58768;
    puStack_60 = &UNK_110892440;
    _objc_retain(param_1);
    puVar5 = puVar3;
    lStack_58 = param_1;
    func_0x00010c0b8600(puVar3,param_2,&puStack_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_58);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126d1b00;
    _objc_retain();
    _objc_alloc(puVar2);
    func_0x00010c03a920();
    _objc_release(param_1);
    puVar5 = puVar2;
    func_0x00010bfbc3e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c58704; end: 106c587c3;  */

void FUN_106c58704(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d1b00;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c03a920();
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106c587c4; end: 106c587cf;  */

void FUN_106c587c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_hasPrefix__1125d43b0,&PTR____CFConstantStringClassReference_110e7c858);
  return;
}



/* Entry: 106c587d0; end: 106c589d3;  */

void FUN_106c587d0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126d1b08;
    _objc_opt_new(PTR_PTR_1126d1b08);
    lVar1 = param_1;
    func_0x00010c115ea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e3bc0(puVar6);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c112a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_106c589d4();
    func_0x00010c1e28a0(puVar6);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c112b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5de80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e28e0(puVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c2608a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000106c58a64();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1daa80(puVar6);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c069ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0f6960();
    _objc_release(lVar1);
    if (lVar2 == 2) {
      lVar1 = param_1;
      func_0x00010c069ac0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c2608a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x000106c58a64();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f7a0(puVar6);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    uVar4 = param_2;
    func_0x00010c257f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf53280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c3c0(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106c589d4; end: 106c58aef;  */

undefined8 FUN_106c589d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDecimalNumber_1126be480;
  _objc_retain();
  func_0x00010bf667e0(puVar1,param_2,1,6,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf667a0(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010c067fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return uVar3;
}



/* Entry: 106c58af0; end: 106c58c6f;  */

void FUN_106c58af0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126d1b10;
  _objc_opt_new(PTR_PTR_1126d1b10);
  func_0x00010c1e52e0();
  lVar2 = param_1;
  func_0x00010c0f67c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3bc0(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar4 = param_1;
  func_0x00010c279860();
  if (lVar4 == 3) {
    lVar2 = param_1;
    func_0x00010c0eda80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c279820();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c08fa60();
    if (lVar5 == 0) goto LAB_106c58bf8;
    lVar4 = param_1;
    func_0x00010c0eda80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c279820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219600(puVar1);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
LAB_106c58bf8:
    lVar5 = param_1;
    func_0x00010c279820(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219600(puVar1);
    _objc_release(lVar5);
    if (lVar4 != 3) goto LAB_106c58c38;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_106c58c38:
  func_0x00010c1e81a0(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c58c70; end: 106c58ed3;  */

void FUN_106c58c70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1b18;
  _objc_retain(param_4);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c1e52e0();
  lVar2 = param_1;
  func_0x00010c0f67c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c115ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3bc0(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar4 = param_1;
  func_0x00010c279860();
  if (lVar4 == 3) {
    lVar2 = param_1;
    func_0x00010c0eda80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c279820();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c08fa60();
    if (lVar5 == 0) goto LAB_106c58d98;
    lVar4 = param_1;
    func_0x00010c0eda80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c279820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219600(puVar1);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  else {
LAB_106c58d98:
    lVar5 = param_1;
    func_0x00010c279820(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219600(puVar1);
    _objc_release(lVar5);
    if (lVar4 != 3) goto LAB_106c58dd8;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_106c58dd8:
  uVar6 = param_3;
  func_0x00010c257f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c184960(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010c112b80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf5de80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c186ec0(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010c112a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  FUN_106c589d4(uVar6);
  func_0x00010c1e28a0(puVar1);
  _objc_release(uVar6);
  func_0x00010c1e81a0(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106c58ed4; end: 106c5904f;  */

void FUN_106c58ed4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126d1b20;
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(param_2);
    _objc_retain(param_1);
    _objc_opt_new(puVar5);
    uVar1 = param_3;
    FUN_106c58af0(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_3);
    func_0x00010c1e81a0(puVar5);
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010c257f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar2 = uVar1;
    func_0x00010bf53280(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c3c0(puVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar3 = param_1;
    func_0x00010c112b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5de80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e28e0(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c112a80(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    FUN_106c589d4(lVar3);
    func_0x00010c1e28a0(puVar5);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106c59050; end: 106c5909b;  */

uint FUN_106c59050(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d1b30;
  _objc_retain();
  _objc_opt_class(puVar1);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  _objc_release(param_1);
  return (uint)uVar2 & 1;
}


