/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108d03d6c; end: 108d03d6f; -[SCGeoFilterView pinch:] */

void FUN_108d03d6c(void)

{
  return;
}



/* Entry: 108d03d70; end: 108d03d77; -[SCGeoFilterView shouldRespondToTouchControl:] */

undefined8 FUN_108d03d70(void)

{
  return 0;
}



/* Entry: 108d03d78; end: 108d044e7; -[SCGeoFilterView initWithFrame:config:userSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108d03d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_98;
  undefined *puStack_90;
  
  _objc_retain(param_7);
  puStack_90 = PTR_PTR_1126fe500;
  puVar1 = &uStack_98;
  uStack_98 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame_config__1125e29f0,
                      param_7);
  if (puVar1 == (undefined8 *)0x0) goto LAB_108d044b4;
  lVar2 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09d160();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277aef8);
  *(long *)((long)puVar1 + (long)_DAT_11277aef8) = lVar3;
  _objc_release(uVar7);
  lVar3 = lVar2;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277aefc);
  *(long *)((long)puVar1 + (long)_DAT_11277aefc) = lVar3;
  _objc_release(uVar7);
  lVar3 = param_7;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06c000();
  func_0x00010c1af280(puVar1);
  puVar4 = PTR_PTR_1126d4e38;
  _objc_alloc();
  func_0x00010c06c000(puVar1);
  func_0x00010c013e80(param_1,param_2,param_3,param_4);
  lVar9 = (long)_DAT_11277af00;
  uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
  *(undefined **)((long)puVar1 + lVar9) = puVar4;
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
  lVar9 = lVar2;
  func_0x00010bfe7300(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e3c0(lVar2);
  func_0x00010c104360(lVar2);
  func_0x00010c1aa320(uVar7);
  _objc_release(lVar9);
  lVar9 = lVar2;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar9;
  func_0x00010c08fa60();
  *(bool *)((long)puVar1 + (long)_DAT_11277af04) = lVar8 != 0;
  _objc_release(lVar9);
  lVar9 = lVar2;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277af08);
  *(long *)((long)puVar1 + (long)_DAT_11277af08) = lVar9;
  _objc_release(uVar7);
  lVar9 = lVar2;
  func_0x00010bf93ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277af0c);
  *(long *)((long)puVar1 + (long)_DAT_11277af0c) = lVar9;
  _objc_release(uVar7);
  lVar9 = lVar3;
  func_0x00010bf8b880();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277af10);
  *(long *)((long)puVar1 + (long)_DAT_11277af10) = lVar9;
  _objc_release(uVar7);
  lVar9 = lVar3;
  func_0x00010bf8b8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277af14);
  *(long *)((long)puVar1 + (long)_DAT_11277af14) = lVar9;
  _objc_release(uVar7);
  lVar9 = lVar3;
  func_0x00010c073640();
  *(char *)((long)puVar1 + (long)_DAT_11277af18) = (char)lVar9;
  lVar9 = lVar3;
  func_0x00010c06b660();
  *(char *)((long)puVar1 + (long)_DAT_11277af1c) = (char)lVar9;
  lVar9 = lVar3;
  func_0x00010c06d3a0();
  *(char *)((long)puVar1 + (long)_DAT_11277af20) = (char)lVar9;
  lVar9 = lVar3;
  func_0x00010c073720();
  *(char *)((long)puVar1 + (long)_DAT_11277af24) = (char)lVar9;
  lVar9 = lVar3;
  func_0x00010bfae260();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11277af28;
  uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
  *(long *)((long)puVar1 + lVar8) = lVar9;
  _objc_release(uVar7);
  func_0x00010befbb60(puVar1);
  lVar9 = lVar3;
  func_0x00010c07f200();
  lVar10 = (long)_DAT_11277af2c;
  *(char *)((long)puVar1 + lVar10) = (char)lVar9;
  lVar9 = lVar3;
  func_0x00010c06d220();
  *(char *)((long)puVar1 + (long)_DAT_11277af30) = (char)lVar9;
  lVar9 = lVar2;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277af34);
  *(long *)((long)puVar1 + (long)_DAT_11277af34) = lVar9;
  _objc_release(uVar7);
  lVar9 = lVar3;
  func_0x00010c280f40();
  *(long *)((long)puVar1 + (long)_DAT_11277af38) = lVar9;
  lVar9 = lVar3;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277af3c);
  *(long *)((long)puVar1 + (long)_DAT_11277af3c) = lVar9;
  _objc_release(uVar7);
  lVar9 = lVar3;
  func_0x00010bf8d300();
  *(long *)((long)puVar1 + (long)_DAT_11277af40) = lVar9;
  lVar9 = lVar2;
  func_0x00010bf8ba20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 != 0) {
    puVar4 = PTR_PTR_1126d4e38;
    _objc_alloc();
    func_0x00010c013e80(param_1,param_2,param_3,param_4);
    lVar9 = (long)_DAT_11277af44;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar4;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    lVar9 = lVar2;
    func_0x00010bf8ba20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e3c0(lVar2);
    func_0x00010c104360(lVar2);
    func_0x00010c1aa320(uVar7);
    _objc_release(lVar9);
    func_0x00010befbb60(puVar1);
  }
  if (*(long *)((long)puVar1 + lVar8) != 0) {
    puVar4 = PTR_PTR_1126dbbf0;
    _objc_alloc();
    func_0x00010c0143a0(param_1,param_2,param_3,param_4);
    lVar9 = (long)_DAT_11277af48;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar4;
    _objc_release(uVar7);
    func_0x00010c23d620(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010befbb60(puVar1);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar9);
    func_0x00010c104260();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c071ae0();
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)((long)puVar1 + lVar9);
    if ((int)uVar7 == 0) {
      func_0x00010c104260();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      uVar5 = *(undefined8 *)((long)puVar1 + lVar9);
      if ((int)uVar7 == 0) {
        _objc_retain(puVar1);
        func_0x00010c0bbfc0(uVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      else {
        _objc_retain(puVar1);
        func_0x00010c0bbfc0(uVar5);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
    }
    else {
      _objc_retain(puVar1);
      func_0x00010c0bbfc0(uVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
  if ((*(byte *)((long)puVar1 + lVar10) & 1) == 0) {
    lVar9 = lVar3;
    func_0x00010c24a620();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar9;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar8;
    func_0x00010c08fa60();
    _objc_release(lVar8);
    _objc_release(lVar9);
    if (lVar10 != 0) goto LAB_108d04388;
  }
  else {
LAB_108d04388:
    puVar4 = PTR_PTR_1126dbbf8;
    _objc_alloc();
    lVar9 = lVar3;
    func_0x00010c24a620(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c046cc0(0x4024000000000000,0x4031000000000000,0x4024000000000000,0);
    lVar8 = (long)_DAT_11277af4c;
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar4;
    _objc_release(uVar7);
    _objc_release(lVar9);
    func_0x00010befbb60(puVar1);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar8);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar6 = puVar1;
  func_0x00010c070c60();
  if ((int)puVar6 != 0) {
    func_0x00010c190140(puVar1);
  }
  lVar9 = lVar3;
  func_0x00010c0822e0();
  if ((int)lVar9 != 0) {
    func_0x00010c229840(puVar1);
  }
  func_0x00010c161020(puVar1);
  func_0x00010c160fc0(puVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
LAB_108d044b4:
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 108d044e8; end: 108d04617;  */

void FUN_108d044e8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "q";
  FUN_108d04618("q");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "@";
  FUN_108d04618("@");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d04618; end: 108d0499f;  */

void FUN_108d04618(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *in_stack_00000000;
  
  bVar1 = *param_1;
  if ((bVar1 == 0x40) && (param_1[1] == 0)) {
    _objc_retain(in_stack_00000000);
    puVar3 = in_stack_00000000;
  }
  else {
    pbVar2 = param_1;
    _strcmp(param_1,"{CGPoint=dd}");
    if ((((int)pbVar2 == 0) || (pbVar2 = param_1, _strcmp(param_1,"{CGSize=dd}"), (int)pbVar2 == 0))
       || (pbVar2 = param_1, _strcmp(param_1,"{UIEdgeInsets=dddd}"), (int)pbVar2 == 0)) {
      puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c296da0(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = (undefined *)0x0;
      if (bVar1 < 99) {
        if (bVar1 < 0x49) {
          if (bVar1 == 0x42) {
            if (param_1[1] == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_108d04960;
            }
          }
          else {
            if (bVar1 != 0x43) goto LAB_108d04960;
            if (param_1[1] == 0) {
              puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df800(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              goto LAB_108d04960;
            }
          }
        }
        else if (bVar1 == 0x49) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df820(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108d04960;
          }
        }
        else if (bVar1 == 0x51) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df860(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108d04960;
          }
        }
        else {
          if (bVar1 != 0x53) goto LAB_108d04960;
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df8a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108d04960;
          }
        }
      }
      else if (bVar1 < 0x69) {
        if (bVar1 == 99) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df700(PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108d04960;
          }
        }
        else if (bVar1 == 100) {
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df720(in_stack_00000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108d04960;
          }
        }
        else {
          if (bVar1 != 0x66) goto LAB_108d04960;
          if (param_1[1] == 0) {
            puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df740((float)(double)in_stack_00000000,
                                PTR__OBJC_CLASS___NSNumber_1126ae570);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108d04960;
          }
        }
      }
      else if (bVar1 == 0x69) {
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_108d04960;
        }
      }
      else if (bVar1 == 0x71) {
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7a0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_108d04960;
        }
      }
      else {
        if (bVar1 != 0x73) goto LAB_108d04960;
        if (param_1[1] == 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df7e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_108d04960;
        }
      }
      puVar3 = (undefined *)0x0;
    }
  }
LAB_108d04960:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108d049a0; end: 108d04b1f;  */

void FUN_108d049a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc059000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = "@";
  FUN_108d04618("@");
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,pcVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(pcVar7);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d04b20; end: 108d04b87;  */

void FUN_108d04b20(undefined8 param_1,long param_2)

{
  long lVar1;
  
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108d04b88; end: 108d04dbf;  */

void FUN_108d04b88(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc020(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x404e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c098960();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x404e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108d04dc0; end: 108d04e1f; -[SCGeoFilterView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d04dc0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_11277af50));
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_11277af54));
  puStack_28 = PTR_PTR_1126fe500;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108d04e20; end: 108d04f2f; -[SCGeoFilterView videoTrackedImages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_108d04e20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  func_0x00010bfd7d40();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if ((int)lVar1 != 0) {
    lVar4 = (long)_DAT_11277af44;
    lVar5 = *(long *)(param_1 + lVar4);
    lVar1 = *(long *)(param_1 + _DAT_11277af00);
    func_0x00010c29b860();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_50 = lVar1;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_50,1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + lVar4);
      lStack_48 = lVar1;
      func_0x00010c29b860();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_40 = uVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_48,2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    return (undefined *)(ulong)*(byte *)(lVar1 + _DAT_11277af04);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 108d04f30; end: 108d04f3f; -[SCGeoFilterView hasImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d04f30(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277af04);
}



/* Entry: 108d04f40; end: 108d0522f; -[SCGeoFilterView updateConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d04f40(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_s_updateConfig__11267ebe8;
  puStack_58 = PTR_PTR_1126fe500;
  lStack_60 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_60,puVar1,param_3);
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar3;
  func_0x00010c280f40();
  *(ulong *)(param_1 + _DAT_11277af38) = uVar4;
  uVar6 = *(undefined8 *)(param_1 + _DAT_11277af00);
  uVar4 = uVar2;
  func_0x00010bfe7300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e3c0(uVar2);
  func_0x00010c104360(uVar2);
  func_0x00010c1aa320(uVar6);
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c08fa60();
  lVar8 = (long)_DAT_11277af04;
  *(bool *)(param_1 + lVar8) = uVar5 != 0;
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bf8ba20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar4 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11277af44);
    uVar4 = uVar2;
    func_0x00010bf8ba20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e3c0(uVar2);
    func_0x00010c104360(uVar2);
    func_0x00010c1aa320(uVar6);
    _objc_release(uVar4);
    if (*(char *)(param_1 + lVar8) == '\x01') {
      *(undefined1 *)(param_1 + lVar8) = 1;
    }
    else {
      uVar4 = uVar2;
      func_0x00010bf8ba20();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c08fa60();
      *(bool *)(param_1 + lVar8) = uVar5 != 0;
      _objc_release(uVar4);
    }
  }
  uVar4 = uVar3;
  func_0x00010c0822e0();
  if ((uVar4 & 1) == 0) {
    func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20);
  }
  else {
    lVar7 = (long)_DAT_11277af58;
    lVar8 = *(long *)(param_1 + lVar7);
    if (lVar8 == 0) {
      func_0x00010c229840(param_1);
      lVar8 = *(long *)(param_1 + lVar7);
    }
    func_0x00010c1677c0(0x3ff0000000000000,lVar8);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277af5c));
    lVar7 = *(long *)(param_1 + _DAT_11277af10);
    _objc_retain(lVar7);
    lVar8 = lVar7;
    func_0x00010c08fa60();
    if (lVar8 == 0) {
      func_0x000109201910();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      lVar7 = lVar8;
    }
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277af60));
    _objc_release(lVar7);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 108d05230; end: 108d05247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d05230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277af58),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d05248; end: 108d056d7; -[SCGeoFilterView setupUpdatingLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d05248(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = *(long *)(param_5 + _DAT_11277af10);
  _objc_retain(lVar7);
  lVar8 = *(long *)(param_5 + _DAT_11277af14);
  _objc_retain(lVar8);
  _objc_retain(param_7);
  lVar12 = lVar7;
  func_0x00010c08fa60();
  if (lVar12 == 0) {
    func_0x000109201910();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    lVar7 = lVar12;
  }
  lVar12 = lVar8;
  func_0x00010c08fa60();
  if (lVar12 == 0) {
    func_0x000109201928();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    lVar8 = lVar12;
  }
  dVar13 = 12.0;
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_b8 = uVar10;
  puStack_b0 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_b0,&uStack_b8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d660(lVar8,param_6,puVar2);
  dVar14 = dVar13;
  dVar18 = param_2;
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_c8 = uVar10;
  puStack_c0 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_6,&puStack_c0,&uStack_c8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d660(lVar7,param_6,puVar2);
  dVar15 = dVar14;
  dVar16 = dVar18;
  _objc_release(puVar2);
  if (dVar13 <= dVar14) {
    dVar13 = dVar14;
  }
  if (param_2 <= dVar18) {
    param_2 = dVar18;
  }
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_6,
                      &PTR____CFConstantStringClassReference_110ef27b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar2,param_6,puVar3);
  lVar11 = (long)_DAT_11277af5c;
  uVar10 = *(undefined8 *)(param_5 + lVar11);
  *(undefined **)(param_5 + lVar11) = puVar2;
  _objc_release(uVar10);
  _objc_release(puVar3);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar11));
  dVar14 = dVar15;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar11));
  _CGRectGetWidth();
  func_0x00010bc852e4(dVar15,dVar16,param_3,param_4,(dVar13 - dVar14) * 0.5,0);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar11));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar11));
  _CGRectGetHeight();
  dVar17 = param_2 + dVar15;
  lVar12 = (long)_DAT_11277af00;
  uVar10 = *(undefined8 *)(param_5 + lVar12);
  func_0x00010bfe90c0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinX();
  dVar14 = dVar15;
  func_0x00010c286da0(param_7);
  uVar4 = *(undefined8 *)(param_5 + lVar12);
  dVar18 = dVar14;
  func_0x00010bfe90c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  dVar15 = dVar15 + dVar18 * dVar14;
  dVar16 = dVar13 * 0.5;
  dVar18 = dVar15 - dVar16;
  uVar5 = *(undefined8 *)(param_5 + lVar12);
  func_0x00010bfe90c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinY();
  dVar14 = dVar15;
  func_0x00010c286da0(param_7);
  _objc_release(param_7);
  uVar6 = *(undefined8 *)(param_5 + lVar12);
  func_0x00010bfe90c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  dVar16 = (dVar15 + dVar14 * dVar16) - dVar17 * 0.5;
  dVar15 = dVar13;
  _CGRectIntegral(dVar18,dVar16,dVar13,dVar17);
  dVar14 = dVar18;
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar10);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar11));
  _CGRectGetHeight();
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(0,dVar14,dVar13,param_2);
  lVar9 = (long)_DAT_11277af60;
  uVar10 = *(undefined8 *)(param_5 + lVar9);
  *(undefined **)(param_5 + lVar9) = puVar2;
  _objc_release(uVar10);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_5 + lVar9),param_6,puVar2);
  _objc_release(puVar2);
  func_0x00010c212f20(*(undefined8 *)(param_5 + lVar9),param_6,lVar7);
  func_0x00010c213040(*(undefined8 *)(param_5 + lVar9),param_6,1);
  func_0x00010c19e480(*(undefined8 *)(param_5 + lVar9),param_6,puVar1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(dVar18,dVar16,dVar15,dVar17);
  lVar12 = (long)_DAT_11277af58;
  uVar10 = *(undefined8 *)(param_5 + lVar12);
  *(undefined **)(param_5 + lVar12) = puVar2;
  _objc_release(uVar10);
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar12),param_6,*(undefined8 *)(param_5 + lVar11));
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar12),param_6,*(undefined8 *)(param_5 + lVar9));
  func_0x00010befbb60(param_5,param_6,*(undefined8 *)(param_5 + lVar12));
  _objc_release(puVar1);
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = (long)_DAT_11277af00;
  uVar4 = *(undefined8 *)(lVar7 + lVar12);
  func_0x00010bfe90c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar7 + lVar12);
  func_0x00010bfe90c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bf89920(uVar10);
  _objc_release(uVar5);
  _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 108d056d8; end: 108d0575b; -[SCGeoFilterView drawScreenshotImageInCurrentContextWithRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d056d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11277af00;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfe90c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  func_0x00010bf89920(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d0575c; end: 108d0584b; -[SCGeoFilterView _activateFilterToast] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0575c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar3 = (long)_DAT_11277af48;
  dVar4 = 0.0;
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c2724e0(*(undefined8 *)(param_1 + lVar3));
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108d0584c;
  puStack_50 = &UNK_110842e18;
  lStack_48 = param_1;
  func_0x00010bf03400(puVar1,param_2,&puStack_68);
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x00010c2724e0(*(undefined8 *)(param_1 + lVar3));
  dVar5 = dVar4;
  func_0x00010c272540(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1503c0(dVar4 + dVar5,puVar1,param_2,param_1,PTR_s__fadeoutFilterToast__11253d060,0,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277af54);
  *(undefined **)(param_1 + _DAT_11277af54) = puVar1;
  _objc_release(uVar2);
  return;
}



/* Entry: 108d0584c; end: 108d05863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0584c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277af48),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d05864; end: 108d0591b; -[SCGeoFilterView _scheduleSponsoredSlugFadeout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d05864(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  uVar1 = *(undefined8 *)(param_2 + _DAT_11277af4c);
  func_0x00010c23ea60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26f0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  func_0x00010c1503c0(param_1 / 1000.0,puVar3,param_3,param_2,PTR_s__fadeoutSponsoredSlug__11253d068
                      ,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + _DAT_11277af50);
  *(undefined **)(param_2 + _DAT_11277af50) = puVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d0591c; end: 108d05a0f; -[SCGeoFilterView setDisplayed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0591c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar2 = param_1;
  func_0x00010c070c60();
  iVar1 = (int)param_3;
  if (iVar1 != (int)lVar2) {
    puStack_38 = PTR_PTR_1126fe500;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_setDisplayed__112641a70,param_3);
    lVar2 = (long)_DAT_11277af4c;
    if (*(long *)(param_1 + lVar2) != 0) {
      func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_11277af50));
      if (iVar1 == 0) {
        func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar2));
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
      }
      else {
        func_0x00010be9b720(param_1);
      }
    }
    if (*(long *)(param_1 + _DAT_11277af28) != 0) {
      func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_11277af54));
      if (iVar1 == 0) {
        lVar2 = (long)_DAT_11277af48;
        func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2));
        func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar2));
      }
      else {
        func_0x00010bdc4ca0(param_1);
      }
    }
  }
  return;
}



/* Entry: 108d05a10; end: 108d05acf; -[SCGeoFilterView _fadeoutSponsoredSlug:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d05a10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar3 = (long)_DAT_11277af4c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf9f9c0(*(undefined8 *)(param_1 + lVar3));
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108d05ad0;
  puStack_40 = &UNK_110842e18;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x108d05ae8;
  puStack_68 = &UNK_110841f20;
  lStack_60 = param_1;
  lStack_38 = param_1;
  func_0x00010bf03420(puVar1,param_2,&puStack_58,&puStack_80);
  return;
}



/* Entry: 108d05ad0; end: 108d05aff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d05ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277af4c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d05b00; end: 108d05c3f; -[SCGeoFilterView _fadeinSponsoredSlug] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d05b00(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  func_0x00010c069d00(*(undefined8 *)(param_2 + _DAT_11277af50));
  lVar3 = (long)_DAT_11277af4c;
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_2 + lVar3));
  _objc_initWeak(auStack_48,param_2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010bf9f9c0(*(undefined8 *)(param_2 + lVar3));
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108d05c40;
  puStack_58 = &UNK_110842e18;
  lStack_50 = param_2;
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010bf03420(param_1,puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 108d05c40; end: 108d05c57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d05c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277af4c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d05c58; end: 108d05ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d05c58(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277af4c));
    func_0x00010be9b720(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 108d05ca4; end: 108d05cb3; -[SCGeoFilterView shouldAddToAlternativeSuperview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d05ca4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277af30);
}



/* Entry: 108d05cb4; end: 108d05cc3; -[SCGeoFilterView resetUpdateAttemptCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d05cb4(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_11277af64) = 0;
  return;
}



/* Entry: 108d05cc4; end: 108d05d6b; -[SCGeoFilterView _isRecognizer:locatedInView:] */

undefined8
FUN_108d05cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_8 != 0) {
    _objc_retain(param_8);
    _objc_retain(param_7);
    func_0x00010bf20c00(param_8);
    uVar1 = param_1;
    uVar2 = param_2;
    func_0x00010c09ef00(param_7,param_6,param_8);
    _objc_release(param_8);
    _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)(param_1,param_2,param_3,param_4,uVar1,uVar2);
    return param_7;
  }
  return 0;
}



/* Entry: 108d05d6c; end: 108d05e2b; -[SCGeoFilterView tap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d05d6c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be43220();
  if ((int)lVar1 == 0) {
    func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11277af60),param_2,
                        *(undefined8 *)(param_1 + _DAT_11277af14));
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277af5c),param_2,1);
    *(long *)(param_1 + _DAT_11277af64) = *(long *)(param_1 + _DAT_11277af64) + 1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc13c0();
  }
  else {
    param_1 = param_1 + _DAT_11277af68;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfc13e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d05e2c; end: 108d05eff; -[SCGeoFilterView shouldRespondToTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_108d05e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x00010be43220(param_5,param_6,param_7,*(undefined8 *)(param_5 + (long)_DAT_11277af4c));
  if ((uVar1 & 1) == 0) {
    lVar3 = (long)_DAT_11277af58;
    if (*(long *)(param_5 + lVar3) == 0) {
      uVar2 = 0;
    }
    else {
      func_0x00010bf20c00();
      _CGRectInset();
      uVar2 = param_7;
      uVar4 = param_1;
      uVar5 = param_2;
      func_0x00010c09ef00(param_7,param_6,*(undefined8 *)(param_5 + lVar3));
      _CGRectContainsPoint(param_1,param_2,param_3,param_4,uVar4,uVar5);
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_7);
  return uVar2;
}



/* Entry: 108d05f00; end: 108d05f03; -[SCGeoFilterView didProcessTapInPreviewContainerView:] */

void FUN_108d05f00(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fadeinSponsoredSlug_1125611e8);
  return;
}



/* Entry: 108d05f04; end: 108d05f9b; -[SCGeoFilterView _fadeoutFilterToast:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d05f04(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c272500(*(undefined8 *)(param_1 + _DAT_11277af48));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108d05f9c;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x108d05fb4;
  puStack_58 = &UNK_110841f20;
  lStack_50 = param_1;
  lStack_28 = param_1;
  func_0x00010bf03420(puVar1,param_2,&puStack_48,&puStack_70);
  return;
}



/* Entry: 108d05f9c; end: 108d05fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d05f9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277af48),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d05fcc; end: 108d05feb; -[SCGeoFilterView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d05fcc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277af68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108d05fec; end: 108d05fff; -[SCGeoFilterView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d05fec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277af68,param_3);
  return;
}



/* Entry: 108d06000; end: 108d0600f; -[SCGeoFilterView dynamicFilterRefreshHint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d06000(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af10);
}



/* Entry: 108d06010; end: 108d0601f; -[SCGeoFilterView dynamicFilterUpdatingMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d06010(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af14);
}



/* Entry: 108d06020; end: 108d0602f; -[SCGeoFilterView eligibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d06020(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af40);
}



/* Entry: 108d06030; end: 108d0603f; -[SCGeoFilterView encryptedGeoData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d06030(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af0c);
}



/* Entry: 108d06040; end: 108d0604f; -[SCGeoFilterView filterPrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d06040(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af28);
}



/* Entry: 108d06050; end: 108d0605f; -[SCGeoFilterView geoFilterLoadingMetaData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d06050(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aef8);
}



/* Entry: 108d06060; end: 108d0606f; -[SCGeoFilterView isActionmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d06060(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277af1c);
}



/* Entry: 108d06070; end: 108d0607f; -[SCGeoFilterView isBitmoji] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d06070(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277af20);
}



/* Entry: 108d06080; end: 108d0608f; -[SCGeoFilterView isFrameFilter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d06080(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277af18);
}



/* Entry: 108d06090; end: 108d0609f; -[SCGeoFilterView unlockableContentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d06090(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af38);
}



/* Entry: 108d060a0; end: 108d060af; -[SCGeoFilterView overlayPngData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d060a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af34);
}



/* Entry: 108d060b0; end: 108d060bf; -[SCGeoFilterView isFriendFilter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d060b0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277af24);
}



/* Entry: 108d060c0; end: 108d060cf; -[SCGeoFilterView updateAttemptCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d060c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af64);
}



/* Entry: 108d060d0; end: 108d060df; -[SCGeoFilterView unlockableTrackInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d060d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af3c);
}



/* Entry: 108d060e0; end: 108d060ef; -[SCGeoFilterView requestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d060e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277aefc);
}



/* Entry: 108d060f0; end: 108d060ff; -[SCGeoFilterView filterId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d060f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af08);
}



/* Entry: 108d06100; end: 108d0610b; -[SCGeoFilterView setFilterId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d06100(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108d0610c; end: 108d0611b; -[SCGeoFilterView geoFilterImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d0610c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af00);
}



/* Entry: 108d0611c; end: 108d0615b; -[SCGeoFilterView setGeoFilterImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0611c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277af00;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d0615c; end: 108d0616b; -[SCGeoFilterView dynamicResourceImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d0615c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af44);
}



/* Entry: 108d0616c; end: 108d061ab; -[SCGeoFilterView setDynamicResourceImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0616c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277af44;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d061ac; end: 108d061bb; -[SCGeoFilterView slugView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d061ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af4c);
}



/* Entry: 108d061bc; end: 108d061fb; -[SCGeoFilterView setSlugView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d061bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277af4c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108d061fc; end: 108d0620b; -[SCGeoFilterView isSponsored] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_108d061fc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277af2c);
}



/* Entry: 108d0620c; end: 108d0621b; -[SCGeoFilterView setIsSponsored:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0620c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11277af2c) = param_3;
  return;
}



/* Entry: 108d0621c; end: 108d06367; -[SCGeoFilterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0621c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277af4c,0);
  _objc_storeStrong(param_1 + _DAT_11277af44,0);
  _objc_storeStrong(param_1 + _DAT_11277af00,0);
  _objc_storeStrong(param_1 + _DAT_11277af08,0);
  _objc_storeStrong(param_1 + _DAT_11277aefc,0);
  _objc_storeStrong(param_1 + _DAT_11277af3c,0);
  _objc_storeStrong(param_1 + _DAT_11277af34,0);
  _objc_storeStrong(param_1 + _DAT_11277aef8,0);
  _objc_storeStrong(param_1 + _DAT_11277af28,0);
  _objc_storeStrong(param_1 + _DAT_11277af0c,0);
  _objc_storeStrong(param_1 + _DAT_11277af14,0);
  _objc_storeStrong(param_1 + _DAT_11277af10,0);
  _objc_destroyWeak(param_1 + _DAT_11277af68);
  _objc_storeStrong(param_1 + _DAT_11277af48,0);
  _objc_storeStrong(param_1 + _DAT_11277af54,0);
  _objc_storeStrong(param_1 + _DAT_11277af50,0);
  _objc_storeStrong(param_1 + _DAT_11277af5c,0);
  _objc_storeStrong(param_1 + _DAT_11277af60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277af58,0);
  return;
}



/* Entry: 108d06368; end: 108d0659f; -[SCGeofilterToastView initWithFrame:dict:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108d06368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fe508;
  uStack_60 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010c0e00e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(puVar1);
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf1eda0(0x4038000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(puVar1);
    _objc_release(puVar3);
    func_0x00010c213040(puVar1);
    func_0x00010c1bdb00(puVar1);
    func_0x00010c1cfce0(puVar1);
    fVar5 = 0.0;
    func_0x00010c1677c0(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(puVar1);
    _objc_release(puVar3);
    uVar2 = param_7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11277af6c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11277af6c) = uVar2;
    _objc_release(uVar4);
    uVar2 = param_7;
    func_0x00010c0e00e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar6 = (double)fVar5 / 1000.0;
    *(double *)((long)puVar1 + (long)_DAT_11277af70) = dVar6;
    _objc_release(uVar2);
    fVar5 = SUB84(dVar6,0);
    uVar2 = param_7;
    func_0x00010c0e00e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    dVar6 = (double)fVar5 / 1000.0;
    *(double *)((long)puVar1 + (long)_DAT_11277af74) = dVar6;
    _objc_release(uVar2);
    fVar5 = SUB84(dVar6,0);
    uVar2 = param_7;
    func_0x00010c0e00e0(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    *(double *)((long)puVar1 + (long)_DAT_11277af78) = (double)fVar5 / 1000.0;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 108d065a0; end: 108d065af; -[SCGeofilterToastView toastFadeInTimeSecs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d065a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af70);
}



/* Entry: 108d065b0; end: 108d065bf; -[SCGeofilterToastView toastFadeOutTimeSecs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d065b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af74);
}



/* Entry: 108d065c0; end: 108d065cf; -[SCGeofilterToastView toastOnScreenTimeSecs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d065c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af78);
}



/* Entry: 108d065d0; end: 108d065df; -[SCGeofilterToastView position] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d065d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277af6c);
}



/* Entry: 108d065e0; end: 108d065f3; -[SCGeofilterToastView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d065e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277af6c,0);
  return;
}



/* Entry: 108d065f4; end: 108d06687; -[SCSingleLensCommandUcoStateProvider initWithLensId:] */

undefined1 * FUN_108d065f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe510;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126dbc00;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108d06688; end: 108d0668f; -[SCSingleLensCommandUcoStateProvider addListener:] */

void FUN_108d06688(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108d06690; end: 108d06697; -[SCSingleLensCommandUcoStateProvider removeListener:] */

void FUN_108d06690(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108d06698; end: 108d06797; -[SCSingleLensCommandUcoStateProvider notifyCommandAlreadyLoadedV2:] */

void FUN_108d06698(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c094660();
  _objc_retainAutoreleasedReturnValue();
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  puVar4 = auStack_c8;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_100;
    do {
      lVar6 = 0;
      do {
        if (*plStack_100 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bdcbec0(param_1,param_2,0,*(undefined8 *)(lStack_108 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      puVar4 = auStack_c8;
      lVar1 = param_3;
      puVar3 = &uStack_110;
      func_0x00010bf52a60(param_3,param_2,&uStack_110,puVar4,0x10);
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  if ((*(long *)(param_3 + 0x10) == 0) || (puVar2 = puVar4, func_0x00010c0720c0(), (int)puVar2 != 0)
     ) {
    func_0x00010c27e960(*(undefined8 *)(param_3 + 8),param_2,param_3,puVar4);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 108d06798; end: 108d06803; -[SCSingleLensCommandUcoStateProvider _announceImageProcessLensCommand:didFinishProcessingFrameWithLensId:] */

void FUN_108d06798(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((*(long *)(param_1 + 0x10) == 0) || (uVar1 = param_4, func_0x00010c0720c0(), (int)uVar1 != 0))
  {
    func_0x00010c27e960(*(undefined8 *)(param_1 + 8),param_2,param_1,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108d06804; end: 108d06833; -[SCSingleLensCommandUcoStateProvider .cxx_destruct] */

void FUN_108d06804(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108d06834; end: 108d06c13; -[SCUcoInfoView initWithUcoInfoViewModel:infoViewTapHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108d06834(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_b8 = PTR_PTR_1126fe518;
  uVar14 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar15 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar2 = &uStack_c0;
  uStack_c0 = param_1;
  _objc_msgSendSuper2(uVar14,uVar15,uVar16,uVar17,puVar2,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    lVar13 = (long)_DAT_11277af84;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar13);
    *(undefined8 **)((long)puVar2 + lVar13) = param_3;
    _objc_release(uVar3);
    uVar3 = param_4;
    _objc_retainBlock();
    uVar12 = *(undefined8 *)((long)puVar2 + (long)_DAT_11277af88);
    *(undefined8 *)((long)puVar2 + (long)_DAT_11277af88) = uVar3;
    _objc_release(uVar12);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar2);
    _objc_release(puVar4);
    iVar1 = (int)*(undefined8 *)((long)puVar2 + lVar13);
    func_0x00010bf634e0();
    if (iVar1 != 0) {
      puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc();
      func_0x00010c013de0(uVar14,uVar15,uVar16,uVar17);
      lVar13 = (long)_DAT_11277af8c;
      uVar14 = *(undefined8 *)((long)puVar2 + lVar13);
      *(undefined **)((long)puVar2 + lVar13) = puVar4;
      _objc_release(uVar14);
      func_0x00010c21e900(*(undefined8 *)((long)puVar2 + lVar13));
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*(undefined8 *)((long)puVar2 + lVar13));
      _objc_release(puVar4);
      func_0x00010c219b60(*(undefined8 *)((long)puVar2 + lVar13));
      func_0x00010befbb60(puVar2);
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar3 = *(undefined8 *)((long)puVar2 + lVar13);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar3;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_b0 = uVar14;
      uVar12 = *(undefined8 *)((long)puVar2 + lVar13);
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c08e400();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = uVar12;
      func_0x00010bf493c0(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      uStack_a8 = uVar15;
      uVar7 = *(undefined8 *)((long)puVar2 + lVar13);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar2;
      func_0x00010bf1ff80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar7;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uStack_a0 = uVar16;
      uVar9 = *(undefined8 *)((long)puVar2 + lVar13);
      func_0x00010c1408a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar2;
      func_0x00010c1408a0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar9;
      func_0x00010bf493c0(0xbff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_98 = uVar17;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar4);
      _objc_release(puVar11);
      _objc_release(uVar17);
      _objc_release(puVar10);
      _objc_release(uVar9);
      _objc_release(uVar16);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(uVar15);
      _objc_release(puVar6);
      _objc_release(uVar12);
      _objc_release(uVar14);
      _objc_release(puVar5);
      _objc_release(uVar3);
      *(undefined1 *)((long)puVar2 + (long)_DAT_11277af90) = 0;
      func_0x00010c1677c0(0x3fc0a3d70a3d70a4,*(undefined8 *)((long)puVar2 + lVar13));
    }
    func_0x00010bead2c0(puVar2);
    func_0x00010beadcc0(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010c1b31c0();
                    /* WARNING: Could not recover jumptable at 0x00010c1af3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_setIsAttributionHidden__112649718,0);
  return param_3;
}



/* Entry: 108d06c14; end: 108d06c3f; -[SCUcoInfoView show] */

void FUN_108d06c14(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1b31c0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1af3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsAttributionHidden__112649718,0);
  return;
}



/* Entry: 108d06c40; end: 108d06c6b; -[SCUcoInfoView _hide:] */

void FUN_108d06c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfe1940();
                    /* WARNING: Could not recover jumptable at 0x00010bfe24f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_hideOverlay__1125d62f8,param_3);
  return;
}



/* Entry: 108d06c6c; end: 108d06c9f; -[SCUcoInfoView hideAttribution:] */

void FUN_108d06c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c1b24c0(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c1af3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setIsAttributionHidden_animated__112649720,1,param_3);
  return;
}



/* Entry: 108d06ca0; end: 108d06cab; -[SCUcoInfoView hideOverlay:] */

void FUN_108d06ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b31f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setIsOverlayHidden_animated__11264a6a0,1,param_3);
  return;
}



/* Entry: 108d06cac; end: 108d06de3; -[SCUcoInfoView setIsLoadingIndicatorHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d06cac(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  iVar2 = (int)*(undefined8 *)(param_1 + _DAT_11277af84);
  func_0x00010c09cfc0();
  if (iVar2 != 0) {
    if (*(byte *)(param_1 + _DAT_11277afa0) != param_3) {
      *(char *)(param_1 + _DAT_11277afa0) = (char)param_3;
      if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (*(undefined8 *)(param_1 + _DAT_11277afac),PTR_s_startAnimating_112671118);
        return;
      }
      func_0x00010c08cdc0(*(undefined8 *)(param_1 + _DAT_11277afa4));
      func_0x00010c181140(0x4040000000000000,*(undefined8 *)(param_1 + _DAT_11277afa8));
      func_0x00010bee2bc0(param_1);
      _objc_initWeak(auStack_28,param_1);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_copyWeak(auStack_30,auStack_28);
      func_0x00010bf03400(0x3fb999999999999a,puVar1);
      _objc_destroyWeak(auStack_30);
      _objc_destroyWeak(auStack_28);
    }
  }
  return;
}



/* Entry: 108d06de4; end: 108d06e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d06de4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c08cdc0(*(undefined8 *)(param_1 + _DAT_11277afa4));
    func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11277afac));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d06e30; end: 108d06e77; -[SCUcoInfoView setIsOverlayHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d06e30(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (long)_DAT_11277af8c;
  if ((*(long *)(param_1 + lVar1) != 0) && (*(byte *)(param_1 + _DAT_11277af90) != param_3)) {
    *(char *)(param_1 + _DAT_11277af90) = (char)param_3;
    uVar2 = 0;
    if (param_3 == 0) {
      uVar2 = 0x3fc0a3d70a3d70a4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar2,*(undefined8 *)(param_1 + lVar1),PTR_s_setAlpha__112637810);
    return;
  }
  return;
}



/* Entry: 108d06e78; end: 108d06f0b; -[SCUcoInfoView setIsOverlayHidden:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d06e78(long param_1,undefined8 param_2,uint param_3,int param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined1 uStack_18;
  
  if ((*(long *)(param_1 + _DAT_11277af8c) != 0) && (*(byte *)(param_1 + _DAT_11277af90) != param_3)
     ) {
    if (param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1b31d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsOverlayHidden__11264a698);
      return;
    }
    puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_38 = 0xc2000000;
    pcStack_30 = FUN_108d06f0c;
    puStack_28 = &UNK_110845ce0;
    uStack_18 = (undefined1)param_3;
    lStack_20 = param_1;
    func_0x00010bf03400(0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_40);
  }
  return;
}



/* Entry: 108d06f0c; end: 108d06f17;  */

void FUN_108d06f0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1b31d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setIsOverlayHidden__11264a698,
             *(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 108d06f18; end: 108d06f4b; -[SCUcoInfoView setIsAttributionHidden:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d06f18(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + _DAT_11277afb0) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11277afb0) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)(param_3 ^ 1),*(undefined8 *)(param_1 + _DAT_11277afa4),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 108d06f4c; end: 108d070a7; -[SCUcoInfoView setIsAttributionHidden:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d06f4c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  if ((uint)*(byte *)(param_1 + _DAT_11277afb0) != (uint)param_3) {
    if ((param_4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1af3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s_setIsAttributionHidden__112649718,param_3);
      return;
    }
    func_0x00010bf2dec0(param_1);
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uVar3 = 0xc2000000;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108d070a8;
    puStack_60 = &UNK_11084ceb8;
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = (undefined1)param_3;
    uVar1 = 0;
    func_0x000107c27d90(0,&puStack_78);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277afb4);
    *(undefined8 *)(param_1 + _DAT_11277afb4) = uVar1;
    _objc_release(uVar2);
    if ((uint)param_3 == 0) {
      uVar3 = 0x3fb999999999999a;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11277af84);
      func_0x00010bf0e980(uVar2);
    }
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f7fe0(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 108d070a8; end: 108d0714f;  */

void FUN_108d070a8(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uStack_38 = *(undefined1 *)(param_1 + 0x28);
  func_0x00010bf03400(0x3fd3333333333333,puVar1);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 108d07150; end: 108d07183;  */

void FUN_108d07150(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1af3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d07184; end: 108d071c7; -[SCUcoInfoView cancelAttributionAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d07184(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277afb4;
  if (*(long *)(param_1 + lVar2) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 108d071c8; end: 108d072db; -[SCUcoInfoView startLoadingWithUcoStateProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d071c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108d072dc;
  puStack_58 = &UNK_1108434b0;
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = 0;
  func_0x000107c27d90(0,&puStack_70);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277afb8);
  *(undefined8 *)(param_1 + _DAT_11277afb8) = uVar1;
  _objc_release(uVar2);
  func_0x000107c30a80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fe0(0x3fb999999999999a);
  _objc_release(uVar2);
  func_0x00010bef9980(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108d072dc; end: 108d0730f;  */

void FUN_108d072dc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1af3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d07310; end: 108d073c3; -[SCUcoInfoView shouldBlockGesture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108d07310(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  if (*(long *)(param_2 + _DAT_11277af88) != 0) {
    lVar3 = (long)_DAT_11277afa4;
    func_0x00010bf01b40(*(undefined8 *)(param_2 + lVar3));
    if (param_1 == 1.0) {
      uVar1 = *(ulong *)(param_2 + lVar3);
      func_0x00010c074c20();
      if ((uVar1 & 1) == 0) {
        func_0x00010c09ef00(param_4,param_3,*(undefined8 *)(param_2 + lVar3));
        uVar1 = *(ulong *)(param_2 + lVar3);
        func_0x00010bf20c00();
        _CGRectContainsPoint();
        if ((uVar1 & 1) != 0) {
          uVar2 = 1;
          goto LAB_108d073a4;
        }
      }
    }
  }
  uVar2 = 0;
LAB_108d073a4:
  _objc_release(param_4);
  return uVar2;
}



/* Entry: 108d073c4; end: 108d07503; -[SCUcoInfoView ucoStateProvider:didFinishProcessingFrameWithFilterId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d073c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277af84);
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puVar3 = auStack_48;
    _objc_initWeak(puVar3,param_1);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c0f7fc0(puVar3);
    _objc_release(puVar3);
    func_0x00010c12cf80(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108d07504; end: 108d0755b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d07504(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11277afb8;
    if (*(long *)(param_1 + lVar2) != 0) {
      _dispatch_block_cancel();
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
    func_0x00010be352c0(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108d0755c; end: 108d075d7; -[SCUcoInfoView _setupInfoView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0755c(long param_1)

{
  func_0x00010beafca0();
  func_0x00010bead080(param_1);
  func_0x00010beae360(param_1);
  func_0x00010beaaac0(param_1);
  func_0x00010beaa960(param_1);
  func_0x00010bead6c0(param_1);
  func_0x00010c09cfc0(*(undefined8 *)(param_1 + _DAT_11277af84));
  func_0x00010bee2bc0(param_1);
  *(undefined1 *)(param_1 + _DAT_11277afb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11277afa4),PTR_s_setAlpha__112637810)
  ;
  return;
}



/* Entry: 108d075d8; end: 108d0769b; -[SCUcoInfoView _setupSlugContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d075d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11277afa4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar3));
  if (*(long *)(param_1 + _DAT_11277af88) != 0) {
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar3),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 108d0769c; end: 108d07713; -[SCUcoInfoView _setupIconImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d0769c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11277af94;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277afa4),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 108d07714; end: 108d078ef; -[SCUcoInfoView _setupNameLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d07714(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11277af98;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf1ecc0(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277af84);
  func_0x00010c0d4f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4018000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3f19999a);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar5 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(uVar4,uVar5);
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277afa4),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 108d078f0; end: 108d07adb; -[SCUcoInfoView _setupAuthorLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d078f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11277af9c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4024000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar3));
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11277af84);
  func_0x00010bf5b940(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar3));
  _objc_release(uVar2);
  func_0x00010c1677c0(0x3fe999999999999a,*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4018000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3f19999a);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
  uVar5 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(uVar4,uVar5);
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277afa4),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 108d07adc; end: 108d07b93; -[SCUcoInfoView _setupArrowIconImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d07adc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11277af84);
  func_0x00010bf0a1c0();
  if (iVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                        &PTR____CFConstantStringClassReference_110ef2838);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar5 = (long)_DAT_11277afbc;
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar3;
    _objc_release(uVar4);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar5),param_2,0);
    func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11277afa4),param_2,
                        *(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 108d07b94; end: 108d07bcf; -[SCUcoInfoView _setupLayoutConstraints] */

void FUN_108d07b94(undefined8 param_1)

{
  func_0x00010beafcc0();
  func_0x00010bead0a0(param_1);
  func_0x00010beae380(param_1);
  func_0x00010beaaae0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beaa990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setupArrowIconImageViewLayoutCo_112588408);
  return;
}



/* Entry: 108d07bd0; end: 108d07e57; -[SCUcoInfoView _setupSlugContainerViewLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108d07bd0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 uVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 auStack_2f8 [8];
  undefined1 uStack_2f0;
  undefined1 auStack_2e8 [8];
  long lStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 **ppuStack_2c0;
  code *pcStack_2b8;
  long lStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 **ppuStack_250;
  code *pcStack_248;
  undefined *puStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long lStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  long lStack_1c8;
  undefined8 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar16 = (long)_DAT_11277afa4;
  uVar2 = *(undefined8 *)(param_1 + lVar16);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  uStack_88 = uVar2;
  func_0x00010c08e400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf493c0(0x4030800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar16);
  uStack_80 = uVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar3;
  func_0x00010bf493c0(0x404b000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar16);
  uStack_78 = uVar22;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bf49420(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_90);
  _objc_release(puVar5);
  _objc_release(uVar10);
  _objc_release(uVar4);
  _objc_release(uVar22);
  _objc_release(lVar21);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar17);
  _objc_release(uStack_88);
  lVar17 = (long)_DAT_11277afbc;
  if (*(long *)(param_1 + lVar17) == 0) {
    lVar6 = *(long *)(param_1 + _DAT_11277af98);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar6 = *(long *)(param_1 + lVar16);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar17);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar6;
    func_0x00010bf493c0(0x4022000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c162480();
  _objc_release(lVar16);
  _objc_release(uVar2);
  lVar20 = lVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_108d07e58;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_11277af94;
  uVar7 = *(undefined8 *)(lVar20 + lVar19);
  uStack_f0 = uVar10;
  uStack_e8 = uVar4;
  uStack_e0 = uVar22;
  lStack_d8 = lVar21;
  uStack_d0 = uVar3;
  puStack_c8 = puVar5;
  lStack_c0 = lVar17;
  lStack_b8 = lVar16;
  lStack_b0 = lVar6;
  uStack_a8 = uVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(lVar20 + _DAT_11277af84);
  func_0x00010c09cfc0();
  uVar22 = 0x403a000000000000;
  if (iVar1 == 0) {
    uVar22 = 0x4040000000000000;
  }
  uVar10 = uVar7;
  func_0x00010bf49420(uVar22);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11277afa8;
  uVar22 = *(undefined8 *)(lVar20 + lVar6);
  *(undefined8 *)(lVar20 + lVar6) = uVar10;
  _objc_release(uVar22);
  _objc_release(uVar7);
  puStack_120 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar16 = *(long *)(lVar20 + lVar19);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_11277afa4;
  uVar2 = *(undefined8 *)(lVar20 + lVar21);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(lVar20 + lVar19);
  lStack_118 = lVar17;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(lVar20 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar3;
  func_0x00010bf493c0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = *(undefined8 *)(lVar20 + lVar6);
  uVar7 = *(undefined8 *)(lVar20 + lVar19);
  uStack_110 = uVar22;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(lVar20 + lVar19);
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_100 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_120);
  _objc_release(puVar5);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar22);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar17);
  _objc_release(uVar2);
  lVar21 = lVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_108d08098;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar6 = (long)_DAT_11277af98;
  puVar9 = *(undefined **)(lVar21 + lVar6);
  uStack_180 = uVar10;
  uStack_178 = uVar7;
  uStack_170 = uVar22;
  uStack_168 = uVar4;
  uStack_160 = uVar3;
  puStack_158 = puVar5;
  lStack_150 = lVar17;
  uStack_148 = uVar8;
  uStack_140 = uVar2;
  lStack_138 = lVar16;
  ppuStack_130 = &puStack_a0;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = (undefined *)(long)_DAT_11277afa4;
  uVar10 = *(undefined8 *)(puVar18 + lVar21);
  func_0x00010c08e400(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf493c0(0x4044800000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(lVar21 + lVar6);
  puStack_198 = puVar11;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar18 + lVar21);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_190 = uVar22;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_1a8);
  _objc_release(puVar12);
  _objc_release(uVar22);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  puVar13 = *(undefined **)(lVar21 + _DAT_11277af84);
  func_0x00010bf5b940();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar13;
  func_0x00010c08fa60();
  puVar14 = puVar13;
  _objc_release();
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  if (puVar9 == (undefined *)0x0) {
    puVar9 = *(undefined **)(lVar21 + lVar6);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = *(long *)(puVar18 + lVar21);
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar9;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_1a0 = puVar18;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puVar5);
    _objc_release(puVar11);
    _objc_release(puVar18);
    _objc_release(lVar21);
    puVar14 = puVar9;
    _objc_release();
    puVar13 = puVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1b8 = FUN_108d082e4;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_238 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar20 = (long)_DAT_11277af9c;
  lVar16 = *(long *)(puVar14 + lVar20);
  lStack_210 = lVar6;
  puStack_208 = puVar12;
  uStack_200 = uVar22;
  uStack_1f8 = uVar3;
  uStack_1f0 = uVar2;
  puStack_1e8 = puVar11;
  puStack_1e0 = puVar18;
  puStack_1d8 = puVar9;
  puStack_1d0 = puVar13;
  lStack_1c8 = lVar21;
  ppuStack_1c0 = &ppuStack_130;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = (long)_DAT_11277af98;
  uVar2 = *(undefined8 *)(puVar14 + lVar21);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(puVar14 + lVar20);
  lStack_230 = lVar17;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(puVar14 + lVar21);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar3;
  func_0x00010bf493c0(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar14 + lVar20);
  uStack_228 = uVar22;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar14 + lVar21);
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_220 = uVar10;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar5;
  func_0x00010beef8c0(puStack_238);
  uVar15 = SUB81(puVar11,0);
  _objc_release(puVar5);
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar22);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar17);
  _objc_release(uVar2);
  lVar21 = lVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  pcStack_248 = FUN_108d084bc;
  lStack_298 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_11277afbc;
  lVar20 = *(long *)(lVar21 + lVar19);
  lVar6 = lVar20;
  uStack_290 = uVar22;
  uStack_288 = uVar8;
  uStack_280 = uVar4;
  puStack_278 = puVar5;
  uStack_270 = uVar3;
  lStack_268 = lVar17;
  uStack_260 = uVar2;
  lStack_258 = lVar16;
  ppuStack_250 = &ppuStack_1c0;
  if (lVar20 != 0) {
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(lVar21 + _DAT_11277afa4);
    func_0x00010bf348e0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar20;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(lVar21 + lVar19);
    lStack_2a8 = lVar17;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = *(long *)(lVar21 + _DAT_11277af98);
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar10;
    func_0x00010bf493c0(0x401c000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_2a0 = uVar22;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010beef8c0(puVar11);
    uVar15 = SUB81(puVar12,0);
    _objc_release(puVar5);
    _objc_release(uVar22);
    _objc_release(lVar21);
    _objc_release(uVar10);
    _objc_release(lVar17);
    _objc_release(uVar2);
    lVar6 = lVar20;
    _objc_release(lVar20);
    lVar16 = lVar20;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_298) {
    return;
  }
  ___stack_chk_fail();
  pcStack_2b8 = FUN_108d08638;
  puVar5 = PTR_PTR_1126ae790;
  lStack_2e0 = lVar21;
  lStack_2d8 = lVar17;
  uStack_2d0 = uVar2;
  lStack_2c8 = lVar16;
  ppuStack_2c0 = &ppuStack_250;
  func_0x00010bfcd0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_2e8,lVar6);
  _objc_copyWeak(auStack_2f8,auStack_2e8);
  uStack_2f0 = uVar15;
  _objc_retain(puVar5);
  func_0x00010c0f7fc0(puVar5);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_2f8);
  _objc_destroyWeak(auStack_2e8);
  _objc_release(puVar5);
  return;
}


