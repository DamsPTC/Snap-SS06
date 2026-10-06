/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10641daec; end: 10641dbab;  */

void FUN_10641daec(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000106433d64();
  if (param_1 < param_2) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b10c8;
    func_0x00010c22d8c0((double)param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107aeac00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10641dbac; end: 10641dbeb;  */

void FUN_10641dbac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  _objc_opt_new();
  uVar1 = puRam00000001136c3880;
  puRam00000001136c3880 = puVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1d02f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puRam00000001136c3880,PTR_s_setNumberStyle__112651ae0,2);
  return;
}



/* Entry: 10641dbec; end: 10641e373;  */

void FUN_10641dbec(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf054e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bf05d60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf20ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010bef2560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bef4240();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bef60a0();
  _objc_release(lVar8);
  _objc_release(lVar6);
  puVar11 = PTR_PTR_1126b9250;
  lVar6 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef60a0();
  func_0x00010c29d360(param_1);
  lVar10 = param_1;
  func_0x00010bf89440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44a40();
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar6);
  lVar6 = lVar1;
  FUN_10641d43c(lVar1,lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bf05e40();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf8fb00(lVar2);
  func_0x00010c0df6e0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126bfe00;
  func_0x00010bef24c0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar13);
  _objc_release(puVar12);
  lVar10 = param_1;
  FUN_10641e374(param_1,param_2,puVar11,lVar3,lVar4,lVar6,lVar8,lVar2,lVar9,lVar7,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010643497c(param_3,lVar10,param_1);
  if ((int)puVar11 == 4) {
    lVar14 = param_1;
    FUN_10641e374(param_1,param_2,2,lVar3,lVar4,lVar6,lVar8,lVar2,lVar9,lVar7,param_4,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_2 != 2) {
      lVar15 = param_1;
      func_0x00010bef2560(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2d20(0x42e40000);
      func_0x00010c0df740(puVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173680(lVar14);
      _objc_release(puVar12);
      _objc_release(lVar15);
    }
    puVar12 = PTR_PTR_1126bfe00;
    func_0x00010bf056c0(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar12);
    _objc_release(lVar14);
  }
  lVar14 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf091e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar15);
  _objc_release(lVar14);
  puVar12 = PTR_PTR_1126b9250;
  if (lVar16 != 0) {
    lVar14 = param_1;
    func_0x00010bef52a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010bef52a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef60a0();
    func_0x00010c29d360(param_1);
    lVar16 = param_1;
    func_0x00010bf89440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf44a40(puVar12);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    lVar14 = param_1;
    FUN_10641e374(param_1,param_2,puVar12,lVar3,lVar4,lVar6,lVar8,lVar2,lVar9,lVar7,param_4,0);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126bfe00;
    func_0x00010bef1b00(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar12);
    _objc_release(lVar14);
  }
  func_0x00010c12d3e0(param_3);
  lVar7 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bef4a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360(param_1);
  lVar9 = param_1;
  func_0x00010bf461c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar5);
  _objc_retain(lVar9);
  _objc_retain(param_3);
  _objc_retain(lVar8);
  lVar14 = lVar7;
  func_0x00010c242040(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010bf20540();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf054e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar15);
  _objc_release(lVar14);
  lVar14 = lVar8;
  func_0x00010c23d7c0(lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  lVar15 = lVar16;
  FUN_10641d95c(lVar16,lVar14,lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar14);
  lVar14 = lVar15;
  func_0x00010bf51e00(lVar15);
  puVar12 = PTR_PTR_1126bfe00;
  func_0x00010c257a80(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar12);
  _objc_release(lVar14);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000106434130(lVar5);
  _objc_release(lVar5);
  func_0x00010c0df780(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_3);
  _objc_release(puVar12);
  uVar17 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  _objc_release(lVar15);
  _objc_release(lVar16);
  func_0x00010bef7f60(param_3);
  _objc_release(uVar17);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar10);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10641e374; end: 10641f06f;  */

void FUN_10641e374(undefined *param_1,long param_2,int param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined *puVar17;
  undefined4 uVar18;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar2 = PTR_PTR_1126ca4e0;
  _objc_alloc();
  func_0x00010c006dc0();
  puVar17 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bef4a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar17;
  FUN_106434c94(puVar17,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0ae0(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar17);
  puVar17 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar17;
  FUN_106434e50();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0b00(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar17);
  puVar17 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar17;
  func_0x00010bf20ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1785a0(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar17);
  if (param_3 - 1U < 2) {
    if (param_3 == 2) {
      FUN_10641f070(puVar2,param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10)
      ;
    }
    puVar3 = PTR_PTR_1126b9250;
    puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_2 == 2) {
      puVar4 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5d4c0(puVar3);
      func_0x00010c0df760(puVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c208ea0(puVar2);
      _objc_release(puVar17);
      _objc_release(puVar4);
      uVar9 = param_11;
      func_0x00010c09e420(param_11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2085e0(puVar2);
      _objc_release(uVar9);
      puVar17 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar17;
      func_0x00010bf20f80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173b20(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar17);
      puVar17 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar17;
      func_0x00010bf5b580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c185d00(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar17);
      puVar17 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar17;
      func_0x00010bf20ee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173b00(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar17);
      puVar17 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar17;
      func_0x00010c0f6400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9a40(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar17);
      puVar17 = param_1;
      func_0x00010bef2560(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar17;
      FUN_10642a370();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c164800(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar17);
      puVar17 = param_1;
      func_0x00010bef4a60(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar17;
      func_0x00010bf20fa0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c116960();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4120(puVar2);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar17);
      puVar17 = param_1;
      func_0x00010bef4a60(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar17;
      func_0x00010bf5b640();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c116960();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c185d20(puVar2);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar17);
      func_0x00010c1a83e0(puVar2);
      func_0x00010c1ad080(puVar2);
      func_0x00010c20e8a0(puVar2);
      puVar17 = param_1;
      func_0x00010bef52a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c29d360(param_1);
      puVar4 = param_1;
      func_0x00010c0ea840(param_1);
      puVar5 = param_1;
      func_0x00010bef4a60(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010bef2560(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar17;
      func_0x0001084cc9c4(puVar17,puVar3,puVar4,puVar5,puVar6);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar17);
      if ((int)puVar7 != 0) {
        func_0x00010c195260(puVar2);
        uVar9 = param_11;
        func_0x00010c09e420(param_11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2106c0(puVar2);
        _objc_release(uVar9);
      }
      bVar1 = true;
    }
    else {
      func_0x00010c1ad080(puVar2);
      bVar1 = false;
    }
  }
  else {
    if ((param_3 != 0) && (param_3 != 5)) {
      if (param_3 != 4) goto LAB_10641eae0;
      func_0x00010c1a6960(puVar2);
      puVar3 = PTR_PTR_1126b9250;
      puVar17 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar4 = param_1;
      if (param_2 == 2) {
        puVar5 = param_1;
        func_0x00010bef52a0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf5d4c0(puVar3);
        func_0x00010c0df760(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c208ea0(puVar2);
        _objc_release(puVar17);
        _objc_release(puVar5);
        func_0x00010c1a83e0(puVar2);
        puVar17 = param_1;
        func_0x00010bef52a0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = param_1;
        func_0x00010c29d360(param_1);
        puVar5 = param_1;
        func_0x00010c0ea840(param_1);
        puVar6 = param_1;
        func_0x00010bef4a60(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_1;
        func_0x00010bef2560(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar17;
        func_0x0001084cc9c4(puVar17,puVar3,puVar5,puVar6,puVar7);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar17);
        if ((int)puVar8 != 0) {
          func_0x00010c195260(puVar2);
          uVar9 = param_11;
          func_0x00010c09e420(param_11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2106c0(puVar2);
          _objc_release(uVar9);
        }
        func_0x00010bef2560(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = puVar4;
        FUN_10642a370();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c164800(puVar2);
LAB_10641efc4:
        _objc_release(puVar17);
        _objc_release(puVar4);
      }
      else {
        puVar3 = param_1;
        func_0x00010bef2560(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = 0x43070000;
        uVar18 = 0;
        func_0x00010bfb2d20();
        func_0x00010c0df740(puVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c173680(puVar2);
        _objc_release(puVar17);
        _objc_release(puVar3);
        puVar17 = PTR_PTR_1126b2d20;
        func_0x00010c27fe20(PTR_PTR_1126b2d20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_12);
        _objc_release(puVar17);
        puVar17 = param_1;
        func_0x00010bef2560(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar17;
        func_0x00010642a3b4();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_12);
        _objc_release(puVar3);
        _objc_release(puVar17);
        puVar17 = puVar2;
        func_0x00010c0e19e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar17 == (undefined *)0x0) {
          func_0x00010bef2560(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_4);
          _objc_retain(puVar4);
          lVar10 = param_4;
          func_0x00010bf05d60();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          FUN_10641d43c();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar10);
          lVar10 = param_4;
          func_0x00010bf05d60();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar10;
          func_0x00010bf05e40();
          _objc_release(lVar10);
          lVar10 = param_4;
          func_0x00010bf05dc0();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = (undefined *)0x0;
          if ((lVar10 == 0) || (lVar11 == 0)) {
LAB_10641ef98:
            _objc_release(lVar10);
          }
          else {
            _objc_release(lVar10);
            if (0 < lVar12) {
              lVar10 = param_4;
              func_0x00010bf05dc0();
              _objc_retainAutoreleasedReturnValue();
              lVar13 = lVar10;
              func_0x00010c112a80();
              _objc_retainAutoreleasedReturnValue();
              if (lVar13 == 0) {
                _objc_release(lVar10);
LAB_10641ef44:
                func_0x000107aeabe8();
                _objc_retainAutoreleasedReturnValue();
              }
              else {
                lVar14 = param_4;
                func_0x00010bf05dc0(param_4);
                _objc_retainAutoreleasedReturnValue();
                lVar15 = lVar14;
                func_0x00010c112a80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf885a0();
                _objc_release(lVar15);
                _objc_release(lVar14);
                _objc_release(lVar13);
                _objc_release(lVar10);
                if ((double)CONCAT44(uVar18,uVar16) <= 0.0) goto LAB_10641ef44;
                if (lRam00000001136c3888 != -1) {
                  func_0x00010002a2fc(0x1136c3888,&PTR___NSConcreteGlobalBlock_110921e18);
                }
                lVar10 = param_4;
                func_0x00010bf05dc0(param_4);
                _objc_retainAutoreleasedReturnValue();
                lVar13 = lVar10;
                func_0x00010bf5de80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c186ec0(lRam00000001136c3880);
                _objc_release(lVar13);
                _objc_release(lVar10);
                lVar10 = lRam00000001136c3880;
                lVar13 = param_4;
                func_0x00010bf05dc0(param_4);
                _objc_retainAutoreleasedReturnValue();
                lVar14 = lVar13;
                func_0x00010c112a80();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c25d4c0(lVar10);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(lVar14);
                _objc_release(lVar13);
              }
              FUN_10641daec(lVar12,puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar17 = PTR_PTR_1126ca668;
              _objc_alloc(PTR_PTR_1126ca668);
              func_0x00010c053520();
              func_0x00010c1e76c0();
              _objc_release(lVar12);
              goto LAB_10641ef98;
            }
            puVar17 = (undefined *)0x0;
          }
          _objc_release(lVar11);
          _objc_release(puVar4);
          _objc_release(param_4);
          func_0x00010c163400(puVar2);
          goto LAB_10641efc4;
        }
      }
      puVar17 = param_1;
      func_0x00010bef52a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar17;
      func_0x00010bef5620();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bf66880();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c253c20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c253c40();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar17);
      if (puVar6 == (undefined *)0x3) {
        func_0x00010c1867c0(puVar2);
      }
      goto LAB_10641eae0;
    }
    bVar1 = param_2 == 2;
  }
  FUN_106434790(param_12,puVar2,param_1,bVar1);
LAB_10641eae0:
  puVar17 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar17;
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf31c00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf31c80();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar17);
  puVar17 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar17;
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c253c20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c253c40();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar17);
  if (((undefined *)0x1 < puVar6) && (puVar7 == (undefined *)0x4)) {
    FUN_10641f070(puVar2,param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10641f070; end: 10641f447;  */

void FUN_10641f070(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126ca668;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010bf06520(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053520(puVar1);
  _objc_release(param_5);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bfe5400(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = uVar2;
  func_0x00010c28f340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a98a0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bef2560(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_10642a370();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161240(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (param_6 != 0) {
    uVar2 = param_2;
    func_0x00010bef2560(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10641daec(param_7,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212ea0(puVar1);
    _objc_release(param_7);
    _objc_release(uVar2);
    func_0x00010c1e76c0(puVar1);
  }
  uVar2 = param_2;
  func_0x00010bef52a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf5d240();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfed9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  FUN_106434f9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac3a0(puVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bef52a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef56a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_106435268();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209160(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010bef52a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf89480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c191500(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (param_3 == 3) {
    uVar2 = param_2;
    func_0x00010bef52a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c274920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf5d240();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_8;
    func_0x00010bef6120(param_8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = uVar5;
    FUN_1064344cc(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168020(puVar1);
    _objc_release(uVar2);
    _objc_release(uVar5);
  }
  func_0x00010c163400(param_1);
  _objc_release(puVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10641f448; end: 10641f513;  */

void FUN_10641f448(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x00010c1d0640();
    lVar1 = param_2;
    FUN_10641d528();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      func_0x00010bef7f60(puVar2);
    }
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10641f514; end: 10641f70f;  */

void FUN_10641f514(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010bf68520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar2 = param_1;
  if (lVar1 == 0) {
    func_0x00010c2a2e80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c2a4740();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf68520();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf68360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bf68520(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126ca670;
  _objc_alloc(PTR_PTR_1126ca670);
  lVar1 = param_1;
  func_0x00010c23b140(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf289a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053320(puVar5);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10641f710; end: 10641f9f7;  */

void FUN_10641f710(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (param_1 == 0) goto LAB_10641f9d0;
  func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,
                      &PTR____CFConstantStringClassReference_110f0cdb8);
  lVar2 = param_1;
  func_0x00010c084fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3 + 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0cdd8);
  _objc_release(puVar4);
  func_0x00010c1d0640(puVar1,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5d58,
                      &PTR____CFConstantStringClassReference_110f0cdf8);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c084160();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bef60a0();
  if (lVar6 < 6) {
    if (lVar6 == 1) {
      uVar8 = 3;
    }
    else if (lVar6 == 3) {
      uVar8 = 1;
    }
    else {
LAB_10641f874:
      uVar8 = 0;
    }
  }
  else if (lVar6 == 0x15) {
    uVar8 = 5;
  }
  else if (lVar6 == 0x11) {
    uVar8 = 4;
  }
  else {
    if (lVar6 != 6) goto LAB_10641f874;
    uVar8 = 2;
  }
  func_0x00010c0df780(puVar4,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126bfe00;
  func_0x00010bf3fe60(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf68c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef60a0();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar3 != 0x11) goto LAB_10641f9d0;
  lVar2 = param_1;
  func_0x00010bf68c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bef60a0();
  if (lVar3 < 6) {
    if (lVar3 == 1) {
      uVar8 = 3;
    }
    else if (lVar3 == 3) {
      uVar8 = 1;
    }
    else {
LAB_10641f97c:
      uVar8 = 0;
    }
  }
  else if (lVar3 == 0x15) {
    uVar8 = 5;
  }
  else if (lVar3 == 0x11) {
    uVar8 = 4;
  }
  else {
    if (lVar3 != 6) goto LAB_10641f97c;
    uVar8 = 2;
  }
  func_0x00010c0df780(puVar4,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126bfe00;
  func_0x00010bf3fe60(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(lVar2);
LAB_10641f9d0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10641f9f8; end: 106421617;  */

void FUN_10641f9f8(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
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
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = param_2;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bf3fc80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar4 == (undefined *)0x0) goto LAB_1064215b4;
  puVar2 = param_2;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c23d7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar20 = puVar4;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar20;
  func_0x00010bf529e0();
  puVar7 = puVar20;
  if (puVar6 != (undefined *)0x0) {
    func_0x00010bf529e0();
    func_0x00010c0c2800();
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar20);
  }
  puVar20 = param_2;
  func_0x00010bf4c260();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar20;
  func_0x00010bf3fe20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  puVar20 = puVar7;
  func_0x00010bf529e0();
  if (puVar20 != (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    do {
      puVar8 = puVar7;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      puVar10 = puVar8;
      func_0x00010c084160();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bef60a0();
      _objc_release(puVar10);
      if (puVar11 == (undefined *)0x11) {
        puVar10 = puVar8;
        func_0x00010c084160();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010c23aec0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010bf68520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar11);
        _objc_release(puVar10);
        puVar10 = puVar8;
        if (puVar12 == (undefined *)0x0) {
          puVar11 = puVar8;
          func_0x00010c084160();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010c23aec0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010c2a2e80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar12);
          _objc_release(puVar11);
          if (puVar13 == (undefined *)0x0) goto LAB_10641fde0;
          puVar11 = PTR_PTR_1126ca678;
          _objc_alloc();
          func_0x00010c084160(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar10;
          func_0x00010c23aec0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010c2a2e80();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar11 = PTR_PTR_1126ca678;
          _objc_alloc();
          func_0x00010c084160(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar10;
          func_0x00010c23aec0();
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar12;
          func_0x00010bf68520();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c009a40();
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar10);
        if (puVar11 != (undefined *)0x0) {
          puVar10 = PTR_PTR_1126ca680;
          _objc_alloc();
          puVar12 = puVar8;
          func_0x00010c0844c0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar8;
          func_0x00010c2711a0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf89540(puVar8);
          func_0x00010c01fde0();
          _objc_release(puVar8);
          _objc_release(puVar13);
          _objc_release(puVar12);
          _objc_release(puVar11);
          puVar8 = puVar10;
        }
      }
LAB_10641fde0:
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar11 = puVar8;
      func_0x00010c084160();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef60a0();
      puVar12 = param_2;
      func_0x00010bef4a60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c257640();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x00010c0df780(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126bfe00;
      func_0x00010bf3fe60(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar9);
      _objc_release(puVar13);
      _objc_release(puVar10);
      _objc_release(puVar12);
      _objc_release(puVar11);
      puVar10 = puVar8;
      func_0x00010c0844c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar10 != (undefined *)0x0) {
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar11 == (undefined *)0x0) {
          puStack_128 = puVar8;
          func_0x00010c0844c0();
          _objc_retainAutoreleasedReturnValue();
          puStack_130 = puStack_128;
          func_0x00010c09ea00();
          _objc_retainAutoreleasedReturnValue();
          puStack_138 = puStack_130;
          func_0x00010c0c5180();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar12 = PTR_PTR_1126bfe00;
        func_0x00010bef23c0(PTR_PTR_1126bfe00);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9);
        _objc_release(puVar12);
        if (puVar11 == (undefined *)0x0) {
          _objc_release(puStack_138);
          _objc_release(puStack_130);
          _objc_release(puStack_128);
        }
        _objc_release(puVar11);
        _objc_release(puVar10);
      }
      puVar10 = puVar8;
      func_0x00010c084160();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c2a4760();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar11;
      func_0x00010c2a4740();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar10;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      if (puVar12 != (undefined *)0x0) {
        puVar13 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR_PTR_1126ca688;
        puVar14 = param_2;
        func_0x00010bef52a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar14;
        func_0x00010bf5ac40();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = param_2;
        func_0x00010bef4a60(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar17 = param_2;
        func_0x00010c1067a0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar18 = param_2;
        func_0x00010bf461c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf01000(puVar11);
        puVar19 = param_2;
        func_0x00010bef2560();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f0020();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar19);
        _objc_release(puVar18);
        _objc_release(puVar17);
        _objc_release(puVar16);
        _objc_release(puVar15);
        _objc_release(puVar14);
        puVar14 = PTR_PTR_1126bfe00;
        func_0x00010bef2400(PTR_PTR_1126bfe00);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14db60(puVar9);
        _objc_release(puVar14);
        _objc_release(puVar10);
        _objc_release(puVar13);
      }
      puVar10 = puVar8;
      func_0x00010c084160(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar10;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c28f280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      _objc_release(puVar10);
      puVar10 = PTR_PTR_1126b8ca8;
      func_0x00010c0f0160();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar10;
      func_0x00010c08fa60();
      if (puVar13 != (undefined *)0x0) {
        _objc_retain(puVar10);
        _objc_release(puVar14);
        puVar14 = puVar10;
      }
      puVar15 = PTR_PTR_1126ca690;
      puVar13 = param_2;
      func_0x00010bef52a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef60a0();
      puVar16 = param_2;
      func_0x00010bef52a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar16;
      func_0x00010bf20500();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = param_2;
      func_0x00010bef4a60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar18;
      func_0x00010c15ed20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb5ac0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
      _objc_release(puVar19);
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar13);
      puVar13 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = PTR_PTR_1126bfe00;
      func_0x00010bef23a0(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14db60(puVar9);
      _objc_release(puVar14);
      _objc_release(puVar13);
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar14 = puVar8;
      func_0x00010c084160();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar14;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf67dc0();
      func_0x00010c0df780(puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = PTR_PTR_1126bfe00;
      func_0x00010bef2360(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar9);
      _objc_release(puVar17);
      _objc_release(puVar13);
      _objc_release(puVar16);
      _objc_release(puVar14);
      puVar13 = puVar8;
      func_0x00010c084160();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar14;
      func_0x00010bf05300();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar16;
      FUN_10641f448();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar14);
      _objc_release(puVar13);
      puVar13 = puVar17;
      func_0x00010bf529e0();
      if (puVar13 != (undefined *)0x0) {
        puVar13 = PTR_PTR_1126bfe00;
        func_0x00010bef2340(PTR_PTR_1126bfe00);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9);
        _objc_release(puVar13);
      }
      puVar13 = puVar8;
      func_0x00010c084160();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bf67c00();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar14;
      func_0x00010bf68360();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      func_0x00010c08fa60();
      _objc_release(puVar16);
      _objc_release(puVar14);
      _objc_release(puVar13);
      puVar13 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (puVar18 != (undefined *)0x0) {
        puVar14 = puVar8;
        func_0x00010c084160(puVar8);
        _objc_retainAutoreleasedReturnValue();
        puVar16 = puVar14;
        func_0x00010bf67c00();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = puVar16;
        func_0x00010bf68360();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = PTR_PTR_1126bfe00;
        func_0x00010bef2380(PTR_PTR_1126bfe00);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14db60(puVar9);
        _objc_release(puVar19);
        _objc_release(puVar13);
        _objc_release(puVar18);
        _objc_release(puVar16);
        _objc_release(puVar14);
      }
      puVar13 = puVar8;
      func_0x00010c084160();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar14;
      func_0x00010bf05300();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar16;
      FUN_10641f448();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar14);
      _objc_release(puVar13);
      puVar13 = puVar18;
      func_0x00010bf529e0();
      if (puVar13 != (undefined *)0x0) {
        puVar13 = PTR_PTR_1126bfe00;
        func_0x00010bef2320(PTR_PTR_1126bfe00);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9);
        _objc_release(puVar13);
      }
      puVar13 = puVar8;
      func_0x00010c084160();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x00010c23aec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar13);
      if (puVar14 != (undefined *)0x0) {
        puVar13 = puVar8;
        func_0x00010c084160();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c23aec0();
        _objc_retainAutoreleasedReturnValue();
        puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        puVar19 = puVar14;
        FUN_10641f514(puVar14,puVar16);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar16);
        _objc_release(puVar14);
        _objc_release(puVar13);
        if (puVar19 != (undefined *)0x0) {
          puVar13 = PTR_PTR_1126bfe00;
          func_0x00010bef23e0(PTR_PTR_1126bfe00);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar9);
          _objc_release(puVar13);
        }
        _objc_release(puVar19);
      }
      puVar13 = puVar9;
      func_0x00010bf529e0();
      if (puVar13 != (undefined *)0x0) {
        func_0x00010befa120(puVar5);
      }
      _objc_release(puVar18);
      _objc_release(puVar17);
      _objc_release(puVar10);
      _objc_release(puVar15);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar20 = puVar20 + 1;
      puVar8 = puVar7;
      func_0x00010bf529e0();
    } while (puVar20 < puVar8);
  }
  puVar20 = puVar5;
  func_0x00010bf529e0();
  if (puVar20 != (undefined *)0x0) {
    puVar20 = PTR_PTR_1126bfe00;
    func_0x00010bef2420(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar20);
    puVar20 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar8 = puVar4;
    func_0x00010bf68c60();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bef60a0();
    _objc_release(puVar8);
    if (puVar9 == (undefined *)0x3) {
      puStack_80 = &uStack_88;
      uStack_88 = 0;
      uStack_78 = 0x2020000000;
      uStack_70 = 0;
      puVar8 = puVar4;
      func_0x00010bf68c60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c2a4760();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c067c00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bf600();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar8 = PTR_PTR_1126bfe00;
      func_0x00010bf3fe60(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar20);
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
      puVar9 = puVar4;
      func_0x00010bf68c60(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c2a4760();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c2a4740();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar11;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = PTR_PTR_1126bfe00;
      func_0x00010bef2400(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14db60(puVar20);
      _objc_release(puVar13);
      _objc_release(puVar8);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      puVar8 = param_2;
      func_0x00010bef52a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf902a0();
      _objc_release(puVar8);
      if ((int)puVar9 == 0) {
        puVar8 = param_2;
        func_0x00010c2a3540();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bf90880();
        if ((((ulong)puVar10 & 1) == 0) && ((*(byte *)(puStack_80 + 3) & 1) == 0)) {
          _objc_release(puVar9);
          _objc_release(puVar8);
        }
        else {
          puVar10 = puVar4;
          func_0x00010bf68c60();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010c2a4760();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010c067c00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar9);
          _objc_release(puVar8);
          if (puVar12 != (undefined *)0x0) {
            FUN_10642a5c0(puVar2);
          }
        }
      }
      else {
        FUN_10642a3f8(puVar2);
      }
      puVar8 = param_2;
      func_0x00010bef52a0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c13dee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar8);
      if (puVar9 != (undefined *)0x0) {
        FUN_10642a49c(puVar2);
      }
      __Block_object_dispose(&uStack_88,8);
    }
    else {
      puVar8 = puVar4;
      func_0x00010bf68c60();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bef60a0();
      _objc_release(puVar8);
      puVar8 = puVar4;
      func_0x00010bf68c60();
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 == (undefined *)0x6) {
        puVar9 = puVar8;
        func_0x00010bf67c00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        puVar8 = puVar9;
        func_0x00010c28f280();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar8;
        func_0x00010c08fa60();
        _objc_release(puVar8);
        if (puVar10 != (undefined *)0x0) {
          puVar8 = PTR_PTR_1126bfe00;
          func_0x00010bf3fe60(PTR_PTR_1126bfe00);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar20);
          _objc_release(puVar8);
          puVar8 = puVar9;
          func_0x00010c28f280(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar10 = PTR_PTR_1126b8ca8;
          func_0x00010c0f0160();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010c08fa60();
          if (puVar11 != (undefined *)0x0) {
            _objc_retain(puVar10);
            _objc_release(puVar8);
            puVar8 = puVar10;
          }
          puVar11 = PTR_PTR_1126ca690;
          puVar12 = param_2;
          func_0x00010bef52a0(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef60a0();
          puVar13 = param_2;
          func_0x00010bef52a0(param_2);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar13;
          func_0x00010bf20500();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = param_2;
          func_0x00010bef4a60(param_2);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar15;
          func_0x00010c15ed20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb5ac0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          _objc_release(puVar16);
          _objc_release(puVar15);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
          puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
          func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR_PTR_1126bfe00;
          func_0x00010bef23a0(PTR_PTR_1126bfe00);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar20);
          _objc_release(puVar12);
          _objc_release(puVar8);
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010bf67dc0();
          func_0x00010c0df780(puVar8);
          _objc_retainAutoreleasedReturnValue();
          puVar12 = PTR_PTR_1126bfe00;
          func_0x00010bef2360(PTR_PTR_1126bfe00);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar20);
          _objc_release(puVar12);
          _objc_release(puVar8);
          puVar8 = puVar9;
          func_0x00010bf68360();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar8;
          func_0x00010c08fa60();
          _objc_release(puVar8);
          puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
          if (puVar12 != (undefined *)0x0) {
            puVar12 = puVar9;
            func_0x00010bf68360(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc3460(puVar8);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR_PTR_1126bfe00;
            func_0x00010bef2380(PTR_PTR_1126bfe00);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14db60(puVar20);
            _objc_release(puVar13);
            _objc_release(puVar8);
            _objc_release(puVar12);
          }
          puVar8 = puVar9;
          func_0x00010bf05300();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar8;
          FUN_10641f448();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          puVar8 = puVar12;
          func_0x00010bf529e0();
          if (puVar8 != (undefined *)0x0) {
            puVar8 = PTR_PTR_1126bfe00;
            func_0x00010bef2340(PTR_PTR_1126bfe00);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar20);
            _objc_release(puVar8);
          }
          FUN_10642a3f8(puVar2);
          _objc_release(puVar12);
          _objc_release(puVar10);
          _objc_release(puVar11);
        }
      }
      else {
        puVar9 = puVar8;
        func_0x00010bef60a0();
        _objc_release(puVar8);
        puVar8 = puVar4;
        func_0x00010bf68c60();
        _objc_retainAutoreleasedReturnValue();
        if (puVar9 == (undefined *)0x1) {
          puVar9 = puVar8;
          func_0x00010bf054e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar8);
          puVar10 = puVar9;
          func_0x00010bf05300();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar10;
          FUN_10641f448();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar10);
          puVar10 = puVar8;
          func_0x00010bf529e0();
          if (puVar10 != (undefined *)0x0) {
            puVar10 = PTR_PTR_1126bfe00;
            func_0x00010bf3fe60(PTR_PTR_1126bfe00);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar20);
            _objc_release(puVar10);
            puVar10 = PTR_PTR_1126bfe00;
            func_0x00010bef2320(PTR_PTR_1126bfe00);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar20);
            _objc_release(puVar10);
          }
LAB_106420e70:
          _objc_release(puVar8);
        }
        else {
          puVar9 = puVar8;
          func_0x00010bef60a0();
          _objc_release(puVar8);
          puVar8 = puVar4;
          func_0x00010bf68c60();
          _objc_retainAutoreleasedReturnValue();
          if (puVar9 == (undefined *)0x11) {
            puVar10 = puVar8;
            func_0x00010c23aec0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar10;
            FUN_10641f514();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar10);
            _objc_release(puVar8);
            if (puVar9 != (undefined *)0x0) {
              puVar8 = PTR_PTR_1126bfe00;
              func_0x00010bf3fe60(PTR_PTR_1126bfe00);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar20);
              _objc_release(puVar8);
              puVar8 = PTR_PTR_1126bfe00;
              func_0x00010bef23e0(PTR_PTR_1126bfe00);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar20);
              goto LAB_106420e70;
            }
          }
          else {
            puVar9 = puVar8;
            func_0x00010bef60a0();
            _objc_release(puVar8);
            if (puVar9 != (undefined *)0x15) goto LAB_1064210a4;
            puVar9 = PTR_PTR_1126bfe00;
            func_0x00010bf3fe60(PTR_PTR_1126bfe00);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar20);
          }
        }
      }
      _objc_release(puVar9);
    }
LAB_1064210a4:
    puVar8 = puVar20;
    func_0x00010bf529e0();
    if (puVar8 != (undefined *)0x0) {
      puVar8 = PTR_PTR_1126bfe00;
      func_0x00010bef22e0(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2);
      _objc_release(puVar8);
    }
    puVar8 = param_1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
    }
    else {
      puVar10 = param_1;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar10;
      func_0x00010c0d3c80();
      _objc_release(puVar10);
    }
    _objc_release(puVar8);
    puVar8 = puVar9;
    func_0x00010bf51e00(puVar9);
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar8);
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(puVar1);
    _objc_retain(puVar4);
    _objc_retain(puVar7);
    puVar10 = puVar2;
    func_0x00010c0d3c80();
    puVar8 = param_2;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar8;
    func_0x00010bef4240();
    _objc_release(puVar8);
    puVar8 = param_2;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar8;
    func_0x00010bf20500();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bef60a0();
    _objc_release(puVar12);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126b9250;
    puVar12 = param_2;
    func_0x00010bef52a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = param_2;
    func_0x00010bef52a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef60a0();
    puVar15 = param_2;
    func_0x00010bef2560(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360(param_2);
    puVar16 = param_2;
    func_0x00010bf89440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf44a40(puVar8);
    _objc_release(puVar16);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(puVar12);
    puVar12 = param_2;
    FUN_10642167c(param_2,param_4,puVar8,puVar7,param_3,puVar1,puVar13,puVar11,puVar4,puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010643497c(puVar10,puVar12,param_2);
    puVar8 = param_2;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar8;
    func_0x00010c274920();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010bf091e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar14);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126b9250;
    if (puVar15 != (undefined *)0x0) {
      puVar14 = param_2;
      func_0x00010bef52a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = param_2;
      func_0x00010bef52a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef60a0();
      puVar16 = param_2;
      func_0x00010bef2560(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29d360(param_2);
      puVar17 = param_2;
      func_0x00010bf89440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf44a40(puVar8);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      puVar14 = param_2;
      FUN_10642167c(param_2,param_4,puVar8,puVar7,param_3,puVar1,puVar13,puVar11,puVar4,0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126bfe00;
      func_0x00010bef1b00(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar10);
      _objc_release(puVar8);
      _objc_release(puVar14);
    }
    puVar11 = puVar10;
    func_0x00010bf51e00(puVar10);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar7);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_release(param_2);
    func_0x00010bef7f60(puVar2);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf8fb00(puVar1);
    func_0x00010c0df6e0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR_PTR_1126bfe00;
    func_0x00010bef24c0(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar2);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar20);
  }
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar3);
LAB_1064215b4:
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106421618; end: 106421647;  */

void FUN_106421618(long param_1)

{
  undefined1 in_w5;
  
  func_0x00010c067c60();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_w5;
  return;
}



/* Entry: 106421648; end: 10642164b;  */

void FUN_106421648(void)

{
  return;
}



/* Entry: 10642164c; end: 10642167b;  */

void FUN_10642164c(long param_1,undefined8 param_2,undefined1 param_3)

{
  func_0x00010c067c60();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 10642167c; end: 106421f3f;  */

void FUN_10642167c(undefined *param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126ca4e0;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c006dc0();
  puVar2 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf20ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1785a0(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_110921ef8);
  _objc_release(param_4);
  if (param_3 == 2) {
    puVar2 = param_1;
    FUN_106421f88(param_1,param_6,param_7,param_2,param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163400(puVar1);
  }
  else {
    if (param_3 != 3) goto LAB_1064218d4;
    puVar2 = PTR_PTR_1126ca698;
    _objc_alloc(PTR_PTR_1126ca698);
    func_0x00010c01d060();
    puVar3 = param_1;
    func_0x00010bef2560(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    FUN_10642a370();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161240(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar3);
    if (param_2 == 3) {
      puVar3 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c274920();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bf5d240();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_6;
      func_0x00010bef6120(param_6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
      uVar8 = uVar7;
      func_0x000106434634(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c168020(puVar2);
      _objc_release(uVar8);
      func_0x00010c21acc0(puVar2);
      _objc_release(uVar7);
    }
    func_0x00010c1633e0(puVar1);
  }
  _objc_release(puVar2);
LAB_1064218d4:
  puVar3 = PTR_PTR_1126b9250;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_2 == 2) {
    puVar5 = param_1;
    func_0x00010bef52a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5d4c0(puVar3);
    func_0x00010c0df760(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208ea0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar5);
    puVar2 = param_1;
    func_0x00010bef52a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf20f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173b20(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bef52a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf20ee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c173b00(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bef52a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf5b580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185d00(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bef52a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0f6400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9a40(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bef2560(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_10642a370();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c164800(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bef4a60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf20fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c116960();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4120(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bef4a60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf5b640();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c116960();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c185d20(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    uVar7 = param_5;
    func_0x00010c09e420(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2085e0(puVar1);
    _objc_release(uVar7);
    func_0x00010c1a83e0(puVar1);
    func_0x00010c1ad080(puVar1);
    func_0x00010c20e8a0(puVar1);
    puVar2 = param_1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    func_0x00010c29d360(param_1);
    puVar5 = param_1;
    func_0x00010c0ea840(param_1);
    puVar6 = param_1;
    func_0x00010bef4a60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010bef2560(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x0001084cc9c4(puVar2,puVar3,puVar5,puVar6,puVar9);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar2);
    if ((int)puVar10 != 0) {
      func_0x00010c195260(puVar1);
      uVar7 = param_5;
      func_0x00010c09e420(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2106c0(puVar1);
      _objc_release(uVar7);
    }
    lVar11 = param_9;
    func_0x00010bf68c60();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bef60a0();
    if (lVar12 != 6) {
      puVar2 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf902a0();
      _objc_release(puVar2);
    }
    _objc_release(lVar11);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199460(puVar1);
    _objc_release(puVar2);
  }
  else {
    func_0x00010c1ad080(puVar1);
  }
  FUN_106434790(param_10,puVar1,param_1,param_2 == 2);
  puVar2 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf31c00();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar6;
  func_0x00010bf31c80();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c253c20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar6;
  func_0x00010c253c40();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (((undefined *)0x1 < puVar9) && (puVar10 == (undefined *)0x4)) {
    puVar2 = param_1;
    FUN_106421f88(param_1,param_6,param_7,param_2,param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c163400(puVar1);
    _objc_release(puVar2);
  }
  puVar2 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010bef4a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  FUN_106434c94(puVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0ae0(puVar1);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_106434e50();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0b00(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106421f40; end: 106421f87;  */

void FUN_106421f40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0844c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106421f88; end: 106422a87;  */

void FUN_106421f88(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ca668;
  _objc_alloc(PTR_PTR_1126ca668);
  uVar2 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf20f80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bf20ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c053520(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf20fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar4;
  func_0x00010bf3fc80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar11;
  func_0x00010bf68c60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2a4760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c070580();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c07f2c0();
    if ((uVar4 & 1) == 0) {
      uVar4 = uVar3;
      func_0x00010c116960(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar4;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    else {
      uVar11 = 0;
    }
    _objc_release(uVar2);
  }
  else {
    uVar11 = 0;
  }
  uVar2 = uVar6;
  func_0x00010c116a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a98a0(puVar1);
  _objc_release(uVar2);
  uVar2 = uVar6;
  func_0x00010bf86880(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212ea0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf5d240();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bfed9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  FUN_106434f9c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ac3a0(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bef56a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  FUN_106435268();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c209160(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  if (param_4 == 3) {
    uVar2 = param_1;
    func_0x00010bef52a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c274920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf5d240();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010bef6120(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar10 = uVar9;
    FUN_1064344cc(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168020(puVar1);
    _objc_release(uVar10);
    _objc_release(uVar9);
  }
  _objc_release(uVar11);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106422a88; end: 106422c0b;  */

void FUN_106422a88(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
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
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR_PTR_1126c9a78;
  func_0x00010bef5320();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  puStack_88 = puVar1;
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126c9a78;
  puStack_70 = puVar2;
  func_0x00010bef54c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_80 = puVar3;
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9a78;
  puStack_68 = puVar4;
  func_0x00010bef5420();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar5;
  func_0x00010c0df840();
  _objc_retainAutoreleasedReturnValue();
  ppuVar14 = &puStack_70;
  ppuVar15 = &puStack_88;
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_60 = puVar6;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  if (param_1 == (undefined *)0x0) {
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(param_2);
    _objc_retain(ppuVar14);
    puVar1 = param_1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    FUN_106423228();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar2 = puVar3;
    func_0x00010bf06520(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf20ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    FUN_10642a370();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar6 = param_1;
    func_0x00010bf461c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bef4240();
    _objc_release(puVar2);
    puVar2 = param_1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010bf20500();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bef60a0();
    _objc_release(puVar8);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b9250;
    puVar8 = param_1;
    func_0x00010bef52a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_1;
    func_0x00010bef52a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef60a0();
    puVar11 = param_1;
    func_0x00010bef2560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360(param_1);
    puVar12 = param_1;
    func_0x00010bf89440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf44a40(puVar2);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    puVar8 = param_1;
    FUN_106423320(param_1,ppuVar15,puVar2,puVar9,puVar7,puVar3,puVar6,puVar1,puVar4,puVar5,ppuVar14,
                  param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010643497c(param_2,puVar8,param_1);
    puVar2 = param_1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar2;
    func_0x00010c274920();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010bf091e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar10);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b9250;
    if (puVar11 != (undefined *)0x0) {
      puVar10 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef60a0();
      puVar12 = param_1;
      func_0x00010bef2560(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29d360(param_1);
      puVar13 = param_1;
      func_0x00010bf89440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf44a40();
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      puVar10 = param_1;
      FUN_106423320(param_1,ppuVar15,(ulong)puVar2 & 0xffffffff,puVar9,puVar7,puVar3,puVar6,puVar1,
                    puVar4,puVar5,ppuVar14,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126bfe00;
      func_0x00010bef1b00(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_2);
      _objc_release(puVar2);
      _objc_release(puVar10);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf8fb00(puVar6);
    func_0x00010c0df6e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126bfe00;
    func_0x00010bef24c0(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_2);
    _objc_release(puVar7);
    _objc_release(puVar2);
    func_0x00010c12d3e0(param_2);
    puVar7 = PTR_PTR_1126b8238;
    func_0x00010c291260();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(puVar7);
    func_0x00010c08fa60(puVar7);
    puVar10 = puVar7;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar11 = puVar9;
    func_0x00010bf686e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar10);
    func_0x00010c1d0640(param_2);
    _objc_release(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar7);
    puVar7 = param_2;
    func_0x00010bf51e00(param_2);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(ppuVar14);
    _objc_release(param_2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106422c0c; end: 106423227;  */

void FUN_106422c0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_106423228();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = lVar2;
  func_0x00010bf06520(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf20ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  FUN_10642a370();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf461c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bef4240();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar6;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010bef60a0();
  _objc_release(lVar8);
  _objc_release(lVar6);
  puVar12 = PTR_PTR_1126b9250;
  lVar6 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef60a0();
  lVar10 = param_1;
  func_0x00010bef2560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360(param_1);
  lVar11 = param_1;
  func_0x00010bf89440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44a40(puVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar6);
  lVar6 = param_1;
  FUN_106423320(param_1,param_4,puVar12,lVar9,lVar7,lVar2,lVar1,puVar3,lVar4,lVar5,param_3,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010643497c(param_2,lVar6,param_1);
  lVar8 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf091e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar10);
  _objc_release(lVar8);
  puVar12 = PTR_PTR_1126b9250;
  if (lVar11 != 0) {
    lVar8 = param_1;
    func_0x00010bef52a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010bef52a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef60a0();
    lVar11 = param_1;
    func_0x00010bef2560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360(param_1);
    lVar13 = param_1;
    func_0x00010bf89440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf44a40();
    _objc_release(lVar13);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar8);
    lVar8 = param_1;
    FUN_106423320(param_1,param_4,(ulong)puVar12 & 0xffffffff,lVar9,lVar7,lVar2,lVar1,puVar3,lVar4,
                  lVar5,param_3,0);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1126bfe00;
    func_0x00010bef1b00(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_2);
    _objc_release(puVar12);
    _objc_release(lVar8);
  }
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf8fb00(lVar1);
  func_0x00010c0df6e0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126bfe00;
  func_0x00010bef24c0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_2);
  _objc_release(puVar14);
  _objc_release(puVar12);
  func_0x00010c12d3e0(param_2);
  puVar14 = PTR_PTR_1126b8238;
  func_0x00010c291260();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(puVar14);
  func_0x00010c08fa60(puVar14);
  puVar15 = puVar14;
  func_0x00010c260c80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar8 = lVar7;
  func_0x00010bf686e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x00010c14de00(puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(puVar15);
  func_0x00010c1d0640(param_2);
  _objc_release(puVar12);
  _objc_release(lVar7);
  _objc_release(puVar14);
  uVar16 = param_2;
  func_0x00010bf51e00(param_2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar16);
  return;
}



/* Entry: 106423228; end: 10642331f;  */

void FUN_106423228(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bef60a0();
  lVar5 = param_1;
  if (lVar1 == 0x14) {
    func_0x00010c242040(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = lVar5;
    func_0x00010bf20540(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1293e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c084160();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    func_0x00010bf20500(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar1 = lVar5;
    func_0x00010bf67c00(lVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106423320; end: 1064242ff;  */

void FUN_106423320(ulong param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  _objc_retain();
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puVar3 = PTR_PTR_1126ca4e0;
  _objc_alloc();
  func_0x00010c006dc0();
  uVar4 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf20ee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1785a0(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (param_3 - 1U < 2) {
    if (param_3 == 2) {
      func_0x000106423fac(puVar3,param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10,param_12);
    }
    puVar1 = PTR_PTR_1126b9250;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (param_2 == 2) {
      uVar4 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5d4c0(puVar1);
      func_0x00010c0df760(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c208ea0(puVar3);
      _objc_release(puVar6);
      _objc_release(uVar4);
      uVar7 = param_11;
      func_0x00010c09e420(param_11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2085e0(puVar3);
      _objc_release(uVar7);
      uVar4 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf20f80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173b20(puVar3);
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar4 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf5b580();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c185d00(puVar3);
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar4 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf20ee0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c173b00(puVar3);
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar4 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0f6400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9a40(puVar3);
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar4 = param_1;
      func_0x00010bef2560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      FUN_10642a370();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c164800(puVar3);
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar4 = param_1;
      func_0x00010bef4a60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf20fa0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c116960();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1e4120(puVar3);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar4 = param_1;
      func_0x00010bef4a60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf5b640();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c116960();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c185d20(puVar3);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar5);
      _objc_release(uVar4);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199460(puVar3);
      _objc_release(puVar6);
      func_0x00010c1a83e0(puVar3);
      func_0x00010c1ad080(puVar3);
      func_0x00010c20e8a0(puVar3);
      uVar4 = param_1;
      func_0x00010bef52a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010c29d360(param_1);
      uVar8 = param_1;
      func_0x00010c0ea840(param_1);
      uVar9 = param_1;
      func_0x00010bef4a60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = param_1;
      func_0x00010bef2560(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar4;
      func_0x0001084cc9c4(uVar4,uVar5,uVar8,uVar9,uVar10);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar4);
      if ((int)uVar11 != 0) {
        func_0x00010c195260(puVar3);
        uVar7 = param_11;
        func_0x00010c09e420(param_11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2106c0(puVar3);
        _objc_release(uVar7);
      }
      bVar2 = true;
    }
    else {
      func_0x00010c1ad080(puVar3);
      bVar2 = false;
    }
  }
  else {
    if (param_3 != 0) goto LAB_10642386c;
    bVar2 = param_2 == 2;
  }
  FUN_106434790(param_12,puVar3,param_1,bVar2);
LAB_10642386c:
  uVar4 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf31c00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf31c80();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar5;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c253c20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar9;
  func_0x00010c253c40();
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if ((1 < uVar10) && (uVar11 == 4)) {
    func_0x000106423fac(puVar3,param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_12);
  }
  uVar4 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bef4a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  FUN_106434c94(uVar4,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0ae0(puVar3);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = param_1;
  func_0x00010bef52a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_106434e50();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0b00(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106424300; end: 10642438b;  */

void FUN_106424300(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  func_0x00010bef60a0();
  if (param_1 == 0x14) {
    func_0x00010af470ac();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126bfe00;
    func_0x00010c0fbde0(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_2);
    _objc_release(puVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10642438c; end: 106425103;  */

void FUN_10642438c(long param_1,ulong param_2,undefined **param_3,undefined ***param_4,ulong param_5
                  )

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined *puStack_128;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = param_2;
  ppuVar16 = param_3;
  pppuVar17 = param_4;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c082c60();
  if (((int)lVar1 == 0) || (lVar1 = param_1, func_0x00010bf423e0(), lVar1 != 3)) {
    ppuVar18 = (undefined **)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ca670;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010bf20e60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c116260();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = PTR__OBJC_CLASS___NSURL_1126ae598;
    lVar4 = param_1;
    func_0x00010c257dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf289a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c053320();
    _objc_release(lVar5);
    _objc_release(puVar19);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    puVar19 = PTR____NSArray0__struct_11034ab48;
    if ((param_5 & 1) == 0) {
      puVar6 = PTR_PTR_1126ca3f0;
      _objc_opt_class();
      puVar19 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_70 = puVar6;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuStack_90 = &PTR____CFConstantStringClassReference_110f0e2b8;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110e4ed38;
    ppuVar16 = &puStack_80;
    pppuVar17 = &ppuStack_90;
    ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar19;
    puStack_78 = puVar2;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar19);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(uVar15);
    _objc_retain(ppuVar16);
    _objc_retain(pppuVar17);
    lVar1 = param_1;
    func_0x00010bef60a0();
    lVar3 = param_1;
    if (lVar1 == 10) {
      puVar19 = PTR_PTR_1126bfe00;
      func_0x00010bf3fe60(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar16);
      _objc_release(puVar19);
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar4;
      func_0x00010bf3fc80();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf68c60();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar8;
      func_0x00010c23aec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
    }
    else {
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c23aea0();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = lVar5;
    func_0x00010bf68520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puStack_128 = PTR__OBJC_CLASS___NSURL_1126ae598;
    lVar4 = lVar5;
    if (lVar3 == 0) {
      func_0x00010c2a2e80(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010c2a4740();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      puVar19 = (undefined *)0x0;
    }
    else {
      lVar3 = lVar5;
      func_0x00010bf68520();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      func_0x00010c28f280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar3);
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bf68520(lVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010bf68360();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puStack_128;
      puStack_128 = puVar2;
    }
    _objc_release(lVar3);
    _objc_release(lVar4);
    lVar3 = lVar5;
    func_0x00010c23b140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ca670;
    _objc_alloc(PTR_PTR_1126ca670);
    lVar4 = param_1;
    func_0x00010bf20f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar15;
    func_0x00010bef2c20(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar15;
    func_0x00010c0fcb00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar15;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf289a0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = uVar11;
    func_0x00010c053320(puVar2);
    _objc_release(lVar7);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(lVar4);
    if (lVar1 == 10) {
      lVar1 = param_1;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      puVar6 = PTR_PTR_1126c7d40;
      _objc_opt_new();
      func_0x00010c2bc200();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar12 = puVar6;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puStack_128;
      func_0x000106d5c450(puStack_128);
      puVar14 = puVar12;
      FUN_106425f3c(puVar12,puVar13,PTR____NSDictionary0__struct_11034ab58,0,0,0,pppuVar17,uVar15,
                    param_1,uVar20 & 0xffffffffffffff00);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      puVar12 = puVar14;
      func_0x00010bf529e0();
      if (puVar12 != (undefined *)0x0) {
        func_0x00010bef7f60(ppuVar16);
      }
      lVar1 = lVar4;
      func_0x00010bf3fc80();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar1;
      FUN_10641f710();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar7;
      func_0x00010bf529e0();
      if (lVar1 != 0) {
        func_0x00010bef7f60(ppuVar16);
      }
      _objc_release(lVar7);
      _objc_release(puVar14);
      _objc_release(puVar6);
      _objc_release(lVar4);
    }
    else {
      puVar6 = PTR_PTR_1126ca3f0;
      _objc_opt_class(PTR_PTR_1126ca3f0);
      func_0x00010642a968(ppuVar16,puVar6);
    }
    func_0x00010c1d0640(ppuVar16);
    ppuVar18 = ppuVar16;
    func_0x00010bf51e00(ppuVar16);
    _objc_release(puVar2);
    _objc_release(lVar3);
    _objc_release(lVar5);
    _objc_release(puVar19);
    _objc_release(puStack_128);
    _objc_release(pppuVar17);
    _objc_release(ppuVar16);
    _objc_release(uVar15);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar18);
  return;
}



/* Entry: 106425104; end: 10642519b;  */

void FUN_106425104(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c1d0640(param_2);
  func_0x000107aeabb8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bfe00;
  func_0x00010c0fbde0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10642519c; end: 106425beb;  */

/* WARNING: Possible PIC construction at 0x00010642527c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106425868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010642591c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106425330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106425920) */
/* WARNING: Removing unreachable block (ram,0x00010642586c) */
/* WARNING: Removing unreachable block (ram,0x000106425280) */
/* WARNING: Removing unreachable block (ram,0x000106425334) */

void FUN_10642519c(undefined **param_1,undefined **param_2,undefined **param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined **unaff_x24;
  undefined8 unaff_x25;
  undefined **unaff_x28;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined1 auStack_170 [8];
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  puVar1 = auStack_170;
  puVar16 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bdd80;
  _objc_opt_class();
  ppuVar9 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_2);
  _objc_release(puVar3);
  ppuVar12 = &PTR_PTR_1126b8000;
  ppuVar10 = (undefined **)PTR_PTR_1126b8ca8;
  func_0x00010c159be0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar10;
  func_0x00010bf529e0();
  _objc_release(ppuVar10);
  if (ppuVar15 == (undefined **)0x0) {
    ppuVar10 = (undefined **)PTR_PTR_1126b8ca8;
    func_0x00010c0f01e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar15 = ppuVar10;
    func_0x00010c08fa60();
    _objc_release(ppuVar10);
    if (ppuVar15 == (undefined **)0x0) {
      ppuVar10 = (undefined **)PTR_PTR_1126b8ca8;
      func_0x00010c159fe0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar15 = ppuVar10;
      func_0x00010c08fa60();
      _objc_release(ppuVar10);
      if (ppuVar15 == (undefined **)0x0) {
        ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new();
        lStack_148 = 0;
        uStack_150 = 0;
        uStack_138 = 0;
        plStack_140 = (long *)0x0;
        uStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        ppuVar10 = param_1;
        func_0x00010c096c80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar10;
        func_0x00010bf52a60();
        if (ppuVar15 != (undefined **)0x0) {
          lVar13 = *plStack_140;
          unaff_x24 = &PTR____CFConstantStringClassReference_110f0e3b8;
          ppuStack_168 = param_3;
          ppuStack_160 = param_2;
          ppuStack_158 = param_1;
          do {
            ppuVar9 = (undefined **)0x0;
            do {
              if (*plStack_140 != lVar13) {
                _objc_enumerationMutation(ppuVar10);
              }
              unaff_x28 = *(undefined ***)(lStack_148 + (long)ppuVar9 * 8);
              puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
              _objc_opt_new();
              ppuVar5 = unaff_x28;
              func_0x00010c14f6c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (ppuVar5 != (undefined **)0x0) {
                ppuVar5 = unaff_x28;
                func_0x00010c14f6c0(unaff_x28);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar2);
                _objc_release(ppuVar5);
              }
              ppuVar5 = unaff_x28;
              func_0x00010c14f6e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (ppuVar5 != (undefined **)0x0) {
                ppuVar5 = unaff_x28;
                func_0x00010c14f6e0(unaff_x28);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar2);
                _objc_release(ppuVar5);
              }
              puVar3 = puVar2;
              func_0x00010bf529e0();
              if (puVar3 != (undefined *)0x0) {
                func_0x00010befa120(ppuVar12);
              }
              _objc_release(puVar2);
              ppuVar9 = (undefined **)((long)ppuVar9 + 1);
            } while (ppuVar15 != ppuVar9);
            ppuVar15 = ppuVar10;
            func_0x00010bf52a60();
          } while (ppuVar15 != (undefined **)0x0);
          unaff_x25 = 0;
          param_1 = ppuStack_158;
          param_2 = ppuStack_160;
          param_3 = ppuStack_168;
        }
        _objc_release(ppuVar10);
        func_0x00010c1d0640(param_2);
        ppuVar15 = param_3;
        func_0x00010bef2c20(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_2);
        _objc_release(ppuVar15);
        ppuVar9 = param_3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_2);
        _objc_release(ppuVar9);
        ppuVar4 = param_2;
        func_0x00010bf51e00();
        _objc_release(ppuVar12);
        _objc_release(param_3);
        _objc_release(param_2);
        ppuVar5 = param_1;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70)
        goto _objc_autoreleaseReturnValue;
        uVar17 = 0x1064255c4;
        ___stack_chk_fail();
        puVar1 = auStack_170;
        ppuVar15 = ppuVar4;
        goto SUB_1064255c4;
      }
      ppuVar10 = (undefined **)PTR_PTR_1126b8ca8;
      func_0x00010c159fe0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_88 = ppuVar10;
    }
    else {
      ppuVar10 = (undefined **)PTR_PTR_1126b8ca8;
      func_0x00010c0f01e0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_80 = ppuVar10;
    }
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = 0x106425334;
    unaff_x24 = ppuVar5;
  }
  else {
    ppuVar5 = (undefined **)PTR_PTR_1126b8ca8;
    func_0x00010c159be0();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = 0x106425280;
    puVar1 = auStack_170;
    ppuVar10 = ppuVar5;
  }
SUB_1064255c4:
  do {
    while( true ) {
      ppuVar6 = ppuVar11;
      *(undefined ***)(puVar1 + -0x60) = unaff_x28;
      *(undefined ***)(puVar1 + -0x58) = param_3;
      *(undefined ***)(puVar1 + -0x50) = param_2;
      *(undefined8 *)(puVar1 + -0x48) = unaff_x25;
      *(undefined ***)(puVar1 + -0x40) = unaff_x24;
      *(undefined ***)(puVar1 + -0x38) = ppuVar15;
      *(undefined ***)(puVar1 + -0x30) = ppuVar10;
      *(undefined ***)(puVar1 + -0x28) = param_1;
      *(undefined ***)(puVar1 + -0x20) = ppuVar12;
      *(undefined ***)(puVar1 + -0x18) = ppuVar9;
      *(undefined1 **)(puVar1 + -0x10) = puVar16;
      *(undefined8 *)(puVar1 + -8) = uVar17;
      *(undefined8 *)(puVar1 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      _objc_retain();
      ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      *(undefined8 *)(puVar1 + -0x128) = 0;
      *(undefined8 *)(puVar1 + -0x130) = 0;
      *(undefined8 *)(puVar1 + -0x118) = 0;
      *(undefined8 *)(puVar1 + -0x120) = 0;
      *(undefined8 *)(puVar1 + -0x108) = 0;
      *(undefined8 *)(puVar1 + -0x110) = 0;
      *(undefined8 *)(puVar1 + -0xf8) = 0;
      *(undefined8 *)(puVar1 + -0x100) = 0;
      _objc_retain(ppuVar5);
      ppuVar12 = (undefined **)(puVar1 + -0x130);
      *(undefined ***)(puVar1 + -0x138) = ppuVar5;
      func_0x00010bf52a60();
      if (ppuVar5 != (undefined **)0x0) {
        param_3 = (undefined **)**(undefined8 **)(puVar1 + -0x120);
        param_1 = &PTR____CFConstantStringClassReference_110f0e3b8;
        ppuVar15 = &PTR____CFConstantStringClassReference_110f0e3d8;
        unaff_x28 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        unaff_x24 = &PTR____CFConstantStringClassReference_110db2d38;
        do {
          ppuVar10 = (undefined **)0x0;
          do {
            if ((undefined **)**(long **)(puVar1 + -0x120) != param_3) {
              _objc_enumerationMutation(*(undefined8 *)(puVar1 + -0x138));
            }
            unaff_x25 = *(undefined8 *)(*(long *)(puVar1 + -0x128) + (long)ppuVar10 * 8);
            param_2 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
            _objc_opt_new();
            func_0x00010c1d0640();
            func_0x00010c1d0640(param_2);
            func_0x00010befa120(ppuVar4);
            _objc_release(param_2);
            ppuVar10 = (undefined **)((long)ppuVar10 + 1);
          } while (ppuVar5 != ppuVar10);
          ppuVar12 = (undefined **)(puVar1 + -0x130);
          ppuVar5 = *(undefined ***)(puVar1 + -0x138);
          func_0x00010bf52a60();
          ppuVar10 = (undefined **)0x0;
        } while (ppuVar5 != (undefined **)0x0);
      }
      ppuVar11 = *(undefined ***)(puVar1 + -0x138);
      _objc_release(ppuVar11);
      ppuVar9 = ppuVar11;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0x70))
      goto _objc_autoreleaseReturnValue;
      ___stack_chk_fail();
      *(undefined ***)(puVar1 + -0x1a0) = unaff_x28;
      *(undefined ***)(puVar1 + -0x198) = param_3;
      *(undefined ***)(puVar1 + -400) = param_2;
      *(undefined8 *)(puVar1 + -0x188) = unaff_x25;
      *(undefined ***)(puVar1 + -0x180) = unaff_x24;
      *(undefined ***)(puVar1 + -0x178) = ppuVar15;
      *(undefined ***)(puVar1 + -0x170) = ppuVar10;
      *(undefined ***)(puVar1 + -0x168) = param_1;
      *(undefined ***)(puVar1 + -0x160) = ppuVar4;
      *(undefined ***)(puVar1 + -0x158) = ppuVar11;
      *(undefined1 **)(puVar1 + -0x150) = puVar1 + -0x10;
      *(undefined8 *)(puVar1 + -0x148) = 0x106425748;
      puVar16 = puVar1 + -0x150;
      *(undefined8 *)(puVar1 + -0x1b0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      ppuVar11 = ppuVar6;
      _objc_retain(ppuVar6);
      _objc_retain(ppuVar12);
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      param_2 = ppuVar10;
      func_0x00010bef59c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      puVar2 = PTR_PTR_1126bdd80;
      _objc_opt_class();
      *(undefined **)(puVar1 + -0x1b8) = puVar2;
      ppuVar9 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar12);
      _objc_release(puVar2);
      param_1 = (undefined **)PTR_PTR_1126b8ca8;
      func_0x00010c159be0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = param_1;
      func_0x00010bf529e0();
      _objc_release(param_1);
      ppuVar15 = ppuVar6;
      unaff_x24 = ppuVar12;
      if (ppuVar10 == (undefined **)0x0) break;
      ppuVar5 = (undefined **)PTR_PTR_1126b8ca8;
      func_0x00010c159be0();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = 0x10642586c;
      puVar1 = puVar1 + -0x2c0;
      ppuVar12 = ppuVar5;
    }
    ppuVar5 = (undefined **)PTR_PTR_1126b8ca8;
    func_0x00010c0f01e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar5;
    func_0x00010c08fa60();
    _objc_release(ppuVar5);
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar5 = (undefined **)PTR_PTR_1126b8ca8;
      func_0x00010c159fe0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar5;
      func_0x00010c08fa60();
      _objc_release(ppuVar5);
      if (ppuVar10 == (undefined **)0x0) break;
      ppuVar12 = (undefined **)PTR_PTR_1126b8ca8;
      func_0x00010c159fe0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)(puVar1 + -0x1c8) = ppuVar12;
    }
    else {
      ppuVar12 = (undefined **)PTR_PTR_1126b8ca8;
      func_0x00010c0f01e0();
      _objc_retainAutoreleasedReturnValue();
      *(undefined ***)(puVar1 + -0x1c0) = ppuVar12;
    }
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = 0x106425920;
    puVar1 = puVar1 + -0x2c0;
    param_1 = ppuVar5;
  } while( true );
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  *(undefined8 *)(puVar1 + -0x288) = 0;
  *(undefined8 *)(puVar1 + -0x290) = 0;
  *(undefined8 *)(puVar1 + -0x278) = 0;
  *(undefined8 *)(puVar1 + -0x280) = 0;
  *(undefined8 *)(puVar1 + -0x268) = 0;
  *(undefined8 *)(puVar1 + -0x270) = 0;
  *(undefined8 *)(puVar1 + -600) = 0;
  *(undefined8 *)(puVar1 + -0x260) = 0;
  ppuVar10 = param_2;
  func_0x00010c096c80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar10;
  func_0x00010bf52a60();
  if (ppuVar15 != (undefined **)0x0) {
    *(undefined ***)(puVar1 + -0x2a0) = ppuVar6;
    *(undefined ***)(puVar1 + -0x298) = ppuVar10;
    *(undefined ***)(puVar1 + -0x2b0) = param_2;
    *(undefined ***)(puVar1 + -0x2a8) = ppuVar12;
    lVar13 = **(long **)(puVar1 + -0x280);
    do {
      ppuVar10 = (undefined **)0x0;
      do {
        if (**(long **)(puVar1 + -0x280) != lVar13) {
          _objc_enumerationMutation(*(undefined8 *)(puVar1 + -0x298));
        }
        lVar14 = *(long *)(*(long *)(puVar1 + -0x288) + (long)ppuVar10 * 8);
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        lVar7 = lVar14;
        func_0x00010c14f6c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          lVar7 = lVar14;
          func_0x00010c14f6c0(lVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(lVar7);
        }
        lVar7 = lVar14;
        func_0x00010c14f6e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (lVar7 != 0) {
          func_0x00010c14f6e0();
          _objc_retainAutoreleasedReturnValue();
          *(undefined ***)(puVar1 + -0x2c0) = &PTR____CFConstantStringClassReference_110db1158;
          *(long *)(puVar1 + -0x2b8) = lVar14;
          func_0x00010c14de00(puVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar14);
          func_0x00010c1d0640(puVar3);
          _objc_release(puVar8);
        }
        puVar8 = puVar3;
        func_0x00010bf529e0();
        if (puVar8 != (undefined *)0x0) {
          func_0x00010befa120(puVar2);
        }
        _objc_release(puVar3);
        ppuVar10 = (undefined **)((long)ppuVar10 + 1);
      } while (ppuVar15 != ppuVar10);
      ppuVar15 = *(undefined ***)(puVar1 + -0x298);
      func_0x00010bf52a60();
    } while (ppuVar15 != (undefined **)0x0);
    ppuVar12 = *(undefined ***)(puVar1 + -0x2a8);
    ppuVar6 = *(undefined ***)(puVar1 + -0x2a0);
    param_2 = *(undefined ***)(puVar1 + -0x2b0);
    ppuVar10 = *(undefined ***)(puVar1 + -0x298);
  }
  _objc_release(ppuVar10);
  func_0x00010c1d0640(ppuVar12);
  ppuVar15 = ppuVar6;
  func_0x00010bef2c20(ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar12);
  _objc_release(ppuVar15);
  ppuVar15 = ppuVar6;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(ppuVar12);
  _objc_release(ppuVar15);
  ppuVar4 = ppuVar12;
  func_0x00010bf51e00();
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(ppuVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar1 + -0x1b0)) {
    ___stack_chk_fail();
    *(undefined **)(puVar1 + -0x2f0) = puVar2;
    *(undefined ***)(puVar1 + -0x2e8) = ppuVar4;
    *(undefined ***)(puVar1 + -0x2e0) = ppuVar10;
    *(undefined ***)(puVar1 + -0x2d8) = ppuVar15;
    *(undefined1 **)(puVar1 + -0x2d0) = puVar16;
    *(code **)(puVar1 + -0x2c8) = FUN_106425bec;
    _objc_retain(ppuVar11);
    func_0x00010bef60a0();
    if (ppuVar6 == (undefined **)0xe) {
      func_0x000107aeabd0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126bfe00;
      func_0x00010c0fbde0(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar11);
      _objc_release(puVar2);
      _objc_release(ppuVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar11);
    return;
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 106425bec; end: 106425dbf;  */

void FUN_106425bec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  func_0x00010bef60a0();
  if (param_1 == 0xe) {
    func_0x000107aeabd0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126bfe00;
    func_0x00010c0fbde0(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_2);
    _objc_release(puVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106425dc0; end: 106425e43;  */

bool FUN_106425dc0(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  func_0x00010c29d360();
  if (param_1 - 0x2bU < 0x3b && (1L << (param_1 - 0x2bU & 0x3f) & 0x480110040000007U) != 0 ||
      param_1 == 5) {
    lVar2 = param_2;
    func_0x00010c2a3520(param_2);
    bVar1 = lVar2 == 2;
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106425e44; end: 106425f3b;  */

void FUN_106425e44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bef60a0();
  lVar5 = param_1;
  if (lVar1 == 0x14) {
    func_0x00010c242040(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar2 = lVar5;
    func_0x00010bf20540(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c1293e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c084160();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010c2a4760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  else {
    func_0x00010bf20500(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar1 = lVar5;
    func_0x00010c2a4740(lVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106425f3c; end: 10642852b;  */

void FUN_106425f3c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puStack_110;
  long lStack_d0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar3 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f0be78);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = param_1;
  func_0x00010bf80980(param_1);
  func_0x00010c0df6e0(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f0cc98);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126b8238;
  func_0x00010c291260(PTR_PTR_1126b8238);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110f0bbd8);
  _objc_release(puVar3);
  puVar3 = param_1;
  func_0x00010c28f340(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puStack_110 = PTR_PTR_1126b8cf0;
  func_0x00010c0f0460();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puStack_110;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    puVar3 = PTR_PTR_1126c7d48;
    func_0x00010c082440(PTR_PTR_1126c7d48,param_2,puStack_110);
    puVar4 = puStack_110;
    if ((int)puVar3 != 0) {
      puVar4 = PTR_PTR_1126c7d48;
      func_0x00010bf93280(PTR_PTR_1126c7d48,param_2,puStack_110);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_110);
    }
    _objc_retain(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar4;
    puStack_110 = puVar4;
  }
  puVar3 = PTR_PTR_1126ca690;
  lVar22 = param_9;
  func_0x00010bef60a0(param_9);
  lVar5 = param_9;
  func_0x00010c242040(param_9);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf20540();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_8;
  func_0x00010c15ed20(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb5ac0(puVar3,param_2,puVar2,lVar22,lVar6,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110f0cad8);
  lVar22 = param_9;
  func_0x00010c2a3d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar22;
  func_0x00010bf39760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar22);
  if (lVar5 != 0) {
    lVar22 = lVar5;
    func_0x00010bf397a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar22;
    func_0x00010bf529e0();
    _objc_release(lVar22);
    if (lVar6 != 0) {
      lStack_d0 = lVar5;
      func_0x00010bf397a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9a920();
      lVar22 = lVar5;
      func_0x00010c2a49a0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1064262a8;
    }
  }
  lStack_d0 = 0;
  lVar22 = 0;
LAB_1064262a8:
  puVar4 = PTR_PTR_1126ca6d8;
  _objc_alloc();
  uVar7 = param_8;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_8;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_8;
  func_0x00010c0fcb00();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_8;
  func_0x00010bef60a0();
  uVar11 = param_8;
  func_0x00010bef4240();
  uVar12 = param_8;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_8;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bfecde0();
  uVar15 = param_5;
  func_0x00010bf80ee0();
  func_0x00010bf01060();
  func_0x00010bf8f440();
  uVar16 = param_5;
  func_0x00010c118380();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c117dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  uVar18 = param_5;
  func_0x00010bf96040();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010bf96060();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x00010bf45f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf91b40();
  lVar6 = param_9;
  func_0x00010c13dee0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff17a0(puVar4,param_2,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar14,(char)uVar15);
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110eb1798);
  _objc_release(puVar4);
  _objc_release(lVar6);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar21 = param_1;
  func_0x00010c22a6e0(param_1);
  func_0x00010c0df6e0(puVar4,param_2,puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0caf8);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar21 = param_1;
  func_0x00010bf916c0(param_1);
  func_0x00010c0df6e0(puVar4,param_2,puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0cc58);
  _objc_release(puVar4);
  puVar4 = param_1;
  func_0x00010c107700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010c107700(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110eb1538);
    _objc_release(puVar4);
  }
  puVar4 = param_1;
  func_0x00010c107360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010c107360(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110eb1558);
    _objc_release(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar21 = param_1;
  func_0x00010bf8f5c0(param_1);
  func_0x00010c0df6e0(puVar4,param_2,puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0ccf8);
  _objc_release(puVar4);
  puVar4 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c1d0640(puVar1,param_2,PTR____kCFBooleanTrue_11034ab68,
                      &PTR____CFConstantStringClassReference_110f0cef8);
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0cf38);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar21 = param_1;
  func_0x00010bf6aea0(param_1);
  func_0x00010c0df6e0(puVar4,param_2,puVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110f0ccd8);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = param_7;
  func_0x00010bf91840(param_7);
  func_0x00010c0df6e0(puVar4,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110eb15b8);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = param_5;
  func_0x00010bf80ee0(param_5);
  func_0x00010c0df6e0(puVar4,param_2,uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110eb1778);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ca688;
  func_0x00010c064280(PTR_PTR_1126ca688,param_2,puVar2,param_7);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar4;
  func_0x00010bf529e0();
  if (puVar21 != (undefined *)0x0) {
    func_0x00010c1d0640(puVar1,param_2,puVar4,&PTR____CFConstantStringClassReference_110eb15d8);
  }
  puVar21 = PTR_PTR_1126c7cd0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x10642692c;
  puStack_98 = &UNK_110921f18;
  uStack_90 = param_7;
  uStack_88 = param_8;
  _objc_retain(param_9);
  lStack_80 = param_9;
  uStack_6f = param_10;
  uStack_78 = param_5;
  uStack_70 = param_6;
  _objc_retain();
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bf21780(puVar21,param_2,1,param_3,param_4,1,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1,param_2,puVar21);
  lVar6 = param_9;
  func_0x00010c13dee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    FUN_10642a49c(puVar1);
  }
  _objc_release(puVar21);
  _objc_release(uStack_78);
  _objc_release(lStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_5);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puVar4);
  _objc_release(lVar22);
  _objc_release(lStack_d0);
  _objc_release(lVar5);
  _objc_release(puVar2);
  _objc_release(puStack_110);
  _objc_release(puVar3);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10642852c; end: 106428843;  */

void FUN_10642852c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_106425e44();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puVar1 = puVar2;
  func_0x00010c067c00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf600();
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf902a0();
  _objc_release(puVar1);
  if ((int)puVar7 == 0) {
    puVar1 = param_1;
    func_0x00010c2a3540();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010bf90880();
    if ((((ulong)puVar3 & 1) == 0) && (*(char *)(puStack_68 + 3) != '\x01')) {
LAB_1064287d4:
      _objc_release(puVar7);
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar3 = puVar2;
      func_0x00010c067c00();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        puVar3 = param_1;
        func_0x00010c2a3540();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf90860();
        if ((int)puVar5 == 0) {
          _objc_release(puVar4);
          _objc_release(puVar3);
          goto LAB_1064287d4;
        }
        puVar5 = param_1;
        func_0x00010bef52a0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c075ae0();
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar7);
        _objc_release(puVar1);
        if ((int)puVar6 == 0) {
          puVar7 = (undefined *)0x0;
          goto LAB_1064287e8;
        }
      }
      else {
        _objc_release();
        _objc_release(puVar7);
        _objc_release(puVar1);
      }
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      FUN_10642a5c0();
      puVar7 = puVar1;
      func_0x00010bf51e00(puVar1);
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar7 = PTR_PTR_1126bfe00;
    func_0x00010c12a860(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126bfe00;
    func_0x00010c12a880(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar7);
    FUN_10642a3f8(puVar1);
    puVar7 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  _objc_release(puVar1);
LAB_1064287e8:
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106428844; end: 106428873;  */

void FUN_106428844(long param_1)

{
  undefined1 in_w5;
  
  func_0x00010c067c60();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_w5;
  return;
}



/* Entry: 106428874; end: 106428877;  */

void FUN_106428874(void)

{
  return;
}



/* Entry: 106428878; end: 1064288a7;  */

void FUN_106428878(long param_1,undefined8 param_2,undefined1 param_3)

{
  func_0x00010c067c60();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 1064288a8; end: 106429037; -[SCAdResponseOperaParseResult commonPagePropertiesWithCtaType:] */

void FUN_1064288a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  lVar1 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b2368;
  _objc_opt_new(PTR_PTR_1126b2368);
  lVar1 = param_1;
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf42920();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2b53e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar1);
  _objc_release(puVar4);
  lVar1 = lVar2;
  func_0x00010c280580(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53a0(puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = puVar6;
  func_0x00010c1531a0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  lVar1 = lVar3;
  func_0x00010bef4240();
  if ((lVar1 == 0x16) && (lVar1 = lVar2, func_0x00010bef60a0(), lVar1 == 6)) {
    lVar1 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf1f480();
    _objc_release(lVar5);
    _objc_release(lVar1);
    if ((int)lVar7 != 0) {
      func_0x00010c1d0640(puVar4);
    }
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bef4240(lVar3);
  func_0x0001084b952c();
  func_0x00010c0df780(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar8);
  lVar1 = lVar3;
  func_0x00010bef60a0();
  if (lVar1 == 10) {
    lVar5 = lVar2;
    func_0x00010c242040(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar7;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x00010bf68c60();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar10;
    func_0x00010bef60a0();
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(lVar5);
  }
  else {
    lVar1 = lVar3;
    func_0x00010bef60a0(lVar3);
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x0001084b9550(lVar1);
  func_0x00010c0df780(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = lVar2;
  func_0x00010bf5ac40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9a78;
  func_0x00010bef5320(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(lVar1);
  func_0x00010c1d0640(puVar4);
  lVar1 = param_1;
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0c5880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c0c5880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(lVar5);
  _objc_release(lVar1);
  func_0x00010c1d0640(puVar4);
  lVar1 = lVar3;
  func_0x00010bef2c20(lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9a78;
  func_0x00010bef5380(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar8);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010c15ed20(lVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9a78;
  func_0x00010bef5480(PTR_PTR_1126c9a78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar8);
  _objc_release(lVar1);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = lVar2;
  func_0x00010bf20ee0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = lVar2;
  func_0x00010bf20f80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (param_3 != 2) {
    func_0x00010c1d0640(puVar4);
    func_0x00010c1d0640(puVar4);
  }
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = lVar2;
  func_0x00010bf5ac40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bef60a0(lVar3);
  lVar7 = lVar3;
  func_0x00010bef4240(lVar3);
  puVar13 = puVar12;
  FUN_106422a88(puVar12,lVar5,lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(lVar1);
  puVar12 = PTR_PTR_1126aedf8;
  func_0x00010befddc0(PTR_PTR_1126aedf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar12);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07db60(lVar2);
  func_0x00010c0df6e0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar12);
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c06bbc0(lVar2);
  func_0x00010c0df6e0(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b2d20;
  func_0x00010c06bbc0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar13);
  _objc_release(puVar12);
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c1001c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126bfe00;
  func_0x00010bef3d00(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar4);
  _objc_release(puVar12);
  _objc_release(lVar1);
  _objc_release(param_1);
  puVar12 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106429038; end: 10642a267; -[SCAdResponseOperaParseResult contextMenuParams:adId:topSnapPageProperties:viewLocation:adConfigProvider:mediaIsReady:contentDeliveryMedia:operaNavigationStyle:ctaType:cardType:isAdPreview:contextSessionId:subscribeStatusHandler:hostAccountUserId:adConfigProviderV2:] */

void FUN_106429038(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,undefined *param_6,long param_7,undefined8 param_8,uint param_9
                  ,undefined *param_10,undefined4 param_11,undefined4 param_12,long param_13,
                  int param_14,byte param_15,undefined8 param_16,long param_17,undefined8 param_18,
                  ulong param_19)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
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
  ulong uVar22;
  undefined *puVar23;
  uint uVar24;
  undefined *puVar25;
  undefined *puVar26;
  uint uVar27;
  uint uVar28;
  undefined *puVar29;
  undefined *puStack_168;
  undefined *puStack_160;
  uint uStack_138;
  undefined *puStack_e0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  uint uStack_80;
  uint uStack_7c;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  if ((((param_7 - 0x49U < 0x1a) && ((1L << (param_7 - 0x49U & 0x3f) & 0x2020001U) != 0)) ||
      ((uVar22 = param_7 - 0x57U >> 1, (uVar22 | param_7 - 0x57U << 0x3f) < 8 &&
       ((1L << (uVar22 & 0x3f) & 0xb1U) != 0)))) ||
     ((param_7 - 0x42U < 0x2a && ((1L << (param_7 - 0x42U & 0x3f) & 0x3c000100701U) != 0)))) {
    uStack_138 = (uint)(param_7 == 0x17);
LAB_106429170:
    uStack_7c = 1;
  }
  else {
    if (param_7 == 0x17) {
      uStack_138 = 1;
      goto LAB_106429170;
    }
    if (param_13 == 2) {
      uVar22 = param_19;
      func_0x00010c0ec0c0(param_19,param_3,&PTR____CFConstantStringClassReference_110e4d638);
      uStack_7c = (uint)uVar22;
      uStack_138 = 0;
    }
    else {
      uStack_138 = 0;
      uStack_7c = 0;
    }
  }
  puVar25 = param_6;
  func_0x00010c0e00e0(param_6,param_3,&PTR____CFConstantStringClassReference_110f0e2b8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar25 == (undefined *)0x0) {
    puVar26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain();
    puStack_e0 = puVar26;
  }
  else {
    puVar26 = param_6;
    func_0x00010c0e00e0(param_6,param_3,&PTR____CFConstantStringClassReference_110f0e2b8);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar26;
    func_0x00010c0d3c80();
    _objc_retain();
    _objc_release(puStack_e0);
  }
  _objc_release(puVar26);
  _objc_release(puVar25);
  puVar25 = param_4;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010bf091e0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar26;
  func_0x00010c230240();
  _objc_release(puVar26);
  _objc_release(puVar25);
  puVar25 = param_4;
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar26;
  func_0x00010c2a1780();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar29;
  func_0x00010c2a1800();
  _objc_release(puVar29);
  _objc_release(puVar26);
  _objc_release(puVar25);
  if (puVar7 + -1 < (undefined *)0x2) {
    puVar25 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar26 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,puVar7 == (undefined *)0x2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c060400(puVar25,param_3,puVar26);
    _objc_release(puVar26);
    uVar22 = param_19;
    func_0x00010c0ec0c0(param_19,param_3,&PTR____CFConstantStringClassReference_110e4edb8);
    if ((uVar22 & 1) == 0) {
      puVar26 = PTR_PTR_1126bfe00;
      func_0x00010bef63e0(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6,param_3,puVar25,puVar26);
      _objc_release(puVar26);
    }
    _objc_retain(puVar25);
    _objc_release(puVar25);
  }
  else {
    puVar25 = (undefined *)0x0;
  }
  puVar26 = param_4;
  func_0x00010c07f5c0();
  if ((int)puVar26 == 0) {
    uVar28 = 0;
    uVar27 = 0;
    uStack_80 = 0;
  }
  else {
    puVar26 = param_4;
    func_0x00010c274920();
    _objc_retainAutoreleasedReturnValue();
    puVar29 = puVar26;
    func_0x00010bf8f0e0();
    if ((int)puVar29 == 0) {
      uVar27 = 0;
    }
    else {
      uVar22 = param_19;
      func_0x00010bf1f480(param_19,param_3,&PTR____CFConstantStringClassReference_110e4edd8);
      uVar27 = (uint)uVar22;
    }
    _objc_release(puVar26);
    puVar26 = param_4;
    func_0x00010c07db60();
    if ((int)puVar26 == 0) {
      uVar28 = 0;
    }
    else {
      uVar22 = param_19;
      func_0x00010bf1f480(param_19,param_3,&PTR____CFConstantStringClassReference_110e4edf8);
      uVar28 = (uint)uVar22;
    }
    puVar26 = param_4;
    func_0x00010c07db60();
    if ((int)puVar26 == 0) {
      uStack_80 = 0;
    }
    else {
      uVar22 = param_19;
      func_0x00010bf1f480(param_19,param_3,&PTR____CFConstantStringClassReference_110e4ee18);
      uStack_80 = (uint)uVar22;
    }
  }
  puVar26 = param_4;
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar26;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar29;
  func_0x00010bfa0f20();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bfa0fa0();
  _objc_release(puVar7);
  _objc_release(puVar29);
  _objc_release(puVar26);
  uVar2 = 0;
  if (puVar8 != (undefined *)0x2) {
    uVar2 = uVar27;
  }
  uVar4 = uVar27 | uVar28;
  if ((uVar4 & 1) == 0) {
    puVar26 = (undefined *)0x0;
    if (uStack_80 != 0) goto LAB_1064294b0;
    bVar5 = false;
    puStack_b0 = (undefined *)0x0;
  }
  else {
    puVar26 = param_4;
    func_0x00010c0ed080();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_release(puVar26);
LAB_1064294b0:
    puVar29 = param_2;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar29;
    func_0x00010c0ed000();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_4;
    func_0x00010c0ed080(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf27060(puVar8,param_3,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    if (puVar10 == (undefined *)0x0) {
      puStack_b0 = (undefined *)0x0;
    }
    else {
      puStack_b0 = PTR_PTR_1126ca6f8;
      _objc_alloc();
      func_0x00010c270aa0(puVar10);
      if (uVar2 == 0) {
        puStack_160 = (undefined *)0xffffffffffffffff;
      }
      else {
        puStack_160 = puVar10;
        func_0x00010bf1f680();
      }
      if (uStack_80 == 0) {
        puStack_168 = (undefined *)0xffffffffffffffff;
      }
      else {
        puStack_168 = puVar10;
        func_0x00010c22a980();
      }
      puVar11 = puVar10;
      func_0x00010c29c5c0();
      puVar12 = puVar10;
      func_0x00010c25fae0();
      puVar13 = puVar10;
      func_0x00010c129760();
      puVar14 = puVar10;
      func_0x00010c275280(puVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar10;
      func_0x00010c27b920();
      puVar16 = puVar10;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      puVar17 = puVar10;
      func_0x00010bf50620();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar10;
      func_0x00010c24b7a0();
      puVar19 = puVar10;
      func_0x00010c24b580();
      puVar20 = puVar10;
      func_0x00010c24ba40();
      if (uVar28 == 0) {
        puVar21 = (undefined *)0xffffffffffffffff;
      }
      else {
        puVar21 = puVar10;
        func_0x00010c123100();
      }
      func_0x00010c052aa0(param_1,puStack_b0,param_3,puStack_160,puStack_168,puVar11,puVar12,puVar13
                          ,puVar14,puVar15,puVar16,puVar17,puVar18,puVar19,puVar20,puVar21);
      _objc_release(puVar17);
      _objc_release(puVar16);
      _objc_release(puVar14);
    }
    _objc_release(puVar10);
    _objc_retain(puStack_b0);
    _objc_release(puStack_b0);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar29);
    bVar5 = true;
  }
  puVar29 = PTR_PTR_1126bfe00;
  func_0x00010c117840(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = param_6;
  func_0x00010c0e00e0(param_6,param_3,puVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar29);
  puVar29 = puVar26;
  if ((puVar7 != (undefined *)0x0 & uStack_7c) == 1) {
    puVar7 = PTR_PTR_1126bfe00;
    func_0x00010c117840(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_6;
    func_0x00010c0e00e0(param_6,param_3,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    puStack_b8 = PTR_PTR_1126b23a8;
    puVar7 = puVar8;
    func_0x00010bf600e0(puVar8);
    puVar9 = puVar8;
    func_0x00010c276c00(puVar8);
    func_0x00010befe260(puStack_b8,param_3,1,puVar7,puVar9,(ulong)puVar23 & 0xffffffff,param_14,0,
                        puVar26,puStack_b0,(char)uVar28);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR_PTR_1126ca6e8;
    _objc_opt_class(PTR_PTR_1126ca6e8);
    func_0x00010c12d360(puStack_e0,param_3,puVar23);
    _objc_release(puVar8);
  }
  else {
    puStack_b8 = PTR_PTR_1126b23a8;
    func_0x00010befe260(PTR_PTR_1126b23a8,param_3,0,0,0,(ulong)puVar23 & 0xffffffff,param_14,puVar25
                        ,puVar26,puStack_b0,(char)uVar28);
    _objc_retainAutoreleasedReturnValue();
  }
  if (param_13 == 3) {
    puVar23 = param_4;
    func_0x00010c07db60();
    if ((uStack_7c & 1) == 0) {
      if (((ulong)puVar23 & 1) == 0) goto LAB_106429878;
      uVar24 = 1;
    }
    else {
LAB_106429864:
      puVar7 = param_4;
      func_0x00010c07db60();
      uVar24 = 1;
      if ((((ulong)puVar7 & 1) == 0) && (((ulong)puVar23 & 1) == 0)) goto LAB_106429878;
    }
  }
  else {
    if (uStack_7c != 0) {
      puVar23 = (undefined *)0x0;
      goto LAB_106429864;
    }
LAB_106429878:
    uVar24 = uStack_80;
  }
  bVar1 = 0;
  if (param_13 != 2 || param_14 != 4) {
    bVar1 = param_15 ^ 1;
  }
  if ((uVar4 & 1) == 0) {
    puVar29 = (undefined *)0x0;
    puVar23 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                        &PTR____CFConstantStringClassReference_110e4ee38);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar23 = param_4;
    func_0x00010c0ed060();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain();
  _objc_release(puVar23);
  puVar7 = param_4;
  func_0x00010bfd4380();
  puVar8 = PTR_PTR_1126b2390;
  _objc_alloc(PTR_PTR_1126b2390);
  puVar9 = PTR_PTR_1126b2370;
  _objc_alloc(PTR_PTR_1126b2370);
  puVar10 = param_4;
  func_0x00010c274920(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bf8f0e0();
  func_0x00010c01f560(puVar9,param_3,0,(param_13 != 2 || param_14 != 4) & uVar24,0,
                      ((uint)puVar11 & (uint)puVar7 & uStack_7c & (uVar4 ^ 0xffffffff) | uVar27) & 1
                      ,bVar1,0,(ulong)puVar29 & 0xffffffffffffff00,0,0);
  uVar3 = 0x19;
  if (uStack_7c == 0) {
    uVar3 = 0xe;
  }
  puVar29 = PTR_PTR_1126ca6f0;
  _objc_alloc();
  func_0x00010c047c00();
  puVar11 = puVar26;
  if (puVar26 == (undefined *)0x0) {
    puVar11 = param_4;
    func_0x00010c280580();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar12 = PTR_PTR_1126b5b20;
  _objc_alloc();
  puVar13 = param_4;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d920(0,0,0,puVar12,param_3,puVar13,1,puVar26);
  func_0x00010c045140(puVar8,param_3,param_16,0,puVar9,0,0,0,puStack_b8,uVar3,puVar29,param_5,
                      puVar11,param_7,puVar12,0,0,0);
  _objc_release(puVar12);
  _objc_release(puVar13);
  if (puVar26 == (undefined *)0x0) {
    _objc_release(puVar11);
  }
  _objc_release(puVar29);
  _objc_release(puVar9);
  _objc_release(puVar10);
  func_0x00010c1d0640(puVar6,param_3,puVar8,&PTR____CFConstantStringClassReference_110dcab38);
  if (bVar5) {
    func_0x00010c1d0640(puVar6,param_3,PTR____kCFBooleanTrue_11034ab68,
                        &PTR____CFConstantStringClassReference_110f0ea58);
  }
  puVar29 = param_4;
  func_0x00010bef5620();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar29;
  func_0x00010bf66880();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bfa0f20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bfa0fa0();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar29);
  if (puVar11 != (undefined *)0x2) {
    if (puVar11 == (undefined *)0x1) {
LAB_106429b88:
      puVar9 = PTR_PTR_1126b2d20;
      func_0x00010c298ea0(PTR_PTR_1126b2d20);
      _objc_retainAutoreleasedReturnValue();
      puVar29 = PTR____kCFBooleanTrue_11034ab68;
      func_0x00010c1d0640(puVar6,param_3,PTR____kCFBooleanTrue_11034ab68,puVar9);
      _objc_release(puVar9);
      func_0x00010c1d0640(puVar6,param_3,PTR____kCFBooleanFalse_11034ab60,
                          &PTR____CFConstantStringClassReference_110f0dd98);
      func_0x00010c1d0640(puVar6,param_3,puVar29,&PTR____CFConstantStringClassReference_110f0dbb8);
      func_0x00010c1d0640(puVar6,param_3,puVar29,&PTR____CFConstantStringClassReference_110f0def8);
    }
    else {
      puVar29 = param_4;
      func_0x00010c274920();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar29;
      func_0x00010bf8f0e0();
      if (((uStack_7c | (uint)puVar9 ^ 0xffffffff) & 1) == 0) {
        puVar9 = param_4;
        func_0x00010bfd4380();
        _objc_release(puVar29);
        if ((int)puVar9 != 0) goto LAB_106429b88;
      }
      else {
        _objc_release(puVar29);
      }
    }
  }
  if (((uStack_7c & 1) == 0) && (((uVar2 | uVar28 | uStack_80) & 1) != 0)) {
    puVar9 = PTR_PTR_1126b2d20;
    func_0x00010c24c3e0(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    puVar29 = PTR____kCFBooleanTrue_11034ab68;
    func_0x00010c1d0640(puVar6,param_3,PTR____kCFBooleanTrue_11034ab68,puVar9);
    _objc_release(puVar9);
    func_0x00010c1d0640(puVar6,param_3,puVar29,&PTR____CFConstantStringClassReference_110f0dbb8);
    func_0x00010c1d0640(puVar6,param_3,PTR____kCFBooleanFalse_11034ab60,
                        &PTR____CFConstantStringClassReference_110f0dd98);
    if (uVar2 != 0) {
      func_0x00010c1d0640(puVar6,param_3,PTR____kCFBooleanTrue_11034ab68,
                          &PTR____CFConstantStringClassReference_110f0def8);
    }
  }
  puVar29 = param_4;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar29;
  func_0x00010bf8f0e0();
  if ((((uint)puVar9 & (uint)puVar7 & uStack_7c) == 1) &&
     (uVar22 = param_19, func_0x000106433d1c(), (uVar22 & 1) != 0)) {
    _objc_release(puVar29);
LAB_106429d40:
    puVar29 = PTR_PTR_1126b2d20;
    func_0x00010bef2840(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6,param_3,PTR____kCFBooleanTrue_11034ab68,puVar29);
    _objc_release(puVar29);
  }
  else {
    _objc_release(puVar29);
    if ((uVar27 & 1) != 0) goto LAB_106429d40;
  }
  uVar22 = param_19;
  func_0x00010bf1f480(param_19,param_3,&PTR____CFConstantStringClassReference_110e4ee58);
  if ((int)uVar22 != 0) {
    puVar29 = PTR_PTR_1126b2d20;
    func_0x00010c298e20(PTR_PTR_1126b2d20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6,param_3,PTR____kCFBooleanTrue_11034ab68,puVar29);
    _objc_release(puVar29);
  }
  if (((uStack_138 | uVar28 | uStack_80 | uVar2) & 1) != 0) {
    func_0x00010c1d0640(puVar6,param_3,PTR____kCFBooleanTrue_11034ab68,
                        &PTR____CFConstantStringClassReference_110f0e0f8);
  }
  puVar29 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c1d0640(puVar6,param_3,PTR____kCFBooleanTrue_11034ab68,
                      &PTR____CFConstantStringClassReference_110f0dc18);
  puVar7 = PTR_PTR_1126b2d20;
  func_0x00010bf9ab80(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6,param_3,puVar29,puVar7);
  _objc_release(puVar7);
  if ((param_9 | uStack_7c ^ 1) == 1) {
    func_0x00010c1d0640(puVar6,param_3,PTR____kCFBooleanTrue_11034ab68,
                        &PTR____CFConstantStringClassReference_110f0e078);
  }
  puVar29 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar29;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c07f2c0();
  _objc_release(puVar7);
  _objc_release(puVar29);
  if (((ulong)puVar9 & 1) == 0) {
    puVar29 = param_10;
    func_0x00010c1169a0();
    _objc_retainAutoreleasedReturnValue();
    uVar27 = uStack_7c;
    if (puVar29 == (undefined *)0x0) {
      uVar27 = 1;
    }
    _objc_release();
    if ((uVar27 & 1) == 0) {
      puVar29 = param_10;
      func_0x00010c1169a0(param_10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar6,param_3,puVar29,&PTR____CFConstantStringClassReference_110f0d978);
    }
    else {
      if (uStack_7c == 0) goto LAB_10642a074;
      puVar29 = param_4;
      func_0x00010c274920();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar29;
      func_0x00010c24b020();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010bf20f20();
      if (((ulong)puVar9 & 1) != 0) {
        puVar9 = param_2;
        func_0x00010c0cc0c0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010bef4a60();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar10;
        func_0x00010bf20fa0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar11;
        func_0x00010c116960();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        puVar14 = puVar13;
        func_0x00010c08fa60();
        _objc_release(puVar13);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar7);
        _objc_release(puVar29);
        if (puVar14 == (undefined *)0x0) goto LAB_10642a074;
        func_0x00010c0cc0c0(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = param_2;
        func_0x00010bef4a60();
        _objc_retainAutoreleasedReturnValue();
        puVar29 = puVar7;
        func_0x00010bf20fa0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar29;
        func_0x00010c116960();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar9;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6,param_3,puVar10,&PTR____CFConstantStringClassReference_110f0d978)
        ;
        _objc_release(puVar10);
        _objc_release(puVar9);
        _objc_release(puVar29);
        puVar29 = param_2;
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar29);
  }
LAB_10642a074:
  if (param_17 != 0) {
    func_0x00010c1d0640(puVar6,param_3,param_17,&PTR____CFConstantStringClassReference_110f0e558);
  }
  uVar22 = param_19;
  func_0x00010bf1f480(param_19,param_3,&PTR____CFConstantStringClassReference_110e4ee78);
  if ((int)uVar22 != 0) {
    func_0x00010c1d0640(puVar6,param_3,PTR____kCFBooleanTrue_11034ab68,
                        &PTR____CFConstantStringClassReference_110f0d618);
    func_0x00010c1d0640(puVar6,param_3,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184a40,
                        &PTR____CFConstantStringClassReference_110f0d5f8);
  }
  puVar29 = puStack_e0;
  func_0x00010bf51e00(puStack_e0);
  func_0x00010c1d0640(puVar6,param_3,puVar29,&PTR____CFConstantStringClassReference_110f0e2b8);
  _objc_release(puVar29);
  puVar29 = param_10;
  func_0x00010bf4c700(param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6,param_3,puVar29,&PTR____CFConstantStringClassReference_110f0d458);
  _objc_release(puVar29);
  puVar29 = puVar6;
  func_0x00010bf51e00(puVar6);
  _objc_release(puVar8);
  _objc_release(puVar23);
  _objc_release(puStack_b0);
  _objc_release(puVar26);
  _objc_release(puStack_b8);
  _objc_release(puVar25);
  _objc_release(puStack_e0);
  _objc_release(puVar6);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar29);
  return;
}



/* Entry: 10642a268; end: 10642a36f;  */

void FUN_10642a268(undefined8 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20();
  _objc_release(uVar3);
  _objc_release(param_1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840();
  iVar2 = (int)puVar4;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    func_0x00010bf1f480();
    ppuVar1 = &PTR____CFConstantStringClassReference_110e4eeb8;
    if (iVar2 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e4eed8;
    }
    func_0x00010bcbeaa8(ppuVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10642a370; end: 10642a3f7;  */

void FUN_10642a370(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f480(param_1,param_2,&PTR____CFConstantStringClassReference_110e4ee98);
  ppuVar1 = &PTR____CFConstantStringClassReference_110e4eeb8;
  if ((int)param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e4eed8;
  }
  func_0x00010bcbeaa8(ppuVar1,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10642a3f8; end: 10642a49b;  */

void FUN_10642a3f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_retain();
  func_0x000109149ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfe91e0(0,0xc010000000000000,0,0xc010000000000000,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14db60(param_1,param_2,uVar1,&PTR____CFConstantStringClassReference_110f0d078);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10642a49c; end: 10642a5a7;  */

void FUN_10642a49c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_retain();
  _objc_alloc();
  func_0x00010c0469e0(0x4038000000000000,0x403c000000000000);
  puVar2 = puVar1;
  func_0x000109149ec0();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10642a5a8;
  puStack_50 = &UNK_11086bc40;
  puStack_48 = puVar2;
  _objc_retain();
  puVar3 = puVar1;
  func_0x00010bfe91c0(puVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14db60(param_1,param_2,puVar4,&PTR____CFConstantStringClassReference_110eb17b8);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puStack_48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10642a5a8; end: 10642a5bf;  */

void FUN_10642a5a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,0x4018000000000000,0x4030000000000000,0x4030000000000000,
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 10642a5c0; end: 10642a6db;  */

void FUN_10642a5c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_retain();
  func_0x000109149f3c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfe91e0(0,0xc010000000000000,0,0xc010000000000000,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14db60(param_1,param_2,uVar1,&PTR____CFConstantStringClassReference_110f0d078);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10642a6dc; end: 10642aa5f;  */

void FUN_10642a6dc(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar2 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  _objc_opt_class();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = &PTR___NSConcreteGlobalBlock_110921f88;
  puVar5 = puVar3;
  func_0x000100504554();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ca760;
  _objc_alloc();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  func_0x00010c0595c0();
  _objc_release(uVar2);
  puVar6 = puVar3;
  func_0x00010c246e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1);
  _objc_release(param_1);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_retain();
    puVar5 = PTR_DAT_1126a53b8;
    _objc_retain(ppuVar9);
    ppuVar7 = ppuVar9;
    func_0x00010010fab4(ppuVar9,puVar5);
    _objc_release(ppuVar9);
    puVar5 = puVar3;
    if ((ppuVar9 != (undefined **)0x0) && ((int)ppuVar7 != 0)) {
      puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar8 = puVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff4000(puVar6);
      _objc_release(puVar8);
      func_0x00010befa120(puVar6);
      puVar8 = puVar6;
      func_0x00010bf51e00(puVar6);
      func_0x00010c1d0640(puVar3);
      _objc_release(puVar8);
      _objc_release(puVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10642aa60; end: 10642aaff;  */

void FUN_10642aa60(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  
  _objc_retain();
  func_0x00010c1d0640(param_1);
  func_0x00010c1d0640(param_1);
  if (param_2 != 0) {
    func_0x00010c1d0640(param_1);
  }
  puVar1 = PTR_PTR_1126ca748;
  _objc_opt_class(PTR_PTR_1126ca748);
  func_0x00010642a968(param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10642ab00; end: 10642acab;  */

undefined *
FUN_10642ab00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010848cb20();
  puVar1 = PTR_PTR_1126ca768;
  _objc_opt_new();
  func_0x00010c1fd160();
  _objc_release(param_1);
  func_0x00010c163720(puVar1);
  _objc_release(param_2);
  FUN_10642acac(param_3);
  func_0x00010c164dc0(puVar1);
  FUN_10642acac(param_4);
  func_0x00010c164880(puVar1);
  func_0x00010c164860((double)param_5,puVar1);
  func_0x00010c1ae9c0(puVar1);
  puVar2 = PTR_PTR_1126b8cd8;
  func_0x00010c25d840(PTR_PTR_1126b8cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c163fa0(puVar1);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bfe00;
  func_0x00010bef2a80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  if (puVar1 < (undefined *)0x17) {
    return (undefined *)(ulong)*(uint *)(&UNK_10dddc0f4 + (long)puVar1 * 4);
  }
  return (undefined *)0x0;
}



/* Entry: 10642acac; end: 10642accb;  */

undefined4 FUN_10642acac(ulong param_1)

{
  if (param_1 < 0x17) {
    return *(undefined4 *)(&UNK_10dddc0f4 + param_1 * 4);
  }
  return 0;
}



/* Entry: 10642accc; end: 10642af47; -[SCAdOperaParserLayersSort sortedLayers] */

void FUN_10642accc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  if (lVar3 != 0) {
    uVar7 = 0;
    do {
      uVar1 = uVar7 + 1;
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0dfd40(uVar5,param_2,uVar7);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar2,param_2,puVar4,uVar5);
      _objc_release(uVar5);
      _objc_release(puVar4);
      uVar6 = *(ulong *)(param_1 + 0x10);
      func_0x00010bf529e0();
      uVar7 = uVar1;
    } while (uVar1 < uVar6);
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10642adf8;
  puStack_50 = &UNK_110921fa8;
  puStack_48 = puVar2;
  _objc_retain(puVar2);
  func_0x00010c246ca0(uVar5,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_48);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10642af48; end: 10642afeb; -[SCAdOperaParserLayersSort initWithUnsortedLayers:layersOrder:] */

undefined1 *
FUN_10642af48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1298;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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



/* Entry: 10642afec; end: 10642b01b; -[SCAdOperaParserLayersSort .cxx_destruct] */

void FUN_10642afec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10642b01c; end: 10642b203;  */

void FUN_10642b01c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126ca770;
  _objc_opt_new();
  _objc_retain(param_1);
  lVar4 = param_1;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(param_1);
      }
      uVar8 = *(undefined8 *)(lVar9 * 8);
      _objc_retain(param_2);
      _objc_retain(param_3);
      func_0x00010c0c0ac0(uVar8);
      _objc_release(param_3);
      _objc_release(param_2);
      lVar9 = lVar9 + 1;
    } while (lVar4 != lVar9);
    lVar4 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar8);
  _objc_retain(uVar1);
  func_0x000100504554(uVar5,&PTR___NSConcreteGlobalBlock_110922058);
  puVar3 = PTR_PTR_1126ca788;
  _objc_alloc(PTR_PTR_1126ca788);
  func_0x00010c01b8e0();
  _objc_release(uVar8);
  func_0x00010c20f180(puVar3);
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181a80(puVar3);
  _objc_release(puVar6);
  _objc_release(uVar5);
  func_0x00010c2103e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10642b204; end: 10642b2df;  */

void FUN_10642b204(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  _objc_retain(uVar2);
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_110922058);
  puVar3 = PTR_PTR_1126ca788;
  _objc_alloc(PTR_PTR_1126ca788);
  func_0x00010c01b8e0();
  _objc_release(uVar1);
  func_0x00010c20f180(puVar3);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c181a80(puVar3);
  _objc_release(puVar4);
  _objc_release(param_2);
  func_0x00010c2103e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10642b2e0; end: 10642b4f3;  */

void FUN_10642b2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ca790;
  _objc_retain(param_6);
  _objc_opt_new(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_6;
  func_0x00010c253d20(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06ffe0();
  func_0x00010c0df6e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b0480(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  uVar2 = param_6;
  func_0x00010c253d20(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2be980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2275c0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  uVar2 = param_6;
  func_0x00010c253d20(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c2bec00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c227760(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126c49d8;
  _objc_alloc(PTR_PTR_1126c49d8);
  func_0x00010c0630e0(param_3,param_4);
  puVar5 = PTR_PTR_1126ca798;
  _objc_alloc(PTR_PTR_1126ca798);
  uVar2 = param_6;
  func_0x00010bf5d560(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076a20(param_6);
  func_0x00010c236fa0(param_6);
  func_0x00010bf03bc0(param_6);
  _objc_release(param_6);
  func_0x00010c006d60(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
  func_0x00010c169ee0(*(undefined8 *)(param_5 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10642b4f4; end: 10642b677;  */

void FUN_10642b4f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf39000(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ca780;
  _objc_alloc(PTR_PTR_1126ca780);
  uVar1 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27dd80();
  _objc_release(param_2);
  func_0x00010bff9020(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10642b678; end: 10642b8bf; -[SCAdResponseOperaParseResult _attachmentCommonPageProperties:rotationEnabledProperty:] */

void FUN_10642b678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126b2368;
  _objc_opt_new(PTR_PTR_1126b2368);
  func_0x00010c2b53e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = PTR_PTR_1126c9e18;
  _objc_alloc();
  func_0x00010c00c560();
  puVar4 = puVar3;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110dae518);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53a0(puVar2,param_2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = PTR_PTR_1126c9e18;
  _objc_alloc();
  func_0x00010c00c560();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110e4ef58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b52e0(puVar2,param_2,puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c1531a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  func_0x00010c1d0640(puVar3,param_2,PTR____kCFBooleanTrue_11034ab68,
                      &PTR____CFConstantStringClassReference_110f0e038);
  puVar5 = PTR____kCFBooleanFalse_11034ab60;
  func_0x00010c1d0640(puVar3,param_2,PTR____kCFBooleanFalse_11034ab60,
                      &PTR____CFConstantStringClassReference_110f0e538);
  func_0x00010c1d0640(puVar3,param_2,puVar5,&PTR____CFConstantStringClassReference_110f0e5b8);
  func_0x00010c1d0640(puVar3,param_2,param_4,&PTR____CFConstantStringClassReference_110f0c0f8);
  _objc_release(param_4);
  func_0x00010c1d0640(puVar3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f0ddb8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10642b8c0; end: 10642bb6b; -[SCAdResponseOperaParseResult _attachmentCollectionPageProperties:] */

void FUN_10642b8c0(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puVar10 = (undefined *)0x0;
  if (param_3 == 0) goto LAB_10642bb4c;
  _objc_retain(param_3);
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010bf68c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010bef60a0();
  _objc_release(lVar2);
  puVar5 = param_1;
  puVar10 = param_1;
  if (lVar3 < 0x11) {
    if (lVar3 == 3) {
LAB_10642ba00:
      func_0x00010c1d0640(puVar1);
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x000106426fe8(puVar1,0,param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010c0d3c80();
      puVar10 = puVar1;
      puVar1 = puVar5;
      goto LAB_10642bb08;
    }
    if (lVar3 == 6) {
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bef52a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar10;
      func_0x00010bef4a60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_1;
      func_0x00010bf461c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x000106423aa8(puVar6,puVar7,puVar1,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010c0d3c80();
      _objc_release(puVar1);
      puVar1 = puVar4;
      goto LAB_10642bae8;
    }
  }
  else {
    if (lVar3 != 0x11) {
      if (lVar3 != 0x15) goto LAB_10642bb24;
      goto LAB_10642ba00;
    }
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar10;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_1;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x0001064245d8(puVar6,puVar7,puVar1,puVar8);
    _objc_retainAutoreleasedReturnValue();
LAB_10642bae8:
    _objc_release(puVar1);
    _objc_release(puVar8);
    _objc_release(param_1);
    _objc_release(puVar7);
    param_1 = puVar5;
    puVar1 = puVar9;
LAB_10642bb08:
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(param_1);
  }
LAB_10642bb24:
  puVar10 = puVar1;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar10 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  _objc_release(puVar1);
LAB_10642bb4c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10642bb6c; end: 10642c497; -[SCAdResponseOperaParseResult _attachmentPageProperties:commonPageProperties:] */

void FUN_10642bb6c(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
    puVar8 = (undefined *)0x0;
    goto LAB_10642c354;
  }
  puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  puVar1 = param_3;
  func_0x00010bef60a0();
  puVar10 = puVar8;
  puVar9 = (undefined *)0x0;
  switch(puVar1) {
  case (undefined *)0x1:
  case (undefined *)0xd:
  case (undefined *)0xe:
  case (undefined *)0x10:
  case (undefined *)0x13:
    goto code_r0x00010642c348;
  default:
    goto LAB_10642c354;
  case (undefined *)0x3:
  case (undefined *)0x15:
    func_0x00010c1d0640(puVar8);
    puVar10 = param_1;
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010c2a3d00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar8;
    func_0x000106426fe8(puVar8,puVar1,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar8);
    _objc_release(puVar2);
    puVar8 = param_1;
    param_1 = puVar1;
    break;
  case (undefined *)0x6:
    puVar10 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x000106423aa8(puVar1,puVar3,puVar8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c0d3c80();
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_1);
    puVar8 = puVar2;
    goto code_r0x00010642c328;
  case (undefined *)0x9:
    puVar1 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010bf5ac40();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar3 = param_1;
      func_0x00010c0cc0c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bef52a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf5ac40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_1;
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010bef4a60();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar5;
      func_0x0001084c6210(puVar5,puVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar1);
    if (puVar10 == (undefined *)0x0) {
      puVar1 = param_1;
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bef52a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bef4a60();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x000106425748(puVar2,puVar3,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar4;
      func_0x00010c0d3c80();
      _objc_release(puVar8);
      _objc_release(puVar4);
      _objc_release(puVar3);
      puVar3 = param_1;
      puVar8 = puVar2;
    }
    else {
      puVar1 = PTR_PTR_1126b2368;
      _objc_opt_new(PTR_PTR_1126b2368);
      func_0x00010c2b53e0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar2 = PTR_PTR_1126c9e18;
      _objc_alloc();
      func_0x00010c00c560();
      puVar3 = puVar2;
      func_0x00010c0f12c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53a0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar9 = puVar1;
      func_0x00010c1531a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar8);
      _objc_release(puVar9);
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bef4a60();
      _objc_retainAutoreleasedReturnValue();
      FUN_10642519c(puVar10,puVar8,puVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar9 = puVar8;
      puVar8 = param_1;
    }
code_r0x00010642c328:
    param_1 = puVar1;
    _objc_release(puVar3);
    break;
  case (undefined *)0xa:
    puVar10 = param_3;
    func_0x00010bf3fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd09c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_1;
    func_0x00010c0d3c80();
    break;
  case (undefined *)0xf:
    puVar10 = param_3;
    func_0x00010bef5aa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar10;
    func_0x000106425c78(puVar10,puVar8,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar2;
    func_0x00010c0d3c80();
    _objc_release(puVar8);
    _objc_release(puVar2);
    puVar8 = puVar1;
    break;
  case (undefined *)0x11:
    puVar10 = param_1;
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar10;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x0001064245d8(puVar1,puVar3,puVar8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c0d3c80();
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(puVar3);
    puVar8 = puVar2;
    param_1 = puVar1;
    break;
  case (undefined *)0x14:
    puVar1 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010bef5620();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf66880();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c253c20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c253c40();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar1);
    if (puVar5 != (undefined *)0x4) {
      puVar9 = (undefined *)0x0;
      goto code_r0x00010642c348;
    }
    puVar1 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar3;
    func_0x00010c1293e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar9);
    _objc_release(puVar1);
    if (puVar10 != (undefined *)0x0) {
      puVar1 = puVar10;
      func_0x00010c084160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = puVar10;
        func_0x00010c084160();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010c2a4760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar2 = param_1;
        if (puVar9 == (undefined *)0x0) {
          puVar9 = puVar1;
          func_0x00010bf67c00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar9 == (undefined *)0x0) {
            puVar9 = (undefined *)0x0;
            param_1 = puVar1;
            break;
          }
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010bef52a0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = param_1;
          func_0x00010c0cc0c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bef4a60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cc0c0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = param_1;
          func_0x00010bf461c0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x000106423aa8(puVar3,puVar5,puVar8,puVar6);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010c0d3c80();
          _objc_release(puVar8);
          _objc_release(puVar7);
          _objc_release(puVar6);
          puVar8 = param_1;
        }
        else {
          func_0x00010c1d0640(puVar8);
          func_0x00010c0cc0c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c2a3d00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cc0c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar8;
          func_0x000106426fe8(puVar8,puVar3,param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          func_0x00010c0d3c80();
          puVar4 = param_1;
        }
        _objc_release(puVar8);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        puVar8 = puVar2;
        param_1 = puVar1;
        break;
      }
    }
    puVar9 = (undefined *)0x0;
    goto code_r0x00010642c33c;
  }
  _objc_release(puVar8);
  puVar8 = param_1;
code_r0x00010642c33c:
  _objc_release(puVar8);
code_r0x00010642c348:
  puVar8 = puVar9;
  _objc_release(puVar10);
LAB_10642c354:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10642c498; end: 10642c7ab; -[SCAdResponseOperaParseResult attachmentPageProperties:rotationEnabledProperty:ctaType:] */

void FUN_10642c498(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdd0ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      lVar2 = param_1;
      func_0x00010bdd09e0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf72020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60();
      puVar5 = puVar4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_opt_class(PTR__OBJC_CLASS___NSURL_1126ae598);
      puVar6 = puVar5;
      _objc_opt_isKindOfClass(puVar5,puVar12);
      puVar12 = puVar5;
      if (((ulong)puVar6 & 1) == 0) {
        puVar12 = (undefined *)0x0;
      }
      _objc_retain(puVar12);
      _objc_release(puVar5);
      puVar5 = PTR_PTR_1126ca690;
      puVar6 = puVar12;
      func_0x00010beec820(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar12);
      lVar7 = param_1;
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bef52a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef60a0();
      lVar9 = param_1;
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bef4a60();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c15ed20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb5ac0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(puVar6);
      puVar12 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4);
      _objc_release(puVar12);
      func_0x00010c0cc0c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x000106432b6c(puVar4,param_1,param_5,0);
      _objc_release(param_1);
      puVar12 = puVar4;
      func_0x00010bf51e00(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 10642c7ac; end: 10642c933; -[SCAdResponseOperaParseResult _updateTopSnapPagePropertiesWithFirstFrame:contentDeliveryMedia:topSnap:] */

void FUN_10642c7ac(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010bf885a0(uVar1);
  _objc_release(uVar1);
  if (param_1 == 0.0) {
    lVar5 = param_5;
    func_0x00010c2750a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      lVar6 = param_6;
      func_0x00010c299160(param_6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bfb1260();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    else {
      _objc_retain(lVar5);
      lVar9 = lVar5;
    }
    _objc_release(lVar5);
    func_0x00010c14db60(param_4);
    _objc_release(lVar9);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10642c934; end: 10642d75b; -[SCAdResponseOperaParseResult _updateTopSnapMediaPropertiesForMediaType:affordanceText:ctaType:] */

void FUN_10642c934(double param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
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
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar15;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bef52a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x0001084c506c(puVar3,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar15);
  puVar15 = puVar1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar15;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0c6c20();
  _objc_release(puVar2);
  _objc_release(puVar15);
  puVar15 = (undefined *)0x0;
  if ((long)puVar3 < 3) {
    puVar7 = puVar6;
    if (puVar3 == (undefined *)0x1) {
      puVar15 = puVar1;
      func_0x00010bf4c260();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar15;
      func_0x00010c2744c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        puVar3 = puVar1;
        func_0x00010bef52a0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c274920();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bfe6ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar5;
        func_0x00010c09ea00();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c0c5180();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_4);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
      else {
        func_0x00010c1d0640(param_4);
      }
      _objc_release(puVar2);
      _objc_release(puVar15);
      func_0x00010c1d0640(param_4);
      func_0x00010be74ec0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(param_4);
      _objc_release(param_2);
      if (puVar6 == (undefined *)0x0) goto LAB_10642d1f0;
      func_0x0001084c28d0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (puVar3 != (undefined *)0x2) goto LAB_10642d39c;
      puVar15 = puVar1;
      func_0x00010bef52a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar15;
      func_0x00010c130960();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c130980();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar15);
      puVar15 = puVar1;
      func_0x00010bf4c260();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar15;
      func_0x00010c275100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar15);
      puVar15 = puVar1;
      func_0x00010bf4c260();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        puVar2 = puVar15;
        func_0x00010c2750c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar15);
        if (puVar2 != (undefined *)0x0) {
          puVar15 = puVar1;
          func_0x00010bf4c260(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar15;
          func_0x00010c2750c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_4);
          _objc_release(puVar2);
          _objc_release(puVar15);
          func_0x00010c1d0640(param_4);
          func_0x00010c1d0640(param_4);
          puVar15 = puVar1;
          func_0x00010bf4c260();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar15;
          func_0x00010c2750e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(puVar15);
          if (puVar2 != (undefined *)0x0) {
            puVar15 = puVar1;
            func_0x00010bf4c260(puVar1);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = puVar15;
            func_0x00010c2750e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(param_4);
            _objc_release(puVar2);
            _objc_release(puVar15);
          }
          func_0x00010c1d0640(param_4);
          puVar15 = puVar1;
          func_0x00010c0c5880();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010bf4c260(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          func_0x00010c2750c0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar15;
          func_0x00010c2991c0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010c0d5720();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar4);
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar15);
          puVar15 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
          _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
          puVar2 = puVar5;
          _objc_opt_isKindOfClass(puVar5,puVar15);
          puVar15 = puVar5;
          if (((ulong)puVar2 & 1) == 0) {
            puVar15 = (undefined *)0x0;
          }
          _objc_retain(puVar15);
          _objc_release(puVar5);
          puVar2 = puVar15;
          func_0x00010bdc2b80();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar2 != (undefined *)0x0) {
            puVar2 = puVar15;
            func_0x00010bdc2b80(puVar15);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10642cb34;
          }
          goto LAB_10642cb4c;
        }
      }
      else {
        puVar2 = puVar15;
        func_0x00010c275100();
        _objc_retainAutoreleasedReturnValue();
LAB_10642cb34:
        func_0x00010c1d0640(param_4);
        _objc_release(puVar2);
LAB_10642cb4c:
        _objc_release(puVar15);
      }
      func_0x00010c1d0640(param_4);
      puVar15 = puVar1;
      func_0x00010bf4c260(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010bef52a0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c274920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee2700(param_2);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar15);
      func_0x00010be74ec0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(param_4);
      _objc_release(param_2);
      func_0x00010c1d0640(param_4);
      if (puVar6 == (undefined *)0x0) {
LAB_10642d1f0:
        puVar15 = (undefined *)0x0;
        goto LAB_10642d39c;
      }
      func_0x0001084c2840();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar15 = puVar7;
    func_0x0001084c44f4();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (puVar3 == (undefined *)0x3) {
    puVar2 = puVar1;
    func_0x00010bef52a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf89440();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR_PTR_1126b9250;
    func_0x00010bef60a0(puVar2);
    puVar5 = puVar1;
    func_0x00010bef4a60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240();
    puVar7 = puVar1;
    func_0x00010bef2560(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360(puVar1);
    func_0x00010bf44a40(puVar15);
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar15 = puVar1;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar15;
    func_0x00010bef60a0();
    func_0x00010642239c();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c0d3c80();
    _objc_release(puVar5);
    _objc_release(puVar15);
    puVar5 = param_4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar8 = puVar5;
    _objc_opt_isKindOfClass(puVar5,puVar15);
    puVar15 = puVar5;
    if (((ulong)puVar8 & 1) == 0) {
      puVar15 = (undefined *)0x0;
    }
    _objc_retain(puVar15);
    _objc_release(puVar5);
    puVar5 = puVar15;
    func_0x00010c0d3c80();
    _objc_release(puVar15);
    if (puVar5 == (undefined *)0x0) {
      puVar15 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    }
    else {
      _objc_retain(puVar5);
      puVar15 = puVar5;
    }
    _objc_release(puVar5);
    puVar8 = puVar7;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar9 = puVar8;
    _objc_opt_isKindOfClass(puVar8,puVar5);
    puVar5 = puVar8;
    if (((ulong)puVar9 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar8);
    puVar8 = PTR____NSArray0__struct_11034ab48;
    if (puVar5 != (undefined *)0x0) {
      puVar8 = puVar5;
    }
    _objc_retain(puVar8);
    _objc_release(puVar5);
    func_0x00010befa160(puVar15);
    _objc_release(puVar8);
    func_0x00010c1d0640(puVar7);
    func_0x00010c1d0640(param_4);
    func_0x00010bef7f60(param_4);
    func_0x00010be74ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(param_4);
    puVar8 = param_2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar9 = puVar8;
    _objc_opt_isKindOfClass(puVar8,puVar5);
    puVar5 = puVar8;
    if (((ulong)puVar9 & 1) == 0) {
      puVar5 = (undefined *)0x0;
    }
    _objc_retain(puVar5);
    _objc_release(puVar8);
    if ((puVar5 == (undefined *)0x0) || (func_0x00010bf885a0(puVar8), param_1 <= 0.0)) {
      func_0x00010c1d0640(param_4);
    }
    _objc_release(puVar5);
    _objc_release(param_2);
    _objc_release(puVar15);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar15 = (undefined *)0x0;
  }
  else {
    if (puVar3 != (undefined *)0x4) goto LAB_10642d39c;
    puVar7 = puVar1;
    func_0x00010bf4c260(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar7;
    func_0x00010c0fed40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ca738;
    func_0x00010c0fed60(PTR_PTR_1126ca738);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(puVar2);
    _objc_release(puVar15);
    puVar15 = (undefined *)0x0;
  }
  _objc_release(puVar7);
LAB_10642d39c:
  func_0x00010bf01340(PTR_PTR_1126c9db0);
  func_0x00010bf01320(PTR_PTR_1126c9db0);
  puVar2 = puVar1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bef4240();
  if (puVar3 == (undefined *)0x8) {
    _objc_release(puVar2);
  }
  else {
    puVar3 = puVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bef4240();
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x7) {
      func_0x00010bf01360(PTR_PTR_1126c9db0);
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bef52a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c29d360(puVar1);
  puVar5 = puVar2;
  FUN_106433ea8(puVar2,puVar3,puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if ((int)puVar5 != 0) {
    puVar2 = puVar1;
    func_0x00010bef2560(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    FUN_106434118();
    FUN_10642aa60(param_4,puVar3);
    _objc_release(puVar2);
  }
  puVar2 = puVar1;
  func_0x00010bef52a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10643414c(param_4,puVar2,puVar5);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bef4a60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bef52a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bfecde0(puVar3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bef4a60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c15ed20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bef4a60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bef4a60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bef60a0();
  puVar10 = puVar1;
  func_0x00010bef52a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bef60a0();
  puVar12 = puVar1;
  func_0x00010bef4a60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bef4240();
  puVar14 = puVar3;
  FUN_10642ab00(puVar3,puVar7,puVar9,puVar11,puVar5,puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010bef7f60(param_4);
  puVar2 = PTR_PTR_1126b2dc0;
  _objc_alloc(PTR_PTR_1126b2dc0);
  puVar3 = puVar1;
  func_0x00010bef52a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ff20(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c1d0640(param_4);
  _objc_release(puVar2);
  _objc_release(puVar14);
  _objc_release(puVar6);
  _objc_release(puVar15);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10642d75c; end: 10642d823; -[SCAdResponseOperaParseResult _mediaDurationInSeconds] */

double FUN_10642d75c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  double dVar6;
  
  puVar5 = PTR_PTR_1126afec0;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c4bc0();
  dVar6 = (double)lVar4;
  func_0x00010c0cd480(puVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  if (dVar6 <= 0.0) {
    puVar5 = PTR_PTR_1126c9a78;
    func_0x00010c274cc0(PTR_PTR_1126c9a78);
    dVar6 = (double)(long)puVar5;
  }
  return dVar6;
}



/* Entry: 10642d824; end: 10642da93; -[SCAdResponseOperaParseResult _isLooping] */

uint FUN_10642d824(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf11240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (uVar3 == 0) {
    uVar1 = param_1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c274920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0c25a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bef60a0();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    func_0x00010bef4240();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bef51c0();
    if (uVar6 == 0) {
      uVar9 = 1;
    }
    else {
      uVar6 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bef51c0();
      uVar9 = (uint)(uVar7 == 1);
      _objc_release(uVar6);
    }
    _objc_release(uVar1);
    if ((uVar5 != 8) && (uVar5 != 0xd)) {
      uVar9 = uVar5 == 0x15 & uVar9;
    }
    if ((uVar2 == 0x16) || (uVar2 == 5)) {
      uVar1 = param_1;
      func_0x00010bf9bea0(param_1);
      uVar2 = param_1;
      func_0x00010bef52a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_1;
      func_0x00010bef4a60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c089820();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010c071ae0(uVar2,param_2,uVar7);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar2);
      uVar2 = param_1;
      func_0x00010c06b820();
      if (((uVar2 & 1) != 0) || (uVar9 = 0, uVar4 != 0)) {
        uVar9 = (uint)(uVar1 == 1) | (uint)uVar8;
      }
    }
    else {
      uVar9 = uVar9 ^ 1;
      if (uVar4 != 0) {
        uVar9 = 1;
      }
    }
  }
  else {
    uVar1 = uVar3;
    func_0x00010bf8ef20(uVar3);
    uVar9 = (uint)uVar1;
  }
  _objc_release(uVar3);
  _objc_release(param_1);
  return uVar9 & 1;
}



/* Entry: 10642da94; end: 10642dadb; -[SCAdResponseOperaParseResult _playbackOptions] */

void FUN_10642da94(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be41ae0();
  if ((int)uVar1 == 0) {
    func_0x00010bebc300(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be5b040(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10642dadc; end: 10642de1f; -[SCAdResponseOperaParseResult _singlePlaybackOptions] */

undefined * FUN_10642dadc(double param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined8 uVar12;
  undefined *puVar13;
  double dVar14;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be5e6e0();
  dVar14 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar13;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(param_2);
  puVar13 = puVar1;
  func_0x00010c0c6c20();
  puVar2 = puVar1;
  func_0x00010bf11240();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((puVar13 == (undefined *)0x1) || (puVar13 == (undefined *)0x3)) {
      ppuStack_c8 = &PTR____CFConstantStringClassReference_110f0bc78;
      ppuStack_c0 = &PTR____CFConstantStringClassReference_110f0bc98;
      ppuStack_b8 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
      func_0x00010c0df720(param_1);
      _objc_retainAutoreleasedReturnValue();
      pppuVar10 = &ppuStack_b8;
      pppuVar11 = &ppuStack_c8;
      uVar12 = 2;
      puStack_b0 = puVar4;
LAB_10642dda4:
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,pppuVar10,pppuVar11,
                          uVar12);
      _objc_retainAutoreleasedReturnValue();
      dVar14 = param_1;
      goto LAB_10642ddc8;
    }
    puVar5 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar13 == (undefined *)0x2) {
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110f0c258;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110f0bc78;
      ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5e78;
      puStack_88 = PTR____kCFBooleanTrue_11034ab68;
      ppuStack_98 = &PTR____CFConstantStringClassReference_110f0bc98;
      func_0x00010c0df720(param_1);
      _objc_retainAutoreleasedReturnValue();
      pppuVar10 = &ppuStack_90;
      pppuVar11 = &ppuStack_a8;
      uVar12 = 3;
      puStack_80 = puVar4;
      goto LAB_10642dda4;
    }
  }
  else {
    _objc_retain(puVar2);
    puVar6 = PTR_PTR_1126afec0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar4 = puVar2;
    if ((puVar13 == (undefined *)0x1) || (puVar13 == (undefined *)0x3)) {
      ppuStack_60 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
      ppuStack_78 = &PTR____CFConstantStringClassReference_110f0bc78;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110f0bc98;
      func_0x00010bfe6b00(puVar2);
      func_0x00010c0cd480(puVar6);
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = 2;
      puStack_58 = puVar3;
    }
    else {
      puVar5 = PTR____NSDictionary0__struct_11034ab58;
      if (puVar13 != (undefined *)0x2) goto LAB_10642ddc8;
      ppuStack_78 = &PTR____CFConstantStringClassReference_110f0c258;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110f0bc78;
      ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5e78;
      puStack_58 = PTR____kCFBooleanTrue_11034ab68;
      ppuStack_68 = &PTR____CFConstantStringClassReference_110f0bc98;
      func_0x00010c29a560(puVar2);
      func_0x00010c0cd480(puVar6);
      func_0x00010c0df720();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = 3;
      puStack_50 = puVar3;
    }
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&ppuStack_60,&ppuStack_78,
                        uVar12);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
LAB_10642ddc8:
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be5e6e0();
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar13;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar1);
  puVar13 = puVar2;
  func_0x00010c0c6c20();
  puVar1 = puVar2;
  func_0x00010bf11240();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010c0c25a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar3 == (undefined *)0x0) {
      puVar5 = PTR____NSDictionary0__struct_11034ab58;
      if (puVar13 != (undefined *)0x2) goto LAB_10642e13c;
      ppuStack_1e8 = &PTR____CFConstantStringClassReference_110f0c258;
      ppuStack_1e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5e48;
      pppuVar11 = &ppuStack_1e0;
      pppuVar10 = &ppuStack_1e8;
      uVar12 = 1;
      goto LAB_10642e090;
    }
    puVar5 = puVar3;
    func_0x00010c067ec0(puVar3);
    func_0x00010c0df720(dVar14 * (double)((int)puVar5 + 1));
    _objc_retainAutoreleasedReturnValue();
    if ((puVar13 == (undefined *)0x1) || (puVar13 == (undefined *)0x3)) {
      ppuStack_1d8 = &PTR____CFConstantStringClassReference_110f0bc78;
      ppuStack_1d0 = &PTR____CFConstantStringClassReference_110f0bc98;
      ppuStack_1c8 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
      pppuVar11 = &ppuStack_1c8;
      pppuVar10 = &ppuStack_1d8;
      uVar12 = 2;
      puStack_1c0 = puVar4;
      goto LAB_10642e124;
    }
    puVar5 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar13 == (undefined *)0x2) {
      ppuStack_1b8 = &PTR____CFConstantStringClassReference_110f0c258;
      ppuStack_1b0 = &PTR____CFConstantStringClassReference_110f0bc78;
      ppuStack_198 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5e48;
      puStack_190 = PTR____kCFBooleanTrue_11034ab68;
      ppuStack_1a8 = &PTR____CFConstantStringClassReference_110f0bcb8;
      ppuStack_1a0 = &PTR____CFConstantStringClassReference_110f0bc98;
      pppuVar11 = &ppuStack_198;
      pppuVar10 = &ppuStack_1b8;
      puStack_188 = puVar3;
      puStack_180 = puVar4;
      goto LAB_10642e04c;
    }
LAB_10642e134:
    _objc_release(puVar4);
  }
  else {
    puVar6 = puVar1;
    func_0x00010c0defa0();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(dVar14 * (double)((int)puVar6 + 1));
    _objc_retainAutoreleasedReturnValue();
    if ((puVar13 == (undefined *)0x1) || (puVar13 == (undefined *)0x3)) {
      ppuStack_178 = &PTR____CFConstantStringClassReference_110f0bc78;
      ppuStack_170 = &PTR____CFConstantStringClassReference_110f0bc98;
      ppuStack_158 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
      pppuVar11 = &ppuStack_158;
      pppuVar10 = &ppuStack_178;
      uVar12 = 2;
      puStack_150 = puVar3;
LAB_10642e090:
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,pppuVar11,pppuVar10,
                          uVar12);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = PTR____NSDictionary0__struct_11034ab58;
      if (puVar13 == (undefined *)0x2) {
        ppuStack_178 = &PTR____CFConstantStringClassReference_110f0c258;
        ppuStack_170 = &PTR____CFConstantStringClassReference_110f0bc78;
        ppuStack_158 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5e48;
        puStack_150 = PTR____kCFBooleanTrue_11034ab68;
        ppuStack_168 = &PTR____CFConstantStringClassReference_110f0bcb8;
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,puVar6);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_160 = &PTR____CFConstantStringClassReference_110f0bc98;
        pppuVar11 = &ppuStack_158;
        pppuVar10 = &ppuStack_178;
        puStack_148 = puVar4;
        puStack_140 = puVar3;
LAB_10642e04c:
        uVar12 = 4;
LAB_10642e124:
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,pppuVar11,pppuVar10,
                            uVar12);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10642e134;
      }
    }
  }
LAB_10642e13c:
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar13;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c0c6c20();
  _objc_release(puVar1);
  _objc_release(puVar13);
  if ((undefined *)0x1 < puVar4 + -3) {
    puVar13 = puVar2;
    if (puVar4 != (undefined *)0x2) {
      if (puVar4 == (undefined *)0x1) {
        func_0x00010bf4c260();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar13;
        func_0x00010c2744c0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar1;
        func_0x00010c08fa60();
        if (puVar4 != (undefined *)0x0) goto LAB_10642e32c;
        puVar4 = puVar2;
        func_0x00010bef52a0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c274920();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x00010bfe6ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c08fa60();
        _objc_release(puVar6);
        _objc_release(puVar3);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar1);
        _objc_release(puVar13);
        if (puVar7 != (undefined *)0x0) goto LAB_10642e33c;
      }
LAB_10642e3e4:
      puVar13 = (undefined *)0x2;
      goto LAB_10642e3e8;
    }
    func_0x00010bf4c260();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar13;
    func_0x00010c275100();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = puVar2;
      func_0x00010bf4c260();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c2750c0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c08fa60();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = puVar2;
        func_0x00010bef52a0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x00010c274920();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c08fa60();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar3);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar1);
        _objc_release(puVar13);
        if (puVar9 == (undefined *)0x0) goto LAB_10642e3e4;
        goto LAB_10642e33c;
      }
      _objc_release(puVar4);
    }
LAB_10642e32c:
    _objc_release(puVar1);
    _objc_release(puVar13);
  }
LAB_10642e33c:
  puVar13 = (undefined *)0x0;
LAB_10642e3e8:
  _objc_release(puVar2);
  return puVar13;
}



/* Entry: 10642de20; end: 10642e19f; -[SCAdResponseOperaParseResult _loopingPlaybackOptions] */

undefined * FUN_10642de20(double param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be5e6e0();
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = param_2;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar13;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(param_2);
  puVar13 = puVar1;
  func_0x00010c0c6c20();
  puVar2 = puVar1;
  func_0x00010bf11240();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar4 = puVar1;
    func_0x00010c0c25a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar4 == (undefined *)0x0) {
      puVar5 = PTR____NSDictionary0__struct_11034ab58;
      if (puVar13 != (undefined *)0x2) goto LAB_10642e13c;
      ppuStack_118 = &PTR____CFConstantStringClassReference_110f0c258;
      ppuStack_110 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5e48;
      pppuVar10 = &ppuStack_110;
      pppuVar11 = &ppuStack_118;
      uVar12 = 1;
      goto LAB_10642e090;
    }
    puVar5 = puVar4;
    func_0x00010c067ec0(puVar4);
    func_0x00010c0df720(param_1 * (double)((int)puVar5 + 1));
    _objc_retainAutoreleasedReturnValue();
    if ((puVar13 == (undefined *)0x1) || (puVar13 == (undefined *)0x3)) {
      ppuStack_108 = &PTR____CFConstantStringClassReference_110f0bc78;
      ppuStack_100 = &PTR____CFConstantStringClassReference_110f0bc98;
      ppuStack_f8 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
      pppuVar10 = &ppuStack_f8;
      pppuVar11 = &ppuStack_108;
      uVar12 = 2;
      puStack_f0 = puVar6;
      goto LAB_10642e124;
    }
    puVar5 = PTR____NSDictionary0__struct_11034ab58;
    if (puVar13 == (undefined *)0x2) {
      ppuStack_e8 = &PTR____CFConstantStringClassReference_110f0c258;
      ppuStack_e0 = &PTR____CFConstantStringClassReference_110f0bc78;
      ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5e48;
      puStack_c0 = PTR____kCFBooleanTrue_11034ab68;
      ppuStack_d8 = &PTR____CFConstantStringClassReference_110f0bcb8;
      ppuStack_d0 = &PTR____CFConstantStringClassReference_110f0bc98;
      pppuVar10 = &ppuStack_c8;
      pppuVar11 = &ppuStack_e8;
      puStack_b8 = puVar4;
      puStack_b0 = puVar6;
      goto LAB_10642e04c;
    }
LAB_10642e134:
    _objc_release(puVar6);
  }
  else {
    puVar3 = puVar2;
    func_0x00010c0defa0();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(param_1 * (double)((int)puVar3 + 1));
    _objc_retainAutoreleasedReturnValue();
    if ((puVar13 == (undefined *)0x1) || (puVar13 == (undefined *)0x3)) {
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110f0bc78;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110f0bc98;
      ppuStack_88 = (undefined **)PTR____kCFBooleanTrue_11034ab68;
      pppuVar10 = &ppuStack_88;
      pppuVar11 = &ppuStack_a8;
      uVar12 = 2;
      puStack_80 = puVar4;
LAB_10642e090:
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,pppuVar10,pppuVar11,
                          uVar12);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar5 = PTR____NSDictionary0__struct_11034ab58;
      if (puVar13 == (undefined *)0x2) {
        ppuStack_a8 = &PTR____CFConstantStringClassReference_110f0c258;
        ppuStack_a0 = &PTR____CFConstantStringClassReference_110f0bc78;
        ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c5e48;
        puStack_80 = PTR____kCFBooleanTrue_11034ab68;
        ppuStack_98 = &PTR____CFConstantStringClassReference_110f0bcb8;
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,puVar3);
        _objc_retainAutoreleasedReturnValue();
        ppuStack_90 = &PTR____CFConstantStringClassReference_110f0bc98;
        pppuVar10 = &ppuStack_88;
        pppuVar11 = &ppuStack_a8;
        puStack_78 = puVar6;
        puStack_70 = puVar4;
LAB_10642e04c:
        uVar12 = 4;
LAB_10642e124:
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,pppuVar10,pppuVar11,
                            uVar12);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10642e134;
      }
    }
  }
LAB_10642e13c:
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar13;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010c0c6c20();
  _objc_release(puVar2);
  _objc_release(puVar13);
  if ((undefined *)0x1 < puVar6 + -3) {
    puVar13 = puVar1;
    if (puVar6 != (undefined *)0x2) {
      if (puVar6 == (undefined *)0x1) {
        func_0x00010bf4c260();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar13;
        func_0x00010c2744c0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010c08fa60();
        if (puVar6 != (undefined *)0x0) goto LAB_10642e32c;
        puVar6 = puVar1;
        func_0x00010bef52a0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar6;
        func_0x00010c274920();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bfe6ac0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c08fa60();
        _objc_release(puVar3);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar6);
        _objc_release(puVar2);
        _objc_release(puVar13);
        if (puVar7 != (undefined *)0x0) goto LAB_10642e33c;
      }
LAB_10642e3e4:
      puVar13 = (undefined *)0x2;
      goto LAB_10642e3e8;
    }
    func_0x00010bf4c260();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar13;
    func_0x00010c275100();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = puVar1;
      func_0x00010bf4c260();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c2750c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c08fa60();
      if (puVar4 == (undefined *)0x0) {
        puVar4 = puVar1;
        func_0x00010bef52a0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c274920();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c08fa60();
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(puVar3);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar6);
        _objc_release(puVar2);
        _objc_release(puVar13);
        if (puVar9 == (undefined *)0x0) goto LAB_10642e3e4;
        goto LAB_10642e33c;
      }
      _objc_release(puVar6);
    }
LAB_10642e32c:
    _objc_release(puVar2);
    _objc_release(puVar13);
  }
LAB_10642e33c:
  puVar13 = (undefined *)0x0;
LAB_10642e3e8:
  _objc_release(puVar1);
  return puVar13;
}



/* Entry: 10642e1a0; end: 10642e40f; -[SCAdResponseOperaParseResult _topSnapMediaLoadingStatus] */

undefined8 FUN_10642e1a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0c6c20();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (1 < lVar3 - 3U) {
    lVar1 = param_1;
    if (lVar3 != 2) {
      if (lVar3 == 1) {
        func_0x00010bf4c260();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c2744c0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c08fa60();
        if (lVar3 != 0) goto LAB_10642e32c;
        lVar3 = param_1;
        func_0x00010bef52a0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c274920();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfe6ac0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c08fa60();
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
        if (lVar7 != 0) goto LAB_10642e33c;
      }
LAB_10642e3e4:
      uVar10 = 2;
      goto LAB_10642e3e8;
    }
    func_0x00010bf4c260();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c275100();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar2 = param_1;
      func_0x00010bf4c260();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c2750c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        lVar4 = param_1;
        func_0x00010bef52a0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c274920();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c08fa60();
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lVar1);
        if (lVar9 == 0) goto LAB_10642e3e4;
        goto LAB_10642e33c;
      }
      _objc_release(lVar3);
    }
LAB_10642e32c:
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
LAB_10642e33c:
  uVar10 = 0;
LAB_10642e3e8:
  _objc_release(param_1);
  return uVar10;
}



/* Entry: 10642e410; end: 10642e64b; -[SCAdResponseOperaParseResult _updateTopSnapMediaLoadingStatus:] */

void FUN_10642e410(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ea160();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010befe000();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    func_0x00010becd760();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_3);
    _objc_release(puVar5);
    if (param_1 == 2) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dc3e98;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc3e98,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(ppuVar6);
      ppuVar6 = &PTR____CFConstantStringClassReference_110dc46f8;
      ppuVar7 = ppuVar6;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc46f8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(ppuVar7);
      func_0x00010c1d0640(param_3);
      func_0x00010c1d0640(param_3);
      ppuVar7 = &PTR____CFConstantStringClassReference_110daf898;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf898,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(ppuVar7);
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc46f8,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99260(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(param_3);
      _objc_release(puVar5);
      _objc_release(ppuVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10642e64c; end: 10642f417; -[SCAdResponseOperaParseResult _topSnapPagePropertiesWithPageProperties:ctaType:affordanceText:] */

void FUN_10642e64c(undefined *param_1,undefined8 param_2,undefined *param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
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
  undefined *puStack_b8;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010bee26e0(param_1);
  func_0x00010bee26c0(param_1);
  puVar2 = puVar4;
  func_0x00010bef60a0();
  puVar5 = puVar1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf20fa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = puVar6;
  func_0x00010c070580();
  if (((ulong)puVar5 & 1) == 0) {
    puVar5 = puVar6;
    func_0x00010c116960();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = puVar5;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (puVar4 != (undefined *)0x0) goto LAB_10642e764;
LAB_10642e8b4:
    puStack_90 = PTR_PTR_1126c54d0;
    func_0x00010befe6c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bfd4380();
    _objc_release(puVar5);
    if (((ulong)puVar7 & 1) != 0) goto LAB_10642f268;
    puStack_98 = puVar1;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puStack_98;
    func_0x00010bef4240();
    puVar5 = puVar1;
    func_0x00010bf461c0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bf20f80();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010bf20ee0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar13;
    func_0x00010c0f6400();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar1;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    FUN_10642a370();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar1;
    func_0x00010bef2560();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010642a3b4();
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar19;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar20;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar1;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar22;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puStack_90;
    func_0x00010c09e420();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar1;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar26 = puVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000106424b2c(param_3,puVar8,puVar5,puVar7,puVar10,puVar12,puVar14,puVar16,puVar18,
                        puStack_78,puVar21,puVar23,puVar24,puVar25,puVar26,param_4,puVar1);
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
LAB_10642f23c:
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  else {
    puStack_78 = (undefined *)0x0;
    if (puVar4 == (undefined *)0x0) goto LAB_10642e8b4;
LAB_10642e764:
    func_0x00010c1d0640(param_3);
    func_0x00010c1d0640(param_3);
    puVar5 = puVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c07c040();
    _objc_release(puVar5);
    puVar5 = puVar1;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010c1293e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = puVar10;
    func_0x00010c084160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(puVar5);
    puVar5 = puStack_90;
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar9 = puStack_90;
    func_0x00010c2a4760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = puVar4;
      func_0x00010bef60a0();
      if ((puVar5 != (undefined *)0x6) || (puVar2 == (undefined *)0xa)) goto LAB_10642e944;
LAB_10642e924:
      FUN_106422c0c(puVar1,param_3,param_5,param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    else {
      if (puVar2 != (undefined *)0xa) goto LAB_10642e924;
LAB_10642e944:
      puVar5 = puVar4;
      func_0x00010bef60a0();
      if (puVar5 == (undefined *)0x1) {
        FUN_10641dbec(puVar1,param_4,param_3,param_5);
      }
      else {
        puVar5 = puVar4;
        func_0x00010bef60a0();
        if (puVar5 != (undefined *)0xa) {
          if (puVar9 == (undefined *)0x0) {
            puVar5 = puVar1;
            func_0x00010bef52a0();
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar5;
            func_0x00010bf20500();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar9;
            func_0x00010c2a4740();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            _objc_release(puVar5);
          }
          else {
            puVar8 = puStack_90;
            func_0x00010c2a4760();
            _objc_retainAutoreleasedReturnValue();
          }
          puVar5 = puVar4;
          func_0x00010bef60a0();
          puVar9 = puVar8;
          func_0x00010c116a00();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(puVar1);
          _objc_retain(puVar9);
          if (puVar5 == (undefined *)0x10) {
            puVar5 = puVar1;
            func_0x00010bef4a60();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = puVar5;
            func_0x00010c07f2c0();
            if (((ulong)puVar10 & 1) == 0) {
              puVar10 = puVar1;
              func_0x00010bef4a60();
              _objc_retainAutoreleasedReturnValue();
              puVar11 = puVar10;
              func_0x00010bf20fa0();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar11;
              func_0x00010c116960();
              _objc_retainAutoreleasedReturnValue();
              puStack_b8 = puVar12;
              func_0x00010c28f340();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar12);
              _objc_release(puVar11);
              _objc_release(puVar10);
            }
            else {
              puStack_b8 = (undefined *)0x0;
            }
            _objc_release(puVar5);
          }
          else {
            _objc_retain(puVar9);
            puStack_b8 = puVar9;
          }
          _objc_release(puVar9);
          _objc_release(puVar1);
          _objc_release(puVar9);
          puVar5 = puVar4;
          func_0x00010bef60a0();
          puVar9 = puVar8;
          func_0x00010bf86880();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          if (puVar5 == (undefined *)0x10) {
            puVar5 = (undefined *)0x0;
          }
          else {
            _objc_retain(puVar9);
            puVar5 = puVar9;
          }
          _objc_release(puVar9);
          _objc_release(puVar9);
          puVar9 = puVar1;
          func_0x00010bef2560();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar9;
          if (param_4 == 2) {
            FUN_10642a370();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010642a3b4();
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(puVar9);
          puVar9 = puVar4;
          func_0x00010bef60a0();
          puVar11 = puVar1;
          func_0x00010bef4a60();
          _objc_retainAutoreleasedReturnValue();
          puVar12 = puVar11;
          func_0x00010bef4240();
          puVar13 = puVar1;
          func_0x00010bf461c0();
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar1;
          func_0x00010bef52a0();
          _objc_retainAutoreleasedReturnValue();
          puVar15 = puVar14;
          func_0x00010c07db60();
          puVar16 = puVar1;
          func_0x00010bef52a0();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar16;
          func_0x00010bfd4380();
          puVar18 = puVar1;
          func_0x00010bef52a0();
          _objc_retainAutoreleasedReturnValue();
          puVar19 = puVar18;
          func_0x00010bf20f80();
          _objc_retainAutoreleasedReturnValue();
          puVar20 = puVar1;
          func_0x00010bef52a0();
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar20;
          func_0x00010bf20ee0();
          _objc_retainAutoreleasedReturnValue();
          func_0x000106431718(puVar1,param_3,param_5,puVar9,puVar12,param_4,puVar13,
                              (ulong)puVar15 & 0xffffffff,(ulong)puVar17 & 0xff,puVar19,puVar21,
                              puVar10,puStack_78,puStack_b8,puVar5,(ulong)puVar7 & 0xff);
          _objc_release(puVar21);
          _objc_release(puVar20);
          _objc_release(puVar19);
          _objc_release(puVar18);
          _objc_release(puVar16);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar11);
          _objc_release(puVar10);
          _objc_release(puVar5);
          _objc_release(puStack_b8);
          _objc_release(puVar8);
        }
      }
    }
    puVar5 = puVar4;
    func_0x00010bef60a0();
    if (puVar5 == (undefined *)0xd) {
      FUN_106425104(puVar4,param_3);
    }
    else {
      puVar5 = puVar4;
      func_0x00010bef60a0();
      if (puVar5 == (undefined *)0xe) {
        FUN_106425bec(puVar4,param_3);
      }
      else {
        puVar5 = puVar4;
        func_0x00010bef60a0();
        if (puVar5 == (undefined *)0x14) {
          puVar5 = puVar1;
          func_0x00010bef52a0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar5;
          func_0x00010bef5620();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar9;
          func_0x00010bf66880();
          _objc_retainAutoreleasedReturnValue();
          puVar10 = puVar8;
          func_0x00010c253c20();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar10;
          func_0x00010c253c40();
          _objc_release(puVar10);
          _objc_release(puVar8);
          _objc_release(puVar9);
          _objc_release(puVar5);
          if (puVar11 == (undefined *)0x4) {
            FUN_106424300(puVar4,param_3);
          }
        }
      }
    }
    if ((int)puVar7 == 0) {
      puVar5 = puVar1;
      FUN_10642852c(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(param_3);
      _objc_release(puVar5);
    }
    else {
      FUN_10642a3f8(param_3);
    }
    if (param_4 == 2) goto LAB_10642f268;
    puVar5 = PTR_PTR_1126bfe00;
    func_0x00010c0fbde0(PTR_PTR_1126bfe00);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) {
      puStack_98 = param_5;
      func_0x00010c09e420();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar7);
      puStack_98 = puVar7;
    }
    _objc_release(puVar7);
    _objc_release(puVar5);
    func_0x00010c14db60(param_3);
    puVar5 = puVar3;
    func_0x00010bf091e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c230240();
    _objc_release(puVar5);
    if ((int)puVar7 != 0) {
      puVar5 = PTR_PTR_1126bfe00;
      func_0x00010bef6060(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14db60(param_3);
      _objc_release(puVar5);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar7 = puVar3;
      func_0x00010bf091e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c231960();
      func_0x00010c0df6e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126bfe00;
      func_0x00010bef6080(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14db60(param_3);
      _objc_release(puVar9);
      _objc_release(puVar5);
      _objc_release(puVar7);
      puVar5 = puVar3;
      func_0x00010bf091e0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar5;
      func_0x00010bf5d160();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126bfe00;
      func_0x00010bef6040(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14db60(param_3);
      goto LAB_10642f23c;
    }
  }
  _objc_release(puStack_98);
LAB_10642f268:
  _objc_release(puStack_90);
  func_0x00010c1d0640(param_3);
  func_0x00010c1d0640(param_3);
  puVar5 = puVar1;
  func_0x00010c29d360();
  if (puVar5 != (undefined *)0x17) {
    func_0x00010c1d0640(param_3);
  }
  if (puVar2 == (undefined *)0xa) {
    if (param_4 != 3) {
      func_0x00010c12d3e0(param_3);
      func_0x00010c12d3e0(param_3);
      func_0x00010c12d3e0(param_3);
    }
    puVar2 = param_3;
    FUN_10641f9f8(param_3,puVar1,param_5,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf529e0();
    if (puVar5 != (undefined *)0x0) {
      func_0x00010bef7f60(param_3);
    }
    _objc_release(puVar2);
  }
  FUN_106431400(param_3,puVar1,param_5,param_4);
  func_0x000106432e78(param_3,puVar1);
  FUN_106432f90(param_3,puVar1,param_4);
  FUN_1064337fc(param_3,puVar1);
  func_0x000106432b6c(param_3,puVar1,param_4,1);
  puVar2 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(puStack_78);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10642f418; end: 10642f5c7; -[SCAdResponseOperaParseResult _contextSubscribeStatusHandlerWithCtaType:] */

void FUN_10642f418(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf20fa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if ((lVar2 == 0) || ((lVar2 = lVar1, func_0x00010bf8f140(), param_3 != 2 && ((int)lVar2 == 0)))) {
    puVar10 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126ca7a0;
    _objc_alloc();
    lVar2 = param_1;
    func_0x00010bef4a60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf20fa0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bfe44e0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bf5b760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bf5b7c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01aa80(puVar4,param_2,lVar6,lVar7,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    puVar9 = puVar4;
    func_0x00010c0801e0();
    puVar10 = (undefined *)0x0;
    if ((int)puVar9 == 0) {
      puVar10 = puVar4;
    }
    _objc_retain(puVar10);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10642f5c8; end: 1064305cf; -[SCAdResponseOperaParseResult topSnapPagePropertiesWithCommonProperties:ctaType:] */

void FUN_10642f5c8(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
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
  uint uVar21;
  uint uVar22;
  
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar5 = puVar2;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2368;
  _objc_opt_new();
  puVar7 = puVar3;
  func_0x00010c2b53e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = PTR_PTR_1126c9e18;
  _objc_alloc();
  func_0x00010c00c560();
  puVar20 = puVar8;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  _objc_release(puVar8);
  func_0x00010c2b53a0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar20 = PTR_PTR_1126c9e18;
  _objc_alloc();
  func_0x00010c00c560();
  _objc_release(param_3);
  puVar9 = puVar20;
  func_0x00010c0f12c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b52e0(puVar7);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar20);
  puVar8 = puVar7;
  func_0x00010c1531a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  func_0x00010c1d0640(puVar8);
  func_0x00010c1d0640(puVar8);
  puVar20 = puVar2;
  func_0x00010bef52a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef60a0();
  puVar10 = puVar2;
  func_0x00010bef4a60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4240();
  puVar19 = puVar2;
  func_0x00010bf461c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010bef2560(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360(puVar2);
  puVar12 = puVar2;
  func_0x00010bf89440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44a40();
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar19);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar20);
  puVar20 = puVar2;
  func_0x00010c274ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar20 != (undefined *)0x0) {
    puVar20 = puVar2;
    func_0x00010c274ce0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar8);
    _objc_release(puVar20);
  }
  puVar20 = puVar2;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010bef52a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010c29d360(puVar2);
  puVar19 = puVar20;
  FUN_106433ea8(puVar20,puVar9,puVar10);
  if (((ulong)puVar19 & 1) == 0) {
    func_0x00010bf4c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _objc_release(puVar9);
  _objc_release(puVar20);
  puVar20 = puVar5;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  puVar9 = puVar2;
  func_0x00010bf461c0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010bf4c260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ea840();
  func_0x00010c06b940();
  puVar19 = puVar2;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = param_1;
  func_0x00010bde85e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar5;
  func_0x00010bf20fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bfe44e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar2;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = param_1;
  func_0x00010bf4eac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar19);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar20);
  func_0x00010bef7f60(puVar8);
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x0001008522a8();
  func_0x00010c0df760(puVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar8);
  _objc_release(puVar20);
  puVar20 = puVar2;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar20;
  func_0x00010bef60a0();
  if (puVar9 == (undefined *)0x5) {
    _objc_release(puVar20);
  }
  else {
    puVar9 = puVar2;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010bef60a0();
    _objc_release(puVar9);
    _objc_release(puVar20);
    if ((puVar10 != (undefined *)0x16) &&
       (puVar20 = puVar6, func_0x00010bf1f480(), (int)puVar20 != 0)) {
      func_0x00010c1d0640(puVar8);
    }
  }
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126bfe00;
  func_0x00010c07fbe0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar20);
  puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar9 = puVar2;
  func_0x00010bef2560(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000106434124();
  func_0x00010c0df6e0(puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2d20;
  func_0x00010bf8dbe0(PTR_PTR_1126b2d20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar8);
  _objc_release(puVar10);
  _objc_release(puVar20);
  _objc_release(puVar9);
  puVar20 = puVar2;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar20;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  puVar20 = puVar2;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar20;
  func_0x00010bf20500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  if (puVar9 == (undefined *)0x0) {
    puVar20 = (undefined *)0x0;
    goto LAB_106430518;
  }
  if (puVar10 == (undefined *)0x0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    puVar19 = PTR_PTR_1126c54d0;
    func_0x00010befe6c0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar20 = param_1;
  func_0x00010becd7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar20;
  func_0x00010c0d3c80();
  _objc_release(puVar8);
  _objc_release(puVar20);
  puVar8 = puVar4;
  FUN_10642a268(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar11);
  _objc_release(puVar8);
  puVar8 = puVar6;
  func_0x000106433d28();
  if ((int)puVar8 != 0) {
    puVar8 = puVar2;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar20 = puVar8;
    func_0x00010bef4240();
    _objc_release(puVar8);
    if (puVar20 != (undefined *)0x6) {
      puVar8 = PTR_PTR_1126ca728;
      _objc_opt_class(PTR_PTR_1126ca728);
      func_0x00010642a968(puVar11,puVar8);
    }
  }
  puVar8 = puVar2;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar8;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar2;
  func_0x00010bef52a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar20;
  func_0x00010bfecde0();
  _objc_release(puVar12);
  _objc_release(puVar20);
  _objc_release(puVar8);
  puVar8 = puVar2;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar8;
  func_0x00010bef4240();
  if (puVar20 == (undefined *)0x16) {
    puVar20 = puVar2;
    func_0x00010bef4a60();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar20;
    func_0x00010bef60a0();
    bVar1 = puVar12 == (undefined *)0x5;
    _objc_release(puVar20);
  }
  else {
    bVar1 = false;
  }
  _objc_release(puVar8);
  puVar8 = puVar2;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar8;
  func_0x00010bef60a0();
  if ((puVar20 == (undefined *)0x16 || bVar1) && (puVar13 == (undefined *)0x0)) {
    puVar20 = puVar9;
    func_0x00010c23e3c0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar20;
    func_0x00010c067ec0();
    _objc_release(puVar20);
    _objc_release(puVar8);
    if (0 < (int)puVar12) {
      puVar8 = PTR_PTR_1126ca718;
      _objc_opt_class(PTR_PTR_1126ca718);
      func_0x00010642a968(puVar11,puVar8);
      puVar8 = puVar9;
      func_0x00010c23e3c0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR_PTR_1126bfe00;
      func_0x00010bef58a0(PTR_PTR_1126bfe00);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar11);
      _objc_release(puVar20);
      goto LAB_10642ffa0;
    }
  }
  else {
LAB_10642ffa0:
    _objc_release(puVar8);
  }
  puVar8 = puVar2;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar8;
  func_0x00010c274920();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar20;
  func_0x00010c0c6c20();
  _objc_release(puVar20);
  _objc_release(puVar8);
  puVar8 = puVar2;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar8;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar20;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar13 == (undefined *)0x0) {
    uVar21 = 1;
  }
  else {
    puVar14 = puVar2;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar14;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bf529e0();
    uVar21 = (uint)(puVar18 == (undefined *)0x0);
    _objc_release(puVar17);
    _objc_release(puVar16);
    _objc_release(puVar14);
  }
  _objc_release(puVar13);
  _objc_release(puVar20);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126bfe00;
  func_0x00010bef24e0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  if (puVar13 == (undefined *)0x0) {
    uVar22 = 0;
  }
  else {
    puVar8 = puVar13;
    func_0x00010c263ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = (uint)(puVar8 != (undefined *)0x0);
    _objc_release();
  }
  puVar8 = puVar2;
  func_0x00010bef2560();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar8;
  func_0x00010bf1f480();
  _objc_release(puVar8);
  puVar8 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar8;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010bef4240();
  if (puVar16 == (undefined *)0xd) {
    bVar1 = true;
  }
  else {
    puVar16 = param_1;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar16;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bef4240();
    bVar1 = puVar18 == (undefined *)0x15;
    _objc_release(puVar17);
    _objc_release(puVar16);
  }
  _objc_release(puVar14);
  _objc_release(puVar8);
  if ((((puVar12 != (undefined *)0x2 & uVar21 | uVar22) & (uint)puVar20) != 0) && (!bVar1)) {
    puVar8 = PTR_PTR_1126ca758;
    _objc_opt_class(PTR_PTR_1126ca758);
    func_0x00010642a968(puVar11,puVar8);
  }
  puVar8 = puVar4;
  func_0x00010bef5640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126bfe00;
  func_0x00010bef5640(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar11);
  _objc_release(puVar20);
  _objc_release(puVar8);
  puVar8 = puVar5;
  func_0x00010bef4360(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126bfe00;
  func_0x00010bef4360(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar11);
  _objc_release(puVar20);
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126bfe00;
  func_0x00010bef53a0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar11);
  _objc_release(puVar20);
  _objc_release(puVar8);
  puVar8 = puVar5;
  func_0x00010c15ed20(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126bfe00;
  func_0x00010c15ed20(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar11);
  _objc_release(puVar20);
  _objc_release(puVar8);
  puVar8 = puVar9;
  func_0x00010bef4720(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126bfe00;
  func_0x00010bef4720(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar11);
  _objc_release(puVar20);
  _objc_release(puVar8);
  puVar8 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  _objc_release(puVar8);
  puVar8 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar8;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar20;
  func_0x00010bef4240();
  if (puVar12 != (undefined *)0xd) {
    puVar12 = param_1;
    func_0x00010c0cc0c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bef52a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240();
    _objc_release(puVar14);
    _objc_release(puVar12);
  }
  _objc_release(puVar20);
  _objc_release(puVar8);
  func_0x00010c0cc0c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bef52a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c082160();
  _objc_release(puVar8);
  _objc_release(param_1);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126bfe00;
  func_0x00010c29bfa0(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar11);
  _objc_release(puVar20);
  _objc_release(puVar8);
  func_0x00010642a6dc(puVar11);
  func_0x00010c1d0640(puVar11);
  puVar20 = puVar11;
  func_0x00010bf51e00(puVar11);
  _objc_release(puVar13);
  _objc_release(puVar19);
  puVar8 = puVar11;
LAB_106430518:
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar15);
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 1064305d0; end: 106430643; -[SCAdResponseOperaParseResult initWithMetadata:] */

undefined1 * FUN_1064305d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f12a0;
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



/* Entry: 106430644; end: 10643079f; -[SCAdResponseOperaParseResult operaPageData] */

void FUN_106430644(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  
  puVar9 = PTR_PTR_1126b9250;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bef52a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef60a0();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bef52a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bef4240();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29d360(uVar5);
  func_0x00010c0da220(puVar9,param_2,uVar2,uVar4,uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  lVar6 = param_1;
  func_0x00010bf42a80(param_1,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c274d00(param_1,param_2,lVar6,puVar9);
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar8 = lVar7;
    func_0x00010c0e00e0(lVar7,param_2,&PTR____CFConstantStringClassReference_110f0c0f8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0d1a0(param_1,param_2,lVar6,lVar8,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    puVar9 = PTR_PTR_1126b23e0;
    _objc_alloc(PTR_PTR_1126b23e0);
    func_0x00010c033240();
    _objc_release(param_1);
  }
  _objc_release(lVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1064307a0; end: 1064307a7; -[SCAdResponseOperaParseResult metadata] */

undefined8 FUN_1064307a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1064307a8; end: 1064307b3; -[SCAdResponseOperaParseResult .cxx_destruct] */

void FUN_1064307a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064307b4; end: 106430deb; -[SCAdResponseOperaParserMetadata initWithAdSnap:adResponse:adPod:mediaManager:commonBasePageProperties:contentDeliveryMedia:isAdContentLooping:topSnapPageBaseProperties:webViewAdPrefetchHints:operaNavigationStyle:viewLocation:configProvider:adConfigProviderV2:onDemandResourceDownloader:preferences:userPreferences:userInfoServices:pixelServeItemSyncManager:adPodManager:contextExperimentService:adBrowserLifecycleService:impalaLegacyServices:contextSessionId:indexCookieName:expandStatus:trackMetricsManager:verticalNavigationSwipeLeftToAttachment:creatorSettingsFetcher:creatorSettingsTracker:adPlaybackConfig:dpaConfigProvider:operaConfigProvider:webBrowsingConfigProvider:playbackSessionId:storiesConfigProvider:] */

undefined8 *
FUN_1064307b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined1 param_30,undefined4 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_29);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  puStack_70 = PTR_PTR_1126f12a8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_9;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    puVar1[10] = param_13;
    puVar1[0xb] = param_14;
    _objc_retain(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_27;
    _objc_release(uVar2);
    puVar1[0x1a] = param_28;
    _objc_retain(param_29);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_29;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 9) = param_30;
    _objc_retain(param_32);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_36);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_36;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_37;
    _objc_release(uVar2);
    _objc_retain(param_38);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_38;
    _objc_release(uVar2);
    _objc_retain(param_39);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_39;
    _objc_release(uVar2);
  }
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_29);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106430dec; end: 106430e5b; -[SCAdResponseOperaParserMetadata isSpotlightFeed] */

uint FUN_106430dec(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x58);
  if ((lVar3 - 0x49U < 0x1a && (1L << (lVar3 - 0x49U & 0x3f) & 0x2020001U) != 0) ||
     ((uVar1 = lVar3 - 0x57U >> 1, (uVar1 | lVar3 - 0x57U << 0x3f) < 8 &&
      ((0xb1U >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if (lVar3 - 0x42U < 0x2a) {
      uVar2 = (uint)(0x3c000100701 >> (lVar3 - 0x42U & 0x3f));
    }
  }
  return uVar2 & 1;
}



/* Entry: 106430e5c; end: 106430e6b; -[SCAdResponseOperaParserMetadata isAdPreview] */

bool FUN_106430e5c(long param_1)

{
  return *(long *)(param_1 + 0x58) == 0x1c;
}



/* Entry: 106430e6c; end: 106430e73; -[SCAdResponseOperaParserMetadata adSnap] */

undefined8 FUN_106430e6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106430e74; end: 106430e7b; -[SCAdResponseOperaParserMetadata adResponse] */

undefined8 FUN_106430e74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106430e7c; end: 106430e83; -[SCAdResponseOperaParserMetadata adPod] */

undefined8 FUN_106430e7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106430e84; end: 106430e8b; -[SCAdResponseOperaParserMetadata mediaManager] */

undefined8 FUN_106430e84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106430e8c; end: 106430e93; -[SCAdResponseOperaParserMetadata commonBasePageProperties] */

undefined8 FUN_106430e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106430e94; end: 106430e9b; -[SCAdResponseOperaParserMetadata contentDeliveryMedia] */

undefined8 FUN_106430e94(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106430e9c; end: 106430ea3; -[SCAdResponseOperaParserMetadata isAdContentLooping] */

undefined1 FUN_106430e9c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106430ea4; end: 106430eab; -[SCAdResponseOperaParserMetadata topSnapPageBaseProperties] */

undefined8 FUN_106430ea4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106430eac; end: 106430eb3; -[SCAdResponseOperaParserMetadata webViewAdPrefetchHints] */

undefined8 FUN_106430eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106430eb4; end: 106430ebb; -[SCAdResponseOperaParserMetadata operaNavigationStyle] */

undefined8 FUN_106430eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106430ebc; end: 106430ec3; -[SCAdResponseOperaParserMetadata viewLocation] */

undefined8 FUN_106430ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 106430ec4; end: 106430ecb; -[SCAdResponseOperaParserMetadata configProvider] */

undefined8 FUN_106430ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 106430ecc; end: 106430ed3; -[SCAdResponseOperaParserMetadata adConfigProviderV2] */

undefined8 FUN_106430ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 106430ed4; end: 106430edb; -[SCAdResponseOperaParserMetadata onDemandResourceDownloader] */

undefined8 FUN_106430ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 106430edc; end: 106430ee3; -[SCAdResponseOperaParserMetadata preferences] */

undefined8 FUN_106430edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 106430ee4; end: 106430eeb; -[SCAdResponseOperaParserMetadata userPreferences] */

undefined8 FUN_106430ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 106430eec; end: 106430ef3; -[SCAdResponseOperaParserMetadata userInfoServices] */

undefined8 FUN_106430eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 106430ef4; end: 106430efb; -[SCAdResponseOperaParserMetadata pixelServeItemSyncManager] */

undefined8 FUN_106430ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 106430efc; end: 106430f03; -[SCAdResponseOperaParserMetadata adPodManager] */

undefined8 FUN_106430efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 106430f04; end: 106430f0b; -[SCAdResponseOperaParserMetadata contextExperimentService] */

undefined8 FUN_106430f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 106430f0c; end: 106430f13; -[SCAdResponseOperaParserMetadata adBrowserLifecycleService] */

undefined8 FUN_106430f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 106430f14; end: 106430f1b; -[SCAdResponseOperaParserMetadata impalaLegacyServices] */

undefined8 FUN_106430f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 106430f1c; end: 106430f23; -[SCAdResponseOperaParserMetadata contextSessionId] */

undefined8 FUN_106430f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 106430f24; end: 106430f2b; -[SCAdResponseOperaParserMetadata indexCookieName] */

undefined8 FUN_106430f24(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 106430f2c; end: 106430f33; -[SCAdResponseOperaParserMetadata trackMetricsManager] */

undefined8 FUN_106430f2c(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 106430f34; end: 106430f3b; -[SCAdResponseOperaParserMetadata expandStatus] */

undefined8 FUN_106430f34(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 106430f3c; end: 106430f43; -[SCAdResponseOperaParserMetadata verticalNavigationSwipeLeftToAttachment] */

undefined1 FUN_106430f3c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}


