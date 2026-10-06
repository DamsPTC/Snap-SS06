/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c06d54; end: 100c06d73;  */

void FUN_100c06d54(void)

{
  func_0x000107c61168(&PTR_PTR_1128ea558);
  return;
}



/* Entry: 100c06d74; end: 100c06e8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c06d74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = PTR_PTR_1126b0438;
  func_0x000107c61168(PTR_PTR_1126b0438);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c4d3fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar2 = PTR_PTR_1126b0440;
  func_0x000107c610f8();
  uVar3 = 0x6b6f546563617254;
  func_0x000107c5fadc(0x6b6f546563617254,0xea00000000006e65);
  func_0x000107c4709c();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + _DAT_112f93518) = puVar2;
  puVar1 = PTR_PTR_1126ad740;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112f93520) = puVar1;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c06e90; end: 100c06f4b;  */

void FUN_100c06e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112db0c28,&UNK_10d95ac70);
  puVar1 = &UNK_1103da410;
  func_0x000107c613fc(&UNK_1103da410,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_100c06f4c,puVar1);
  return;
}



/* Entry: 100c06f4c; end: 100c071a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c06f4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_70 = FUN_10152c4e4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x10152c568;
  puStack_78 = &UNK_1103da448;
  ppuVar2 = &puStack_90;
  uStack_68 = uVar7;
  func_0x000107c60bc4(ppuVar2);
  uVar5 = uStack_68;
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(uVar5);
  func_0x000107c3e4fc(puVar1,param_3,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000100083b20(&puStack_90);
  puVar6 = puStack_90;
  puVar3 = puStack_90;
  func_0x000107c421c8(puStack_90);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar4 = PTR_PTR_1126d1fd0;
  func_0x000107c610f8(PTR_PTR_1126d1fd0);
  func_0x000107c4660c();
  func_0x000107c61170(puVar3);
  puVar3 = PTR_PTR_1126a7700;
  func_0x000107c61168(PTR_PTR_1126a7700);
  func_0x000100083b20(&puStack_90);
  puVar6 = puStack_90;
  uVar7 = *(undefined8 *)(puStack_90 + _DAT_1130807f0);
  func_0x000107c615f0(uVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c3ed4c(puVar3,param_3,uVar7);
  func_0x000107c61180();
  func_0x000107c615e8(uVar7);
  func_0x000100083b20(&puStack_90);
  puVar6 = puStack_90;
  uVar5 = *(undefined8 *)(puStack_90 + 0x18);
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar6);
  func_0x000100083b20(&uStack_98);
  uVar7 = uStack_98;
  func_0x000107c3fa04(uStack_98);
  func_0x000107c61180();
  func_0x000107c61170(uStack_98);
  puVar6 = PTR_PTR_1126a7708;
  func_0x000107c610f8();
  func_0x000107c61174(puVar4);
  func_0x000107c61174(puVar1);
  func_0x000107c493e8(puVar6,param_3,puVar4,puVar3,puVar1,uVar5,uVar7);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  *param_1 = puVar6;
  return;
}



/* Entry: 100c071a4; end: 100c071b7;  */

void FUN_100c071a4(long param_1,long param_2)

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



/* Entry: 100c071b8; end: 100c0723f; -[SCUserSyncListHandler initWithDocObjectContext:] */

undefined1 * FUN_100c071b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f61f0;
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



/* Entry: 100c07240; end: 100c0728b; +[SCRdcCrashLoggerFactory buildWithCrashLogging:] */

void FUN_100c07240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1fb8;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c46228();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c0728c; end: 100c072ff; -[SCRdcCrashLogger initWithCrashLogger:] */

undefined1 * FUN_100c0728c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f61c8;
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



/* Entry: 100c07300; end: 100c074c7; -[SCRdcDeltaSyncProcessor initWithUserSyncListHandler:crashLogger:graphene:syncUploadService:configProvider:] */

undefined8 *
FUN_100c07300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_1126f61e0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 3,param_6);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(param_7);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_7);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c074c8; end: 100c0750b;  */

void FUN_100c074c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c0750c; end: 100c0754b;  */

void FUN_100c0750c(void)

{
  func_0x0001000285a8(0x112db0c28,&UNK_10d95ac70);
  func_0x0001000823a8(FUN_100c0756c,0);
  return;
}



/* Entry: 100c0754c; end: 100c0756b;  */

void FUN_100c0754c(void)

{
  func_0x000107c61168(&PTR_PTR_112f1e858);
  return;
}



/* Entry: 100c0756c; end: 100c07673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0756c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar5;
  long alStack_a0 [5];
  long lStack_78;
  undefined **ppuStack_70;
  long alStack_68 [3];
  long lStack_50;
  undefined **ppuStack_48;
  
  lVar1 = 0;
  FUN_100c0754c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  ppuStack_48 = &PTR_DAT_1105da718;
  lVar3 = 0;
  alStack_68[0] = lVar2;
  lStack_50 = lVar1;
  FUN_100c07674();
  lVar2 = lVar3;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_68,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = (undefined8 *)((long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar5);
  alStack_a0[2] = *puVar5;
  ppuStack_70 = &PTR_DAT_1105da718;
  lStack_78 = lVar1;
  FUN_100c07694(alStack_a0 + 2,lVar2 + _DAT_112f1e7d8);
  plVar4 = alStack_a0;
  alStack_a0[0] = lVar2;
  alStack_a0[1] = lVar3;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_a0 + 2);
  func_0x0001000834e4(alStack_68);
  *param_1 = plVar4;
  return;
}



/* Entry: 100c07674; end: 100c07693;  */

void FUN_100c07674(void)

{
  func_0x000107c61168(&PTR_PTR_1128a8b58);
  return;
}



/* Entry: 100c07694; end: 100c076d7;  */

long FUN_100c07694(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100c076d8; end: 100c077e3;  */

undefined * FUN_100c076d8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100c077e4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sypN_11034f1a8 + 8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100c077e4; end: 100c077ff;  */

void FUN_100c077e4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100c076d8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100c07800; end: 100c079ef;  */

undefined * FUN_100c07800(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100c079f0);
      (*pcVar2)();
    }
    puVar6 = puStack_68;
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c615f0();
        uVar4 = 0x112db0e98;
        func_0x0001000285a8(0x112db0e98,&UNK_10d95b2b8);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_10152ccb8(uVar7,param_1);
        uVar4 = 0x112db0e98;
        uStack_90 = uVar3;
        func_0x0001000285a8(0x112db0e98,&UNK_10d95b2b8);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          FUN_100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 100c079f0; end: 100c079f3;  */

void FUN_100c079f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c079f4; end: 100c07ac3;  */

void FUN_100c079f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c07ac4; end: 100c07acb;  */

void FUN_100c07ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c07acc; end: 100c07af7;  */

void FUN_100c07acc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100c07af8; end: 100c07b6b; -[SCNewFriendFriendmojiEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c07af8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d72e48,0);
  func_0x000107c61614(param_1 + _DAT_112d72e50,0);
  *(undefined8 *)(param_1 + _DAT_112d72e58) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c07b6c; end: 100c07c17; -[SCNewFriendFriendmojiEntryPoint setValue:forIvarName:] */

void FUN_100c07b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100c07c18(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c07c18; end: 100c07dab;  */

void FUN_100c07c18(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e3670)) {
      uVar2 = 0xd000000000000013;
      func_0x000107c605b8(0xd000000000000013,0x800000010ef1c990,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "NewFriendFriendmoji/SCNewFriendFriendmojiEntryPoint.swift",0x39,2,0x28,
                            0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c07dac);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c594bc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c07dac; end: 100c07db7; -[SCNewFriendFriendmojiEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c07dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72e48;
  func_0x000107c61428(param_1 + _DAT_112d72e48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c07db8; end: 100c07e0b;  */

void FUN_100c07db8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c07e0c; end: 100c07e17; -[SCNewFriendFriendmojiEntryPoint setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c07e0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d72e50;
  func_0x000107c61428(param_1 + _DAT_112d72e50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c07e18; end: 100c07e3f; -[SCNewFriendFriendmojiEntryPoint begin] */

void FUN_100c07e18(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100c07e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c07e40; end: 100c07fbf;  */

/* WARNING: Possible PIC construction at 0x000100c07f48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c07f58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c07f4c) */
/* WARNING: Removing unreachable block (ram,0x000100c07f5c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_100c07e40(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c5b490();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = 0;
    FUN_100c08040();
    func_0x000107c613fc();
    *(long *)(lVar2 + 0x10) = lVar1;
    puVar3 = &UNK_1103a2db0;
    func_0x000107c613fc(&UNK_1103a2db0,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    func_0x0001000285a8(0x112d72d98,&UNK_10d9331e0);
    func_0x000107c613fc();
    func_0x000107c61174(lVar1);
    func_0x000107c61174(unaff_x20);
    uVar4 = 0x101324908;
    func_0x0001000bdd8c(0x101324908,puVar3);
    *(undefined8 *)(lVar2 + 0x18) = uVar4;
    func_0x000107c4e9e4(lVar1);
    func_0x000107c61180();
    func_0x0001003a5b88();
    func_0x000107c4fba8(lVar1);
    lVar1 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c07fc0; end: 100c07fe3;  */

void FUN_100c07fc0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c07fe4; end: 100c07fef; -[SCNewFriendFriendmojiEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c07fe4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72e48;
  func_0x000107c61428(param_1 + _DAT_112d72e48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c07ff0; end: 100c08033;  */

void FUN_100c07ff0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c08034; end: 100c0803f; -[SCNewFriendFriendmojiEntryPoint snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08034(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d72e50;
  func_0x000107c61428(param_1 + _DAT_112d72e50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c08040; end: 100c0805f;  */

void FUN_100c08040(void)

{
  func_0x000107c61168(&PTR_PTR_112d72de0);
  return;
}



/* Entry: 100c08060; end: 100c08067; -[SCFriendmojiDecoratorPluginScope plugInRegistry] */

undefined8 FUN_100c08060(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c08068; end: 100c080db; -[SCSCPinnedConversationsServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08068(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11301aac0,0);
  func_0x000107c61614(param_1 + _DAT_11301aac8,0);
  *(undefined8 *)(param_1 + _DAT_11301aad0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c080dc; end: 100c08187; -[SCSCPinnedConversationsServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100c080dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100c08188(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c08188; end: 100c0831f;  */

void FUN_100c08188(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e3ddb0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f1c2250,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ConvoUserSessionScopeGraphBridge/SCSCPinnedConversationsServicesSaberServiceProvider.swift"
                            ,0x5a,2,0x46,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c08320);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c539a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c08320; end: 100c0832b; -[SCSCPinnedConversationsServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08320(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301aac0;
  func_0x000107c61428(param_1 + _DAT_11301aac0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0832c; end: 100c0837f;  */

void FUN_100c0832c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c08380; end: 100c0838b; -[SCSCPinnedConversationsServicesSaberServiceProvider setConvoUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08380(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301aac8;
  func_0x000107c61428(param_1 + _DAT_11301aac8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0838c; end: 100c083bf; -[SCSCPinnedConversationsServicesSaberServiceProvider __safeProvide] */

void FUN_100c0838c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c083c0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c083c0; end: 100c084a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c083c0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40768();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c08504();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_11301a018);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11301aad0);
      *(long *)(unaff_x20 + _DAT_11301aad0) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c084a8; end: 100c084b3; -[SCSCPinnedConversationsServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c084a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301aac0;
  func_0x000107c61428(param_1 + _DAT_11301aac0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c084b4; end: 100c084f7;  */

void FUN_100c084b4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c084f8; end: 100c08503; -[SCSCPinnedConversationsServicesSaberServiceProvider convoUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c084f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301aac8;
  func_0x000107c61428(param_1 + _DAT_11301aac8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c08504; end: 100c0857f;  */

void FUN_100c08504(undefined8 param_1)

{
  if (lRam0000000113019b98 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7ca8c8);
  return;
}



/* Entry: 100c08580; end: 100c08687; -[SCPinnedConversationsFriendmojiDecoratorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08580(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112724d08;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c4e9e4();
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100c08688; end: 100c0878f; -[SCTopGroupsFriendmojiDecoratorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08688(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  param_1 = param_1 + _DAT_1127250dc;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c4e9e4();
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100c08790; end: 100c0879b;  */

void FUN_100c08790(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 100c0879c; end: 100c08813;  */

/* WARNING: Possible PIC construction at 0x000100c087e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c087fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c087ec) */
/* WARNING: Removing unreachable block (ram,0x000100c08800) */

void FUN_100c0879c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c3db80(param_2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c08814; end: 100c08887; -[SCLensExternalCompositeDataFetcher registerExternalDataFetchers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08814(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = (long)_DAT_11278d050;
  func_0x000107c611ec(param_1 + lVar1);
  func_0x000107c3d7a0(*(undefined8 *)(param_1 + _DAT_11278d04c),param_2,param_3);
  func_0x000107c611f0(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c08888; end: 100c088fb; -[SCSCBundledLensProviderServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08888(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113027128,0);
  func_0x000107c61614(param_1 + _DAT_113027130,0);
  *(undefined8 *)(param_1 + _DAT_113027138) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c088fc; end: 100c089a7; -[SCSCBundledLensProviderServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100c088fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100c089a8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c089a8; end: 100c08b3f;  */

void FUN_100c089a8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensUserSessionScopeGraphBridge/SCSCBundledLensProviderServicesSaberServiceProvider.swift"
                            ,0x59,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c08b40);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c08b40; end: 100c08b4b; -[SCSCBundledLensProviderServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113027128;
  func_0x000107c61428(param_1 + _DAT_113027128,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c08b4c; end: 100c08b9f;  */

void FUN_100c08b4c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c08ba0; end: 100c08bab; -[SCSCBundledLensProviderServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113027130;
  func_0x000107c61428(param_1 + _DAT_113027130,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c08bac; end: 100c08bdf; -[SCSCBundledLensProviderServicesSaberServiceProvider __safeProvide] */

void FUN_100c08bac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c08be0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c08be0; end: 100c08cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08be0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4b520();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c08d24();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_1130265f8);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113027138);
      *(long *)(unaff_x20 + _DAT_113027138) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c08cc8; end: 100c08cd3; -[SCSCBundledLensProviderServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08cc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113027128;
  func_0x000107c61428(param_1 + _DAT_113027128,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c08cd4; end: 100c08d17;  */

void FUN_100c08cd4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c08d18; end: 100c08d23; -[SCSCBundledLensProviderServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08d18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113027130;
  func_0x000107c61428(param_1 + _DAT_113027130,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c08d24; end: 100c08d9f;  */

void FUN_100c08d24(undefined8 param_1)

{
  if (lRam0000000113023040 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7cecc4);
  return;
}



/* Entry: 100c08da0; end: 100c08e4b; -[SCBundledLensMetadataProviderPluginEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100c08e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c08e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c08e20) */
/* WARNING: Removing unreachable block (ram,0x000100c08e30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08da0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1 + _DAT_11278487c;
    func_0x000107c61148(lVar2);
  }
  func_0x000107c4b294(lVar2);
  func_0x000107c61180();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112784880;
    func_0x000107c61148(lVar1);
  }
  func_0x000107c3ee24(lVar1);
  func_0x000107c61180();
  func_0x000107c4fba8(lVar2,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c08e4c; end: 100c08e53; -[SCLensMetadataRepositoryPluginScope lensMetadatasProvidersPlugInRegistry] */

undefined8 FUN_100c08e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c08e54; end: 100c08f5f; -[SCLensMetadataRepositoryLensPickerPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c08e54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1 + _DAT_112784884;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4b2fc();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10ae9e0c8;
  puStack_40 = &UNK_1108a6f38;
  lStack_38 = lVar2;
  func_0x000107c61174(lVar2);
  func_0x000107c3e4fc(puVar3,param_2,&puStack_58);
  func_0x000107c61180();
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112784888;
    func_0x000107c61148(lVar1);
  }
  lVar4 = lVar1;
  func_0x000107c4b294(lVar1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lStack_38);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 100c08f60; end: 100c091b7; -[SCLensMetadataRepositoryLensSchedulePluginEntryPoint begin] */

void FUN_100c08f60(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61144(auStack_78,param_1);
  lVar1 = param_1;
  FUN_100c091b8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4b6c8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar3 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_10ae9e130;
  puStack_90 = &UNK_110c8d720;
  func_0x000107c6111c(auStack_80,auStack_78);
  lStack_88 = lVar2;
  func_0x000107c3e4fc(puVar3);
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000100c091dc(param_1);
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c4b294();
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar1);
  lVar1 = param_1;
  FUN_100c091b8();
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c501cc();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar5 = PTR_PTR_1126ae720;
  if (lVar4 != 0) {
    func_0x000107c6111c(auStack_b0,auStack_78);
    func_0x000107c61174(lVar4);
    func_0x000107c3e4fc(puVar5);
    func_0x000107c61180();
    func_0x000100c091dc(param_1);
    func_0x000107c61180();
    lVar1 = param_1;
    func_0x000107c4b294();
    func_0x000107c61180();
    func_0x000107c4fba8();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61120(auStack_b0);
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(lVar2);
  func_0x000107c61120(auStack_78);
  return;
}



/* Entry: 100c091b8; end: 100c091ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c091b8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112784894);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c09200; end: 100c09207; -[SCLensScheduleMetadataStoreServices replyCameraScheduleMetadataStoreCreator] */

undefined8 FUN_100c09200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100c09208; end: 100c0927b; -[SCSCUnlockableDataStoreServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c09208(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11302a068,0);
  func_0x000107c61614(param_1 + _DAT_11302a070,0);
  *(undefined8 *)(param_1 + _DAT_11302a078) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c0927c; end: 100c09327; -[SCSCUnlockableDataStoreServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100c0927c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100c09328(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c09328; end: 100c094bf;  */

void FUN_100c09328(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensUserSessionScopeGraphBridge/SCSCUnlockableDataStoreServicesSaberServiceProvider.swift"
                            ,0x59,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c094c0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c094c0; end: 100c094cb; -[SCSCUnlockableDataStoreServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c094c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302a068;
  func_0x000107c61428(param_1 + _DAT_11302a068,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c094cc; end: 100c0951f;  */

void FUN_100c094cc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c09520; end: 100c0952b; -[SCSCUnlockableDataStoreServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c09520(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302a070;
  func_0x000107c61428(param_1 + _DAT_11302a070,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0952c; end: 100c0955f; -[SCSCUnlockableDataStoreServicesSaberServiceProvider __safeProvide] */

void FUN_100c0952c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c09560();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c09560; end: 100c09647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c09560(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4b520();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c096a4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113026858);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11302a078);
      *(long *)(unaff_x20 + _DAT_11302a078) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c09648; end: 100c09653; -[SCSCUnlockableDataStoreServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c09648(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302a068;
  func_0x000107c61428(param_1 + _DAT_11302a068,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c09654; end: 100c09697;  */

void FUN_100c09654(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c09698; end: 100c096a3; -[SCSCUnlockableDataStoreServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c09698(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302a070;
  func_0x000107c61428(param_1 + _DAT_11302a070,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c096a4; end: 100c0971f;  */

void FUN_100c096a4(undefined8 param_1)

{
  if (lRam0000000113026370 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7d0560);
  return;
}



/* Entry: 100c09720; end: 100c097fb; -[SCLensMetadataRepositoryUnlockablesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c09720(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c3bf2c();
  func_0x000107c61180();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10ae9e2ec;
  puStack_40 = &UNK_1108a6f38;
  puVar2 = PTR_PTR_1126ae720;
  lStack_38 = lVar1;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_58);
  func_0x000107c61180();
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_11278489c;
    func_0x000107c61148(lVar3);
  }
  lVar4 = lVar3;
  func_0x000107c4b294(lVar3);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 100c097fc; end: 100c098fb; -[SCLensMetadataRepositoryUnlockablesPluginEntryPoint _metadataStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c097fc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_1127848a0;
    func_0x000107c61148(lVar6);
  }
  lVar1 = lVar6;
  func_0x000107c5d2a8(lVar6);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000100078e94();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_112784898;
  func_0x000107c61148(param_1);
  lVar3 = param_1;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar5 = lVar1;
  func_0x000107c40a10(lVar1,param_2,lVar2,7,lVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 100c098fc; end: 100c09903; -[SCUnlockableDataStoreServices unlockableFilteredDataStoreCreator] */

undefined8 FUN_100c098fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c09904; end: 100c099bb;  */

void FUN_100c09904(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_2);
  puVar1 = PTR_PTR_1126ae720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c099bc; end: 100c099c7;  */

void FUN_100c099bc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithValue__1125ae900,param_2);
  return;
}



/* Entry: 100c099c8; end: 100c09a2f;  */

/* WARNING: Possible PIC construction at 0x000100c09a0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c09a10) */

void FUN_100c099c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c4d2d4(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3ecf4(uVar1);
  func_0x000107c61180();
  func_0x000107c3d7a0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c09a30; end: 100c09a8f; -[_TtC55SCLensScheduleNamespaceRequestFeatureInfoPluginRegistry59SCLensScheduleNamespaceRequestFeatureInfoPluginSaberService buildSaberPlugins] */

void FUN_100c09a30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c09a90();
  func_0x000107c61170(param_1);
  uVar2 = 0x113036c20;
  func_0x0001000285a8(0x113036c20,&UNK_10dcb1f00);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100c09a90; end: 100c09b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c09a90(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lStack_40;
  long lStack_38;
  
  func_0x00010008a7c8(&lStack_40);
  if (lStack_40 != 0) {
    func_0x000100083b20(&lStack_38);
    func_0x000107c61574(lStack_40);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lStack_38 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c61550();
      if (((ulong)puVar3 >> 0x3e != 0) || (((ulong)puVar2 & 1) == 0)) {
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar2 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar2 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar2 = puVar3;
          }
          func_0x000107c60480(puVar2);
        }
        puVar3 = (undefined *)0x0;
        FUN_100c0a500(0,puVar2 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      uVar4 = (ulong)puVar3 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar4 + 0x10);
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_100c0a500(uVar4,uVar1 + 1,1,puVar3);
        uVar4 = uVar4 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
      *(long *)(uVar4 + uVar1 * 8 + 0x20) = lStack_38;
    }
  }
  return;
}



/* Entry: 100c09b98; end: 100c09c5f;  */

void FUN_100c09b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112db0648,&UNK_10d959fa0);
  puVar1 = &UNK_1103d8ac8;
  func_0x000107c613fc(&UNK_1103d8ac8,0x40,7);
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
  func_0x0001000823a8(FUN_100c09ca8,puVar1);
  return;
}



/* Entry: 100c09c60; end: 100c09ca7;  */

void FUN_100c09c60(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100c09b98(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100082720("SCSponsoredLensScheduleRequestFeaturePluginProvider",0x33,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100c09ca8; end: 100c09dc7;  */

void FUN_100c09ca8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126a7690;
  func_0x000107c61168();
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000107c4c1bc(puVar1,param_3,uStack_68,uStack_70,uStack_78,uStack_80,uStack_88,uStack_90);
  func_0x000107c61180();
  func_0x000107c61170(uStack_90);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_68);
  *param_1 = puVar1;
  return;
}



/* Entry: 100c09dc8; end: 100c09fbb; +[SCSponsoredLensScheduleRequestFeatureInfoProviderFactory makeInfoProviderWithUserSessionScope:adConfigService:userInfoServices:userAdIdServices:appStartExperimentReaderServices:networkConnectivityAnnouncerServices:] */

void FUN_100c09dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c5da60(param_3);
  func_0x000107c61180();
  uVar1 = param_7;
  func_0x000107c3de48(param_7);
  func_0x000107c61180();
  func_0x000107c61170(param_7);
  uVar2 = param_3;
  func_0x000107c5d2cc(param_3,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  puVar3 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_105381270;
  puStack_80 = &UNK_11087e888;
  uStack_78 = param_4;
  uStack_70 = param_8;
  uStack_68 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_4);
  func_0x000107c3e4fc(puVar3,param_2,&puStack_98);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126b7d80;
  func_0x000107c610f4(PTR_PTR_1126b7d80);
  uVar1 = param_5;
  func_0x000107c519cc(param_5);
  func_0x000107c61180();
  uVar5 = param_6;
  func_0x000107c3d9e8(param_6);
  func_0x000107c61180();
  func_0x000107c61170(param_6);
  func_0x000107c455f4(puVar4,param_2,puVar3,uVar1,uVar2,uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c09fbc; end: 100c0a07b; -[SCUserSession unlockableSensitivityControllerWithAppStartExperimentReader:] */

void FUN_100c09fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c60b18(param_2);
  func_0x000107c61180();
  func_0x000107c61174(param_3);
  func_0x000107c4d9d4(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100c0a07c; end: 100c0a21f;  */

/* WARNING: Removing unreachable block (ram,0x000100c0a1a4) */

void FUN_100c0a07c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107c61174(param_2);
  puVar1 = PTR_PTR_1126b85c8;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c02d8;
  func_0x000107c61158(PTR_PTR_1126c02d8);
  func_0x000107c60b14();
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c02d8;
  func_0x000107c3b8dc(PTR_PTR_1126c02d8);
  func_0x000107c61180();
  puVar4 = puVar1;
  func_0x000107c4b754();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c527b0(puVar4);
  func_0x000107c4be6c(puVar4);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c02d8;
    func_0x000107c610f4(PTR_PTR_1126c02d8);
    func_0x000107c456e8();
  }
  func_0x000107c3d7b0(puVar4);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c0a220; end: 100c0a273; +[SCUnlockableSensitivityController _gtqSensitivityPath] */

void FUN_100c0a220(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b85c8;
  func_0x000107c5a9bc(PTR_PTR_1126b85c8);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4e450();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c0a274; end: 100c0a35f; -[SCUnlockableSensitivityController initWithAppStartExperimentReader:] */

undefined1 * FUN_100c0a274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126eaea0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41360(0);
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41360(0);
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41360(0);
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c0a360; end: 100c0a3b7; -[SCUnlockableSensitivityController addObserver] */

void FUN_100c0a360(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c41570(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61180();
  func_0x000107c3d7bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


