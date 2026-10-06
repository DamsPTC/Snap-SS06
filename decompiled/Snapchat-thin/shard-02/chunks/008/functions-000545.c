/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021fb888; end: 1021fb897;  */

undefined1  [16] FUN_1021fb888(void)

{
  return ZEXT816(0x1104e2598);
}



/* Entry: 1021fb898; end: 1021fb93b;  */

void FUN_1021fb898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5aac0,&UNK_10da60520);
  puVar1 = &UNK_1104e2658;
  func_0x000107c613fc(&UNK_1104e2658,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1021fb93c,puVar1);
  return;
}



/* Entry: 1021fb93c; end: 1021fba9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021fb93c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c43a80(uStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_58);
  func_0x000100083b20(&uStack_60);
  uVar2 = uStack_60;
  func_0x000107c43a44(uStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uStack_60);
  func_0x000100083b20(&uStack_68);
  uVar3 = uStack_68;
  func_0x000107c4cdb8(uStack_68);
  func_0x000107c61180();
  func_0x000107c61170(uStack_68);
  puVar4 = PTR_PTR_1126aeea8;
  func_0x000107c610f8(PTR_PTR_1126aeea8);
  func_0x000107c453e4();
  func_0x000100083b20(&lStack_70);
  uVar5 = *(undefined8 *)(lStack_70 + _DAT_113093a98);
  func_0x000107c61174(uVar5);
  func_0x000107c61170(lStack_70);
  puVar6 = PTR_PTR_1126aa1f0;
  func_0x000107c610f8();
  func_0x000107c46a68();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *param_1 = puVar6;
  return;
}



/* Entry: 1021fba9c; end: 1021fbaab;  */

undefined1  [16] FUN_1021fba9c(void)

{
  return ZEXT816(0x1104e2680);
}



/* Entry: 1021fbaac; end: 1021fbc4b;  */

void FUN_1021fbaac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_1104e2728;
  func_0x000107c613fc(&UNK_1104e2728,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1021fbb44,puVar1);
  return;
}



/* Entry: 1021fbc4c; end: 1021fbc5b;  */

undefined1  [16] FUN_1021fbc4c(void)

{
  return ZEXT816(0x1104e2750);
}



/* Entry: 1021fbc5c; end: 1021fbca7;  */

void FUN_1021fbc5c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021fbda4,param_1);
  return;
}



/* Entry: 1021fbca8; end: 1021fbda3;  */

void FUN_1021fbca8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_1021fbe38;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_1104e2830;
  uStack_48 = param_2;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000a0a8c(0);
  puVar4 = puVar2;
  func_0x000100a0dc54(puVar2,0xd00000000000001d,0x800000010da6e590);
  func_0x000107c61170(puVar2);
  *param_1 = puVar4;
  return;
}



/* Entry: 1021fbda4; end: 1021fbdbb;  */

void FUN_1021fbda4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_1021fbe38;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_1104e2830;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x0001000a0a8c(0);
  puVar3 = puVar1;
  func_0x000100a0dc54(puVar1,0xd00000000000001d,0x800000010da6e590);
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1021fbdbc; end: 1021fbe37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021fbdbc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  lVar2 = 0;
  FUN_1021fc1ac();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e642c0) = uVar1;
  lStack_38 = lVar3;
  lStack_30 = lVar2;
  func_0x000107c61154(&lStack_38,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021fbe38; end: 1021fbe5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021fbe38(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  uVar1 = uStack_28;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  lVar2 = 0;
  FUN_1021fc1ac();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e642c0) = uVar1;
  lStack_38 = lVar3;
  lStack_30 = lVar2;
  func_0x000107c61154(&lStack_38,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021fbe5c; end: 1021fbea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021fbe5c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e642c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021fbea8; end: 1021fbed3; +[SCWidgetSuggestionBackgroundJobProcessor jobTypeIdentifier] */

void FUN_1021fbea8(void)

{
  func_0x000107c5fadc(0xd00000000000001d,0x800000010da6e5e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021fbed4; end: 1021fbfcb; -[SCWidgetSuggestionBackgroundJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_1021fbed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4(param_6);
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c60bc4(param_6);
  uVar2 = param_1;
  FUN_1021fc1cc(param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021fbfcc; end: 1021fc02b; -[SCWidgetSuggestionBackgroundJobProcessor init] */

void FUN_1021fbfcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WidgetSuggestionBackgroundJob.WidgetSuggestionBackgroundJobProcessor",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021fbff8);
  (*pcVar1)();
}



/* Entry: 1021fc02c; end: 1021fc03b; -[SCWidgetSuggestionBackgroundJobProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021fc02c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e642c0));
  return;
}



/* Entry: 1021fc03c; end: 1021fc143;  */

undefined1  [16] FUN_1021fc03c(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  iVar1 = (int)&uStack_80;
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0710a0);
  puVar4 = puVar2;
  func_0x000107c4d9bc();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  if (puVar4 == (undefined *)0x0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,puVar4);
    func_0x000107c615e8(puVar4);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    func_0x000107c6147c(&uStack_80,&uStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (iVar1 == 0) {
      uStack_80 = 0;
      uStack_78 = 0;
    }
  }
  auVar5._8_8_ = uStack_78;
  auVar5._0_8_ = uStack_80;
  return auVar5;
}



/* Entry: 1021fc144; end: 1021fc1a7;  */

ulong FUN_1021fc144(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Entry: 1021fc1a8; end: 1021fc1ab;  */

void FUN_1021fc1a8(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (param_1 == 1) {
      uVar1 = 0;
      param_1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  (**(code **)(unaff_x20 + 0x18))(uVar1,param_1);
  return;
}



/* Entry: 1021fc1ac; end: 1021fc1cb;  */

void FUN_1021fc1ac(void)

{
  func_0x000107c61168(&PTR_PTR_11282a180);
  return;
}



/* Entry: 1021fc1cc; end: 1021fc3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1021fc1cc(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  puVar1 = &UNK_1104e2868;
  uVar8 = 0x18;
  func_0x000107c613fc(&UNK_1104e2868,0x18,7);
  *(long *)(puVar1 + 0x10) = param_2;
  uVar9 = *(ulong *)(param_1 + _DAT_112e642c0);
  func_0x000107c60bc4(param_2);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar9 != 0) {
    uVar2 = uVar9;
    func_0x000107c4a744();
    if ((int)uVar2 != 0) {
      uVar2 = uVar9;
      func_0x000107c5e2f8();
      uVar3 = uVar9;
      func_0x000107c5e2f4();
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      FUN_1021fc144(uVar4,uVar8);
      if (((uint)uVar4 & 0xff) == 7 || uVar2 == 0) {
        (**(code **)(param_2 + 0x10))(param_2,0,0);
        func_0x000107c61574(puVar1);
        func_0x000107c615e8(uVar9);
        return 0;
      }
      uVar3 = uVar9;
      func_0x000107c5e2ec(uVar9);
      uVar5 = 0;
      FUN_1021fe2fc(0);
      FUN_1021fc03c();
      uVar6 = 0;
      FUN_1021fd19c(0);
      func_0x000107c613fc();
      func_0x0001021fce8c(uVar5,uVar8,uVar6);
      FUN_1021fd658((double)uVar3);
      puVar7 = &UNK_1104e2890;
      func_0x000107c613fc(&UNK_1104e2890,0x28,7);
      puVar7[0x10] = (char)uVar4;
      *(code **)(puVar7 + 0x18) = FUN_1021fc3d0;
      *(undefined **)(puVar7 + 0x20) = puVar1;
      func_0x000107c6157c(puVar1);
      FUN_1021fd6f8((double)uVar2,uVar4,FUN_1021fc418,puVar7);
      func_0x000107c61574(puVar1);
      func_0x000107c615e8(uVar9);
      func_0x000107c61574(uVar5);
      puVar1 = puVar7;
      goto LAB_1021fc2d8;
    }
    func_0x000107c615e8(uVar9);
  }
  (**(code **)(param_2 + 0x10))(param_2,2,0);
LAB_1021fc2d8:
  func_0x000107c61574(puVar1);
  return 0;
}



/* Entry: 1021fc3d0; end: 1021fc3d7;  */

void FUN_1021fc3d0(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1021fc3d8; end: 1021fc417;  */

void FUN_1021fc3d8(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (param_1 == 1) {
      uVar1 = 0;
      param_1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  (**(code **)(unaff_x20 + 0x18))(uVar1,param_1);
  return;
}



/* Entry: 1021fc418; end: 1021fc41b;  */

void FUN_1021fc418(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (param_1 == 1) {
      uVar1 = 0;
      param_1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  (**(code **)(unaff_x20 + 0x18))(uVar1,param_1);
  return;
}



/* Entry: 1021fc41c; end: 1021fc52f;  */

undefined8 FUN_1021fc41c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_1104e28e0;
  func_0x000107c613fc(&UNK_1104e28e0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,unaff_x20);
  puVar2 = &UNK_1104e2908;
  func_0x000107c613fc(&UNK_1104e2908,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  uVar3 = 3;
  func_0x0001001ca524(3,0,0x78,3,0,0,&UNK_10da6e650,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  return unaff_x20;
}



/* Entry: 1021fc530; end: 1021fc54b;  */

void FUN_1021fc530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021fc54c,0,0);
  return;
}



/* Entry: 1021fc54c; end: 1021fc6bf;  */

void FUN_1021fc54c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x40,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x000100083b20(unaff_x22 + 0x58);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar7 = uVar5;
    func_0x000107c4d7f4(uVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    uVar5 = uVar7;
    func_0x000107c507d0(uVar7);
    func_0x000107c61180();
    func_0x000107c615e8(uVar7);
    puVar2 = &UNK_1104e2990;
    func_0x000107c613fc(&UNK_1104e2990,0x28,7);
    *(long *)(puVar2 + 0x10) = lVar4;
    *(undefined8 *)(puVar2 + 0x18) = uVar6;
    *(undefined8 *)(puVar2 + 0x20) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x1021fc990;
    *(undefined **)(unaff_x22 + 0x38) = puVar2;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1014b8460;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_1104e29a8;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c60bc4(lVar3);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c6157c(lVar4);
    func_0x000107c61174(uVar6);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(uVar7);
    func_0x000107c5dc64(uVar5);
    func_0x000107c61574(lVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c60bd0(lVar3);
    func_0x000107c61170(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001021fc6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1021fc6c0; end: 1021fc737;  */

void FUN_1021fc6c0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1021fcc7c;
  plVar5[0xe] = lVar2;
  plVar5[0xf] = lVar4;
  plVar5[0xc] = lVar1;
  plVar5[0xd] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021fc54c,0,0);
  return;
}



/* Entry: 1021fc738; end: 1021fc773;  */

void FUN_1021fc738(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001021fc770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1021fc774; end: 1021fc947;  */

/* WARNING: Possible PIC construction at 0x0001021fc84c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021fc868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021fc924: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021fc850) */
/* WARNING: Removing unreachable block (ram,0x0001021fc86c) */
/* WARNING: Removing unreachable block (ram,0x0001021fc870) */
/* WARNING: Removing unreachable block (ram,0x0001021fc8b8) */
/* WARNING: Removing unreachable block (ram,0x0001021fc8d8) */
/* WARNING: Removing unreachable block (ram,0x0001021fc87c) */
/* WARNING: Removing unreachable block (ram,0x0001021fc898) */
/* WARNING: Removing unreachable block (ram,0x0001021fc944) */
/* WARNING: Removing unreachable block (ram,0x0001021fc8a4) */
/* WARNING: Removing unreachable block (ram,0x0001021fc928) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021fc774(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if ((param_1 == 0) || ((func_0x000107c3e488(), param_1 != 1 && (param_1 != 4)))) {
    func_0x000100083b20(&uStack_38);
    func_0x000107c4cdb8(uStack_38);
    func_0x000107c61180();
  }
  else {
    lVar1 = *(long *)(param_4 + _DAT_11307e6a8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      return;
    }
    uVar2 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010da6e680);
    func_0x000107c3f4ac(lVar1);
    func_0x000107c615e8(lVar1);
    uStack_38 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_38);
  return;
}



/* Entry: 1021fc948; end: 1021fc9b7;  */

void FUN_1021fc948(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021fc9b8; end: 1021fcbc7;  */

/* WARNING: Possible PIC construction at 0x0001021fcabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021fcb14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021fcb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021fcb9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021fcb90) */
/* WARNING: Removing unreachable block (ram,0x0001021fcb18) */
/* WARNING: Removing unreachable block (ram,0x0001021fcb68) */
/* WARNING: Removing unreachable block (ram,0x0001021fcb88) */
/* WARNING: Removing unreachable block (ram,0x0001021fcac0) */
/* WARNING: Removing unreachable block (ram,0x0001021fcba0) */

void FUN_1021fc9b8(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c610f8(PTR_PTR_1126b7248);
  func_0x000107c453e4();
  func_0x000107c57d34();
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  func_0x000107c57c1c();
  puVar4 = PTR_PTR_1126b7240;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c56a40();
  func_0x000107c5277c(puVar4);
  lVar2 = 0x112e28318;
  func_0x0001000285a8(0x112e28318,&UNK_10da17640);
  func_0x000107c61538();
  if (*(long *)(lVar2 + 0x10) == 0) {
    func_0x000107c6142c(lVar2);
    puVar3 = PTR_PTR_1126b7228;
    func_0x000107c610f8(PTR_PTR_1126b7228);
    func_0x000107c453e4();
    puVar4 = (undefined *)0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010da6e680);
    func_0x000107c5597c(puVar3);
  }
  else {
    if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021fcbc4);
      (*pcVar1)();
    }
    func_0x000107c3de68();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021fcbc8);
      (*pcVar1)();
    }
    func_0x000107c3d93c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1021fcbc8; end: 1021fcc03;  */

void FUN_1021fcbc8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021fcc04; end: 1021fcc7b;  */

void FUN_1021fcc04(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1021fcc80;
  plVar5[0xe] = lVar2;
  plVar5[0xf] = lVar4;
  plVar5[0xc] = lVar1;
  plVar5[0xd] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021fc54c,0,0);
  return;
}



/* Entry: 1021fcc7c; end: 1021fcc93;  */

void FUN_1021fcc7c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001021fc770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1021fcc94; end: 1021fcd7f;  */

void FUN_1021fcc94(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR__OBJC_CLASS___INRelevantShortcutStore_1126aa200;
  func_0x000107c61168(PTR__OBJC_CLASS___INRelevantShortcutStore_1126aa200);
  func_0x000107c41628();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_1021fcd80(0);
  func_0x000107c5fc48(param_1,uVar2);
  puVar4 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ff4e10;
    puStack_58 = &UNK_1104e2a98;
    lStack_50 = param_2;
    uStack_48 = param_3;
    func_0x000107c60bc4(&puStack_70);
    uVar2 = uStack_48;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(uVar2);
    puVar4 = (undefined1 *)ppuVar3;
  }
  func_0x000107c57c8c(puVar1);
  func_0x000107c60bd0(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1021fcd80; end: 1021fcdc3;  */

void FUN_1021fcd80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e64500 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___INRelevantShortcut_1126aa208;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e64500 = puVar1;
  return;
}



/* Entry: 1021fcdc4; end: 1021fcddf;  */

void FUN_1021fcdc4(long param_1,long param_2)

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



/* Entry: 1021fcde0; end: 1021fcf1b;  */

void FUN_1021fcde0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined *puVar1;
  
  func_0x000107c613fc();
  if (param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
    func_0x000107c610f8();
    func_0x000107c61434(param_2);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c48b70();
    func_0x000107c61430(param_2,2);
    func_0x000107c61170(param_1);
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Entry: 1021fcf1c; end: 1021fcfc7;  */

void FUN_1021fcf1c(undefined8 param_1,double param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    uVar1 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010f0711e0);
    func_0x000107c42230(lVar2);
    func_0x000107c61170(uVar1);
    if (0.0 < param_2) {
      func_0x000107c5ee88(param_1,param_2);
      uVar1 = 0;
      goto LAB_1021fcf94;
    }
  }
  uVar1 = 1;
LAB_1021fcf94:
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x0001021fcfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,uVar1,1,lVar2);
  return;
}



/* Entry: 1021fcfc8; end: 1021fd16f;  */

void FUN_1021fcfc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 != 0) {
    func_0x0001009f0578(param_2,puVar4);
    puVar2 = puVar4;
    (**(code **)(lVar7 + 0x30))(puVar4,1,lVar1);
    if ((int)puVar2 == 1) {
      func_0x000107c61174(lVar5);
      func_0x0001000d1dcc(puVar4);
      uVar3 = 0xd00000000000002a;
      func_0x000107c5fadc(0xd00000000000002a,0x800000010f0711e0);
      func_0x000107c4ff88(lVar5);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(lVar5);
    }
    else {
      (**(code **)(lVar7 + 0x20))(lVar6,puVar4,lVar1);
      func_0x000107c61174(lVar5);
      func_0x000107c5ee8c();
      uVar3 = 0xd00000000000002a;
      func_0x000107c5fadc(0xd00000000000002a,0x800000010f0711e0);
      func_0x000107c54294(param_1,lVar5);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(lVar5);
      (**(code **)(lVar7 + 8))(lVar6,lVar1);
    }
  }
  return;
}



/* Entry: 1021fd170; end: 1021fd193;  */

void FUN_1021fd170(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021fd194; end: 1021fd19b;  */

void FUN_1021fd194(undefined8 param_1,double param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    uVar1 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010f0711e0);
    func_0x000107c42230(lVar2);
    func_0x000107c61170(uVar1);
    if (0.0 < param_2) {
      func_0x000107c5ee88(param_1,param_2);
      uVar1 = 0;
      goto LAB_1021fcf94;
    }
  }
  uVar1 = 1;
LAB_1021fcf94:
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x0001021fcfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,uVar1,1,lVar2);
  return;
}



/* Entry: 1021fd19c; end: 1021fd1bb;  */

void FUN_1021fd19c(void)

{
  func_0x000107c61168(&PTR_PTR_112e64548);
  return;
}



/* Entry: 1021fd1bc; end: 1021fd1db;  */

bool FUN_1021fd1bc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1021fd1dc; end: 1021fd2b7;  */

void FUN_1021fd1dc(undefined8 param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  pcVar4 = "com.snapchat.memorieswidget";
  uVar6 = 0xd00000000000001b;
  if (bVar5 != 5) {
    pcVar4 = "com.snapchat.friendLocation";
    uVar6 = 0xd000000000000020;
  }
  uVar1 = 0xd000000000000025;
  pcVar2 = "com.snapchat.pmflockscreenwidget";
  if (bVar5 != 3) {
    uVar1 = 0xd00000000000001b;
    pcVar2 = "com.snapchat.birthdaylockscreenwidget";
  }
  if (bVar5 < 5) {
    pcVar4 = pcVar2 + 0x10;
    uVar6 = uVar1;
  }
  pcVar2 = "com.snapchat.snapcode";
  uVar1 = 0xd000000000000023;
  if (bVar5 != 1) {
    pcVar2 = "eralockscreenwidget";
    uVar1 = 0xd000000000000020;
  }
  pcVar3 = "SCGroupIdentifier";
  uVar7 = 0xd000000000000015;
  if (bVar5 != 0) {
    pcVar3 = pcVar2;
    uVar7 = uVar1;
  }
  if (bVar5 < 3) {
    pcVar4 = pcVar3;
    uVar6 = uVar7;
  }
  func_0x000107c5fb58(param_1,uVar6,(ulong)pcVar4 | 0x8000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)((ulong)pcVar4 | 0x8000000000000000);
  return;
}



/* Entry: 1021fd2b8; end: 1021fd2bf;  */

void FUN_1021fd2b8(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  pcVar4 = "com.snapchat.memorieswidget";
  uVar6 = 0xd00000000000001b;
  if (bVar5 != 5) {
    pcVar4 = "com.snapchat.friendLocation";
    uVar6 = 0xd000000000000020;
  }
  uVar1 = 0xd000000000000025;
  pcVar2 = "com.snapchat.pmflockscreenwidget";
  if (bVar5 != 3) {
    uVar1 = 0xd00000000000001b;
    pcVar2 = "com.snapchat.birthdaylockscreenwidget";
  }
  if (bVar5 < 5) {
    pcVar4 = pcVar2 + 0x10;
    uVar6 = uVar1;
  }
  pcVar2 = "com.snapchat.snapcode";
  uVar1 = 0xd000000000000023;
  if (bVar5 != 1) {
    pcVar2 = "eralockscreenwidget";
    uVar1 = 0xd000000000000020;
  }
  pcVar3 = "SCGroupIdentifier";
  uVar7 = 0xd000000000000015;
  if (bVar5 != 0) {
    pcVar3 = pcVar2;
    uVar7 = uVar1;
  }
  if (bVar5 < 3) {
    pcVar4 = pcVar3;
    uVar6 = uVar7;
  }
  func_0x000107c5fb58(auStack_68,uVar6,(ulong)pcVar4 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar4 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 1021fd2c0; end: 1021fd3eb;  */

void FUN_1021fd2c0(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  pcVar4 = "com.snapchat.memorieswidget";
  uVar5 = 0xd00000000000001b;
  if (param_2 != 5) {
    pcVar4 = "com.snapchat.friendLocation";
    uVar5 = 0xd000000000000020;
  }
  uVar1 = 0xd000000000000025;
  pcVar2 = "com.snapchat.pmflockscreenwidget";
  if (param_2 != 3) {
    uVar1 = 0xd00000000000001b;
    pcVar2 = "com.snapchat.birthdaylockscreenwidget";
  }
  if (param_2 < 5) {
    pcVar4 = pcVar2 + 0x10;
    uVar5 = uVar1;
  }
  pcVar2 = "com.snapchat.snapcode";
  uVar1 = 0xd000000000000023;
  if (param_2 != 1) {
    pcVar2 = "eralockscreenwidget";
    uVar1 = 0xd000000000000020;
  }
  pcVar3 = "SCGroupIdentifier";
  uVar6 = 0xd000000000000015;
  if (param_2 != 0) {
    pcVar3 = pcVar2;
    uVar6 = uVar1;
  }
  if (param_2 < 3) {
    pcVar4 = pcVar3;
    uVar5 = uVar6;
  }
  func_0x000107c5fb58(auStack_68,uVar5,(ulong)pcVar4 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar4 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 1021fd3ec; end: 1021fd4b3;  */

void FUN_1021fd3ec(undefined8 *param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  pcVar4 = "com.snapchat.memorieswidget";
  uVar6 = 0xd00000000000001b;
  if (bVar5 != 5) {
    pcVar4 = "com.snapchat.friendLocation";
    uVar6 = 0xd000000000000020;
  }
  uVar1 = 0xd000000000000025;
  pcVar2 = "com.snapchat.pmflockscreenwidget";
  if (bVar5 != 3) {
    uVar1 = 0xd00000000000001b;
    pcVar2 = "com.snapchat.birthdaylockscreenwidget";
  }
  if (bVar5 < 5) {
    pcVar4 = pcVar2 + 0x10;
    uVar6 = uVar1;
  }
  pcVar2 = "com.snapchat.snapcode";
  uVar1 = 0xd000000000000023;
  if (bVar5 != 1) {
    pcVar2 = "eralockscreenwidget";
    uVar1 = 0xd000000000000020;
  }
  pcVar3 = "SCGroupIdentifier";
  uVar7 = 0xd000000000000015;
  if (bVar5 != 0) {
    pcVar3 = pcVar2;
    uVar7 = uVar1;
  }
  if (bVar5 < 3) {
    pcVar4 = pcVar3;
    uVar6 = uVar7;
  }
  *param_1 = uVar6;
  param_1[1] = (ulong)pcVar4 | 0x8000000000000000;
  return;
}



/* Entry: 1021fd4b4; end: 1021fd4f3;  */

void FUN_1021fd4b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e645a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6e870;
  func_0x000107c61520(&UNK_10da6e870,&UNK_1104e2b58);
  puRam0000000112e645a8 = puVar1;
  return;
}



/* Entry: 1021fd4f4; end: 1021fd657;  */

int FUN_1021fd4f4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1021fd570;
        goto LAB_1021fd554;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1021fd554:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_1021fd570:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1021fd658; end: 1021fd6f3;  */

long FUN_1021fd658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined *puStack_60;
  undefined **ppuStack_58;
  
  puStack_60 = &UNK_1104e2a78;
  ppuStack_58 = &PTR_DAT_1104e2a88;
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_78,&UNK_1104e2a78);
  *(undefined **)(unaff_x20 + 0x40) = &UNK_1104e2a78;
  *(undefined ***)(unaff_x20 + 0x48) = &PTR_DAT_1104e2a88;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(code **)(unaff_x20 + 0x50) = FUN_1021fd6f4;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  func_0x0001000834e4(auStack_78);
  return unaff_x20;
}



/* Entry: 1021fd6f4; end: 1021fd6f7;  */

void FUN_1021fd6f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb5210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation4DateVACycfC_110350bb0)();
  return;
}



/* Entry: 1021fd6f8; end: 1021fd88b;  */

void FUN_1021fd6f8(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long extraout_x12;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)&uStack_80 - (lVar7 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar4 = lVar5 - extraout_x12;
  (**(code **)(unaff_x20 + 0x50))(uVar4);
  uVar3 = uVar4;
  FUN_1021fd88c();
  if ((uVar3 & 1) == 0) {
    if (param_3 != (code *)0x0) {
      (*param_3)(1);
    }
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x18);
    (**(code **)(lVar8 + 0x10))(lVar5,uVar4,lVar1);
    uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
    uVar6 = uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff);
    puVar2 = &UNK_1104e2bd0;
    func_0x000107c613fc(&UNK_1104e2bd0,uVar6 + lVar7,uVar3 | 7);
    *(code **)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined8 *)(puVar2 + 0x20) = uVar9;
    *(undefined8 *)(puVar2 + 0x30) = uStack_78;
    *(undefined8 *)(puVar2 + 0x28) = uStack_80;
    (**(code **)(lVar8 + 0x20))(puVar2 + uVar6,lVar5,lVar1);
    FUN_1021fe0e0(param_3,param_4);
    func_0x000107c615f0(uStack_80);
    FUN_1021fdc2c(param_1,param_2,uVar4,FUN_1021fdb38,puVar2);
    func_0x000107c61574(puVar2);
  }
  (**(code **)(lVar8 + 8))(uVar4,lVar1);
  return;
}



/* Entry: 1021fd88c; end: 1021fd9db;  */

bool FUN_1021fd88c(double param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  dVar7 = *(double *)(unaff_x20 + 0x10);
  if (0.0 < dVar7) {
    lVar1 = *(long *)(unaff_x20 + 0x20);
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x18));
    (**(code **)(lVar1 + 8))(puVar4);
    puVar3 = puVar4;
    (**(code **)(lVar6 + 0x30))(puVar4,1,lVar2);
    if ((int)puVar3 != 1) {
      (**(code **)(lVar6 + 0x20))(lVar5,puVar4,lVar2);
      func_0x000107c5ee68(lVar5);
      (**(code **)(lVar6 + 8))(lVar5,lVar2);
      if (param_1 < dVar7) {
        return param_1 < 0.0;
      }
      return true;
    }
    func_0x0001000d1dcc(puVar4);
  }
  return true;
}



/* Entry: 1021fd9dc; end: 1021fdb37;  */

void FUN_1021fd9dc(double param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffff90 + -extraout_x8;
  if (param_2 == 0) {
    if (0.0 < param_1) {
      func_0x000107c614f0(param_5);
      lVar1 = 0;
      func_0x000107c5eea4();
      lVar3 = *(long *)(lVar1 + -8);
      (**(code **)(lVar3 + 0x10))(puVar2,param_7,lVar1);
      (**(code **)(lVar3 + 0x38))(puVar2,0,1,lVar1);
      (**(code **)(param_6 + 0x10))(puVar2,param_5,param_6);
      func_0x0001000d1dcc(puVar2);
    }
    if (param_3 != (code *)0x0) {
      (*param_3)(0);
    }
  }
  else if (param_3 != (code *)0x0) {
    func_0x000107c614b0(param_2);
    (*param_3)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  return;
}



/* Entry: 1021fdb38; end: 1021fdb7f;  */

void FUN_1021fdb38(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  double dVar8;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  dVar8 = *(double *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0,*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffff90 + -extraout_x8;
  if (param_1 == 0) {
    if (0.0 < dVar8) {
      func_0x000107c614f0(uVar3);
      lVar4 = 0;
      func_0x000107c5eea4();
      lVar7 = *(long *)(lVar4 + -8);
      (**(code **)(lVar7 + 0x10))
                (puVar6,unaff_x20 + (uVar5 + 0x38 & (uVar5 ^ 0xffffffffffffffff)),lVar4);
      (**(code **)(lVar7 + 0x38))(puVar6,0,1,lVar4);
      (**(code **)(lVar2 + 0x10))(puVar6,uVar3,lVar2);
      func_0x0001000d1dcc(puVar6);
    }
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(0);
    }
  }
  else if (pcVar1 != (code *)0x0) {
    func_0x000107c614b0(param_1);
    (*pcVar1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
    return;
  }
  return;
}



/* Entry: 1021fdb80; end: 1021fdbb3;  */

void FUN_1021fdb80(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021fdbb4; end: 1021fdc2b;  */

void FUN_1021fdbb4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1021fe31c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1021fdc2c; end: 1021fe0df;  */

void FUN_1021fdc2c(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  char **ppcVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  undefined1 *puVar20;
  undefined1 auStack_e0 [8];
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar10 = 0x112d373d8;
  uStack_90 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  puStack_88 = auStack_e0 + -extraout_x8;
  func_0x000107c5f228();
  lStack_a8 = *(long *)(lVar10 + -8);
  lStack_a0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar10 = (long)(auStack_e0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar11 = PTR__OBJC_CLASS___NSUserActivity_1126b27c0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSUserActivity_1126b27c0);
  uVar18 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f071210);
  func_0x000107c45560(puVar11);
  func_0x000107c61170(uVar18);
  func_0x000107c54434(puVar11);
  uVar18 = 0xd000000000000020;
  uVar12 = 0xd00000000000001b;
  if (param_2 != 5) {
    uVar12 = uVar18;
  }
  pcStack_c8 = "com.snapchat.friendLocation";
  pcStack_c0 = "com.snapchat.memorieswidget";
  pcVar5 = "com.snapchat.memorieswidget";
  if (param_2 != 5) {
    pcVar5 = "com.snapchat.friendLocation";
  }
  uVar1 = 0xd000000000000025;
  uVar2 = uVar1;
  if (param_2 != 3) {
    uVar2 = 0xd00000000000001b;
  }
  pcStack_d8 = "thdaylockscreenwidget";
  pcStack_d0 = "lockscreenwidget";
  pcVar3 = "com.snapchat.pmflockscreenwidget";
  if (param_2 != 3) {
    pcVar3 = "com.snapchat.birthdaylockscreenwidget";
  }
  if (param_2 < 5) {
    pcVar5 = pcVar3 + 0x10;
    uVar12 = uVar2;
  }
  pcVar3 = "com.snapchat.snapcode";
  uVar2 = 0xd000000000000023;
  if (param_2 != 1) {
    pcVar3 = "eralockscreenwidget";
    uVar2 = uVar18;
  }
  pcStack_b8 = "SCGroupIdentifier";
  uStack_b0 = 0xd000000000000015;
  pcVar4 = "SCGroupIdentifier";
  uVar8 = 0xd000000000000015;
  if (param_2 != 0) {
    pcVar4 = pcVar3;
    uVar8 = uVar2;
  }
  if (param_2 < 3) {
    pcVar5 = pcVar4;
    uVar12 = uVar8;
  }
  func_0x000107c5fadc(uVar12,(ulong)pcVar5 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar5 | 0x8000000000000000);
  func_0x000107c57330(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(puVar11);
  func_0x000107c5f220(lVar10);
  puVar13 = PTR__OBJC_CLASS___INRelevantShortcut_1126aa208;
  func_0x000107c610f8();
  puVar14 = puVar13;
  func_0x000107c5f224();
  func_0x000107c48690();
  func_0x000107c61170(puVar14);
  (**(code **)(lStack_a8 + 8))(lVar10,lStack_a0);
  ppcVar6 = &pcStack_c0;
  uVar12 = 0xd00000000000001b;
  if (param_2 != 5) {
    ppcVar6 = &pcStack_c8;
    uVar12 = uVar18;
  }
  ppcVar7 = &pcStack_d0;
  if (param_2 != 3) {
    uVar1 = 0xd00000000000001b;
    ppcVar7 = &pcStack_d8;
  }
  pcVar5 = *ppcVar6;
  if (param_2 < 5) {
    pcVar5 = *ppcVar7;
    uVar12 = uVar1;
  }
  pcVar3 = "com.snapchat.snapcode";
  uVar1 = 0xd000000000000023;
  if (param_2 != 1) {
    pcVar3 = "eralockscreenwidget";
    uVar1 = uVar18;
  }
  pcVar4 = pcStack_b8;
  uVar18 = uStack_b0;
  if (param_2 != 0) {
    pcVar4 = pcVar3;
    uVar18 = uVar1;
  }
  if (param_2 < 3) {
    pcVar5 = pcVar4;
    uVar12 = uVar18;
  }
  func_0x000107c5fadc(uVar12,(ulong)pcVar5 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar5 | 0x8000000000000000);
  func_0x000107c5a710(puVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c59124(puVar13);
  lVar10 = 0x112e64668;
  FUN_1021fdbb4(0x112e64668,&PTR__OBJC_CLASS___INRelevanceProvider_1126aa218,0x112e64678,
                &UNK_10da6e9a0);
  func_0x000107c613fc();
  puVar9 = puStack_88;
  uStack_98 = 3;
  lStack_a0 = 1;
  *(undefined8 *)(lVar10 + 0x18) = 3;
  *(undefined8 *)(lVar10 + 0x10) = 1;
  func_0x000107c5ee6c(puStack_88,param_1);
  lVar15 = 0;
  func_0x000107c5eea4();
  lVar19 = *(long *)(lVar15 + -8);
  puVar16 = puVar9;
  (**(code **)(lVar19 + 0x38))(puVar9,0,1,lVar15);
  func_0x000107c5ee70();
  puVar17 = puVar9;
  (**(code **)(lVar19 + 0x30))(puVar9,1,lVar15);
  puVar20 = (undefined1 *)0x0;
  if ((int)puVar17 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar19 + 8))(puVar9,lVar15);
    puVar20 = puVar17;
  }
  puVar14 = PTR__OBJC_CLASS___INDateRelevanceProvider_1126aa210;
  func_0x000107c610f8();
  func_0x000107c4897c();
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar20);
  *(undefined **)(lVar10 + 0x20) = puVar14;
  uVar18 = 0;
  FUN_1021fe31c(0,0x112e64668,&PTR__OBJC_CLASS___INRelevanceProvider_1126aa218);
  lVar15 = lVar10;
  func_0x000107c5fc48(lVar10,uVar18);
  func_0x000107c61574(lVar10);
  func_0x000107c57c88(puVar13);
  func_0x000107c61170(lVar15);
  lVar10 = 0x112e64500;
  FUN_1021fdbb4(0x112e64500,&PTR__OBJC_CLASS___INRelevantShortcut_1126aa208,0x112e64670,
                &UNK_10da6e990);
  func_0x000107c613fc();
  *(undefined8 *)(lVar10 + 0x18) = uStack_98;
  *(long *)(lVar10 + 0x10) = lStack_a0;
  *(undefined **)(lVar10 + 0x20) = puVar13;
  func_0x000107c61174(puVar13);
  FUN_1021fcc94(lVar10,uStack_80,uStack_78);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar13);
  func_0x000107c61574(lVar10);
  return;
}



/* Entry: 1021fe0e0; end: 1021fe107;  */

void FUN_1021fe0e0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1021fe108; end: 1021fe1ff;  */

ulong * FUN_1021fe108(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (0xfffffffe < uVar2) {
      func_0x000107c614b0(uVar2);
    }
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    func_0x000107c614ac();
    *param_1 = *param_2;
  }
  else {
    func_0x000107c614b0(uVar2);
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x000107c614ac(uVar1);
  }
  return param_1;
}



/* Entry: 1021fe200; end: 1021fe2fb;  */

int FUN_1021fe200(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 1021fe2fc; end: 1021fe31b;  */

void FUN_1021fe2fc(void)

{
  func_0x000107c61168(&PTR_PTR_112e645f0);
  return;
}



/* Entry: 1021fe31c; end: 1021fe35b;  */

void FUN_1021fe31c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1021fe35c; end: 1021fe363;  */

void FUN_1021fe35c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    func_0x000107c614b0(uVar1);
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1021fe364; end: 1021fe3b7;  */

void FUN_1021fe364(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1021fed4c();
  func_0x000107c610f8();
  func_0x000107c6157c();
  FUN_1021fe3f0();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1104e2d20;
  *param_1 = param_2;
  return;
}



/* Entry: 1021fe3b8; end: 1021fe3bf;  */

void FUN_1021fe3b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  uVar1 = unaff_x20;
  FUN_1021fed4c();
  func_0x000107c610f8();
  func_0x000107c6157c();
  FUN_1021fe3f0();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1104e2d20;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1021fe3c0; end: 1021fe3ef;  */

void FUN_1021fe3c0(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_1021fe3f0(param_1);
  return;
}



/* Entry: 1021fe3f0; end: 1021fe57f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021fe3f0(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  long *aplStack_88 [7];
  
  func_0x000107c614f0();
  *(undefined **)(unaff_x20 + _DAT_112e64688) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + _DAT_112e64690) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e64698);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar3 = &stack0xffffffffffffff68;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000100083b20(aplStack_88);
  plVar2 = aplStack_88[0];
  lVar4 = *(long *)((long)aplStack_88[0] + _DAT_112f52cf8);
  func_0x000107c61174();
  func_0x000107c61170(plVar2);
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 != 0) {
    func_0x000107c4fc6c(lVar5);
    func_0x000107c615e8(lVar5);
  }
  func_0x000102c038d4(0);
  func_0x000102c033fc(aplStack_88);
  func_0x000107c6157c(aplStack_88[0]);
  FUN_1021fe580(aplStack_88);
  puVar6 = &UNK_1104e2d08;
  func_0x000107c613fc(&UNK_1104e2d08,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,puVar3);
  pcVar7 = FUN_1021fe6d8;
  puVar9 = puVar6;
  (**(code **)(*aplStack_88[0] + 0x60))();
  func_0x000107c61574(aplStack_88[0]);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(param_1);
  puVar1 = (undefined8 *)(puVar3 + _DAT_112e64698);
  uVar8 = *puVar1;
  *puVar1 = pcVar7;
  puVar1[1] = puVar9;
  func_0x000107c615e8(uVar8);
  return puVar3;
}



/* Entry: 1021fe580; end: 1021fe5c7;  */

undefined8 FUN_1021fe580(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d7ecb8;
  func_0x0001000285a8(0x112d7ecb8,&UNK_10d93cd58);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1021fe5c8; end: 1021fe6d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021fe5c8(char *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      if (*(char *)(param_2 + _DAT_112e64690) != '\x01') {
        *(undefined1 *)(param_2 + _DAT_112e64690) = 1;
      }
      func_0x000107c61170();
    }
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + _DAT_112e64690) == '\x01') {
        *(undefined1 *)(lVar1 + _DAT_112e64690) = 0;
      }
      func_0x000107c61170();
    }
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    lVar1 = _DAT_112e64688;
    if (param_2 != 0) {
      func_0x000107c61428(param_2 + _DAT_112e64688,auStack_78,1,0);
      uVar2 = *(undefined8 *)(param_2 + lVar1);
      *(undefined **)(param_2 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar2);
    }
  }
  return;
}



/* Entry: 1021fe6d8; end: 1021fe6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021fe6d8(char *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + _DAT_112e64690) != '\x01') {
        *(undefined1 *)(lVar2 + _DAT_112e64690) = 1;
      }
      func_0x000107c61170();
    }
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + _DAT_112e64690) == '\x01') {
        *(undefined1 *)(lVar2 + _DAT_112e64690) = 0;
      }
      func_0x000107c61170();
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61618();
    lVar1 = _DAT_112e64688;
    if (lVar2 != 0) {
      func_0x000107c61428(lVar2 + _DAT_112e64688,auStack_78,1,0);
      uVar3 = *(undefined8 *)(lVar2 + lVar1);
      *(undefined **)(lVar2 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61170(lVar2);
      func_0x000107c6142c(uVar3);
    }
  }
  return;
}



/* Entry: 1021fe6e0; end: 1021fe6f3; -[_TtC17BlizzardInspector31BlizzardInspectorEventCollector observeBlizzardEventWithProperties:] */

void FUN_1021fe6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  func_0x000107c61174(param_1);
  FUN_1021fe6f4(param_3,0x6472617a7a696c62);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1021fe6f4; end: 1021fe8ff;  */

/* WARNING: Possible PIC construction at 0x0001021fe778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021fe7a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021fe77c) */
/* WARNING: Removing unreachable block (ram,0x0001021fe880) */
/* WARNING: Removing unreachable block (ram,0x0001021fe798) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Removing unreachable block (ram,0x0001021fe7ac) */
/* WARNING: Removing unreachable block (ram,0x0001021fe7b4) */
/* WARNING: Removing unreachable block (ram,0x0001021fe8a0) */
/* WARNING: Removing unreachable block (ram,0x0001021fe7f4) */
/* WARNING: Removing unreachable block (ram,0x0001021fe8c4) */
/* WARNING: Removing unreachable block (ram,0x0001021fe808) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021fe6f4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  if ((*(char *)(unaff_x20 + _DAT_112e64690) == '\x01') && (*(long *)(param_1 + 0x10) != 0)) {
    func_0x000107c61434(param_1);
    lVar1 = 0x616e5f746e657665;
    uVar2 = 0xea0000000000656d;
    func_0x000100029284();
    if ((uVar2 & 1) != 0) {
      func_0x000107c61174(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar1 * 8));
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
    return;
  }
  return;
}



/* Entry: 1021fe900; end: 1021fe913; -[_TtC17BlizzardInspector31BlizzardInspectorEventCollector observeSpectrumDecodedEventWithProperties:] */

void FUN_1021fe900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  func_0x000107c61174(param_1);
  FUN_1021fe6f4(param_3,0x6d75727463657073);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1021fe914; end: 1021fe98b;  */

void FUN_1021fe914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001007bbbf8(0);
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  func_0x000107c61174(param_1);
  FUN_1021fe6f4(param_3,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1021fe98c; end: 1021fe9eb; -[_TtC17BlizzardInspector31BlizzardInspectorEventCollector init] */

void FUN_1021fe98c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BlizzardInspector.BlizzardInspectorEventCollector",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021fe9b8);
  (*pcVar1)();
}



/* Entry: 1021fe9ec; end: 1021fea6b; -[_TtC17BlizzardInspector31BlizzardInspectorEventCollector .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021fe9ec(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e64688));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e64698));
  return;
}



/* Entry: 1021fea6c; end: 1021feaab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021fea6c(void)

{
  long *unaff_x20;
  
  if ((*(byte *)(*unaff_x20 + _DAT_112e64690) & 1) == 0) {
    *(undefined1 *)(*unaff_x20 + _DAT_112e64690) = 1;
  }
  return;
}



/* Entry: 1021feaac; end: 1021feaff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021feaac(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e64688;
  lVar3 = *unaff_x20;
  func_0x000107c61428(lVar3 + _DAT_112e64688,auStack_38,1,0);
  uVar2 = *(undefined8 *)(lVar3 + lVar1);
  *(undefined **)(lVar3 + lVar1) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 1021feb00; end: 1021fed3b;  */

undefined * FUN_1021feb00(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021fec18);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112e646d0;
    func_0x0001000285a8(0x112e646d0,&UNK_10da6ea48);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1104e2e90);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 1021fed3c; end: 1021fed4b;  */

undefined1  [16] FUN_1021fed3c(void)

{
  return ZEXT816(0x1104e2d58);
}



/* Entry: 1021fed4c; end: 1021fed6b;  */

void FUN_1021fed4c(void)

{
  func_0x000107c61168(&PTR_PTR_11282a240);
  return;
}



/* Entry: 1021fed6c; end: 1021fed97;  */

undefined1  [16] FUN_1021fed6c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1021fed98; end: 1021fedb3;  */

void FUN_1021fed98(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 1021fedb4; end: 1021fee03;  */

void FUN_1021fedb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102201298();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1021fee04; end: 1021ff183;  */

void FUN_1021fee04(long param_1,long param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x21;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar14 = 0x112e64720;
  func_0x0001000285a8(0x112e64720,&UNK_10da6ec40);
  lVar13 = *(long *)(lVar14 + -8);
  lStack_d8 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_d0 = auStack_f0 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x000107c606e8(auStack_88,uVar1,uVar2);
  if (param_4 == '\0') {
    func_0x0001000c6518(auStack_88,uStack_70);
    func_0x000107c605e4(param_2,param_3,uStack_70,uStack_68);
  }
  else if (param_4 == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_e8 = lVar13;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102201298();
    func_0x000107c61434(param_2);
    func_0x000107c606ec(puStack_d0,&UNK_1104e2f98,&UNK_1104e2f98,param_1,uVar1,uVar2);
    lVar14 = 0;
    uVar11 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar12 = 0xffffffffffffffff;
    if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
      uVar12 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar12 = uVar12 & *(ulong *)(param_2 + 0x40);
    lStack_e0 = param_2;
    while( true ) {
      while (uVar12 == 0) {
        bVar6 = SCARRY8(lVar14,1);
        lVar14 = lVar14 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1021ff184);
          (*pcVar5)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar14) {
          func_0x000107c61574(lStack_e0);
          (**(code **)(lStack_e8 + 8))(puStack_d0,lStack_d8);
          goto LAB_1021ff120;
        }
        uVar12 = ((ulong *)(param_2 + 0x40))[lVar14];
      }
      uVar9 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar14 << 6;
      puVar10 = (undefined8 *)(*(long *)(lStack_e0 + 0x30) + uVar9 * 0x10);
      uStack_c8 = *puVar10;
      uVar2 = puVar10[1];
      puVar10 = (undefined8 *)(*(long *)(lStack_e0 + 0x38) + uVar9 * 0x18);
      uVar1 = *puVar10;
      uVar3 = puVar10[1];
      uVar4 = *(undefined1 *)(puVar10 + 2);
      uStack_c0 = uVar2;
      uStack_b0 = uVar1;
      uStack_a8 = uVar3;
      uStack_a0 = uVar4;
      func_0x000107c61434(uVar2);
      uVar7 = uVar1;
      func_0x00010220055c(uVar1,uVar3,uVar4);
      FUN_102200204();
      func_0x000107c60554(&uStack_b0,&uStack_c8,lStack_d8,&UNK_1104e2e90,uVar7);
      if (unaff_x21 != 0) break;
      uVar12 = uVar12 - 1 & uVar12;
      func_0x000107c6142c(uVar2);
      func_0x000102200598(uVar1,uVar3,uVar4);
    }
    func_0x000107c61574(lStack_e0);
    (**(code **)(lStack_e8 + 8))(puStack_d0,lStack_d8);
    func_0x000107c6142c(uVar2);
    func_0x000102200598(uVar1,uVar3,uVar4);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar1);
    func_0x000107c606e4(&uStack_b0,uVar1,uVar2);
    lVar14 = *(long *)(param_2 + 0x10);
    if (lVar14 != 0) {
      puVar15 = (undefined1 *)(param_2 + 0x30);
      do {
        uVar7 = uStack_90;
        uVar3 = uStack_98;
        uVar1 = *(undefined8 *)(puVar15 + -0x10);
        uVar2 = *(undefined8 *)(puVar15 + -8);
        uVar4 = *puVar15;
        uStack_c8 = uVar1;
        uStack_c0 = uVar2;
        uStack_b8 = uVar4;
        func_0x0001000c6518(&uStack_b0,uStack_98);
        uVar8 = uVar1;
        func_0x00010220055c(uVar1,uVar2,uVar4);
        FUN_102200204();
        func_0x000107c6059c(&uStack_c8,&UNK_1104e2e90,uVar8,uVar3,uVar7);
        if (unaff_x21 != 0) {
          func_0x000102200598(uVar1,uVar2,uVar4);
          break;
        }
        func_0x000102200598(uVar1,uVar2,uVar4);
        lVar14 = lVar14 + -1;
        puVar15 = puVar15 + 0x18;
      } while (lVar14 != 0);
    }
    FUN_102201318(&uStack_b0);
  }
LAB_1021ff120:
  FUN_102201318(auStack_88);
  return;
}



/* Entry: 1021ff184; end: 1021ff19f;  */

void FUN_1021ff184(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1021fee04(param_1,*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Entry: 1021ff1a0; end: 1021ffdd3;  */

undefined8 ****** FUN_1021ff1a0(long param_1)

{
  undefined8 ******ppppppuVar1;
  undefined8 ******ppppppuVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined1 uVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *****pppppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *****pppppuVar18;
  undefined *puVar19;
  undefined8 ****ppppuVar20;
  undefined8 ****ppppuVar21;
  undefined8 ******ppppppuVar22;
  ulong uVar23;
  undefined8 ******ppppppuVar24;
  undefined8 *****pppppuVar25;
  ulong uVar26;
  undefined8 ******ppppppuVar27;
  undefined8 *****pppppuVar28;
  undefined8 ****ppppuVar29;
  undefined8 *****pppppuVar30;
  long lVar31;
  ulong uVar32;
  undefined8 *****pppppuStack_c0;
  undefined8 uStack_b0;
  undefined8 *****apppppuStack_a8 [4];
  undefined8 *****apppppuStack_88 [5];
  
  uVar26 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar32 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar32 = ~(-1L << (uVar26 & 0x3f));
  }
  uVar32 = uVar32 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  lVar31 = 0;
  pppppuStack_c0 = (undefined8 *****)PTR___swiftEmptyDictionarySingleton_11034f1d0;
joined_r0x0001021ff218:
  do {
    while( true ) {
      while (uVar32 == 0) {
        bVar8 = SCARRY8(lVar31,1);
        lVar31 = lVar31 + 1;
        if (bVar8) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1021ffd98);
          (*pcVar7)();
        }
        if ((long)(uVar26 + 0x3f >> 6) <= lVar31) {
          func_0x000107c61574(param_1);
          return (undefined8 ******)pppppuStack_c0;
        }
        uVar32 = ((ulong *)(param_1 + 0x40))[lVar31];
      }
      uVar23 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
      uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
      uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
      uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
      uVar32 = uVar32 - 1 & uVar32;
      uVar23 = LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) | lVar31 << 6;
      puVar14 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar23 * 0x10);
      ppppuVar4 = (undefined8 ****)*puVar14;
      ppppuVar5 = (undefined8 ****)puVar14[1];
      ppppuVar29 = *(undefined8 *****)(*(long *)(param_1 + 0x38) + uVar23 * 8);
      ppppuVar9 = (undefined8 ****)PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c61168();
      ppppuVar10 = ppppuVar29;
      func_0x000107c6148c();
      if (ppppuVar10 == (undefined8 ****)0x0) break;
      func_0x000107c61434(ppppuVar5);
      func_0x000107c61174();
      func_0x000107c417f0();
      func_0x000107c61180();
      ppppuVar11 = ppppuVar10;
      func_0x000107c5faec();
      func_0x000107c61170(ppppuVar10);
      ppppppuVar12 = (undefined8 ******)pppppuStack_c0;
      func_0x000107c61558();
      apppppuStack_88[0] = pppppuStack_c0;
      ppppuVar10 = ppppuVar4;
      ppppuVar20 = ppppuVar5;
      func_0x000100029284();
      uVar23 = (ulong)~(uint)ppppuVar20 & 1;
      lVar3 = (long)pppppuStack_c0[2] + uVar23;
      if (SCARRY8((long)pppppuStack_c0[2],uVar23)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1021ffdb0);
        (*pcVar7)();
      }
      if ((long)pppppuStack_c0[3] < lVar3) {
        func_0x000102200c98(lVar3,ppppppuVar12);
        ppppuVar10 = ppppuVar4;
        ppppuVar21 = ppppuVar5;
        func_0x000100029284();
        if (((uint)ppppuVar20 & 1) != ((uint)ppppuVar21 & 1)) goto LAB_1021ffdc4;
      }
      else if (((ulong)ppppppuVar12 & 1) == 0) {
        func_0x000102200b00();
      }
      pppppuStack_c0 = apppppuStack_88[0];
      if (((ulong)ppppuVar20 & 1) == 0) {
        apppppuStack_88[0][((ulong)ppppuVar10 >> 6) + 8] =
             (undefined8 *****)
             ((ulong)apppppuStack_88[0][((ulong)ppppuVar10 >> 6) + 8] |
             1L << ((ulong)ppppuVar10 & 0x3f));
        pppppuVar25 = (undefined8 *****)apppppuStack_88[0][6];
        pppppuVar25[(long)ppppuVar10 * 2] = ppppuVar4;
        (pppppuVar25 + (long)ppppuVar10 * 2)[1] = ppppuVar5;
        pppppuVar25 = (undefined8 *****)(apppppuStack_88[0][7] + (long)ppppuVar10 * 3);
        *pppppuVar25 = ppppuVar11;
        pppppuVar25[1] = ppppuVar9;
        *(undefined1 *)(pppppuVar25 + 2) = 0;
        func_0x000107c61170(ppppuVar29);
        pppppuVar25 = (undefined8 *****)pppppuStack_c0[2];
        if (SCARRY8((long)pppppuVar25,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1021ffdbc);
          (*pcVar7)();
        }
LAB_1021ff824:
        pppppuStack_c0[2] = (undefined8 *****)((long)pppppuVar25 + 1);
      }
      else {
        pppppuVar25 = (undefined8 *****)(apppppuStack_88[0][7] + (long)ppppuVar10 * 3);
        ppppuVar4 = *pppppuVar25;
        ppppuVar10 = pppppuVar25[1];
        *pppppuVar25 = ppppuVar11;
        pppppuVar25[1] = ppppuVar9;
        uVar6 = *(undefined1 *)(pppppuVar25 + 2);
        *(undefined1 *)(pppppuVar25 + 2) = 0;
        func_0x000102200598(ppppuVar4,ppppuVar10,uVar6);
        func_0x000107c61170(ppppuVar29);
        func_0x000107c6142c(ppppuVar5);
      }
    }
    ppppuVar9 = (undefined8 ****)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c61168();
    ppppuVar10 = ppppuVar29;
    func_0x000107c6148c();
    if (ppppuVar10 != (undefined8 ****)0x0) {
      func_0x000107c61434(ppppuVar5);
      func_0x000107c61174();
      func_0x000107c417f0();
      func_0x000107c61180();
      ppppuVar11 = ppppuVar10;
      func_0x000107c5faec();
      func_0x000107c61170(ppppuVar10);
      ppppppuVar12 = (undefined8 ******)pppppuStack_c0;
      func_0x000107c61558();
      apppppuStack_88[0] = pppppuStack_c0;
      ppppuVar10 = ppppuVar4;
      ppppuVar20 = ppppuVar5;
      func_0x000100029284();
      uVar23 = (ulong)~(uint)ppppuVar20 & 1;
      lVar3 = (long)pppppuStack_c0[2] + uVar23;
      if (SCARRY8((long)pppppuStack_c0[2],uVar23)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1021ffdb4);
        (*pcVar7)();
      }
      if ((long)pppppuStack_c0[3] < lVar3) {
        func_0x000102200c98(lVar3,ppppppuVar12);
        ppppuVar10 = ppppuVar4;
        ppppuVar21 = ppppuVar5;
        func_0x000100029284();
        if (((uint)ppppuVar20 & 1) != ((uint)ppppuVar21 & 1)) goto LAB_1021ffdc4;
      }
      else if (((ulong)ppppppuVar12 & 1) == 0) {
        func_0x000102200b00();
      }
      pppppuStack_c0 = apppppuStack_88[0];
      if (((ulong)ppppuVar20 & 1) == 0) {
        apppppuStack_88[0][((ulong)ppppuVar10 >> 6) + 8] =
             (undefined8 *****)
             ((ulong)apppppuStack_88[0][((ulong)ppppuVar10 >> 6) + 8] |
             1L << ((ulong)ppppuVar10 & 0x3f));
        pppppuVar25 = (undefined8 *****)apppppuStack_88[0][6];
        pppppuVar25[(long)ppppuVar10 * 2] = ppppuVar4;
        (pppppuVar25 + (long)ppppuVar10 * 2)[1] = ppppuVar5;
        pppppuVar25 = (undefined8 *****)(apppppuStack_88[0][7] + (long)ppppuVar10 * 3);
        *pppppuVar25 = ppppuVar11;
        pppppuVar25[1] = ppppuVar9;
        *(undefined1 *)(pppppuVar25 + 2) = 0;
        func_0x000107c61170(ppppuVar29);
        pppppuVar25 = (undefined8 *****)pppppuStack_c0[2];
        if (SCARRY8((long)pppppuVar25,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1021ffdc0);
          (*pcVar7)();
        }
        goto LAB_1021ff824;
      }
      pppppuVar25 = (undefined8 *****)(apppppuStack_88[0][7] + (long)ppppuVar10 * 3);
      ppppuVar4 = *pppppuVar25;
      ppppuVar10 = pppppuVar25[1];
      *pppppuVar25 = ppppuVar11;
      pppppuVar25[1] = ppppuVar9;
      uVar6 = *(undefined1 *)(pppppuVar25 + 2);
      *(undefined1 *)(pppppuVar25 + 2) = 0;
      func_0x000102200598(ppppuVar4,ppppuVar10,uVar6);
      func_0x000107c6142c(ppppuVar5);
      func_0x000107c61170(ppppuVar29);
      goto joined_r0x0001021ff218;
    }
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c61168(PTR__OBJC_CLASS___NSArray_1126ae530);
    ppppuVar9 = ppppuVar29;
    func_0x000107c6148c(ppppuVar29,puVar17);
  } while (ppppuVar9 == (undefined8 ****)0x0);
  func_0x000107c61434(ppppuVar5);
  func_0x000107c61174();
  ppppuVar10 = ppppuVar9;
  func_0x000107c40808();
  if (ppppuVar10 == (undefined8 ****)0x0) {
    ppppppuVar12 = (undefined8 ******)pppppuStack_c0;
    func_0x000107c61558();
    apppppuStack_88[0] = pppppuStack_c0;
    ppppuVar9 = ppppuVar4;
    ppppuVar10 = ppppuVar5;
    func_0x000100029284();
    uVar23 = (ulong)~(uint)ppppuVar10 & 1;
    lVar3 = (long)pppppuStack_c0[2] + uVar23;
    if (SCARRY8((long)pppppuStack_c0[2],uVar23)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1021ffdb8);
      (*pcVar7)();
    }
    if ((long)pppppuStack_c0[3] < lVar3) {
      func_0x000102200c98(lVar3,ppppppuVar12);
      ppppuVar9 = ppppuVar4;
      ppppuVar11 = ppppuVar5;
      func_0x000100029284();
      if (((uint)ppppuVar10 & 1) != ((uint)ppppuVar11 & 1)) {
LAB_1021ffdc4:
        func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1021ffdd4);
        (*pcVar7)();
      }
    }
    else if (((ulong)ppppppuVar12 & 1) == 0) {
      func_0x000102200b00();
    }
    pppppuVar25 = apppppuStack_88[0];
    pppppuStack_c0 = apppppuStack_88[0];
    if (((ulong)ppppuVar10 & 1) == 0) {
      apppppuStack_88[0][((ulong)ppppuVar9 >> 6) + 8] =
           (undefined8 *****)
           ((ulong)apppppuStack_88[0][((ulong)ppppuVar9 >> 6) + 8] | 1L << ((ulong)ppppuVar9 & 0x3f)
           );
      pppppuVar30 = (undefined8 *****)apppppuStack_88[0][6];
      pppppuVar30[(long)ppppuVar9 * 2] = ppppuVar4;
      (pppppuVar30 + (long)ppppuVar9 * 2)[1] = ppppuVar5;
      pppppuVar30 = (undefined8 *****)(apppppuStack_88[0][7] + (long)ppppuVar9 * 3);
      *pppppuVar30 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
      pppppuVar30[1] = (undefined8 ****)0x0;
      *(undefined1 *)(pppppuVar30 + 2) = 2;
      func_0x000107c61170(ppppuVar29);
      pppppuVar30 = (undefined8 *****)pppppuVar25[2];
      if (SCARRY8((long)pppppuVar30,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1021ffdc4);
        (*pcVar7)();
      }
      pppppuVar25[2] = (undefined8 *****)((long)pppppuVar30 + 1);
    }
    else {
      pppppuVar25 = (undefined8 *****)(apppppuStack_88[0][7] + (long)ppppuVar9 * 3);
      ppppuVar4 = *pppppuVar25;
      ppppuVar9 = pppppuVar25[1];
      *pppppuVar25 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
      pppppuVar25[1] = (undefined8 ****)0x0;
      uVar6 = *(undefined1 *)(pppppuVar25 + 2);
      *(undefined1 *)(pppppuVar25 + 2) = 2;
      func_0x000102200598(ppppuVar4,ppppuVar9,uVar6);
      func_0x000107c6142c(ppppuVar5);
      func_0x000107c61170(ppppuVar29);
    }
    goto joined_r0x0001021ff218;
  }
  ppppuVar10 = ppppuVar9;
  func_0x000107c43638();
  func_0x000107c61180();
  if (ppppuVar10 != (undefined8 ****)0x0) {
    func_0x000107c60234(apppppuStack_a8);
    func_0x000107c615e8(ppppuVar10);
    func_0x000100102924(apppppuStack_a8,apppppuStack_88);
    func_0x0001000bb420(apppppuStack_88,apppppuStack_a8);
    uVar13 = 0;
    FUN_1022012d8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar14 = &uStack_b0;
    func_0x000107c6147c(puVar14,apppppuStack_a8,PTR___sypN_11034f1a8 + 8,uVar13,6);
    if (((ulong)puVar14 & 1) != 0) {
      func_0x000107c61170(uStack_b0);
      apppppuStack_a8[0] = (undefined8 ******)0x0;
      ppppppuVar12 = apppppuStack_a8;
      func_0x000107c5fc50(ppppuVar9,ppppppuVar12,uVar13);
      pppppuVar25 = apppppuStack_a8[0];
      if ((undefined8 ******)apppppuStack_a8[0] == (undefined8 ******)0x0) goto LAB_1021ff834;
      ppppppuVar27 = (undefined8 ******)((ulong)apppppuStack_a8[0] & 0xffffffffffffff8);
      if ((ulong)apppppuStack_a8[0] >> 0x3e == 0) {
        ppppppuVar24 = (undefined8 ******)ppppppuVar27[2];
        puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        ppppppuVar24 = (undefined8 ******)apppppuStack_a8[0];
        if (-1 < (long)apppppuStack_a8[0]) {
          ppppppuVar24 = ppppppuVar27;
        }
        func_0x000107c60480();
        puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar17;
      if (ppppppuVar24 != (undefined8 ******)0x0) {
        pppppuVar30 = (undefined8 *****)0x0;
        do {
          if (((ulong)pppppuVar25 & 0xc000000000000001) == 0) {
            if (ppppppuVar27[2] <= pppppuVar30) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1021ffda0);
              (*pcVar7)();
            }
            pppppuVar15 = (undefined8 *****)pppppuVar25[(long)pppppuVar30 + 4];
            func_0x000107c61174();
            ppppppuVar22 = ppppppuVar12;
          }
          else {
            pppppuVar15 = pppppuVar30;
            ppppppuVar22 = (undefined8 ******)pppppuVar25;
            FUN_102200f6c(pppppuVar30,pppppuVar25,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88)
            ;
          }
          ppppppuVar1 = (undefined8 ******)((long)pppppuVar30 + 1);
          if (SCARRY8((long)pppppuVar30,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1021ffd9c);
            (*pcVar7)();
          }
          pppppuVar18 = pppppuVar15;
          func_0x000107c417f0();
          func_0x000107c61180();
          pppppuVar28 = pppppuVar18;
          func_0x000107c5faec();
          ppppppuVar12 = ppppppuVar22;
          func_0x000107c61170(pppppuVar15);
          func_0x000107c61170(pppppuVar18);
          puVar19 = puVar17;
          func_0x000107c61558();
          puVar16 = puVar17;
          if (((ulong)puVar19 & 1) == 0) {
            ppppppuVar12 = (undefined8 ******)(*(long *)(puVar17 + 0x10) + 1);
            puVar16 = (undefined *)0x0;
            FUN_1021feb00(0,ppppppuVar12,1,puVar17);
          }
          uVar23 = *(ulong *)(puVar16 + 0x10);
          ppppppuVar2 = (undefined8 ******)(uVar23 + 1);
          puVar17 = puVar16;
          if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar23) {
            puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
            ppppppuVar12 = ppppppuVar2;
            FUN_1021feb00(puVar17,ppppppuVar2,1,puVar16);
          }
          *(undefined8 *******)(puVar17 + 0x10) = ppppppuVar2;
          *(undefined8 ******)(puVar17 + uVar23 * 0x18 + 0x20) = pppppuVar28;
          *(undefined8 *******)(puVar17 + uVar23 * 0x18 + 0x28) = ppppppuVar22;
          puVar17[uVar23 * 0x18 + 0x30] = 0;
          pppppuVar30 = (undefined8 *****)((long)pppppuVar30 + 1);
        } while (ppppppuVar1 != ppppppuVar24);
      }
LAB_1021ffbc8:
      func_0x000107c6142c();
      ppppppuVar12 = (undefined8 ******)pppppuStack_c0;
      func_0x000107c61558(pppppuStack_c0);
      apppppuStack_a8[0] = pppppuStack_c0;
      FUN_102200984(puVar17,0,2,ppppuVar4,ppppuVar5,ppppppuVar12);
      func_0x000107c61170(ppppuVar29);
      func_0x000107c6142c(ppppuVar5);
      FUN_102201318(apppppuStack_88);
      pppppuStack_c0 = apppppuStack_a8[0];
      goto joined_r0x0001021ff218;
    }
LAB_1021ff834:
    func_0x0001000bb420(apppppuStack_88,apppppuStack_a8);
    uVar13 = 0;
    FUN_1022012d8(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar14 = &uStack_b0;
    func_0x000107c6147c(puVar14,apppppuStack_a8,PTR___sypN_11034f1a8 + 8,uVar13,6);
    if (((ulong)puVar14 & 1) != 0) {
      func_0x000107c61170(uStack_b0);
      apppppuStack_a8[0] = (undefined8 ******)0x0;
      ppppppuVar12 = apppppuStack_a8;
      func_0x000107c5fc50(ppppuVar9,ppppppuVar12,uVar13);
      pppppuVar25 = apppppuStack_a8[0];
      if ((undefined8 ******)apppppuStack_a8[0] != (undefined8 ******)0x0) {
        ppppppuVar27 = (undefined8 ******)((ulong)apppppuStack_a8[0] & 0xffffffffffffff8);
        if ((ulong)apppppuStack_a8[0] >> 0x3e == 0) {
          ppppppuVar24 = (undefined8 ******)ppppppuVar27[2];
          puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          ppppppuVar24 = (undefined8 ******)apppppuStack_a8[0];
          if (-1 < (long)apppppuStack_a8[0]) {
            ppppppuVar24 = ppppppuVar27;
          }
          func_0x000107c60480();
          puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        PTR___swiftEmptyArrayStorage_11034f1c8 = puVar17;
        if (ppppppuVar24 != (undefined8 ******)0x0) {
          pppppuVar30 = (undefined8 *****)0x0;
          do {
            if (((ulong)pppppuVar25 & 0xc000000000000001) == 0) {
              if (ppppppuVar27[2] <= pppppuVar30) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1021ffda8);
                (*pcVar7)();
              }
              pppppuVar15 = (undefined8 *****)pppppuVar25[(long)pppppuVar30 + 4];
              func_0x000107c61174();
              ppppppuVar22 = ppppppuVar12;
            }
            else {
              pppppuVar15 = pppppuVar30;
              ppppppuVar22 = (undefined8 ******)pppppuVar25;
              FUN_102200f6c(pppppuVar30,pppppuVar25,&PTR__OBJC_CLASS___NSString_1126ae4d0,
                            0x112d4c408);
            }
            ppppppuVar1 = (undefined8 ******)((long)pppppuVar30 + 1);
            if (SCARRY8((long)pppppuVar30,1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1021ffda4);
              (*pcVar7)();
            }
            pppppuVar18 = pppppuVar15;
            func_0x000107c417f0();
            func_0x000107c61180();
            pppppuVar28 = pppppuVar18;
            func_0x000107c5faec();
            ppppppuVar12 = ppppppuVar22;
            func_0x000107c61170(pppppuVar15);
            func_0x000107c61170(pppppuVar18);
            puVar19 = puVar17;
            func_0x000107c61558();
            puVar16 = puVar17;
            if (((ulong)puVar19 & 1) == 0) {
              ppppppuVar12 = (undefined8 ******)(*(long *)(puVar17 + 0x10) + 1);
              puVar16 = (undefined *)0x0;
              FUN_1021feb00(0,ppppppuVar12,1,puVar17);
            }
            uVar23 = *(ulong *)(puVar16 + 0x10);
            ppppppuVar2 = (undefined8 ******)(uVar23 + 1);
            puVar17 = puVar16;
            if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar23) {
              puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
              ppppppuVar12 = ppppppuVar2;
              FUN_1021feb00(puVar17,ppppppuVar2,1,puVar16);
            }
            *(undefined8 *******)(puVar17 + 0x10) = ppppppuVar2;
            *(undefined8 ******)(puVar17 + uVar23 * 0x18 + 0x20) = pppppuVar28;
            *(undefined8 *******)(puVar17 + uVar23 * 0x18 + 0x28) = ppppppuVar22;
            puVar17[uVar23 * 0x18 + 0x30] = 0;
            pppppuVar30 = (undefined8 *****)((long)pppppuVar30 + 1);
          } while (ppppppuVar1 != ppppppuVar24);
        }
        goto LAB_1021ffbc8;
      }
    }
    func_0x0001000bb420(apppppuStack_88,apppppuStack_a8);
    uVar13 = 0;
    FUN_1022012d8(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
    puVar14 = &uStack_b0;
    func_0x000107c6147c(puVar14,apppppuStack_a8,PTR___sypN_11034f1a8 + 8,uVar13,6);
    if ((int)puVar14 != 0) {
      func_0x000107c61170(uStack_b0);
      apppppuStack_a8[0] = (undefined8 ******)0x0;
      uVar13 = 0x112e64730;
      func_0x0001000285a8(0x112e64730,&UNK_10da6ec48);
      func_0x000107c5fc50(ppppuVar9,apppppuStack_a8,uVar13);
      pppppuVar25 = apppppuStack_a8[0];
      if ((undefined8 ******)apppppuStack_a8[0] != (undefined8 ******)0x0) {
        pppppuVar30 = (undefined8 *****)apppppuStack_a8[0][2];
        puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (pppppuVar30 != (undefined8 *****)0x0) {
          pppppuVar15 = (undefined8 *****)0x0;
          do {
            if (pppppuVar25[2] <= pppppuVar15) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1021ffdac);
              (*pcVar7)();
            }
            pppppuVar28 = (undefined8 *****)pppppuVar25[(long)pppppuVar15 + 4];
            pppppuVar18 = pppppuVar28;
            func_0x000107c61434();
            FUN_1021ff1a0();
            func_0x000107c6142c(pppppuVar28);
            puVar19 = puVar17;
            func_0x000107c61558();
            puVar16 = puVar17;
            if (((ulong)puVar19 & 1) == 0) {
              puVar16 = (undefined *)0x0;
              FUN_1021feb00(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
            }
            uVar23 = *(ulong *)(puVar16 + 0x10);
            puVar17 = puVar16;
            if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar23) {
              puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
              FUN_1021feb00(puVar17,uVar23 + 1,1,puVar16);
            }
            pppppuVar15 = (undefined8 *****)((long)pppppuVar15 + 1);
            *(ulong *)(puVar17 + 0x10) = uVar23 + 1;
            *(undefined8 ******)(puVar17 + uVar23 * 0x18 + 0x20) = pppppuVar18;
            *(undefined8 *)(puVar17 + uVar23 * 0x18 + 0x28) = 0;
            puVar17[uVar23 * 0x18 + 0x30] = 1;
          } while (pppppuVar30 != pppppuVar15);
        }
        func_0x000107c6142c();
        ppppppuVar12 = (undefined8 ******)pppppuStack_c0;
        func_0x000107c61558(pppppuStack_c0);
        apppppuStack_a8[0] = pppppuStack_c0;
        FUN_102200984(puVar17,0,2,ppppuVar4,ppppuVar5,ppppppuVar12);
        func_0x000107c61170(ppppuVar29);
        func_0x000107c6142c(ppppuVar5);
        FUN_102201318(apppppuStack_88);
        pppppuStack_c0 = apppppuStack_a8[0];
        goto joined_r0x0001021ff218;
      }
    }
    FUN_102201318(apppppuStack_88);
  }
  func_0x000107c61170(ppppuVar29);
  func_0x000107c6142c(ppppuVar5);
  goto joined_r0x0001021ff218;
}



/* Entry: 1021ffdd4; end: 1021ffde7;  */

bool FUN_1021ffdd4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1021ffde8; end: 1021ffe93;  */

void FUN_1021ffde8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1021ffe94; end: 1021fff07;  */

undefined1  [16] FUN_1021ffe94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar1 = 0x656d616e;
  if (bVar5 != 2) {
    uVar1 = 0x69747265706f7270;
  }
  uVar4 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar4 = 0xea00000000007365;
  }
  uVar2 = 0x65707974;
  if (bVar5 != 0) {
    uVar2 = 0x707954746e657665;
  }
  uVar3 = 0xe400000000000000;
  if (bVar5 != 0) {
    uVar3 = 0xe900000000000065;
  }
  if (bVar5 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Entry: 1021fff08; end: 1021fff2b;  */

void FUN_1021fff08(undefined1 *param_1,undefined1 param_2)

{
  FUN_102201128();
  *param_1 = param_2;
  return;
}



/* Entry: 1021fff2c; end: 1021fff43;  */

undefined1  [16] FUN_1021fff2c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1021fff44; end: 1021fff93;  */

void FUN_1021fff44(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10220014c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1021fff94; end: 10220014b;  */

/* WARNING: Removing unreachable block (ram,0x0001022000cc) */

void FUN_1021fff94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [15];
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar1 = 0x112e646d8;
  func_0x0001000285a8(0x112e646d8,&UNK_10da6ea80);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_70 + -extraout_x8;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  FUN_10220014c();
  func_0x000107c606ec(puVar4,&UNK_1104e2f20,&UNK_1104e2f20,param_1,uVar2,uVar3);
  uStack_51 = 0;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_51,lVar1);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c6053c(unaff_x20[2],unaff_x20[3],&uStack_52,lVar1);
    uStack_53 = 2;
    func_0x000107c6053c(unaff_x20[4],unaff_x20[5],&uStack_53,lVar1);
    uStack_60 = unaff_x20[6];
    uStack_61 = 3;
    uVar2 = 0x112e646e8;
    func_0x0001000285a8(0x112e646e8,&UNK_10da6ea88);
    uVar3 = uVar2;
    FUN_10220018c();
    func_0x000107c60554(&uStack_60,&uStack_61,lVar1,uVar2,uVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
  return;
}



/* Entry: 10220014c; end: 10220018b;  */

void FUN_10220014c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e646e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6ebec;
  func_0x000107c61520(&UNK_10da6ebec,&UNK_1104e2f20);
  puRam0000000112e646e0 = puVar1;
  return;
}



/* Entry: 10220018c; end: 102200203;  */

void FUN_10220018c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e646f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e646e8;
  func_0x00010002969c(0x112e646e8,&UNK_10da6ea88);
  uVar2 = uVar1;
  FUN_102200204();
  puStack_30 = PTR___sSSSEsWP_11034da88;
  puVar3 = PTR___sSDyxq_GSEsSERzSER_rlMc_11034d780;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSDyxq_GSEsSERzSER_rlMc_11034d780,uVar1,&puStack_30);
  puRam0000000112e646f0 = puVar3;
  return;
}



/* Entry: 102200204; end: 102200243;  */

void FUN_102200204(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e646f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da6ebc4;
  func_0x000107c61520(&UNK_10da6ebc4,&UNK_1104e2e90);
  puRam0000000112e646f8 = puVar1;
  return;
}


