/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10074a9a8; end: 10074ab53;  */

undefined8 * FUN_10074a9a8(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar11;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  func_0x000107c61174(param_2);
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3e6ec();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar4 = param_2;
  func_0x000107c518fc();
  func_0x000107c61180();
  puVar9 = auStack_e8;
  lVar10 = 0x10;
  puVar6 = puVar4;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar6 == (undefined8 *)0x0) {
      func_0x000107c61170(puVar4);
      puVar6 = (undefined8 *)PTR_PTR_1126de430;
      func_0x000107c610f4(PTR_PTR_1126de430);
      puVar8 = param_2;
      func_0x000107c473ec();
LAB_10074ab04:
      func_0x000107c61170(uVar3);
      func_0x000107c61170();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
        return puVar6;
      }
      func_0x000107c60e78();
      if (param_2 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x2;
        if ((((lVar10 != 0) && (puVar9 != (undefined1 *)0x0)) && (puVar8 != (undefined8 *)0x0)) &&
           ((puVar7 != (undefined8 *)0x0 && ((undefined8 *)*param_2 != (undefined8 *)0x0)))) {
          UNRECOVERED_JUMPTABLE = *(code **)*param_2;
          if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010074ab84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(param_2);
            return param_2;
          }
          puVar6 = (undefined8 *)0x6;
        }
        return puVar6;
      }
      return (undefined8 *)0x2;
    }
    puVar11 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(puVar4);
      }
      puVar5 = *(undefined8 **)((long)puVar11 * 8);
      func_0x000107c4d420();
      func_0x000107c61180();
      uVar2 = uVar3;
      puVar8 = puVar5;
      func_0x000107c40404();
      func_0x000107c61170(puVar5);
      if ((uVar2 & 1) == 0) {
        func_0x000107c61174(param_2);
        func_0x000107c61170(puVar4);
        puVar6 = param_2;
        goto LAB_10074ab04;
      }
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    } while (puVar6 != puVar11);
    puVar9 = auStack_e8;
    lVar10 = 0x10;
    puVar6 = puVar4;
    func_0x000107c4080c();
  } while( true );
}



/* Entry: 10074ab54; end: 10074ab97;  */

undefined8 * FUN_10074ab54(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x2;
  }
  puVar1 = (undefined8 *)0x2;
  if ((((param_5 != 0) && (param_4 != 0)) && (param_3 != 0)) &&
     ((param_2 != 0 && ((undefined8 *)*param_1 != (undefined8 *)0x0)))) {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010074ab84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return param_1;
    }
    puVar1 = (undefined8 *)0x6;
  }
  return puVar1;
}



/* Entry: 10074ab98; end: 10074ace7;  */

void FUN_10074ab98(long param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,ulong *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_1005a6cc4();
  if ((int)lVar1 < 1) {
    uVar2 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x28);
    if (*param_3 < uVar2) {
      func_0x000107c610b4(lVar1,param_2);
      *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + *param_3;
      *param_5 = 0;
      return;
    }
    func_0x000107c610b4(lVar1,param_2,uVar2);
    lVar1 = *(long *)(param_1 + 8);
    FUN_10074afa0(lVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    if ((int)lVar1 != 0) {
      return;
    }
    if (*param_5 >> 0x1f != 0) goto LAB_10074ace4;
    uVar3 = *(ulong *)(param_1 + 0x10);
    FUN_1001f2fe8(uVar3,param_4);
    if (-1 < (int)uVar3) {
      *param_5 = uVar3 & 0xffffffff;
      *param_3 = uVar2;
      *(undefined8 *)(param_1 + 0x28) = 0;
      return;
    }
    pcVar6 = "Could not read from BIO after SSL_write.";
    uVar5 = 0x44d;
  }
  else {
    *param_3 = 0;
    if (*param_5 >> 0x1f != 0) {
      func_0x000107c2c458();
LAB_10074ace4:
      func_0x000107c2c45c();
      uVar4 = *(undefined8 *)(lVar1 + 0x20);
      func_0x000107c5c734(uVar4);
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c3e6e8();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
      return;
    }
    uVar2 = *(ulong *)(param_1 + 0x10);
    FUN_1001f2fe8(uVar2,param_4);
    if (-1 < (int)uVar2) {
      *param_5 = uVar2 & 0xffffffff;
      return;
    }
    pcVar6 = "Could not read from BIO even though some data is pending";
    uVar5 = 0x431;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                ,uVar5,2,pcVar6);
  return;
}



/* Entry: 10074ace8; end: 10074ad8f; -[SCLensCarouselStudySettingsProvider batchScheduleV3Namespaces] */

void FUN_10074ace8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3e6e8();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10074ad90; end: 10074aef7; +[SCLensCarouselStudySettingsProvider _scheduleV3BatchConfigFromConfigProvider:cofValue:] */

/* WARNING: Removing unreachable block (ram,0x00010074aea8) */

void FUN_10074ad90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ddc30;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61160(puVar1);
  func_0x000107c52c0c();
  func_0x000107c52b74(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e178(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      &PTR____CFConstantStringClassReference_110f310d8);
  func_0x000107c61180();
  func_0x000107c52c10(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  lVar3 = param_3;
  func_0x000107c4f558(param_3,param_2,param_4,0,0);
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  lVar4 = lVar3;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar4;
  func_0x000107c4adac();
  if (lVar3 == 0) {
    func_0x000107c61174(puVar1);
    puVar2 = puVar1;
  }
  else {
    puVar2 = PTR_PTR_1126ddc30;
    func_0x000107c610f4(PTR_PTR_1126ddc30);
    func_0x000107c4636c();
    func_0x000107c61174(puVar2);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10074aef8; end: 10074af5f; +[SCScheduleV3OptimizationConfig descriptor] */

void FUN_10074aef8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edfb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c034a0,
                        &PTR____CFConstantStringClassReference_110f31758,&PTR_DAT_113316798,
                        &PTR_DAT_1133167b0,3,0x10,0x1c);
    puRam00000001137edfb0 = puVar1;
  }
  return;
}



/* Entry: 10074af60; end: 10074af9f;  */

long * FUN_10074af60(long *param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x2;
  }
  plVar1 = (long *)0x2;
  if ((((param_4 != 0) && (param_3 != 0)) && (param_2 != 0)) && (*param_1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010074af8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
      return param_1;
    }
    plVar1 = (long *)0x6;
  }
  return plVar1;
}



/* Entry: 10074afa0; end: 10074b1bf;  */

undefined8 FUN_10074afa0(ulong param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((ulong)param_3 >> 0x1f == 0) {
    FUN_1001e83a0();
    uVar2 = param_1;
    FUN_100648c5c(param_1,param_2,param_3);
    if ((int)uVar2 < 0) {
      FUN_1001f34c8(param_1,uVar2);
      switch(param_1 & 0xffffffff) {
      case 1:
        break;
      case 2:
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                      ,0x242,2,"Peer tried to renegotiate SSL connection. This is unsupported.");
        return 6;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
        break;
      case 8:
      }
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                    ,0x246,2,"SSL_write failed with error %s.");
      uVar1 = 7;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  func_0x000107c2c470();
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    FUN_10074afa0(uVar1,*(undefined8 *)(param_1 + 0x18));
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  uVar2 = *(ulong *)(param_1 + 0x10);
  FUN_1005a6cc4();
  if ((int)uVar2 < 0) {
    func_0x000107c2c468();
  }
  else {
    *param_4 = (long)(int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      return 0;
    }
    if (*param_3 >> 0x1f == 0) {
      uVar2 = *(ulong *)(param_1 + 0x10);
      FUN_1001f2fe8(uVar2,param_2);
      if ((int)uVar2 < 1) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                      ,0x46e,2,"Could not read from BIO after SSL_write.");
        return 7;
      }
      *param_3 = uVar2 & 0xffffffff;
      uVar2 = *(ulong *)(param_1 + 0x10);
      FUN_1005a6cc4();
      if (-1 < (int)uVar2) {
        *param_4 = (long)(int)uVar2;
        return 0;
      }
      goto LAB_10074b1bc;
    }
  }
  func_0x000107c2c460();
LAB_10074b1bc:
  func_0x000107c2c464();
  uVar3 = *(undefined8 *)(uVar2 + 8);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000107c518fc();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return uVar1;
}



/* Entry: 10074b1c0; end: 10074b207; -[SCMixerScheduleNamespaceServiceAdapter scheduleNamespaces] */

void FUN_10074b1c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c518fc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10074b208; end: 10074b303;  */

void FUN_10074b208(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4ce48();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000107c4ce44();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126de650;
  func_0x000107c610f4(PTR_PTR_1126de650);
  func_0x000107c484b8();
  puVar5 = PTR_PTR_1126de640;
  func_0x000107c610f4(PTR_PTR_1126de640);
  func_0x000107c47920();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10074b304; end: 10074b30b;  */

void FUN_10074b304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 10074b30c; end: 10074b3f7;  */

void FUN_10074b30c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  func_0x000107c470d0();
  puVar2 = PTR_PTR_1126de3b0;
  func_0x000107c610f4(PTR_PTR_1126de3b0);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  func_0x000107c47fd4(puVar2,param_2,uVar3);
  func_0x000107c61170(uVar3);
  puVar4 = PTR_PTR_1126de3b8;
  func_0x000107c610f4(PTR_PTR_1126de3b8);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c5c734(uVar5);
  func_0x000107c61180();
  func_0x000107c46674(puVar4,param_2,uVar3,puVar1,uVar5,puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10074b3f8; end: 10074b417;  */

void FUN_10074b3f8(void)

{
  func_0x000107c61168(&PTR_PTR_11296cee0);
  return;
}



/* Entry: 10074b418; end: 10074b46f; -[SCLensNamespaceStoredDateManager initWithPreferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10074b418(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_113036280) = param_3;
  lVar2 = param_1;
  FUN_10074b3f8();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10074b470; end: 10074b5c3; -[SCMixerNamespaceMetadataStoreProvider initWithDocObjectContext:performer:dataConfigProvider:storedDateManager:] */

undefined8 *
FUN_10074b470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_112701668;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10074b5c4; end: 10074b65b; -[SCMixerNamespaceMetadataStoreProvider metadataStoreForScheduleNamespaces:] */

void FUN_10074b5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100b7c330;
  puStack_30 = &UNK_110c8ead8;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4c280(uVar1,param_2,&puStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10074b65c; end: 10074b71f;  */

void FUN_10074b65c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  func_0x000107c470d0();
  puVar3 = PTR_PTR_1126aeea8;
  func_0x000107c61160(PTR_PTR_1126aeea8);
  puVar4 = PTR_PTR_1126de3c0;
  func_0x000107c610f4(PTR_PTR_1126de3c0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar5);
  func_0x000107c61180();
  func_0x000107c46678(puVar4,param_2,uVar1,puVar2,uVar5,puVar3,*(undefined8 *)(param_1 + 0x30));
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10074b720; end: 10074b8a3; -[SCMixerFeedMetadataStoreProvider initWithDocObjectContext:performer:dataConfigProvider:timeProvider:feedContextProvider:] */

undefined8 *
FUN_10074b720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_112701650;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_7);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10074b8a4; end: 10074b8ff; -[SCMixerFeedMetadataStoreProvider metadataStoreForGroupId:] */

void FUN_10074b8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x100b82114;
  puStack_20 = &UNK_110c8e9a8;
  uStack_18 = param_3;
  func_0x000107c4c280(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10074b900; end: 10074b987; -[SCMixerScheduledNamespaceManager initWithScheduleNamespaces:groupId:] */

undefined1 *
FUN_10074b900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112701680;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10074b988; end: 10074bb77; -[SCMixerNamespaceService initWithNamespaceManager:namespaceDataUpdater:updateStrategy:feedUpdateStrategy:namespaceDataProvider:feedDataProvider:performer:namespaceDataPerformer:enableThrottling:] */

undefined1 *
FUN_10074b988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_68 = PTR_PTR_112701630;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
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
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x58) = param_11;
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3c024(puVar1);
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10074bb78; end: 10074bcdb; -[SCMixerNamespaceService _observeStartUpdate] */

void FUN_10074bb78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c4da88(uVar1);
  func_0x000107c61180();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100b7a528;
  puStack_68 = &UNK_110c8e6c8;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar2 = uVar1;
  func_0x000107c436a8(uVar1);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_88,auStack_58);
  uVar3 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 10074bcdc; end: 10074bce3; -[SCMixerNamespaceService scheduleNamespaces] */

void FUN_10074bcdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_scheduleNamespaces_112631a28);
  return;
}



/* Entry: 10074bce4; end: 10074bd0b; -[SCMixerScheduledNamespaceManager scheduleNamespaces] */

void FUN_10074bce4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10074bd0c; end: 10074bd7f; -[SCLensScheduleNamespaceReadOnlyManager initWithLensScheduleManager:] */

undefined1 * FUN_10074bd0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701728;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10074bd80; end: 10074bd87; -[SCLensScheduleNamespaceReadOnlyManager scheduleNamespaces] */

void FUN_10074bd80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_scheduleNamespaces_112631a28);
  return;
}



/* Entry: 10074bd88; end: 10074be2f; -[SCLensScheduleNamespace initWithNamespaceType:snapSource:] */

undefined1 * FUN_10074bd88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a398;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b6868;
    func_0x000107c3bf6c();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126b6868;
    func_0x000107c3af88();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10074be30; end: 10074be97; +[SCLensScheduleNamespace _cacheKeyForSnapSource:namespaceId:] */

void FUN_10074be30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  uVar1 = param_4;
  if (param_3 == 2) {
    func_0x000107c5c170(param_4,param_2,&PTR____CFConstantStringClassReference_110f78618);
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174(param_4);
  }
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10074be98; end: 10074bebf; -[SCLensScheduleMetadataStoreProvider callingCarouselScheduleService] */

void FUN_10074be98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10074bec0; end: 10074bfab; -[SCMixerScheduleNamespaceServiceFactoryAdapter serviceForLensScheduleNamespaces:] */

void FUN_10074bec0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10074bf58;
  puStack_30 = &UNK_110c8e898;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4c280(uVar1,param_2,&puStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10074bfac; end: 10074bfb3; -[SCMixerNamespaceServiceFactory mixerServiceForNamespaces:] */

void FUN_10074bfac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0cf110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_mixerServiceForNamespaces_update_112611658,param_3,
             *(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10074bfb4; end: 10074c0a3; -[SCLensScheduleMetadataStoreProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010074bfcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010074bfe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010074bffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010074c014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010074c02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010074c044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010074c05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010074c074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010074c08c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010074c078) */
/* WARNING: Removing unreachable block (ram,0x00010074c060) */
/* WARNING: Removing unreachable block (ram,0x00010074c048) */
/* WARNING: Removing unreachable block (ram,0x00010074c030) */
/* WARNING: Removing unreachable block (ram,0x00010074c018) */
/* WARNING: Removing unreachable block (ram,0x00010074c000) */
/* WARNING: Removing unreachable block (ram,0x00010074bfe8) */
/* WARNING: Removing unreachable block (ram,0x00010074bfd0) */
/* WARNING: Removing unreachable block (ram,0x00010074c090) */

void FUN_10074bfb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x90,0);
  return;
}



/* Entry: 10074c0a4; end: 10074c0d3; -[SCLensScheduleNamespaceSettings .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010074c0bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010074c0c0) */

void FUN_10074c0a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10074c0d4; end: 10074c0f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10074c0d4(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127265a4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10074c0f8; end: 10074c687; -[SCLensLogger initWithBlizzardLogger:lensGrapheneLogger:lensThumbnailLogger:lensDownloadLogger:performanceAutomationLogger:lensInfoButtonVisibility:applicationLifecycleEvents:unlockableLensTrackerServices:bloopsFeature:bloopsUserOnboardingStatusProvider:lensContentCacheProvider:lensCarouselStudySettings:audioSession:sponsoredLensScheduleService:lensFetchTypeProvider:performerProvider:lensPlusTierService:nglStudySettings:lensPlusServices:] */

undefined8 *
FUN_10074c0f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  puStack_70 = PTR_PTR_1126f05b0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x17,param_11);
    func_0x000107c611a0(puVar1 + 0x18,param_12);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_17;
    func_0x000107c61170(uVar2);
    uVar2 = param_18;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4c18c();
    func_0x000107c61180();
    uVar5 = puVar1[0x1d];
    puVar1[0x1d] = uVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_21;
    func_0x000107c61170(uVar2);
    *(undefined4 *)(puVar1 + 0x29) = 0;
    *(undefined4 *)(puVar1 + 0x27) = 0;
    puVar1[0x2b] = 0;
    *(undefined4 *)(puVar1 + 0x2e) = 0;
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x000107c61180();
    func_0x000107c5a090(puVar1);
    func_0x000107c61170(puVar4);
    func_0x000107c53c84(puVar1);
    func_0x000107c5947c(puVar1);
    puVar1[0xb] = 0xffffffffffffffff;
    func_0x000107c61174(param_5);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_7;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126c8be8;
    func_0x000107c610f4();
    func_0x000107c474f8();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[3];
    puVar1[3] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[0x28];
    puVar1[0x28] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = puVar1[4];
    puVar1[4] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = puVar1[6];
    puVar1[6] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = puVar1[7];
    puVar1[7] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = puVar1[0x23];
    puVar1[0x23] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar2 = puVar1[0x25];
    puVar1[0x25] = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_19;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar4;
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_20);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0x26];
    puVar1[0x26] = puVar4;
    func_0x000107c61170(uVar2);
    *(undefined4 *)(puVar1 + 0x31) = 0;
    func_0x000107c3c000(puVar1);
    func_0x000107c61170(param_20);
  }
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10074c688; end: 10074c68b; -[SCLensBasePerformerProvider mainQueuePerformer] */

void FUN_10074c688(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbe58 != -1) {
    FUN_10002a2fc(0x1137fbe58,&PTR___NSConcreteGlobalBlock_110d62f30);
  }
  uVar1 = uRam00000001137fbe50;
  func_0x000107c61174(uRam00000001137fbe50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10074c68c; end: 10074c6bb; -[SCLensLogger setTriggerFiredForCurrentLens:] */

void FUN_10074c68c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x2a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10074c6bc; end: 10074c6c3; -[SCLensLogger setCurrentLensOptionIndex:] */

void FUN_10074c6bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x290) = param_3;
  return;
}



/* Entry: 10074c6c4; end: 10074c757; -[SCLensLogger setSnapSource:] */

/* WARNING: Possible PIC construction at 0x00010074c708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010074c70c) */

void FUN_10074c6c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
  func_0x000107c5947c(*(undefined8 *)(param_1 + 0x1c0));
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5947c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10074c758; end: 10074c797;  */

void FUN_10074c758(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3bc74();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10074c798; end: 10074c8e7; -[SCLensContentEntryPoint _lensDownloadLogger] */

void FUN_10074c798(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126bbad0;
  func_0x000107c610f4(PTR_PTR_1126bbad0);
  uVar2 = param_1;
  FUN_10074c8e8(param_1);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5dac4();
  func_0x000107c61180();
  uVar4 = param_1;
  func_0x00010074c90c(param_1);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c444a4();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c4b1a4();
  func_0x000107c61180();
  puVar8 = PTR_PTR_1126bbad8;
  func_0x000107c61160(PTR_PTR_1126bbad8);
  func_0x00010074c930(param_1);
  func_0x000107c61180();
  uVar9 = param_1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c459fc(puVar1,param_2,uVar3,uVar7,puVar8,uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10074c8e8; end: 10074c953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10074c8e8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127264c8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10074c954; end: 10074ca57; -[SCLensDownloadLogger initWithBlizzardLogger:lensGraphene:grapheneLoggerV2:circumstanceEngine:] */

undefined1 *
FUN_10074c954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126f0590;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = 0xffffffffffffffff;
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10074ca58; end: 10074ca5f; -[SCLensDownloadLogger setSnapSource:] */

void FUN_10074ca58(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10074ca60; end: 10074cadb; -[SCLensSaveTextureLoggerImpl initWithLogger:] */

undefined1 * FUN_10074ca60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f05c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = 0xffffffffffffffff;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10074cadc; end: 10074cc77; -[SCLensLogger _observeApplicationLifecycleEvents:] */

void FUN_10074cadc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_68,param_1);
  uVar1 = param_3;
  func_0x000107c419f0(param_3);
  func_0x000107c61180();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  puStack_80 = &UNK_100c78790;
  puStack_78 = &UNK_110846510;
  func_0x000107c6111c(auStack_70,auStack_68);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  func_0x000107c5e39c(param_3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_98,auStack_68);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10074cc78; end: 10074cce3;  */

/* WARNING: Possible PIC construction at 0x00010074ccc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010074ccc8) */

void FUN_10074cc78(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c55e48(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10074cce4; end: 10074cceb; -[SCLensLogger setLensReadyTracker:] */

void FUN_10074cce4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 10074ccec; end: 10074cd0b;  */

void FUN_10074ccec(void)

{
  func_0x000107c61168(&PTR_PTR_1128b8d88);
  return;
}



/* Entry: 10074cd0c; end: 10074cd1f;  */

void FUN_10074cd0c(long param_1,long param_2)

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



/* Entry: 10074cd20; end: 10074cd6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10074cd20(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113081858) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10074cd6c; end: 10074cd77;  */

void FUN_10074cd6c(void)

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



/* Entry: 10074cd78; end: 10074cdcb;  */

void FUN_10074cd78(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10074cdcc; end: 10074cdd7;  */

void FUN_10074cdcc(void)

{
  long unaff_x20;
  
  FUN_10074cdd8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 10074cdd8; end: 10074cfb7;  */

void FUN_10074cdd8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  func_0x0001005c736c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_10074cfb8(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_10074d034();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_10074d1b8();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 10074cfb8; end: 10074d033;  */

void FUN_10074cfb8(undefined8 param_1)

{
  if (lRam0000000112ee3f30 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e70dea8);
  return;
}



/* Entry: 10074d034; end: 10074d19f;  */

void FUN_10074d034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_11058b160;
  func_0x000107c613fc(&UNK_11058b160,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  pcStack_70 = FUN_1008d54cc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x1008d5494;
  puStack_78 = &UNK_11058b178;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return;
}



/* Entry: 10074d1a0; end: 10074d1b7;  */

void FUN_10074d1a0(long param_1,long param_2)

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



/* Entry: 10074d1b8; end: 10074d23b;  */

void FUN_10074d1b8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001005c73ec(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x00010074d1f0();
  return;
}



/* Entry: 10074d23c; end: 10074d23f;  */

void FUN_10074d23c(void)

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



/* Entry: 10074d240; end: 10074d4ab; -[SCCameraLensesViewControlerServiceProvider provide] */

void FUN_10074d240(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61144(auStack_78,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1007ef944;
  puStack_88 = &UNK_110966590;
  func_0x000107c6111c(auStack_80,auStack_78);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_a8,puVar1);
  puVar2 = PTR_PTR_1126ae720;
  puStack_d0 = puVar4;
  uStack_c8 = 0xc2000000;
  puStack_c0 = &UNK_106bcd2a0;
  puStack_b8 = &UNK_1109665c0;
  func_0x000107c6111c(auStack_b0,auStack_a8);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar4;
  uStack_f0 = 0xc2000000;
  puStack_e8 = &UNK_106bcd32c;
  puStack_e0 = &UNK_1109665f0;
  func_0x000107c6111c(auStack_d8,auStack_a8);
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_100,auStack_a8);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126d1150;
  func_0x000107c610f4(PTR_PTR_1126d1150);
  func_0x000107c45c04();
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_100);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_d8);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_b0);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10074d4ac; end: 10074d5ff; -[SCCameraLensesViewControllerServices initWithCameraLensesViewControllerManager:cameraLensesViewControllerInteractor:cameraLensesViewControllerConfigurator:lensAttachmentLauncher:lensDataProviderUpdater:lensURLBrowser:] */

undefined1 *
FUN_10074d4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_1126f63e8;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10074d600; end: 10074d7a3;  */

void FUN_10074d600(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10074d7a4; end: 10074d873;  */

void FUN_10074d7a4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_10074d874(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  FUN_10074d9c8();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar3 != 0) {
    *(long *)(unaff_x20 + 0x28) = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10074d874);
  (*pcVar1)();
}



/* Entry: 10074d874; end: 10074d893;  */

void FUN_10074d874(void)

{
  func_0x000107c61168(&PTR_PTR_112f84c78);
  return;
}



/* Entry: 10074d894; end: 10074d9a3;  */

void FUN_10074d894(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_11067add8;
  func_0x000107c613fc(&UNK_11067add8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puStack_50 = &UNK_1036961e0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10369618c;
  puStack_58 = &UNK_11067adf0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126ad368;
  func_0x000107c610f8(PTR_PTR_1126ad368);
  func_0x000107c471e8();
  func_0x000107c42c20(param_2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 10074d9a4; end: 10074d9c7;  */

void FUN_10074d9a4(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10074d9c8; end: 10074da1f;  */

undefined8 FUN_10074d9c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_10074d894(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 10074da20; end: 10074da33;  */

void FUN_10074da20(long param_1,long param_2)

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



/* Entry: 10074da34; end: 10074daa7; -[SCLensCarouselRestorationServices initWithLensCarouselRestorationStateProvider:] */

undefined1 * FUN_10074da34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f5918;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10074daa8; end: 10074daab;  */

void FUN_10074daa8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10074daac; end: 10074dacb;  */

void FUN_10074daac(void)

{
  func_0x000107c61168(&PTR_PTR_112ef5700);
  return;
}



/* Entry: 10074dacc; end: 10074dda3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10074dacc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  lVar1 = *(long *)(param_7 + _DAT_1130828b8);
  uVar11 = *(undefined8 *)(param_2 + _DAT_113036078);
  uVar12 = *(undefined8 *)(lVar1 + _DAT_1130828e8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = param_5;
  func_0x000107c4af04();
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c4298c();
  func_0x000107c61180();
  uVar4 = param_4;
  func_0x000107c4b33c(param_4);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4ae48();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = param_6;
  func_0x000107c3f1a0();
  func_0x000107c61180();
  lVar6 = 0;
  FUN_10074ddf0();
  lVar7 = lVar6;
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = uVar4;
  ppuStack_70 = &PTR_DAT_1105a0290;
  lVar8 = 0;
  alStack_90[0] = lVar7;
  lStack_78 = lVar6;
  func_0x00010074de10();
  func_0x000107c613fc();
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c6157c(lVar7);
  func_0x000107c453e4();
  *(undefined **)(lVar8 + 0x58) = puVar9;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined8 *)(lVar8 + 0x68) = 0;
  *(undefined8 *)(lVar8 + 0x70) = 0;
  *(undefined8 *)(lVar8 + 0x10) = uVar11;
  *(undefined8 *)(lVar8 + 0x18) = uVar12;
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar3;
  FUN_10074de30(alStack_90,lVar8 + 0x30);
  puVar9 = &UNK_11059fef0;
  func_0x000107c613fc(&UNK_11059fef0,0x18,7);
  func_0x000107c61644(puVar9 + 0x10,lVar8);
  puStack_a0 = &UNK_102b3b384;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_102b3b330;
  puStack_a8 = &UNK_11059ff30;
  ppuVar10 = &puStack_c0;
  puStack_98 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar9 = puStack_98;
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61574(puVar9);
  func_0x000107c4db94(uVar5);
  func_0x000107c61574(lVar7);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  func_0x0001000834e4(alStack_90);
  *(long *)(unaff_x20 + 0x10) = lVar8;
  return;
}



/* Entry: 10074dda4; end: 10074ddc7;  */

void FUN_10074dda4(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10074ddc8; end: 10074ddcf; -[SCLensCarouselRestorationServices lensCarouselRestorationStateProvider] */

undefined8 FUN_10074ddc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10074ddd0; end: 10074ddd7; -[SCLensProcessingLaunchDataServices entryPointTracker] */

undefined8 FUN_10074ddd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10074ddd8; end: 10074dddf; -[SCCameraUIScopedLensProcessingCarouselServices lensProcessingCarouselServices] */

undefined8 FUN_10074ddd8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10074dde0; end: 10074dde7; -[SCLensProcessingCarouselServices lensCarouselApplicator] */

undefined8 FUN_10074dde0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10074dde8; end: 10074ddef; -[SCLensCarouselFeatureInternalServices cameraReplyConfigurationProvider] */

undefined8 FUN_10074dde8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10074ddf0; end: 10074de2f;  */

void FUN_10074ddf0(void)

{
  func_0x000107c61168(&PTR_PTR_112ef5d78);
  return;
}



/* Entry: 10074de30; end: 10074de73;  */

long FUN_10074de30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10074de74; end: 10074de9b;  */

void FUN_10074de74(long param_1,long param_2)

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



/* Entry: 10074de9c; end: 10074dec7;  */

void FUN_10074de9c(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 10074dec8; end: 10074decf;  */

void FUN_10074dec8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f8dd0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10074ded0; end: 10074df53;  */

void FUN_10074ded0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f8dd0,param_2,&UNK_1029f8dd4,param_2,&UNK_1029f8dfc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10074df54; end: 10074df7b;  */

undefined ** FUN_10074df54(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 10074df7c; end: 10074dfbb;  */

void FUN_10074df7c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010074df60();
  FUN_100082720("LensFullScreenUXScopeInitializationPluginPluginProvider",0x37,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10074dfbc; end: 10074e00b;  */

void FUN_10074dfbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10074e00c; end: 10074e013;  */

void FUN_10074e00c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_10074e014();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_110638080;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10074e014; end: 10074e033;  */

void FUN_10074e014(void)

{
  func_0x000107c61168(&PTR_PTR_112f55958);
  return;
}



/* Entry: 10074e034; end: 10074e077;  */

void FUN_10074e034(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_10074e014();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_110638080;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10074e078; end: 10074e083;  */

undefined ** FUN_10074e078(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 10074e084; end: 10074e0af;  */

void FUN_10074e084(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 10074e0b0; end: 10074e0b7;  */

void FUN_10074e0b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1029f8f00);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10074e0b8; end: 10074e13b;  */

void FUN_10074e0b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1029f8f00,param_2,FUN_10074e13c,param_2,&UNK_1029f8f04,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10074e13c; end: 10074e163;  */

void FUN_10074e13c(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10074e164; end: 10074e16f;  */

undefined ** FUN_10074e164(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 10074e170; end: 10074e19b;  */

void FUN_10074e170(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 10074e19c; end: 10074e1a3;  */

void FUN_10074e19c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f9324);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10074e1a4; end: 10074e227;  */

void FUN_10074e1a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f9324,param_2,&UNK_1029f9328,param_2,&UNK_1029f9350,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


