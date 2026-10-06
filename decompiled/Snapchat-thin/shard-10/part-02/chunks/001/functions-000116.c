/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107bf5a50; end: 107bf5a9f;  */

uint FUN_107bf5a50(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c11f680(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 107bf5aa0; end: 107bf5b4b;  */

void FUN_107bf5aa0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d71b8;
  puVar3 = (undefined *)0x0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    lVar2 = param_2;
    func_0x00010c296d80(param_2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c2709c0(param_2);
    _objc_release(param_2);
    func_0x00010bf65620(param_1,puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0604a0(puVar1,param_3,lVar2,puVar3);
    _objc_release(puVar3);
    puVar3 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107bf5b4c; end: 107bf5bdb;  */

void FUN_107bf5b4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d71a0;
  puVar4 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_alloc(puVar1);
    lVar2 = param_1;
    func_0x00010c296d80(param_1);
    lVar3 = param_1;
    func_0x00010c2709c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c26f3c0(lVar3);
    func_0x00010c0604a0(puVar1,param_2,lVar2);
    _objc_release(lVar3);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107bf5bdc; end: 107bf5dcf;  */

void FUN_107bf5bdc(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d7178;
  puVar2 = (undefined *)0x0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    _objc_alloc(puVar1);
    func_0x00010c296d80(param_2);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    uVar3 = param_1;
    func_0x00010c2709c0(param_2);
    _objc_release(param_2);
    func_0x00010bf65620(uVar3,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0604a0(param_1,puVar1,param_3,puVar2);
    _objc_release(puVar2);
    puVar2 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107bf5dd0; end: 107bf5e5f;  */

void FUN_107bf5dd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d71b0;
  puVar4 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    _objc_alloc(puVar1);
    lVar2 = param_1;
    func_0x00010c296d80(param_1);
    lVar3 = param_1;
    func_0x00010c2709c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    func_0x00010c26f3c0(lVar3);
    func_0x00010c0604a0(puVar1,param_2,lVar2);
    _objc_release(lVar3);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107bf5e60; end: 107bf6d97;  */

void FUN_107bf5e60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126d71d0;
  puVar7 = (undefined *)0x0;
  if (param_1 != 0) {
    _objc_retain(param_1);
    func_0x00010bf820a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c259740(param_1);
    func_0x00010c2ba3e0(puVar1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c080120();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b17c0(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c074c20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b0ae0(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c132440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5d24();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b7020(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfea940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c22d2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b86e0(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfea940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b32a0(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfea940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c11ce60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6620(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29d120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c22d520();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b8700(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29d120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b5100();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3320(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfea940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b32c0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29d120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b5120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3340(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfea940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08b100();
    func_0x00010c2b2460(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08b320();
    func_0x00010c2b24e0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29d120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08b3a0();
    func_0x00010c2b2500(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2693c0();
    func_0x00010c2bad20(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29d120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0df660();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5d24();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b4b00(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29d120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c23f8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5d24();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9200(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2598c0();
    func_0x00010c2ba400(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29d120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96f80();
    func_0x00010c2ad3c0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29d120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf9b860();
    func_0x00010c2ad6c0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29d120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c23e820();
    func_0x00010c2b90c0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29d120();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c23e840();
    func_0x00010c2b90e0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfea940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4ba0();
    func_0x00010c2b3280(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfea940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c11ce40();
    func_0x00010c2b6600(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29d120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0de740();
    func_0x00010c2b4aa0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29d120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2770c0();
    func_0x00010c2bb9e0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfea940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c276740();
    func_0x00010c2bb8c0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29d120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c277080();
    func_0x00010c2bb9a0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bfea940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c276720();
    func_0x00010c2bb8a0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar3 = param_1;
    func_0x00010bfea940();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c2769a0();
    func_0x00010c2bb920(puVar1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0de6a0();
    func_0x00010c2b4a40(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c29d120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf66660();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abda0(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar4 = param_1;
    func_0x00010c29d120();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf666c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abe00(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar3 = param_1;
    func_0x00010bfea940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf66680();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abdc0(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar4 = param_1;
    func_0x00010bfea940();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf666a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abde0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c25b720();
    func_0x00010c2ba700(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf01720(param_1);
    func_0x00010c2a81e0(puVar1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29d120(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c2770a0();
    func_0x00010c2bb9c0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07dc00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b14c0(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e9da0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b4e40(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f1c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b5400(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0ddcc0();
    func_0x00010c2b49c0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126c6980;
    if (lVar3 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      _objc_retain(lVar3);
      _objc_alloc(puVar7);
      lVar4 = lVar3;
      func_0x00010bf52680(lVar3);
      lVar5 = lVar3;
      func_0x00010bfe5ec0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c298be0(lVar3);
      _objc_release(lVar3);
      func_0x00010c005fa0(puVar7,param_2,lVar4,lVar5,lVar6);
      _objc_release(lVar5);
    }
    func_0x00010c2aabc0(puVar1,param_2,puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c26ebe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb160(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfa4340();
    func_0x00010c2adcc0(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c06d760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b02c0(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07d7a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1460(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf421e0();
    func_0x00010c2aaa80(puVar1,param_2,lVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07bea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b12a0(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c075440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b0bc0(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010c259da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    lVar3 = lVar2;
    func_0x00010c075420(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b0ba0(puVar1,param_2,lVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar7 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107bf6d98; end: 107bf767b;  */

void FUN_107bf6d98(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 uStack_128;
  
  puVar1 = PTR_PTR_1126d71f0;
  _objc_retain();
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010c259740();
  lVar3 = param_1;
  func_0x00010bf01720(param_1);
  func_0x000107bf5a6c(lVar2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c259740();
  func_0x00010bf01720();
  puVar4 = PTR_PTR_1126d71d8;
  _objc_retain(param_1);
  _objc_alloc();
  func_0x00010c2598c0();
  lVar3 = param_1;
  func_0x00010c080120();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  FUN_107bf5b4c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c074c20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  FUN_107bf5b4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0de6a0();
  func_0x00010c08b320();
  func_0x00010c2693c0();
  func_0x00010c25b720();
  lVar8 = param_1;
  func_0x00010c07dc00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  FUN_107bf5b4c();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c0e9da0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  FUN_107bf5b4c();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010c0f1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ddcc0();
  lVar13 = param_1;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_128 = PTR_PTR_1126d71c0;
  if (lVar13 == 0) {
    uStack_128 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    _objc_alloc();
    func_0x00010bf52680(lVar13);
    lVar14 = lVar13;
    func_0x00010bfe5ec0(lVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c298be0(lVar13);
    _objc_release(lVar13);
    func_0x00010c005fa0();
    _objc_release(lVar14);
  }
  lVar14 = param_1;
  func_0x00010c132440();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  FUN_107bf5dd0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1;
  func_0x00010c26ebe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4340();
  lVar17 = param_1;
  func_0x00010c06d760();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  FUN_107bf5b4c();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c07d7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  FUN_107bf5b4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf421e0();
  lVar21 = param_1;
  func_0x00010c07bea0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  FUN_107bf5b4c();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010c075440();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar23;
  FUN_107bf5b4c();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1;
  func_0x00010c075420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar26 = lVar25;
  FUN_107bf5b4c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04d6c0();
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(uStack_128);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  puVar27 = PTR_PTR_1126d71e0;
  _objc_retain(param_1);
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010c22d2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x000107bf5c88();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c0b4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x000107bf5c88();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c11ce60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x000107bf5c88();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4bc0();
  func_0x00010c11ce40();
  func_0x00010c276740();
  func_0x00010c2769a0();
  lVar10 = param_1;
  func_0x00010c0b4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010bf66680();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x000107bf5c88();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf666a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x000107bf5c88();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08b100();
  func_0x00010c276720();
  _objc_release(param_1);
  func_0x00010c045dc0();
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  puVar28 = PTR_PTR_1126d71e8;
  _objc_retain(param_1);
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010c22d520();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x000107bf5c88();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c0b5100();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x000107bf5c88();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c0b5120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2770c0();
  func_0x00010c0de740();
  lVar9 = param_1;
  func_0x00010c0df660();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  FUN_107bf5dd0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1;
  func_0x00010c23f8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  FUN_107bf5dd0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010bf66660();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x000107bf5c88();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010bf666c0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x000107bf5c88();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96f80();
  func_0x00010bf9b860();
  func_0x00010c08b3a0();
  func_0x00010c23e820();
  func_0x00010c23e840();
  func_0x00010c2770a0();
  func_0x00010c277080();
  _objc_release(param_1);
  func_0x00010c045e40(puVar28);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(param_1);
  puVar29 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3c0();
  func_0x00010c01ba40(puVar1);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107bf767c; end: 107bf77e7; -[SCDiscoverFeedInteractionHistoryManager initWithLazyDocObjectContext:circumstanceEngine:storiesConfigProvider:] */

undefined1 *
FUN_107bf767c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126fa2e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126d71f8;
    _objc_alloc();
    func_0x00010c021e20();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bf77e8; end: 107bf77ef; -[SCDiscoverFeedInteractionHistoryManager getStoriesInteractionHistoryWithCompletionQueue:completion:] */

void FUN_107bf77e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcac90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_getStoriesInteractionHistoryWith_1125d04c8);
  return;
}



/* Entry: 107bf77f0; end: 107bf77f7; -[SCDiscoverFeedInteractionHistoryManager getStoriesInteractionHistoryForAllowanceType:completionQueue:completion:] */

void FUN_107bf77f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcac70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_getStoriesInteractionHistoryForA_1125d04c0);
  return;
}



/* Entry: 107bf77f8; end: 107bf78cf; -[SCDiscoverFeedInteractionHistoryManager updateImpressionViewItems:] */

void FUN_107bf77f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 107bf78d0; end: 107bf7903;  */

void FUN_107bf78d0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed9980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bf7904; end: 107bf7aef; -[SCDiscoverFeedInteractionHistoryManager _updateImpressionViewItems:] */

void FUN_107bf7904(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
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
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  puVar6 = &uStack_130;
  puVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,puVar6,auStack_f0,0x10);
  if (puVar1 != (undefined *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar7 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        lVar8 = *(long *)(lStack_128 + (long)puVar7 * 8);
        lVar2 = lVar8;
        func_0x00010c25a160();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0844e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar2);
        if (lVar3 != 0) {
          lVar2 = lVar8;
          func_0x00010c25a160(lVar8);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = *(undefined8 *)(param_1 + 8);
          func_0x00010c25a160();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar8;
          func_0x00010c11fd40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c259740();
          func_0x000108f5201c();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar9,param_2,lVar3,lVar5);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar8);
          _objc_release(lVar3);
          _objc_release(lVar2);
        }
        puVar7 = puVar7 + 1;
      } while (puVar1 != puVar7);
      puVar6 = &uStack_130;
      puVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,puVar6,auStack_f0,0x10);
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puVar1 = param_3;
  func_0x00010c11ce80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  func_0x00010c280520(puVar7,param_2,puVar6);
  _objc_release(puVar6);
  puVar1 = puVar7;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
  }
  else {
    puVar1 = puVar7;
    func_0x00010bf51e00(puVar7);
  }
  func_0x00010c1e6260(param_3,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 107bf7af0; end: 107bf7b97; -[SCDiscoverFeedInteractionHistoryManager updateQualifiedSectionsWithSections:] */

void FUN_107bf7af0(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar1 = param_1;
  func_0x00010c11ce80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  func_0x00010c280520(puVar2,param_2,param_3);
  _objc_release(param_3);
  puVar1 = puVar2;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
  }
  else {
    puVar1 = puVar2;
    func_0x00010bf51e00(puVar2);
  }
  func_0x00010c1e6260(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107bf7b98; end: 107bf7bd3; -[SCDiscoverFeedInteractionHistoryManager clearQualifiedSections] */

void FUN_107bf7b98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
  func_0x00010c1e6260(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bf7bd4; end: 107bf7cd3; -[SCDiscoverFeedInteractionHistoryManager updateHidden:feedType:] */

void FUN_107bf7bd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107bf7cd4; end: 107bf7d07;  */

void FUN_107bf7cd4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bf7d08; end: 107bf7d0f; -[SCDiscoverFeedInteractionHistoryManager _syncUpdateHidden:feedType:] */

void FUN_107bf7d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2864f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_updateHidden_feedType__11267f360);
  return;
}



/* Entry: 107bf7d10; end: 107bf7e1f; -[SCDiscoverFeedInteractionHistoryManager updateSubscription:subscribed:feedType:] */

void FUN_107bf7d10(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107bf7e20; end: 107bf7e57;  */

void FUN_107bf7e20(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bf7e58; end: 107bf7e5f; -[SCDiscoverFeedInteractionHistoryManager _syncUpdateSubscription:subscribed:feedType:] */

void FUN_107bf7e58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_updateSubscription_subscribed_fe_112680458);
  return;
}



/* Entry: 107bf7e60; end: 107bf7fc7; -[SCDiscoverFeedInteractionHistoryManager updateShortImpression:rankingStoryInfo:numSnapsInVersion:date:feedType:] */

void FUN_107bf7e60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uStack_60 = param_5;
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107bf7fc8; end: 107bf8003;  */

void FUN_107bf7fc8(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bf8004; end: 107bf800b; -[SCDiscoverFeedInteractionHistoryManager _syncUpdateShortImpression:rankingStoryInfo:numSnapsInVersion:date:feedType:] */

void FUN_107bf8004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c289e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_updateShortImpression_rankingSto_1126801b8);
  return;
}



/* Entry: 107bf800c; end: 107bf81ff; -[SCDiscoverFeedInteractionHistoryManager updateLongImpression:rankingStoryInfo:feedType:impressionTime:numberOfSnapsInVersion:totalDuration:date:thumbnailId:] */

void FUN_107bf800c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_initWeak(auStack_78,param_3);
  lVar1 = param_3;
  func_0x00010c11ce80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf51e00();
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  _objc_copyWeak(auStack_98,auStack_78);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_90 = param_1;
  uStack_88 = param_2;
  uStack_80 = param_8;
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(lVar2);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(lVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_98);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 107bf8200; end: 107bf824f;  */

void FUN_107bf8200(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec9e60(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bf8250; end: 107bf8257; -[SCDiscoverFeedInteractionHistoryManager _syncUpdateLongImpression:rankingStoryInfo:feedType:impressionTime:numberOfSnapsInVersion:totalDuration:date:thumbnailId:qualifiedSections:] */

void FUN_107bf8250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c287750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_updateLongImpression_rankingStor_11267f7f8);
  return;
}



/* Entry: 107bf8258; end: 107bf8497; -[SCDiscoverFeedInteractionHistoryManager updateStoryView:pageSessionId:pageSessionStartTs:sectionIdentifier:numberOfSnapsViewed:snapCompletionPercent:numberOfSnapsInVersion:viewTime:totalDuration:entranceIntent:exitIntent:totalWatchTimeMsecs:sliEntryEvent:sliExitIntent:date:sectionPos:maxViewedSnapIndex:viewedSnapIds:feedType:] */

void FUN_107bf8258(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_90 [16];
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_initWeak(auStack_90,param_4);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  _objc_copyWeak(auStack_d8,auStack_90);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uStack_d0 = param_1;
  _objc_retain(param_8);
  uStack_a4 = param_13;
  uStack_ac = param_12;
  uStack_9c = param_14;
  uStack_c8 = param_2;
  uStack_c0 = param_3;
  uStack_b8 = param_9;
  uStack_b4 = param_10;
  uStack_b0 = param_11;
  _objc_retain(param_16);
  _objc_retain(param_17);
  uStack_98 = param_18;
  _objc_retain(param_20);
  _objc_retain(param_21);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_90);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 107bf8498; end: 107bf850b;  */

void FUN_107bf8498(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec9ee0(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107bf850c; end: 107bf87f7; -[SCDiscoverFeedInteractionHistoryManager _syncUpdateStoryView:pageSessionId:pageSessionStartTs:sectionIdentifier:numberOfSnapsViewed:snapCompletionPercent:numberOfSnapsInVersion:viewTime:totalDuration:entranceIntent:exitIntent:totalWatchTimeMsecs:sliEntryEvent:sliExitIntent:date:sectionPos:maxViewedSnapIndex:viewedSnapIds:feedType:] */

void FUN_107bf850c(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined1 auStack_a0 [8];
  undefined1 uStack_98;
  undefined1 auStack_90 [16];
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000030);
  _objc_retain(in_stack_00000038);
  uVar1 = param_6;
  func_0x00010c11fd40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c90d0;
  _objc_alloc();
  func_0x00010c259740(uVar1);
  func_0x00010bfe69c0(uVar1);
  func_0x00010c04d540();
  dVar5 = 5.0;
  if (param_3 * 0.5 <= 5.0) {
    dVar5 = param_3 * 0.5;
  }
  uVar3 = param_7;
  func_0x00010bf51e00(param_7);
  uVar4 = uVar1;
  func_0x00010bf454e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (dVar5 <= param_2) {
    func_0x00010bec9e80(param_4);
  }
  else {
    func_0x00010bec9ec0();
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = in_stack_00000038;
  func_0x00010c067ec0();
  _objc_initWeak(auStack_90,param_4);
  uVar4 = uVar1;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298be0();
  func_0x00010c25a060(uVar1);
  func_0x00010c25b720();
  uStack_98 = (int)uVar3 == 0x102;
  _objc_copyWeak(auStack_a0,auStack_90);
  func_0x00010bec9f40(param_2,param_3,param_4);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(in_stack_00000038);
  _objc_release(in_stack_00000030);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 107bf87f8; end: 107bf884f;  */

void FUN_107bf87f8(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    _objc_retain(param_2);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee07c0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107bf8850; end: 107bf8897; -[SCDiscoverFeedInteractionHistoryManager _updateSpotlightDelegateViewStateUpdateWithInteractionHistory:] */

void FUN_107bf8850(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c24b4a0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bf8898; end: 107bf889f; -[SCDiscoverFeedInteractionHistoryManager _syncUpdateShortView:date:pageSessionId:compositeStoryId:feedType:] */

void FUN_107bf8898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c289e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_updateShortView_date_pageSession_1126801c0);
  return;
}



/* Entry: 107bf88a0; end: 107bf8997; -[SCDiscoverFeedInteractionHistoryManager _syncUpdateLongView:date:pageSessionId:compositeStoryId:feedType:] */

void FUN_107bf88a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c259740(param_3);
  func_0x000108f5201c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c287760(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4,param_5,param_6,uVar2,
                      param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107bf8998; end: 107bf899f; -[SCDiscoverFeedInteractionHistoryManager _syncUpdateViewInfo:version:numberOfSnapsViewed:snapCompletionPercent:numberOfSnapsInVersion:tapStoryKey:viewTime:totalDuration:totalWatchTimeMsecs:entranceIntent:exitIntent:sliEntryEvent:sliExitIntent:date:storyType:completion:] */

void FUN_107bf8998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28bed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_updateViewInfo_version_numberOfS_1126809d8);
  return;
}



/* Entry: 107bf89a0; end: 107bf8ac3; -[SCDiscoverFeedInteractionHistoryManager updateStoryViewState:isFullyViewed:version:totalSnapNum:compositeStoryId:] */

void FUN_107bf89a0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_78,auStack_58);
  _objc_retain(param_3);
  uStack_70 = param_5;
  uStack_68 = param_6;
  uStack_60 = param_4;
  _objc_retain(param_7);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_3);
  return;
}



/* Entry: 107bf8ac4; end: 107bf8aff;  */

void FUN_107bf8ac4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9f00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bf8b00; end: 107bf8b07; -[SCDiscoverFeedInteractionHistoryManager _syncUpdateStoryViewState:isFullyViewed:version:totalSnapNum:compositeStoryId:] */

void FUN_107bf8b00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_updateStoryViewState_isFullyView_1126803d8);
  return;
}



/* Entry: 107bf8b08; end: 107bf8c97; -[SCDiscoverFeedInteractionHistoryManager updateFeedActionWithIHMetadata:feedActionType:pageSessionId:compositeStoryId:extraData:feedType:] */

void FUN_107bf8b08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  uStack_60 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 107bf8c98; end: 107bf8cd7;  */

void FUN_107bf8c98(long param_1)

{
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bf8cd8; end: 107bf8cdf; -[SCDiscoverFeedInteractionHistoryManager _syncUpdateFeedActionWithIHMetadata:feedActionType:pageSessionId:compositeStoryId:extraData:feedType:] */

void FUN_107bf8cd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c285bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_updateFeedActionWithIHMetadata_f_11267f110);
  return;
}



/* Entry: 107bf8ce0; end: 107bf8dcf; -[SCDiscoverFeedInteractionHistoryManager updateVersion:version:numSnapsInVersion:] */

void FUN_107bf8ce0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_3);
  uStack_58 = param_4;
  uStack_50 = param_5;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 107bf8dd0; end: 107bf8e0b;  */

void FUN_107bf8dd0(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bf8e0c; end: 107bf8e13; -[SCDiscoverFeedInteractionHistoryManager _updateVersion:version:numSnapsInVersion:] */

void FUN_107bf8e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28be30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_updateVersion_version_numSnapsIn_1126809b0);
  return;
}



/* Entry: 107bf8e14; end: 107bf8ebb; -[SCDiscoverFeedInteractionHistoryManager purgeStoriesInteractionHistoryIfNecessary] */

void FUN_107bf8e14(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 107bf8ebc; end: 107bf8ee7;  */

void FUN_107bf8ebc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107bf8ee8; end: 107bf8eef; -[SCDiscoverFeedInteractionHistoryManager _purgeStoriesInteractionHistoryIfNecessary] */

void FUN_107bf8ee8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11be70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_purgeInteractionHistoryIfNecessa_1126249b8);
  return;
}



/* Entry: 107bf8ef0; end: 107bf8f07; -[SCDiscoverFeedInteractionHistoryManager spotlightInteractionDelegate] */

void FUN_107bf8ef0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107bf8f08; end: 107bf8f13; -[SCDiscoverFeedInteractionHistoryManager setSpotlightInteractionDelegate:] */

void FUN_107bf8f08(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x28,param_3);
  return;
}



/* Entry: 107bf8f14; end: 107bf8f1f; -[SCDiscoverFeedInteractionHistoryManager qualifiedSections] */

void FUN_107bf8f14(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 107bf8f20; end: 107bf8f27; -[SCDiscoverFeedInteractionHistoryManager setQualifiedSections:] */

void FUN_107bf8f20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 107bf8f28; end: 107bf8f83; -[SCDiscoverFeedInteractionHistoryManager .cxx_destruct] */

void FUN_107bf8f28(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bf8f84; end: 107bf906b; -[SCDiscoverFeedInteractionHistoryModifier initWithDiscoverFeedDataAccessor:readReceiptCoordinator:storiesConfigProvider:] */

undefined1 *
FUN_107bf8f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126fa2e8;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1088;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107bf906c; end: 107bf91d3; -[SCDiscoverFeedInteractionHistoryModifier _isFullyWatchedWithReadReceipts:story:] */

undefined1
FUN_107bf906c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar2 = param_4;
  func_0x00010c259560(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bf680(uVar2);
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_68 + 3);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 107bf91d4; end: 107bf9433;  */

void FUN_107bf91d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = param_2;
  func_0x00010c0bc7a0();
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107bf9434; end: 107bf9963; -[SCDiscoverFeedInteractionHistoryModifier modifyStories:interactionHistoryArray:includeHiddenStories:excludeViewedStories:] */

/* WARNING: Possible PIC construction at 0x000107bf95d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107bf95d8) */
/* WARNING: Removing unreachable block (ram,0x000107bf9608) */
/* WARNING: Removing unreachable block (ram,0x000107bf96ac) */
/* WARNING: Removing unreachable block (ram,0x000107bf96c4) */
/* WARNING: Removing unreachable block (ram,0x000107bf96d4) */
/* WARNING: Removing unreachable block (ram,0x000107bf96d8) */
/* WARNING: Removing unreachable block (ram,0x000107bf96e8) */
/* WARNING: Removing unreachable block (ram,0x000107bf96fc) */
/* WARNING: Removing unreachable block (ram,0x000107bf96f4) */
/* WARNING: Removing unreachable block (ram,0x000107bf9710) */
/* WARNING: Removing unreachable block (ram,0x000107bf9718) */
/* WARNING: Removing unreachable block (ram,0x000107bf9734) */
/* WARNING: Removing unreachable block (ram,0x000107bf9758) */
/* WARNING: Removing unreachable block (ram,0x000107bf974c) */
/* WARNING: Removing unreachable block (ram,0x000107bf9760) */
/* WARNING: Removing unreachable block (ram,0x000107bf971c) */
/* WARNING: Removing unreachable block (ram,0x000107bf98ac) */
/* WARNING: Removing unreachable block (ram,0x000107bf9630) */
/* WARNING: Removing unreachable block (ram,0x000107bf969c) */
/* WARNING: Removing unreachable block (ram,0x000107bf963c) */
/* WARNING: Removing unreachable block (ram,0x000107bf98b8) */
/* WARNING: Removing unreachable block (ram,0x000107bf98cc) */
/* WARNING: Removing unreachable block (ram,0x000107bf95ac) */

void FUN_107bf9434(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uStack_168;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bf0ae60();
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  ppuVar7 = &PTR___NSConcreteGlobalBlock_110a00378;
  uVar2 = param_4;
  func_0x00010050471c(param_4,&PTR___NSConcreteGlobalBlock_110a00378,
                      &PTR___NSConcreteGlobalBlock_110a003b8);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c2320;
  func_0x00010bf81880(PTR_PTR_1126c2320);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf1f320();
  _objc_release(puVar4);
  _objc_release(uVar3);
  if ((int)uVar5 == 0) {
    uStack_168 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_168 = uVar5;
    func_0x00010bf602c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bf52a60();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar6 == 0) {
    _objc_release(param_3);
    puVar4 = puVar1;
    func_0x00010bf51e00();
    _objc_release(uStack_168);
    _objc_release(uVar2);
    _objc_release(puVar1);
    _objc_release(param_4);
    _objc_release(param_3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
      return;
    }
    ___stack_chk_fail();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c259740(ppuVar7);
  }
  else {
    ppuVar7 = ppuRam0000000000000000;
    func_0x00010c259740(ppuRam0000000000000000);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_numberWithUnsignedLongLong__112615838,ppuVar7)
  ;
  return;
}



/* Entry: 107bf9964; end: 107bf99bb;  */

void FUN_107bf9964(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedLongLong__112615838,param_2)
  ;
  return;
}



/* Entry: 107bf99bc; end: 107bfa083; -[SCDiscoverFeedInteractionHistoryModifier _updatePublisherStoryViewState:] */

void FUN_107bf99bc(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puStack_218;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bf0ae60();
  }
  puVar15 = param_3;
  func_0x00010c25b720();
  puVar6 = param_3;
  if (puVar15 == (undefined *)0x2) {
    puVar15 = *(undefined **)(param_1 + 8);
    func_0x00010c259740(param_3);
    func_0x00010c25bb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259560();
    _objc_retainAutoreleasedReturnValue();
    if (puVar15 != (undefined *)0x0) {
      puVar2 = puVar6;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = puVar15;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar6;
      func_0x00010afef61c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if ((puVar2 == (undefined *)0x0) || (puVar3 == (undefined *)0x0)) {
        puVar6 = param_3;
        func_0x00010c259560(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
        func_0x00010c1607a0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar6 != (undefined *)0x0) {
          puVar17 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar5);
            }
            uVar16 = *(undefined8 *)((long)puVar17 * 8);
            uVar7 = uVar16;
            func_0x00010c29ea60();
            if ((int)uVar7 != 0) {
              func_0x00010c241220(uVar16);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(uVar16);
            }
            puVar17 = puVar17 + 1;
          } while (puVar6 != puVar17);
          puVar6 = puVar5;
          func_0x00010bf52a60();
        }
        _objc_release(puVar5);
        puVar6 = param_3;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar15;
        func_0x00010bf454e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar6);
        _objc_retain(puVar5);
        if (puVar6 == puVar5) {
          puVar17 = (undefined *)0x1;
        }
        else if (puVar5 == (undefined *)0x0) {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar17 = puVar6;
          func_0x00010c071ae0();
        }
        _objc_release(puVar5);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar6);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (((ulong)puVar17 & 1) == 0) {
          func_0x00010bf8c980(puVar2);
          func_0x00010c0df7c0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar6;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar6);
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12dc40(uVar7);
          _objc_release(puVar6);
          _objc_release(uVar7);
          _objc_release(puVar5);
        }
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        func_0x00010c245680();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar8;
        func_0x00010bf52a60();
        lVar1 = lRam0000000000000000;
        while (puVar6 != (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          do {
            if (lRam0000000000000000 != lVar1) {
              _objc_enumerationMutation(puVar8);
            }
            uVar7 = *(undefined8 *)((long)puVar14 * 8);
            if (((ulong)puVar17 & 1) == 0) {
              func_0x00010847d8d4(uVar7,0,0);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              uVar16 = uVar7;
              func_0x00010c241220(uVar7);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = puVar4;
              func_0x00010bf4b900();
              _objc_release(uVar16);
              if ((int)puVar9 == 0) {
                _objc_retain(uVar7);
              }
              else {
                uVar16 = uVar7;
                func_0x00010c26e920();
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar16;
                func_0x00010c239600();
                func_0x00010847d8d4(uVar7,1,uVar10);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar16);
              }
            }
            func_0x00010befa120(puVar5);
            _objc_release(uVar7);
            puVar14 = puVar14 + 1;
          } while (puVar6 != puVar14);
          puVar6 = puVar8;
          func_0x00010bf52a60();
        }
        _objc_release(puVar8);
        if ((int)puVar17 == 0) {
          puStack_218 = (undefined *)0x0;
        }
        else {
          puStack_218 = puVar2;
          func_0x00010c2a2900();
          _objc_retainAutoreleasedReturnValue();
        }
        puVar6 = PTR_PTR_1126c6d88;
        puVar17 = PTR_PTR_1126ced68;
        _objc_alloc();
        puVar8 = puVar2;
        func_0x00010c11af80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf8c980();
        func_0x00010c158300();
        puVar14 = puVar2;
        func_0x00010bfe0440();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar2;
        func_0x00010bfe5b40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c11b6a0();
        func_0x00010c076ae0();
        puVar11 = puVar2;
        func_0x00010c2387e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfd5fc0();
        func_0x00010c07dbe0();
        func_0x00010c2768e0();
        func_0x00010c0c2d60();
        func_0x00010c25b900();
        func_0x00010bfed580();
        puVar12 = puVar2;
        func_0x00010bf4d8e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ed800();
        func_0x00010c03c020();
        func_0x00010c11b640(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar17);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar9);
        _objc_release(puVar14);
        _objc_release(puVar8);
        _objc_release(puStack_218);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    _objc_release(puVar15);
  }
  else {
    func_0x00010c259560(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 107bfa084; end: 107bfa0cb; -[SCDiscoverFeedInteractionHistoryModifier .cxx_destruct] */

void FUN_107bfa084(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107bfa0cc; end: 107bfa2f3;  */

bool FUN_107bfa0cc(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain();
  func_0x00010bf64de0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c080120(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar2;
  func_0x00010c2709c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_1 <= 600.0;
}



/* Entry: 107bfa2f4; end: 107bfa3a3;  */

void FUN_107bfa2f4(long param_1)

{
  long lVar1;
  
  _objc_retain();
  if ((param_1 == 0) || (lVar1 = param_1, FUN_107bfa0cc(), (int)lVar1 == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c080120(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107bfa3a4; end: 107bfa5c7;  */

bool FUN_107bfa3a4(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    bVar1 = false;
  }
  else {
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c298be0();
    lVar3 = param_2;
    func_0x00010c08b320();
    if (lVar2 == lVar3) {
      lVar2 = param_2;
      func_0x00010c23f8c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c296d80();
      bVar1 = lVar3 == 100;
      _objc_release(lVar2);
    }
    else {
      bVar1 = false;
    }
    _objc_release(param_1);
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 107bfa5c8; end: 107bfa66b; -[SCDiscoverFeedStoryIHDocDataCoordinator initWithLazyDocObjectContext:circumstanceEngine:] */

undefined1 *
FUN_107bfa5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa2f0;
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



/* Entry: 107bfa66c; end: 107bfa82f; -[SCDiscoverFeedStoryIHDocDataCoordinator updateInteractionHistory:completion:] */

void FUN_107bfa66c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    lVar1 = param_3;
    FUN_107bf6d98();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000108f51c9c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010bf01720(lVar1);
    func_0x00010c0df7c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar3);
    func_0x00010bf87660(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(lVar1);
    _objc_retain(lVar2);
    func_0x00010c0f8500(param_1);
    _objc_release(param_1);
    _objc_release(param_4);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(param_3);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107bfa830; end: 107bfa887;  */

void FUN_107bfa830(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c259740(uVar1);
    FUN_107c02304(param_2,uVar1,*(undefined8 *)(param_1 + 0x28));
  }
  FUN_107c0227c(param_2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107bfa888; end: 107bfa89b;  */

void FUN_107bfa888(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107bfa894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107bfa89c; end: 107bfaa2b; -[SCDiscoverFeedStoryIHDocDataCoordinator getStoriesInteractionHistoryWithCompletionQueue:completion:] */

void FUN_107bfa89c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_107bfaa2c;
  uStack_60 = 0x107bfaa3c;
  puStack_58 = PTR____NSArray0__struct_11034ab48;
  uVar1 = 2000;
  func_0x000108f51b28(2000,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf87660(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(param_4);
  func_0x00010c0f8500(param_1);
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(puStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107bfaa2c; end: 107bfaa43;  */

void FUN_107bfaa2c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 107bfaa44; end: 107bfaad7;  */

void FUN_107bfaa44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_107c024c8(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bfaad8; end: 107bfaadf;  */

void FUN_107bfaad8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126d71d0;
  puVar5 = (undefined *)0x0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    func_0x00010bf820a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259740(param_2);
    func_0x00010c2ba3e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c080120();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b17c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c074c20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b0ae0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c132440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5d24();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b7020(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c22d2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b86e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b32a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c11ce60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6620(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c22d520();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b8700(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b5100();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3320(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b32c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b5120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3340(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b100();
    func_0x00010c2b2460(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b320();
    func_0x00010c2b24e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b3a0();
    func_0x00010c2b2500(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2693c0();
    func_0x00010c2bad20(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0df660();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5d24();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b4b00(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c23f8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5d24();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9200(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2598c0();
    func_0x00010c2ba400(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96f80();
    func_0x00010c2ad3c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b860();
    func_0x00010c2ad6c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23e820();
    func_0x00010c2b90c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23e840();
    func_0x00010c2b90e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ba0();
    func_0x00010c2b3280(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11ce40();
    func_0x00010c2b6600(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0de740();
    func_0x00010c2b4aa0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2770c0();
    func_0x00010c2bb9e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276740();
    func_0x00010c2bb8c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277080();
    func_0x00010c2bb9a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276720();
    func_0x00010c2bb8a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2769a0();
    func_0x00010c2bb920(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0de6a0();
    func_0x00010c2b4a40(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf66660();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abda0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar4 = param_2;
    func_0x00010c29d120();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf666c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abe00(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar3 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf66680();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abdc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar4 = param_2;
    func_0x00010bfea940();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf666a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abde0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b720();
    func_0x00010c2ba700(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bf01720(param_2);
    func_0x00010c2a81e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2770a0();
    func_0x00010c2bb9c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07dc00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b14c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e9da0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b4e40(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f1c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b5400(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ddcc0();
    func_0x00010c2b49c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c6980;
    if (lVar3 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      _objc_retain(lVar3);
      _objc_alloc(puVar5);
      func_0x00010bf52680(lVar3);
      lVar4 = lVar3;
      func_0x00010bfe5ec0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c298be0(lVar3);
      _objc_release(lVar3);
      func_0x00010c005fa0(puVar5);
      _objc_release(lVar4);
    }
    func_0x00010c2aabc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c26ebe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb160(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa4340();
    func_0x00010c2adcc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c06d760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b02c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07d7a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1460(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf421e0();
    func_0x00010c2aaa80(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07bea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b12a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c075440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b0bc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar3 = lVar2;
    func_0x00010c075420(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b0ba0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107bfaae0; end: 107bface7; -[SCDiscoverFeedStoryIHDocDataCoordinator getStoriesInteractionHistoryForAllowanceType:completionQueue:completion:] */

void FUN_107bfaae0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_107bfaa2c;
  uStack_80 = 0x107bfaa3c;
  puStack_78 = PTR____NSArray0__struct_11034ab48;
  lVar1 = 2000;
  func_0x000108f51b28(2000,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  if (lVar3 == 0) {
    (**(code **)(param_5 + 0x10))(param_5,PTR____NSArray0__struct_11034ab48);
  }
  else {
    func_0x00010bf87660(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar3);
    _objc_retain(param_5);
    func_0x00010c0f8500(param_1);
    _objc_release(param_1);
    _objc_release(param_5);
    _objc_release(lVar3);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(puStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 107bface8; end: 107bfad77;  */

void FUN_107bface8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  FUN_107c02968(param_2,puVar1,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107bfad78; end: 107bfadc3;  */

void FUN_107bfad78(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_110a00448);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107bfadc4; end: 107bfadcb;  */

void FUN_107bfadc4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126d71d0;
  puVar5 = (undefined *)0x0;
  if (param_2 != 0) {
    _objc_retain(param_2);
    func_0x00010bf820a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c259740(param_2);
    func_0x00010c2ba3e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c080120();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b17c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c074c20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b0ae0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c132440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5d24();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b7020(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c22d2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b86e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b32a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c11ce60();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b6620(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c22d520();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b8700(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b5100();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3320(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b4c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b32c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0b5120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3340(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b100();
    func_0x00010c2b2460(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b320();
    func_0x00010c2b24e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b3a0();
    func_0x00010c2b2500(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2693c0();
    func_0x00010c2bad20(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0df660();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5d24();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b4b00(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c23f8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5d24();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9200(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2598c0();
    func_0x00010c2ba400(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96f80();
    func_0x00010c2ad3c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b860();
    func_0x00010c2ad6c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23e820();
    func_0x00010c2b90c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23e840();
    func_0x00010c2b90e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ba0();
    func_0x00010c2b3280(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11ce40();
    func_0x00010c2b6600(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0de740();
    func_0x00010c2b4aa0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2770c0();
    func_0x00010c2bb9e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276740();
    func_0x00010c2bb8c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c277080();
    func_0x00010c2bb9a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c276720();
    func_0x00010c2bb8a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010bfea940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2769a0();
    func_0x00010c2bb920(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0de6a0();
    func_0x00010c2b4a40(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf66660();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abda0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar4 = param_2;
    func_0x00010c29d120();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf666c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abe00(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar3 = param_2;
    func_0x00010bfea940(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf66680();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abdc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar4 = param_2;
    func_0x00010bfea940();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    func_0x00010bf666a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000107bf5bdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2abde0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25b720();
    func_0x00010c2ba700(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010bf01720(param_2);
    func_0x00010c2a81e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c29d120(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2770a0();
    func_0x00010c2bb9c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07dc00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b14c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0e9da0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b4e40(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f1c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b5400(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ddcc0();
    func_0x00010c2b49c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf454e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c6980;
    if (lVar3 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      _objc_retain(lVar3);
      _objc_alloc(puVar5);
      func_0x00010bf52680(lVar3);
      lVar4 = lVar3;
      func_0x00010bfe5ec0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c298be0(lVar3);
      _objc_release(lVar3);
      func_0x00010c005fa0(puVar5);
      _objc_release(lVar4);
    }
    func_0x00010c2aabc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c26ebe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bb160(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa4340();
    func_0x00010c2adcc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c06d760();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b02c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07d7a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1460(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf421e0();
    func_0x00010c2aaa80(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c07bea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b12a0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c075440();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b0bc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_2;
    func_0x00010c259da0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar3 = lVar2;
    func_0x00010c075420(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    FUN_107bf5aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b0ba0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = puVar1;
    func_0x00010bf21f60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 107bfadcc; end: 107bfae4f; -[SCDiscoverFeedStoryIHDocDataCoordinator purgeInteractionHistoryIfNecessary] */

void FUN_107bfadcc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xc0f5180000000000;
  puVar2 = puVar1;
  func_0x00010bf64e40(0xc0f5180000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3c0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be849f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,param_1,PTR_s__purgeInteractionHistoryIfNecess_11257ec18,2000,0);
  return;
}



/* Entry: 107bfae50; end: 107bfaf83; -[SCDiscoverFeedStoryIHDocDataCoordinator _purgeInteractionHistoryIfNecessaryWithExpirationTimestamp:itemsLimit:completion:] */

void FUN_107bfae50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_2);
  func_0x00010bf87660(param_2);
  _objc_retainAutoreleasedReturnValue();
  uStack_58 = param_1;
  uStack_50 = param_4;
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_5);
  func_0x00010c0f8500(param_2);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  return;
}



/* Entry: 107bfaf84; end: 107bfb043;  */

void FUN_107bfaf84(double param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_107c02cf0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b0e0();
  dVar3 = *(double *)(param_2 + 0x28);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (param_1 < dVar3 || *(ulong *)(param_2 + 0x30) < uVar2) {
    param_2 = param_2 + 0x20;
    _objc_loadWeakRetained(param_2);
    func_0x00010be84a00();
    _objc_release(param_2);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bfb044; end: 107bfb057;  */

void FUN_107bfb044(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000107bfb050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 107bfb058; end: 107bfb0bb; -[SCDiscoverFeedStoryIHDocDataCoordinator _purgeInteractionHistoryWithDefaultAllowanceCount:transactionContext:] */

void FUN_107bfb058(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x000108f51b28(param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_107c02e70(param_4,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bfb0bc; end: 107bfb0c3; -[SCDiscoverFeedStoryIHDocDataCoordinator docObjectContext] */

void FUN_107bfb0bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 107bfb0c4; end: 107bfb12b; -[SCDiscoverFeedStoryIHDocDataCoordinator _interactionHistoryFromTransactionContext:storyDedupeFp:storyAllowanceType:uniqueAllowanceTypes:storyIHMustBeUniqueForAllowanceType:] */

void FUN_107bfb0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined8 uVar1;
  
  if ((param_7 & 1) == 0) {
    FUN_107c02224(param_3,param_4,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_107c01e10(param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = param_3;
  FUN_107bf5e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107bfb12c; end: 107bfb1a7; -[SCDiscoverFeedStoryIHDocDataCoordinator _builderWithInteractionHistory:storyDedupeFp:storyAllowanceType:] */

void FUN_107bfb12c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d71d0;
  if (param_3 == 0) {
    func_0x00010bf820a0(PTR_PTR_1126d71d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf820c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2ba3e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a81e0(puVar1,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107bfb1a8; end: 107bfb24f; -[SCDiscoverFeedStoryIHDocDataCoordinator _updateStoryInTransactionContext:interactionHistory:uniqueAllowanceTypes:storyIHMustBeUniqueForAllowanceType:] */

void FUN_107bfb1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  FUN_107bf6d98(param_4);
  _objc_retainAutoreleasedReturnValue();
  if ((param_6 & 1) == 0) {
    uVar2 = param_4;
    func_0x00010c259740(param_4);
    FUN_107c02304(param_3,uVar2,param_5);
  }
  FUN_107c0227c(param_3,uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107bfb250; end: 107bfb4df; -[SCDiscoverFeedStoryIHDocDataCoordinator updateHidden:feedType:] */

void FUN_107bfb250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain();
  func_0x000108f51c9c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf01720(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  uVar4 = param_1;
  func_0x00010bf87660(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x107bfb39c;
  puStack_70 = &UNK_1109fc400;
  uStack_48 = (undefined1)uVar2;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = uVar1;
  uStack_50 = param_4;
  _objc_retain(param_4);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar4,param_2,&puStack_88,0,0);
  _objc_release(uVar4);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107bfb4e0; end: 107bfb63b; -[SCDiscoverFeedStoryIHDocDataCoordinator updateSubscription:subscribed:feedType:] */

void FUN_107bfb4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  _objc_retain(param_3);
  uVar1 = param_5;
  _objc_retain();
  func_0x000108f51c9c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf01720(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  uVar4 = param_1;
  func_0x00010bf87660(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_107bfb63c;
  puStack_80 = &UNK_110a004c8;
  uStack_58 = (undefined1)uVar2;
  uStack_78 = param_1;
  uStack_70 = param_3;
  uStack_68 = uVar1;
  uStack_60 = param_5;
  uStack_57 = param_4;
  _objc_retain(param_5);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar4,param_2,&puStack_98,0,0);
  _objc_release(uVar4);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107bfb63c; end: 107bfb77f;  */

void FUN_107bfb63c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be3d260(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bdd6f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = (ulong)*(byte *)(param_1 + 0x41);
  func_0x000107bfa224(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b17c0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010c067ec0();
    func_0x00010c2adcc0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = uVar2;
  func_0x00010bf21f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee0f60(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107bfb780; end: 107bfb9b7; -[SCDiscoverFeedStoryIHDocDataCoordinator updateShortImpression:rankingStoryInfo:numSnapsInVersion:date:feedType:] */

void FUN_107bfb780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c25b720();
  uVar2 = param_4;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c298be0();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c26ebe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x000108f51c9c();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = param_3;
  func_0x00010bf01720(param_3);
  func_0x00010c0df780(puVar6,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf4b900(param_4,param_2,puVar6);
  _objc_release(puVar6);
  uVar7 = param_1;
  func_0x00010bf87660(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_107bfb9b8;
  puStack_b8 = &UNK_110a004f8;
  uStack_64 = (undefined1)uVar5;
  uStack_b0 = param_1;
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  uStack_98 = param_6;
  uStack_90 = uVar2;
  uStack_88 = uVar4;
  uStack_80 = param_7;
  uStack_78 = uVar1;
  uStack_70 = uVar3;
  uStack_68 = param_5;
  _objc_retain(param_7);
  _objc_retain(uVar4);
  _objc_retain(uVar2);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar7,param_2,&puStack_d0,0,0);
  _objc_release(uVar7);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(param_7);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107bfb9b8; end: 107bfbb7f;  */

void FUN_107bfb9b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be3d260();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bdd6f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba700();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08b320();
  if (lVar3 != *(long *)(param_1 + 0x60)) {
    func_0x000107bfa450(uVar2,*(long *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  }
  lVar3 = lVar1;
  func_0x00010c22d2a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  FUN_107bf38f8(0x3f800000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b86e0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  func_0x00010c2aabc0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb160(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfa4340();
  if (((int)lVar3 == 0) && (*(long *)(param_1 + 0x50) != 0)) {
    func_0x00010c067ec0();
    func_0x00010c2adcc0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = uVar2;
  func_0x00010bf21f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee0f60(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107bfbb80; end: 107bfbe07; -[SCDiscoverFeedStoryIHDocDataCoordinator updateLongImpression:rankingStoryInfo:feedType:impressionTime:numberOfSnapsInVersion:totalDuration:date:thumbnailId:qualifiedSections:] */

void FUN_107bfbb80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined4 uStack_80;
  undefined1 uStack_7c;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  uVar1 = param_6;
  _objc_retain();
  func_0x000108f51c9c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_5;
  func_0x00010bf01720(param_5);
  func_0x00010c0df780(puVar3,param_4,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900(uVar1,param_4,puVar3);
  _objc_release(puVar3);
  uVar4 = param_6;
  func_0x00010c25b720();
  uVar5 = param_6;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c298be0();
  _objc_release(uVar5);
  uVar5 = param_6;
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_6;
  func_0x00010c25a060();
  _objc_release(param_6);
  uVar8 = param_3;
  func_0x00010bf87660(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_107bfbe08;
  puStack_f0 = &UNK_110a00528;
  uStack_7c = (undefined1)uVar2;
  uStack_c8 = param_11;
  uStack_e8 = param_3;
  uStack_e0 = param_5;
  uStack_d8 = uVar1;
  uStack_d0 = param_7;
  uStack_c0 = param_9;
  uStack_b8 = param_10;
  uStack_b0 = uVar5;
  uStack_a8 = uVar4;
  uStack_a0 = uVar6;
  uStack_98 = param_1;
  uStack_90 = uVar7;
  uStack_88 = param_2;
  uStack_80 = param_8;
  _objc_retain(uVar5);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_7);
  _objc_retain(uVar1);
  _objc_retain(param_5);
  func_0x00010c0f8500(uVar8,param_4,&puStack_108,0,0);
  _objc_release(uVar8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uVar5);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(param_5);
  return;
}



/* Entry: 107bfbe08; end: 107bfc22f;  */

void FUN_107bfbe08(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be3d260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bdd6f60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba700();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08b320();
  if (lVar4 == *(long *)(param_1 + 0x68)) {
    func_0x00010c276740(lVar2);
    func_0x00010c2bb8c0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_107bfbf70;
    iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x00010bf4b900();
    if (iVar1 == 0) goto LAB_107bfbf70;
    func_0x00010c2769a0(lVar2);
  }
  else {
    func_0x000107bfa450(uVar3,*(long *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x88));
    func_0x00010c2bb8c0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (*(long *)(param_1 + 0x38) == 0) goto LAB_107bfbf70;
    iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x00010bf4b900();
    if (iVar1 == 0) goto LAB_107bfbf70;
  }
  func_0x00010c2bb920(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
LAB_107bfbf70:
  func_0x00010c276720(lVar2);
  func_0x00010c2bb8a0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf66680(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  FUN_107bf38f8((float)*(double *)(param_1 + 0x70));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2abdc0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c0b4bc0(lVar2);
  func_0x00010c2b3280(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bad20(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b4a40(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba400(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0b4c40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  FUN_107bf38f8(0x3f800000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b32a0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c2b32c0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x38) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x40);
    func_0x00010bf4b900();
    if (iVar1 != 0) {
      func_0x00010c11ce40(lVar2);
      func_0x00010c2b6600(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c11ce60(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      FUN_107bf38f8(0x3f800000);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b6620(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar2;
      func_0x00010bf666a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      FUN_107bf38f8((float)*(double *)(param_1 + 0x70));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2abde0(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar4);
    }
  }
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c2b2460(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c2aabc0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = uVar3;
  func_0x00010bf21f60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee0f60(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107bfc230; end: 107bfc39f; -[SCDiscoverFeedStoryIHDocDataCoordinator updateStoryViewState:isFullyViewed:version:totalSnapNum:compositeStoryId:] */

void FUN_107bfc230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  
  _objc_retain(param_3);
  uVar1 = param_7;
  _objc_retain();
  func_0x000108f51c9c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf01720(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  uVar4 = param_1;
  func_0x00010bf87660(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_107bfc3a0;
  puStack_a0 = &UNK_110a00558;
  uStack_68 = (undefined1)uVar2;
  uStack_98 = param_1;
  uStack_90 = param_3;
  uStack_88 = uVar1;
  uStack_80 = param_7;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_67 = param_4;
  _objc_retain(param_7);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar4,param_2,&puStack_b8,0,0);
  _objc_release(uVar4);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107bfc3a0; end: 107bfc563;  */

void FUN_107bfc3a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be3d260();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bdd6f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c08b3a0();
  if (lVar3 != *(long *)(param_1 + 0x40)) {
    uVar4 = 0;
    func_0x000107bfa288(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b4b00(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
    func_0x00010c2b24e0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(char *)(param_1 + 0x51) == '\x01') {
    uVar4 = 100;
    func_0x000107bfa288(100);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9200(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  func_0x00010c2b4a40(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b2500(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aabc0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = uVar2;
  func_0x00010bf21f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee0f60(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107bfc564; end: 107bfc737; -[SCDiscoverFeedStoryIHDocDataCoordinator updateFeedActionWithIHMetadata:feedActionType:pageSessionId:compositeStoryId:extraData:feedType:] */

void FUN_107bfc564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_8;
  _objc_retain();
  func_0x000108f51c9c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf01720(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  uVar4 = param_1;
  func_0x00010bf87660(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107bfc738;
  puStack_b0 = &UNK_110a00588;
  uStack_68 = (undefined1)uVar2;
  uStack_a8 = param_1;
  uStack_a0 = param_3;
  uStack_98 = uVar1;
  uStack_90 = param_7;
  uStack_88 = param_6;
  uStack_80 = param_5;
  uStack_78 = param_8;
  uStack_70 = param_4;
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar4,param_2,&puStack_c8,0,0);
  _objc_release(uVar4);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107bfc738; end: 107bfcbaf;  */

void FUN_107bfc738(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be3d260(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bdd6f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  switch(*(undefined8 *)(param_1 + 0x58)) {
  case 1:
    uVar7 = 1;
    func_0x000107bfa224(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b14c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    break;
  case 2:
    uVar7 = 1;
    func_0x000107bfa224(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b4e40(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    break;
  case 3:
    uVar7 = 1;
    func_0x000107bfa224(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b0ae0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    break;
  case 4:
    uVar7 = 1;
    goto code_r0x000107bfc91c;
  case 5:
    uVar7 = 0;
code_r0x000107bfc91c:
    func_0x000107bfa224(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b17c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    break;
  case 6:
    func_0x00010c2b49c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar7 = 1;
    goto code_r0x000107bfca7c;
  case 7:
    func_0x00010c2b49c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar7 = 0;
code_r0x000107bfca7c:
    func_0x000107bfa224(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b02c0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    break;
  case 8:
    uVar7 = *(ulong *)(param_1 + 0x38);
    puVar3 = PTR_PTR_1126c90c8;
    func_0x00010c132440(PTR_PTR_1126c90c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar3);
    uVar5 = uVar7;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    if (uVar5 == 0) {
code_r0x000107bfcafc:
      uVar7 = 0;
    }
    else {
      uVar5 = uVar7;
      func_0x00010c067ec0(uVar7);
      lVar6 = (long)(int)uVar5;
      func_0x000107bfa288(lVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b7020(uVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar6);
    }
    break;
  case 9:
    uVar7 = 1;
    func_0x000107bfa224(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b1460(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    break;
  case 10:
    uVar7 = *(ulong *)(param_1 + 0x38);
    puVar3 = PTR_PTR_1126c90c8;
    func_0x00010bf421e0(PTR_PTR_1126c90c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar3);
    uVar5 = uVar7;
    if ((uVar4 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar7);
    if (uVar5 == 0) goto code_r0x000107bfcafc;
    func_0x00010c282760(uVar7);
    func_0x00010c2aaa80(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    break;
  case 0xb:
    uVar7 = 1;
    goto code_r0x000107bfcaa8;
  case 0xc:
    uVar7 = 0;
code_r0x000107bfcaa8:
    func_0x000107bfa224(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b12a0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    break;
  case 0xd:
    uVar7 = 1;
    func_0x000107bfa224(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b0bc0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    break;
  case 0xe:
    uVar7 = 1;
    func_0x000107bfa224(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b0ba0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    break;
  default:
    goto LAB_107bfcb08;
  }
  _objc_release(uVar7);
LAB_107bfcb08:
  func_0x00010c2aabc0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5400(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010c067ec0();
    func_0x00010c2adcc0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = uVar2;
  func_0x00010bf21f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee0f60(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107bfcbb0; end: 107bfcd7f; -[SCDiscoverFeedStoryIHDocDataCoordinator updateShortView:date:pageSessionId:compositeStoryId:feedType:] */

void FUN_107bfcbb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_7;
  _objc_retain();
  func_0x000108f51c9c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf01720(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  uVar4 = param_1;
  func_0x00010bf87660(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_107bfcd80;
  puStack_a8 = &UNK_110a005b8;
  uStack_68 = (undefined1)uVar2;
  uStack_a0 = param_1;
  uStack_98 = param_3;
  uStack_90 = uVar1;
  uStack_88 = param_4;
  uStack_80 = param_6;
  uStack_78 = param_5;
  uStack_70 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar4,param_2,&puStack_c0,0,0);
  _objc_release(uVar4);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107bfcd80; end: 107bfcf0b;  */

void FUN_107bfcd80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be3d260(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bdd6f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c22d520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_107bf38f8(0x3f800000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b8700(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c2aabc0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5400(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x00010c067ec0();
    func_0x00010c2adcc0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = uVar2;
  func_0x00010bf21f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee0f60(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107bfcf0c; end: 107bfd0ff; -[SCDiscoverFeedStoryIHDocDataCoordinator updateLongView:date:pageSessionId:compositeStoryId:thumbnailId:feedType:] */

void FUN_107bfcf0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_8;
  _objc_retain();
  func_0x000108f51c9c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010bf01720(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  uVar4 = param_1;
  func_0x00010bf87660(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107bfd100;
  puStack_b0 = &UNK_110a005e8;
  uStack_68 = (undefined1)uVar2;
  uStack_a8 = param_1;
  uStack_a0 = param_3;
  uStack_98 = uVar1;
  uStack_90 = param_4;
  uStack_88 = param_7;
  uStack_80 = param_6;
  uStack_78 = param_5;
  uStack_70 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar4,param_2,&puStack_c8,0,0);
  _objc_release(uVar4);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107bfd100; end: 107bfd29f;  */

void FUN_107bfd100(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be3d260(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bdd6f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0b5100(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_107bf38f8(0x3f800000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3320(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c2b3340(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aabc0(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5400(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010c067ec0();
    func_0x00010c2adcc0(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = uVar2;
  func_0x00010bf21f60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee0f60(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107bfd2a0; end: 107bfd527; -[SCDiscoverFeedStoryIHDocDataCoordinator updateViewInfo:version:numberOfSnapsViewed:snapCompletionPercent:numberOfSnapsInVersion:tapStoryKey:viewTime:totalDuration:totalWatchTimeMsecs:entranceIntent:exitIntent:sliEntryEvent:sliExitIntent:date:storyType:completion:] */

void FUN_107bfd2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_3);
  _objc_retain(in_stack_00000018);
  uVar1 = in_stack_00000028;
  _objc_retain();
  func_0x000108f51c9c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf01720(param_3);
  func_0x00010c0df780(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  _objc_release(puVar2);
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3032000000;
  pcStack_a0 = FUN_107bfaa2c;
  uStack_98 = 0x107bfaa3c;
  uStack_90 = 0;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar1);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000028);
  func_0x00010c0f8500(param_1);
  _objc_release(param_1);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000018);
  _objc_release(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(uStack_90);
  _objc_release(uVar1);
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000018);
  _objc_release(param_3);
  return;
}



/* Entry: 107bfd528; end: 107bfd99b;  */

void FUN_107bfd528(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010be3d260();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf01720(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bdd6f60();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08b3a0();
  lVar8 = *(long *)(param_1 + 0x48);
  func_0x00010c2bad20(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ad3c0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ad6c0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ba700(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b90c0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b90e0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (0.0 < *(double *)(param_1 + 0x60)) {
    func_0x00010c2ba400(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (lVar4 == lVar8) {
    lVar4 = lVar2;
    func_0x00010c0df660(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar4;
    func_0x00010c296d80();
    lVar8 = lVar8 + 1;
    func_0x000107bfa288(lVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b4b00(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar4);
    lVar8 = lVar2;
    func_0x00010c23f8c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010c296d80();
    uVar1 = *(uint *)(param_1 + 0x80);
    _objc_release(lVar8);
    if (lVar4 <= (long)(ulong)uVar1) {
      uVar5 = (ulong)*(uint *)(param_1 + 0x80);
      func_0x000107bfa288(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b9200(uVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar5);
    }
    func_0x00010c0de740(lVar2);
    func_0x00010c2b4aa0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2770c0(lVar2);
    func_0x00010c2bb9e0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2770a0(lVar2);
  }
  else {
    func_0x000107bfa450(uVar3,*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x8c));
    func_0x00010c2b2500(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar6 = 1;
    func_0x000107bfa288(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b4b00(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar5 = (ulong)*(uint *)(param_1 + 0x80);
    func_0x000107bfa288(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9200(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar5);
    func_0x00010c2bb9e0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b4a40(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b4aa0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010c2bb9c0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c277080(lVar2);
  func_0x00010c2bb9a0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf666c0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar8;
  FUN_107bf38f8((float)*(double *)(param_1 + 0x68));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2abe00(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar8);
  lVar8 = lVar2;
  func_0x00010bf66660(lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x84));
  lVar4 = lVar8;
  FUN_107bf38f8(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2abda0(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar8);
  uVar6 = uVar3;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = uVar6;
  _objc_release(uVar7);
  func_0x00010bee0f60(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


