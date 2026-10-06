/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10915f198; end: 10915f3c3; -[CTPProtobufEntityTransformerCustomSticker entityFromProtobufSticker:item:] */

void FUN_10915f198(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  FUN_10916182c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_4);
  if (lVar2 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    uVar3 = param_3;
    func_0x00010bfd8f20();
    if ((int)uVar3 == 0) {
      uVar9 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0c45e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar4;
      func_0x00010bf1f060(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(uVar4);
    }
    uVar3 = param_3;
    func_0x00010bf5b440(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bfe2ee0();
    uVar6 = uVar3;
    func_0x00010c0b5940(uVar3);
    func_0x000107c30948(uVar5,uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar10 = PTR_PTR_1126ba838;
    _objc_alloc(PTR_PTR_1126ba838);
    uVar3 = param_3;
    func_0x00010bf92c80(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010bf92c60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010c2a5040(param_3);
    uVar8 = param_3;
    func_0x00010bfe0640(param_3);
    func_0x00010c0ed1a0(param_3);
    func_0x00010c06c000();
    func_0x00010c007d00((double)(uVar7 & 0xffffffff),(double)(uVar8 & 0xffffffff),puVar10);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar9);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10915f3c4; end: 10915f3cf; -[CTPProtobufEntityTransformerCustomSticker .cxx_destruct] */

void FUN_10915f3c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10915f3d0; end: 10915f4a3; -[CTPProtobufEntityTransformerEmoji SCCTPCTItemEntityFromProtobufItem:] */

void FUN_10915f3d0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ba858;
  _objc_opt_class(PTR_PTR_1126ba858);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126ba850;
    _objc_opt_new(PTR_PTR_1126ba850);
    func_0x00010bfe1140(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f40(puVar3);
    _objc_release(param_3);
    puVar4 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    func_0x00010c194460();
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10915f4a4; end: 10915f4ab; -[CTPProtobufEntityTransformerEmoji presentationModelFromProtobufMetadata:] */

undefined8 FUN_10915f4a4(void)

{
  return 0;
}



/* Entry: 10915f4ac; end: 10915f56f; -[CTPProtobufEntityTransformerEmoji entityFromProtobufItem:] */

void FUN_10915f4ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6be0(), (int)lVar1 == 0)) {
    param_1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    uVar3 = param_1;
    func_0x00010bf96f20();
    if ((int)lVar2 == (int)uVar3) {
      lVar2 = lVar1;
      func_0x00010bf8e2c0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf96e20(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      param_1 = 0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10915f570; end: 10915f613; -[CTPProtobufEntityTransformerEmoji entityFromProtobufSticker:] */

void FUN_10915f570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010bfe1140(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,0);
  if ((int)puVar1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
    if (((ulong)puVar1 & 1) == 0) {
      uVar2 = param_3;
      FUN_109164214(param_3);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10915f5d4;
    }
  }
  uVar2 = 0;
LAB_10915f5d4:
  puVar1 = PTR_PTR_1126ba858;
  _objc_alloc(PTR_PTR_1126ba858);
  func_0x00010c058c20();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10915f614; end: 10915f61b; -[CTPProtobufEntityTransformerFilter entityTypeOutput] */

undefined8 FUN_10915f614(void)

{
  return 0xb;
}



/* Entry: 10915f61c; end: 10915f623; -[CTPProtobufEntityTransformerFilter entityTypeInput] */

undefined8 FUN_10915f61c(void)

{
  return 0x10;
}



/* Entry: 10915f624; end: 10915f6e7; -[CTPProtobufEntityTransformerFilter SCCTPCTItemEntityFromProtobufItem:] */

void FUN_10915f624(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (uVar1 = param_3, func_0x00010bf96f00(), uVar1 != 0xb)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b3828;
    _objc_opt_class(PTR_PTR_1126b3828);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar4);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126b37c0;
      _objc_alloc_init(PTR_PTR_1126b37c0);
      func_0x00010c19bd60();
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10915f6e8; end: 10915f6ef; -[CTPProtobufEntityTransformerFilter presentationModelFromProtobufMetadata:] */

undefined8 FUN_10915f6e8(void)

{
  return 0;
}



/* Entry: 10915f6f0; end: 10915f7b3; -[CTPProtobufEntityTransformerFilter entityFromProtobufItem:] */

void FUN_10915f6f0(int param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6be0(), (int)lVar1 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    func_0x00010bf96f20();
    if ((int)lVar2 == param_1) {
      lVar2 = lVar1;
      func_0x00010bfad780(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d2770;
      _objc_alloc(PTR_PTR_1126d2770);
      func_0x00010c012f60();
      _objc_release(lVar2);
    }
    else {
      puVar3 = (undefined *)0x0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10915f7b4; end: 10915f9f3; -[CTPProtobufEntityTransformerGfycat SCCTPCTItemEntityFromProtobufItem:] */

void FUN_10915f7b4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b37c0;
  _objc_alloc_init(PTR_PTR_1126b37c0);
  puVar3 = PTR_PTR_1126dd868;
  _objc_alloc_init(PTR_PTR_1126dd868);
  uVar4 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126bb2d0;
  _objc_opt_class(PTR_PTR_1126bb2d0);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar7 = PTR_PTR_1126dd870;
  _objc_alloc_init(PTR_PTR_1126dd870);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10915f9f4;
  uStack_60 = 0x10915fa04;
  puVar8 = PTR_PTR_1126b0ce8;
  _objc_alloc_init();
  uVar4 = uVar1;
  puStack_58 = puVar8;
  func_0x00010c0c45e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1100();
  _objc_release(uVar4);
  func_0x00010c1c4360(puVar7);
  func_0x00010c0c4a20(uVar1);
  func_0x00010c2256c0(puVar7);
  func_0x00010c0c4a20(uVar1);
  func_0x00010c1a7d00(puVar7);
  func_0x00010befa120(puVar5);
  func_0x00010c1c4100(puVar3);
  uVar4 = uVar1;
  func_0x00010bfcc560(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a39e0(puVar3);
  _objc_release(uVar4);
  func_0x00010c1a39c0(puVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puStack_58);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10915f9f4; end: 10915fa0f;  */

void FUN_10915f9f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10915fa10; end: 10915fa73;  */

void FUN_10915fa10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retain(param_3);
  func_0x00010c213ea0(uVar1);
  func_0x00010c181c20(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10915fa74; end: 10915fa97; -[CTPProtobufEntityTransformerGfycat presentationModelFromProtobufMetadata:] */

void FUN_10915fa74(void)

{
  _objc_alloc(PTR_PTR_1126bb1e8);
  func_0x00010c01ce40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10915fa98; end: 10915fc4b; -[CTPProtobufEntityTransformerGfycat entityFromProtobufItem:] */

void FUN_10915fa98(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (uVar1 = param_3, func_0x00010bfd6be0(), (int)uVar1 == 0)) {
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf96ee0();
    lVar3 = param_1;
    func_0x00010bf96f20();
    if ((int)uVar2 == (int)lVar3) {
      uVar2 = uVar1;
      func_0x00010bfcc540(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c0c4160();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      lVar6 = *(long *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar5;
      func_0x00010c0c45e0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar6;
      func_0x00010bf1f060(lVar6,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(lVar6);
      if (lVar3 == 0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar9 = PTR_PTR_1126bb2d0;
        _objc_alloc(PTR_PTR_1126bb2d0);
        uVar4 = uVar2;
        func_0x00010bfcc560(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c2a5040(uVar5);
        uVar8 = uVar5;
        func_0x00010bfe0640(uVar5);
        func_0x00010c017c40((double)(uVar7 & 0xffffffff),(double)(uVar8 & 0xffffffff),puVar9,param_2
                            ,uVar4,lVar3);
        _objc_release(uVar4);
      }
      _objc_release(lVar3);
      _objc_release(uVar5);
      _objc_release(uVar2);
    }
    else {
      puVar9 = (undefined *)0x0;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10915fc4c; end: 10915fc57; -[CTPProtobufEntityTransformerGfycat .cxx_destruct] */

void FUN_10915fc4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10915fc58; end: 10915fdc3; -[CTPProtobufEntityTransformerGiphy SCCTPCTItemEntityFromProtobufItem:] */

void FUN_10915fc58(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ba880;
  _objc_opt_class(PTR_PTR_1126ba880);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar6);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126ba870;
    _objc_opt_new(PTR_PTR_1126ba870);
    uVar2 = param_3;
    func_0x00010bfccae0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a3ba0(puVar3);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0c45e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c119360(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4360(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar4);
    func_0x00010c0c4a20(param_3);
    func_0x00010c2256c0(puVar3);
    func_0x00010c0c4a20(param_3);
    func_0x00010c1a7d00(puVar3);
    puVar6 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    func_0x00010c1a3b80();
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10915fdc4; end: 10915fde7; -[CTPProtobufEntityTransformerGiphy presentationModelFromProtobufMetadata:] */

void FUN_10915fdc4(void)

{
  _objc_alloc(PTR_PTR_1126bb1e8);
  func_0x00010c01ce40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10915fde8; end: 10915ff6b; -[CTPProtobufEntityTransformerGiphy entityFromProtobufItem:] */

void FUN_10915fde8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (uVar1 = param_3, func_0x00010bfd6be0(), (int)uVar1 == 0)) {
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf96ee0();
    lVar3 = param_1;
    func_0x00010bf96f20();
    if ((int)uVar2 == (int)lVar3) {
      uVar2 = uVar1;
      func_0x00010bfccaa0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfd8f20();
      if ((int)uVar4 == 0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010c0c45e0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c28f740(uVar5,param_2,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar5);
        uVar4 = uVar2;
        func_0x00010c2a5040(uVar2);
        uVar7 = uVar2;
        func_0x00010bfe0640(uVar2);
        puVar9 = PTR_PTR_1126ba880;
        _objc_alloc(PTR_PTR_1126ba880);
        uVar8 = uVar2;
        func_0x00010bfccae0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c017cc0((double)(uVar4 & 0xffffffff),(double)(uVar7 & 0xffffffff),puVar9,param_2
                            ,uVar8,uVar6);
        _objc_release(uVar8);
        _objc_release(uVar6);
      }
      _objc_release(uVar2);
    }
    else {
      puVar9 = (undefined *)0x0;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10915ff6c; end: 10915ff77; -[CTPProtobufEntityTransformerGiphy .cxx_destruct] */

void FUN_10915ff6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10915ff78; end: 10915ff9b; -[CTPProtobufEntityTransformerInfoSticker infoStickerTypeFromProto:] */

undefined8 FUN_10915ff78(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 - 1U < 0x1b) {
    return *(undefined8 *)(&UNK_10dfb8200 + (ulong)(param_3 - 1U) * 8);
  }
  return 0;
}



/* Entry: 10915ff9c; end: 10915ffc3; -[CTPProtobufEntityTransformerInfoSticker protoInfoStickerTypeFromCTPType:] */

undefined4 FUN_10915ff9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 0x1a) {
    return *(undefined4 *)(&UNK_10dfb82d8 + (param_3 - 1U) * 4);
  }
  return 0xfbadbeef;
}



/* Entry: 10915ffc4; end: 109160093; -[CTPProtobufEntityTransformerInfoSticker SCCTPCTItemEntityFromProtobufItem:] */

void FUN_10915ffc4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ba8d8;
  _objc_opt_class(PTR_PTR_1126ba8d8);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126ba8f8;
    _objc_opt_new(PTR_PTR_1126ba8f8);
    func_0x00010bfee000(param_3);
    func_0x00010c119280(param_1);
    func_0x00010c21acc0(puVar3);
    puVar4 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    func_0x00010c1ac500();
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109160094; end: 10916009b; -[CTPProtobufEntityTransformerInfoSticker presentationModelFromProtobufMetadata:] */

undefined8 FUN_109160094(void)

{
  return 0;
}



/* Entry: 10916009c; end: 10916015f; -[CTPProtobufEntityTransformerInfoSticker entityFromProtobufItem:] */

void FUN_10916009c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6be0(), (int)lVar1 == 0)) {
    param_1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    uVar3 = param_1;
    func_0x00010bf96f20();
    if ((int)lVar2 == (int)uVar3) {
      lVar2 = lVar1;
      func_0x00010bfede40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf96e20(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      param_1 = 0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109160160; end: 1091601cf; -[CTPProtobufEntityTransformerInfoSticker entityFromProtobufSticker:] */

void FUN_109160160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ba8d8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_release(param_3);
  func_0x00010bfee040(param_1,param_2,uVar2);
  func_0x00010c01dac0(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1091601d0; end: 1091601d7; -[CTPProtobufEntityTransformerMusicTrack SCCTPCTItemEntityFromProtobufItem:] */

undefined8 FUN_1091601d0(void)

{
  return 0;
}



/* Entry: 1091601d8; end: 1091601df; -[CTPProtobufEntityTransformerMusicTrack presentationModelFromProtobufMetadata:] */

undefined8 FUN_1091601d8(void)

{
  return 0;
}



/* Entry: 1091601e0; end: 1091602df; -[CTPProtobufEntityTransformerMusicTrack entityFromProtobufItem:] */

void FUN_1091601e0(int param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6be0(), (int)lVar1 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    func_0x00010bf96f20();
    if ((int)lVar2 == param_1) {
      lVar2 = lVar1;
      func_0x00010c0d3a00(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126bfd00;
      _objc_alloc(PTR_PTR_1126bfd00);
      lVar3 = lVar2;
      func_0x00010c277e80(lVar2);
      lVar4 = lVar2;
      func_0x00010bf63640(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c054c20(puVar5,param_2,lVar3,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar2);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1091602e0; end: 1091602e7; -[CTPProtobufEntityTransformerProxy entityTypeOutput] */

undefined8 FUN_1091602e0(void)

{
  return 0xe;
}



/* Entry: 1091602e8; end: 1091602ef; -[CTPProtobufEntityTransformerProxy entityTypeInput] */

undefined8 FUN_1091602e8(void)

{
  return 0x17;
}



/* Entry: 1091602f0; end: 1091603b3; -[CTPProtobufEntityTransformerProxy SCCTPCTItemEntityFromProtobufItem:] */

void FUN_1091602f0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (uVar1 = param_3, func_0x00010bf96f00(), uVar1 != 0xe)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126dd878;
    _objc_opt_class(PTR_PTR_1126dd878);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar4);
    uVar1 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar2);
    if (uVar1 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR_PTR_1126b37c0;
      _objc_alloc_init(PTR_PTR_1126b37c0);
      func_0x00010c1e54a0();
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1091603b4; end: 1091603bb; -[CTPProtobufEntityTransformerProxy presentationModelFromProtobufMetadata:] */

undefined8 FUN_1091603b4(void)

{
  return 0;
}



/* Entry: 1091603bc; end: 10916047f; -[CTPProtobufEntityTransformerProxy entityFromProtobufItem:] */

void FUN_1091603bc(int param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6be0(), (int)lVar1 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    func_0x00010bf96f20();
    if ((int)lVar2 == param_1) {
      lVar2 = lVar1;
      func_0x00010c119e40(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126dd880;
      _objc_alloc(PTR_PTR_1126dd880);
      func_0x00010c03bb80();
      _objc_release(lVar2);
    }
    else {
      puVar3 = (undefined *)0x0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109160480; end: 109160543; -[CTPProtobufEntityTransformerShoppingSticker entityFromProtobufItem:] */

void FUN_109160480(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6be0(), (int)lVar1 == 0)) {
    param_1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    uVar3 = param_1;
    func_0x00010bf96f20();
    if ((int)lVar2 == (int)uVar3) {
      lVar2 = lVar1;
      func_0x00010c22d200(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf96e20(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      param_1 = 0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109160544; end: 10916071b; -[CTPProtobufEntityTransformerShoppingSticker SCCTPCTItemEntityFromProtobufItem:] */

void FUN_109160544(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126d25c8;
  _objc_opt_class(PTR_PTR_1126d25c8);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar7);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar3 = PTR_PTR_1126dd888;
    _objc_opt_new(PTR_PTR_1126dd888);
    func_0x00010c241860(param_3);
    func_0x00010c204900(puVar3);
    uVar2 = param_3;
    func_0x00010c257800();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x000107c3094c();
    if ((int)uVar4 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR_PTR_1126afad0;
      _objc_alloc_init(PTR_PTR_1126afad0);
      func_0x00010c1a85a0();
      func_0x00010c1c0fe0(puVar8);
    }
    _objc_release(uVar2);
    func_0x00010c20c240(puVar3);
    uVar2 = param_3;
    func_0x00010c2711a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20ba60(puVar3);
    _objc_release(uVar2);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c45e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c119360(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4360(puVar3);
    _objc_release(uVar6);
    _objc_release(param_3);
    _objc_release(uVar5);
    func_0x00010c1ffae0(puVar7);
    _objc_release(puVar8);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10916071c; end: 109160723; -[CTPProtobufEntityTransformerShoppingSticker presentationModelFromProtobufMetadata:] */

undefined8 FUN_10916071c(void)

{
  return 0;
}



/* Entry: 109160724; end: 10916089b; -[CTPProtobufEntityTransformerShoppingSticker entityFromProtobufSticker:] */

void FUN_109160724(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0c45e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c257800(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe2ee0();
    lVar3 = lVar1;
    func_0x00010c0b5940(lVar1);
    func_0x000107c30948(lVar2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c0c45e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c28f740(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(uVar4);
    puVar6 = PTR_PTR_1126d25c8;
    _objc_alloc(PTR_PTR_1126d25c8);
    func_0x00010c241860(param_3);
    lVar1 = param_3;
    func_0x00010c255160(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c048140(puVar6);
    _objc_release(lVar1);
    _objc_release(uVar5);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10916089c; end: 1091608a7; -[CTPProtobufEntityTransformerShoppingSticker .cxx_destruct] */

void FUN_10916089c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1091608a8; end: 109160a03; -[CTPProtobufEntityTransformerSnapSticker SCCTPCTItemEntityFromProtobufItem:] */

void FUN_1091608a8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126babc8;
  _objc_opt_class(PTR_PTR_1126babc8);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar6);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    puVar3 = PTR_PTR_1126babb0;
    _objc_opt_new(PTR_PTR_1126babb0);
    uVar2 = param_3;
    func_0x00010c2434e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cafa0(puVar3);
    _objc_release(uVar2);
    func_0x00010c06c000(param_3);
    func_0x00010c1af280(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c45e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c119360(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4360(puVar3);
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_release(uVar4);
    func_0x00010c2056e0(puVar6);
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 109160a04; end: 109160a27; -[CTPProtobufEntityTransformerSnapSticker presentationModelFromProtobufMetadata:] */

void FUN_109160a04(void)

{
  _objc_alloc(PTR_PTR_1126bb1e8);
  func_0x00010c01ce40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109160a28; end: 109160aeb; -[CTPProtobufEntityTransformerSnapSticker entityFromProtobufItem:] */

void FUN_109160a28(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6be0(), (int)lVar1 == 0)) {
    param_1 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    uVar3 = param_1;
    func_0x00010bf96f20();
    if ((int)lVar2 == (int)uVar3) {
      lVar2 = lVar1;
      func_0x00010c2434c0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf96e20(param_1,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    else {
      param_1 = 0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 109160aec; end: 109160bdf; -[CTPProtobufEntityTransformerSnapSticker entityFromProtobufSticker:] */

void FUN_109160aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfd8f20();
  if ((int)uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010c0c45e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c28f740(uVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126babc8;
    _objc_alloc(PTR_PTR_1126babc8);
    uVar1 = param_3;
    func_0x00010c0d4f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c06c000(param_3);
    func_0x00010c048880(puVar4,param_2,uVar1,uVar2,uVar3);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109160be0; end: 109160beb; -[CTPProtobufEntityTransformerSnapSticker .cxx_destruct] */

void FUN_109160be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109160bec; end: 109160ce7; -[CTPProtobufEntityTransformerTemplate SCCTPCTItemEntityFromProtobufItem:] */

void FUN_109160bec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126dd890;
  _objc_opt_class(PTR_PTR_1126dd890);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126bfa60;
    _objc_alloc(PTR_PTR_1126bfa60);
    func_0x00010c1190e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008360(puVar3);
    _objc_release(param_3);
    puVar4 = PTR_PTR_1126b37c0;
    _objc_opt_new(PTR_PTR_1126b37c0);
    func_0x00010c212d00();
    _objc_release(puVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109160ce8; end: 109160cef; -[CTPProtobufEntityTransformerTemplate presentationModelFromProtobufMetadata:] */

undefined8 FUN_109160ce8(void)

{
  return 0;
}



/* Entry: 109160cf0; end: 109160e17; -[CTPProtobufEntityTransformerTemplate entityFromProtobufItem:] */

void FUN_109160cf0(int param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if ((param_3 == 0) || (lVar1 = param_3, func_0x00010bfd6be0(), (int)lVar1 == 0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96ee0();
    func_0x00010bf96f20();
    if ((int)lVar2 == param_1) {
      lVar2 = param_3;
      func_0x00010bf96da0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c26b1c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      puVar5 = PTR_PTR_1126dd890;
      _objc_alloc(PTR_PTR_1126dd890);
      lVar2 = param_3;
      func_0x00010bfe5ea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf63640(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c050fe0(puVar5,param_2,lVar2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
    }
    else {
      puVar5 = (undefined *)0x0;
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 109160e18; end: 109160eaf; -[CTPGRPCMediaContentConverter urlMediaContentFromProtoMediaContent:] */

void FUN_109160e18(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126d25c0;
  puVar4 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c26e3a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf4db80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c28fb20(puVar3,param_2,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109160eb0; end: 109160f47; -[CTPGRPCMediaContentConverter boltObjectMediaContentFromProtoMediaContent:] */

void FUN_109160eb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR_PTR_1126d25c0;
  puVar4 = (undefined *)0x0;
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010c26d880(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf4be80(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010bf1f080(puVar3,param_2,lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar4 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 109160f48; end: 10916104f; -[CTPGRPCMediaContentConverter protoMediaContentFromCTPMediaContent:] */

void FUN_109160f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_109161050;
  uStack_30 = 0x109161060;
  puVar1 = PTR_PTR_1126b0ce8;
  _objc_alloc_init();
  puStack_28 = puVar1;
  func_0x00010c0c1100(param_3);
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109161050; end: 109161067;  */

void FUN_109161050(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 109161068; end: 10916112f;  */

void FUN_109161068(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retain(param_3);
  func_0x00010c214440(uVar1);
  func_0x00010c182a60(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109161130; end: 1091611ab;  */

undefined * FUN_109161130(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730b30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f27e38,
                        &UNK_10dfb8340,&UNK_10dfb8470,0x1c,FUN_1091611ac,0);
    do {
      if (puRam0000000113730b30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730b30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730b30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730b30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730b30;
}



/* Entry: 1091611ac; end: 1091611c7;  */

uint FUN_1091611ac(uint param_1)

{
  return (uint)(param_1 < 0x1e) & 0x3fffffb7U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 1091611c8; end: 109161253; +[SCCTPDeltaForceGroupKey descriptor] */

undefined * FUN_1091611c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730b38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be9d70,
                        &PTR____CFConstantStringClassReference_110f27e58,&PTR_DAT_1132c2998,
                        &PTR_s_kind_1132c29f0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam0000000113730b38 = puVar1;
  }
  return puRam0000000113730b38;
}



/* Entry: 109161254; end: 1091612bb; +[SCCTPCTFeedNode descriptor] */

void FUN_109161254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730b40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be9dc0,
                        &PTR____CFConstantStringClassReference_110f27e78,&PTR_DAT_1132c2998,
                        &PTR_DAT_1132c2b50,8,0x38,0x1c);
    puRam0000000113730b40 = puVar1;
  }
  return;
}



/* Entry: 1091612bc; end: 109161357; +[SCCTPCTFeedNode_CTFeedSource descriptor] */

undefined * FUN_1091612bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730b48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be9ed8,
                        &PTR____CFConstantStringClassReference_110f27e98,&PTR_DAT_1132c2998,
                        &PTR_DAT_1132c2ab0,5,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112be9dc0);
    puRam0000000113730b48 = puVar1;
  }
  return puRam0000000113730b48;
}



/* Entry: 109161358; end: 1091613db; +[SCCTPCTFeedNode_CTFeedSource_DeltaForce descriptor] */

undefined * FUN_109161358(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730b50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be9f00,
                        &PTR____CFConstantStringClassReference_110f27eb8,&PTR_DAT_1132c2998,
                        &PTR_DAT_1132c29b0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam0000000113730b50 = puVar1;
  }
  return puRam0000000113730b50;
}



/* Entry: 1091613dc; end: 10916145f; +[SCCTPCTFeedNode_CTFeedSource_Compute descriptor] */

undefined * FUN_1091613dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730b58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be9f28,
                        &PTR____CFConstantStringClassReference_110f27ed8,&PTR_DAT_1132c2998,
                        &PTR_s_path_1132c2a50,3,0x20,0x1c);
    func_0x00010c228780();
    puRam0000000113730b58 = puVar1;
  }
  return puRam0000000113730b58;
}



/* Entry: 109161460; end: 1091614e3; +[SCCTPCTFeedNode_CTFeedSource_Client descriptor] */

undefined * FUN_109161460(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730b60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be9f50,
                        &PTR____CFConstantStringClassReference_110e3bc58,&PTR_DAT_1132c2998,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam0000000113730b60 = puVar1;
  }
  return puRam0000000113730b60;
}



/* Entry: 1091614e4; end: 109161567; +[SCCTPCTFeedNode_CTFeedSource_NoSource descriptor] */

undefined * FUN_1091614e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730b68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be9f78,
                        &PTR____CFConstantStringClassReference_110f27ef8,&PTR_DAT_1132c2998,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam0000000113730b68 = puVar1;
  }
  return puRam0000000113730b68;
}



/* Entry: 109161568; end: 1091615eb; +[SCCTPCTFeedNode_CTFeedSource_Stream descriptor] */

undefined * FUN_109161568(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730b70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112be9fa0,
                        &PTR____CFConstantStringClassReference_110f27f18,&PTR_DAT_1132c2998,
                        &PTR_DAT_1132c29d0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam0000000113730b70 = puVar1;
  }
  return puRam0000000113730b70;
}



/* Entry: 1091615ec; end: 10916162f;  */

void FUN_1091615ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  FUN_109161630();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109161630; end: 10916182b;  */

void FUN_109161630(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uStack_54;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0x24) {
    lVar1 = param_1;
    func_0x00010c08fa60(param_1);
    lVar2 = param_1;
    func_0x00010c260c20(param_1,param_2,lVar1 + -4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c25cfc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c25cf80(lVar1,param_2,0xc,2,&PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010c25cf80(lVar2,param_2,0xe,2,&PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110f27f78);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_retain(puVar4);
    puVar7 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    puVar8 = puVar4;
    func_0x00010c08fa60();
    if (puVar8 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        uStack_54 = 0;
        puVar5 = puVar4;
        func_0x00010c260c80(puVar4,param_2,puVar8,2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSScanner_1126b3380;
        func_0x00010c14f820(PTR__OBJC_CLASS___NSScanner_1126b3380,param_2,puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14ec80();
        func_0x00010bf06a40(puVar7,param_2,&uStack_54,1);
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar8 = puVar8 + 2;
        puVar5 = puVar4;
        func_0x00010c08fa60();
      } while (puVar8 < puVar5);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar4);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10916182c; end: 10916196f;  */

void FUN_10916182c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf51e00();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0xd) {
    puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    _objc_opt_new();
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    _objc_retain();
    func_0x00010bf97b40(lVar1);
    func_0x00010bf070e0(puVar3);
    _objc_retain(puVar3);
    _objc_release(&PTR__OBJC_CLASS___NSConstantArray_111183890);
    _objc_release(puVar3);
    _objc_release(&PTR__OBJC_CLASS___NSConstantArray_1111838a8);
    _objc_release(puVar3);
    __Block_object_dispose(&uStack_50,8);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109161970; end: 109161acf;  */

void FUN_109161970(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
    PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar1;
    if (*(long *)(lVar2 + 0x18) == 0) {
      *(undefined8 *)(lVar2 + 0x18) = 1;
    }
    else {
      iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
      func_0x00010c0df840(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(puVar1);
      if (iVar3 != 0) {
        func_0x00010bf070e0(*(undefined8 *)(param_1 + 0x28));
      }
      iVar3 = (int)*(undefined8 *)(param_1 + 0x30);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      _objc_release(puVar1);
      if (iVar3 != 0) {
        func_0x00010bf070e0(*(undefined8 *)(param_1 + 0x28));
      }
      func_0x00010bf06ba0(*(undefined8 *)(param_1 + 0x28));
      lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
      *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + 1;
    }
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  }
  PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar1;
  return;
}



/* Entry: 109161ad0; end: 109161b17;  */

bool FUN_109161ad0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110db3eb8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return 1 < uVar1;
}



/* Entry: 109161b18; end: 109161f2f;  */

void FUN_109161b18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  FUN_109161ad0();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf44740(param_1,param_2,&PTR____CFConstantStringClassReference_110db3eb8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 109161f30; end: 109162157;  */

void FUN_109161f30(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010c2540c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010c27dd80();
  puVar3 = PTR_PTR_1126b5938;
  if (puVar2 == (undefined *)0x3) {
    puVar2 = param_1;
    func_0x00010c2540c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbab60(puVar3,param_2,puVar2,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c26afc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar1 = puVar4;
  }
  else {
    puVar3 = param_1;
    func_0x00010c27dd80();
    if (puVar3 == (undefined *)0x5) {
      puVar3 = puVar1;
      FUN_109161630(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bf15d80();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c25cfc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126be9e8;
      _objc_alloc(PTR_PTR_1126be9e8);
      goto LAB_109162088;
    }
  }
  puVar3 = PTR_PTR_1126be9e8;
  _objc_alloc(PTR_PTR_1126be9e8);
  puVar4 = param_1;
  func_0x00010c271a80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96f00();
LAB_109162088:
  func_0x00010c01b3c0();
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109162158; end: 10916217f; +[SCEmojiSkinTone unicodeFromEmojiSkinToneType:] */

undefined ** FUN_109162158(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 5) {
    return (undefined **)(&PTR_PTR_110ade8e8)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 109162180; end: 10916220f; +[SCEmojiSkinTone _emojiSkinToneTypeFromSojuEmojiSkinToneType:] */

undefined8 FUN_109162180(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < -0x44d60200) {
    if (param_3 == -0x78ae7c8b) {
      return 3;
    }
    if (param_3 == -0x55760854) {
      return 2;
    }
  }
  else {
    if (param_3 == -0x44d60200) {
      return 4;
    }
    if (param_3 == 0x1fe776) {
      return 5;
    }
    if (param_3 == 0x4513cf6) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 109162210; end: 1091622e7; +[SCEmojiSkinTone _sojuEmojiSkinToneTypeFromUnicode:] */

ulong FUN_109162210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110e399d8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e399d8,param_2,param_3);
  if (ppuVar2 == (undefined **)0x0) {
    uVar3 = 0x4513cf6;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e399f8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e399f8,param_2,param_3);
    if (ppuVar2 == (undefined **)0x0) {
      uVar3 = 0xffffffffaa89f7ac;
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e39a18;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e39a18,param_2,param_3);
      if (ppuVar2 == (undefined **)0x0) {
        uVar3 = 0xffffffff87518375;
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e39a38;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e39a38,param_2,param_3);
        if (ppuVar2 == (undefined **)0x0) {
          uVar3 = 0xffffffffbb29fe00;
        }
        else {
          ppuVar2 = &PTR____CFConstantStringClassReference_110e39a58;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e39a58,param_2,param_3);
          uVar1 = 0x1fe776;
          if (ppuVar2 != (undefined **)0x0) {
            uVar1 = 0x133fa9f6;
          }
          uVar3 = (ulong)uVar1;
        }
      }
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1091622e8; end: 109162317; +[SCEmojiSkinTone emojiSkinToneTypeFromUnicode:] */

void FUN_1091622e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dd898;
  puVar2 = PTR_PTR_1126dd898;
  func_0x00010bebdd80(PTR_PTR_1126dd898);
                    /* WARNING: Could not recover jumptable at 0x00010be08770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s__emojiSkinToneTypeFromSojuEmojiS_11255fb78,puVar2);
  return;
}



/* Entry: 109162318; end: 109162347; +[SCEmojiSkinTone emojiSkinToneTypeFromSojuString:] */

void FUN_109162318(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126dd898;
  func_0x00010b7726dc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010be08770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s__emojiSkinToneTypeFromSojuEmojiS_11255fb78,param_3);
  return;
}



/* Entry: 109162348; end: 10916239f; +[SCEmojiSkinTone sojuStringFromEmojiSkinToneType:] */

void FUN_109162348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dd898;
  func_0x00010c27fce0(PTR_PTR_1126dd898);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dd898;
  func_0x00010bebdd80(PTR_PTR_1126dd898,param_2,puVar1);
  func_0x00010b7727b0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1091623a0; end: 1091623f3; +[SCEmojiSkinToneHelpers zeroWidthJoinerCharacterSet] */

void FUN_1091623a0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730b80 != -1) {
    func_0x000107c27d9c(0x113730b80,&PTR___NSConcreteGlobalBlock_110ade910);
  }
  uVar1 = uRam0000000113730b78;
  _objc_retain(uRam0000000113730b78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1091623f4; end: 10916242f;  */

void FUN_1091623f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf35a20(PTR__OBJC_CLASS___NSCharacterSet_1126af030,param_2,
                      &PTR____CFConstantStringClassReference_110e399b8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113730b78;
  puRam0000000113730b78 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 109162430; end: 109162483; +[SCEmojiSkinToneHelpers emojiSkinTones] */

void FUN_109162430(void)

{
  undefined8 uVar1;
  
  if (lRam0000000113730b90 != -1) {
    func_0x000107c27d9c(0x113730b90,&PTR___NSConcreteGlobalBlock_110ade930);
  }
  uVar1 = uRam0000000113730b88;
  _objc_retain(uRam0000000113730b88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 109162484; end: 10916249b;  */

void FUN_109162484(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam0000000113730b88;
  ppuRam0000000113730b88 = &PTR__OBJC_CLASS___NSConstantArray_1111838c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10916249c; end: 109162643; +[SCEmojiSkinToneHelpers unicodeCanHaveSkinTone:] */

byte FUN_10916249c(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    bVar4 = 0;
  }
  else {
    func_0x00010bed1180();
    bVar4 = 1;
    if ((param_1 & 1) == 0) {
      puVar2 = PTR_PTR_1126b61c0;
      func_0x00010bf8e840();
      _objc_retainAutoreleasedReturnValue();
      puStack_48 = &uStack_50;
      uStack_50 = 0;
      uStack_40 = 0x2020000000;
      uStack_38 = 0;
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x2020000000;
      uStack_58 = 1;
      puVar3 = PTR_PTR_1126b0d00;
      func_0x00010c2befc0(PTR_PTR_1126b0d00);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bf44700(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_retain(puVar2);
      func_0x00010bf97e80(lVar1);
      if (*(char *)(puStack_48 + 3) == '\x01') {
        bVar4 = *(byte *)(puStack_68 + 3);
      }
      else {
        bVar4 = 0;
      }
      _objc_release(puVar2);
      _objc_release(lVar1);
      __Block_object_dispose(&uStack_70,8);
      __Block_object_dispose(&uStack_50,8);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_3);
  return bVar4 & 1;
}



/* Entry: 109162644; end: 1091626a7;  */

void FUN_109162644(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  if ((int)uVar1 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    if (*(char *)(lVar2 + 0x18) == '\x01') {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
      *param_4 = 1;
    }
    else {
      *(undefined1 *)(lVar2 + 0x18) = 1;
    }
  }
  return;
}



/* Entry: 1091626a8; end: 1091627d3; +[SCEmojiSkinToneHelpers skinTone:] */

long FUN_1091626a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar5 = param_1;
  func_0x00010bf8e8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf529e0();
  _objc_release(uVar5);
  lVar6 = 0;
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      uVar1 = param_1;
      func_0x00010bf8e8c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c067ec0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar3 != 0) {
        lVar6 = (long)(int)uVar3;
        puVar4 = PTR_PTR_1126dd898;
        func_0x00010c27fce0(PTR_PTR_1126dd898,param_2,lVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010bf4bb00(param_3,param_2,puVar4);
        _objc_release(puVar4);
        if ((uVar1 & 1) != 0) goto LAB_1091627b0;
      }
      uVar5 = uVar5 + 1;
      uVar1 = param_1;
      func_0x00010bf8e8c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      _objc_release(uVar1);
    } while (uVar5 < uVar2);
    lVar6 = 0;
  }
LAB_1091627b0:
  _objc_release(param_3);
  return lVar6;
}



/* Entry: 1091627d4; end: 109162833; +[SCEmojiSkinToneHelpers _unicodeStringHasSkinToneModifier:] */

bool FUN_1091627d4(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c08fa60();
  if (uVar2 < 2) {
    bVar1 = false;
  }
  else {
    func_0x00010c23dee0(param_1,param_2,param_3);
    bVar1 = param_1 != 0;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 109162834; end: 109162a97; +[SCEmojiSkinToneHelpers unicodeEmojiWithoutSkinTone:] */

void FUN_109162834(ulong param_1,undefined8 param_2,undefined *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  
  _objc_retain(param_3);
  uVar8 = param_1;
  func_0x00010bf8e8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010bf529e0();
  _objc_release(uVar8);
  if (uVar1 != 0) {
    uVar8 = 0;
    do {
      uVar1 = param_1;
      func_0x00010bf8e8c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c067ec0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar3 != 0) {
        puVar4 = PTR_PTR_1126dd898;
        func_0x00010c27fce0(PTR_PTR_1126dd898,param_2,(long)(int)uVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = param_3;
        func_0x00010c08fa60();
        puVar5 = puVar4;
        func_0x00010c08fa60();
        if (puVar5 <= puVar9) {
          puVar9 = param_3;
          func_0x00010c08fa60();
          puVar5 = puVar4;
          func_0x00010c08fa60();
          if (puVar9 + 1 != puVar5) {
            puVar9 = (undefined *)0x0;
            do {
              puVar5 = puVar4;
              func_0x00010c08fa60(puVar4);
              puVar6 = param_3;
              func_0x00010c260c80(param_3,param_2,puVar9,puVar5);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar6;
              func_0x00010c0720c0();
              if (((ulong)puVar5 & 1) != 0) {
                puVar5 = puVar4;
                func_0x00010c08fa60(puVar4);
                puVar7 = param_3;
                func_0x00010c260c00(param_3,param_2,puVar5 + (long)puVar9);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = param_3;
                func_0x00010c260c20(param_3,param_2,puVar9);
                _objc_retainAutoreleasedReturnValue();
                puVar9 = puVar5;
                func_0x00010c25ce40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar5);
                _objc_release(puVar7);
                _objc_release(puVar6);
                goto LAB_109162a6c;
              }
              _objc_release(puVar6);
              puVar9 = puVar9 + 1;
              puVar5 = param_3;
              func_0x00010c08fa60();
              puVar6 = puVar4;
              func_0x00010c08fa60();
            } while (puVar9 < puVar5 + (1 - (long)puVar6));
          }
        }
        _objc_release(puVar4);
      }
      uVar8 = uVar8 + 1;
      uVar1 = param_1;
      func_0x00010bf8e8c0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      _objc_release(uVar1);
    } while (uVar8 < uVar2);
  }
  func_0x00010c23dee0(param_1,param_2,param_3);
  puVar4 = PTR_PTR_1126dd898;
  func_0x00010c27fce0(PTR_PTR_1126dd898,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = param_3;
  func_0x00010c25cfc0(param_3,param_2,puVar4,&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
LAB_109162a6c:
  _objc_release(puVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 109162a98; end: 109162d3f; +[SCEmojiSkinToneHelpers getEmoji:withSkinTone:] */

undefined8 **** FUN_109162a98(undefined8 ****param_1,undefined8 param_2,undefined8 ****param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined8 ****unaff_x23;
  undefined8 ****unaff_x24;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined8 ***pppuStack_180;
  undefined *puStack_178;
  undefined8 ***pppuStack_170;
  undefined8 ***pppuStack_168;
  undefined8 ***pppuStack_160;
  undefined *puStack_158;
  undefined8 ***pppuStack_150;
  undefined8 ***pppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c27fcc0();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar1 = PTR_PTR_1126b61c0;
  func_0x00010bf8e840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar11 = *plStack_120;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(puVar1);
        }
        unaff_x24 = *(undefined8 *****)(lStack_128 + (long)puVar12 * 8);
        ppppuVar3 = param_1;
        func_0x00010c08fa60();
        ppppuVar4 = unaff_x24;
        func_0x00010c08fa60();
        if (ppppuVar4 <= ppppuVar3) {
          ppppuVar3 = param_1;
          func_0x00010c08fa60();
          ppppuVar4 = unaff_x24;
          func_0x00010c08fa60();
          if ((undefined8 ****)((long)ppppuVar3 + 1U) != ppppuVar4) {
            uVar10 = 0;
            do {
              func_0x00010c08fa60(unaff_x24);
              ppppuVar3 = param_1;
              func_0x00010c260c80();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar4 = ppppuVar3;
              func_0x00010c0720c0();
              if (((ulong)ppppuVar4 & 1) != 0) {
                func_0x00010c08fa60(unaff_x24);
                unaff_x24 = param_1;
                func_0x00010c260c20();
                _objc_retainAutoreleasedReturnValue();
                unaff_x23 = param_1;
                func_0x00010c260c00();
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR_PTR_1126dd898;
                func_0x00010c27fce0(PTR_PTR_1126dd898);
                _objc_retainAutoreleasedReturnValue();
                ppppuVar4 = unaff_x24;
                func_0x00010c25ce40();
                _objc_retainAutoreleasedReturnValue();
                ppppuVar5 = ppppuVar4;
                func_0x00010c25ce40();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(ppppuVar4);
                _objc_release(puVar2);
                _objc_release(unaff_x23);
                _objc_release(unaff_x24);
                _objc_release(ppppuVar3);
                _objc_release(puVar1);
                goto LAB_109162cf0;
              }
              _objc_release(ppppuVar3);
              uVar10 = uVar10 + 1;
              ppppuVar3 = param_1;
              func_0x00010c08fa60();
              ppppuVar4 = unaff_x24;
              func_0x00010c08fa60();
            } while (uVar10 < (ulong)((long)ppppuVar3 + (1 - (long)ppppuVar4)));
          }
        }
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar2);
      puVar2 = puVar1;
      func_0x00010bf52a60();
      unaff_x23 = (undefined8 ****)0x0;
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_retain(param_3);
  ppppuVar5 = param_3;
LAB_109162cf0:
  _objc_release(param_1);
  ppppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppppuVar5);
    return ppppuVar5;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_109162d40;
  puStack_178 = PTR_PTR_112700968;
  ppppuVar4 = &pppuStack_180;
  pppuStack_180 = ppppuVar3;
  pppuStack_170 = unaff_x24;
  pppuStack_168 = unaff_x23;
  pppuStack_160 = ppppuVar5;
  puStack_158 = puVar1;
  pppuStack_150 = param_1;
  pppuStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(ppppuVar4,PTR_s_init_1125d9248);
  if (ppppuVar4 != (undefined8 ****)0x0) {
    ppppuVar3 = ppppuVar4;
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d4e00);
    ppppuVar5 = ppppuVar3;
    func_0x00010beecc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar3);
    ppppuVar3 = ppppuVar5;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = ppppuVar3;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = ppppuVar4[1];
    ppppuVar4[1] = ppppuVar6;
    _objc_release(pppuVar8);
    _objc_release();
    func_0x000107c2bf18();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar6 = ppppuVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = ppppuVar4[2];
    ppppuVar4[2] = ppppuVar6;
    _objc_release(pppuVar8);
    _objc_release(ppppuVar3);
    pppuVar7 = ppppuVar4[2];
    func_0x00010bf69440(pppuVar7);
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = (undefined8 ***)PTR_PTR_1126dd898;
    func_0x00010bf8e8a0();
    ppppuVar4[3] = pppuVar8;
    _objc_initWeak(auStack_188,ppppuVar4);
    pppuVar8 = (undefined8 ***)PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_190,auStack_188);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = ppppuVar4[4];
    ppppuVar4[4] = pppuVar8;
    _objc_release(pppuVar9);
    _objc_destroyWeak(auStack_190);
    _objc_destroyWeak(auStack_188);
    _objc_release(pppuVar7);
    _objc_release(ppppuVar5);
  }
  return ppppuVar4;
}



/* Entry: 109162d40; end: 109162f17; -[SCEmojiSkinToneSettings init] */

undefined8 * FUN_109162d40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_112700968;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d4e00);
    puVar3 = puVar2;
    func_0x00010beecc20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bfe63a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c1067a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[1];
    puVar1[1] = puVar4;
    _objc_release(uVar6);
    _objc_release();
    func_0x000107c2bf18();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[2];
    puVar1[2] = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar2);
    uVar6 = puVar1[2];
    func_0x00010bf69440(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126dd898;
    func_0x00010bf8e8a0();
    puVar1[3] = puVar5;
    _objc_initWeak(auStack_58,puVar1);
    puVar5 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[4];
    puVar1[4] = puVar5;
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
  return puVar1;
}



/* Entry: 109162f18; end: 109162fbf;  */

void FUN_109162f18(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar1 = puVar2;
      func_0x00010c0d3c80(puVar2);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 109162fc0; end: 109163007; -[SCEmojiSkinToneSettings updateDefaultEmojiSkinTone:] */

void FUN_109162fc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  *(undefined8 *)(param_1 + 0x18) = param_3;
  puVar1 = PTR_PTR_1126dd898;
  func_0x00010c246760(PTR_PTR_1126dd898);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18af80(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109163008; end: 10916300f; -[SCEmojiSkinToneSettings selectedDefaultEmojiSkinTone] */

undefined8 FUN_109163008(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109163010; end: 1091630ab; -[SCEmojiSkinToneSettings emojiSkinToneForEmoji:] */

long FUN_109163010(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar2);
    if (lVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x18);
    }
    else {
      lVar2 = lVar1;
      func_0x00010c067fc0(lVar1);
    }
    _objc_release(lVar1);
  }
  return lVar2;
}



/* Entry: 1091630ac; end: 10916316b; -[SCEmojiSkinToneSettings setSkinTone:forEmoji:] */

void FUN_1091630ac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    if (param_3 == *(long *)(param_1 + 0x18)) {
      puVar1 = *(undefined **)(param_1 + 0x20);
      func_0x00010c269d40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(uVar2);
    }
    _objc_release(puVar1);
    func_0x00010be73120(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10916316c; end: 1091631ab; -[SCEmojiSkinToneSettings resetEmojiSkinTones] */

void FUN_10916316c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be73130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__persistEmojiToToneMap_11257a5e8);
  return;
}



/* Entry: 1091631ac; end: 10916320b; -[SCEmojiSkinToneSettings _persistEmojiToToneMap] */

void FUN_1091631ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10916320c; end: 109163247; -[SCEmojiSkinToneSettings .cxx_destruct] */

void FUN_10916320c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 109163248; end: 109163393; -[SCEmojiSticker initWithEmoji:] */

undefined1 * FUN_109163248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112700970;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar6);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    FUN_109163c84();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar6);
    puVar3 = PTR_PTR_1126ba858;
    _objc_alloc(PTR_PTR_1126ba858);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    FUN_109163c84(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c058c20(puVar3);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126baa60;
    _objc_alloc();
    func_0x00010c01fe20();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar4;
    _objc_release(uVar2);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010be45dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined1 **)((long)puVar1 + 0x20) = puVar5;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 109163394; end: 1091633ff; -[SCEmojiSticker initWithSOJUSticker:] */

undefined8 FUN_109163394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c2540c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_109164214();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c00f540(param_1,param_2,uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 109163400; end: 10916350b; -[SCEmojiSticker initWithCTPItem:] */

long FUN_109163400(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ba858;
  _objc_opt_class(PTR_PTR_1126ba858);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    func_0x00010bfe1140(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_109164214();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c00f540();
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = param_3;
    _objc_release(uVar5);
    lVar6 = param_1;
    func_0x00010be45dc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar6;
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10916350c; end: 1091635c7; -[SCEmojiSticker initWithItemInstance:] */

undefined8 FUN_10916350c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0840e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf96da0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8e2c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe1140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_109164214();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00f540(param_1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1091635c8; end: 1091635ef; -[SCEmojiSticker toCTPItem] */

void FUN_1091635c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


