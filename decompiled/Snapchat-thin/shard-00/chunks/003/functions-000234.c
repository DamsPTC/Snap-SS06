/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10055f45c; end: 10055f47f;  */

void FUN_10055f45c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return;
}



/* Entry: 10055f480; end: 10055f49b;  */

void FUN_10055f480(void)

{
  func_0x00010055f46c();
  FUN_10055f49c();
  return;
}



/* Entry: 10055f49c; end: 10055f52f;  */

void FUN_10055f49c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  uint *param_5)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uVar7;
  undefined8 auStack_50 [2];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  FUN_1004b9648();
  uStack_38 = extraout_x8;
  FUN_10048aa88(auStack_50,1);
  FUN_10055f53c(puStack_40,param_3);
  puVar2 = puStack_40;
  puStack_40 = (undefined8 *)0x0;
  func_0x00010048ab14(param_1,puVar2 + 3);
  func_0x00010048ac3c();
  func_0x0001004b9658(uStack_38);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000104c01b0c();
    func_0x00010048ac3c();
    func_0x000104c01a98();
    uVar3 = *param_4;
    uVar4 = *param_5;
    uVar5 = (ulong)uVar4;
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar6 = puVar2[1];
    uVar7 = *puVar2;
    puVar1[3] = puVar2[1];
    puVar1[2] = uVar7;
    if (lVar6 != 0) {
      do {
        FUN_100489994();
        uVar4 = (uint)uVar5;
      } while (extraout_w10 != 0);
    }
    puVar1[4] = uVar3;
    puVar1[5] = 0;
    *(uint *)(puVar1 + 6) = uVar4;
    *(undefined1 *)(puVar1 + 7) = 0;
    puVar1[8] = 0;
    *(undefined4 *)((long)puVar1 + 0x3c) = 0;
    return;
  }
  return;
}



/* Entry: 10055f530; end: 10055f53b;  */

void FUN_10055f530(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  
  uVar1 = *param_3;
  uVar2 = *param_4;
  uVar3 = (ulong)uVar2;
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar5;
  if (lVar4 != 0) {
    do {
      FUN_100489994();
      uVar2 = (uint)uVar3;
    } while (extraout_w10 != 0);
  }
  param_1[4] = uVar1;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = uVar2;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  return;
}



/* Entry: 10055f53c; end: 10055f57b;  */

undefined8 * FUN_10055f53c(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1107e9ce0;
  param_1[1] = 0;
  FUN_10055f530(param_1 + 3);
  return param_1;
}



/* Entry: 10055f57c; end: 10055f5bf;  */

void FUN_10055f57c(void)

{
  func_0x000100488b40();
  func_0x00010048ac10();
  return;
}



/* Entry: 10055f5c0; end: 10055f613;  */

void FUN_10055f5c0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10048b724(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10055f614; end: 10055f6d3;  */

void FUN_10055f614(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam000000011383a968 & 1) == 0) {
    iVar5 = 0x1383a968;
    func_0x000107c60e48();
    if (iVar5 != 0) {
      FUN_10055f7c4(&uStack_40);
      uRam000000011383a958 = uStack_40;
      lRam000000011383a960 = lStack_38;
      uStack_40 = 0;
      lStack_38 = 0;
      FUN_10055f7f4(&uStack_40);
      func_0x000107c60e4c(0x11383a968);
    }
  }
  lVar4 = lRam000000011383a960;
  *param_1 = uRam000000011383a958;
  param_1[1] = lVar4;
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
  return;
}



/* Entry: 10055f6d4; end: 10055f6ff;  */

long FUN_10055f6d4(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0x666666666666667) {
    lVar1 = param_2 * 0x28;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10055f6d4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10055f700; end: 10055f72b;  */

long FUN_10055f700(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10055f6d4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10055f72c; end: 10055f7c3;  */

void FUN_10055f72c(long *param_1)

{
  undefined8 *puVar1;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10055f700(auStack_40,1);
  puVar1 = puStack_30;
  *puStack_30 = &PTR_DAT_110cd3740;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_110cd3790;
  puStack_30[4] = 0;
  puStack_30 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  FUN_10055f7e4(auStack_40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  pcStack_48 = FUN_10055f7c4;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_10055f72c(&uStack_51);
  return;
}



/* Entry: 10055f7c4; end: 10055f7e3;  */

void FUN_10055f7c4(void)

{
  undefined1 uStack_11;
  
  FUN_10055f72c(&uStack_11);
  return;
}



/* Entry: 10055f7e4; end: 10055f7f3;  */

void FUN_10055f7e4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10055f7f4; end: 10055f81f;  */

long FUN_10055f7f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10055f820; end: 10055f833;  */

void FUN_10055f820(void)

{
  return;
}



/* Entry: 10055f834; end: 10055f857;  */

void FUN_10055f834(long param_1)

{
  FUN_100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10055f858; end: 10055f85f;  */

void FUN_10055f858(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100469850(param_1,unaff_x19 + 0x80);
  func_0x000107c60c94();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(unaff_x20 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_10028af84(param_1 + 0x30,unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x20 + 0x50);
  FUN_10028af84(unaff_x19 + 0x58,unaff_x20 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x78) = uVar1;
  FUN_10028af84(unaff_x19 + 0x88,unaff_x20 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined1 *)(unaff_x19 + 0xb8) = *(undefined1 *)(unaff_x20 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar2;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar1;
  return;
}



/* Entry: 10055f860; end: 10055fa77;  */

void FUN_10055f860(long param_1)

{
  long *plVar1;
  int extraout_w10;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_220 [40];
  undefined4 uStack_1f8;
  undefined4 auStack_160 [2];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined1 auStack_140 [24];
  undefined1 uStack_128;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [40];
  undefined4 uStack_d8;
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [24];
  char cStack_60;
  
  lVar2 = *(long *)(param_1 + 0x18);
  FUN_10055f858(auStack_100);
  *(undefined4 *)(param_1 + 0x218) = uStack_d8;
  FUN_100469c34();
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_10055f858();
    FUN_100469c34();
    if (cStack_60 == '\x01') {
      FUN_10055f858();
      FUN_1002a8208(param_1 + 0x1c0,auStack_78);
      func_0x000100561d34();
      puVar3 = *(undefined8 **)(param_1 + 0xe0);
      FUN_10002b838(auStack_220,"");
      FUN_10002b838(auStack_160,"");
      FUN_10028af84(auStack_120,param_1 + 0x1c0);
      auStack_140[0] = 0;
      uStack_128 = 0;
      (**(code **)*puVar3)
                (auStack_100,puVar3,auStack_220,param_1 + 0x88,auStack_160,auStack_120,auStack_140);
      FUN_100603cf4(param_1 + 0x108,auStack_100);
      FUN_1006038cc(auStack_100);
      FUN_1001148fc(auStack_140);
      FUN_1001148fc(auStack_120);
      func_0x000107c60ca0(auStack_160);
      FUN_10076d17c();
      if (*(char *)(param_1 + 0x138) == '\x01') {
        FUN_10046a75c(lVar2,param_1 + 0x120);
      }
    }
    plVar1 = *(long **)(param_1 + 0xe0);
    if ((plVar1 != (long *)0x0) && ((**(code **)(*plVar1 + 8))(), (int)plVar1 != 0)) {
      *(undefined1 *)(lVar2 + 0x79) = 1;
    }
  }
  FUN_10055f858(auStack_100);
  func_0x0001002a969c(param_1 + 0x1e0,auStack_a8);
  func_0x000107c60ca4(param_1 + 0x200,auStack_100);
  FUN_10055fa80(param_1);
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  auStack_160[0] = *(undefined4 *)(param_1 + 0x30);
  uStack_150 = *(undefined8 *)(param_1 + 0x28);
  uStack_158 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    do {
      FUN_100489994();
    } while (extraout_w10 != 0);
  }
  FUN_10055f858(auStack_220);
  uStack_148 = uStack_1f8;
  FUN_100561c04(uVar4,auStack_160);
  func_0x000100561d2c();
  func_0x00010055fd1c();
  func_0x000100561d34();
  return;
}



/* Entry: 10055fa78; end: 10055fa7f;  */

undefined1 FUN_10055fa78(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 10055fa80; end: 10055fb83;  */

void FUN_10055fa80(long param_1)

{
  undefined8 uVar1;
  int extraout_w10;
  long lVar2;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 auStack_48 [3];
  
  lVar2 = *(long *)(param_1 + 0x18);
  FUN_10046985c(&uStack_110,lVar2 + 0x80);
  FUN_10055fc6c(auStack_48,&uStack_110,*(undefined1 *)(*(long *)(param_1 + 0x18) + 0x78),
                *(undefined1 *)(*(long *)(param_1 + 0x18) + 0x79),param_1 + 0xa8,param_1 + 0xb8);
  FUN_10046e1e8(lVar2,auStack_48);
  func_0x00010046e31c(auStack_48);
  func_0x00010055fd1c();
  FUN_10046e8d8(&uStack_110,*(undefined8 *)(param_1 + 0x18));
  FUN_100488b60(param_1 + 0x20,&uStack_110);
  func_0x000100488b84(&uStack_110);
  uStack_108 = *(undefined8 *)(param_1 + 0x28);
  uStack_110 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    do {
      FUN_100489994();
    } while (extraout_w10 != 0);
  }
  FUN_100561b6c(auStack_48,&uStack_110);
  uVar1 = auStack_48[0];
  auStack_48[0] = 0;
  FUN_100561bb8(param_1 + 0x68,uVar1);
  FUN_100561bd0(auStack_48);
  FUN_10048b3ac(&uStack_110);
  return;
}



/* Entry: 10055fb84; end: 10055fb93;  */

void FUN_10055fb84(void)

{
  return;
}



/* Entry: 10055fb94; end: 10055fc6b;  */

void FUN_10055fb94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_10055fb84();
  uVar1 = 0xf0;
  func_0x000107c60e20();
  uStack_58 = unaff_x23[1];
  uStack_60 = *unaff_x23;
  if (unaff_x23[1] != 0) {
    do {
      func_0x000107c35294();
    } while (extraout_w10 != 0);
  }
  uStack_68 = unaff_x22[1];
  uStack_70 = *unaff_x22;
  if (unaff_x22[1] != 0) {
    do {
      func_0x000107c35294();
    } while (extraout_w10_00 != 0);
  }
  FUN_100469900(uVar1,param_1);
  *extraout_x8 = uVar1;
  FUN_10046997c(&uStack_70);
  func_0x0001004699a0(&uStack_60);
  return;
}



/* Entry: 10055fc6c; end: 10055fd13;  */

void FUN_10055fc6c(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_38;
  long lStack_30;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uStack_22 = param_4;
  uStack_21 = param_3;
  FUN_10055fb94(&lStack_38,param_2,&uStack_21,&uStack_22);
  lStack_30 = lStack_38;
  lStack_38 = 0;
  func_0x0001004699c4(param_1,&lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  if (lVar1 != 0) {
    func_0x0001004a5f48();
  }
  lVar1 = lStack_38;
  lStack_38 = 0;
  if (lVar1 != 0) {
    func_0x0001004a5f48();
  }
  return;
}



/* Entry: 10055fd14; end: 10055fd23;  */

void FUN_10055fd14(void)

{
  return;
}



/* Entry: 10055fd24; end: 10055fe13;  */

void FUN_10055fd24(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 auStack_60 [2];
  char cStack_49;
  undefined1 auStack_48 [16];
  undefined1 *puStack_38;
  
  FUN_10046e9e8(param_4,auStack_48);
  FUN_10002b024(auStack_60,"");
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  FUN_10055fe14(uVar2,plVar1,auStack_48,0);
  uStack_78 = param_5[1];
  uStack_80 = *param_5;
  uStack_70 = param_5[2];
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  FUN_100487f08(param_1,auStack_60,uVar2,&uStack_80);
  puStack_38 = (undefined1 *)&uStack_80;
  FUN_1004889dc(&puStack_38);
  if (cStack_49 < '\0') {
    func_0x000107c60e14(auStack_60[0]);
  }
  return;
}



/* Entry: 10055fe14; end: 10056004b;  */

long * FUN_10055fe14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_c8 [8];
  long *plStack_c0;
  undefined1 auStack_b8 [8];
  long *plStack_b0;
  undefined4 auStack_70 [6];
  undefined4 uStack_58;
  long lStack_50;
  long *plStack_48;
  
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/cronet/client/secure/cronet_channel_create.cc"
                ,0x32,0,"grpc_create_cronet_transport: stream_engine = %p, target=%s");
  if (lRam0000000113815be8 == 0) {
    FUN_100472138();
  }
  FUN_100477994(&lStack_50);
  auStack_70[0] = 1;
  uStack_58 = 0;
  FUN_100477f30(auStack_b8,&lStack_50,"grpc.disable_client_authority_filter",0x24,auStack_70);
  puVar4 = auStack_b8;
  FUN_10047f830(puVar4);
  if (plStack_b0 != (long *)0x0) {
    plVar6 = plStack_b0 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      func_0x000107c60d68(plStack_b0);
    }
  }
  FUN_100478948(auStack_70);
  plVar6 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      func_0x000107c60d68(plVar6);
    }
  }
  FUN_10056004c(param_1,param_2,puVar4,param_4);
  FUN_100460de4(auStack_b8);
  FUN_100560184(auStack_c8,puVar4);
  FUN_10047cc18(&lStack_50,param_2,auStack_c8,3,param_1);
  if (plStack_c0 != (long *)0x0) {
    plVar6 = plStack_c0 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      func_0x000107c60d68(plStack_c0);
    }
  }
  FUN_10048650c(puVar4);
  plVar6 = plStack_48;
  if (lStack_50 == 0) {
    plStack_48 = (long *)0x0;
  }
  else {
    plVar6 = (long *)0x0;
  }
  FUN_100487ea0(&lStack_50);
  FUN_100467a48(auStack_b8);
  return plVar6;
}



/* Entry: 10056004c; end: 100560183;  */

undefined8 * FUN_10056004c(undefined8 param_1,long param_2,ulong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar1 = (undefined8 *)0x20;
  FUN_100460200();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &UNK_1107c7978;
    puVar1[1] = param_1;
    func_0x000107c613d0();
    param_2 = param_2 + 1;
    FUN_100460200();
    puVar1[2] = param_2;
    if (param_2 == 0) {
      FUN_100460314(puVar1);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      func_0x000107c613c4();
      *(undefined1 *)(puVar1 + 3) = 1;
      if ((param_3 != (ulong *)0x0) && (uVar5 = *param_3, uVar5 != 0)) {
        lVar3 = 0;
        uVar4 = 0;
        do {
          uVar6 = param_3[1];
          uVar2 = *(undefined8 *)(uVar6 + lVar3 + 8);
          func_0x000107c613c0(uVar2,"grpc.use_cronet_packet_coalescing");
          if ((int)uVar2 == 0) {
            if (*(int *)(uVar6 + lVar3) == 1) {
              *(bool *)(puVar1 + 3) = *(int *)(uVar6 + lVar3 + 0x10) != 0;
            }
            else {
              FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/cronet/transport/cronet_transport.cc"
                            ,0x5da,2,"%s ignored: it must be an integer");
              uVar5 = *param_3;
            }
          }
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x20;
        } while (uVar4 < uVar5);
      }
    }
  }
  return puVar1;
}



/* Entry: 100560184; end: 10056024f;  */

void FUN_100560184(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != (ulong *)0x0) && (*param_2 != 0)) {
    uVar7 = 0;
    do {
      puVar2 = (undefined8 *)(param_2[1] + uVar7 * 0x20);
      uStack_58 = puVar2[1];
      uStack_60 = *puVar2;
      uStack_48 = puVar2[3];
      uStack_50 = puVar2[2];
      FUN_100477dbc(auStack_40,param_1,&uStack_60);
      func_0x000100478a50(param_1,auStack_40);
      plVar5 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          func_0x000107c60d68(plVar5);
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *param_2);
  }
  return;
}



/* Entry: 100560250; end: 1005602d7;  */

void FUN_100560250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  FUN_10002b024(auStack_48,param_5);
  FUN_1004792c0(param_1,param_2,param_3,param_4,auStack_48);
  if (cStack_31 < '\0') {
    func_0x000107c60e14(auStack_48[0]);
  }
  return;
}



/* Entry: 1005602d8; end: 100560447;  */

undefined8 FUN_1005602d8(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_40;
  long *plStack_38;
  
  puVar7 = &uStack_40;
  uVar8 = (uint)&uStack_40;
  lVar9 = *param_2;
  if (*(long **)(lVar9 + 0x30) != (long *)0x0) {
    lVar5 = *(long *)(**(long **)(lVar9 + 0x30) + 8);
    func_0x000107c613e4(lVar5,"http");
    if (lVar5 != 0) {
      uStack_40 = *(undefined8 *)(lVar9 + 0x38);
      plStack_38 = *(long **)(lVar9 + 0x40);
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = uVar10;
      func_0x000107c613d0(uVar10);
      FUN_10047d6c8(&uStack_40,uVar10,uVar6);
      if (*(char *)(param_1 + 8) == '\0') {
        FUN_10047d6c8(&uStack_40,"grpc.minimal_stack",0x12);
        uVar8 = uVar8 & 0xffff;
        if (uVar8 < 0x101) {
          uVar8 = 0;
        }
        uVar8 = (uint)((uVar8 & 0xff) == 0);
      }
      else {
        uVar8 = 1;
      }
      if (((ulong)puVar7 & 0xff00) != 0) {
        uVar8 = (uint)puVar7;
      }
      if ((uVar8 & 0xff) != 0) {
        FUN_100560688(lVar9,*(undefined8 *)(param_1 + 0x18));
      }
      plVar1 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar2 = plStack_38 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          func_0x000107c60d68(plVar1);
        }
      }
    }
  }
  return 1;
}



/* Entry: 100560448; end: 100560687;  */

ulong * FUN_100560448(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  ulong *puStack_88;
  ulong *puStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  puVar2 = (ulong *)param_1[1];
  puVar1 = param_1 + 2;
  if (puVar2 < (ulong *)*puVar1) {
    if (param_2 == puVar2) {
      *param_2 = *param_3;
      param_1[1] = (ulong)(param_2 + 1);
      param_1 = param_2;
    }
    else {
      puVar1 = puVar2;
      for (puVar5 = puVar2 + -1; puVar5 < puVar2; puVar5 = puVar5 + 1) {
        *puVar1 = *puVar5;
        puVar1 = puVar1 + 1;
      }
      param_1[1] = (ulong)puVar1;
      if (puVar2 != param_2 + 1) {
        func_0x000107c610b8(puVar2 + -((long)puVar2 - (long)(param_2 + 1) >> 3),param_2);
      }
      if (param_2 <= param_3) {
        param_3 = param_3 + (param_3 < (ulong *)param_1[1]);
      }
      *param_2 = *param_3;
      param_1 = param_2;
    }
  }
  else {
    uVar7 = *param_1;
    uVar3 = ((long)((long)puVar2 - uVar7) >> 3) + 1;
    if (uVar3 >> 0x3d != 0) {
      func_0x000104a80634();
      if (puStack_78 != puStack_80) {
        puStack_78 = (ulong *)((long)puStack_78 +
                              (((long)puStack_80 - (long)puStack_78) + 7U & 0xfffffffffffffff8));
      }
      if (puStack_88 != (ulong *)0x0) {
        func_0x000107c60e14();
      }
      func_0x000107c60bd8();
      pcStack_98 = FUN_100560688;
      param_1 = param_1 + 9;
      uStack_a8 = (ulong)param_2;
      puStack_a0 = &stack0xfffffffffffffff0;
      FUN_100560448(param_1,*param_1,&uStack_a8);
      return param_1;
    }
    lVar9 = (long)param_2 - uVar7;
    uVar8 = lVar9 >> 3;
    uVar4 = (long)*puVar1 - uVar7;
    uVar6 = (long)uVar4 >> 2;
    if (uVar6 <= uVar3) {
      uVar6 = uVar3;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar6 = 0x1fffffffffffffff;
    }
    puStack_68 = puVar1;
    if (uVar6 == 0) {
      puVar2 = (ulong *)0x0;
    }
    else {
      puVar2 = puVar1;
      FUN_10047d694();
    }
    puVar5 = puVar2 + uVar8;
    puStack_70 = puVar2 + uVar6;
    puStack_88 = puVar2;
    puStack_80 = puVar5;
    if (uVar8 == uVar6) {
      if (lVar9 < 1) {
        uVar3 = lVar9 >> 2;
        if ((ulong *)uVar7 == param_2) {
          uVar3 = 1;
        }
        uVar7 = uVar3;
        puStack_78 = puVar5;
        FUN_10047d694();
        puVar5 = puVar1 + (uVar3 >> 2);
        puStack_70 = puVar1 + uVar7;
        puStack_88 = puVar1;
        puStack_80 = puVar5;
        if (puVar2 != (ulong *)0x0) {
          func_0x000107c60e14(puVar2);
        }
      }
      else {
        uVar3 = uVar8 + 2;
        if (-2 < (long)uVar8) {
          uVar3 = uVar8 + 1;
        }
        puVar5 = puVar5 + -(uVar3 >> 1);
        puStack_80 = puVar5;
      }
    }
    puStack_78 = puVar5 + 1;
    *puVar5 = *param_3;
    FUN_1005606b0(param_1,&puStack_88,param_2);
    if (puStack_78 != puStack_80) {
      puStack_78 = (ulong *)((long)puStack_78 +
                            ((long)puStack_80 + (7 - (long)puStack_78) & 0xfffffffffffffff8U));
    }
    if (puStack_88 != (ulong *)0x0) {
      func_0x000107c60e14();
    }
  }
  return param_1;
}



/* Entry: 100560688; end: 1005606af;  */

void FUN_100560688(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_100560448((undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x48),&uStack_18);
  return;
}



/* Entry: 1005606b0; end: 100560773;  */

undefined8 * FUN_1005606b0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar5 = (undefined8 *)param_2[1];
  puVar2 = (undefined8 *)*param_1;
  puVar1 = puVar5;
  puVar4 = param_3;
  while (puVar2 != puVar4) {
    puVar4 = puVar4 + -1;
    puVar1 = puVar1 + -1;
    *puVar1 = *puVar4;
  }
  param_2[1] = puVar1;
  lVar6 = param_2[2];
  lVar3 = param_1[1] - (long)param_3;
  if (lVar3 != 0) {
    func_0x000107c610b8(lVar6,param_3,lVar3);
    puVar1 = (undefined8 *)param_2[1];
  }
  param_2[2] = lVar6 + lVar3;
  lVar3 = *param_1;
  *param_1 = (long)puVar1;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return puVar5;
}



/* Entry: 100560774; end: 1005607c3;  */

undefined8 FUN_100560774(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_2;
  plVar2 = *(long **)(lVar3 + 0x30);
  if (plVar2 != (long *)0x0) {
    lVar1 = *(long *)(*plVar2 + 8);
    func_0x000107c613e4(lVar1,"http");
    if (lVar1 != 0) {
      FUN_100560688(lVar3,*(undefined8 *)(param_1 + 8));
    }
  }
  return 1;
}



/* Entry: 1005607c4; end: 1005608fb;  */

undefined8 FUN_1005607c4(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_40;
  long *plStack_38;
  
  puVar6 = &uStack_40;
  uVar5 = (uint)&uStack_40;
  lVar7 = *param_2;
  uStack_40 = *(undefined8 *)(lVar7 + 0x38);
  plStack_38 = *(long **)(lVar7 + 0x40);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10047d6c8(&uStack_40,"grpc.enable_deadline_checking",0x1d);
  FUN_10047d6c8(&uStack_40,"grpc.minimal_stack",0x12);
  uVar5 = uVar5 & 0xffff;
  if (uVar5 < 0x101) {
    uVar5 = 0;
  }
  uVar5 = (uint)((uVar5 & 0xff) == 0);
  if (((ulong)puVar6 & 0xff00) != 0) {
    uVar5 = (uint)puVar6;
  }
  if ((uVar5 & 0xff) != 0) {
    FUN_100560688(lVar7,*(undefined8 *)(param_1 + 8));
  }
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar7 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      func_0x000107c60d68(plVar1);
    }
  }
  return 1;
}



/* Entry: 1005608fc; end: 100560907;  */

void FUN_1005608fc(long param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100560904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(*param_2);
  return;
}



/* Entry: 100560908; end: 100560a23;  */

undefined8 FUN_100560908(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 auStack_48 [16];
  char cStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  plStack_28 = *(long **)(param_1 + 0x40);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar7 = &uStack_30;
  FUN_10047d6c8(puVar7,"grpc.minimal_stack",0x12);
  uVar5 = (uint)puVar7 & 0xffff;
  if (uVar5 < 0x101) {
    uVar5 = 0;
  }
  if ((uVar5 & 0xff) == 0) {
    uVar5 = (uint)&uStack_30;
    FUN_100560a24();
    uVar6 = (uint)&uStack_30;
    func_0x000100560a94();
    if ((uVar6 & uVar5) == 0xffffffff) {
      FUN_10047d3b0(auStack_48,&uStack_30,"grpc.service_config",0x13);
      if (cStack_38 == '\0') goto LAB_1005609b8;
    }
    FUN_100560688(param_1,&PTR_FUN_1107c3e90);
  }
LAB_1005609b8:
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar8 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      func_0x000107c60d68(plVar1);
    }
  }
  return 1;
}



/* Entry: 100560a24; end: 100560b07;  */

int FUN_100560a24(ulong param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  FUN_10047d6c8(param_1,"grpc.minimal_stack",0x12);
  uVar1 = (uint)uVar3 & 0xffff;
  if (uVar1 < 0x101) {
    uVar1 = 0;
  }
  if ((uVar1 & 0xff) == 0) {
    FUN_10047d9fc(param_1,"grpc.max_send_message_length",0x1c);
    iVar2 = (int)param_1;
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    if ((param_1 & 0xff00000000) == 0) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}



/* Entry: 100560b08; end: 100560c2b;  */

undefined8 FUN_100560b08(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auStack_48 [16];
  char cStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  lVar7 = *param_2;
  uStack_30 = *(undefined8 *)(lVar7 + 0x38);
  plStack_28 = *(long **)(lVar7 + 0x40);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar6 = &uStack_30;
  FUN_10047d6c8(puVar6,"grpc.minimal_stack",0x12);
  uVar3 = (uint)puVar6 & 0xffff;
  if (uVar3 < 0x101) {
    uVar3 = 0;
  }
  if ((uVar3 & 0xff) == 0) {
    FUN_10047d3b0(auStack_48,&uStack_30,"grpc.service_config",0x13);
    if (cStack_38 != '\0') {
      FUN_100560688(lVar7,&PTR_FUN_1107c3260);
    }
  }
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar7 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      func_0x000107c60d68(plVar1);
    }
  }
  return 1;
}



/* Entry: 100560c2c; end: 100560c57;  */

undefined8 FUN_100560c2c(long param_1)

{
  long lVar1;
  char *pcStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010047d598(param_1,&PTR_FUN_1107c4bc8);
    return 1;
  }
  func_0x000107c2c2f4();
  lVar1 = param_1 + 0x38;
  pcStack_40 = "grpc.internal.security_connector";
  uStack_38 = 0x20;
  FUN_100477d50(lVar1,&pcStack_40);
  if (lVar1 != 0) {
    FUN_100560688(param_1,&PTR_FUN_1107c66c8);
  }
  return 1;
}



/* Entry: 100560c58; end: 100560d0b;  */

undefined8 FUN_100560c58(long param_1)

{
  long lVar1;
  char *pcStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x38;
  pcStack_30 = "grpc.internal.security_connector";
  uStack_28 = 0x20;
  FUN_100477d50(lVar1,&pcStack_30);
  if (lVar1 != 0) {
    FUN_100560688(param_1,&PTR_FUN_1107c66c8);
  }
  return 1;
}



/* Entry: 100560d0c; end: 100560d0f;  */

void FUN_100560d0c(void)

{
  return;
}



/* Entry: 100560d10; end: 100560d43;  */

ulong FUN_100560d10(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  
  lVar3 = lRam0000000113815be8;
  if (lRam0000000113815be8 == 0) {
    FUN_100472138();
  }
  lVar5 = *(long *)(lVar3 + 0xd8);
  if (*(long *)(lVar3 + 0xe0) != lVar5) {
    uVar6 = 0;
    pcVar4 = "message_size";
    do {
      plVar2 = *(long **)(lVar5 + uVar6 * 8);
      (**(code **)(*plVar2 + 0x10))();
      iVar1 = (int)plVar2;
      if ((pcVar4 == (char *)0xc) && (pcVar4 = "message_size", func_0x000107c610b0(), iVar1 == 0)) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar5 = *(long *)(lVar3 + 0xd8);
    } while (uVar6 < (ulong)(*(long *)(lVar3 + 0xe0) - lVar5 >> 3));
  }
  return 0xffffffffffffffff;
}



/* Entry: 100560d44; end: 100560e0b;  */

void FUN_100560d44(undefined8 *param_1,ulong param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong *puVar7;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  puVar4 = auStack_40;
  puVar5 = auStack_40;
  if (*(int *)(param_3 + 0x14) == 0) {
    puVar7 = *(ulong **)(param_2 + 8);
    *puVar7 = 0;
    puVar7[1] = 0;
    FUN_100560d10();
    puVar7[1] = param_2;
    FUN_100560184(auStack_40,*(undefined8 *)(param_3 + 8));
    FUN_100560a24();
    func_0x000100560a94();
    *puVar7 = (ulong)puVar4 & 0xffffffff | (long)puVar5 << 0x20;
    if (plStack_38 != (long *)0x0) {
      plVar1 = plStack_38 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        func_0x000107c60d68(plStack_38);
      }
    }
    *param_1 = 0;
    return;
  }
  func_0x000107c2c254();
  FUN_100478eac(auStack_40);
  func_0x000107c60bd8(param_2);
  return;
}



/* Entry: 100560e0c; end: 100560e0f;  */

void FUN_100560e0c(void)

{
  return;
}



/* Entry: 100560e10; end: 100560e2f;  */

void FUN_100560e10(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 *extraout_x8;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  undefined1 uStack_e1;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  ulong uStack_c8;
  undefined1 auStack_c0 [8];
  long *plStack_b8;
  ulong auStack_b0 [2];
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  long lStack_48;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (*(int *)(param_3 + 0x14) == 0) {
    *param_1 = 0;
    return;
  }
  func_0x000107c2c230();
  pcStack_18 = FUN_100560e30;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_4 + 0x14) == 0) {
    lVar10 = param_3;
    puStack_20 = &stack0xfffffffffffffff0;
    FUN_100560184(auStack_c0,*(undefined8 *)(param_4 + 8));
    FUN_100560fec(auStack_b0,auStack_c0);
    if (plStack_b8 != (long *)0x0) {
      plVar1 = plStack_b8 + 1;
      do {
        lVar13 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar13 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
        func_0x000107c60d68(plStack_b8);
      }
    }
    uVar7 = uStack_80;
    uVar6 = uStack_88;
    uVar5 = uStack_90;
    uVar4 = uStack_98;
    puVar11 = *(undefined8 **)(param_3 + 8);
    if (auStack_b0[0] == 0) {
      *puVar11 = &PTR_DAT_1107c3800;
      *(undefined4 *)(puVar11 + 1) = uStack_a0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      puVar11[3] = uVar5;
      puVar11[2] = uVar4;
      puVar11[5] = uVar7;
      puVar11[4] = uVar6;
      *(undefined1 *)(puVar11 + 6) = uStack_78;
      *extraout_x8 = 0;
    }
    else {
      *puVar11 = &PTR_DAT_1107c0cf0;
      uStack_c8 = auStack_b0[0];
      if ((auStack_b0[0] & 1) != 0) {
        piVar12 = (int *)(auStack_b0[0] - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar3) {
            *piVar12 = *piVar12 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x000104addba0(extraout_x8,&uStack_c8);
      if ((uStack_c8 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    puVar9 = auStack_b0;
    FUN_1005617b4(puVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    func_0x000107c60e78();
    if ((int)lVar10 != 0) {
      func_0x000104bd46a0(puVar9);
      FUN_1004bdf74(&uStack_c8);
      FUN_1005617b4(auStack_b0);
    }
    func_0x000107c60bd8(puVar9);
    pcStack_d8 = FUN_100560fc4;
    ppuStack_e0 = &puStack_20;
    FUN_100560e30(&uStack_e1,puVar9,lVar10);
    return;
  }
  puStack_20 = &stack0xfffffffffffffff0;
  func_0x000107c2c23c();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100560f7c);
  (*pcVar8)();
}



/* Entry: 100560e30; end: 100560fc3;  */

void FUN_100560e30(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  undefined1 uStack_d1;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong uStack_b8;
  undefined1 auStack_b0 [8];
  long *plStack_a8;
  ulong auStack_a0 [2];
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_4 + 0x14) != 0) {
    func_0x000107c2c23c();
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100560f7c);
    (*pcVar8)();
  }
  lVar10 = param_3;
  FUN_100560184(auStack_b0,*(undefined8 *)(param_4 + 8));
  FUN_100560fec(auStack_a0,auStack_b0);
  if (plStack_a8 != (long *)0x0) {
    plVar1 = plStack_a8 + 1;
    do {
      lVar13 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      func_0x000107c60d68(plStack_a8);
    }
  }
  uVar7 = uStack_70;
  uVar6 = uStack_78;
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  puVar11 = *(undefined8 **)(param_3 + 8);
  if (auStack_a0[0] == 0) {
    *puVar11 = &PTR_DAT_1107c3800;
    *(undefined4 *)(puVar11 + 1) = uStack_90;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    puVar11[3] = uVar5;
    puVar11[2] = uVar4;
    puVar11[5] = uVar7;
    puVar11[4] = uVar6;
    *(undefined1 *)(puVar11 + 6) = uStack_68;
    *param_1 = 0;
  }
  else {
    *puVar11 = &PTR_DAT_1107c0cf0;
    uStack_b8 = auStack_a0[0];
    if ((auStack_a0[0] & 1) != 0) {
      piVar12 = (int *)(auStack_a0[0] - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar3) {
          *piVar12 = *piVar12 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104addba0(param_1,&uStack_b8);
    if ((uStack_b8 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  puVar9 = auStack_a0;
  FUN_1005617b4(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  if ((int)lVar10 != 0) {
    func_0x000104bd46a0(puVar9);
    FUN_1004bdf74(&uStack_b8);
    FUN_1005617b4(auStack_a0);
  }
  func_0x000107c60bd8(puVar9);
  pcStack_c8 = FUN_100560fc4;
  puStack_d0 = &stack0xfffffffffffffff0;
  FUN_100560e30(&uStack_d1,puVar9,lVar10);
  return;
}



/* Entry: 100560fc4; end: 100560feb;  */

void FUN_100560fc4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_100560e30(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 100560fec; end: 1005612ef;  */

/* WARNING: Removing unreachable block (ram,0x00010056119c) */

void FUN_100560fec(undefined8 *param_1,undefined8 ****param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 *****pppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *****unaff_x21;
  undefined8 **ppuVar12;
  ulong unaff_x22;
  long *aplStack_148 [4];
  long lStack_128;
  ulong uStack_120;
  undefined8 ****ppppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 ****ppppuStack_e8;
  ulong uStack_e0;
  byte bStack_d1;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 *puStack_58;
  code *pcStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = 0x17;
  ppppuVar6 = param_2;
  FUN_100479434(param_2,"grpc.internal.transport",0x17);
  if (ppppuVar6 == (undefined8 ****)0x0) {
    func_0x000107c2b9c4(&pppuStack_78,"HttpClientFilter needs a transport",0x22);
    pcVar9 = (char *)&pppuStack_78;
    func_0x000104a9451c(param_1);
    ppppuVar6 = (undefined8 ****)pppuStack_78;
    if (((ulong)pppuStack_78 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    FUN_10047d3b0(&pppuStack_78,param_2,"grpc.http2_scheme",0x11);
    pcVar2 = (code *)0x0;
    if ((char)puStack_68 != '\0') {
      pcVar2 = pcStack_70;
    }
    pcVar9 = "";
    ppppuVar7 = (undefined8 ****)pcVar9;
    if ((char)puStack_68 != '\0') {
      ppppuVar7 = (undefined8 ****)pppuStack_78;
    }
    FUN_1005612f0(ppppuVar7,pcVar2,&pppuStack_c8,FUN_100561420);
    uVar1 = 0;
    if ((uint)ppppuVar7 != 2) {
      uVar1 = (uint)ppppuVar7;
    }
    unaff_x22 = (ulong)uVar1;
    ppuVar12 = (*ppppuVar6)[1];
    pppuStack_c8 = (undefined8 ****)0x0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    pppuStack_d0 = &pppuStack_c8;
    FUN_10047d3b0(&pppuStack_78,param_2,"grpc.primary_user_agent",0x17);
    ppppuVar6 = (undefined8 ****)pcVar9;
    pcVar2 = (code *)0x0;
    if ((char)puStack_68 != '\0') {
      ppppuVar6 = (undefined8 ****)pppuStack_78;
      pcVar2 = pcStack_70;
    }
    ppppuVar7 = &pppuStack_d0;
    FUN_100561424(ppppuVar7,ppppuVar6,pcVar2);
    FUN_1005615e8();
    pcStack_70 = FUN_1005616c4;
    puStack_68 = &DAT_10f32054f;
    pcStack_60 = FUN_1005616c4;
    pcStack_50 = FUN_1005616c4;
    unaff_x21 = &ppppuStack_e8;
    pppuStack_78 = ppppuVar7;
    puStack_58 = ppuVar12;
    FUN_1004d4da0(&ppppuStack_e8,"grpc-c/%s (%s; %s)",0x12,&pppuStack_78,3);
    pppppuVar5 = (undefined8 *****)ppppuStack_e8;
    if (-1 < (char)bStack_d1) {
      uStack_e0 = (ulong)bStack_d1;
      pppppuVar5 = unaff_x21;
    }
    FUN_100561424(&pppuStack_d0,pppppuVar5,uStack_e0);
    if ((char)bStack_d1 < '\0') {
      func_0x000107c60e14(ppppuStack_e8);
    }
    FUN_10047d3b0(&pppuStack_78,param_2,"grpc.secondary_user_agent",0x19);
    pcVar2 = (code *)0x0;
    if ((char)puStack_68 != '\0') {
      pcVar9 = (char *)pppuStack_78;
      pcVar2 = pcStack_70;
    }
    FUN_100561424(&pppuStack_d0,pcVar9,pcVar2);
    param_5 = (code *)0x1;
    FUN_1004d6a18(&pppuStack_78,pppuStack_c8,uStack_c0," ");
    FUN_100561708(&uStack_b0,&pppuStack_78);
    ppppuStack_e8 = &pppuStack_c8;
    FUN_1004d6bcc(&ppppuStack_e8);
    pcVar9 = "grpc.testing.use_put_requests";
    uVar10 = 0x1d;
    ppppuVar6 = param_2;
    FUN_10047d9fc(param_2,"grpc.testing.use_put_requests",0x1d);
    *(uint *)(param_1 + 2) = uVar1;
    param_1[5] = uStack_a0;
    param_1[4] = uStack_a8;
    param_1[6] = uStack_98;
    param_1[3] = uStack_b0;
    *(bool *)(param_1 + 7) = ((ulong)ppppuVar6 & 0xff00000000) != 0 && (int)ppppuVar6 != 0;
    *param_1 = 0;
    param_1[1] = &PTR_DAT_1107c3800;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  if ((int)pcVar9 != 0) {
    func_0x000104bd46a0();
    FUN_1004bdf74(&pppuStack_78);
  }
  ppppuVar7 = ppppuVar6;
  func_0x000107c60bd8();
  pcStack_f8 = FUN_1005612f0;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = unaff_x22;
  ppppuStack_118 = unaff_x21;
  pppuStack_110 = param_2;
  pppuStack_108 = ppppuVar6;
  puStack_100 = &stack0xfffffffffffffff0;
  if ((undefined8 ****)pcVar9 == (undefined8 ****)0x5) {
    iVar8 = 0xf2933cc;
    ppppuVar6 = ppppuVar7;
    func_0x000107c610b0(ppppuVar7,"https",5);
    if ((int)ppppuVar6 == 0) {
      uVar10 = 1;
      goto LAB_1005613bc;
    }
  }
  else if (((undefined8 ****)pcVar9 == (undefined8 ****)0x4) && (*(int *)ppppuVar7 == 0x70747468)) {
    uVar10 = 0;
    iVar8 = 4;
    goto LAB_1005613bc;
  }
  FUN_1004b6808(aplStack_148,ppppuVar7,pcVar9);
  iVar8 = 0xf23d5a2;
  (*param_5)(uVar10,"invalid value",0xd,aplStack_148);
  if ((long *)0x1 < aplStack_148[0]) {
    do {
      lVar11 = *aplStack_148[0];
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(aplStack_148[0],0x10);
      if (bVar4) {
        *aplStack_148[0] = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 + -1 == 0) {
      (*(code *)aplStack_148[0][1])();
    }
  }
  uVar10 = 2;
LAB_1005613bc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
    func_0x000107c60e78(uVar10);
    if (iVar8 != 0) {
      func_0x000104bd46a0(uVar10);
      FUN_1004b6d90(aplStack_148);
    }
    func_0x000107c60bd8(uVar10);
    return;
  }
  return;
}



/* Entry: 1005612f0; end: 10056141f;  */

void FUN_1005612f0(int *param_1,long param_2,undefined8 param_3,code *param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  long *aplStack_58 [4];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 == 5) {
    iVar5 = 0xf2933cc;
    piVar4 = param_1;
    func_0x000107c610b0(param_1,"https",5);
    if ((int)piVar4 == 0) {
      uVar3 = 1;
      goto LAB_1005613bc;
    }
  }
  else if ((param_2 == 4) && (*param_1 == 0x70747468)) {
    uVar3 = 0;
    iVar5 = 4;
    goto LAB_1005613bc;
  }
  FUN_1004b6808(aplStack_58,param_1,param_2);
  iVar5 = 0xf23d5a2;
  (*param_4)(param_3,"invalid value",0xd,aplStack_58);
  if ((long *)0x1 < aplStack_58[0]) {
    do {
      lVar6 = *aplStack_58[0];
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(aplStack_58[0],0x10);
      if (bVar2) {
        *aplStack_58[0] = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)aplStack_58[0][1])();
    }
  }
  uVar3 = 2;
LAB_1005613bc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78(uVar3);
  if (iVar5 != 0) {
    func_0x000104bd46a0(uVar3);
    FUN_1004b6d90(aplStack_58);
  }
  func_0x000107c60bd8(uVar3);
  return;
}



/* Entry: 100561420; end: 100561423;  */

void FUN_100561420(void)

{
  return;
}



/* Entry: 100561424; end: 1005615e7;  */

void FUN_100561424(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 **ppuVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x19;
  undefined1 *puStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  ppuVar3 = &puStack_80;
  if (param_3 != 0) {
    if (0x7ffffffffffffff7 < param_3) {
      func_0x000104a6fa5c(&puStack_80);
LAB_1005615b0:
      func_0x000104a9439c(unaff_x19);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005615bc);
      (*pcVar2)();
    }
    unaff_x19 = (long *)*param_1;
    if (param_3 < 0x17) {
      uStack_70 = CONCAT17((char)param_3,(undefined7)uStack_70);
    }
    else {
      uVar1 = (param_3 & 0xfffffffffffffff8) + 8;
      if ((param_3 | 7) != 0x17) {
        uVar1 = param_3 | 7;
      }
      ppuVar3 = (undefined1 **)(uVar1 + 1);
      func_0x000107c60e20();
      uStack_70 = (ulong)(uVar1 + 1) | 0x8000000000000000;
      puStack_80 = (undefined1 *)ppuVar3;
      uStack_78 = param_3;
    }
    func_0x000107c610b8(ppuVar3,param_2,param_3);
    *(undefined1 *)((long)ppuVar3 + param_3) = 0;
    plVar4 = unaff_x19 + 2;
    puVar6 = (undefined8 *)unaff_x19[1];
    if (puVar6 < (undefined8 *)*plVar4) {
      puVar6[2] = uStack_70;
      puVar6[1] = uStack_78;
      *puVar6 = puStack_80;
      puVar6 = puVar6 + 3;
      unaff_x19[1] = (long)puVar6;
    }
    else {
      lVar7 = (long)puVar6 - *unaff_x19 >> 3;
      uVar1 = lVar7 * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar1) goto LAB_1005615b0;
      lVar5 = *plVar4 - *unaff_x19 >> 3;
      uVar8 = lVar5 * 0x5555555555555556;
      if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
        uVar8 = uVar1;
      }
      if (0x555555555555554 < (ulong)(lVar5 * -0x5555555555555555)) {
        uVar8 = 0xaaaaaaaaaaaaaaa;
      }
      plStack_48 = plVar4;
      if (uVar8 == 0) {
        plStack_68 = (long *)0x0;
      }
      else {
        func_0x0001004d69d4();
        plStack_68 = plVar4;
      }
      plStack_60 = plStack_68 + lVar7;
      plStack_50 = plStack_68 + uVar8 * 3;
      plStack_60[2] = uStack_70;
      plStack_60[1] = uStack_78;
      *plStack_60 = (long)puStack_80;
      plStack_58 = plStack_60 + 3;
      FUN_10004824c(unaff_x19,&plStack_68);
      puVar6 = (undefined8 *)unaff_x19[1];
      FUN_1000482e8(&plStack_68);
    }
    unaff_x19[1] = (long)puVar6;
  }
  return;
}



/* Entry: 1005615e8; end: 1005615f3;  */

char * FUN_1005615e8(void)

{
  return "26.0.0";
}



/* Entry: 1005615f4; end: 1005616c3;  */

void FUN_1005615f4(long param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((param_2 & 0xff) == 0x11) {
    func_0x000107c2b994(param_1,param_2,param_3 & 0xffffffff,param_4);
  }
  else {
    if (param_1 == 0) {
      lVar3 = 0;
    }
    else if ((int)param_3 < 0) {
      lVar3 = param_1;
      func_0x000107c613d0(param_1);
    }
    else {
      lVar2 = param_1;
      func_0x000107c610ac(param_1,0);
      lVar3 = param_1 + (param_3 & 0x7fffffff);
      if (lVar2 != 0) {
        lVar3 = lVar2;
      }
      lVar3 = lVar3 - param_1;
    }
    uVar1 = (uint)param_2 >> 8;
    if ((uVar1 & 0xff) == 0) {
      FUN_1004d4e28(param_4,param_1,lVar3);
    }
    else {
      func_0x000107c2b9a0(param_4,param_1,lVar3,param_2 >> 0x20,param_3,uVar1 & 1);
    }
  }
  return;
}



/* Entry: 1005616c4; end: 100561707;  */

uint FUN_1005616c4(undefined8 param_1,ulong param_2,undefined4 param_3)

{
  if (((param_2 & 0xff) != 0x13) && ((2L << (param_2 & 0x3f) & 0x40004U) != 0)) {
    FUN_1005615f4(param_1,param_2,param_3);
    return (uint)param_1 & 0xff;
  }
  return 0;
}



/* Entry: 100561708; end: 1005617b3;  */

ulong ** FUN_100561708(undefined8 *param_1,undefined8 *param_2)

{
  ulong **ppuVar1;
  ulong *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  ppuVar1 = &puStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = param_2[1];
  puStack_60 = (ulong *)*param_2;
  lStack_50 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  FUN_1004da2c8(&uStack_48);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  if (lStack_50 < 0) {
    ppuVar1 = (ulong **)puStack_60;
    func_0x000107c60e14();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return ppuVar1;
  }
  func_0x000107c60e78();
  if (lStack_50 < 0) {
    func_0x000107c60e14(puStack_60);
  }
  func_0x000107c60bd8();
  if (*ppuVar1 == (ulong *)0x0) {
    ppuVar1[1] = (ulong *)&PTR_DAT_1107c3800;
    FUN_1004b6d90(ppuVar1 + 3);
  }
  else if (((ulong)*ppuVar1 & 1) != 0) {
    FUN_10084dad0();
  }
  return (ulong **)(ulong *)ppuVar1;
}



/* Entry: 1005617b4; end: 1005617ff;  */

ulong * FUN_1005617b4(ulong *param_1)

{
  if (*param_1 == 0) {
    param_1[1] = (ulong)&PTR_DAT_1107c3800;
    FUN_1004b6d90(param_1 + 3);
  }
  else if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 100561800; end: 1005618a7;  */

void FUN_100561800(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  long lStack_40;
  long *plStack_38;
  
  plVar4 = &lStack_40;
  puVar7 = *(undefined4 **)(param_2 + 8);
  FUN_100560184(&lStack_40,*(undefined8 *)(param_3 + 8));
  func_0x000100560a94();
  plVar5 = plVar4;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      func_0x000107c60d68();
      plVar5 = plStack_38;
    }
  }
  *puVar7 = (int)plVar4;
  FUN_100560d10();
  *(long **)(puVar7 + 2) = plVar5;
  *param_1 = 0;
  return;
}



/* Entry: 1005618a8; end: 1005618af;  */

void FUN_1005618a8(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1005618b0; end: 100561973;  */

char * FUN_1005618b0(undefined8 *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  int *piVar5;
  char *pcStack_38;
  
  piVar5 = *(int **)(param_2 + 8);
  pcVar4 = (char *)(piVar5 + 1);
  FUN_1005618a8(pcVar4);
  uVar1 = (undefined1)*(undefined8 *)(param_3 + 8);
  FUN_100561974();
  *(undefined1 *)(piVar5 + 1) = uVar1;
  uVar3 = *(ulong *)(param_3 + 8);
  FUN_1005619ac();
  iVar2 = 0;
  if ((uVar3 & 0xff00000000) != 0) {
    iVar2 = (int)uVar3;
  }
  *piVar5 = iVar2;
  FUN_100561a80();
  if (((ulong)pcVar4 & 1) == 0) {
    iVar2 = *piVar5;
    func_0x000104ab1444(iVar2,&pcStack_38);
    if (iVar2 == 0) {
      pcStack_38 = "<unknown>";
    }
    pcVar4 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
    ;
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
                  ,0x45,2,"default compression algorithm %s not enabled: switching to none");
    *piVar5 = 0;
  }
  if (*(int *)(param_3 + 0x14) != 0) {
    func_0x000107c2c24c();
    if ((int *)pcVar4 == (int *)0x0) {
      return (char *)(int *)0x7;
    }
    FUN_1004865ac();
    return (char *)(ulong)((uint)pcVar4 & 6 | 1);
  }
  *param_1 = 0;
  return pcVar4;
}



/* Entry: 100561974; end: 1005619ab;  */

uint FUN_100561974(long param_1)

{
  if (param_1 != 0) {
    FUN_1004865ac(param_1,"grpc.compression_enabled_algorithms_bitset",7,7);
    return (uint)param_1 & 6 | 1;
  }
  return 7;
}



/* Entry: 1005619ac; end: 100561a7f;  */

ulong FUN_1005619ac(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  
  if (param_1 == (long *)0x0) {
    uVar4 = 0;
    uVar2 = 0;
    uVar5 = 0;
    uVar1 = 0;
  }
  else {
    lVar6 = *param_1;
    if (lVar6 != 0) {
      puVar7 = (ulong *)(param_1[1] + 0x10);
      do {
        uVar2 = puVar7[-1];
        func_0x000107c613c0(uVar2,"grpc.default_compression_algorithm");
        if ((int)uVar2 == 0) {
          if ((uint)puVar7[-2] == 0) {
            uVar3 = *puVar7;
            uVar2 = uVar3;
            func_0x000107c613d0(uVar3);
            FUN_10082b06c(uVar3,uVar2);
            uVar5 = (uint)uVar3 & 0xffffff00;
            uVar2 = uVar3 & 0xffffff0000000000;
            uVar4 = uVar3 & 0xff00000000;
            goto LAB_100561a14;
          }
          if ((uint)puVar7[-2] == 1) {
            uVar2 = 0;
            uVar3 = (ulong)(uint)*puVar7;
            uVar5 = (uint)*puVar7 & 0xffffff00;
            uVar4 = 0x100000000;
            goto LAB_100561a14;
          }
        }
        puVar7 = puVar7 + 4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar4 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar5 = 0;
LAB_100561a14:
    uVar1 = (uint)uVar3;
  }
  return uVar2 | uVar4 | (ulong)(uVar5 | uVar1 & 0xff);
}



/* Entry: 100561a80; end: 100561aa7;  */

byte FUN_100561a80(long param_1,uint param_2)

{
  if (param_2 < 3) {
    return *(byte *)(param_1 + (ulong)(param_2 >> 3)) >> (ulong)(param_2 & 0x1f) & 1;
  }
  return 0;
}



/* Entry: 100561aa8; end: 100561b07;  */

void FUN_100561aa8(undefined8 *param_1,long param_2,long param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_3 + 0x14) != 0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    piVar1 = *(int **)(param_3 + 8);
    FUN_10047fdf4(piVar1,"grpc.internal.transport");
    if ((piVar1 == (int *)0x0) || (*piVar1 != 2)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(piVar1 + 4);
    }
    *puVar3 = uVar2;
    *param_1 = 0;
    return;
  }
  func_0x000107c2c2f0();
                    /* WARNING: Could not recover jumptable at 0x000100561b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_3 + 8))();
  return;
}



/* Entry: 100561b08; end: 100561b2f;  */

void FUN_100561b08(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100561b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 100561b30; end: 100561b63;  */

void FUN_100561b30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = **(long **)(param_2 + 8);
  func_0x000100561b1c();
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + lVar1;
  return;
}



/* Entry: 100561b64; end: 100561b6b;  */

void FUN_100561b64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x18);
  return;
}



/* Entry: 100561b6c; end: 100561bb7;  */

void FUN_100561b6c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_2;
  FUN_100561b64();
  func_0x000100489924(&UNK_1107e9d20);
  lVar2 = param_2[1];
  uVar3 = *param_2;
  puVar1[2] = param_2[1];
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_100489994();
    } while (extraout_w10 != 0);
  }
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100561bb8; end: 100561bcf;  */

void FUN_100561bb8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_10048b3ac(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 100561bd0; end: 100561bef;  */

void FUN_100561bd0(void)

{
  func_0x0001001248b0();
  FUN_100561bb8();
  return;
}



/* Entry: 100561bf0; end: 100561c03;  */

void FUN_100561bf0(void)

{
  return;
}



/* Entry: 100561c04; end: 100561c6b;  */

void FUN_100561c04(undefined8 param_1,undefined4 *param_2)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *unaff_x19;
  undefined8 uVar2;
  undefined4 auStack_88 [24];
  undefined8 uStack_28;
  
  FUN_100561bf0();
  puVar1 = auStack_88;
  uStack_28 = extraout_x8;
  func_0x000100561cb8();
  FUN_100561ce4(*(undefined8 *)(*unaff_x19 + 0x10));
  (*extraout_x8_00)();
  func_0x000100561d14();
  func_0x0001004b9658(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000100561d14();
  func_0x000104c01a98();
  *puVar1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(puVar1 + 2) = uVar2;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  puVar1[6] = param_2[6];
  return;
}



/* Entry: 100561c6c; end: 100561c8b;  */

void FUN_100561c6c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  param_1[6] = param_2[6];
  return;
}



/* Entry: 100561c8c; end: 100561ce3;  */

undefined8 * FUN_100561c8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107ea840;
  FUN_100561c6c(param_1 + 1);
  return param_1;
}



/* Entry: 100561ce4; end: 100561cef;  */

void FUN_100561ce4(void)

{
  return;
}



/* Entry: 100561cf0; end: 100561d0b;  */

void FUN_100561cf0(undefined8 param_1,long param_2)

{
  FUN_100561c8c(param_1,param_2 + 8);
  return;
}



/* Entry: 100561d0c; end: 100561d43;  */

void FUN_100561d0c(long param_1)

{
  param_1 = param_1 + 0x10;
  FUN_100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100561d44; end: 100561d67;  */

void FUN_100561d44(long param_1)

{
  FUN_100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100561d68; end: 100561d83;  */

void FUN_100561d68(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        FUN_10048ab88();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_100561de4(lVar1,&lStack_20);
    func_0x000100561e48(&lStack_20);
    return;
  }
  return;
}



/* Entry: 100561d84; end: 100561de3;  */

void FUN_100561d84(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        FUN_10048ab88();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_100561de4(param_2,&uStack_20);
    func_0x000100561e48(&uStack_20);
    return;
  }
  return;
}



/* Entry: 100561de4; end: 100561e6b;  */

undefined8 FUN_100561de4(undefined8 param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      FUN_100489994();
    } while (extraout_w10 != 0);
  }
  FUN_10048abd8();
  func_0x000100561e24();
  return param_1;
}



/* Entry: 100561e6c; end: 100561e87;  */

void FUN_100561e6c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100561e88; end: 100561eab;  */

void FUN_100561e88(long param_1)

{
  func_0x000100561e7c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100561eac; end: 100561eb3;  */

void FUN_100561eac(void)

{
  return;
}



/* Entry: 100561eb4; end: 100561f33;  */

undefined8 * FUN_100561eb4(undefined8 *param_1,undefined8 *param_2)

{
  int extraout_w10;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10 != 0);
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_100561f40(&uStack_30);
  return param_1;
}



/* Entry: 100561f34; end: 100561f3f;  */

undefined8 FUN_100561f34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100561f40; end: 100561f63;  */

void FUN_100561f40(long param_1)

{
  FUN_100561f34();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100561f64; end: 100561f6b;  */

void FUN_100561f64(void)

{
  return;
}



/* Entry: 100561f6c; end: 100561f8f;  */

void FUN_100561f6c(long param_1)

{
  func_0x000100561e7c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100561f90; end: 100561fa3;  */

void FUN_100561f90(void)

{
  return;
}



/* Entry: 100561fa4; end: 100561fc7;  */

void FUN_100561fa4(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100561fc8; end: 100561fe3;  */

void FUN_100561fc8(long *param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  int extraout_w11;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 8;
  }
  if ((lVar1 != 0) && ((*(long *)(lVar1 + 8) == 0 || (*(long *)(*(long *)(lVar1 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    lStack_20 = param_2;
    if (lStack_18 != 0) {
      do {
        FUN_10054e424();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_100562044(lVar1,&lStack_20);
    func_0x0001005620a8(&lStack_20);
    return;
  }
  return;
}



/* Entry: 100561fe4; end: 100562043;  */

void FUN_100561fe4(long param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    uStack_20 = param_3;
    if (lStack_18 != 0) {
      do {
        FUN_10054e424();
        param_2 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    FUN_100562044(param_2,&uStack_20);
    func_0x0001005620a8(&uStack_20);
    return;
  }
  return;
}



/* Entry: 100562044; end: 1005620cb;  */

undefined8 FUN_100562044(undefined8 param_1,long param_2)

{
  int extraout_w10;
  
  if (*(long *)(param_2 + 8) != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  FUN_10054f9b0();
  func_0x000100562084();
  return param_1;
}



/* Entry: 1005620cc; end: 1005620db;  */

void FUN_1005620cc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1005620dc; end: 100562107;  */

long FUN_1005620dc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100562108; end: 1005621a3;  */

undefined8 * FUN_100562108(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a62348;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_10054eaf8(param_1 + 2);
  FUN_10054ec9c(param_1 + 3);
  FUN_10054eaf8(param_1 + 4);
  FUN_10054ec9c(param_1 + 5);
  FUN_1005621a4();
  func_0x0001005621ac();
  func_0x0001005621b8();
  FUN_1005621a4();
  func_0x0001005621ac();
  func_0x0001005621b8();
  return param_1;
}



/* Entry: 1005621a4; end: 100562207;  */

void FUN_1005621a4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10054ed5c(&uStack_30);
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_40 = 0;
  func_0x00010054ec98(&uStack_40);
  func_0x00010054eaf0();
  FUN_10054ee7c(&uStack_30);
  return;
}



/* Entry: 100562208; end: 10056227f;  */

void FUN_100562208(undefined8 param_1)

{
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100555540();
  if (unaff_x21 != 0) {
    do {
      FUN_1005555a0();
    } while (extraout_w10 != 0);
  }
  func_0x0001005555b0(param_1,&UNK_10f4bd263);
  *unaff_x19 = unaff_x20;
  unaff_x19[1] = unaff_x21;
  unaff_x19[3] = uStack_50;
  unaff_x19[2] = uStack_58;
  unaff_x19[4] = uStack_48;
  unaff_x19[5] = 60000;
  *(undefined1 *)(unaff_x19 + 6) = 0;
  *(undefined1 *)(unaff_x19 + 7) = 0;
  FUN_100562280();
  func_0x0001005555ec();
  return;
}



/* Entry: 100562280; end: 1005622ff;  */

void FUN_100562280(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}


