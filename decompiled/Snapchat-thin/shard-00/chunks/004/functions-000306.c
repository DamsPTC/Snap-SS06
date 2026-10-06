/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100682464; end: 1006824e3;  */

void FUN_100682464(void)

{
  func_0x000107c61168(&PTR_PTR_112df4bb0);
  return;
}



/* Entry: 1006824e4; end: 10068257b;  */

undefined8 FUN_1006824e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112df4960;
  FUN_1000285a8(0x112df4960,&UNK_10d9c2f88);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10068257c; end: 10068257f;  */

void FUN_10068257c(long param_1,long param_2)

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



/* Entry: 100682580; end: 1006825e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100682580(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113046cb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113046cb8) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1006825e4; end: 10068266f;  */

void FUN_1006825e4(void)

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



/* Entry: 100682670; end: 10068274b;  */

void FUN_100682670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x000100682638(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100682790();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_1006827c4();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 10068274c; end: 10068278f;  */

void FUN_10068274c(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBOWV_11034d658 + 0x40;
  puStack_18 = puStack_20;
  func_0x000107c61524(param_1,0x100,2,&puStack_20,param_1 + 0x70);
  return;
}



/* Entry: 100682790; end: 1006827c3;  */

void FUN_100682790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 1006827c4; end: 100682a83;  */

undefined * FUN_1006827c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  ppuVar10 = &puStack_90;
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = &UNK_11058b598;
  func_0x000107c613fc(&UNK_11058b598,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar11;
  FUN_1000285a8(0x112ee40b0,&UNK_10db0f1b0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar11);
  puVar2 = &UNK_102a3f30c;
  FUN_1000bdd8c(&UNK_102a3f30c,puVar1);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = &UNK_102a3f414;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_102a3f41c;
  puStack_78 = &UNK_11058b5b0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar9 = puStack_68;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar9);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_70 = &UNK_102a3f410;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_102a3f420;
  puStack_78 = &UNK_11058b5d8;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar9 = puStack_68;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar9);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_70 = &UNK_102a3f31c;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_102a3f424;
  puStack_78 = &UNK_11058b600;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar9 = puStack_68;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar9);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_70 = &UNK_102a3f418;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_102a3f428;
  puStack_78 = &UNK_11058b628;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c3e4fc(puVar9);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar10);
  uVar11 = 0;
  func_0x0001005c4414(0);
  func_0x000107c610f8();
  FUN_100682b48(puVar3,puVar5,puVar7,puVar9,uVar11);
  func_0x000107c61574(puVar2);
  return puVar3;
}



/* Entry: 100682a84; end: 100682ac7;  */

void FUN_100682a84(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100682ac8; end: 100682aff;  */

void FUN_100682ac8(long param_1,long param_2)

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



/* Entry: 100682b00; end: 100682b3b;  */

undefined8 FUN_100682b00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c44350(uVar2);
  func_0x000107c61108(lVar1);
  return uVar2;
}



/* Entry: 100682b3c; end: 100682b47;  */

void FUN_100682b3c(long param_1,long param_2)

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



/* Entry: 100682b48; end: 100682bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100682b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113034728) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113034730) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113034738) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113034740) = param_4;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100682bd4; end: 100682be7; -[SCUploadDataProvider getType] */

undefined8 FUN_100682bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100682be8; end: 100682c53;  */

void FUN_100682be8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  func_0x000100682bdc();
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c4436c();
  func_0x000107c61180();
  func_0x000107c61174();
  if (lVar1 == 0) {
    *unaff_x21 = 0;
    unaff_x21[1] = 0;
  }
  else {
    FUN_100682c80(lVar1);
  }
  func_0x000100683154();
  func_0x000100683154();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 100682c54; end: 100682c57;  */

void FUN_100682c54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100682c58; end: 100682c7f; -[SCUploadDataProvider getUploadInMemoryDataProvider] */

void FUN_100682c58(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100682c80; end: 100682d7b;  */

void FUN_100682c80(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e0298;
    func_0x000107c61158(PTR_PTR_1126e0298);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61174(param_2);
      ppuStack_38 = &PTR_DAT_110ced2e0;
      uStack_40 = param_2;
      FUN_1000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_100683020);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_1000df524(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_100683124(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_100683114();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100682d7c; end: 100682d83;  */

void FUN_100682d7c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100682d84; end: 100682dd7;  */

void FUN_100682d84(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100682dd8; end: 100682ddf;  */

void FUN_100682dd8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  func_0x0001005c2b0c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_100683d38(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_100683dc0();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_100683e40();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 100682de0; end: 100682ec3;  */

void FUN_100682de0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  func_0x0001005c2b0c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_100683d38(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_100683dc0();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_100683e40();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 100682ec4; end: 100682ecb;  */

void FUN_100682ec4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100682ecc; end: 100682f1f;  */

void FUN_100682ecc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100682f20; end: 100682f27;  */

void FUN_100682f20(long *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002884f0();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100682fb4();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar1 = 0;
  FUN_100683804();
  FUN_100683848();
  func_0x000107c61170(uStack_38);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100682f28; end: 100682fb3;  */

void FUN_100682f28(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1002884f0();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100682fb4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar1 = 0;
  FUN_100683804();
  FUN_100683848();
  func_0x000107c61170(uStack_38);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 100682fb4; end: 10068301f;  */

void FUN_100682fb4(undefined8 param_1)

{
  if (lRam0000000112e1d2b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6875d0);
  return;
}



/* Entry: 100683020; end: 100683113;  */

void FUN_100683020(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110ced320;
  puVar1[3] = &PTR_DAT_110ced398;
  puVar2 = puVar5;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar3 = puVar2;
  FUN_1000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_100683114();
    } while (extraout_w10 != 0);
  }
  func_0x000107c61174(puVar5);
  puVar1[6] = puVar5;
  func_0x000107c61108(puVar2);
  func_0x000107c61170(puVar5);
  puVar1[3] = &PTR_DAT_110ced370;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_100683124(&uStack_50);
  return;
}



/* Entry: 100683114; end: 100683123;  */

void FUN_100683114(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100683124; end: 10068314b;  */

long FUN_100683124(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10068314c; end: 10068318b;  */

void FUN_10068314c(void)

{
  return;
}



/* Entry: 10068318c; end: 10068326f;  */

void FUN_10068318c(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined1 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x19;
  undefined8 uVar6;
  
  func_0x000100683178();
  lVar5 = param_5[1];
  uVar6 = *param_5;
  *(undefined8 *)(param_1 + 0x10) = param_5[1];
  *(undefined8 *)(param_1 + 8) = uVar6;
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
  FUN_10054fdd4(unaff_x19 + 0x18,(undefined8 *)(param_1 + 8));
  *(undefined8 *)(unaff_x19 + 0x38) = param_6;
  *(undefined1 *)(unaff_x19 + 0x40) = param_7;
  *(undefined8 *)(unaff_x19 + 0x48) = param_4;
  uVar6 = *param_2;
  *(undefined8 *)(unaff_x19 + 0x58) = param_2[1];
  *(undefined8 *)(unaff_x19 + 0x50) = uVar6;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = param_3;
  pcVar4 = FUN_100684edc;
  FUN_100683334(FUN_100684edc,FUN_100787e98,&UNK_10b2e1e18,FUN_100889b30);
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
  *(code **)(unaff_x19 + 0x68) = pcVar4;
  func_0x000100683364();
  return;
}



/* Entry: 100683270; end: 100683333;  */

undefined8 *
FUN_100683270(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10068318c(param_1,&uStack_40,param_4,param_5,param_6,param_7,0);
  FUN_100683368(&uStack_40);
  *param_1 = &PTR_DAT_110cd35f0;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[0x11] = param_2[1];
  param_1[0x10] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x12] = 0;
  uVar6 = param_8[1];
  uVar5 = *param_8;
  param_1[0x15] = param_8[2];
  param_1[0x14] = uVar6;
  param_1[0x13] = uVar5;
  param_8[1] = 0;
  param_8[2] = 0;
  *param_8 = 0;
  return param_1;
}



/* Entry: 100683334; end: 100683367;  */

void FUN_100683334(undefined8 *param_1)

{
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  
  FUN_10060f4e0();
  *param_1 = &PTR_DAT_110ce98f0;
  param_1[1] = 0;
  param_1[2] = unaff_x22;
  param_1[3] = unaff_x21;
  param_1[4] = unaff_x20;
  param_1[5] = unaff_x19;
  return;
}



/* Entry: 100683368; end: 10068338b;  */

void FUN_100683368(long param_1)

{
  func_0x00010064bbbc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10068338c; end: 100683393;  */

void FUN_10068338c(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000030;
  func_0x00010064bbbc();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100683394; end: 1006833e3;  */

void FUN_100683394(long param_1)

{
  func_0x00010064bbbc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1006833e4; end: 1006833f3;  */

void FUN_1006833e4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



/* Entry: 1006833f4; end: 100683407;  */

void FUN_1006833f4(void)

{
  return;
}



/* Entry: 100683408; end: 100683433;  */

void FUN_100683408(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc_1103462b0)();
  return;
}



/* Entry: 100683434; end: 10068343f;  */

long FUN_100683434(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = unaff_x22 + 0x18;
  uVar1 = *(ulong *)(unaff_x22 + 0x20);
  if (uVar1 < *(ulong *)(unaff_x22 + 0x28)) {
    func_0x0001006837dc();
    lVar2 = uVar1 + 0x30;
  }
  else {
    func_0x000100683484();
  }
  *(long *)(unaff_x22 + 0x20) = lVar2;
  return lVar2 + -0x30;
}



/* Entry: 100683440; end: 100683803;  */

long FUN_100683440(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x18;
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (uVar1 < *(ulong *)(param_1 + 0x28)) {
    func_0x0001006837dc();
    lVar2 = uVar1 + 0x30;
  }
  else {
    func_0x000100683484();
  }
  *(long *)(param_1 + 0x20) = lVar2;
  return lVar2 + -0x30;
}



/* Entry: 100683804; end: 100683847;  */

void FUN_100683804(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1b368 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9108;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e1b368 = puVar1;
  return;
}



/* Entry: 100683848; end: 10068384b;  */

undefined * FUN_100683848(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  FUN_1000285a8(0x112e1d350,&UNK_10d9fe820);
  func_0x000107c613fc();
  pcVar1 = FUN_100684024;
  FUN_1000bdd8c(FUN_100684024,0);
  uVar2 = 0x112e1d358;
  FUN_1000285a8(0x112e1d358,&UNK_10d9fe828);
  puVar3 = &UNK_101cfc868;
  FUN_1000cb480(&UNK_101cfc868,0,uVar2);
  puVar4 = puVar3;
  FUN_1003a5b88();
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110470ed0;
  func_0x000107c613fc(&UNK_110470ed0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar4;
  FUN_1000285a8(0x112e1d360,&UNK_10d9fe830);
  func_0x000107c613fc();
  func_0x000107c61174(puVar4);
  puVar5 = &UNK_101cfc860;
  FUN_1000bdd8c(&UNK_101cfc860,puVar3);
  uVar6 = 0x112e1d368;
  FUN_1000285a8(0x112e1d368,&UNK_10d9fe838);
  pcVar7 = FUN_1006840d0;
  FUN_1000cb480(FUN_1006840d0,0,uVar6);
  pcVar8 = pcVar7;
  FUN_1003a5b88();
  func_0x000107c61574(pcVar7);
  puVar3 = &UNK_101cfc86c;
  FUN_1000cb480(&UNK_101cfc86c,0,uVar2);
  puVar9 = puVar3;
  FUN_1003a5b88();
  func_0x000107c61574(puVar3);
  FUN_1003a5b88();
  puVar10 = PTR_PTR_1126a9108;
  func_0x000107c610f8(PTR_PTR_1126a9108);
  func_0x000107c48c54();
  func_0x000107c61574(pcVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(pcVar8);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar3);
  return puVar10;
}



/* Entry: 10068384c; end: 100683a27;  */

undefined * FUN_10068384c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  FUN_1000285a8(0x112e1d350,&UNK_10d9fe820);
  func_0x000107c613fc();
  pcVar1 = FUN_100684024;
  FUN_1000bdd8c(FUN_100684024,0);
  uVar2 = 0x112e1d358;
  FUN_1000285a8(0x112e1d358,&UNK_10d9fe828);
  puVar3 = &UNK_101cfc868;
  FUN_1000cb480(&UNK_101cfc868,0,uVar2);
  puVar4 = puVar3;
  FUN_1003a5b88();
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110470ed0;
  func_0x000107c613fc(&UNK_110470ed0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar4;
  FUN_1000285a8(0x112e1d360,&UNK_10d9fe830);
  func_0x000107c613fc();
  func_0x000107c61174(puVar4);
  puVar5 = &UNK_101cfc860;
  FUN_1000bdd8c(&UNK_101cfc860,puVar3);
  uVar6 = 0x112e1d368;
  FUN_1000285a8(0x112e1d368,&UNK_10d9fe838);
  pcVar7 = FUN_1006840d0;
  FUN_1000cb480(FUN_1006840d0,0,uVar6);
  pcVar8 = pcVar7;
  FUN_1003a5b88();
  func_0x000107c61574(pcVar7);
  puVar3 = &UNK_101cfc86c;
  FUN_1000cb480(&UNK_101cfc86c,0,uVar2);
  puVar9 = puVar3;
  FUN_1003a5b88();
  func_0x000107c61574(puVar3);
  FUN_1003a5b88();
  puVar10 = PTR_PTR_1126a9108;
  func_0x000107c610f8(PTR_PTR_1126a9108);
  func_0x000107c48c54();
  func_0x000107c61574(pcVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(pcVar8);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar3);
  return puVar10;
}



/* Entry: 100683a28; end: 100683a4b;  */

void FUN_100683a28(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100683a4c; end: 100683b2f;  */

void FUN_100683a4c(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  int extraout_w10;
  long lStack_40;
  long lStack_38;
  undefined8 **ppuStack_30;
  long *plStack_28;
  
  if ((bRam000000011383a778 & 1) == 0) {
    iVar1 = 0x1383a778;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_100667a30(0x11383a750);
      func_0x000107c60e4c(0x11383a778);
    }
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lStack_38 = param_2[1];
    lStack_40 = lVar2;
    if (lStack_38 != 0) {
      do {
        FUN_10011a6d8();
      } while (extraout_w10 != 0);
    }
    FUN_10011a768(0x11383a780);
    if (!(bool)in_ZR) {
      plStack_28 = &lStack_40;
      ppuStack_30 = &plStack_28;
      func_0x00010060f3e0(0x11383a780);
    }
    func_0x00010060f454();
  }
  FUN_100650360(param_1,0x11383a750);
  return;
}



/* Entry: 100683b30; end: 100683c4b;  */

void FUN_100683b30(void)

{
  undefined4 *puVar1;
  int iVar2;
  code *extraout_x9;
  long lVar3;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int iStack_c0;
  char cStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [72];
  
  iVar2 = (int)&ppuStack_f0;
  func_0x00010011a790();
  FUN_10002b838(auStack_90,&UNK_10f742aa0);
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  FUN_10064bd98(auStack_78,auStack_90);
  FUN_100100fec(&uStack_a8);
  func_0x000107c60ca0(auStack_90);
  func_0x00010064bdb8();
  (*extraout_x9)(&uStack_c8);
  if (cStack_b0 == '\x01') {
    ppuStack_f0 = &PTR_DAT_110cf9e98;
    uStack_e8 = 0;
    puStack_d8 = (undefined4 *)0x0;
    uStack_d0 = 0;
    uStack_e0 = 0;
    FUN_10006369c(&ppuStack_f0,uStack_c8,iStack_c0 - (int)uStack_c8);
    if (iVar2 != 0) {
      puVar1 = puStack_d8;
      for (lVar3 = (long)(int)uStack_e0 << 2; lVar3 != 0; lVar3 = lVar3 + -4) {
        func_0x000107c2c760(0x11383a750,*puVar1);
        puVar1 = puVar1 + 1;
      }
    }
    FUN_10068460c(&ppuStack_f0);
  }
  FUN_1002a2294(&uStack_c8);
  FUN_100114924(auStack_78);
  return;
}



/* Entry: 100683c4c; end: 100683c6b;  */

void FUN_100683c4c(void)

{
  func_0x000107c61168(&PTR_PTR_112801b58);
  return;
}



/* Entry: 100683c6c; end: 100683d37; -[SCLensRemoteApiAsyncTaskCompletionAnnouncerServices initWithTaskCompletionAnnouncer:notifier:asyncTaskHandlerFactory:] */

undefined1 *
FUN_100683c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126ff1e0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100683d38; end: 100683dbf;  */

void FUN_100683d38(undefined8 param_1)

{
  if (lRam0000000112ee9060 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7117f0);
  return;
}



/* Entry: 100683dc0; end: 100683e37;  */

void FUN_100683dc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  uVar2 = param_2;
  func_0x000107c3dd34();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return;
}



/* Entry: 100683e38; end: 100683e3f; -[SCLensRemoteApiAsyncTaskCompletionAnnouncerServices announcer] */

undefined8 FUN_100683e38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100683e40; end: 100684023;  */

undefined * FUN_100683e40(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  ppuVar6 = &puStack_70;
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar2;
    func_0x000107c3e280();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar7 != 0) {
      puVar3 = &UNK_110593d20;
      func_0x000107c613fc(&UNK_110593d20,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      pcStack_50 = (code *)&UNK_102aba3fc;
      puStack_70 = puVar1;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_10101bff0;
      puStack_58 = &UNK_110593d60;
      puStack_48 = puVar3;
      func_0x000107c60bc4(&puStack_70);
      puVar3 = puStack_48;
      func_0x000107c61174(lVar7);
      func_0x000107c61574(puVar3);
      lVar2 = lVar7;
      func_0x000107c5c320(lVar7);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar7);
      func_0x000107c3e924(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar3 = &UNK_110593d20;
  func_0x000107c613fc(&UNK_110593d20,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcStack_50 = FUN_1008e38c8;
  puStack_70 = puVar1;
  uStack_68 = 0x42000000;
  puStack_60 = (undefined *)0x1008e3890;
  puStack_58 = &UNK_110593d38;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c3e4fc(puVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  FUN_1005c561c(0);
  func_0x000107c610f8();
  FUN_100684138(puVar5);
  func_0x000107c61170(lVar7);
  return puVar5;
}



/* Entry: 100684024; end: 100684053;  */

void FUN_100684024(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100683c4c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 100684054; end: 1006840cf; -[_TtC47SCLensRemoteApiAsyncTaskCompletionAnnouncerImpl41LensRemoteApiAsyncTaskCompletionAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100684054(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112e1d258;
  uVar3 = 0x112e1d250;
  FUN_1000285a8(0x112e1d250,&UNK_10d9fe770);
  func_0x000107c613fc();
  FUN_1000c2754();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1006840d0; end: 1006840df;  */

void FUN_1006840d0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1006840e0; end: 10068411f; -[_TtC47SCLensRemoteApiAsyncTaskCompletionAnnouncerImpl41LensRemoteApiAsyncTaskCompletionAnnouncer asyncTaskStatusAnnouncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006840e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100684120; end: 100684137;  */

void FUN_100684120(long param_1,long param_2)

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



/* Entry: 100684138; end: 100684183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100684138(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_11307e790) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100684184; end: 10068418f;  */

void FUN_100684184(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100684190; end: 1006841e3;  */

void FUN_100684190(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006841e4; end: 1006841ef;  */

void FUN_1006841e4(void)

{
  long unaff_x20;
  
  FUN_1006841f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1006841f0; end: 100684483;  */

void FUN_1006841f0(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  func_0x0001005c6bc0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  *(undefined8 *)(param_2 + 0x38) = uStack_80;
  *(undefined8 *)(param_2 + 0x40) = uStack_88;
  *(undefined8 *)(param_2 + 0x48) = uStack_90;
  FUN_1000285a8(0x112ed8ef0,&UNK_10db05170);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c6157c(uStack_98);
  FUN_10025a71c();
  puVar8 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar8;
  puVar9 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x20) = puVar9;
  func_0x000100687b70(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174();
  func_0x000107c61174(puVar8);
  uVar10 = uVar7;
  FUN_100687b90(uVar7,uVar2,uVar3,uVar4,uVar5,uVar6,puVar9,puVar8);
  *(undefined8 *)(param_2 + 0x10) = uVar10;
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar9 != (undefined *)0x0) {
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61574(uStack_98);
    *(undefined **)(param_2 + 0x50) = puVar9;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100684484);
  (*pcVar1)();
}



/* Entry: 100684484; end: 10068448b;  */

void FUN_100684484(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10068448c; end: 1006844df;  */

void FUN_10068448c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1006844e0; end: 1006844e7;  */

void FUN_1006844e0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  func_0x0001005c2c2c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100684580();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_100685274();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1006844e8; end: 10068457f;  */

void FUN_1006844e8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  func_0x0001005c2c2c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100684580();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_100685274();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 100684580; end: 1006845eb;  */

void FUN_100684580(undefined8 param_1)

{
  if (lRam0000000112f435a8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e749f08);
  return;
}



/* Entry: 1006845ec; end: 10068460b;  */

void FUN_1006845ec(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10068460c; end: 10068463f;  */

long FUN_10068460c(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_10006805c(param_1 + 0x10);
  return param_1;
}



/* Entry: 100684640; end: 1006846db;  */

long FUN_100684640(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 1006846dc; end: 1006846f7;  */

bool FUN_1006846dc(long param_1)

{
  FUN_100684640();
  return param_1 != 0;
}



/* Entry: 1006846f8; end: 100684edb;  */

void FUN_1006846f8(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x30) = param_2;
  return;
}



/* Entry: 100684edc; end: 100684ef7;  */

void FUN_100684edc(long *param_1)

{
  func_0x000100684ed8();
                    /* WARNING: Could not recover jumptable at 0x000100684ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 100684ef8; end: 100684eff;  */

undefined8 FUN_100684ef8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100684f00; end: 100684f0f;  */

void FUN_100684f00(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100684f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 100684f10; end: 100684f5f;  */

undefined8 FUN_100684f10(long param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  
  FUN_100684f00(*(undefined8 *)(param_1 + 0x80));
  (**(code **)(*uStack_30 + 0x18))();
  func_0x0001006856e0();
  return param_2;
}



/* Entry: 100684f60; end: 100684fc7;  */

void FUN_100684f60(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c41214(uVar2);
  func_0x000107c61180();
  FUN_1006853ac(param_1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 100684fc8; end: 100684fcf;  */

void FUN_100684fc8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_2;
    func_0x000107c303f0(param_2,0x30);
  }
  *puVar1 = &PTR_DAT_110a90cd0;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 100684fd0; end: 10068501b;  */

void FUN_100684fd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x30);
  }
  *puVar1 = &PTR_DAT_110a90cd0;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



/* Entry: 10068501c; end: 10068502b;  */

void FUN_10068501c(void)

{
  return;
}



/* Entry: 10068502c; end: 10068506b;  */

void FUN_10068502c(undefined8 param_1,long param_2)

{
  undefined8 in_register_00005008;
  
  if (param_2 == 0) {
    func_0x00010068506c();
  }
  else {
    func_0x000107c303f0(param_2,0x40);
  }
  func_0x000100685074(&UNK_110a90c20);
  *(undefined8 *)(param_2 + 0x31) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x29) = param_1;
  return;
}



/* Entry: 10068506c; end: 10068508f;  */

void FUN_10068506c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x40);
  return;
}



/* Entry: 100685090; end: 1006850c7;  */

void FUN_100685090(long param_1)

{
  if (param_1 == 0) {
    func_0x0001005ff200();
  }
  else {
    func_0x000108656d7c();
  }
  func_0x0001005ff208(&UNK_110a910e0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1006850c8; end: 1006850cf;  */

void FUN_1006850c8(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    param_2 = 0x18;
    func_0x000107c60e20();
  }
  else {
    func_0x000107c303f0(param_2,0x18);
  }
  *(undefined4 *)(param_2 + 0x10) = 0;
  func_0x0001005ff208(&UNK_110d9ac88);
  return;
}



/* Entry: 1006850d0; end: 100685113;  */

void FUN_1006850d0(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0x18;
    func_0x000107c60e20();
  }
  else {
    func_0x000107c303f0(param_1,0x18);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  func_0x0001005ff208(&UNK_110d9ac88);
  return;
}



/* Entry: 100685114; end: 10068511b;  */

undefined8 * FUN_100685114(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xc8;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_2;
    func_0x000107c303f0(param_2,200);
  }
  *puVar1 = &PTR_DAT_110a92270;
  puVar1[1] = param_2;
  FUN_100685158();
  return puVar1;
}



/* Entry: 10068511c; end: 100685157;  */

undefined8 * FUN_10068511c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0xc8;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,200);
  }
  *puVar1 = &PTR_DAT_110a92270;
  puVar1[1] = param_1;
  FUN_100685158();
  return puVar1;
}



/* Entry: 100685158; end: 100685197;  */

void FUN_100685158(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined **)(param_1 + 0x60) = &DAT_11383d918;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  return;
}



/* Entry: 100685198; end: 1006851c3;  */

undefined8 * FUN_100685198(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_110a92270;
  param_1[1] = param_2;
  FUN_100685158();
  return param_1;
}



/* Entry: 1006851c4; end: 1006851d3;  */

void FUN_1006851c4(void)

{
  return;
}



/* Entry: 1006851d4; end: 10068520b;  */

void FUN_1006851d4(long param_1)

{
  if (param_1 == 0) {
    func_0x0001005ff200();
  }
  else {
    func_0x000108656d7c();
  }
  func_0x0001005ff208(&UNK_110a92170);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10068520c; end: 100685213;  */

void FUN_10068520c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0x30;
    func_0x000107c60e20();
  }
  else {
    lVar1 = param_2;
    func_0x000107c303f0(param_2,0x30);
  }
  FUN_100685260(&UNK_110a92120);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(long *)(lVar1 + 0x20) = param_2;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 100685214; end: 10068525f;  */

void FUN_100685214(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0x30;
    func_0x000107c60e20();
  }
  else {
    lVar1 = param_1;
    func_0x000107c303f0(param_1,0x30);
  }
  FUN_100685260(&UNK_110a92120);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(long *)(lVar1 + 0x20) = param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  return;
}



/* Entry: 100685260; end: 100685273;  */

void FUN_100685260(long param_1,long *param_2)

{
  long unaff_x19;
  
  *param_2 = param_1 + 0x10;
  param_2[1] = unaff_x19;
  return;
}



/* Entry: 100685274; end: 100685363;  */

undefined * FUN_100685274(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  FUN_1000285a8(0x112f434a0,&UNK_10db8fad0);
  func_0x000107c613fc();
  puVar1 = &UNK_10312b0c0;
  FUN_1000bdd8c(&UNK_10312b0c0,0);
  uVar2 = 0x112f434a8;
  FUN_1000285a8(0x112f434a8,&UNK_10db8fad8);
  puVar3 = &UNK_10312b200;
  FUN_1000cb480(&UNK_10312b200,0,uVar2);
  uVar2 = 0x112f434b0;
  FUN_1000285a8(0x112f434b0,&UNK_10db8fae0);
  puVar4 = &UNK_10312b1fc;
  FUN_1000cb480(&UNK_10312b1fc,0,uVar2);
  puVar5 = puVar4;
  FUN_1003a5b88();
  func_0x000107c61574(puVar4);
  FUN_1005c4eb4(0);
  func_0x000107c610f8();
  FUN_1006859c8(puVar3,puVar5);
  func_0x000107c61574(puVar1);
  return puVar3;
}



/* Entry: 100685364; end: 100685383;  */

void FUN_100685364(void)

{
  func_0x000107c61168(&PTR_PTR_1128b9798);
  return;
}



/* Entry: 100685384; end: 1006853ab; -[SCUploadInMemoryDataProvider data] */

void FUN_100685384(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


