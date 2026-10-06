/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1002bf94c; end: 1002bf953; +[SCOptional optionalWithValue:] */

void FUN_1002bf94c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf0d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__createOptionalWithValue_errorMe_112559cf8,param_3,0);
  return;
}



/* Entry: 1002bf954; end: 1002bf9d7; +[SCOptional _createOptionalWithValue:errorMessage:] */

void FUN_1002bf954(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  func_0x000107c61174(param_3);
  if (param_3 == 0) {
    if (param_4 == 0) {
      func_0x000107c4d73c(param_1);
      func_0x000107c61180();
    }
    else {
      func_0x000107c42a64(param_1,param_2,param_4);
      func_0x000107c61180();
    }
  }
  else {
    func_0x000107c5b58c(param_1,param_2,param_3);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1002bf9d8; end: 1002bf9f3;  */

void FUN_1002bf9d8(undefined8 param_1)

{
  FUN_1000285a8(0x112e3f290,&UNK_10da2cdc8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003ba9fc,param_1);
  return;
}



/* Entry: 1002bf9f4; end: 1002bfa43;  */

void FUN_1002bf9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002bfa44; end: 1002bfaaf; +[SCOptional someWithValue:] */

void FUN_1002bfa44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126ae750;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c3ba68();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1002bfab0; end: 1002bfb77;  */

void FUN_1002bfab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3f918,&UNK_10da2d800);
  puVar1 = &UNK_11049e490;
  func_0x000107c613fc(&UNK_11049e490,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(FUN_1003ba5a8,puVar1);
  return;
}



/* Entry: 1002bfb78; end: 1002bfb97;  */

void FUN_1002bfb78(void)

{
  func_0x000107c61168(&PTR_PTR_112e3f990);
  return;
}



/* Entry: 1002bfb98; end: 1002bfbb3;  */

void FUN_1002bfb98(undefined8 param_1)

{
  FUN_1000285a8(0x112e3f920,&UNK_10da2d808);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003ba54c,param_1);
  return;
}



/* Entry: 1002bfbb4; end: 1002bfc03;  */

void FUN_1002bfbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002bfc04; end: 1002bfce3;  */

void FUN_1002bfc04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3fb38,&UNK_10da2db80);
  puVar1 = &UNK_11049e620;
  func_0x000107c613fc(&UNK_11049e620,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(FUN_1006df218,puVar1);
  return;
}



/* Entry: 1002bfce4; end: 1002bfd03;  */

void FUN_1002bfce4(void)

{
  func_0x000107c61168(&PTR_PTR_112e3fbb0);
  return;
}



/* Entry: 1002bfd04; end: 1002bfd1f;  */

void FUN_1002bfd04(undefined8 param_1)

{
  FUN_1000285a8(0x112e3fb40,&UNK_10da2db88);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006df1bc,param_1);
  return;
}



/* Entry: 1002bfd20; end: 1002bfd6f;  */

void FUN_1002bfd20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002bfd70; end: 1002bfd8f;  */

void FUN_1002bfd70(void)

{
  func_0x000107c61168(&PTR_PTR_112923d50);
  return;
}



/* Entry: 1002bfd90; end: 1002bfdab;  */

void FUN_1002bfd90(undefined8 param_1)

{
  FUN_1000285a8(0x112e3fc50,&UNK_10da2dd48);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006cd288,param_1);
  return;
}



/* Entry: 1002bfdac; end: 1002bfdfb;  */

void FUN_1002bfdac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002bfdfc; end: 1002bfe1b;  */

void FUN_1002bfdfc(void)

{
  func_0x000107c61168(&PTR_PTR_112943f90);
  return;
}



/* Entry: 1002bfe1c; end: 1002bfeb3;  */

void FUN_1002bfe1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e31da0,&UNK_10da1b000);
  puVar1 = &UNK_11048d220;
  func_0x000107c613fc(&UNK_11048d220,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_100bf3468,puVar1);
  return;
}



/* Entry: 1002bfeb4; end: 1002bfed3;  */

void FUN_1002bfeb4(void)

{
  func_0x000107c61168(&PTR_PTR_112e31e18);
  return;
}



/* Entry: 1002bfed4; end: 1002c0017;  */

void FUN_1002bfed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e366c8,&UNK_10da205e0);
  puVar1 = &UNK_1104934b8;
  func_0x000107c613fc(&UNK_1104934b8,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  FUN_1000823a8(&UNK_101ea07d0,puVar1);
  return;
}



/* Entry: 1002c0018; end: 1002c00bb;  */

void FUN_1002c0018(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c00bc; end: 1002c026b;  */

void FUN_1002c00bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0e658,&UNK_10d9e9160);
  puVar1 = &UNK_110461090;
  func_0x000107c613fc(&UNK_110461090,0xa8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  FUN_1000823a8(FUN_10048c7d0,puVar1);
  return;
}



/* Entry: 1002c026c; end: 1002c03e7; -[SCSnapTokenStorage getCloud1TLTokenAsyncWithCompletionPerformer:userId:completion:] */

void FUN_1002c026c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  puVar1 = &UNK_10f6edeb5;
  FUN_10029ce24();
  puStack_48 = puVar1;
  func_0x000107c3bd30();
  func_0x000107c61180();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000107c4e524(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c60bcc(&uStack_60,8);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1002c03e8; end: 1002c0407;  */

void FUN_1002c03e8(void)

{
  func_0x000107c61168(&PTR_PTR_112e0e6d0);
  return;
}



/* Entry: 1002c0408; end: 1002c079f; -[SCManagedCaptureSessionImpl _addCaptureControls:] */

void FUN_1002c0408(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_3;
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  func_0x000107c40808();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(param_1 + 8);
    func_0x000107c61164(uVar3,PTR_s_supportsControls_1126767a0);
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 8);
      func_0x000107c5c458();
      if (iVar1 != 0) {
        func_0x000107c3e76c(*(undefined8 *)(param_1 + 8));
        uVar3 = *(ulong *)(param_1 + 8);
        func_0x000107c61164(uVar3,PTR_s_controls_1125b1980);
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(param_1 + 8);
          func_0x000107c61164(uVar3,PTR_s_removeControl__1126288d0);
          if ((uVar3 & 1) != 0) {
            lVar4 = *(long *)(param_1 + 8);
            func_0x000107c40654();
            func_0x000107c61180();
            lVar2 = lVar4;
            func_0x000107c4080c();
            lVar7 = lRam0000000000000000;
            while (lVar2 != 0) {
              lVar10 = 0;
              do {
                if (lRam0000000000000000 != lVar7) {
                  func_0x000107c61128(lVar4);
                }
                func_0x000107c4fed4(*(undefined8 *)(param_1 + 8));
                lVar10 = lVar10 + 1;
              } while (lVar2 != lVar10);
              lVar2 = lVar4;
              func_0x000107c4080c();
            }
            func_0x000107c61170(lVar4);
          }
        }
        uVar3 = *(ulong *)(param_1 + 8);
        func_0x000107c61164(uVar3,PTR_s_addControl__11259b870);
        if ((uVar3 & 1) != 0) {
          uVar3 = *(ulong *)(param_1 + 8);
          func_0x000107c61164(uVar3,PTR_s_canAddControl__1125a8ab8);
          if ((uVar3 & 1) != 0) {
            func_0x000107c61174(param_3);
            lVar2 = param_3;
            func_0x000107c4080c();
            lVar7 = lRam0000000000000000;
            while (lVar2 != 0) {
              lVar4 = 0;
              do {
                if (lRam0000000000000000 != lVar7) {
                  func_0x000107c61128(param_3);
                }
                uVar9 = *(undefined8 *)(lVar4 * 8);
                iVar1 = (int)*(undefined8 *)(param_1 + 8);
                uVar5 = uVar9;
                func_0x000107c5c734(uVar9);
                func_0x000107c61180();
                uVar11 = uVar5;
                func_0x000107c3f590();
                func_0x000107c61180();
                func_0x000107c3f390();
                func_0x000107c61170(uVar11);
                func_0x000107c61170(uVar5);
                if (iVar1 != 0) {
                  uVar11 = *(undefined8 *)(param_1 + 8);
                  func_0x000107c5c734();
                  func_0x000107c61180();
                  uVar5 = uVar9;
                  func_0x000107c3f590();
                  func_0x000107c61180();
                  func_0x000107c3d644(uVar11);
                  func_0x000107c61170(uVar5);
                  func_0x000107c61170(uVar9);
                }
                lVar4 = lVar4 + 1;
              } while (lVar2 != lVar4);
              lVar2 = param_3;
              func_0x000107c4080c();
            }
            func_0x000107c61170(param_3);
          }
        }
        uVar11 = *(undefined8 *)(param_1 + 8);
        uVar5 = *(undefined8 *)(param_1 + 0x48);
        func_0x000107c4f7c0();
        func_0x000107c61180();
        lVar7 = param_1;
        func_0x000107c53958(uVar11);
        func_0x000107c61170(uVar5);
        func_0x000107c3fe5c(*(undefined8 *)(param_1 + 8));
      }
    }
  }
  lVar2 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8();
  func_0x000107c61174(lVar7);
  puVar6 = &UNK_10f6ee142;
  FUN_1000ba800(&UNK_10f6ee142);
  func_0x000107c611ec(lVar2 + 0x38);
  lVar8 = lVar2;
  func_0x000107c3fc34();
  func_0x000107c61180();
  func_0x000107c611f0(lVar2 + 0x38);
  if (lVar8 == 0) {
    lVar8 = lVar2;
    func_0x000107c3c204(lVar2);
    func_0x000107c61180();
    func_0x000107c611ec(lVar2 + 0x38);
    func_0x000107c534cc(lVar2);
    func_0x000107c611f0(lVar2 + 0x38);
  }
  func_0x0001000e2a84(puVar6);
  func_0x000107c61170(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1002c07a0; end: 1002c08a3; -[SCSnapTokenStorage _loadCloud1TLTokenForUserId:] */

void FUN_1002c07a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f6ee142;
  FUN_1000ba800(&UNK_10f6ee142);
  func_0x000107c611ec(param_1 + 0x38);
  lVar2 = param_1;
  func_0x000107c3fc34();
  func_0x000107c61180();
  func_0x000107c611f0(param_1 + 0x38);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x000107c3c204(param_1,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c611ec(param_1 + 0x38);
    func_0x000107c534cc(param_1,param_2,lVar2);
    func_0x000107c611f0(param_1 + 0x38);
  }
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1002c08a4; end: 1002c08bf;  */

void FUN_1002c08a4(undefined8 param_1)

{
  FUN_1000285a8(0x112e0e660,&UNK_10d9e9168);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10048c218,param_1);
  return;
}



/* Entry: 1002c08c0; end: 1002c090f;  */

void FUN_1002c08c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c0910; end: 1002c092f;  */

void FUN_1002c0910(void)

{
  func_0x000107c61168(&PTR_PTR_112990b98);
  return;
}



/* Entry: 1002c0930; end: 1002c0937; -[SCSnapTokenStorage cloud1TLToken] */

undefined8 FUN_1002c0930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1002c0938; end: 1002c0a5f; -[SCSnapTokenStorage _readCloud1TLTokenFromDiskForUserId:] */

void FUN_1002c0938(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f6ee371;
  FUN_1000ba800(&UNK_10f6ee371);
  lVar2 = *(long *)(param_1 + 0x48);
  func_0x000107c3fc38(lVar2,param_2,param_3);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4adac();
  if (lVar3 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c610f4();
    func_0x000107c46368();
    puVar5 = puVar4;
    func_0x000107c4adac();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x000107c61174(puVar4);
      puVar5 = puVar4;
    }
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(lVar2);
  func_0x0001000e2a84(puVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1002c0a60; end: 1002c0acb; -[SCSnapTokenKeychainBackedByArchiveDiskStorage cloud1TLTokenDataWithUserId:] */

void FUN_1002c0a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  puVar1 = &UNK_10f6ed5dc;
  FUN_1000ba800(&UNK_10f6ed5dc);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c3fc38(uVar2,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1002c0acc; end: 1002c0b3f; -[SCSnapTokenKeychainDiskStorage cloud1TLTokenDataWithUserId:] */

void FUN_1002c0acc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c3b09c();
  func_0x000107c61180();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c3b8e0();
    func_0x000107c61180();
  }
  else {
    func_0x000107c3b410(param_1,param_2,lVar1,&PTR____CFConstantStringClassReference_110f3df18);
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1002c0b40; end: 1002c0b77; -[SCSnapTokenKeychainDiskStorage _cloud1TLTokenKeyForUserId:] */

void FUN_1002c0b40(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 1002c0b78; end: 1002c0cab;  */

void FUN_1002c0b78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e20d80,&UNK_10da03ed0);
  puVar1 = &UNK_1104752f8;
  func_0x000107c613fc(&UNK_1104752f8,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  FUN_1000823a8(&UNK_101d1df5c,puVar1);
  return;
}



/* Entry: 1002c0cac; end: 1002c0d67;  */

void FUN_1002c0cac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c0d68; end: 1002c0d83;  */

void FUN_1002c0d68(undefined8 param_1)

{
  FUN_1000285a8(0x112e20d88,&UNK_10da03ed8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d1e324,param_1);
  return;
}



/* Entry: 1002c0d84; end: 1002c0dd3;  */

void FUN_1002c0d84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c0dd4; end: 1002c0e3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002c0dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112daa0d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112daa0d8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112daa0e0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112daa0e8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112daa0f0) = param_5;
  func_0x0001002c0d48();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1002c0e40; end: 1002c0e43;  */

void FUN_1002c0e40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c0e44; end: 1002c0ea7;  */

void FUN_1002c0e44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c0ea8; end: 1002c0eaf;  */

void FUN_1002c0ea8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1002c0eb0; end: 1002c0ff3;  */

void FUN_1002c0eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e216f8,&UNK_10da04f70);
  puVar1 = &UNK_1104759d8;
  func_0x000107c613fc(&UNK_1104759d8,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  FUN_1000823a8(&UNK_101d20714,puVar1);
  return;
}



/* Entry: 1002c0ff4; end: 1002c1077;  */

void FUN_1002c0ff4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c1078; end: 1002c1193; -[_TtC21SnapAirNetworkingImpl24SCSnapAirNetworkExecutor streamAirEventWithAirRequest:reportId:logProvider:onSuccess:onPermanentFailure:] */

/* WARNING: Possible PIC construction at 0x0001002c1174: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002c1178) */

void FUN_1002c1078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  puVar1 = &UNK_1103cfa70;
  func_0x000107c613fc(&UNK_1103cfa70,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  puVar2 = &UNK_1103cfa98;
  func_0x000107c613fc(&UNK_1103cfa98,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1002c11b4(param_3,param_4,param_2,param_5,FUN_1002cf404,puVar1,&UNK_1014de6e0,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1002c1194; end: 1002c11b3;  */

void FUN_1002c1194(void)

{
  func_0x000107c61168(&PTR_PTR_112e21770);
  return;
}



/* Entry: 1002c11b4; end: 1002c19c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002c11b4(double param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,code *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar12;
  code *pcVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  lVar15 = unaff_x20;
  uStack_e8 = param_8;
  uStack_e0 = param_9;
  pcStack_d8 = param_6;
  uStack_d0 = param_7;
  uStack_c8 = param_4;
  uStack_c0 = param_3;
  func_0x000107c614f0();
  lVar3 = 0x112d36580;
  lStack_100 = lVar15;
  FUN_1000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar16 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = (long)puVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar20 - extraout_x12_00;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar19 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = param_2;
  func_0x000107c44a94();
  if ((int)puVar4 == 0) {
    puVar4 = PTR_PTR_1126d01d8;
    func_0x000107c610f8(PTR_PTR_1126d01d8);
    func_0x000107c453e4();
    func_0x000107c5a228();
    func_0x000107c57d84(param_2);
  }
  else {
    func_0x000107c50288();
    func_0x000107c61180();
    if (param_2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1002c19c0);
      (*pcVar12)();
    }
    func_0x000107c5a228();
    puVar4 = param_2;
  }
  func_0x000107c61170(puVar4);
  puVar4 = PTR_PTR_1126d01c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c525dc();
  puVar5 = PTR_PTR_1126b86e8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c525d8();
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112daa0d8));
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1002c19a8);
    (*pcVar12)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1002c19ac);
    (*pcVar12)();
  }
  if (param_1 < 9.223372036854776e+18) {
    puStack_b8 = puVar5;
    func_0x000107c5469c(puVar5);
    FUN_1000d224c(&puStack_a8);
    puVar5 = puStack_a8;
    if (puStack_a8 != (undefined *)0x0) {
      puVar14 = puStack_a8;
      func_0x000107c61150(puStack_a8,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_streamEvent__112674b68);
      if (((ulong)puVar14 & 1) != 0) {
        func_0x000107c5c124(puVar5);
      }
      func_0x000107c615e8(puVar5);
    }
    if (param_5 == 0) {
      (*pcStack_d8)();
      func_0x000107c61170(puVar4);
      puVar4 = puStack_b8;
    }
    else {
      puStack_f8 = puVar4;
      lStack_f0 = param_5;
      func_0x000107c615f0();
      func_0x000107c5edd0(puVar16,0xd000000000000029,0x800000010ef86e90);
      pcVar12 = *(code **)(lVar17 + 0x30);
      puVar6 = puVar16;
      (*pcVar12)(puVar16,1,lVar3);
      if ((int)puVar6 == 1) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1002c19b8);
        (*pcVar12)();
      }
      pcVar13 = *(code **)(lVar17 + 0x20);
      (*pcVar13)(lVar20,puVar16,lVar3);
      (**(code **)(lVar17 + 0x38))(lVar20,0,1,lVar3);
      func_0x000107c5edcc(lVar15,0xd00000000000001b,0x800000010ef86ec0,lVar20);
      func_0x0001014deca0(lVar20,0x112d36580,&UNK_10d9016d0);
      lVar20 = lVar15;
      (*pcVar12)(lVar15,1,lVar3);
      if ((int)lVar20 == 1) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1002c19bc);
        (*pcVar12)();
      }
      (*pcVar13)(lVar19,lVar15,lVar3);
      puVar5 = PTR_PTR_1126d01c8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar18 = uStack_c8;
      uVar7 = uStack_c0;
      uVar11 = uStack_c8;
      func_0x000107c5fadc(uStack_c0,uStack_c8);
      func_0x000107c57d7c(puVar5);
      func_0x000107c61170(uVar7);
      FUN_1000d224c(&puStack_a8);
      puVar4 = puStack_a8;
      uVar1 = uStack_e8;
      if (puStack_a8 == (undefined *)0x0) {
        (**(code **)(lVar17 + 8))(lVar19,lVar3);
        func_0x000107c61170(puVar5);
        lVar15 = lStack_f0;
      }
      else {
        lStack_108 = lVar19;
        func_0x000107c5ed90();
        puVar14 = puVar5;
        func_0x000107c41214();
        func_0x000107c61180();
        lVar15 = lStack_f0;
        lStack_110 = lVar17;
        if (puVar14 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar8 = puVar14;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar14);
          puVar14 = puVar8;
          func_0x000107c5ee20(puVar8,uVar11);
          uVar18 = uStack_c8;
          func_0x00010006c090(puVar8,uVar11);
        }
        puStack_88 = &UNK_1014ddebc;
        puStack_80 = (undefined *)0x0;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_101365b04;
        puStack_90 = &UNK_1103cf950;
        ppuVar9 = &puStack_a8;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c61574(puStack_80);
        puVar8 = puVar4;
        func_0x000107c3ecec();
        func_0x000107c61180();
        puStack_118 = puVar8;
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(puVar14);
        uVar10 = 0;
        func_0x000107c61544(0,"",100,0x74,0x1c,1);
        func_0x000107c61574(0);
        if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1002c19b4);
          (*pcVar12)();
        }
        puStack_128 = puVar4;
        puVar4 = &UNK_1103cf988;
        puStack_120 = puVar5;
        func_0x000107c613fc(&UNK_1103cf988,0x38,7);
        uVar2 = uStack_c0;
        uVar11 = uStack_d0;
        *(long *)(puVar4 + 0x10) = lVar15;
        *(undefined8 *)(puVar4 + 0x18) = uStack_c0;
        *(undefined8 *)(puVar4 + 0x20) = uVar18;
        *(code **)(puVar4 + 0x28) = pcStack_d8;
        *(undefined8 *)(puVar4 + 0x30) = uStack_d0;
        puVar5 = &UNK_1103cf9b0;
        func_0x000107c613fc(&UNK_1103cf9b0,0x38,7);
        uVar7 = uStack_e0;
        *(long *)(puVar5 + 0x10) = lVar15;
        *(undefined8 *)(puVar5 + 0x18) = uVar2;
        *(undefined8 *)(puVar5 + 0x20) = uVar18;
        *(undefined8 *)(puVar5 + 0x28) = uVar1;
        *(undefined8 *)(puVar5 + 0x30) = uStack_e0;
        func_0x000107c615f4(lVar15,2);
        func_0x000107c61438(uVar18,2);
        func_0x000107c6157c(uVar11);
        func_0x000107c6157c(uVar7);
        FUN_1000d224c(&lStack_b0);
        if (lStack_b0 != 0) {
          lVar17 = *(long *)(unaff_x20 + _DAT_112daa0f0);
          func_0x000107c4f7c0();
          func_0x000107c61180();
          if (lVar17 != 0) {
            puVar14 = &UNK_1103cf9d8;
            func_0x000107c613fc(&UNK_1103cf9d8,0x18,7);
            func_0x000107c61614(puVar14 + 0x10,unaff_x20);
            puVar8 = &UNK_1103cfa00;
            func_0x000107c613fc(&UNK_1103cfa00,0x68,7);
            uVar7 = uStack_c8;
            uVar18 = uStack_e0;
            *(undefined **)(puVar8 + 0x10) = puVar14;
            *(undefined8 *)(puVar8 + 0x18) = uVar1;
            *(undefined8 *)(puVar8 + 0x20) = uStack_e0;
            *(long *)(puVar8 + 0x28) = lVar15;
            *(undefined8 *)(puVar8 + 0x30) = uStack_c0;
            *(undefined8 *)(puVar8 + 0x38) = uStack_c8;
            *(undefined **)(puVar8 + 0x40) = &UNK_1014de5dc;
            *(undefined **)(puVar8 + 0x48) = puVar5;
            *(undefined **)(puVar8 + 0x50) = &UNK_1014de558;
            *(undefined **)(puVar8 + 0x58) = puVar4;
            *(long *)(puVar8 + 0x60) = lStack_100;
            puStack_88 = &UNK_1014de63c;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_101365b40;
            puStack_90 = &UNK_1103cfa18;
            ppuVar9 = &puStack_a8;
            puStack_80 = puVar8;
            func_0x000107c60bc4(ppuVar9);
            puVar14 = puStack_80;
            func_0x000107c615f0(lVar15);
            func_0x000107c61434(uVar7);
            func_0x000107c6157c(uVar18);
            func_0x000107c6157c(puVar5);
            func_0x000107c6157c(puVar4);
            func_0x000107c61574(puVar14);
            lVar19 = lStack_b0;
            func_0x000107c5c2f4(lStack_b0);
            func_0x000107c61180();
            func_0x000107c61170(puStack_118);
            func_0x000107c60bd0(ppuVar9);
            func_0x000107c61170(puStack_f8);
            func_0x000107c615e8(lVar15);
            func_0x000107c61574(puVar5);
            func_0x000107c61574(puVar4);
            func_0x000107c61170(puStack_b8);
            func_0x000107c615e8(puStack_128);
            func_0x000107c61170(puStack_120);
            func_0x000107c615e8(lVar19);
            func_0x000107c615e8(lStack_b0);
            func_0x000107c61170(lVar17);
            (**(code **)(lStack_110 + 8))(lStack_108,lVar3);
            return;
          }
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1002c19c4);
          (*pcVar12)();
        }
        (**(code **)(lStack_110 + 8))(lStack_108,lVar3);
        func_0x000107c615e8(puStack_128);
        func_0x000107c61170(puStack_120);
        func_0x000107c61170(puStack_118);
        func_0x000107c61574(puVar4);
        func_0x000107c61574(puVar5);
      }
      func_0x000107c615e8(lVar15);
      func_0x000107c61170(puStack_b8);
      puVar4 = puStack_f8;
    }
    func_0x000107c61170(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x1002c19b0);
  (*pcVar12)();
}



/* Entry: 1002c19c4; end: 1002c19c7;  */

void FUN_1002c19c4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c19c8; end: 1002c1a37;  */

void FUN_1002c19c8(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c1a38; end: 1002c1a3b;  */

void FUN_1002c1a38(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c1a3c; end: 1002c1b3f;  */

void FUN_1002c1a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e21f28,&UNK_10da05e20);
  puVar1 = &UNK_110475fa8;
  func_0x000107c613fc(&UNK_110475fa8,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  FUN_1000823a8(&UNK_101d22354,puVar1);
  return;
}



/* Entry: 1002c1b40; end: 1002c1bc3;  */

void FUN_1002c1b40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c1bc4; end: 1002c1bdf;  */

void FUN_1002c1bc4(undefined8 param_1)

{
  FUN_1000285a8(0x112e21f30,&UNK_10da05e28);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d22668,param_1);
  return;
}



/* Entry: 1002c1be0; end: 1002c1c2f;  */

void FUN_1002c1be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c1c30; end: 1002c1c4f;  */

void FUN_1002c1c30(void)

{
  func_0x000107c61168(&PTR_PTR_112804650);
  return;
}



/* Entry: 1002c1c50; end: 1002c1c6b;  */

void FUN_1002c1c50(undefined8 param_1)

{
  FUN_1000285a8(0x112e226f8,&UNK_10da06ca8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101d23c54,param_1);
  return;
}



/* Entry: 1002c1c6c; end: 1002c1cbb;  */

void FUN_1002c1c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c1cbc; end: 1002c1cdb;  */

void FUN_1002c1cbc(void)

{
  func_0x000107c61168(&PTR_PTR_1129192b0);
  return;
}



/* Entry: 1002c1cdc; end: 1002c1d67; +[AirEvent descriptor] */

undefined * FUN_1002c1cdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fafa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdde70,
                        &PTR____CFConstantStringClassReference_110f87fd8,&PTR_DAT_1133f2e80,
                        &PTR_DAT_1133f2e98,2,0x18,0x1c);
    func_0x000107c5a8b4();
    puRam00000001137fafa0 = puVar1;
  }
  return puRam00000001137fafa0;
}



/* Entry: 1002c1d68; end: 1002c1f7b;  */

void FUN_1002c1d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3e058,&UNK_10da2afc0);
  puVar1 = &UNK_11049d478;
  func_0x000107c613fc(&UNK_11049d478,0xd8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  FUN_1000823a8(FUN_100438c94,puVar1);
  return;
}



/* Entry: 1002c1f7c; end: 1002c1f9b;  */

void FUN_1002c1f7c(void)

{
  func_0x000107c61168(&PTR_PTR_112e3e0e8);
  return;
}



/* Entry: 1002c1f9c; end: 1002c1fb7;  */

void FUN_1002c1f9c(undefined8 param_1)

{
  FUN_1000285a8(0x112e3e070,&UNK_10da2afd8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x100437abc,param_1);
  return;
}



/* Entry: 1002c1fb8; end: 1002c2007;  */

void FUN_1002c1fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c2008; end: 1002c2023;  */

void FUN_1002c2008(undefined8 param_1)

{
  FUN_1000285a8(0x112e3e078,&UNK_10da2afe0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100442740,param_1);
  return;
}



/* Entry: 1002c2024; end: 1002c2043;  */

void FUN_1002c2024(void)

{
  func_0x000107c61168(&PTR_PTR_112963c80);
  return;
}



/* Entry: 1002c2044; end: 1002c205f;  */

void FUN_1002c2044(undefined8 param_1)

{
  FUN_1000285a8(0x112e3e068,&UNK_10da2afd0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100bc6f18,param_1);
  return;
}



/* Entry: 1002c2060; end: 1002c207f;  */

void FUN_1002c2060(void)

{
  func_0x000107c61168(&PTR_PTR_11299b530);
  return;
}



/* Entry: 1002c2080; end: 1002c213b;  */

void FUN_1002c2080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3e508,&UNK_10da2b7d0);
  puVar1 = &UNK_11049d7d8;
  func_0x000107c613fc(&UNK_11049d7d8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_100465088,puVar1);
  return;
}



/* Entry: 1002c213c; end: 1002c215b;  */

void FUN_1002c213c(void)

{
  func_0x000107c61168(&PTR_PTR_112e3e580);
  return;
}



/* Entry: 1002c215c; end: 1002c2177;  */

void FUN_1002c215c(undefined8 param_1)

{
  FUN_1000285a8(0x112e3e510,&UNK_10da2b7d8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10046502c,param_1);
  return;
}



/* Entry: 1002c2178; end: 1002c21c7;  */

void FUN_1002c2178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c21c8; end: 1002c21e7;  */

void FUN_1002c21c8(void)

{
  func_0x000107c61168(&PTR_PTR_112938a28);
  return;
}



/* Entry: 1002c21e8; end: 1002c22c7;  */

void FUN_1002c21e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1a0e0,&UNK_10d9fa220);
  puVar1 = &UNK_11046d9a0;
  func_0x000107c613fc(&UNK_11046d9a0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(&UNK_101ce11a0,puVar1);
  return;
}



/* Entry: 1002c22c8; end: 1002c233b;  */

void FUN_1002c22c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c233c; end: 1002c23f7;  */

void FUN_1002c233c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1fcc8,&UNK_10da025e0);
  puVar1 = &UNK_110473fb8;
  func_0x000107c613fc(&UNK_110473fb8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_10091ec5c,puVar1);
  return;
}



/* Entry: 1002c23f8; end: 1002c2417;  */

void FUN_1002c23f8(void)

{
  func_0x000107c61168(&PTR_PTR_112e1fd40);
  return;
}



/* Entry: 1002c2418; end: 1002c2433;  */

void FUN_1002c2418(undefined8 param_1)

{
  FUN_1000285a8(0x112e1fcd0,&UNK_10da025f0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10091ec00,param_1);
  return;
}



/* Entry: 1002c2434; end: 1002c2483;  */

void FUN_1002c2434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c2484; end: 1002c253f;  */

void FUN_1002c2484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e1fdc8,&UNK_10da02790);
  puVar1 = &UNK_110474080;
  func_0x000107c613fc(&UNK_110474080,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(FUN_100724570,puVar1);
  return;
}



/* Entry: 1002c2540; end: 1002c255f;  */

void FUN_1002c2540(void)

{
  func_0x000107c61168(&PTR_PTR_112e1fe40);
  return;
}



/* Entry: 1002c2560; end: 1002c257b;  */

void FUN_1002c2560(undefined8 param_1)

{
  FUN_1000285a8(0x112e1fdd0,&UNK_10da027a0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100724514,param_1);
  return;
}



/* Entry: 1002c257c; end: 1002c25cb;  */

void FUN_1002c257c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c25cc; end: 1002c25e7;  */

void FUN_1002c25cc(undefined8 param_1)

{
  FUN_1000285a8(0x112e30d38,&UNK_10da19dd8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006ee7d8,param_1);
  return;
}



/* Entry: 1002c25e8; end: 1002c2637;  */

void FUN_1002c25e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c2638; end: 1002c2653;  */

void FUN_1002c2638(undefined8 param_1)

{
  FUN_1000285a8(0x112e33a08,&UNK_10da1cce8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100bc9494,param_1);
  return;
}



/* Entry: 1002c2654; end: 1002c26a3;  */

void FUN_1002c2654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c26a4; end: 1002c26bf;  */

void FUN_1002c26a4(undefined8 param_1)

{
  FUN_1000285a8(0x112e366d0,&UNK_10da205e8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ea0bcc,param_1);
  return;
}



/* Entry: 1002c26c0; end: 1002c270f;  */

void FUN_1002c26c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c2710; end: 1002c2823;  */

void FUN_1002c2710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3ce58,&UNK_10da290b0);
  puVar1 = &UNK_11049b868;
  func_0x000107c613fc(&UNK_11049b868,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  FUN_1000823a8(&UNK_101ef7c74,puVar1);
  return;
}



/* Entry: 1002c2824; end: 1002c28af;  */

void FUN_1002c2824(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c28b0; end: 1002c2977;  */

void FUN_1002c28b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3d090,&UNK_10da294a0);
  puVar1 = &UNK_11049ba18;
  func_0x000107c613fc(&UNK_11049ba18,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  FUN_1000823a8(&UNK_101ef8d3c,puVar1);
  return;
}



/* Entry: 1002c2978; end: 1002c29e3;  */

void FUN_1002c2978(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002c29e4; end: 1002c29ff;  */

void FUN_1002c29e4(undefined8 param_1)

{
  FUN_1000285a8(0x112e3d098,&UNK_10da294a8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ef9168,param_1);
  return;
}



/* Entry: 1002c2a00; end: 1002c2a4f;  */

void FUN_1002c2a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002c2a50; end: 1002c2a6f;  */

void FUN_1002c2a50(void)

{
  func_0x000107c61168(&PTR_PTR_112921820);
  return;
}



/* Entry: 1002c2a70; end: 1002c2b4f;  */

void FUN_1002c2a70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3f560,&UNK_10da2d200);
  puVar1 = &UNK_11049e260;
  func_0x000107c613fc(&UNK_11049e260,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(FUN_1006dcc78,puVar1);
  return;
}



/* Entry: 1002c2b50; end: 1002c2b6f;  */

void FUN_1002c2b50(void)

{
  func_0x000107c61168(&PTR_PTR_112e3f5d8);
  return;
}



/* Entry: 1002c2b70; end: 1002c2dbf;  */

void FUN_1002c2b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3f678,&UNK_10da2d3d0);
  puVar1 = &UNK_11049e328;
  func_0x000107c613fc(&UNK_11049e328,0xf0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  FUN_1000823a8(FUN_100433d14,puVar1);
  return;
}



/* Entry: 1002c2dc0; end: 1002c2ddf;  */

void FUN_1002c2dc0(void)

{
  func_0x000107c61168(&PTR_PTR_112e3f6f0);
  return;
}



/* Entry: 1002c2de0; end: 1002c2dfb;  */

void FUN_1002c2de0(undefined8 param_1)

{
  FUN_1000285a8(0x112e3ce68,&UNK_10da290c0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ef84bc,param_1);
  return;
}


