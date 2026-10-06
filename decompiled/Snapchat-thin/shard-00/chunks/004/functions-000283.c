/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10062a050; end: 10062a0c3;  */

void FUN_10062a050(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110cd0258;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010062a040();
    } while (extraout_w10 != 0);
  }
  FUN_10015c218(&ppuStack_28,&uStack_40,FUN_10062a0f0);
  func_0x000107c61180();
  func_0x00010062a24c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10062a0c4; end: 10062a0ef;  */

void FUN_10062a0c4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10062a050();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10062a0f0; end: 10062a15f;  */

void FUN_10062a0f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126e0050;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010062a040();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x00010062a21c(&uStack_30);
  return;
}



/* Entry: 10062a160; end: 10062a1a3; -[SCNGrpcGrpcCallHandle .cxx_construct] */

undefined8 * FUN_10062a160(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_10015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010062a040();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10062a1a4; end: 10062a23f; -[SCNGrpcGrpcCallHandle initWithCpp:] */

undefined1 * FUN_10062a1a4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127060c0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010062a040();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x00010062a21c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10062a240; end: 10062a263;  */

void FUN_10062a240(void)

{
  return;
}



/* Entry: 10062a264; end: 10062a2b7; -[SCNGrpcGrpcCallHandle .cxx_destruct] */

void FUN_10062a264(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110cd0258;
    FUN_1004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x00010062a21c((long *)(param_1 + 0x18));
  FUN_1004a5588(param_1 + 8);
  return;
}



/* Entry: 10062a2b8; end: 10062a2cb;  */

void FUN_10062a2b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010062a2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10062a2cc; end: 10062a2f7;  */

undefined8 * FUN_10062a2cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ccd710;
  FUN_100608514(param_1 + 1);
  return param_1;
}



/* Entry: 10062a2f8; end: 10062a2fb;  */

void FUN_10062a2f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10062a2fc; end: 10062a34f; -[SCNGrpcCallOptionsBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010062a314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010062a32c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010062a318) */
/* WARNING: Removing unreachable block (ram,0x00010062a330) */

void FUN_10062a2fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 10062a350; end: 10062a3d7; -[SCFideliusServiceCoordinator identityService:] */

void FUN_10062a350(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_1 + 0x10;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4a2d8();
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar1);
  if ((int)lVar2 != 0) {
    func_0x000107c44ff8(param_1);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c44ff8(param_1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10062a3d8; end: 10062a3df;  */

void FUN_10062a3d8(double param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [192];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_70 [24];
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar5 = *(long **)(param_2 + 0x10);
  plStack_58 = plVar5 + 0x2c;
  plVar4 = plVar5 + 0x30;
  plStack_50 = plVar4;
  plStack_48 = plVar5 + 9;
  FUN_10007847c(auStack_70,"grpc::grpcService::makeGRPCCall");
  if (*(char *)(*plVar5 + 0x34) == '\x01') {
    if ((char)plVar5[0x53] == '\x01') {
      func_0x0001053954ec();
    }
    else {
      func_0x000105395484(plVar5 + 0x50);
    }
    FUN_10002b838(&uStack_100,"Service disposed");
    func_0x0001053953ec(auStack_1f0);
    func_0x000105395414();
  }
  else {
    FUN_100609808();
    FUN_10046778c();
    FUN_100467768();
    FUN_1004a2704(plVar5 + 0x50,(long)param_1);
    iVar2 = (int)plVar5 + 0x10;
    FUN_1004a4bf8();
    if (iVar2 == 0) {
      func_0x000107c60c94(&uStack_118,plVar5 + 0x50);
      FUN_10046985c(auStack_1f0,*(long *)(*plVar5 + 0x18) + 0x80);
      FUN_10048a5b8(&uStack_130,auStack_1f0);
      uVar1 = *(undefined4 *)(*plVar5 + 0xa0);
      FUN_10002b838(&uStack_208,"unknown");
      FUN_10002b838(&uStack_220,"");
      uStack_f0 = uStack_108;
      uStack_88 = uStack_210;
      uStack_f8 = uStack_110;
      uStack_100 = uStack_118;
      uStack_110 = 0;
      uStack_108 = 0;
      uStack_e0 = uStack_128;
      uStack_e8 = uStack_130;
      uStack_d8 = uStack_120;
      uStack_130 = 0;
      uStack_128 = 0;
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_c0 = uStack_200;
      uStack_c8 = uStack_208;
      uStack_b8 = uStack_1f8;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_b0 = 0;
      uStack_9c = 0xffffffff;
      uStack_a4 = 0xffffffffffffffff;
      uStack_ac = 0xffffffffffffffff;
      uStack_90 = uStack_218;
      uStack_98 = uStack_220;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_80 = 0;
      uStack_d0 = uVar1;
      func_0x00010539549c();
      func_0x0001053954dc();
      func_0x000107c60ca0(&uStack_130);
      FUN_100469c34(auStack_1f0);
      func_0x000107c60ca0(&uStack_118);
      plVar4 = plVar5 + 2;
      func_0x000107c2bfa4(plVar4);
      if ((char)plVar5[0x53] == '\x01') {
        func_0x000107c2bfac(plVar5 + 0x50,plVar4);
        func_0x00010539554c();
        func_0x000107c2bfb8();
      }
      else {
        func_0x000107c2bfb0(plVar5 + 0x50,plVar4);
        func_0x00010539554c();
        func_0x000107c2bfc0();
      }
      func_0x0001006b1fa8();
      func_0x000105394120(auStack_1f0,plVar4,auStack_238);
      func_0x000105395414();
      func_0x000105395494();
      func_0x0001006b1fc4();
      func_0x000100bf5670(&uStack_100);
      goto LAB_10060cef8;
    }
    if (*(long *)(*plVar5 + 0x68) != 0) {
      plVar3 = (long *)plVar5[9];
      (**(code **)(*plVar3 + 0x20))(plVar3,plVar4);
      FUN_10060d064(plVar5 + 0xb,plVar5 + 2,(long)param_1,plVar4);
      goto LAB_10060cef8;
    }
    if ((char)plVar5[0x53] == '\x01') {
      func_0x0001053954ec();
    }
    else {
      func_0x000105395484(plVar5 + 0x50);
    }
    FUN_10002b838(&uStack_100,"Resources aren\'t ready");
    func_0x0001053953ec(auStack_1f0);
    func_0x000105395414();
  }
  func_0x000105395494();
  func_0x000107c60ca0(&uStack_100);
LAB_10060cef8:
  FUN_100078bd8(auStack_70);
  return;
}



/* Entry: 10062a3e0; end: 10062a51b; -[SCFideliusManager isReady:] */

uint FUN_10062a3e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174(param_3);
  puVar3 = &UNK_10f31061b;
  FUN_1000ba800(&UNK_10f31061b);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x88);
  func_0x000107c49be8();
  if (iVar1 == 0) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    func_0x000107c61174(param_3);
    func_0x000107c4e530(uVar4);
    uVar2 = (uint)*(byte *)(puStack_48 + 3);
    func_0x000107c61170(param_3);
    func_0x000107c60bcc(&uStack_50,8);
  }
  else {
    func_0x000107c3bb78(param_1);
    uVar2 = (uint)param_1;
  }
  func_0x0001000e2a84(puVar3);
  func_0x000107c61170(param_3);
  return uVar2 & 1;
}



/* Entry: 10062a51c; end: 10062a51f;  */

void FUN_10062a51c(void)

{
  return;
}



/* Entry: 10062a520; end: 10062a573;  */

void FUN_10062a520(long param_1)

{
  char *unaff_x19;
  long unaff_x20;
  
  func_0x000100603768();
  func_0x000107c60d88(param_1 + 8);
  *(long *)(unaff_x19 + 0x48) = unaff_x20;
  if ((unaff_x20 != 0) && (*unaff_x19 == '\x01')) {
    func_0x000104ae33d8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 8);
  return;
}



/* Entry: 10062a574; end: 10062a577;  */

void FUN_10062a574(void)

{
  return;
}



/* Entry: 10062a578; end: 10062a5af;  */

void FUN_10062a578(undefined8 param_1)

{
  if (lRam0000000112f84af8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e772614);
  return;
}



/* Entry: 10062a5b0; end: 10062a68b;  */

void FUN_10062a5b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10062a578(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10062a7d0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10062a994();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 10062a68c; end: 10062a6cf;  */

void FUN_10062a68c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  func_0x000107c61524(param_1,0x100,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Entry: 10062a6d0; end: 10062a787; -[SCFideliusIdentityService syncFriendDbToFideliusDb] */

void FUN_10062a6d0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c4e528(0x4014000000000000,uVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 10062a788; end: 10062a7cf;  */

undefined8 FUN_10062a788(ulong param_1)

{
  code *pcVar1;
  ulong uStack_18;
  
  if (param_1 < 0xe) {
    return *(undefined8 *)(&UNK_10dbf9088 + param_1 * 8);
  }
  uStack_18 = param_1;
  func_0x000107c60614(&UNK_110781400,&uStack_18,&UNK_110781400,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10062a7d0);
  (*pcVar1)();
}



/* Entry: 10062a7d0; end: 10062a8cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10062a7d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113082420);
  FUN_10062a788();
  uVar2 = param_2;
  func_0x000107c4af44();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_3 + _DAT_1130813f0);
  puVar3 = &UNK_11067acd8;
  func_0x000107c613fc(&UNK_11067acd8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  FUN_1000285a8(0x112f84ac8,&UNK_10dbf8d60);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar5);
  pcVar4 = FUN_10073ee14;
  FUN_1000bdd8c(FUN_10073ee14,puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  *(code **)(unaff_x20 + 0x10) = pcVar4;
  return;
}



/* Entry: 10062a8cc; end: 10062a993; -[SCFideliusIdentityService logFriendKeyDivergenceShadowSweepIfEnabled] */

void FUN_10062a8cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3ebd4(uVar1,param_2,&PTR____CFConstantStringClassReference_110e0f158,0,0);
  if ((int)uVar1 != 0) {
    func_0x000107c61144(auStack_28,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    func_0x000107c6111c(auStack_30,auStack_28);
    func_0x000107c4e528(0x4014000000000000,uVar1);
    func_0x000107c61120(auStack_30);
    func_0x000107c61120(auStack_28);
  }
  return;
}



/* Entry: 10062a994; end: 10062aa03;  */

void FUN_10062a994(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1003a5b88();
  FUN_10062aa04(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  FUN_10062aa24(param_1,uVar1);
  func_0x0001005c32f8(0);
  func_0x000107c610f8();
  FUN_10062aa88(param_1);
  return;
}



/* Entry: 10062aa04; end: 10062aa23;  */

void FUN_10062aa04(void)

{
  func_0x000107c61168(&PTR_PTR_1129c8948);
  return;
}



/* Entry: 10062aa24; end: 10062aa87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10062aa24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113082760) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113082768) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10062aa88; end: 10062aad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10062aa88(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130827c8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10062aad4; end: 10062aadb;  */

void FUN_10062aad4(void)

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



/* Entry: 10062aadc; end: 10062ab2f;  */

void FUN_10062aadc(void)

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



/* Entry: 10062ab30; end: 10062ae03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10062ab30(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined **ppuVar10;
  undefined8 unaff_x20;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar11 = *(undefined8 *)(*(long *)(param_3 + _DAT_1130827c8) + _DAT_113082768);
  func_0x000107c6157c(uVar11);
  uVar2 = param_2;
  func_0x000107c4b590();
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x000107c4b57c();
  func_0x000107c61180();
  uVar4 = param_4;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  lVar5 = 0;
  FUN_10062ae60();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined1 *)(lVar6 + _DAT_112f850c0) = 0;
  lVar1 = _DAT_112f850c8;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar6 + lVar1) = puVar7;
  lVar1 = _DAT_112f850d0;
  uVar8 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(lVar6 + lVar1) = uVar8;
  *(undefined8 *)(lVar6 + _DAT_112f850d8) = uVar11;
  *(undefined8 *)(lVar6 + _DAT_112f850e0) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112f850e8) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112f850f0) = uVar4;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c6157c(uVar11);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  plVar9 = &lStack_70;
  func_0x000107c61154(plVar9,puVar7);
  uVar8 = *(undefined8 *)((long)plVar9 + _DAT_112f850f0);
  puVar7 = &UNK_11067ad18;
  func_0x000107c613fc(&UNK_11067ad18,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,plVar9);
  pcStack_80 = FUN_100b5ec64;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x100b5ebe4;
  puStack_88 = &UNK_11067ad58;
  ppuVar10 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar10);
  puVar7 = puStack_78;
  func_0x000107c61174(plVar9);
  func_0x000107c61174(uVar8);
  func_0x000107c61574(puVar7);
  func_0x000107c5dc64(uVar8);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(plVar9);
  func_0x000107c61574(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  puVar7 = PTR_PTR_1126ad360;
  func_0x000107c610f8(PTR_PTR_1126ad360);
  func_0x000107c47204();
  func_0x000107c42c20(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(plVar9);
  func_0x000107c61170(puVar7);
  return unaff_x20;
}



/* Entry: 10062ae04; end: 10062ae57;  */

ushort * FUN_10062ae04(ushort *param_1,char *param_2,undefined8 *param_3,ulong param_4,
                      short *param_5)

{
  ushort *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort *unaff_x20;
  
  if ((param_4 & 0xff) != 0) {
    func_0x000100064c34();
    if ((((*param_2 < '\0') && (param_2[1] < '\0')) && (param_2[2] < '\0')) && (param_2[3] < '\0'))
    {
      if (param_2[4] < '\0') {
        func_0x000100064e38(param_1);
        if (*param_5 != 0) {
          func_0x000107c39bb4();
        }
        return (ushort *)0x0;
      }
      func_0x000107c39ba4();
    }
    puVar1 = unaff_x20;
    FUN_100064d5c();
    if (puVar1 == (ushort *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x20 + 0x18);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_DAT_110cf0bf0)[(ulong)puVar1[5] & 0xf];
    }
    func_0x000100064e2c();
    func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return puVar1;
  }
  *(undefined4 *)((long)param_1 + (param_4 >> 0x30)) = *(undefined4 *)(param_2 + 1);
  puVar1 = (ushort *)(param_2 + 5);
  if ((ushort *)*param_3 <= puVar1) {
    if (*param_5 != 0) {
      func_0x000100064740();
    }
    return puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000644b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_5 + ((ulong)*puVar1 & (ulong)*(byte *)(param_5 + 4)) + 0x1c))();
  return param_1;
}



/* Entry: 10062ae58; end: 10062ae5f; -[SCLensCarouselFeatureServices lensCarouselManager] */

undefined8 FUN_10062ae58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10062ae60; end: 10062ae7f;  */

void FUN_10062ae60(void)

{
  func_0x000107c61168(&PTR_PTR_1128df308);
  return;
}



/* Entry: 10062ae80; end: 10062ae97;  */

void FUN_10062ae80(long param_1,long param_2)

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



/* Entry: 10062ae98; end: 10062af0b; -[SCLensCarouselPrivateServices initWithLensCarouselUIActivationParameters:] */

undefined1 * FUN_10062ae98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f5910;
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



/* Entry: 10062af0c; end: 10062af3f;  */

void FUN_10062af0c(void)

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



/* Entry: 10062af40; end: 10062af5b;  */

void FUN_10062af40(long param_1)

{
  func_0x00010062af34();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10062af5c; end: 10062afbf;  */

long FUN_10062af5c(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10062affc(param_1);
    }
    else {
      func_0x000107c30414(param_1);
    }
  }
  return param_1;
}



/* Entry: 10062afc0; end: 10062affb;  */

undefined8 * FUN_10062afc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110cf3e18;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_10062af5c(param_1,param_3);
  return param_1;
}



/* Entry: 10062affc; end: 10062b017;  */

undefined1  [16] FUN_10062affc(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x2c);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x2c);
  return auVar6;
}



/* Entry: 10062b018; end: 10062b03f;  */

long FUN_10062b018(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  return param_1;
}



/* Entry: 10062b040; end: 10062b057;  */

void FUN_10062b040(void)

{
  return;
}



/* Entry: 10062b058; end: 10062b0bb;  */

void FUN_10062b058(int param_1)

{
  undefined1 *unaff_x19;
  undefined1 auStack_a8 [120];
  
  func_0x000100622614();
  if (param_1 == 5) {
    *unaff_x19 = 0;
    unaff_x19[0x78] = 0;
  }
  else {
    func_0x000107c28d7c(auStack_a8);
    func_0x000107c28d80();
    func_0x000107c2a478(auStack_a8);
  }
  return;
}



/* Entry: 10062b0bc; end: 10062b0c7;  */

void FUN_10062b0bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_type_11034d010)();
  return;
}



/* Entry: 10062b0c8; end: 10062b0ff;  */

ulong FUN_10062b0c8(ulong param_1)

{
  ulong uVar1;
  
  FUN_10062b0bc();
  if ((int)param_1 == 5) {
    uVar1 = 0;
  }
  else {
    FUN_10062b118();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 10062b100; end: 10062b117;  */

ulong FUN_10062b100(ulong param_1)

{
  FUN_10062b0c8();
  return param_1 & 0xffffffffff;
}



/* Entry: 10062b118; end: 10062b123;  */

void FUN_10062b118(void)

{
  FUN_10054c918();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sqlite3_column_int64_11034cff8)();
  return;
}



/* Entry: 10062b124; end: 10062b15b;  */

ulong FUN_10062b124(ulong param_1)

{
  ulong uVar1;
  
  FUN_10062b0bc();
  if ((int)param_1 == 5) {
    uVar1 = 0;
  }
  else {
    FUN_10062b118();
    uVar1 = param_1 & 0xffffffff | 0x100000000;
  }
  return uVar1;
}



/* Entry: 10062b15c; end: 10062b173;  */

ulong FUN_10062b15c(ulong param_1)

{
  FUN_10062b124();
  return param_1 & 0xffffffffff;
}



/* Entry: 10062b174; end: 10062b17f;  */

void FUN_10062b174(void)

{
  return;
}



/* Entry: 10062b180; end: 10062b1b3;  */

long FUN_10062b180(long param_1)

{
  if (*(char *)(param_1 + 0x260) == '\x01') {
    func_0x000107c28d54();
  }
  else {
    FUN_10062b288();
  }
  return param_1;
}



/* Entry: 10062b1b4; end: 10062b1bf;  */

void FUN_10062b1b4(void)

{
  return;
}



/* Entry: 10062b1c0; end: 10062b287;  */

void FUN_10062b1c0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10062b1b4();
  FUN_10061fb2c();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  FUN_10062b2a4(param_1 + 0x50);
  func_0x00010062b2b0();
  FUN_10061fb2c();
  func_0x00010062b2bc();
  FUN_10061fb2c();
  func_0x00010062b2c8();
  *(undefined1 *)(unaff_x19 + 0x100) = 0;
  *(undefined1 *)(unaff_x19 + 0x118) = 0;
  if (*(char *)(unaff_x20 + 0x118) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x108);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x100);
    *(undefined8 *)(unaff_x19 + 0x110) = *(undefined8 *)(unaff_x20 + 0x110);
    *(undefined8 *)(unaff_x19 + 0x108) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x100) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x108) = 0;
    *(undefined8 *)(unaff_x20 + 0x110) = 0;
    *(undefined8 *)(unaff_x20 + 0x100) = 0;
    *(undefined1 *)(unaff_x19 + 0x118) = 1;
  }
  func_0x00010062b2dc();
  FUN_10062b2fc();
  FUN_10062b354();
  func_0x00010062b368();
  FUN_10062b374();
  func_0x00010062b3b0();
  return;
}



/* Entry: 10062b288; end: 10062b2a3;  */

void FUN_10062b288(long param_1)

{
  FUN_10062b1c0();
  *(undefined1 *)(param_1 + 0x260) = 1;
  return;
}



/* Entry: 10062b2a4; end: 10062b2fb;  */

void FUN_10062b2a4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,unaff_x20 + 0x50,0x4c);
  return;
}



/* Entry: 10062b2fc; end: 10062b323;  */

void FUN_10062b2fc(long param_1)

{
  func_0x00010062b2f0();
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_10062b324();
  return;
}



/* Entry: 10062b324; end: 10062b337;  */

void FUN_10062b324(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    func_0x00010062af34();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 10062b338; end: 10062b353;  */

void FUN_10062b338(long param_1)

{
  func_0x00010062af34();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 10062b354; end: 10062b373;  */

void FUN_10062b354(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x168);
  *(undefined8 *)(unaff_x19 + 0x170) = *(undefined8 *)(unaff_x20 + 0x170);
  *(undefined8 *)(unaff_x19 + 0x168) = uVar1;
  return;
}



/* Entry: 10062b374; end: 10062b39b;  */

void FUN_10062b374(long param_1)

{
  func_0x00010062b2f0();
  *(undefined1 *)(param_1 + 0x78) = 0;
  FUN_10062b39c();
  return;
}



/* Entry: 10062b39c; end: 10062b3bf;  */

void FUN_10062b39c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    func_0x00010868d098();
    *(undefined1 *)(param_1 + 0x78) = 1;
    return;
  }
  return;
}



/* Entry: 10062b3c0; end: 10062b3df;  */

void FUN_10062b3c0(long param_1)

{
  if (*(char *)(param_1 + 0x78) == '\x01') {
    func_0x000107c2a478();
  }
  return;
}



/* Entry: 10062b3e0; end: 10062b41f;  */

void FUN_10062b3e0(long param_1)

{
  FUN_10062b3c0(param_1 + 0x178);
  FUN_10062b420();
  FUN_10062b448();
  func_0x00010062b450();
  func_0x00010062b458();
  func_0x00010062b460();
  func_0x00010062b468();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_100100fec();
  }
  return;
}



/* Entry: 10062b420; end: 10062b427;  */

void FUN_10062b420(void)

{
  long unaff_x19;
  
  if (*(char *)(unaff_x19 + 0x160) == '\x01') {
    FUN_10062b018();
  }
  return;
}



/* Entry: 10062b428; end: 10062b447;  */

void FUN_10062b428(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_10062b018();
  }
  return;
}



/* Entry: 10062b448; end: 10062b493;  */

void FUN_10062b448(void)

{
  long unaff_x19;
  
  if (*(char *)(unaff_x19 + 0x118) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 10062b494; end: 10062b4c7;  */

void FUN_10062b494(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010062b488();
  FUN_10062b4c8(param_1 + 8,param_2 + 8);
  uVar1 = *unaff_x20;
  *unaff_x20 = *unaff_x19;
  *unaff_x19 = uVar1;
  return;
}



/* Entry: 10062b4c8; end: 10062b53b;  */

void FUN_10062b4c8(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_290 [608];
  
  func_0x00010062b488();
  cVar1 = *(char *)(param_1 + 0x260);
  if (cVar1 != *(char *)(param_2 + 0x260)) {
    if (cVar1 == '\0') {
      FUN_10062b288();
    }
    else {
      func_0x000107c3234c();
      FUN_10062b288();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x260) == '\x01') {
      FUN_10062b3e0();
      *(undefined1 *)(unaff_x19 + 0x260) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c32358();
    func_0x000107c28d68(auStack_290,unaff_x20);
    func_0x00010868cef0(unaff_x20,unaff_x19);
    func_0x000107c323a0();
    func_0x00010868cef0();
    func_0x000107c28d00(auStack_290);
    return;
  }
  return;
}



/* Entry: 10062b53c; end: 10062b547;  */

undefined ** FUN_10062b53c(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 10062b548; end: 10062b56b;  */

void FUN_10062b548(long param_1)

{
  if (*(char *)(param_1 + 0x260) == '\x01') {
    FUN_10062b3e0();
    *(undefined1 *)(param_1 + 0x260) = 0;
  }
  return;
}



/* Entry: 10062b56c; end: 10062b603;  */

long * FUN_10062b56c(long *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(param_1 + 0x4d) & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_1 + 8);
    func_0x000107c60c94(auStack_50,*param_1 + 0x58);
    FUN_1004c3cd0(auStack_38,&UNK_10f2e0451,auStack_50);
    func_0x000107c313a4(uVar1,0x65,auStack_38);
    func_0x000107c60ca0(auStack_38);
    func_0x000107c60ca0(auStack_50);
  }
  return param_1 + 1;
}



/* Entry: 10062b604; end: 10062b62f;  */

void FUN_10062b604(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 10062b630; end: 10062b637;  */

void FUN_10062b630(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1029f87d0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10062b638; end: 10062b6bb;  */

void FUN_10062b638(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_1029f87d0,param_2,FUN_10062b6bc,param_2,&UNK_1029f87d4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10062b6bc; end: 10062b6e3;  */

void FUN_10062b6bc(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10062b6e4; end: 10062b6eb;  */

void FUN_10062b6e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_38,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_40);
  func_0x0001005c2b6c();
  func_0x000107c613fc();
  FUN_10062b780(uStack_38,uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10062b6ec; end: 10062b75f;  */

void FUN_10062b6ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100083b20(&uStack_40);
  func_0x0001005c2b6c();
  func_0x000107c613fc();
  FUN_10062b780(uStack_38,uStack_40);
  *param_1 = param_2;
  return;
}



/* Entry: 10062b760; end: 10062b77f;  */

void FUN_10062b760(void)

{
  func_0x000107c61168(&PTR_PTR_112f6f728);
  return;
}



/* Entry: 10062b780; end: 10062b817;  */

void FUN_10062b780(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_10062b760(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  FUN_10062bdc4(param_1,param_2);
  *(long *)(unaff_x20 + 0x10) = param_1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  return;
}



/* Entry: 10062b818; end: 10062b81f;  */

void FUN_10062b818(long param_1)

{
  if (*(char *)(param_1 + 0x268) == '\x01') {
    FUN_10062b3e0();
  }
  return;
}



/* Entry: 10062b820; end: 10062b83f;  */

void FUN_10062b820(long param_1)

{
  if (*(char *)(param_1 + 0x260) == '\x01') {
    FUN_10062b3e0();
  }
  return;
}



/* Entry: 10062b840; end: 10062b84b;  */

void FUN_10062b840(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bzero_11034bf90)();
  return;
}



/* Entry: 10062b84c; end: 10062b8ab;  */

undefined8 * FUN_10062b84c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_2a0 [624];
  
  FUN_10062b840();
  FUN_10062b8f8(param_1 + 1,auStack_2a0);
  FUN_10062b920();
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_10054cac4(uVar1);
  FUN_10062b820(param_1 + 2);
  return param_1;
}



/* Entry: 10062b8ac; end: 10062b8d3;  */

void FUN_10062b8ac(long param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_1 + 0x260);
  if (cVar1 != *(char *)(param_2 + 0x260)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x260) == '\x01') {
        FUN_10062b3e0();
        *(undefined1 *)(param_1 + 0x260) = 0;
      }
      return;
    }
    FUN_10062b1c0();
    *(undefined1 *)(param_1 + 0x260) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c32320();
    func_0x000107c28908();
    func_0x000107c3194c(unaff_x19 + 0x20,unaff_x20 + 0x20);
    func_0x000107c3194c(unaff_x19 + 0x38,unaff_x20 + 0x38);
    func_0x000107c3232c(unaff_x19 + 0x50);
    func_0x000107c3239c();
    func_0x000107c28908();
    func_0x000107c323a4();
    func_0x000107c28908();
    uVar4 = *(undefined8 *)(unaff_x20 + 0xf1);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xe9);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xe0);
    *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x20 + 0xe8);
    *(undefined8 *)(unaff_x19 + 0xe0) = uVar5;
    *(undefined8 *)(unaff_x19 + 0xf1) = uVar4;
    *(undefined8 *)(unaff_x19 + 0xe9) = uVar3;
    func_0x000107c27c54(unaff_x19 + 0x100,unaff_x20 + 0x100);
    func_0x000107c32340();
    func_0x00010868cf80();
    uVar2 = *(undefined1 *)(unaff_x20 + 0x170);
    *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x20 + 0x168);
    *(undefined1 *)(unaff_x19 + 0x170) = uVar2;
    func_0x000107c323a8();
    func_0x00010868cfcc();
    func_0x000107c32314();
    return;
  }
  return;
}



/* Entry: 10062b8d4; end: 10062b8f7;  */

undefined8 FUN_10062b8d4(undefined8 param_1)

{
  FUN_10062b8ac();
  return param_1;
}



/* Entry: 10062b8f8; end: 10062b91f;  */

undefined8 * FUN_10062b8f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10062b8d4(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10062b920; end: 10062b927;  */

void FUN_10062b920(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x268) == '\x01') {
    FUN_10062b3e0();
  }
  return;
}



/* Entry: 10062b928; end: 10062b943;  */

void FUN_10062b928(void)

{
  FUN_1005ecb38();
  FUN_1005ecb64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 10062b944; end: 10062b94b;  */

void FUN_10062b944(void)

{
  return;
}



/* Entry: 10062b94c; end: 10062b9cb;  */

void FUN_10062b94c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x0001005f39b8();
  if ((bool)in_ZR) {
    FUN_1005ed91c();
    func_0x0001005ecc7c();
    if (!(bool)in_ZR) {
      func_0x000100458ae4();
      func_0x000107c3417c();
      func_0x000107c341b0();
      func_0x000107c34218();
      FUN_10054f908();
      func_0x000107c3415c();
      func_0x000107c3422c();
      func_0x000107c3436c();
      FUN_100678270();
      func_0x0001005eb600();
    }
  }
  FUN_1005f3a4c(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_10062bb88();
  return;
}



/* Entry: 10062b9cc; end: 10062badf;  */

void FUN_10062b9cc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_1a8;
  undefined1 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_188;
  undefined1 uStack_180;
  undefined1 uStack_178;
  undefined1 uStack_170;
  undefined1 uStack_168;
  undefined1 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_150;
  undefined1 uStack_120;
  undefined1 uStack_118;
  undefined1 uStack_110;
  ulong uStack_f0;
  ulong uStack_e8;
  char cStack_e0;
  char cStack_38;
  
  FUN_10062b94c(&uStack_1c0,*param_2);
  FUN_10062c1d8(&uStack_f0,&uStack_1c0);
  FUN_10062c45c(&uStack_1c0);
  if ((cStack_38 != '\x01') || ((cStack_e0 == '\x01' && (uStack_f0 < uStack_e8)))) {
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_198 = 1;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    FUN_10062c128(&uStack_f0,&uStack_1c0);
    func_0x000107c323dc();
    func_0x000107c2a058(*param_2,&uStack_f0);
  }
  func_0x00010062c610(param_1,&uStack_f0);
  FUN_10062c368(&uStack_f0);
  return;
}



/* Entry: 10062bae0; end: 10062bb87;  */

long FUN_10062bae0(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x10;
  long unaff_x20;
  
  func_0x0001005ec5b4();
  FUN_1005ec6a8();
  do {
    func_0x0001005ec6b4();
    if ((bool)in_ZR) {
      func_0x0001005ec6c0();
      func_0x0001005ec6c8();
      FUN_1005ecd30();
      func_0x0001005ec6f4();
      func_0x0001005ec700();
      func_0x0001005ec708();
      func_0x0001005ec710();
      func_0x0001005ec720();
      goto LAB_10062bb54;
    }
    func_0x0001005ed218();
  } while (extraout_x10 != 0);
  func_0x0001005ed224();
  if (!(bool)in_ZR) {
    FUN_1005f6f68();
  }
LAB_10062bb54:
  func_0x0001005ec750();
  func_0x0001005ec760();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  func_0x000107c60e78();
  func_0x00010061eec8();
  func_0x000107c34360();
  FUN_10062bae0();
  func_0x0001005ec788(extraout_x8);
  FUN_10062be54();
  return param_1;
}



/* Entry: 10062bb88; end: 10062bbab;  */

void FUN_10062bb88(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_28 [8];
  
  FUN_10062bae0();
  func_0x0001005ec788(param_1);
  FUN_10062be54(param_2,auStack_28);
  return;
}



/* Entry: 10062bbac; end: 10062bdc3;  */

void FUN_10062bbac(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar7 = &puStack_90;
  FUN_1000285a8(0x112f6f798,&UNK_10dbcc3a8);
  func_0x000107c613fc();
  pcVar2 = FUN_1007b77bc;
  FUN_1000bdd8c(FUN_1007b77bc,0);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_70 = &UNK_10346ff2c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10346ff34;
  puStack_78 = &UNK_110659c00;
  pcStack_68 = pcVar2;
  func_0x000107c60bc4(&puStack_90);
  pcVar6 = pcStack_68;
  func_0x000107c6157c(pcVar2);
  func_0x000107c61574(pcVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = 0;
  func_0x0001005c3444(0);
  func_0x000107c610f8();
  FUN_10062bfdc(puVar3,uVar5);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  uVar5 = 0x112f6f7a0;
  FUN_1000285a8(0x112f6f7a0,&UNK_10dbcc3b0);
  pcVar6 = FUN_1007b7828;
  FUN_1000cb480(FUN_1007b7828,0,uVar5);
  uVar5 = 0;
  func_0x0001005c569c(0);
  func_0x000107c610f8();
  func_0x00010062c028(pcVar6,uVar5);
  *(code **)(unaff_x20 + 0x10) = pcVar6;
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_70 = &UNK_10346ff04;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10346ff30;
  puStack_78 = &UNK_110659c28;
  pcStack_68 = pcVar2;
  func_0x000107c60bc4(&puStack_90);
  pcVar6 = pcStack_68;
  func_0x000107c6157c(pcVar2);
  func_0x000107c61574(pcVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  uVar5 = 0;
  func_0x0001005c33c4(0);
  func_0x000107c610f8();
  FUN_10062c078(puVar3,uVar5);
  func_0x000107c61574(pcVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  return;
}



/* Entry: 10062bdc4; end: 10062be07;  */

undefined8 FUN_10062bdc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10062bbac();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 10062be08; end: 10062be53;  */

void FUN_10062be08(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  func_0x0001005ec788();
  FUN_10062be54(param_1,auStack_28);
  return;
}



/* Entry: 10062be54; end: 10062be77;  */

void FUN_10062be54(void)

{
  FUN_1005ec7e4();
  FUN_10062be78();
  return;
}



/* Entry: 10062be78; end: 10062bea7;  */

void FUN_10062be78(long param_1)

{
  FUN_1005ee89c();
  *(undefined1 *)(param_1 + 0xc0) = 0;
  FUN_10062bea8();
  return;
}



/* Entry: 10062bea8; end: 10062bfa7;  */

void FUN_10062bea8(long param_1,undefined1 param_2)

{
  long unaff_x19;
  undefined1 auStack_78 [56];
  long lStack_40;
  undefined1 uStack_38;
  
  func_0x0001005eddc0();
  if ((param_1 != 0) && (FUN_10054c3a4(), (int)param_1 != 0)) {
    FUN_1005ee9a8();
    FUN_1005ede54();
    func_0x0001005ee9c4();
    FUN_100622558();
    FUN_10062c0c4();
    FUN_100622558();
    func_0x00010062c0d4();
    func_0x00010062c0e0();
    FUN_100622558();
    func_0x00010062c0ec();
    FUN_100622558();
    func_0x00010062c0f8();
    FUN_100622558();
    func_0x00010062c104();
    FUN_100622558();
    func_0x00010062c110(auStack_78);
    FUN_100622624();
    func_0x00010062c11c();
    FUN_100622558();
    lStack_40 = param_1;
    uStack_38 = param_2;
    FUN_1005f5cd0();
    FUN_10062c128();
    FUN_10062b428(auStack_78);
    return;
  }
  if (*(char *)(unaff_x19 + 0xc0) == '\x01') {
    FUN_10062b428(unaff_x19 + 0x78);
    *(undefined1 *)(unaff_x19 + 0xc0) = 0;
  }
  return;
}


