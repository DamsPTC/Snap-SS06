/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107dc4288; end: 107dc43e3; -[SCOperaArrowLayer isEqual:] */

bool FUN_107dc4288(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  
  _objc_retain(param_4);
  puVar3 = param_4;
  _objc_opt_class();
  puVar5 = PTR_PTR_1126d6908;
  _objc_opt_class();
  if (puVar3 != puVar5) {
    bVar2 = false;
    goto LAB_107dc43c0;
  }
  if (param_2 == param_4) {
    bVar2 = true;
    goto LAB_107dc43c0;
  }
  _objc_retain(param_4);
  puVar5 = *(undefined **)(param_2 + 0x10);
  puVar3 = param_4;
  func_0x00010bf7f0e0();
  if (puVar5 == puVar3) {
    puVar5 = *(undefined **)(param_2 + 0x20);
    puVar3 = param_4;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar3);
    if (puVar5 == puVar3) {
      _objc_release(puVar3);
      _objc_release(puVar5);
LAB_107dc4378:
      dVar6 = *(double *)(param_2 + 0x18);
      func_0x00010c0e8ca0(param_4);
      if (dVar6 != param_1) goto LAB_107dc43ac;
      bVar1 = param_2[8];
      puVar5 = param_4;
      func_0x00010bfd7840(param_4);
      bVar2 = (uint)bVar1 == (uint)puVar5;
    }
    else {
      if (puVar3 == (undefined *)0x0) {
        _objc_release(puVar5);
      }
      else {
        puVar4 = puVar5;
        func_0x00010c071ae0(puVar5,param_3,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar5);
        if ((int)puVar4 != 0) goto LAB_107dc4378;
      }
LAB_107dc43ac:
      bVar2 = false;
    }
    _objc_release(puVar3);
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_4);
LAB_107dc43c0:
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 107dc43e4; end: 107dc43eb; -[SCOperaArrowLayer direction] */

undefined8 FUN_107dc43e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dc43ec; end: 107dc43f3; -[SCOperaArrowLayer hasGradient] */

undefined1 FUN_107dc43ec(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dc43f4; end: 107dc43fb; -[SCOperaArrowLayer opacity] */

undefined8 FUN_107dc43f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dc43fc; end: 107dc4403; -[SCOperaArrowLayer text] */

undefined8 FUN_107dc43fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dc4404; end: 107dc440f; -[SCOperaArrowLayer .cxx_destruct] */

void FUN_107dc4404(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 107dc4410; end: 107dc445b; +[SCOperaChromeLayer layerWithPage:] */

void FUN_107dc4410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6938;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc445c; end: 107dc4c4b; -[SCOperaChromeLayer initWithPage:] */

undefined1 * FUN_107dc445c(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  double dVar8;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR_PTR_1126fb170;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x18);
    *(ulong *)((long)puVar2 + 0x18) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x68);
    *(ulong *)((long)puVar2 + 0x68) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x20);
    *(ulong *)((long)puVar2 + 0x20) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x28);
    *(ulong *)((long)puVar2 + 0x28) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x30);
    *(ulong *)((long)puVar2 + 0x30) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x38);
    *(ulong *)((long)puVar2 + 0x38) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar7);
    *(undefined1 *)((long)puVar2 + 9) = 0;
    *(undefined8 *)((long)puVar2 + 0x40) = 0;
    *(undefined8 *)((long)puVar2 + 0x48) = 0;
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 == 0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)puVar2 + 0x50);
      *(undefined **)((long)puVar2 + 0x50) = puVar4;
    }
    else {
      _objc_retain(uVar7);
      uVar6 = *(undefined8 *)((long)puVar2 + 0x50);
      *(ulong *)((long)puVar2 + 0x50) = uVar7;
    }
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 == 0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)puVar2 + 0x58);
      *(undefined **)((long)puVar2 + 0x58) = puVar4;
    }
    else {
      _objc_retain(uVar7);
      uVar6 = *(undefined8 *)((long)puVar2 + 0x58);
      *(ulong *)((long)puVar2 + 0x58) = uVar7;
    }
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 == 0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)((long)puVar2 + 0x60);
      *(undefined **)((long)puVar2 + 0x60) = puVar4;
    }
    else {
      _objc_retain(uVar7);
      uVar6 = *(undefined8 *)((long)puVar2 + 0x60);
      *(ulong *)((long)puVar2 + 0x60) = uVar7;
    }
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 10) = (char)uVar3;
    _objc_release(uVar7);
    if ((*(byte *)((long)puVar2 + 10) & 1) == 0) {
      uVar7 = *(ulong *)((long)puVar2 + 0x80);
      *(undefined8 *)((long)puVar2 + 0x80) = 0;
    }
    else {
      uVar7 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)((long)puVar2 + 0x80);
      *(ulong *)((long)puVar2 + 0x80) = uVar3;
      _objc_release(uVar6);
    }
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0xb) = (char)uVar3;
    _objc_release(uVar7);
    _objc_storeWeak((undefined1 *)((long)puVar2 + 0xc0),param_4);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0xd) = (char)uVar3;
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0xe) = (char)uVar3;
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x70);
    *(ulong *)((long)puVar2 + 0x70) = uVar7;
    _objc_release(uVar6);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 == 0) {
      *(undefined8 *)((long)puVar2 + 0x78) = 0;
    }
    else {
      uVar3 = uVar1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c2827c0();
      *(ulong *)((long)puVar2 + 0x78) = uVar5;
      _objc_release(uVar3);
    }
    _objc_release(uVar7);
    *(undefined8 *)((long)puVar2 + 0x88) = 0x404e000000000000;
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x90);
    *(ulong *)((long)puVar2 + 0x90) = uVar7;
    _objc_release(uVar6);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x98);
    *(ulong *)((long)puVar2 + 0x98) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + 0xa0);
    *(ulong *)((long)puVar2 + 0xa0) = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0x10) = (char)uVar3;
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + 0xf) = (char)uVar3;
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 == 0) {
      *(undefined8 *)((long)puVar2 + 0xa8) = 0;
    }
    else {
      uVar3 = uVar1;
      func_0x00010c0e00e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar8 = (double)param_1;
      *(double *)((long)puVar2 + 0xa8) = dVar8;
      _objc_release(uVar3);
      param_1 = SUB84(dVar8,0);
    }
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 == 0) {
      *(undefined8 *)((long)puVar2 + 0xb0) = 0;
    }
    else {
      uVar3 = uVar1;
      func_0x00010c0e00e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar8 = (double)param_1;
      *(double *)((long)puVar2 + 0xb0) = dVar8;
      _objc_release(uVar3);
      param_1 = SUB84(dVar8,0);
    }
    _objc_release(uVar7);
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar7 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar3);
    uVar3 = uVar7;
    func_0x00010bf1f3c0();
    _objc_release(uVar7);
    *(char *)((long)puVar2 + 0x11) = (char)uVar3;
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar7 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar3);
    func_0x00010bfb2c80(uVar7);
    _objc_release(uVar7);
    *(double *)((long)puVar2 + 0xb8) = (double)param_1;
    uVar3 = uVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar7 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar3);
    uVar3 = uVar7;
    func_0x00010bf1f3c0();
    _objc_release(uVar7);
    *(char *)((long)puVar2 + 0x13) = (char)uVar3;
    *(bool *)((long)puVar2 + 0x12) = 0.0 < *(double *)((long)puVar2 + 0xb8);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  return (undefined1 *)puVar2;
}



/* Entry: 107dc4c4c; end: 107dc4c53; -[SCOperaChromeLayer type] */

undefined8 FUN_107dc4c4c(void)

{
  return 0x10;
}



/* Entry: 107dc4c54; end: 107dc5163; -[SCOperaChromeLayer isEqual:] */

bool FUN_107dc4c54(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  byte bVar1;
  bool bVar2;
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
  undefined8 uVar17;
  undefined *puVar18;
  int iVar19;
  double dVar20;
  
  _objc_retain(param_4);
  puVar3 = param_4;
  _objc_opt_class();
  puVar15 = PTR_PTR_1126d6938;
  _objc_opt_class();
  if (puVar3 != puVar15) {
    bVar2 = false;
    goto LAB_107dc509c;
  }
  if (param_2 == param_4) {
    bVar2 = true;
    goto LAB_107dc509c;
  }
  _objc_retain(param_4);
  puVar15 = *(undefined **)(param_2 + 0x18);
  puVar3 = param_4;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar15);
  _objc_retain(puVar3);
  if (puVar15 == puVar3) {
    _objc_release(puVar3);
    _objc_release(puVar15);
LAB_107dc4d38:
    puVar16 = *(undefined **)(param_2 + 0x28);
    puVar15 = param_4;
    func_0x00010c2709c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar16);
    _objc_retain(puVar15);
    if (puVar16 == puVar15) {
      _objc_release(puVar15);
      _objc_release(puVar16);
LAB_107dc4da4:
      bVar1 = param_2[8];
      puVar16 = param_4;
      func_0x00010bf9fa20();
      if (((((uint)bVar1 != (uint)puVar16) ||
           (dVar20 = *(double *)(param_2 + 0x40), func_0x00010bf9f620(param_4), dVar20 != param_1))
          || (bVar1 = param_2[9], puVar16 = param_4, func_0x00010bf9f680(),
             (uint)bVar1 != (uint)puVar16)) ||
         (dVar20 = *(double *)(param_2 + 0x48), func_0x00010bf9f640(param_4), dVar20 != param_1))
      goto LAB_107dc5070;
      uVar17 = *(undefined8 *)(param_2 + 0x50);
      puVar16 = param_4;
      func_0x00010bf85e40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bd86de8(uVar17,puVar16);
      if ((int)uVar17 == 0) goto LAB_107dc5078;
      uVar17 = *(undefined8 *)(param_2 + 0x60);
      puVar4 = param_4;
      func_0x00010c270a00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bd86de8(uVar17,puVar4);
      if ((((int)uVar17 == 0) ||
          (bVar1 = param_2[10], puVar5 = param_4, func_0x00010bfd7840(), (uint)bVar1 != (uint)puVar5
          )) || (bVar1 = param_2[0xb], puVar5 = param_4, func_0x00010bfdbf60(),
                (uint)bVar1 != (uint)puVar5)) {
        bVar2 = false;
      }
      else {
        uVar17 = *(undefined8 *)(param_2 + 0x68);
        puVar5 = param_4;
        func_0x00010bf85f40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar17,puVar5);
        if (((int)uVar17 == 0) ||
           (puVar18 = *(undefined **)(param_2 + 0x78), puVar6 = param_4, func_0x00010bfdef00(),
           puVar18 != puVar6)) {
          bVar2 = false;
        }
        else {
          uVar17 = *(undefined8 *)(param_2 + 0x80);
          puVar6 = param_4;
          func_0x00010bfcd840(param_4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bd86de8(uVar17,puVar6);
          if (((int)uVar17 == 0) ||
             (dVar20 = *(double *)(param_2 + 0x88), func_0x00010bfcd980(param_4), dVar20 != param_1)
             ) {
            bVar2 = false;
          }
          else {
            uVar17 = *(undefined8 *)(param_2 + 0x90);
            puVar18 = param_4;
            func_0x00010bfe5c40(param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bd86de8(uVar17,puVar18);
            if ((int)uVar17 == 0) {
              bVar2 = false;
            }
            else {
              iVar19 = (int)*(undefined8 *)(param_2 + 0x98);
              puVar7 = param_4;
              func_0x00010bfe5c60();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bd86de8();
              if (iVar19 == 0) {
                bVar2 = false;
              }
              else {
                iVar19 = (int)*(undefined8 *)(param_2 + 0xa0);
                puVar8 = param_4;
                func_0x00010bfe5700();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bd86de8();
                if ((((iVar19 == 0) ||
                     (dVar20 = *(double *)(param_2 + 0xb0), func_0x00010c140ce0(param_4),
                     dVar20 != param_1)) ||
                    (dVar20 = *(double *)(param_2 + 0xa8), func_0x00010c2bec60(param_4),
                    dVar20 != param_1)) ||
                   (bVar1 = param_2[0x11], puVar9 = param_4, func_0x00010c08ce40(),
                   (uint)bVar1 != (uint)puVar9)) {
                  bVar2 = false;
                }
                else {
                  puVar9 = param_2;
                  func_0x00010c0f0be0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = puVar9;
                  func_0x00010c1070e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = param_4;
                  func_0x00010c0f0be0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar12 = puVar11;
                  func_0x00010c1070e0();
                  _objc_retainAutoreleasedReturnValue();
                  puVar13 = puVar10;
                  func_0x00010bd86de8();
                  if (((int)puVar13 == 0) ||
                     (bVar1 = param_2[0xf], puVar13 = param_4, func_0x00010c237ca0(),
                     (uint)bVar1 != (uint)puVar13)) {
                    bVar2 = false;
                  }
                  else {
                    iVar19 = (int)*(undefined8 *)(param_2 + 0x30);
                    puVar13 = param_4;
                    func_0x00010befe520();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bd86de8();
                    if (((iVar19 == 0) ||
                        (bVar1 = param_2[0x12], puVar14 = param_4, func_0x00010c07b480(),
                        (uint)bVar1 != (uint)puVar14)) ||
                       (dVar20 = *(double *)(param_2 + 0xb8), func_0x00010c2747c0(param_4),
                       dVar20 != param_1)) {
                      bVar2 = false;
                    }
                    else {
                      bVar1 = param_2[0x13];
                      puVar14 = param_4;
                      func_0x00010bf021e0(param_4);
                      bVar2 = (uint)bVar1 == (uint)puVar14;
                    }
                    _objc_release(puVar13);
                  }
                  _objc_release(puVar12);
                  _objc_release(puVar11);
                  _objc_release(puVar10);
                  _objc_release(puVar9);
                }
                _objc_release(puVar8);
              }
              _objc_release(puVar7);
            }
            _objc_release(puVar18);
          }
          _objc_release(puVar6);
        }
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
    }
    else {
      if (puVar15 != (undefined *)0x0) {
        puVar4 = puVar16;
        func_0x00010c071ae0();
        _objc_release(puVar15);
        _objc_release(puVar16);
        if ((int)puVar4 == 0) goto LAB_107dc5070;
        goto LAB_107dc4da4;
      }
LAB_107dc5078:
      bVar2 = false;
    }
    _objc_release(puVar16);
LAB_107dc5084:
    _objc_release(puVar15);
  }
  else {
    if (puVar3 == (undefined *)0x0) {
LAB_107dc5070:
      bVar2 = false;
      goto LAB_107dc5084;
    }
    puVar16 = puVar15;
    func_0x00010c071ae0();
    _objc_release(puVar3);
    _objc_release(puVar15);
    if ((int)puVar16 != 0) goto LAB_107dc4d38;
    bVar2 = false;
  }
  _objc_release(puVar3);
  _objc_release(param_4);
LAB_107dc509c:
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 107dc5164; end: 107dc516b; -[SCOperaChromeLayer displayName] */

undefined8 FUN_107dc5164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dc516c; end: 107dc5173; -[SCOperaChromeLayer additionalDisplayName] */

undefined8 FUN_107dc516c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107dc5174; end: 107dc517b; -[SCOperaChromeLayer timestamp] */

undefined8 FUN_107dc5174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107dc517c; end: 107dc5183; -[SCOperaChromeLayer advertisingDisclaimer] */

undefined8 FUN_107dc517c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107dc5184; end: 107dc518b; -[SCOperaChromeLayer timestampUnderlineRange] */

undefined8 FUN_107dc5184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107dc518c; end: 107dc5193; -[SCOperaChromeLayer fadesOnDidFullyAppear] */

undefined1 FUN_107dc518c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107dc5194; end: 107dc519b; -[SCOperaChromeLayer fadeInEnabled] */

undefined1 FUN_107dc5194(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107dc519c; end: 107dc51a3; -[SCOperaChromeLayer fadeInDelay] */

undefined8 FUN_107dc519c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107dc51a4; end: 107dc51ab; -[SCOperaChromeLayer fadeInDuration] */

undefined8 FUN_107dc51a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107dc51ac; end: 107dc51b3; -[SCOperaChromeLayer displayNameColor] */

undefined8 FUN_107dc51ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 107dc51b4; end: 107dc51bb; -[SCOperaChromeLayer additionalDisplayNameColor] */

undefined8 FUN_107dc51b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 107dc51bc; end: 107dc51c3; -[SCOperaChromeLayer timestampColor] */

undefined8 FUN_107dc51bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 107dc51c4; end: 107dc51cb; -[SCOperaChromeLayer displayNameIconImageName] */

undefined8 FUN_107dc51c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 107dc51cc; end: 107dc51d3; -[SCOperaChromeLayer displayNameFont] */

undefined8 FUN_107dc51cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 107dc51d4; end: 107dc51db; -[SCOperaChromeLayer hasGradient] */

undefined1 FUN_107dc51d4(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107dc51dc; end: 107dc51e3; -[SCOperaChromeLayer hasShadow] */

undefined1 FUN_107dc51dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107dc51e4; end: 107dc51eb; -[SCOperaChromeLayer fadeOutOnTransition] */

undefined1 FUN_107dc51e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107dc51ec; end: 107dc51f3; -[SCOperaChromeLayer includeInShare] */

undefined1 FUN_107dc51ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 107dc51f4; end: 107dc51fb; -[SCOperaChromeLayer fadeOutSubtitleOnTransition] */

undefined1 FUN_107dc51f4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 107dc51fc; end: 107dc5203; -[SCOperaChromeLayer hdState] */

undefined8 FUN_107dc51fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 107dc5204; end: 107dc520b; -[SCOperaChromeLayer gradientAlphaArray] */

undefined8 FUN_107dc5204(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 107dc520c; end: 107dc5213; -[SCOperaChromeLayer gradientHeight] */

undefined8 FUN_107dc520c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107dc5214; end: 107dc521b; -[SCOperaChromeLayer iconViewProvider] */

undefined8 FUN_107dc5214(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 107dc521c; end: 107dc5223; -[SCOperaChromeLayer iconViewProviderProperties] */

undefined8 FUN_107dc521c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 107dc5224; end: 107dc522b; -[SCOperaChromeLayer iconImageKey] */

undefined8 FUN_107dc5224(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 107dc522c; end: 107dc5233; -[SCOperaChromeLayer showIconWhenCloseViewIsVisible] */

undefined1 FUN_107dc522c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf);
}



/* Entry: 107dc5234; end: 107dc523f; -[SCOperaChromeLayer showAvatarAddControl] */

byte FUN_107dc5234(long param_1)

{
  return *(byte *)(param_1 + 0x10) & 1;
}



/* Entry: 107dc5240; end: 107dc5247; -[SCOperaChromeLayer yOffset] */

undefined8 FUN_107dc5240(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107dc5248; end: 107dc524f; -[SCOperaChromeLayer rightPadding] */

undefined8 FUN_107dc5248(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 107dc5250; end: 107dc5257; -[SCOperaChromeLayer layoutInsideMediaFrame] */

undefined1 FUN_107dc5250(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107dc5258; end: 107dc525f; -[SCOperaChromeLayer isProgressBarAlignedToTop] */

undefined1 FUN_107dc5258(long param_1)

{
  return *(undefined1 *)(param_1 + 0x12);
}



/* Entry: 107dc5260; end: 107dc5267; -[SCOperaChromeLayer topOffsetWhenOverMediaContent] */

undefined8 FUN_107dc5260(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 107dc5268; end: 107dc526f; -[SCOperaChromeLayer alwaysUseTopOffset] */

undefined1 FUN_107dc5268(long param_1)

{
  return *(undefined1 *)(param_1 + 0x13);
}



/* Entry: 107dc5270; end: 107dc5287; -[SCOperaChromeLayer page] */

void FUN_107dc5270(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107dc5288; end: 107dc534f; -[SCOperaChromeLayer .cxx_destruct] */

void FUN_107dc5288(long param_1)

{
  _objc_destroyWeak(param_1 + 0xc0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 107dc5350; end: 107dc539b; +[SCOperaDebugButtonLayer layerWithPage:] */

void FUN_107dc5350(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6950;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc539c; end: 107dc53cf; -[SCOperaDebugButtonLayer initWithPage:] */

void FUN_107dc539c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126fb178;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 107dc53d0; end: 107dc53d7; -[SCOperaDebugButtonLayer type] */

undefined8 FUN_107dc53d0(void)

{
  return 0x16;
}



/* Entry: 107dc53d8; end: 107dc5437; -[SCOperaDebugButtonLayer isEqual:] */

bool FUN_107dc53d8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  _objc_opt_class(param_3);
  puVar2 = PTR_PTR_1126d6950;
  _objc_opt_class(PTR_PTR_1126d6950);
  _objc_release(param_3);
  return param_1 == param_3 && puVar1 == puVar2;
}



/* Entry: 107dc5438; end: 107dc5483; +[SCOperaGLImageLayer layerWithPage:] */

void FUN_107dc5438(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7dd8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc5484; end: 107dc55db; -[SCOperaGLImageLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107dc5484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fb180;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithPage__1125ea568,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f44c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276f44c) = uVar3;
    _objc_release(uVar4);
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f450);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276f450) = uVar3;
    _objc_release(uVar4);
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276f454);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276f454) = uVar3;
    _objc_release(uVar4);
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + (long)_DAT_11276f458) = (char)uVar4;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dc55dc; end: 107dc55e3; -[SCOperaGLImageLayer type] */

undefined8 FUN_107dc55dc(void)

{
  return 0x15;
}



/* Entry: 107dc55e4; end: 107dc55eb; -[SCOperaGLImageLayer layerContentType] */

undefined8 FUN_107dc55e4(void)

{
  return 1;
}



/* Entry: 107dc55ec; end: 107dc580b; -[SCOperaGLImageLayer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dc55ec(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_50;
  undefined *puStack_48;
  
  iVar2 = (int)&puStack_50;
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_opt_class();
  puVar6 = PTR_PTR_1126d7dd8;
  _objc_opt_class();
  if (puVar3 != puVar6) {
    uVar5 = 0;
    goto LAB_107dc57e8;
  }
  if (param_1 == param_3) {
    uVar5 = 1;
    goto LAB_107dc57e8;
  }
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126fb180;
  puStack_50 = param_1;
  _objc_msgSendSuper2(&puStack_50,PTR_s_isEqual__1125fa0c8,param_3);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    puVar6 = *(undefined **)(param_1 + _DAT_11276f44c);
    puVar3 = param_3;
    func_0x00010bfe7fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar6);
    _objc_retain(puVar3);
    if (puVar6 == puVar3) {
      _objc_release(puVar3);
      _objc_release(puVar6);
LAB_107dc56f8:
      puVar7 = *(undefined **)(param_1 + _DAT_11276f450);
      puVar6 = param_3;
      func_0x00010c0cd220();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar7);
      _objc_retain(puVar6);
      if (puVar7 == puVar6) {
        _objc_release(puVar6);
        _objc_release(puVar7);
LAB_107dc576c:
        bVar1 = param_1[_DAT_11276f458];
        puVar7 = param_3;
        func_0x00010c07cc60();
        if ((uint)bVar1 != (uint)puVar7) goto LAB_107dc57bc;
        uVar5 = *(undefined8 *)(param_1 + _DAT_11276f454);
        puVar7 = param_3;
        func_0x00010c0eed40(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bd86de8(uVar5,puVar7);
      }
      else {
        if (puVar6 != (undefined *)0x0) {
          puVar4 = puVar7;
          func_0x00010c071ae0();
          _objc_release(puVar6);
          _objc_release(puVar7);
          if ((int)puVar4 == 0) goto LAB_107dc57bc;
          goto LAB_107dc576c;
        }
        uVar5 = 0;
      }
      _objc_release(puVar7);
LAB_107dc57d0:
      _objc_release(puVar6);
    }
    else {
      if (puVar3 == (undefined *)0x0) {
LAB_107dc57bc:
        uVar5 = 0;
        goto LAB_107dc57d0;
      }
      puVar7 = puVar6;
      func_0x00010c071ae0();
      _objc_release(puVar3);
      _objc_release(puVar6);
      if ((int)puVar7 != 0) goto LAB_107dc56f8;
      uVar5 = 0;
    }
    _objc_release(puVar3);
  }
  _objc_release(param_3);
LAB_107dc57e8:
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 107dc580c; end: 107dc581b; -[SCOperaGLImageLayer midOutputGLCommandKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dc580c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f450);
}



/* Entry: 107dc581c; end: 107dc582b; -[SCOperaGLImageLayer outputGLCommandsKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dc581c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f454);
}



/* Entry: 107dc582c; end: 107dc583b; -[SCOperaGLImageLayer imageKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dc582c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f44c);
}



/* Entry: 107dc583c; end: 107dc584b; -[SCOperaGLImageLayer isRotating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107dc583c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276f458);
}



/* Entry: 107dc584c; end: 107dc589b; -[SCOperaGLImageLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc584c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276f44c,0);
  _objc_storeStrong(param_1 + _DAT_11276f454,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f450,0);
  return;
}



/* Entry: 107dc589c; end: 107dc58e7; +[SCOperaGLVideoLayer layerWithPage:] */

void FUN_107dc589c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7de0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc58e8; end: 107dc5c57; -[SCOperaGLVideoLayer initWithPage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_107dc58e8(float param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126fb188;
  puVar2 = &uStack_60;
  uStack_60 = param_2;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithPage__1125ea568,param_4);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276f45c);
    *(long *)((long)puVar2 + (long)_DAT_11276f45c) = lVar4;
    _objc_release(uVar8);
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276f460);
    *(long *)((long)puVar2 + (long)_DAT_11276f460) = lVar4;
    _objc_release(uVar8);
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276f464);
    *(long *)((long)puVar2 + (long)_DAT_11276f464) = lVar4;
    _objc_release(uVar8);
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + (long)_DAT_11276f468) = (char)lVar5;
    _objc_release(lVar4);
    lVar4 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    if (lVar4 != 0) {
      func_0x00010c2827c0();
    }
    *(long *)((long)puVar2 + (long)_DAT_11276f46c) = lVar5;
    lVar5 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      dVar9 = 1.0;
    }
    else {
      func_0x00010bfb2c80(lVar5);
      dVar9 = (double)param_1;
    }
    *(double *)((long)puVar2 + (long)_DAT_11276f470) = dVar9;
    lVar6 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + (long)_DAT_11276f474) = (char)lVar7;
    _objc_release(lVar6);
    lVar6 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar2 + (long)_DAT_11276f478) = (char)lVar7;
    _objc_release(lVar6);
    lVar6 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276f47c);
    *(long *)((long)puVar2 + (long)_DAT_11276f47c) = lVar6;
    _objc_release(uVar8);
    lVar6 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276f480);
    *(long *)((long)puVar2 + (long)_DAT_11276f480) = lVar6;
    _objc_release(uVar8);
    lVar6 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)((long)puVar2 + (long)_DAT_11276f484);
    *(long *)((long)puVar2 + (long)_DAT_11276f484) = lVar6;
    _objc_release(uVar8);
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_11276f488);
    lVar6 = lVar3;
    func_0x00010c0e00e0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _CGAffineTransformFromString(&uStack_90);
    puVar1[3] = uStack_78;
    puVar1[2] = uStack_80;
    puVar1[5] = uStack_68;
    puVar1[4] = uStack_70;
    puVar1[1] = uStack_88;
    *puVar1 = uStack_90;
    _objc_release(lVar6);
    lVar6 = lVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    if (lVar6 != 0) {
      func_0x00010c2827c0();
    }
    *(long *)((long)puVar2 + (long)_DAT_11276f48c) = lVar7;
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 107dc5c58; end: 107dc5c5f; -[SCOperaGLVideoLayer type] */

undefined8 FUN_107dc5c58(void)

{
  return 0x14;
}



/* Entry: 107dc5c60; end: 107dc5c67; -[SCOperaGLVideoLayer layerContentType] */

undefined8 FUN_107dc5c60(void)

{
  return 1;
}



/* Entry: 107dc5c68; end: 107dc6057; -[SCOperaGLVideoLayer isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107dc5c68(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  double dVar13;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  puVar8 = &uStack_d0;
  _objc_retain(param_4);
  puVar3 = param_4;
  _objc_opt_class();
  puVar6 = PTR_PTR_1126d7de0;
  _objc_opt_class();
  if (puVar3 != puVar6) {
    puVar8 = (undefined8 *)0x0;
    goto LAB_107dc5ffc;
  }
  if (param_2 == param_4) {
    puVar8 = (undefined8 *)0x1;
    goto LAB_107dc5ffc;
  }
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126fb188;
  ppuVar4 = &puStack_70;
  puStack_70 = param_2;
  _objc_msgSendSuper2(ppuVar4,PTR_s_isEqual__1125fa0c8,param_4);
  if ((int)ppuVar4 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar6 = *(undefined **)(param_2 + _DAT_11276f45c);
    puVar3 = param_4;
    func_0x00010bf0b380();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar6);
    _objc_retain(puVar3);
    if (puVar6 == puVar3) {
      _objc_release(puVar3);
      _objc_release(puVar6);
LAB_107dc5d7c:
      puVar7 = *(undefined **)(param_2 + _DAT_11276f460);
      puVar6 = param_4;
      func_0x00010c0cd220();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar7);
      _objc_retain(puVar6);
      if (puVar7 == puVar6) {
        _objc_release(puVar6);
        _objc_release(puVar7);
LAB_107dc5df4:
        puVar9 = *(undefined **)(param_2 + _DAT_11276f464);
        puVar7 = param_4;
        func_0x00010c0eed40();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar9);
        _objc_retain(puVar7);
        if (puVar9 == puVar7) {
          _objc_release(puVar7);
          _objc_release(puVar9);
LAB_107dc5e6c:
          puVar10 = *(undefined **)(param_2 + _DAT_11276f480);
          puVar9 = param_4;
          func_0x00010bf0f8e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar10);
          _objc_retain(puVar9);
          if (puVar10 == puVar9) {
            _objc_release(puVar9);
            _objc_release(puVar10);
LAB_107dc5ee4:
            uVar11 = *(undefined8 *)(param_2 + _DAT_11276f47c);
            puVar10 = param_4;
            func_0x00010c13ff80(param_4);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bd86de8(uVar11,puVar10);
            if (((((int)uVar11 == 0) ||
                 (bVar2 = param_2[_DAT_11276f468], puVar5 = param_4, func_0x00010c07cc60(),
                 (uint)bVar2 != (uint)puVar5)) ||
                (puVar12 = *(undefined **)(param_2 + _DAT_11276f46c), puVar5 = param_4,
                func_0x00010c0ffbc0(), puVar12 != puVar5)) ||
               (((dVar13 = *(double *)(param_2 + _DAT_11276f470), func_0x00010c100540(param_4),
                 dVar13 != param_1 ||
                 (bVar2 = param_2[_DAT_11276f474], puVar5 = param_4, func_0x00010bf0efa0(),
                 (uint)bVar2 != (uint)puVar5)) ||
                (bVar2 = param_2[_DAT_11276f478], puVar5 = param_4, func_0x00010c07caa0(),
                (uint)bVar2 != (uint)puVar5)))) goto LAB_107dc5fc8;
            puVar1 = (undefined8 *)(param_2 + _DAT_11276f488);
            if (param_4 == (undefined *)0x0) {
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_78 = 0;
              uStack_80 = 0;
              uStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              func_0x00010c29f700(&uStack_a0,param_4);
            }
            uStack_c8 = puVar1[1];
            uStack_d0 = *puVar1;
            uStack_b8 = puVar1[3];
            uStack_c0 = puVar1[2];
            uStack_a8 = puVar1[5];
            uStack_b0 = puVar1[4];
            _CGAffineTransformEqualToTransform(&uStack_d0,&uStack_a0);
          }
          else {
            if (puVar9 != (undefined *)0x0) {
              puVar5 = puVar10;
              func_0x00010c071ae0();
              _objc_release(puVar9);
              _objc_release(puVar10);
              if ((int)puVar5 == 0) goto LAB_107dc5ecc;
              goto LAB_107dc5ee4;
            }
            _objc_release(0);
LAB_107dc5fc8:
            puVar8 = (undefined8 *)0x0;
          }
          _objc_release(puVar10);
        }
        else {
          if (puVar7 != (undefined *)0x0) {
            puVar10 = puVar9;
            func_0x00010c071ae0();
            _objc_release(puVar7);
            _objc_release(puVar9);
            if ((int)puVar10 == 0) goto LAB_107dc5e54;
            goto LAB_107dc5e6c;
          }
LAB_107dc5ecc:
          puVar8 = (undefined8 *)0x0;
        }
        _objc_release(puVar9);
      }
      else {
        if (puVar6 != (undefined *)0x0) {
          puVar9 = puVar7;
          func_0x00010c071ae0();
          _objc_release(puVar6);
          _objc_release(puVar7);
          if ((int)puVar9 == 0) goto LAB_107dc5ddc;
          goto LAB_107dc5df4;
        }
LAB_107dc5e54:
        puVar8 = (undefined8 *)0x0;
      }
      _objc_release(puVar7);
LAB_107dc5fe4:
      _objc_release(puVar6);
    }
    else {
      if (puVar3 == (undefined *)0x0) {
LAB_107dc5ddc:
        puVar8 = (undefined8 *)0x0;
        goto LAB_107dc5fe4;
      }
      puVar7 = puVar6;
      func_0x00010c071ae0();
      _objc_release(puVar3);
      _objc_release(puVar6);
      if ((int)puVar7 != 0) goto LAB_107dc5d7c;
      puVar8 = (undefined8 *)0x0;
    }
    _objc_release(puVar3);
  }
  _objc_release(param_4);
LAB_107dc5ffc:
  _objc_release(param_4);
  return (undefined1 *)puVar8;
}



/* Entry: 107dc6058; end: 107dc6067; -[SCOperaGLVideoLayer midOutputGLCommandKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dc6058(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f460);
}



/* Entry: 107dc6068; end: 107dc6077; -[SCOperaGLVideoLayer outputGLCommandsKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dc6068(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f464);
}



/* Entry: 107dc6078; end: 107dc6087; -[SCOperaGLVideoLayer isRotating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107dc6078(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276f468);
}



/* Entry: 107dc6088; end: 107dc6097; -[SCOperaGLVideoLayer initialRotateDirection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dc6088(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f48c);
}



/* Entry: 107dc6098; end: 107dc60a7; -[SCOperaGLVideoLayer assetKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dc6098(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f45c);
}



/* Entry: 107dc60a8; end: 107dc60b7; -[SCOperaGLVideoLayer audioProcessorMixKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dc60a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f480);
}



/* Entry: 107dc60b8; end: 107dc60c7; -[SCOperaGLVideoLayer reverseAudioDataKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dc60b8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f47c);
}



/* Entry: 107dc60c8; end: 107dc60d7; -[SCOperaGLVideoLayer audioOverrideAssetProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dc60c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f484);
}



/* Entry: 107dc60d8; end: 107dc60e7; -[SCOperaGLVideoLayer playbackMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dc60d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f46c);
}



/* Entry: 107dc60e8; end: 107dc60f7; -[SCOperaGLVideoLayer playbackTimeScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107dc60e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276f470);
}



/* Entry: 107dc60f8; end: 107dc6107; -[SCOperaGLVideoLayer audioDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107dc60f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276f474);
}



/* Entry: 107dc6108; end: 107dc6117; -[SCOperaGLVideoLayer isReversePlayback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107dc6108(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276f478);
}



/* Entry: 107dc6118; end: 107dc6137; -[SCOperaGLVideoLayer viewportTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc6118(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11276f488);
  uVar2 = *puVar1;
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[4] = uVar2;
  return;
}



/* Entry: 107dc6138; end: 107dc61b7; -[SCOperaGLVideoLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107dc6138(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276f484,0);
  _objc_storeStrong(param_1 + _DAT_11276f47c,0);
  _objc_storeStrong(param_1 + _DAT_11276f480,0);
  _objc_storeStrong(param_1 + _DAT_11276f45c,0);
  _objc_storeStrong(param_1 + _DAT_11276f464,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276f460,0);
  return;
}



/* Entry: 107dc61b8; end: 107dc6203; +[SCOperaGestureToolTipsLayer layerWithPage:] */

void FUN_107dc61b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d6918;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc6204; end: 107dc6297; -[SCOperaGestureToolTipsLayer initWithPage:] */

undefined1 * FUN_107dc6204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = PTR_PTR_1126fb190;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dc6298; end: 107dc629f; -[SCOperaGestureToolTipsLayer type] */

undefined8 FUN_107dc6298(void)

{
  return 0xc;
}



/* Entry: 107dc62a0; end: 107dc6343; -[SCOperaGestureToolTipsLayer isEqual:] */

undefined8 FUN_107dc62a0(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  _objc_opt_class();
  puVar2 = PTR_PTR_1126d6918;
  _objc_opt_class();
  if (puVar1 == puVar2) {
    if (param_1 == param_3) {
      uVar3 = 1;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 8);
      puVar1 = param_3;
      func_0x00010c2631a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071b60(uVar3,param_2,puVar1);
      _objc_release(puVar1);
    }
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 107dc6344; end: 107dc634b; -[SCOperaGestureToolTipsLayer supportedGestures] */

undefined8 FUN_107dc6344(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107dc634c; end: 107dc6357; -[SCOperaGestureToolTipsLayer .cxx_destruct] */

void FUN_107dc634c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107dc6358; end: 107dc63a3; +[SCOperaGifLayer layerWithPage:] */

void FUN_107dc6358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d68e8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc63a4; end: 107dc648f; -[SCOperaGifLayer initWithPage:] */

undefined1 * FUN_107dc63a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fb198;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = 1;
    }
    else {
      lVar3 = lVar2;
      func_0x00010c2827c0();
    }
    *(long *)((long)puVar1 + 8) = lVar3;
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(long *)((long)puVar1 + 0x10) = lVar4;
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dc6490; end: 107dc6497; -[SCOperaGifLayer type] */

undefined8 FUN_107dc6490(void)

{
  return 0x11;
}



/* Entry: 107dc6498; end: 107dc65a3; -[SCOperaGifLayer isEqual:] */

undefined * FUN_107dc6498(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126d68e8;
  _objc_opt_class();
  if (puVar2 == puVar3) {
    if (param_1 == param_3) {
      puVar2 = (undefined *)0x1;
    }
    else {
      _objc_retain(param_3);
      puVar3 = *(undefined **)(param_1 + 8);
      puVar2 = param_3;
      func_0x00010bf87840();
      if (puVar3 == puVar2) {
        puVar1 = *(undefined **)(param_1 + 0x10);
        puVar3 = param_3;
        func_0x00010bfcc920();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar1);
        _objc_retain(puVar3);
        if (puVar1 == puVar3) {
          puVar2 = (undefined *)0x1;
        }
        else if (puVar3 == (undefined *)0x0) {
          puVar2 = (undefined *)0x0;
        }
        else {
          puVar2 = puVar1;
          func_0x00010c071ae0(puVar1,param_2,puVar3);
        }
        _objc_release(puVar3);
        _objc_release(puVar1);
        _objc_release(puVar3);
      }
      else {
        puVar2 = (undefined *)0x0;
      }
      _objc_release(param_3);
    }
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 107dc65a4; end: 107dc65ab; -[SCOperaGifLayer docking] */

undefined8 FUN_107dc65a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107dc65ac; end: 107dc65b3; -[SCOperaGifLayer gifKey] */

undefined8 FUN_107dc65ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dc65b4; end: 107dc65bf; -[SCOperaGifLayer .cxx_destruct] */

void FUN_107dc65b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107dc65c0; end: 107dc691b;  */

bool FUN_107dc65c0(undefined *param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain();
  func_0x00010bf91120();
  if (param_2 != 0) {
    puVar2 = param_1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar2);
    if (puVar3 == (undefined *)0x0) {
      _objc_retain(param_1);
      puVar2 = param_1;
      func_0x00010c118b40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar3;
      func_0x00010c2827c0();
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = param_1;
      puVar3 = param_1;
      if (puVar7 < (undefined *)0x21) {
        if ((1L << ((ulong)puVar7 & 0x3f) & 0x1ffcffd81U) == 0) {
          if ((1L << ((ulong)puVar7 & 0x3f) & 0x300070U) == 0) {
            if (puVar7 != (undefined *)0x9) goto LAB_107dc67f4;
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar7 == (undefined *)0x0) {
              func_0x00010c118b40(param_1);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = PTR_PTR_1126c9410;
              func_0x00010c2a4460(PTR_PTR_1126c9410);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              func_0x00010c0e00e0(puVar3);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = puVar4 != (undefined *)0x0;
              _objc_release();
              goto LAB_107dc68f0;
            }
          }
          else {
            func_0x00010c118b40();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar2;
            func_0x00010c0e00e0();
            _objc_retainAutoreleasedReturnValue();
            if (puVar7 == (undefined *)0x0) {
              func_0x00010c118b40();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar3;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (puVar7 == (undefined *)0x0) {
                puVar7 = param_1;
                func_0x00010c118b40();
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar7;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                if (puVar4 == (undefined *)0x0) {
                  puVar5 = param_1;
                  func_0x00010c118b40(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  puVar6 = puVar5;
                  func_0x00010c0e00e0();
                  _objc_retainAutoreleasedReturnValue();
                  bVar1 = puVar6 != (undefined *)0x0;
                  _objc_release();
                  _objc_release(puVar5);
                }
                else {
                  bVar1 = true;
                }
                _objc_release(puVar4);
                _objc_release(puVar7);
                puVar7 = (undefined *)0x0;
              }
              else {
                bVar1 = true;
              }
              goto LAB_107dc68f0;
            }
          }
          goto LAB_107dc6728;
        }
        bVar1 = true;
      }
      else {
LAB_107dc67f4:
        func_0x00010c118b40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar7 == (undefined *)0x0) {
          func_0x00010c118b40(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          bVar1 = puVar7 != (undefined *)0x0;
LAB_107dc68f0:
          _objc_release(puVar7);
          _objc_release(puVar3);
        }
        else {
LAB_107dc6728:
          bVar1 = true;
        }
        _objc_release();
        _objc_release(puVar2);
      }
      _objc_release(param_1);
      goto LAB_107dc6640;
    }
  }
  puVar2 = param_1;
  func_0x00010c09d3c0(param_1);
  bVar1 = puVar2 == (undefined *)0x0;
LAB_107dc6640:
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 107dc691c; end: 107dc6967; +[SCOperaImageLayer layerWithPage:] */

void FUN_107dc691c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d68d8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107dc6968; end: 107dc6b8f; -[SCOperaImageLayer initWithPage:] */

undefined1 * FUN_107dc6968(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126fb1a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar3 = 1;
    }
    else {
      lVar3 = lVar2;
      func_0x00010c2827c0();
    }
    *(long *)((long)puVar1 + 0x10) = lVar3;
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(long *)((long)puVar1 + 0x18) = lVar4;
    _objc_release(uVar6);
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0720c0();
    *(char *)((long)puVar1 + 8) = (char)lVar4;
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0720c0();
    if ((int)lVar4 == 0) {
      lVar4 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0720c0();
      *(char *)((long)puVar1 + 9) = (char)lVar5;
      _objc_release(lVar4);
    }
    else {
      *(undefined1 *)((long)puVar1 + 9) = 1;
    }
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 10) = (char)lVar4;
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 0xb) = (char)lVar4;
    _objc_release(lVar3);
    lVar3 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 0xc) = (char)lVar4;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107dc6b90; end: 107dc6b97; -[SCOperaImageLayer type] */

undefined8 FUN_107dc6b90(void)

{
  return 1;
}



/* Entry: 107dc6b98; end: 107dc6b9f; -[SCOperaImageLayer layerContentType] */

undefined8 FUN_107dc6b98(void)

{
  return 1;
}



/* Entry: 107dc6ba0; end: 107dc6d1b; -[SCOperaImageLayer isEqual:] */

bool FUN_107dc6ba0(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar3 = param_3;
  _objc_opt_class();
  puVar5 = PTR_PTR_1126d68d8;
  _objc_opt_class();
  if (puVar3 != puVar5) {
    bVar2 = false;
    goto LAB_107dc6cfc;
  }
  if (param_1 == param_3) {
    bVar2 = true;
    goto LAB_107dc6cfc;
  }
  _objc_retain(param_3);
  puVar5 = *(undefined **)(param_1 + 0x10);
  puVar3 = param_3;
  func_0x00010bf87840();
  if (puVar5 == puVar3) {
    puVar5 = *(undefined **)(param_1 + 0x18);
    puVar3 = param_3;
    func_0x00010bfe7fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar5);
    _objc_retain(puVar3);
    if (puVar5 == puVar3) {
      _objc_release(puVar3);
      _objc_release(puVar5);
LAB_107dc6c8c:
      bVar1 = param_1[8];
      puVar5 = param_3;
      func_0x00010bfd5500();
      if ((((uint)bVar1 != (uint)puVar5) ||
          (bVar1 = param_1[9], puVar5 = param_3, func_0x00010c079780(), (uint)bVar1 != (uint)puVar5)
          ) || (bVar1 = param_1[0xb], puVar5 = param_3, func_0x00010c0713c0(),
               (uint)bVar1 != (uint)puVar5)) goto LAB_107dc6ce8;
      bVar1 = param_1[0xc];
      puVar5 = param_3;
      func_0x00010c1397e0(param_3);
      bVar2 = (uint)bVar1 == (uint)puVar5;
    }
    else {
      if (puVar3 == (undefined *)0x0) {
        _objc_release(puVar5);
      }
      else {
        puVar4 = puVar5;
        func_0x00010c071ae0(puVar5,param_2,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar5);
        if ((int)puVar4 != 0) goto LAB_107dc6c8c;
      }
LAB_107dc6ce8:
      bVar2 = false;
    }
    _objc_release(puVar3);
  }
  else {
    bVar2 = false;
  }
  _objc_release(param_3);
LAB_107dc6cfc:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 107dc6d1c; end: 107dc6d23; -[SCOperaImageLayer docking] */

undefined8 FUN_107dc6d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107dc6d24; end: 107dc6d2b; -[SCOperaImageLayer imageKey] */

undefined8 FUN_107dc6d24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107dc6d2c; end: 107dc6d33; -[SCOperaImageLayer hasClearFrameBackground] */

undefined1 FUN_107dc6d2c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}


