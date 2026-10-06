/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009980b8; end: 100998143;  */

void FUN_1009980b8(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100998144,param_1);
  return;
}



/* Entry: 100998144; end: 10099814b;  */

void FUN_100998144(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101ccb9f0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099814c; end: 1009981cf;  */

void FUN_10099814c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101ccb9f0,param_2,FUN_1009981d0,param_2,&UNK_101ccb9f4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1009981d0; end: 1009981f7;  */

void FUN_1009981d0(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1009981f8; end: 100998203;  */

void FUN_1009981f8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002ba55c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_100998300(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_100998320(uStack_58,uVar2,uVar3,uStack_70);
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  *param_1 = lVar1;
  return;
}



/* Entry: 100998204; end: 1009982ff;  */

void FUN_100998204(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_1002ba55c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_100998300(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uStack_70);
  FUN_100998320(uStack_58,uVar1,uVar2,uStack_70);
  *(undefined8 *)(param_2 + 0x10) = uStack_58;
  *param_1 = param_2;
  return;
}



/* Entry: 100998300; end: 10099831f;  */

void FUN_100998300(void)

{
  func_0x000107c61168(&PTR_PTR_112e17fc0);
  return;
}



/* Entry: 100998320; end: 100998403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100998320(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar2 = param_2;
  func_0x000107c5c894();
  func_0x000107c61180();
  lVar3 = param_3;
  func_0x000107c40688();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(param_4 + _DAT_112e18030);
    FUN_10099840c(0);
    func_0x000107c610f8();
    func_0x000107c6157c(uVar4);
    FUN_10099842c(uVar2,lVar3,uVar4);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100998404);
  (*pcVar1)();
}



/* Entry: 100998404; end: 10099840b; -[SCTextSendingServices textSender] */

undefined8 FUN_100998404(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10099840c; end: 10099842b;  */

void FUN_10099840c(void)

{
  func_0x000107c61168(&PTR_PTR_1128010a0);
  return;
}



/* Entry: 10099842c; end: 1009985fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10099842c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  long *plVar7;
  code *pcVar8;
  
  lVar1 = _DAT_112e17f50;
  puVar4 = &stack0xffffffffffffff90;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e17f30) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e17f38) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e17f40) = param_3;
  puVar3 = PTR_PTR_1126a9000;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112e17f48) = puVar3;
  FUN_10099840c();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  plVar7 = *(long **)(puVar4 + _DAT_112e17f40);
  puVar3 = &UNK_11046b5f0;
  func_0x000107c613fc(&UNK_11046b5f0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,puVar4);
  pcVar8 = *(code **)(*plVar7 + 0x60);
  func_0x000107c61174();
  func_0x000107c6157c(plVar7);
  pcVar5 = FUN_100998668;
  puVar6 = puVar3;
  (*pcVar8)(FUN_100998668);
  func_0x000107c61574(plVar7);
  func_0x000107c61574(puVar3);
  func_0x000107c614f0(pcVar5);
  uVar2 = *(undefined8 *)(puVar4 + _DAT_112e17f50);
  pcVar8 = *(code **)(puVar6 + 0x10);
  func_0x000107c6157c(uVar2);
  (*pcVar8)();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c615e8(pcVar5);
  func_0x000107c61574(uVar2);
  return puVar4;
}



/* Entry: 1009985fc; end: 10099861f;  */

void FUN_1009985fc(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100998620; end: 100998667;  */

int FUN_100998620(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100998668; end: 10099866f;  */

void FUN_100998668(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_100998714(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100998670; end: 100998713;  */

void FUN_100998670(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_100998714(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100998714; end: 100998967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100998714(ulong *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = 0;
  func_0x0001009986cc(param_1,&uStack_b0,0x112da56c8,&UNK_10d94ad50);
  if (uStack_a8 == 0) {
    FUN_10099899c(&uStack_b0,0x112da56c8,&UNK_10d94ad50);
  }
  else {
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    lStack_68 = lStack_98;
    uStack_70 = uStack_a0;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
    func_0x000101cd1b6c();
    if ((uStack_b0 == *param_1 && uStack_a8 == param_1[1]) ||
       (func_0x000107c605b8(uStack_b0,uStack_a8,*param_1,param_1[1],0), (uStack_b0 & 1) != 0)) {
      func_0x0001009986cc(&uStack_70,&uStack_b0,0x112d387f8,&UNK_10d902650);
      if (lStack_98 == 0) {
        FUN_10099899c(&uStack_b0,0x112d387f8,&UNK_10d902650);
      }
      else {
        func_0x000107c6147c(&uStack_d0,&uStack_b0,PTR___sypN_11034f1a8 + 8,&UNK_11046bbc8,6);
        if ((uVar1 & 1) != 0) {
          plVar2 = *(long **)(unaff_x20 + _DAT_112e17f38);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (plVar2 == (long *)0x0) {
            func_0x000107c6142c(uStack_b8);
            func_0x000107c6142c(uStack_c8);
          }
          else {
            uVar3 = 0;
            func_0x000104522c9c(0);
            uVar4 = uStack_c0;
            func_0x00010452281c(uStack_c0,uStack_b8,uVar3);
            plVar5 = plVar2;
            func_0x000107c40684();
            func_0x000107c61180();
            func_0x000107c615e8(plVar2);
            func_0x000107c61170(uVar4);
            FUN_1000285a8(0x112d3b7d0,&UNK_10d904cc0);
            plVar2 = plVar5;
            func_0x0001000b637c();
            puVar6 = &UNK_11046b5f0;
            func_0x000107c613fc(&UNK_11046b5f0,0x18,7);
            func_0x000107c61614(puVar6 + 0x10);
            puVar7 = &UNK_11046b640;
            func_0x000107c613fc(&UNK_11046b640,0x38,7);
            *(undefined **)(puVar7 + 0x10) = puVar6;
            *(undefined8 *)(puVar7 + 0x18) = uStack_d0;
            *(undefined8 *)(puVar7 + 0x20) = uStack_c8;
            *(undefined8 *)(puVar7 + 0x28) = uStack_c0;
            *(undefined8 *)(puVar7 + 0x30) = uStack_b8;
            puVar6 = &UNK_101cd123c;
            (**(code **)(*plVar2 + 0x60))(&UNK_101cd123c,puVar7);
            func_0x000107c61574(plVar2);
            func_0x000107c61574(puVar7);
            func_0x000107c61170(plVar5);
            func_0x000107c615e8(puVar6);
          }
        }
      }
    }
    func_0x0001014b0a5c(&uStack_80);
  }
  return;
}



/* Entry: 100998968; end: 10099899b;  */

void FUN_100998968(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10099899c; end: 1009989db;  */

undefined8 FUN_10099899c(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1009989dc; end: 100998a17;  */

void FUN_1009989dc(void)

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



/* Entry: 100998a18; end: 100998a23;  */

undefined ** FUN_100998a18(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 100998a24; end: 100998b4b;  */

void FUN_100998a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11044b078;
  func_0x000107c613fc(&UNK_11044b078,0x68,7);
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
  FUN_1000823a8(FUN_100998db0,puVar1);
  return;
}



/* Entry: 100998b4c; end: 100998baf;  */

void FUN_100998b4c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100998a24(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  FUN_100082720("WelcomeBackInAppNotificationPluginPluginProvider",0x30,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100998bb0; end: 100998d83;  */

void FUN_100998bb0(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = param_3;
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  func_0x000100998dec();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  FUN_10028941c();
  puVar2 = &UNK_11044b0a0;
  func_0x000107c613fc(&UNK_11044b0a0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,lVar1);
  puVar3 = &UNK_11044b178;
  func_0x000107c613fc(&UNK_11044b178,0x70,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_9;
  *(undefined8 *)(puVar3 + 0x20) = param_6;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  *(undefined8 *)(puVar3 + 0x30) = param_4;
  *(long *)(puVar3 + 0x38) = param_3;
  *(undefined8 *)(puVar3 + 0x40) = param_11;
  *(undefined8 *)(puVar3 + 0x48) = uStack_78;
  *(undefined8 *)(puVar3 + 0x50) = param_10;
  *(undefined8 *)(puVar3 + 0x58) = param_8;
  *(undefined8 *)(puVar3 + 0x60) = param_7;
  *(undefined8 *)(puVar3 + 0x68) = param_2;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_11);
  uVar5 = uStack_78;
  func_0x000107c61174(uStack_78);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_7);
  uVar4 = 6;
  func_0x000100859150(6,0,0x58,2,0,0,&UNK_10d9d7ea0,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uStack_80);
  uVar5 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  func_0x000107c61574(uVar5);
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_11044b0f0;
  return;
}



/* Entry: 100998d84; end: 100998da7;  */

void FUN_100998d84(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100998da8; end: 100998daf;  */

void FUN_100998da8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100998db0; end: 100998e7f;  */

void FUN_100998db0(void)

{
  long unaff_x20;
  
  FUN_100998bb0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 100998e80; end: 100998e8f;  */

void FUN_100998e80(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100998e90; end: 100998ec3;  */

void FUN_100998e90(void)

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



/* Entry: 100998ec4; end: 100998ef3;  */

void FUN_100998ec4(void)

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



/* Entry: 100998ef4; end: 100998f2f;  */

void FUN_100998ef4(void)

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



/* Entry: 100998f30; end: 100998f3f;  */

void FUN_100998f30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100998f40; end: 100998f93;  */

void FUN_100998f40(void)

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



/* Entry: 100998f94; end: 100998feb;  */

void FUN_100998f94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100998fec; end: 10099905f;  */

void FUN_100998fec(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100999060; end: 10099907f;  */

void FUN_100999060(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100999080; end: 100999137; -[SCUserSessionSubScopesRouter prepareLogoutHandler] */

/* WARNING: Possible PIC construction at 0x0001009990e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001009990e8) */

void FUN_100999080(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f4(PTR_PTR_1126ae790);
  func_0x000107c470d0();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5dc64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100999138; end: 10099923f; -[SCUserSessionSubScopesRouter _logoutCleanupHandlers] */

void FUN_100999138(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c61160();
  puVar2 = *(undefined **)(param_1 + 0x68);
  func_0x000107c3ecf4();
  func_0x000107c61180();
  puVar4 = PTR____NSArray0__struct_11034ab48;
  if (puVar2 != (undefined *)0x0) {
    puVar4 = puVar2;
  }
  func_0x000107c61174(puVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar4;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_100c0c4e0;
  puStack_48 = &UNK_110844e40;
  uStack_40 = uVar5;
  puStack_38 = puVar1;
  func_0x000107c61174(puVar1);
  func_0x000107c61174(uVar5);
  func_0x000107c42c14(uVar3,param_2,&PTR___NSConcreteGlobalBlock_1108ab8e0,&puStack_60);
  puVar4 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puStack_38);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100999240; end: 10099929f; -[_TtC36SCLogoutCleanupHandlerPluginRegistry40SCLogoutCleanupHandlerPluginSaberService buildSaberPlugins] */

void FUN_100999240(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1009992a0();
  func_0x000107c61170(param_1);
  uVar2 = 0x112e01870;
  FUN_1000285a8(0x112e01870,&UNK_10d9d2ad0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1009992a0; end: 1009993df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1009992a0(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uStack_61;
  long lStack_60;
  long lStack_58;
  
  lVar7 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_61 = *(undefined1 *)(lVar7 + 0x112e01840);
    FUN_10008a7c8(&lStack_60,&uStack_61);
    lVar2 = lStack_60;
    if (lStack_60 != 0) {
      FUN_100083b20(&lStack_58);
      func_0x000107c61574(lVar2);
      lVar2 = lStack_58;
      if (lStack_58 != 0) {
        puVar4 = puVar5;
        func_0x000107c61550();
        if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
           (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar5 >> 0x3e == 0) {
            puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar5) {
              puVar3 = puVar5;
            }
            func_0x000107c60480(puVar3);
          }
          puVar4 = (undefined *)0x0;
          FUN_100999558(0,puVar3 + 1,1,puVar5);
        }
        uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar6 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_100999558(puVar5,uVar1 + 1,1,puVar4);
          uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
        *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  return puVar5;
}



/* Entry: 1009993e0; end: 1009993e7;  */

void FUN_1009993e0(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  if (*param_2 == '\0') {
    func_0x000100999468();
    pcVar1 = "ConnectedLensLogoutCleanupPluginProvider";
    uVar2 = 0x28;
  }
  else if (*param_2 == '\x01') {
    FUN_100999838();
    pcVar1 = "WebBrowserLogoutCleanupPluginProvider";
    uVar2 = 0x25;
    unaff_x20 = param_2;
  }
  else {
    func_0x000100999904();
    pcVar1 = "WebBrowsingUserDataLogoutCleanupPluginProvider";
    uVar2 = 0x2e;
    unaff_x20 = param_2;
  }
  FUN_100082720(pcVar1,uVar2,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1009993e8; end: 1009994b3;  */

void FUN_1009993e8(undefined8 *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\0') {
    func_0x000100999468();
    pcVar1 = "ConnectedLensLogoutCleanupPluginProvider";
    uVar2 = 0x28;
  }
  else if (*param_2 == '\x01') {
    FUN_100999838();
    pcVar1 = "WebBrowserLogoutCleanupPluginProvider";
    uVar2 = 0x25;
    param_3 = param_2;
  }
  else {
    func_0x000100999904();
    pcVar1 = "WebBrowsingUserDataLogoutCleanupPluginProvider";
    uVar2 = 0x2e;
    param_3 = param_2;
  }
  FUN_100082720(pcVar1,uVar2,2);
  *param_1 = param_3;
  return;
}



/* Entry: 1009994b4; end: 100999537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009994b4(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  lVar1 = lStack_38;
  func_0x000107c4ec80();
  func_0x000107c61180();
  func_0x000107c61170();
  FUN_100999538();
  func_0x000107c610f8();
  *(long *)(lStack_38 + _DAT_112db0670) = lVar1;
  puVar2 = auStack_48;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 100999538; end: 100999557;  */

void FUN_100999538(void)

{
  func_0x000107c61168(&PTR_PTR_1127dfb50);
  return;
}



/* Entry: 100999558; end: 10099967f;  */

ulong FUN_100999558(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100999680);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100999694(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10099967c);
      (*pcVar1)();
    }
    FUN_100999714(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100999680; end: 100999693;  */

void FUN_100999680(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e01878 == (undefined *)0x0 || ((ulong)puRam0000000112e01878 & 1) != 0) {
    puVar1 = &UNK_10e89d27e;
    func_0x000107c61518(&UNK_10e89d27e,0x23,0,0);
    puRam0000000112e01878 = puVar1;
  }
  return;
}



/* Entry: 100999694; end: 100999713;  */

undefined * FUN_100999694(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_100999680();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100999714; end: 100999837;  */

long FUN_100999714(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100999834);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100999838);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e01870;
        FUN_1000285a8(0x112e01870,&UNK_10d9d2ad0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e01870;
      FUN_1000285a8(0x112e01870,&UNK_10d9d2ad0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100999830);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100999838; end: 100999877;  */

void FUN_100999838(void)

{
  FUN_1000285a8(0x112db0668,&UNK_10d95a0d0);
  FUN_1000823a8(FUN_100999898,0);
  return;
}



/* Entry: 100999878; end: 100999897;  */

void FUN_100999878(void)

{
  func_0x000107c61168(&PTR_PTR_1127e0560);
  return;
}



/* Entry: 100999898; end: 1009998c7;  */

void FUN_100999898(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100999878();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1009998c8; end: 100999943; -[_TtC23WebBrowserLogoutCleanup24WebBrowsingLogoutHandler init] */

void FUN_1009998c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100999944; end: 100999963;  */

void FUN_100999944(void)

{
  func_0x000107c61168(&PTR_PTR_1127e0610);
  return;
}



/* Entry: 100999964; end: 100999993;  */

void FUN_100999964(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100999944();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 100999994; end: 1009999cf; -[_TtC32WebBrowsingUserDataLogoutCleanup39WebBrowsingUserDataLogoutCleanupHandler init] */

void FUN_100999994(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1009999d0; end: 1009999fb;  */

void FUN_1009999d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1009999fc; end: 100999a1f;  */

undefined ** FUN_1009999fc(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 100999a20; end: 100999a9f;  */

void FUN_100999a20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110712230;
  func_0x000107c613fc(&UNK_110712230,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100999aa0,puVar1);
  return;
}



/* Entry: 100999aa0; end: 100999aa7;  */

void FUN_100999aa0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11300c690,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11300c690,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1107122c8;
  func_0x000107c613fc(&UNK_1107122c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103dc8430;
  FUN_10058fa64(&UNK_103dc8430,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100999aa8; end: 100999b9f;  */

void FUN_100999aa8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x11300c690,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x11300c690,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1107122c8;
  func_0x000107c613fc(&UNK_1107122c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103dc8430;
  FUN_10058fa64(&UNK_103dc8430,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 100999ba0; end: 100999bc3;  */

void FUN_100999ba0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100999bc4; end: 100999d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100999bc4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_2;
  FUN_10023a204();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_11300c6a0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_11300c6a8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_11300c6b0) = param_4;
  *(undefined8 *)(lVar3 + _DAT_11300c6b8) = param_5;
  *(undefined8 *)(lVar3 + _DAT_11300c6c0) = param_6;
  *(undefined8 *)(lVar3 + _DAT_11300c6c8) = param_7;
  *(undefined8 *)(lVar3 + _DAT_11300c6d0) = param_8;
  *(undefined8 *)(lVar3 + _DAT_11300c6d8) = param_9;
  *(undefined8 *)(lVar3 + _DAT_11300c6e0) = param_10;
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 100999d0c; end: 100999dcf;  */

void FUN_100999d0c(void)

{
  long unaff_x20;
  
  FUN_100999bc4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 100999dd0; end: 100999df7;  */

undefined ** FUN_100999dd0(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 100999df8; end: 100999e37;  */

void FUN_100999df8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100999ddc();
  FUN_100082720("AdAppInstallMetricsValidationServiceProviderWrapperScopeInitializationPluginProvider"
                ,0x54,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100999e38; end: 100999e3f;  */

void FUN_100999e38(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177b150);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100999e40; end: 100999ec3;  */

void FUN_100999e40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177b150,param_2,&UNK_10177b154,param_2,&UNK_10177b17c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100999ec4; end: 100999ecf;  */

undefined ** FUN_100999ec4(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 100999ed0; end: 100999f5b;  */

void FUN_100999ed0(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100999f5c,param_1);
  return;
}



/* Entry: 100999f5c; end: 100999f63;  */

void FUN_100999f5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  FUN_10099a028();
  FUN_10099a048();
  uVar2 = uVar1;
  FUN_10099a09c();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(uVar2,&UNK_10177b314);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 100999f64; end: 10099a027;  */

void FUN_100999f64(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100079360(0);
  uVar1 = 0;
  FUN_10099a028();
  FUN_10099a048();
  uVar2 = uVar1;
  FUN_10099a09c();
  func_0x000107c61170(uVar1);
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(uVar2,&UNK_10177b314,param_2,&UNK_10177b318,param_2,&UNK_10177b340,param_2);
  *param_1 = uVar2;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099a028; end: 10099a047;  */

void FUN_10099a028(void)

{
  func_0x000107c61168(&PTR_PTR_1129dfd48);
  return;
}



/* Entry: 10099a048; end: 10099a04f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10099a048(void)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309ab70) = 0xb;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10099a050; end: 10099a09b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10099a050(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309ab70) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10099a09c; end: 10099a0c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10099a09c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  FUN_100079360();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_11309ac58) = 4;
  *(undefined8 *)(lVar3 + _DAT_11309ac60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac78) = 0;
  *(long *)(lVar3 + _DAT_11309ac80) = param_1;
  *(undefined8 *)(lVar3 + _DAT_11309ac88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ac98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309aca8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acb8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acc8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acd8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ace8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309acf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad00) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad08) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad10) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad18) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad20) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad28) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad30) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad38) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad40) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad48) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad50) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad58) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad60) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad68) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad70) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad78) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad80) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad88) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad90) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ad98) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada0) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309ada8) = 0;
  *(undefined8 *)(lVar3 + _DAT_11309adb0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10099a0c8; end: 10099a107;  */

void FUN_10099a0c8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010099a0ac();
  FUN_100082720("AdCrashLoggingServiceProviderWrapperScopeInitializationPluginProvider",0x45,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10099a108; end: 10099a10f;  */

void FUN_10099a108(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177b544);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099a110; end: 10099a193;  */

void FUN_10099a110(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177b544,param_2,&UNK_10177b548,param_2,&UNK_10177b570,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099a194; end: 10099a1bb;  */

undefined ** FUN_10099a194(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 10099a1bc; end: 10099a1fb;  */

void FUN_10099a1bc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010099a1a0();
  FUN_100082720("AdDataServiceProviderWrapperScopeInitializationPluginProvider",0x3d,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10099a1fc; end: 10099a203;  */

void FUN_10099a1fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177bf18);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099a204; end: 10099a287;  */

void FUN_10099a204(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177bf18,param_2,&UNK_10177bf1c,param_2,&UNK_10177bf44,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099a288; end: 10099a2af;  */

undefined ** FUN_10099a288(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 10099a2b0; end: 10099a2ef;  */

void FUN_10099a2b0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010099a294();
  FUN_100082720("AdEventServiceProviderWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10099a2f0; end: 10099a2f7;  */

void FUN_10099a2f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177c048);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099a2f8; end: 10099a37b;  */

void FUN_10099a2f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177c048,param_2,&UNK_10177c04c,param_2,&UNK_10177c074,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099a37c; end: 10099a3a3;  */

undefined ** FUN_10099a37c(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 10099a3a4; end: 10099a3e3;  */

void FUN_10099a3a4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010099a388();
  FUN_100082720("AdFormatEventLoggerServiceProviderWrapperScopeInitializationPluginProvider",0x4a,2)
  ;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10099a3e4; end: 10099a3eb;  */

void FUN_10099a3e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177c248);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099a3ec; end: 10099a46f;  */

void FUN_10099a3ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177c248,param_2,&UNK_10177c24c,param_2,&UNK_10177c274,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099a470; end: 10099a497;  */

undefined ** FUN_10099a470(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 10099a498; end: 10099a4d7;  */

void FUN_10099a498(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010099a47c();
  FUN_100082720("AdInsertionServiceProviderWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10099a4d8; end: 10099a4df;  */

void FUN_10099a4d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177c3cc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099a4e0; end: 10099a563;  */

void FUN_10099a4e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177c3cc,param_2,&UNK_10177c3d0,param_2,&UNK_10177c3f8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099a564; end: 10099a58b;  */

undefined ** FUN_10099a564(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 10099a58c; end: 10099a5cb;  */

void FUN_10099a58c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010099a570();
  FUN_100082720("AdLegacyConfigServiceProviderWrapperScopeInitializationPluginProvider",0x45,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10099a5cc; end: 10099a5d3;  */

void FUN_10099a5cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177c650);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099a5d4; end: 10099a657;  */

void FUN_10099a5d4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177c650,param_2,&UNK_10177c654,param_2,&UNK_10177c67c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10099a658; end: 10099a67f;  */

undefined ** FUN_10099a658(void)

{
  return &PTR_DAT_113082b58;
}



/* Entry: 10099a680; end: 10099a6bf;  */

void FUN_10099a680(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010099a664();
  FUN_100082720("AdOnDeviceServiceProviderWrapperScopeInitializationPluginProvider",0x41,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10099a6c0; end: 10099a6c7;  */

void FUN_10099a6c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_10177c880);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


