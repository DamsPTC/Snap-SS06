/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ca7704; end: 105ca79e7; -[SCMemoriesActionSheet _menuItemsForStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca7704(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112733630);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010be0a9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0742e0(uVar2,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010bf64080(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c0840e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c0c8280(lVar3,param_2,param_1,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010be0a9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c0f7a20();
  if ((int)lVar5 < 1) {
    bVar1 = false;
  }
  else {
    lVar7 = *(long *)(param_1 + _DAT_112733634);
    func_0x00010c269d40(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar7;
    func_0x00010c252d60();
    bVar1 = lVar5 != 4;
    _objc_release(lVar7);
  }
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010bf64080(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be0a9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar3;
  func_0x00010c0c82a0(lVar3,param_2,param_1,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010be0a9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010b5f6bec();
  _objc_release(lVar3);
  lVar3 = param_1;
  func_0x00010be0a9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x000106a1bde4();
  _objc_release(lVar3);
  iVar12 = 0;
  if ((int)lVar5 != 0) {
    lVar3 = param_1;
    func_0x00010be0a9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010b5fab34();
    iVar12 = (int)lVar5;
    _objc_release(lVar3);
  }
  puVar9 = PTR_PTR_1126c39a0;
  lVar3 = param_1;
  func_0x00010be0a9c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beeef60(puVar9,param_2,lVar3,uVar4,lVar6,bVar1,lVar7,lVar8,(char)lVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  if (iVar12 != 0) {
    lVar3 = param_1;
    func_0x00010be49fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar10,param_2,lVar3);
    _objc_release(lVar3);
  }
  func_0x00010bde96a0(param_1,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar10,param_2,param_1);
  _objc_release(param_1);
  puVar11 = puVar10;
  func_0x00010bf51e00(puVar10);
  _objc_release(puVar10);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105ca79e8; end: 105ca7ab3; -[SCMemoriesActionSheet _menuItemsForSubscreenStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca79e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  
  lVar1 = param_1;
  func_0x00010bf64080();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c8300();
  _objc_release(lVar1);
  if (*(long *)(param_1 + _DAT_112733624) == 2) {
    lVar1 = param_1;
    func_0x00010be0a9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010b5fab34();
    uVar5 = (uint)lVar3 & ((uint)lVar2 ^ 1);
    _objc_release(lVar1);
  }
  else {
    uVar5 = 0;
  }
  puVar4 = PTR_PTR_1126c39a0;
  func_0x00010beeefa0(PTR_PTR_1126c39a0,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde96a0(param_1,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105ca7ab4; end: 105ca8153; -[SCMemoriesActionSheet memoriesActionSheetCellDidTap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca7ab4(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  _objc_retain(param_3);
  if (*(ulong *)(param_1 + _DAT_112733620) < 4 && *(ulong *)(param_1 + _DAT_112733620) != 1) {
    puVar8 = param_1;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar8 = (undefined *)0x0;
  }
  uVar1 = param_3;
  func_0x00010c27dd80();
  puVar2 = PTR_PTR_1126af4d0;
  puVar3 = param_1;
  puVar7 = param_1;
  switch(uVar1) {
  case 0:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c81a0(puVar2,param_2,param_1,puVar3);
    break;
  case 1:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c8180(puVar2,param_2,param_1,puVar3,puVar8);
    break;
  case 2:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      func_0x00010c0c8160(puVar2,param_2,param_1,puVar3,*(undefined8 *)(param_1 + _DAT_11273362c));
    }
    else {
      func_0x00010c0c8140(puVar2,param_2,param_1,puVar3,puVar8);
    }
    break;
  case 3:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c8220(puVar2,param_2,param_1,puVar3,*(undefined8 *)(param_1 + _DAT_11273362c));
    break;
  case 4:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c8240(puVar2,param_2,param_1,puVar3,puVar8);
    break;
  case 5:
  case 6:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23f220(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c81c0(puVar2,param_2,param_1,puVar3,puVar7);
    goto code_r0x000105ca7c34;
  case 7:
  case 10:
  case 0xb:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23f220(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c8120(puVar2,param_2,param_1,puVar3,puVar7);
    goto code_r0x000105ca7c34;
  case 8:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c80e0(puVar2,param_2,param_1,puVar3);
    break;
  case 9:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c8200(puVar2,param_2,param_1,puVar3);
    break;
  case 0xc:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c8100(puVar2,param_2,param_1,puVar3,0);
    break;
  case 0xd:
  case 0xe:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23f220(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c81e0(puVar2,param_2,param_1,puVar3,puVar7);
    goto code_r0x000105ca7c34;
  case 0xf:
  case 0x10:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c80c0(puVar2,param_2,param_1,puVar3);
    break;
  case 0x11:
  case 0x12:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c8260(puVar2,param_2,param_1,puVar3);
    break;
  case 0x13:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c83e0();
    goto code_r0x000105ca8100;
  case 0x14:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c83a0();
    goto code_r0x000105ca8100;
  case 0x15:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0840e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c8320(puVar2,param_2,param_1,puVar3);
    break;
  case 0x16:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c8380();
    goto code_r0x000105ca8100;
  case 0x17:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c83c0();
    goto code_r0x000105ca8100;
  case 0x18:
    func_0x00010be0a9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_112733644;
    func_0x00010bfa7380(puVar2,param_2,puVar3,*(undefined8 *)(param_1 + lVar9));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010bf529e0();
    if (puVar3 == (undefined *)0x0) goto code_r0x000105ca8124;
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf5a5a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf529e0();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126af4d0;
    if (puVar5 == (undefined *)0x0) goto code_r0x000105ca8124;
    puVar4 = puVar2;
    func_0x00010bfb1920(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf5a5a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa72e0(puVar3,param_2,puVar6,*(undefined8 *)(param_1 + lVar9));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c8360();
code_r0x000105ca7c34:
    _objc_release(puVar7);
    break;
  case 0x19:
    puVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be0a9c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c8340(puVar2,param_2,puVar3);
    break;
  default:
    goto LAB_105ca8108;
  }
  _objc_release(puVar3);
code_r0x000105ca8100:
  _objc_release(puVar2);
LAB_105ca8108:
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c82e0();
  puVar2 = param_1;
code_r0x000105ca8124:
  _objc_release(puVar2);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ca8154; end: 105ca818b; -[SCMemoriesActionSheet actionSheetDidDismiss:] */

void FUN_105ca8154(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c82e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca818c; end: 105ca81ab; -[SCMemoriesActionSheet delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca818c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112733658);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ca81ac; end: 105ca81bf; -[SCMemoriesActionSheet setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca81ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112733658,param_3);
  return;
}



/* Entry: 105ca81c0; end: 105ca81df; -[SCMemoriesActionSheet dataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca81c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112733628);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ca81e0; end: 105ca81ef; -[SCMemoriesActionSheet item] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ca81e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112733618);
}



/* Entry: 105ca81f0; end: 105ca81ff; -[SCMemoriesActionSheet snap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ca81f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273361c);
}



/* Entry: 105ca8200; end: 105ca820f; -[SCMemoriesActionSheet actionSheet] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105ca8200(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112733650);
}



/* Entry: 105ca8210; end: 105ca8307; -[SCMemoriesActionSheet .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca8210(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112733650,0);
  _objc_storeStrong(param_1 + _DAT_11273361c,0);
  _objc_storeStrong(param_1 + _DAT_112733618,0);
  _objc_destroyWeak(param_1 + _DAT_112733628);
  _objc_destroyWeak(param_1 + _DAT_112733658);
  _objc_storeStrong(param_1 + _DAT_112733638,0);
  _objc_storeStrong(param_1 + _DAT_112733634,0);
  _objc_storeStrong(param_1 + _DAT_112733630,0);
  _objc_storeStrong(param_1 + _DAT_11273364c,0);
  _objc_storeStrong(param_1 + _DAT_112733644,0);
  _objc_storeStrong(param_1 + _DAT_11273363c,0);
  _objc_storeStrong(param_1 + _DAT_11273362c,0);
  _objc_storeStrong(param_1 + _DAT_112733654,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273365c,0);
  return;
}



/* Entry: 105ca8308; end: 105ca863f;  */

void FUN_105ca8308(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126c39a8;
  _objc_retain(param_1);
  _objc_alloc();
  lVar12 = param_1;
  func_0x00010c2711a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c052c60();
  _objc_release(lVar12);
  puVar8 = PTR_PTR_1126af4d8;
  lVar12 = param_1;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = lVar12;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x000107e90aa4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000107e90abc();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126af180;
  ppuVar3 = &PTR____CFConstantStringClassReference_110db2cf8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db2cf8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(puVar1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126af180;
  ppuVar5 = &PTR____CFConstantStringClassReference_110dcc5f8;
  uVar10 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dcc5f8,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(puVar1);
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff880(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_release(lVar2);
  _objc_release(lVar12);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236180();
  _objc_release(puVar4);
  _objc_release(puVar8);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar10);
  uVar9 = uVar10;
  func_0x00010c26bc20(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
  _objc_release(uVar9);
  puVar8 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83740();
  _objc_release(puVar8);
  lVar12 = *(long *)(param_2 + 0x20);
  uVar9 = uVar10;
  func_0x00010c27c8e0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  (**(code **)(lVar12 + 0x10))(lVar12,1,uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar9);
  return;
}



/* Entry: 105ca8640; end: 105ca86eb;  */

void FUN_105ca8640(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c26bc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83740();
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c27c8e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar3 + 0x10))(lVar3,1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105ca86ec; end: 105ca8773;  */

void FUN_105ca86ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c27c8e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ca8774; end: 105ca88b3; -[SCMemoriesActionSheetCard initWithEntryThumbnailGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105ca8774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ecb58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithStyle__1125f14a8,3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112733660;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8),0x404a000000000000,
                        0x404a000000000000);
    lVar4 = (long)_DAT_112733664;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar4));
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x403a000000000000);
    _objc_release(uVar2);
    func_0x00010c17d4c0(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c1b9fe0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ca88b4; end: 105ca899f; -[SCMemoriesActionSheetCard setEntry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca88b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112733668;
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  lVar4 = param_1;
  func_0x00010becc580(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216540(param_1,param_2,lVar4);
  _objc_release(lVar4);
  lVar4 = (long)_DAT_11273366c;
  func_0x00010c256060(*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733660);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x000106e3f2ac(9);
  func_0x00010bf23120(uVar1,param_2,uVar2,0,6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = uVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4),param_2,param_1);
  func_0x00010c24eda0(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ca89a0; end: 105ca8a23; -[SCMemoriesActionSheetCard _titleString:] */

void FUN_105ca89a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  lVar1 = param_3;
  if (lVar2 == 0) {
    func_0x00010b5f6c38(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105ca8a24; end: 105ca8a27; -[SCMemoriesActionSheetCard thumbnailGenerator:didUpdateSnapThumbnailWithImage:snap:duration:] */

void FUN_105ca8a24(void)

{
  return;
}



/* Entry: 105ca8a28; end: 105ca8a2f; -[SCMemoriesActionSheetCard thumbnailGenerator:didUpdateStoryThumbnailWithImage:snap:latestSnaps:duration:] */

void FUN_105ca8a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea80b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setStoryThumbnailImage__1125879d0,param_4);
  return;
}



/* Entry: 105ca8a30; end: 105ca8a37; -[SCMemoriesActionSheetCard thumbnailGenerator:didFailToUpdateStoryThumbnailForSnap:] */

void FUN_105ca8a30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea80b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setStoryThumbnailImage__1125879d0,0);
  return;
}



/* Entry: 105ca8a38; end: 105ca8b1b; -[SCMemoriesActionSheetCard _setStoryThumbnailImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca8a38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_112733664;
  lVar2 = *(long *)(param_1 + lVar4);
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (lVar2 == 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4),param_2,param_3);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105ca8b1c;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    uStack_38 = param_3;
    func_0x00010c27ac60(0x3fd3333333333333,puVar1,param_2,uVar3,0x500000,&puStack_60,0);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105ca8b1c; end: 105ca8b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca8b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112733664),
             PTR_s_setImage__1126481e8,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105ca8b30; end: 105ca8b33; -[SCMemoriesActionSheetCard thumbnailGenerator:didLoadMiniThumbnail:snap:duration:] */

void FUN_105ca8b30(void)

{
  return;
}



/* Entry: 105ca8b34; end: 105ca8b93; -[SCMemoriesActionSheetCard .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105ca8b34(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273366c,0);
  _objc_storeStrong(param_1 + _DAT_112733660,0);
  _objc_storeStrong(param_1 + _DAT_112733664,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112733668,0);
  return;
}



/* Entry: 105ca8b94; end: 105ca8bdb; +[SCMemoriesActionSheetItem itemWithType:enabled:isStory:] */

void FUN_105ca8b94(void)

{
  _objc_alloc(PTR_PTR_1126c3998);
  func_0x00010c055aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ca8bdc; end: 105ca8ecf; -[SCMemoriesActionSheetItem initWithType:enabled:isStory:] */

undefined1 *
FUN_105ca8bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             uint param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126ecb60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined1 *)0x0;
  }
  *(undefined8 *)((long)puVar1 + 0x30) = param_3;
  *(undefined1 *)((long)puVar1 + 0x28) = param_4;
  *(char *)((long)puVar1 + 0x29) = (char)param_5;
  *(undefined8 *)((long)puVar1 + 0x18) = 0x3fd999999999999a;
  puVar2 = (undefined1 *)puVar1;
  switch(param_3) {
  case 0:
    if (param_5 == 0) {
      func_0x000107e909cc();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107e909e4();
      _objc_retainAutoreleasedReturnValue();
    }
    break;
  case 1:
    if (param_5 == 0) {
      func_0x000107e90804();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107e909fc();
      _objc_retainAutoreleasedReturnValue();
    }
    break;
  case 2:
    if (param_5 == 0) {
      func_0x000107e90894();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107e9096c();
      _objc_retainAutoreleasedReturnValue();
    }
    break;
  case 3:
    if (param_5 == 0) {
      func_0x000107e90a14();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107e90a2c();
      _objc_retainAutoreleasedReturnValue();
    }
    break;
  case 4:
    if (param_5 == 0) {
      func_0x000107e908c4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107e90a44();
      _objc_retainAutoreleasedReturnValue();
    }
    break;
  case 5:
    func_0x000107e90a5c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 6:
    func_0x000107e90a74();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 7:
    if (param_5 == 0) {
      func_0x000107e9084c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107e90a8c();
      _objc_retainAutoreleasedReturnValue();
    }
    break;
  case 8:
    puVar5 = (undefined1 *)puVar1;
    func_0x000107e909b4();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c09e420();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    goto code_r0x000105ca8eb0;
  case 9:
    func_0x000107e907d4();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 10:
    func_0x000107e90834();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xb:
    func_0x000107e9081c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xc:
    func_0x000107e907ec();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xd:
    func_0x000107e90abc();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xe:
    func_0x000107e90aa4();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0xf:
    func_0x000107e90ad4();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x10:
    func_0x000108dfd614();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x11:
    func_0x000107e9087c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x12:
    func_0x000107e90864();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x13:
    func_0x000108dfd80c();
    _objc_retainAutoreleasedReturnValue();
    break;
  case 0x14:
    if ((param_5 & 1) == 0) {
      func_0x000108dfd9ec();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000108dfd9d4();
      _objc_retainAutoreleasedReturnValue();
    }
    break;
  case 0x15:
    puVar5 = *(undefined1 **)((long)puVar1 + 8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e27238;
    goto code_r0x000105ca8e34;
  case 0x16:
    puVar5 = *(undefined1 **)((long)puVar1 + 8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e27258;
    goto code_r0x000105ca8e34;
  case 0x17:
    puVar5 = *(undefined1 **)((long)puVar1 + 8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e27278;
    goto code_r0x000105ca8e34;
  case 0x18:
    puVar5 = *(undefined1 **)((long)puVar1 + 8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e27298;
    goto code_r0x000105ca8e34;
  case 0x19:
    puVar5 = *(undefined1 **)((long)puVar1 + 8);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e272b8;
code_r0x000105ca8e34:
    *(undefined ***)((long)puVar1 + 8) = ppuVar4;
    goto code_r0x000105ca8eb0;
  default:
    goto LAB_105ca8eb8;
  }
  puVar5 = *(undefined1 **)((long)puVar1 + 8);
  *(undefined1 **)((long)puVar1 + 8) = puVar2;
code_r0x000105ca8eb0:
  _objc_release(puVar5);
LAB_105ca8eb8:
  return (undefined1 *)puVar1;
}



/* Entry: 105ca8ed0; end: 105ca8fdf; -[SCMemoriesActionSheetItem actionSheetCell] */

void FUN_105ca8ed0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    puVar4 = PTR_PTR_1126b10a0;
    if (*(long *)(param_1 + 0x30) == 4) {
      func_0x00010c15cfa0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf6e3c0(PTR_PTR_1126b10a0,param_2,*(undefined8 *)(param_1 + 8),
                          *(undefined8 *)(param_1 + 0x10));
      _objc_retainAutoreleasedReturnValue();
    }
    puVar1 = puVar4;
    func_0x00010c269d60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar2);
    _objc_release(puVar4);
    uVar2 = 0x3ff0000000000000;
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
    }
    func_0x00010c1677c0(uVar2,*(undefined8 *)(param_1 + 0x20));
    uVar5 = *(ulong *)(param_1 + 0x30);
    puVar4 = *(undefined **)(param_1 + 8);
    _objc_retain(puVar4);
    if (uVar5 < 0x15) {
      puVar1 = (&PTR_PTR_1108e3e20)[uVar5];
    }
    else {
      _objc_retain(puVar4);
      puVar1 = puVar4;
    }
    _objc_release(puVar4);
    func_0x00010c160fc0(*(undefined8 *)(param_1 + 0x20),param_2,puVar1);
    _objc_release(puVar1);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105ca8fe0; end: 105ca90c3; -[SCMemoriesActionSheetItem _handleActionSheetCellTap:] */

void FUN_105ca8fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010beeee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf83000(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105ca90c4; end: 105ca910b;  */

void FUN_105ca90c4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c0c7c80();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ca910c; end: 105ca9113; -[SCMemoriesActionSheetItem type] */

undefined8 FUN_105ca910c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105ca9114; end: 105ca912b; -[SCMemoriesActionSheetItem delegate] */

void FUN_105ca9114(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ca912c; end: 105ca9137; -[SCMemoriesActionSheetItem setDelegate:] */

void FUN_105ca912c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 105ca9138; end: 105ca913f; -[SCMemoriesActionSheetItem enabled] */

undefined1 FUN_105ca9138(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 105ca9140; end: 105ca9147; -[SCMemoriesActionSheetItem isStory] */

undefined1 FUN_105ca9140(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 105ca9148; end: 105ca918b; -[SCMemoriesActionSheetItem .cxx_destruct] */

void FUN_105ca9148(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ca918c; end: 105ca94e7; +[SCMemoriesActionSheetItemsConverter actionSheetItemsForFeaturedStory:shouldTreatAsSingleSnap:canSaveToStories:circumstanceEngine:shouldShowSpinner:] */

void FUN_105ca918c(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4,uint param_5,
                  undefined8 param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar11;
  uint uVar12;
  undefined *puStack_70;
  long lStack_68;
  undefined **ppuVar10;
  
  ppuVar11 = &puStack_70;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_6);
  if (param_7 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x000107e75140();
    uVar6 = param_3;
    func_0x00010bf3d240();
    if ((int)uVar6 == 0) {
      uVar12 = 0;
    }
    else if ((uVar6 & 0x1f) == 0) {
      uVar12 = (uint)((uVar6 & 0xffe0) != 0);
    }
    else {
      uVar12 = 1;
    }
    uVar6 = param_3;
    func_0x00010bf977c0();
    uVar2 = (int)uVar6 - 0x13;
    puVar7 = PTR_PTR_1126c3998;
    func_0x00010c084f60(PTR_PTR_1126c3998,param_2,0,1,param_4 ^ 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar7);
    _objc_release(puVar7);
    if (uVar12 == 0) {
      puVar7 = PTR_PTR_1126c3998;
      func_0x00010c084f60(PTR_PTR_1126c3998,param_2,1,1,param_4 ^ 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar7);
      _objc_release(puVar7);
      if (0x13 < uVar2) {
        puVar7 = PTR_PTR_1126c3998;
        func_0x00010c084f60(PTR_PTR_1126c3998,param_2,2,1,param_4 ^ 1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4,param_2,puVar7);
        _objc_release(puVar7);
        if ((param_5 & (uint)uVar5) == 1) {
          puVar7 = PTR_PTR_1126c3998;
          func_0x00010c084f60(PTR_PTR_1126c3998,param_2,3,1,param_4 ^ 1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4,param_2,puVar7);
          _objc_release(puVar7);
        }
      }
    }
    puVar7 = PTR_PTR_1126c3998;
    func_0x00010c084f60(PTR_PTR_1126c3998,param_2,4,1,param_4 ^ 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar7);
    _objc_release();
    func_0x00010b6fb1b4();
    uVar1 = 0;
    if (0x13 < uVar2) {
      uVar1 = (uint)(puVar7 == (undefined *)0x2) & (uVar12 ^ 0xffffffff);
    }
    if ((uVar1 & (uint)uVar5) == 1) {
      puVar7 = PTR_PTR_1126c3998;
      func_0x00010c084f60(PTR_PTR_1126c3998,param_2,0x15,1,param_4 ^ 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar7);
      _objc_release(puVar7);
    }
    ppuVar11 = &PTR____CFConstantStringClassReference_110e27578;
    uVar8 = param_6;
    func_0x00010bf1f440();
    if ((int)uVar8 != 0) {
      puVar7 = PTR_PTR_1126c3998;
      func_0x00010c084f60(PTR_PTR_1126c3998,param_2,0x16,1,param_4 ^ 1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar4,param_2,puVar7);
      _objc_release(puVar7);
      ppuVar9 = (undefined **)PTR_PTR_1126c3998;
      func_0x00010c084f60(PTR_PTR_1126c3998,param_2,0x17,1,param_4 ^ 1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = ppuVar9;
      func_0x00010befa120(puVar4);
      _objc_release(ppuVar9);
    }
    puVar7 = puVar4;
    func_0x00010bf51e00();
  }
  else {
    puVar4 = PTR_PTR_1126c3998;
    func_0x00010c084f60(PTR_PTR_1126c3998,param_2,0x19,1,param_4 ^ 1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(ppuVar11);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar11;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (ppuVar9 == (undefined **)0x5) {
    ppuVar9 = ppuVar11;
    func_0x00010c080ca0();
    ppuVar10 = ppuVar11;
    func_0x00010b5fc5e4();
    iVar3 = (int)ppuVar10;
    if (((ulong)ppuVar9 & 1) == 0) goto LAB_105ca9564;
  }
  else {
    ppuVar9 = ppuVar11;
    func_0x00010b5fc5e4();
    iVar3 = (int)ppuVar9;
LAB_105ca9564:
    puVar7 = PTR_PTR_1126c3998;
    func_0x00010c084f60(PTR_PTR_1126c3998,param_2,7,1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar7);
    _objc_release(puVar7);
  }
  puVar7 = PTR_PTR_1126c3998;
  func_0x00010c084f60(PTR_PTR_1126c3998,param_2,0x10,1,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar4,param_2,puVar7);
  _objc_release(puVar7);
  if (iVar3 != 0) {
    puVar7 = PTR_PTR_1126c3998;
    func_0x00010c084f60(PTR_PTR_1126c3998,param_2,1,1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar7);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126c3998;
    func_0x00010c084f60(PTR_PTR_1126c3998,param_2,4,1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4,param_2,puVar7);
    _objc_release(puVar7);
  }
  puVar7 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(ppuVar11);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105ca94e8; end: 105ca966b; +[SCMemoriesActionSheetItemsConverter actionSheetItemsForStoryEditor:] */

void FUN_105ca94e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar5;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bfbdda0();
  func_0x00010b5fa33c();
  if (uVar3 == 5) {
    uVar3 = param_3;
    func_0x00010c080ca0();
    uVar4 = param_3;
    func_0x00010b5fc5e4();
    iVar1 = (int)uVar4;
    if ((uVar3 & 1) != 0) goto LAB_105ca9598;
  }
  else {
    uVar3 = param_3;
    func_0x00010b5fc5e4();
    iVar1 = (int)uVar3;
  }
  puVar5 = PTR_PTR_1126c3998;
  func_0x00010c084f60(PTR_PTR_1126c3998,param_2,7,1,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2,param_2,puVar5);
  _objc_release(puVar5);
LAB_105ca9598:
  puVar5 = PTR_PTR_1126c3998;
  func_0x00010c084f60(PTR_PTR_1126c3998,param_2,0x10,1,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  if (iVar1 != 0) {
    puVar5 = PTR_PTR_1126c3998;
    func_0x00010c084f60(PTR_PTR_1126c3998,param_2,1,1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c3998;
    func_0x00010c084f60(PTR_PTR_1126c3998,param_2,4,1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
  }
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105ca966c; end: 105ca972f; +[SCMemoriesActionSheetItemsConverter actionSheetItemsForSubscreenStory:] */

void FUN_105ca966c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c3998;
  func_0x00010c084f60(PTR_PTR_1126c3998,param_2,0x13,1,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126c3998;
    func_0x00010c084f60(PTR_PTR_1126c3998,param_2,0x14,1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,puVar2);
    _objc_release(puVar2);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ca9730; end: 105ca9a13; +[SCMemoriesActionSheetItemsConverter actionSheetItemsForStory:isFailedEntry:isEntryClientCompatible:shouldBackupNow:boomboxEnabled:shouldAddToStory:shouldEditStory:shouldRemoveStories:] */

void FUN_105ca9730(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,int param_5,
                  int param_6,int param_7,int param_8,undefined4 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (param_9._1_1_ != '\0') {
    puVar5 = PTR_PTR_1126c3998;
    func_0x00010c084f60(PTR_PTR_1126c3998,param_2,0x14,1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
  }
  if (((param_4 & 1) != 0) || (puVar5 = PTR_PTR_1126c3998, param_6 != 0)) {
    uVar1 = 8;
    if (param_4 != 0) {
      uVar1 = 9;
    }
    puVar5 = PTR_PTR_1126c3998;
    func_0x00010c084f60(PTR_PTR_1126c3998,param_2,uVar1,1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c3998;
  }
  if (param_7 != 0) {
    PTR_PTR_1126c3998 = puVar5;
    func_0x00010c084f60(puVar5,param_2,0xc,1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126c3998;
  }
  PTR_PTR_1126c3998 = puVar5;
  if (param_5 != 0) {
    if ((char)param_9 != '\0') {
      func_0x00010c084f60(puVar5,param_2,2,1,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2,param_2,puVar5);
      _objc_release(puVar5);
    }
    puVar5 = PTR_PTR_1126c3998;
    func_0x00010c084f60(PTR_PTR_1126c3998,param_2,1,1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
  }
  uVar1 = 0xd;
  if (lVar4 == 0) {
    uVar1 = 0xe;
  }
  puVar5 = PTR_PTR_1126c3998;
  func_0x00010c084f60(PTR_PTR_1126c3998,param_2,uVar1,1,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  if (param_8 != 0) {
    puVar5 = PTR_PTR_1126c3998;
    func_0x00010c084f60(PTR_PTR_1126c3998,param_2,0xf,1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126c3998;
  func_0x00010c084f60(PTR_PTR_1126c3998,param_2,7,1,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2,param_2,puVar5);
  _objc_release(puVar5);
  if (param_5 != 0) {
    puVar5 = PTR_PTR_1126c3998;
    func_0x00010c084f60(PTR_PTR_1126c3998,param_2,4,1,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,puVar5);
    _objc_release(puVar5);
  }
  puVar5 = puVar2;
  func_0x00010bf51e00(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105ca9a14; end: 105ca9d0f; -[SCMemoriesClientGenFeaturedStoriesPipelineCommand initWithClientGenManager:modelIdentifier:memoriesDataObjectContext:localEntry:clientProcessingBitMaskType:totalGenerationsCount:groupName:groupCount:clientExpectedTotalGenerationsCount:templateId:lensId:setId:itemId:notificationPool:circumstanceEngine:priority:videoCreateSessionId:] */

undefined8 *
FUN_105ca9a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126ecb68;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
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
    puVar1[6] = param_7;
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    puVar1[0xc] = param_10;
    puVar1[8] = param_8;
    puVar1[9] = param_11;
    _objc_retain(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    puVar1[0xf] = param_18;
    _objc_retain(param_12);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_19;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bdeb5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_19);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105ca9d10; end: 105ca9e9b; -[SCMemoriesClientGenFeaturedStoriesPipelineCommand _createBlizzardEventDataProvider] */

void FUN_105ca9d10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puStack_a8 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105ca9e9c;
  uStack_80 = 0x105ca9eac;
  uStack_78 = 0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105ca9eb4;
  puStack_b0 = &UNK_1108ba818;
  puStack_98 = puStack_a8;
  func_0x00010c0be0c0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_c8,
                      &PTR___NSConcreteGlobalBlock_1108e3ec8);
  puVar1 = PTR_PTR_1126c39b0;
  _objc_alloc(PTR_PTR_1126c39b0);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c26f320();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016e00(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ca9e9c; end: 105ca9eb3;  */

void FUN_105ca9e9c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105ca9eb4; end: 105ca9eeb;  */

void FUN_105ca9eb4(long param_1,undefined8 param_2)

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



/* Entry: 105ca9eec; end: 105ca9eef;  */

void FUN_105ca9eec(void)

{
  return;
}



/* Entry: 105ca9ef0; end: 105caa02f; -[SCMemoriesClientGenFeaturedStoriesPipelineCommand execute] */

void FUN_105ca9ef0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  _objc_retain(uVar5);
  uVar3 = uVar4;
  _objc_retain(uVar4);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105caa030;
  puStack_70 = &UNK_110841f20;
  uStack_68 = uVar4;
  func_0x000108ec0f10(uVar6,uVar3,&puStack_88);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined **)(param_1 + 0xa0) = puVar2;
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x00010bf54280(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105caa030; end: 105caa107;  */

void FUN_105caa030(long param_1,undefined8 param_2)

{
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((int)param_2 != 0) {
    puStack_80 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_105ca9e9c;
    uStack_30 = 0x105ca9eac;
    uStack_28 = 0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105caa108;
    puStack_60 = &UNK_1108ba818;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x105caa148;
    puStack_88 = &UNK_1108b9e98;
    puStack_58 = puStack_80;
    puStack_48 = puStack_80;
    func_0x00010c0be0c0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_78,&puStack_a0);
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  return;
}



/* Entry: 105caa108; end: 105caa187;  */

void FUN_105caa108(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105caa188; end: 105caa1b3;  */

void FUN_105caa188(long param_1,undefined8 param_2)

{
  func_0x00010bfbf2a0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 105caa1b4; end: 105caa1b7; -[SCMemoriesClientGenFeaturedStoriesPipelineCommand generationDidFinish:] */

void FUN_105caa1b4(void)

{
  return;
}



/* Entry: 105caa1b8; end: 105caa1df; -[SCMemoriesClientGenFeaturedStoriesPipelineCommand getGalleryCollectionSnapClientData] */

void FUN_105caa1b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105caa1e0; end: 105caa2a7; -[SCMemoriesClientGenFeaturedStoriesPipelineCommand getGeneratedSnapsCount] */

undefined8 FUN_105caa1e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_78 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105caa2a8;
  puStack_58 = &UNK_1108e3f08;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105caa374;
  puStack_80 = &UNK_1108b9e98;
  lStack_50 = param_1;
  puStack_48 = puStack_78;
  puStack_38 = puStack_78;
  func_0x00010c0be0c0(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_70,&puStack_98);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 105caa2a8; end: 105caa353;  */

void FUN_105caa2a8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126af4d0;
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    *(undefined **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = puVar4;
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105caa354; end: 105caa373;  */

bool FUN_105caa354(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf3d2a0(param_2);
  return (int)param_2 != 0;
}



/* Entry: 105caa374; end: 105caa383;  */

void FUN_105caa374(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 105caa384; end: 105caa38b; -[SCMemoriesClientGenFeaturedStoriesPipelineCommand getTotalGenerationsCount] */

undefined8 FUN_105caa384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 105caa38c; end: 105caa393; -[SCMemoriesClientGenFeaturedStoriesPipelineCommand getClientExpectedTotalGenerationsCount] */

undefined8 FUN_105caa38c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 105caa394; end: 105caa39b; -[SCMemoriesClientGenFeaturedStoriesPipelineCommand priority] */

undefined8 FUN_105caa394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105caa39c; end: 105caa3a3; -[SCMemoriesClientGenFeaturedStoriesPipelineCommand clientProcessingBitMaskType] */

undefined8 FUN_105caa39c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105caa3a4; end: 105caa403; -[SCMemoriesClientGenFeaturedStoriesPipelineCommand getClientGenLatency] */

long FUN_105caa3a4(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar1);
  return (long)(param_1 * 1000.0);
}



/* Entry: 105caa404; end: 105caa40b; -[SCMemoriesClientGenFeaturedStoriesPipelineCommand disposeUponCompletion] */

undefined8 FUN_105caa404(void)

{
  return 0;
}



/* Entry: 105caa40c; end: 105caa4d3; -[SCMemoriesClientGenFeaturedStoriesPipelineCommand .cxx_destruct] */

void FUN_105caa40c(long param_1)

{
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105caa4d4; end: 105caa4db; -[SCMemoriesMashupFeaturedStoryGenerationCoordinatorImpl addCommandAndExecuteIfNecessary:forSubType:] */

void FUN_105caa4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef7870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addCommandAndExecuteIfNecessary__11259b7c0,param_3,param_4,2);
  return;
}



/* Entry: 105caa4dc; end: 105caa727; -[SCMemoriesMashupFeaturedStoryGenerationCoordinatorImpl addCommandAndExecuteIfNecessary:forSubType:priority:] */

void FUN_105caa4dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x105caa580;
  puStack_68 = &UNK_110844fe0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105caa728; end: 105caa7d3; -[SCMemoriesMashupFeaturedStoryGenerationCoordinatorImpl shouldAddCommandForCurrentType:] */

undefined1 FUN_105caa728(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_50 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105caa7d4;
  puStack_60 = &UNK_11084a858;
  lStack_58 = param_1;
  uStack_48 = param_3;
  puStack_38 = puStack_50;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_78);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 105caa7d4; end: 105caa8f7;  */

void FUN_105caa7d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar3 == 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar4,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c35c8,puVar1);
    _objc_release(puVar1);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(lVar2 + 0x40);
  if (lVar3 != 0) {
    func_0x000108ec124c();
    *(long *)(*(long *)(param_1 + 0x20) + 0x38) = lVar3;
    lVar2 = *(long *)(param_1 + 0x20);
  }
  uVar5 = *(undefined8 *)(lVar2 + 0x30);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar5,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c067ec0();
  *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       (long)(int)uVar4 < *(long *)(*(long *)(param_1 + 0x20) + 0x38);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105caa8f8; end: 105caaaaf; -[SCMemoriesMashupFeaturedStoryGenerationCoordinatorImpl _executeFirstCommandIfNecessary] */

void FUN_105caa8f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfc6000(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7180(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar5 = uVar2;
    func_0x00010bf9aea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar5);
    uVar5 = uVar2;
    func_0x00010bf86e00();
    if ((int)uVar5 == 0) {
      func_0x00010bf1a3e0(uVar4);
    }
    else {
      _objc_retain(uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      _objc_release(uVar5);
    }
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 105caaab0; end: 105caab03;  */

void FUN_105caaab0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe160();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105caab04; end: 105caad7b; -[SCMemoriesMashupFeaturedStoryGenerationCoordinatorImpl _didFinish:generationResult:] */

void FUN_105caab04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_a8 = &uStack_b0;
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_105caad7c;
  uStack_90 = 0x105caad8c;
  uStack_88 = 0;
  func_0x00010c0c0800(param_4);
  func_0x00010bfc6020(param_3);
  uVar1 = param_3;
  func_0x00010bfc6000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf53c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfc6000(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcb520(param_3);
  func_0x00010bfc3a80(param_3);
  func_0x00010c0a7160(uVar2);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  func_0x00010bfc0960(param_3);
  func_0x00010c12d360(*(undefined8 *)(param_1 + 8));
  uVar1 = param_3;
  func_0x00010bf86e00();
  if ((int)uVar1 != 0) {
    func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x18));
  }
  func_0x00010be0bb60(param_1);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105caad7c; end: 105caada7;  */

void FUN_105caad7c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105caada8; end: 105caae17;  */

void FUN_105caada8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010bf3ec40();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105caae18; end: 105caae83; -[SCMemoriesMashupFeaturedStoryGenerationCoordinatorImpl .cxx_destruct] */

void FUN_105caae18(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 105caae84; end: 105caaf6f; -[SCMemoriesMashupFeaturedStoryGenerationCoordinatorImpl _initWithPerfromer:commandPool:] */

undefined1 *
FUN_105caae84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ecb70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = 10000;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105caaf70; end: 105caaf97; -[SCMemoriesMashupFeaturedStoryGenerationCoordinatorImpl _commandPool] */

void FUN_105caaf70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105caaf98; end: 105caaf9b; -[SCMemoriesMashupFeaturedStoryGenerationCoordinatorImpl _forceKickOff] */

void FUN_105caaf98(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be0bb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__executeFirstCommandIfNecessary_112560878);
  return;
}



/* Entry: 105caaf9c; end: 105caafdf; -[SCMemoriesMashupFeaturedStoryGenerationCoordinatorServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105caaf9c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112733708);
  _objc_destroyWeak(param_1 + _DAT_112733704);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112733700);
  return;
}



/* Entry: 105caafe0; end: 105cab2ef; -[SCMemoriesMashupStyleFeaturedStorySnapLevelGenerationCommand initWithMashupStyleFeaturedStoryManager:memoriesDataObjectContext:memoriesMashupStyleModel:memoriesServerGeneratedStoryModel:featuredStoryEntry:context:completionObserver:collectionTitle:entrySource:collectionCategory:clientProcessingBitMaskType:itemOrder:totalGenerationsCount:groupName:groupCount:clientExpectedTotalGenerationsCount:notificationPool:circumstanceEngine:priority:videoCreateSessionId:] */

undefined8 *
FUN_105caafe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_14);
  _objc_retain(param_16);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_22);
  puStack_70 = PTR_PTR_1126ecb78;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 1,param_3);
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
    puVar1[10] = param_11;
    puVar1[6] = param_8;
    _objc_storeWeak(puVar1 + 7,param_9);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    puVar1[9] = param_12;
    puVar1[0xb] = param_13;
    _objc_retain(param_16);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_16;
    _objc_release(uVar2);
    puVar1[0x11] = param_17;
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    puVar1[0xe] = param_15;
    puVar1[0xf] = param_18;
    _objc_retain(param_19);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_20;
    _objc_release(uVar2);
    puVar1[0x14] = param_21;
    _objc_retain(param_22);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_22;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bdeb5c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_22);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_16);
  _objc_release(param_14);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105cab2f0; end: 105cab72b; -[SCMemoriesMashupStyleFeaturedStorySnapLevelGenerationCommand _createBlizzardEventDataProvider] */

void FUN_105cab2f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puStack_e0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_105cab72c;
  uStack_88 = 0x105cab73c;
  uStack_80 = 0;
  puStack_108 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_105cab72c;
  uStack_b8 = 0x105cab73c;
  uStack_b0 = 0;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_105cab744;
  puStack_e8 = &UNK_1108ba818;
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  uStack_118 = 0x105cab77c;
  puStack_110 = &UNK_1108b9e98;
  puStack_d0 = puStack_108;
  puStack_a0 = puStack_e0;
  func_0x00010c0be0c0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_100,&puStack_128);
  lStack_130 = *(long *)(param_1 + 0x18);
  if (lStack_130 != 0) {
    func_0x00010bf3f9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010c26afc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0844e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = 0;
    goto LAB_105cab56c;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lStack_130 = 0;
    lVar9 = 0;
    uVar2 = 0;
    lVar1 = 0;
    goto LAB_105cab56c;
  }
  func_0x00010c15f260();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c243a00();
  if ((int)lVar1 == 1) {
    lVar1 = lVar3;
    func_0x00010bfbea80();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lStack_130 = lVar8;
    func_0x000107e63da0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar8;
    func_0x00010b5f5f9c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar9 = 0;
      lVar1 = 0;
    }
    else {
      lVar1 = lVar4;
      func_0x00010c26afc0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar4;
      func_0x00010c0f0a00();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
LAB_105cab548:
    _objc_release(lVar8);
  }
  else {
    lVar1 = lVar3;
    func_0x00010c243a00();
    lVar8 = lVar3;
    if ((int)lVar1 == 4) {
      func_0x00010bf3f9c0();
      _objc_retainAutoreleasedReturnValue();
      lStack_130 = lVar8;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
LAB_105cab4ec:
      lVar9 = 0;
      lVar1 = 0;
      goto LAB_105cab548;
    }
    lVar1 = lVar3;
    func_0x00010c243a00();
    if ((int)lVar1 == 5) {
      func_0x00010c26b040(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar8;
      func_0x00010c26afc0();
      _objc_retainAutoreleasedReturnValue();
LAB_105cab528:
      lStack_130 = 0;
      lVar9 = 0;
      goto LAB_105cab548;
    }
    lVar1 = lVar3;
    func_0x00010c243a00();
    if ((int)lVar1 == 3) {
      func_0x00010bf2a780();
      _objc_retainAutoreleasedReturnValue();
      lStack_130 = lVar8;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105cab4ec;
    }
    lVar1 = lVar3;
    func_0x00010c243a00();
    if ((int)lVar1 == 2) {
      func_0x00010bf2a980(lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar8;
      func_0x00010c26afc0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105cab528;
    }
    lStack_130 = 0;
    lVar9 = 0;
    lVar1 = 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
LAB_105cab56c:
  puVar5 = PTR_PTR_1126c39b0;
  _objc_alloc(PTR_PTR_1126c39b0);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c26f320();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c016e00(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar2);
  _objc_release(lVar9);
  _objc_release(lStack_130);
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105cab72c; end: 105cab743;  */

void FUN_105cab72c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105cab744; end: 105cab7b3;  */

void FUN_105cab744(long param_1,undefined8 param_2)

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



/* Entry: 105cab7b4; end: 105cab8f7; -[SCMemoriesMashupStyleFeaturedStorySnapLevelGenerationCommand execute] */

void FUN_105cab7b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = param_1 + 8;
  _objc_loadWeakRetained();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  uVar8 = *(undefined8 *)(param_1 + 0x80);
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar8);
  _objc_retain(uVar7);
  _objc_retain(uVar1);
  _objc_retain(uVar6);
  _objc_retain(uVar2);
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined **)(param_1 + 0xa8) = puVar4;
  _objc_release(uVar5);
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_105cab8f8;
  puStack_a8 = &UNK_1108e3f38;
  puVar4 = PTR_PTR_1126ae6b8;
  lStack_a0 = lVar3;
  uStack_98 = uVar2;
  uStack_90 = uVar6;
  uStack_88 = uVar1;
  uStack_80 = uVar7;
  uStack_78 = uVar8;
  uStack_70 = uVar9;
  uStack_68 = uVar10;
  func_0x00010bf54280(PTR_PTR_1126ae6b8,param_2,&puStack_c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105cab8f8; end: 105cab93b;  */

void FUN_105cab8f8(long param_1,undefined8 param_2)

{
  func_0x00010bfbf500(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),param_2,
                      *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 105cab93c; end: 105cab9cf; -[SCMemoriesMashupStyleFeaturedStorySnapLevelGenerationCommand generationDidFinish:] */

void FUN_105cab93c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bfa33a0(lVar1,param_2,param_1,param_3,uVar3,lVar2,*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105cab9d0; end: 105cab9f7; -[SCMemoriesMashupStyleFeaturedStorySnapLevelGenerationCommand getGalleryCollectionSnapClientData] */

void FUN_105cab9d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105cab9f8; end: 105cababf; -[SCMemoriesMashupStyleFeaturedStorySnapLevelGenerationCommand getGeneratedSnapsCount] */

undefined8 FUN_105cab9f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_78 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105cabac0;
  puStack_58 = &UNK_1108e3f08;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105cabb8c;
  puStack_80 = &UNK_1108b9e98;
  lStack_50 = param_1;
  puStack_48 = puStack_78;
  puStack_38 = puStack_78;
  func_0x00010c0be0c0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_70,&puStack_98);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 105cabac0; end: 105cabb6b;  */

void FUN_105cabac0(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0e0160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126af4d0;
    func_0x00010bfa7380();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfaea20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    *(undefined **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = puVar4;
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105cabb6c; end: 105cabb8b;  */

bool FUN_105cabb6c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf3d2a0(param_2);
  return (int)param_2 != 0;
}



/* Entry: 105cabb8c; end: 105cabb9b;  */

void FUN_105cabb8c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 105cabb9c; end: 105cabba3; -[SCMemoriesMashupStyleFeaturedStorySnapLevelGenerationCommand getTotalGenerationsCount] */

undefined8 FUN_105cabb9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105cabba4; end: 105cabbab; -[SCMemoriesMashupStyleFeaturedStorySnapLevelGenerationCommand getClientExpectedTotalGenerationsCount] */

undefined8 FUN_105cabba4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 105cabbac; end: 105cabbb3; -[SCMemoriesMashupStyleFeaturedStorySnapLevelGenerationCommand priority] */

undefined8 FUN_105cabbac(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 105cabbb4; end: 105cabbbb; -[SCMemoriesMashupStyleFeaturedStorySnapLevelGenerationCommand clientProcessingBitMaskType] */

undefined8 FUN_105cabbb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 105cabbbc; end: 105cabc1b; -[SCMemoriesMashupStyleFeaturedStorySnapLevelGenerationCommand getClientGenLatency] */

long FUN_105cabbbc(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar1);
  return (long)(param_1 * 1000.0);
}



/* Entry: 105cabc1c; end: 105cabc23; -[SCMemoriesMashupStyleFeaturedStorySnapLevelGenerationCommand disposeUponCompletion] */

undefined8 FUN_105cabc1c(void)

{
  return 0;
}



/* Entry: 105cabc24; end: 105cabcdb; -[SCMemoriesMashupStyleFeaturedStorySnapLevelGenerationCommand .cxx_destruct] */

void FUN_105cabc24(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105cabcdc; end: 105cabeb3; -[SCGalleryBackupNotificationHelper initWithCloudSync:galleryDataObjectContext:profile:cachingMediaManager:notificationManager:circumstanceEngine:] */

undefined1 *
FUN_105cabcdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ecb80;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = 0x4122750000000000;
    *(undefined8 *)((long)puVar1 + 0x20) = 0x4122750000000000;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105cabeb4; end: 105cabf1f; -[SCGalleryBackupNotificationHelper dealloc] */

void FUN_105cabeb4(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  func_0x00010be92140(param_1);
  puStack_28 = PTR_PTR_1126ecb80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105cabf20; end: 105cabf73; -[SCGalleryBackupNotificationHelper _reset] */

void FUN_105cabf20(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105cabf74; end: 105cabfcb; -[SCGalleryBackupNotificationHelper showBackUpNotificationIfAvailable] */

void FUN_105cabf74(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105cabfcc;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_38);
  return;
}



/* Entry: 105cabfcc; end: 105cac107;  */

void FUN_105cabfcc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010beb6340();
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_105cac108;
    puStack_50 = &UNK_110842e18;
    uStack_48 = uVar2;
    func_0x00010c0f8520();
    _objc_release(uVar3);
    _objc_initWeak(auStack_70,*(undefined8 *)(param_1 + 0x20));
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_copyWeak(auStack_78,auStack_70);
    func_0x00010be22ea0(uVar3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_70);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 105cac108; end: 105cac16f;  */

void FUN_105cac108(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2508;
  func_0x00010bf350c0(PTR_PTR_1126b2508,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7820(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


