/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107f57cec; end: 107f57d53; +[SCMemTagsTagsLegacyInfo descriptor] */

void FUN_107f57cec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728620 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8c170,
                        &PTR____CFConstantStringClassReference_110ec82f8,
                        &PTR_s_snapchat_memories_11324bec0,&PTR_DAT_11324c038,3,0x18,0x1c);
    puRam0000000113728620 = puVar1;
  }
  return;
}



/* Entry: 107f57d54; end: 107f57dbb; +[SCMemTagsFaceTag descriptor] */

void FUN_107f57d54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8c1c0,
                        &PTR____CFConstantStringClassReference_110ec8318,
                        &PTR_s_snapchat_memories_11324bec0,&PTR_DAT_11324bed8,1,0x10,0x1c);
    puRam0000000113728628 = puVar1;
  }
  return;
}



/* Entry: 107f57dbc; end: 107f57e23; +[SCMemTagsDetectedFace descriptor] */

void FUN_107f57dbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8c210,
                        &PTR____CFConstantStringClassReference_110ec8338,
                        &PTR_s_snapchat_memories_11324bec0,&PTR_DAT_11324c098,6,0x20,0x1c);
    puRam0000000113728630 = puVar1;
  }
  return;
}



/* Entry: 107f57e24; end: 107f57e8b; +[SCMemTagsDetectedFaces descriptor] */

void FUN_107f57e24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728638 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8c260,
                        &PTR____CFConstantStringClassReference_110ec8358,
                        &PTR_s_snapchat_memories_11324bec0,&PTR_DAT_11324bef8,1,0x10,0x1c);
    puRam0000000113728638 = puVar1;
  }
  return;
}



/* Entry: 107f57e8c; end: 107f57f6f; +[SCMemTagsTagsParams descriptor] */

void FUN_107f57e8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113728640 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b8c2b0,
                        &PTR____CFConstantStringClassReference_110ec8378,
                        &PTR_s_snapchat_memories_11324bec0,&PTR_DAT_11324bf18,1,4,0x1c);
    puRam0000000113728640 = puVar1;
  }
  return;
}



/* Entry: 107f57f70; end: 107f57f7b;  */

bool FUN_107f57f70(uint param_1)

{
  return param_1 < 0xbb;
}



/* Entry: 107f57f7c; end: 107f587db;  */

void FUN_107f57f7c(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,long param_6,int param_7)

{
  long lVar1;
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
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_2;
  puVar14 = param_3;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    _objc_retain(param_3);
    param_4 = auStack_f0;
    param_5 = 0x10;
    puVar2 = param_3;
    func_0x00010bf52a60();
    lVar13 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        puVar16 = *(undefined **)((long)puVar14 * 8);
        puVar17 = PTR_PTR_1126bc7f8;
        func_0x00010bf35100();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d7bc0();
        func_0x00010c1d7be0(puVar17);
        puVar3 = param_1;
        func_0x00010c245780();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        puVar12 = puVar16;
        func_0x00010b704538();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c206280(param_1);
        _objc_release(puVar4);
        _objc_release(puVar16);
        _objc_release(puVar3);
        _objc_release(puVar17);
        puVar14 = puVar14 + 1;
      } while (puVar2 != puVar14);
      param_4 = auStack_f0;
      param_5 = 0x10;
      puVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    func_0x00010c12e3a0(param_1);
    puVar14 = param_3;
    func_0x00010c12caa0(param_1);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar17 = puVar12;
  puVar3 = puVar14;
  puVar4 = param_4;
  _objc_retain();
  _objc_retain(puVar12);
  _objc_retain(puVar14);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = param_4;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_4);
    puVar2 = param_4;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar2 != (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        puVar15 = *(undefined **)((long)puVar17 * 8);
        puVar3 = puVar15;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar15;
        func_0x00010bf6f520();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ce1e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar15 == (undefined *)0x0) {
          puVar6 = PTR_PTR_1126bf900;
          func_0x00010c2aec40();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010bf21f60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
        }
        else {
          _objc_retain(puVar15);
          puVar7 = puVar15;
        }
        _objc_release(puVar15);
        puVar15 = puVar3;
        FUN_107f587dc(puVar3,puVar4,puVar7,puVar14);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_2;
        func_0x00010bf59960();
        _objc_retainAutoreleasedReturnValue();
        if (puVar6 == (undefined *)0x0) {
LAB_107f583cc:
          if (param_7 != 0) {
            puVar6 = param_2;
            func_0x00010bf59960();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar6 != (undefined *)0x0) goto LAB_107f58418;
          }
          puVar6 = puVar3;
          func_0x00010bf59960(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c185360(param_2);
LAB_107f58410:
          _objc_release(puVar6);
        }
        else {
          puVar8 = puVar3;
          func_0x00010bf59960();
          _objc_retainAutoreleasedReturnValue();
          if (puVar8 == (undefined *)0x0) goto LAB_107f58410;
          puVar9 = puVar3;
          func_0x00010bf59960();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = param_2;
          func_0x00010bf59960(param_2);
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar9;
          func_0x00010bf433a0();
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          _objc_release(puVar6);
          if (puVar11 == (undefined *)0x1) goto LAB_107f583cc;
        }
LAB_107f58418:
        func_0x00010c247520(puVar15);
        func_0x00010bf977a0();
        puVar6 = puVar15;
        func_0x00010c0fd8c0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar16);
        _objc_release(puVar6);
        func_0x00010befa120(puVar5);
        puVar6 = param_2;
        func_0x00010c245780(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar3;
        func_0x00010c241220(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar6;
        func_0x00010b704538(puVar6,puVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c206280(param_2);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar6);
        _objc_release(puVar15);
        _objc_release(puVar7);
        _objc_release(puVar4);
        _objc_release(puVar3);
        puVar17 = puVar17 + 1;
      } while (puVar2 != puVar17);
      puVar2 = param_4;
      func_0x00010bf52a60();
    }
    _objc_release(param_4);
    func_0x00010c207320(param_2);
    puVar2 = puVar5;
    func_0x00010bf51e00(puVar5);
    func_0x00010c284fa0(param_2);
    _objc_release(puVar2);
    puVar2 = puVar5;
    func_0x00010bf51e00(puVar5);
    puVar17 = (undefined *)0x0;
    puVar3 = puVar2;
    func_0x00010b5fb890();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2062c0(param_2);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = puVar16;
    func_0x00010bf529e0();
    puVar15 = puVar16;
    if (puVar2 < (undefined *)0x2) {
      puVar2 = param_2;
      func_0x00010bf97200();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      puVar2 = PTR_PTR_1126af4c0;
      if (puVar3 != (undefined *)0x0) {
        puVar3 = param_2;
        func_0x00010bf97200(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfa70a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        if (puVar2 != (undefined *)0x0) {
          puVar3 = PTR_PTR_1126af4d0;
          func_0x00010bfa7380();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          _objc_release(puVar3);
        }
        _objc_release(puVar2);
      }
      func_0x00010c2827c0();
      puVar2 = puVar16;
      func_0x00010bf51e00();
      puVar6 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      func_0x00010bfed300();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      puVar4 = puVar6;
      func_0x00010c066e00(param_2);
      _objc_release(puVar6);
      _objc_release(puVar2);
      if (param_6 != 0x7fffffffffffffff) {
        func_0x00010bf51e00();
        puVar2 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
        func_0x00010bfed300();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar15;
        puVar4 = puVar2;
        func_0x00010c066880(param_2);
        goto LAB_107f58758;
      }
    }
    else {
      func_0x00010bf51e00();
      puVar2 = PTR__OBJC_CLASS___NSIndexSet_1126b6a48;
      func_0x00010bf529e0(puVar16);
      func_0x00010bfed320();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar15;
      puVar4 = puVar2;
      func_0x00010c066e00(param_2);
LAB_107f58758:
      _objc_release(puVar2);
      _objc_release(puVar15);
    }
    _objc_release(puVar5);
    _objc_release(puVar16);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar14);
  _objc_release(puVar12);
  param_1 = param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar13) {
    ___stack_chk_fail();
    _objc_retain(puVar3);
    param_1 = PTR_PTR_1126bc7f8;
    _objc_retain(puVar4);
    _objc_retain(puVar17);
    func_0x00010bf5a9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7000();
    func_0x00010c1d7bc0(param_1);
    _objc_release(puVar4);
    puVar12 = PTR_PTR_1126bf8e8;
    func_0x00010bf5a9e0(PTR_PTR_1126bf8e8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    puVar2 = puVar12;
    func_0x00010c0fd8e0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18c580(param_1);
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010c26da00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126bf8f0;
      func_0x00010bf5aa20(PTR_PTR_1126bf8f0);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar2;
      func_0x00010c0fd920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c8100(param_1);
      _objc_release(puVar14);
      _objc_release(puVar2);
    }
    _objc_release(puVar12);
    _objc_release(puVar3);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107f587dc; end: 107f5892b;  */

void FUN_107f587dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bc7f8;
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010bf5a9c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7000();
  func_0x00010c1d7bc0(puVar1);
  _objc_release(param_4);
  puVar2 = PTR_PTR_1126bf8e8;
  func_0x00010bf5a9e0(PTR_PTR_1126bf8e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar3 = puVar2;
  func_0x00010c0fd8e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18c580(puVar1);
  _objc_release(puVar3);
  lVar4 = param_3;
  func_0x00010c26da00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    puVar3 = PTR_PTR_1126bf8f0;
    func_0x00010bf5aa20(PTR_PTR_1126bf8f0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0fd920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8100(puVar1);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f5892c; end: 107f58a23;  */

void FUN_107f5892c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_6 != 0) {
    puVar1 = PTR_PTR_1126af4d0;
    func_0x00010bfa7380(PTR_PTR_1126af4d0);
    _objc_retainAutoreleasedReturnValue();
    FUN_107f57f7c(param_1,param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
  }
  func_0x000107f58168(param_1,param_3,param_4,param_5,0,0x7fffffffffffffff,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 107f58a24; end: 107f58db3;  */

undefined *
FUN_107f58a24(undefined *param_1,undefined *param_2,undefined *param_3,undefined8 param_4,
             ulong param_5,ulong param_6,long param_7,undefined8 param_8,undefined1 param_9)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar9 = param_6;
  func_0x00010bf529e0();
  if (uVar9 == 0) {
    puVar4 = param_3;
    func_0x000107f58168(param_1,param_3,param_4,param_5,param_7,param_8,param_9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  else {
    uVar9 = param_6;
    func_0x00010bf529e0();
    uVar1 = param_5;
    func_0x00010bf529e0();
    if ((param_7 == 0) && (uVar9 == uVar1)) {
      puVar2 = PTR_PTR_1126af4d0;
      func_0x00010bfa7380();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_6;
      func_0x00010bf529e0();
      if (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar1 = param_6;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bfb2040();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_5;
          if (puVar3 == (undefined *)0x0) {
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = param_3;
            func_0x000107f58168(param_1,param_3,param_4,puVar7,
                                &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cd228,param_8,param_9
                               );
            _objc_retainAutoreleasedReturnValue();
            puVar5 = param_1;
          }
          else {
            puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            FUN_107f57f7c(param_1,param_4,puVar4);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(puVar4);
            func_0x00010bfecde0(puVar2);
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df840();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = param_3;
            func_0x000107f58168(param_1,param_3,param_4,puVar7,puVar5,param_8,param_9);
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
          }
          _objc_release(puVar5);
          _objc_release(puVar7);
          _objc_release(uVar6);
          _objc_release(puVar3);
          _objc_release(uVar1);
          uVar9 = uVar9 + 1;
          uVar1 = param_6;
          func_0x00010bf529e0();
        } while (uVar9 < uVar1);
      }
      _objc_release(puVar2);
    }
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010c241220(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c0720c0();
  _objc_release(puVar4);
  return puVar2;
}



/* Entry: 107f58db4; end: 107f58dfb;  */

undefined8 FUN_107f58db4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c241220(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107f58dfc; end: 107f58f07; -[SCCloudSyncAddSnapEntity initWithDuplicateFromSnapId:snap:detail:miniThumbnail:] */

undefined1 *
FUN_107f58dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fbbb8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f58f08; end: 107f58f2b; -[SCCloudSyncAddSnapEntity copyWithZone:] */

undefined8 FUN_107f58f08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f58f2c; end: 107f5902b; -[SCCloudSyncAddSnapEntity initWithCoder:] */

undefined1 * FUN_107f58f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fbbb8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5902c; end: 107f590b3; -[SCCloudSyncAddSnapEntity encodeWithCoder:] */

void FUN_107f5902c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ec83b8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110dbddd8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110ec83d8);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ec83f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f590b4; end: 107f590bb; -[SCCloudSyncAddSnapEntity preferFasterCoding] */

undefined8 FUN_107f590b4(void)

{
  return 1;
}



/* Entry: 107f590bc; end: 107f59123; -[SCCloudSyncAddSnapEntity encodeWithFasterCoder:] */

void FUN_107f590bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010bf93000(param_3,param_2,uVar1);
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 8));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf93000(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f59124; end: 107f591d7; -[SCCloudSyncAddSnapEntity decodeWithFasterDecoder:] */

void FUN_107f59124(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010bf66fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107f591d8; end: 107f592b7; -[SCCloudSyncAddSnapEntity setObject:forUInt64Key:] */

void FUN_107f591d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_4 < 0x6c8e4f31ea3ba8) {
    if (param_4 == 0xd3e71ec580720) {
      lVar2 = 8;
    }
    else {
      if (param_4 != 0x4175e999d1a6cc) goto LAB_107f592a4;
      lVar2 = 0x10;
    }
  }
  else if (param_4 == 0x6c8e4f31ea3ba8) {
    lVar2 = 0x20;
  }
  else {
    if (param_4 != 0x8e3a1a921b246b) goto LAB_107f592a4;
    lVar2 = 0x18;
  }
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
LAB_107f592a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f592b8; end: 107f592cb; +[SCCloudSyncAddSnapEntity fasterCodingVersion] */

undefined8 FUN_107f592b8(void)

{
  return 0x3b214bc439854d8f;
}



/* Entry: 107f592cc; end: 107f592d7; +[SCCloudSyncAddSnapEntity fasterCodingKeys] */

undefined8 FUN_107f592cc(void)

{
  return 0x11324c258;
}



/* Entry: 107f592d8; end: 107f592f3; -[SCCloudSyncAddSnapEntity isEqual:] */

undefined8 * FUN_107f592d8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  
  plVar4 = (long *)0x113728658;
  if (param_1 == param_3) {
    return (undefined8 *)0x1;
  }
  lVar3 = 4;
  lVar5 = 4;
  _objc_opt_class();
  puVar2 = param_3;
  func_0x00010c077980();
  if ((int)puVar2 != 0) {
    if ((bRam0000000113728650 & 1) == 0) {
      puVar2 = param_1;
      _objc_opt_class();
      _class_copyIvarList();
      lVar7 = 0;
      puVar8 = puVar2;
      do {
        pcVar6 = (char *)*puVar8;
        pcVar1 = pcVar6;
        _ivar_getTypeEncoding();
        if (*pcVar1 == '@') {
          _ivar_getOffset();
          *(char **)(lVar7 * 8 + 0x113728658) = pcVar6;
          lVar7 = lVar7 + 1;
        }
        lVar5 = lVar5 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
      _free(puVar2);
      DataMemoryBarrier(2,3);
      bRam0000000113728650 = 1;
    }
    do {
      puVar2 = *(undefined8 **)((long)param_1 + *plVar4);
      if ((puVar2 != *(undefined8 **)((long)param_3 + *plVar4)) &&
         (func_0x00010c071ae0(), (int)puVar2 == 0)) {
        return puVar2;
      }
      lVar3 = lVar3 + -1;
      plVar4 = plVar4 + 1;
    } while (lVar3 != 0);
    puVar2 = (undefined8 *)0x1;
  }
  return puVar2;
}



/* Entry: 107f592f4; end: 107f59307; -[SCCloudSyncAddSnapEntity hash] */

ulong FUN_107f592f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  plVar5 = (long *)0x113728658;
  if ((bRam0000000113728650 & 1) == 0) {
    puVar1 = param_1;
    _objc_opt_class();
    _class_copyIvarList();
    lVar7 = 0;
    lVar9 = 4;
    puVar8 = puVar1;
    do {
      pcVar6 = (char *)*puVar8;
      pcVar2 = pcVar6;
      _ivar_getTypeEncoding();
      if (*pcVar2 == '@') {
        _ivar_getOffset();
        *(char **)(lVar7 * 8 + 0x113728658) = pcVar6;
        lVar7 = lVar7 + 1;
      }
      lVar9 = lVar9 + -1;
      puVar8 = puVar8 + 1;
    } while (lVar9 != 0);
    _free(puVar1);
    DataMemoryBarrier(2,3);
    bRam0000000113728650 = 1;
  }
  uVar3 = *(ulong *)((long)param_1 + lRam0000000113728658);
  func_0x00010bfde980(uVar3);
  lVar7 = 3;
  do {
    plVar5 = plVar5 + 1;
    uVar4 = *(ulong *)((long)param_1 + *plVar5);
    func_0x00010bfde980(uVar4);
    uVar4 = uVar4 | uVar3 << 0x20;
    uVar3 = ~uVar4 + uVar4 * 0x40000;
    uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
    uVar3 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
    uVar3 = uVar3 ^ uVar3 >> 0x16;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return uVar3;
}



/* Entry: 107f59308; end: 107f5930f; -[SCCloudSyncAddSnapEntity duplicateFromSnapId] */

undefined8 FUN_107f59308(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f59310; end: 107f59317; -[SCCloudSyncAddSnapEntity snap] */

undefined8 FUN_107f59310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f59318; end: 107f5931f; -[SCCloudSyncAddSnapEntity detail] */

undefined8 FUN_107f59318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f59320; end: 107f59327; -[SCCloudSyncAddSnapEntity miniThumbnail] */

undefined8 FUN_107f59320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f59328; end: 107f5936f; -[SCCloudSyncAddSnapEntity .cxx_destruct] */

void FUN_107f59328(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f59370; end: 107f5947f; +[SCCloudSyncAddSnapEntityBuilder withCloudSyncAddSnapEntity:] */

void FUN_107f59370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126d8368;
  _objc_retain(param_3);
  _objc_alloc_init();
  uVar2 = param_3;
  func_0x00010bf8b060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c23f220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf6f520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0ce1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107f59480; end: 107f594b3; -[SCCloudSyncAddSnapEntityBuilder build] */

void FUN_107f59480(void)

{
  _objc_alloc(PTR_PTR_1126d7f18);
  func_0x00010c00e960();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f594b4; end: 107f594eb; -[SCCloudSyncAddSnapEntityBuilder setDuplicateFromSnapId:] */

long FUN_107f594b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f594ec; end: 107f59523; -[SCCloudSyncAddSnapEntityBuilder setSnap:] */

long FUN_107f594ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f59524; end: 107f5955b; -[SCCloudSyncAddSnapEntityBuilder setDetail:] */

long FUN_107f59524(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f5955c; end: 107f59593; -[SCCloudSyncAddSnapEntityBuilder setMiniThumbnail:] */

long FUN_107f5955c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 107f59594; end: 107f595db; -[SCCloudSyncAddSnapEntityBuilder .cxx_destruct] */

void FUN_107f59594(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f595dc; end: 107f5966f; -[SCCloudSyncSnapUploadInfo initWithSnapId:uploadRequestInfo:] */

undefined1 *
FUN_107f595dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbbc0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c204680(puVar1);
    func_0x00010c21cf20(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f59670; end: 107f59677; -[SCCloudSyncSnapUploadInfo snapId] */

undefined8 FUN_107f59670(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f59678; end: 107f596a7; -[SCCloudSyncSnapUploadInfo setSnapId:] */

void FUN_107f59678(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107f596a8; end: 107f596af; -[SCCloudSyncSnapUploadInfo uploadRequestInfo] */

undefined8 FUN_107f596a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f596b0; end: 107f596df; -[SCCloudSyncSnapUploadInfo setUploadRequestInfo:] */

void FUN_107f596b0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107f596e0; end: 107f5970f; -[SCCloudSyncSnapUploadInfo .cxx_destruct] */

void FUN_107f596e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f59710; end: 107f59737;  */

undefined ** FUN_107f59710(long param_1)

{
  if (param_1 - 2U < 0xb) {
    return (undefined **)(&PTR_PTR_110a147f8)[param_1 - 2U];
  }
  return &PTR____CFConstantStringClassReference_110ec8438;
}



/* Entry: 107f59738; end: 107f59dab;  */

void FUN_107f59738(undefined8 param_1,undefined **param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *unaff_x22;
  undefined *puVar15;
  long lVar16;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined **ppuStack_2a0;
  undefined *puStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  undefined **ppuStack_278;
  long lStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined **ppuStack_250;
  undefined *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = param_2;
  uStack_258 = param_1;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  lStack_260 = param_3;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  puStack_268 = puVar1;
  _objc_retain(param_2);
  puVar11 = &uStack_1f0;
  ppuStack_278 = param_2;
  func_0x00010bf52a60();
  ppuStack_250 = param_2;
  if (param_2 != (undefined **)0x0) {
    lStack_270 = *plStack_1e0;
    ppuStack_250 = param_2;
    do {
      ppuVar12 = (undefined **)0x0;
      do {
        if (*plStack_1e0 != lStack_270) {
          _objc_enumerationMutation(ppuStack_278);
        }
        uVar13 = *(undefined8 *)(lStack_1e8 + (long)ppuVar12 * 8);
        uVar2 = uVar13;
        ppuStack_1f8 = ppuVar12;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        uStack_200 = uVar2;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lStack_260;
        uStack_208 = uVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar13;
        func_0x00010c23f220();
        _objc_retainAutoreleasedReturnValue();
        uStack_220 = uVar2;
        func_0x00010c241220();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uStack_258;
        uStack_228 = uVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        uStack_218 = uVar13;
        _objc_retain(uVar13);
        _objc_retain(lVar3);
        puVar15 = PTR_PTR_1126d8740;
        _objc_alloc();
        lVar5 = lVar3;
        func_0x00010bf16080(lVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar2 = uVar4;
        func_0x00010c0c6f20(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar2;
        func_0x00010c28ea80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078d80(puVar1);
        func_0x00010c019be0();
        puStack_238 = puVar15;
        _objc_release(uVar13);
        _objc_release(uVar2);
        _objc_release(lVar5);
        puVar15 = PTR_PTR_1126d8740;
        _objc_alloc();
        lVar5 = lVar3;
        func_0x00010c26d7c0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar2 = uVar4;
        func_0x00010c26e460(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar2;
        func_0x00010c28ea80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078d80(puVar1);
        func_0x00010c019be0();
        puStack_240 = puVar15;
        _objc_release(uVar13);
        _objc_release(uVar2);
        _objc_release(lVar5);
        puVar15 = PTR_PTR_1126d8740;
        _objc_alloc();
        lVar5 = lVar3;
        func_0x00010c0ef580(lVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar2 = uVar4;
        func_0x00010c0efe20(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar2;
        func_0x00010c28ea80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078d80(puVar1);
        func_0x00010c019be0();
        puStack_248 = puVar15;
        _objc_release(uVar13);
        _objc_release(uVar2);
        _objc_release(lVar5);
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        lVar5 = lVar3;
        func_0x00010bf0b280(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf529e0();
        func_0x00010bf0a0e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        uStack_230 = uVar4;
        func_0x00010bfc0e60(uVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = &PTR___NSConcreteGlobalBlock_110a147b8;
        uVar2 = uVar4;
        func_0x00010050471c();
        _objc_release(uVar4);
        uStack_188 = 0;
        uStack_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_198 = 0;
        plStack_1a0 = (long *)0x0;
        lStack_210 = lVar3;
        func_0x00010bf0b280();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010bf52a60();
        if (lVar5 != 0) {
          lVar14 = *plStack_1a0;
          do {
            lVar16 = 0;
            do {
              if (*plStack_1a0 != lVar14) {
                _objc_enumerationMutation(lVar3);
              }
              uVar4 = uVar2;
              func_0x00010c0e00e0(uVar2);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR_PTR_1126d8740;
              _objc_alloc(PTR_PTR_1126d8740);
              puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              uVar13 = uVar4;
              func_0x00010c28ea80(uVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c078d80(puVar15);
              func_0x00010c019be0(puVar6);
              _objc_release(uVar13);
              func_0x00010befa120(puVar1);
              _objc_release(puVar6);
              _objc_release(uVar4);
              lVar16 = lVar16 + 1;
            } while (lVar5 != lVar16);
            lVar5 = lVar3;
            func_0x00010bf52a60();
          } while (lVar5 != 0);
        }
        _objc_release(lVar3);
        puVar7 = PTR_PTR_1126d8748;
        _objc_alloc(PTR_PTR_1126d8748);
        puVar8 = puVar1;
        func_0x00010bf51e00(puVar1);
        uVar4 = uStack_218;
        puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        uVar13 = uStack_218;
        func_0x00010c23f220(uStack_218);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar13;
        func_0x00010bf8b0c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c078d80(puVar15);
        puVar6 = puStack_238;
        unaff_x22 = puStack_240;
        puVar15 = puStack_248;
        func_0x00010bff6de0(puVar7);
        _objc_release(uVar9);
        _objc_release(uVar13);
        _objc_release(puVar8);
        _objc_release(uVar2);
        _objc_release(puVar1);
        _objc_release(puVar15);
        _objc_release(unaff_x22);
        _objc_release(puVar6);
        lVar3 = lStack_210;
        _objc_release(lStack_210);
        _objc_release(uVar4);
        func_0x00010befa120(puStack_268);
        _objc_release(puVar7);
        _objc_release(uStack_230);
        _objc_release(uStack_228);
        _objc_release(uStack_220);
        _objc_release(lVar3);
        _objc_release(uStack_208);
        _objc_release(uStack_200);
        ppuVar12 = (undefined **)((long)ppuStack_1f8 + 1);
      } while (ppuVar12 != ppuStack_250);
      puVar11 = &uStack_1f0;
      ppuVar12 = ppuStack_278;
      func_0x00010bf52a60();
      ppuStack_250 = ppuVar12;
    } while (ppuVar12 != (undefined **)0x0);
  }
  ppuVar12 = ppuStack_278;
  _objc_release(ppuStack_278);
  puVar1 = puStack_268;
  puVar15 = puStack_268;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(lStack_260);
  _objc_release(ppuVar12);
  uVar2 = uStack_258;
  _objc_release(uStack_258);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puStack_2a8 = puVar1;
    ppuStack_2a0 = ppuVar12;
    pcStack_288 = FUN_107f59dac;
    puStack_2b0 = unaff_x22;
    puStack_298 = puVar15;
    puStack_290 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(ppuVar10);
    _objc_retain(puVar11);
    puStack_2d8 = &uStack_2e0;
    uStack_2e0 = 0;
    uStack_2d0 = 0x3032000000;
    pcStack_2c8 = FUN_107f59efc;
    uStack_2c0 = 0x107f59f0c;
    puStack_2b8 = PTR____NSArray0__struct_11034ab48;
    _objc_retain(ppuVar10);
    _objc_retain(puVar11);
    func_0x00010c0c09e0(uVar2);
    puVar15 = (undefined *)puStack_2d8[5];
    _objc_retain(puVar15);
    _objc_release(puVar11);
    _objc_release(ppuVar10);
    __Block_object_dispose(&uStack_2e0,8);
    _objc_release(puStack_2b8);
    _objc_release(puVar11);
    _objc_release(ppuVar10);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 107f59dac; end: 107f59efb;  */

void FUN_107f59dac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_107f59efc;
  uStack_40 = 0x107f59f0c;
  puStack_38 = PTR____NSArray0__struct_11034ab48;
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010c0c09e0(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107f59efc; end: 107f59f13;  */

void FUN_107f59efc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107f59f14; end: 107f59f5b;  */

void FUN_107f59f14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_107f59738(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107f59f5c; end: 107f59f8f;  */

void FUN_107f59f5c(void)

{
  return;
}



/* Entry: 107f59f90; end: 107f59fcb;  */

void FUN_107f59f90(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f59fcc; end: 107f59fd3;  */

void FUN_107f59fcc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0b270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_assetId_1125a0640);
  return;
}



/* Entry: 107f59fd4; end: 107f59ffb;  */

void FUN_107f59fd4(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107f59ffc; end: 107f5a007; -[SCCloudSyncServices .cxx_destruct] */

void FUN_107f59ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5a008; end: 107f5a183; -[SCCloudSyncStatusListenerAnnouncer description] */

void FUN_107f5a008(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plStack_60;
  long *plStack_58;
  
  FUN_107f5a184(&plStack_60,param_1 + 0x48);
  puVar4 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0();
  lVar5 = *plStack_60;
  if (plStack_60[1] != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = lVar5 + lVar6;
      _objc_loadWeakRetained();
      if (lVar5 != 0) {
        func_0x00010bf06ba0(puVar4);
        if (uVar7 != (plStack_60[1] - *plStack_60 >> 3) - 1U) {
          func_0x00010bf070e0(puVar4);
        }
      }
      _objc_release(lVar5);
      uVar7 = uVar7 + 1;
      lVar5 = *plStack_60;
      lVar6 = lVar6 + 8;
    } while (uVar7 < (ulong)(plStack_60[1] - lVar5 >> 3));
  }
  func_0x00010bf070e0(puVar4);
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107f5a184; end: 107f5a1e3;  */

void FUN_107f5a184(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_2;
  __ZNSt3__112__get_sp_mutEPKv(param_2);
  __ZNSt3__18__sp_mut4lockEv();
  lVar5 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__18__sp_mut6unlockEv_1103468c8)(puVar4);
  return;
}



/* Entry: 107f5a1e4; end: 107f5a413; -[SCCloudSyncStatusListenerAnnouncer removeListener:] */

void FUN_107f5a1e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  _objc_retain(param_3);
  __ZNSt3__15mutex4lockEv(param_1 + 8);
  puVar8 = (undefined8 *)(param_1 + 0x48);
  plVar6 = (long *)*puVar8;
  if (plVar6 == (long *)0x0) goto LAB_107f5a398;
  lVar7 = *plVar6;
  if (plVar6[1] - lVar7 == 8) {
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar7 != param_3) goto LAB_107f5a24c;
    uStack_70 = 0;
    plStack_68 = (long *)0x0;
    func_0x000100b89228(puVar8,&uStack_70);
    if (plStack_68 == (long *)0x0) goto LAB_107f5a398;
    plVar6 = plStack_68 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_68;
    } while (cVar2 != '\0');
  }
  else {
LAB_107f5a24c:
    plVar6 = (long *)0x30;
    __Znwm();
    plVar10 = plVar6 + 1;
    *plVar10 = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110a148a0;
    plVar9 = plVar6 + 3;
    *plVar9 = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    lVar1 = ((long *)*puVar8)[1];
    plStack_80 = plVar9;
    plStack_78 = plVar6;
    for (lVar7 = *(long *)*puVar8; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = lVar7;
      _objc_loadWeakRetained();
      if (lVar4 != 0) {
        lVar5 = lVar7;
        _objc_loadWeakRetained();
        _objc_release();
        _objc_release(lVar4);
        if (lVar5 != param_3) {
          func_0x000100b890e8(plVar9,lVar7);
        }
      }
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = *plVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_90 = plVar9;
    plStack_88 = plVar6;
    func_0x000100b89228(puVar8,&plStack_90);
    plVar6 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar9 = plStack_88 + 1;
      do {
        lVar7 = *plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *plVar9 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_107f5a398;
    plVar6 = plStack_78 + 1;
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plVar9 = plStack_78;
    } while (cVar2 != '\0');
  }
  if (lVar7 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
  }
LAB_107f5a398:
  __ZNSt3__15mutex6unlockEv(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f5a414; end: 107f5a54b; -[SCCloudSyncStatusListenerAnnouncer cloudSync:didUpdateProgressForEntryId:progress:] */

void FUN_107f5a414(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_60;
  long *plStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  FUN_107f5a184(&puStack_60,param_2 + 0x48);
  if (puStack_60 != (ulong *)0x0) {
    uVar3 = puStack_60[1];
    for (uVar2 = *puStack_60; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf3e3a0(param_1,uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 107f5a54c; end: 107f5a653; -[SCCloudSyncStatusListenerAnnouncer cloudSyncDidMutateBackupOperationIsDuringSync:hasMoreResponses:] */

void FUN_107f5a54c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_50;
  long *plStack_48;
  
  FUN_107f5a184(&puStack_50,param_1 + 0x48);
  if (puStack_50 != (ulong *)0x0) {
    uVar3 = puStack_50[1];
    for (uVar2 = *puStack_50; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf3e4e0(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_48);
      return;
    }
  }
  return;
}



/* Entry: 107f5a654; end: 107f5a7ab; -[SCCloudSyncStatusListenerAnnouncer cloudSync:didChangeEntrySyncStatus:entryId:snapId:] */

void FUN_107f5a654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong *puStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  FUN_107f5a184(&puStack_60,param_1 + 0x48);
  if (puStack_60 != (ulong *)0x0) {
    uVar3 = puStack_60[1];
    for (uVar2 = *puStack_60; uVar2 != uVar3; uVar2 = uVar2 + 8) {
      uVar6 = uVar2;
      _objc_loadWeakRetained();
      uVar7 = uVar6;
      _objc_opt_respondsToSelector();
      if ((uVar7 & 1) != 0) {
        func_0x00010bf3e360(uVar6);
      }
      _objc_release(uVar6);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f5a7ac; end: 107f5a8bf; -[SCCloudSyncStatusListenerAnnouncer cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:] */

void FUN_107f5a7ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plStack_60;
  long *plStack_58;
  
  _objc_retain(param_3);
  FUN_107f5a184(&plStack_60,param_1 + 0x48);
  if (plStack_60 != (long *)0x0) {
    lVar2 = plStack_60[1];
    for (lVar6 = *plStack_60; lVar6 != lVar2; lVar6 = lVar6 + 8) {
      lVar5 = lVar6;
      _objc_loadWeakRetained(lVar6);
      func_0x00010bf3e380();
      _objc_release(lVar5);
    }
  }
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f5a8c0; end: 107f5a8e7; -[SCCloudSyncStatusListenerAnnouncer .cxx_destruct] */

void FUN_107f5a8c0(long param_1)

{
  FUN_107f5a8fc(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 8);
  return;
}



/* Entry: 107f5a8e8; end: 107f5a8fb;  */

undefined * FUN_107f5a8e8(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar4 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar6 = *(long **)(puVar4 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return puVar4;
}



/* Entry: 107f5a8fc; end: 107f5a953;  */

long FUN_107f5a8fc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 107f5a954; end: 107f5a963;  */

void FUN_107f5a954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a148a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107f5a964; end: 107f5a983;  */

void FUN_107f5a964(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a148a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107f5a984; end: 107f5a9eb;  */

void FUN_107f5a984(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 107f5a9ec; end: 107f5a9ef;  */

void FUN_107f5a9ec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107f5a9f0; end: 107f5aa5b; +[SCCloudSyncAddSnapsResult networkFailureWithError:] */

void FUN_107f5a9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8470;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f5aa5c; end: 107f5aac7; +[SCCloudSyncAddSnapsResult parseResponseFailureWithError:] */

void FUN_107f5aa5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8470;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f5aac8; end: 107f5ab7f; +[SCCloudSyncAddSnapsResult serverFailureWithSnapResults:debugInfo:backoffTimeValue:serviceStatusCodeEnum:] */

void FUN_107f5aac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126d8470;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f5ab80; end: 107f5abe3; +[SCCloudSyncAddSnapsResult successWithUploadRequestInfoMap:] */

void FUN_107f5ab80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8470;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107f5abe4; end: 107f5ac07; -[SCCloudSyncAddSnapsResult copyWithZone:] */

undefined8 FUN_107f5abe4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5ac08; end: 107f5ac4b; -[SCCloudSyncAddSnapsResult internalInit] */

void FUN_107f5ac08(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fbbd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107f5ac4c; end: 107f5ad47; -[SCCloudSyncAddSnapsResult matchSuccess:serverFailure:networkFailure:parseResponseFailure:] */

void FUN_107f5ac4c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 != 0) {
      if ((lVar2 == 1) && (param_4 != 0)) {
        (**(code **)(param_4 + 0x10))
                  (*(undefined8 *)(param_1 + 0x28),param_4,*(undefined8 *)(param_1 + 0x18),
                   *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
      }
      goto LAB_107f5ad18;
    }
    if (param_3 == 0) goto LAB_107f5ad18;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar2 = param_3;
  }
  else if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_107f5ad18;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if ((lVar2 != 3) || (param_6 == 0)) goto LAB_107f5ad18;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    pcVar3 = *(code **)(param_6 + 0x10);
    lVar2 = param_6;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_107f5ad18:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107f5ad48; end: 107f5ad9b; -[SCCloudSyncAddSnapsResult .cxx_destruct] */

void FUN_107f5ad48(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f5ad9c; end: 107f5aed3; -[SCCloudSyncDedupeSnapsComparisonResult initWithClientDedupedSnapIds:serverDedupedSnapIds:clientDedupedSnapIdsDiscrepancy:serverDedupedSnapIdsDiscrepancy:mutualDedupedSnapIds:] */

undefined1 *
FUN_107f5ad9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126fbbd8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5aed4; end: 107f5aef7; -[SCCloudSyncDedupeSnapsComparisonResult copyWithZone:] */

undefined8 FUN_107f5aed4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5aef8; end: 107f5aeff; -[SCCloudSyncDedupeSnapsComparisonResult clientDedupedSnapIds] */

undefined8 FUN_107f5aef8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f5af00; end: 107f5af07; -[SCCloudSyncDedupeSnapsComparisonResult serverDedupedSnapIds] */

undefined8 FUN_107f5af00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5af08; end: 107f5af0f; -[SCCloudSyncDedupeSnapsComparisonResult clientDedupedSnapIdsDiscrepancy] */

undefined8 FUN_107f5af08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f5af10; end: 107f5af17; -[SCCloudSyncDedupeSnapsComparisonResult serverDedupedSnapIdsDiscrepancy] */

undefined8 FUN_107f5af10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107f5af18; end: 107f5af1f; -[SCCloudSyncDedupeSnapsComparisonResult mutualDedupedSnapIds] */

undefined8 FUN_107f5af18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107f5af20; end: 107f5af73; -[SCCloudSyncDedupeSnapsComparisonResult .cxx_destruct] */

void FUN_107f5af20(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5af74; end: 107f5b01f; -[SCCloudSyncDedupeSnapsResult initWithNotUploadedSnapIds:uploadedSnapIds:] */

undefined1 *
FUN_107f5af74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbbe0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5b020; end: 107f5b043; -[SCCloudSyncDedupeSnapsResult copyWithZone:] */

undefined8 FUN_107f5b020(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5b044; end: 107f5b04b; -[SCCloudSyncDedupeSnapsResult notUploadedSnapIds] */

undefined8 FUN_107f5b044(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f5b04c; end: 107f5b053; -[SCCloudSyncDedupeSnapsResult uploadedSnapIds] */

undefined8 FUN_107f5b04c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5b054; end: 107f5b083; -[SCCloudSyncDedupeSnapsResult .cxx_destruct] */

void FUN_107f5b054(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5b084; end: 107f5b137; -[SCCloudSyncUpdateEntryWithEntryAssetsResult initWithSuccess:entrySeqNumDict:error:] */

undefined1 *
FUN_107f5b084(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fbbe8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5b138; end: 107f5b15b; -[SCCloudSyncUpdateEntryWithEntryAssetsResult copyWithZone:] */

undefined8 FUN_107f5b138(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5b15c; end: 107f5b163; -[SCCloudSyncUpdateEntryWithEntryAssetsResult success] */

undefined1 FUN_107f5b15c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107f5b164; end: 107f5b16b; -[SCCloudSyncUpdateEntryWithEntryAssetsResult entrySeqNumDict] */

undefined8 FUN_107f5b164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107f5b16c; end: 107f5b173; -[SCCloudSyncUpdateEntryWithEntryAssetsResult error] */

undefined8 FUN_107f5b16c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107f5b174; end: 107f5b1a3; -[SCCloudSyncUpdateEntryWithEntryAssetsResult .cxx_destruct] */

void FUN_107f5b174(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107f5b1a4; end: 107f5b21b; -[SCCloudSyncMediaTranscodingResult initWithSnapIdToTranscodedBaseMediaOutputMap:] */

undefined1 * FUN_107f5b1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fbbf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5b21c; end: 107f5b23f; -[SCCloudSyncMediaTranscodingResult copyWithZone:] */

undefined8 FUN_107f5b21c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5b240; end: 107f5b247; -[SCCloudSyncMediaTranscodingResult snapIdToTranscodedBaseMediaOutputMap] */

undefined8 FUN_107f5b240(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f5b248; end: 107f5b253; -[SCCloudSyncMediaTranscodingResult .cxx_destruct] */

void FUN_107f5b248(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107f5b254; end: 107f5b2ff; -[SCCloudSyncSnapTranscodingOutput initWithFileURL:fileAttrs:] */

undefined1 *
FUN_107f5b254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fbbf8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107f5b300; end: 107f5b323; -[SCCloudSyncSnapTranscodingOutput copyWithZone:] */

undefined8 FUN_107f5b300(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 107f5b324; end: 107f5b32b; -[SCCloudSyncSnapTranscodingOutput fileURL] */

undefined8 FUN_107f5b324(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107f5b32c; end: 107f5b333; -[SCCloudSyncSnapTranscodingOutput fileAttrs] */

undefined8 FUN_107f5b32c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


