/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1009048a8; end: 1009048bf;  */

void FUN_1009048a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1009048c0; end: 1009048e3;  */

void FUN_1009048c0(long param_1)

{
  FUN_10048d444();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1009048e4; end: 1009048eb;  */

long FUN_1009048e4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  func_0x000107c6110c();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108c1c60;
    func_0x000107c61174(lVar4);
    FUN_1005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x000107c61170(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  func_0x000107c61170(uVar3);
  func_0x0001005f2294(lVar1);
  func_0x000107c61108(lVar2);
  return lVar1;
}



/* Entry: 1009048ec; end: 10090497f;  */

long FUN_1009048ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1108c1c60;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 100904980; end: 100904983;  */

void FUN_100904980(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100904984; end: 1009049c3;  */

long FUN_100904984(long param_1)

{
  long lStack_28;
  
  FUN_1009001d4(param_1 + 0xd0);
  func_0x0001009001f4(param_1 + 0xa0);
  FUN_100900214(param_1 + 0x30);
  func_0x000107c60ca0(param_1 + 0x18);
  lStack_28 = param_1;
  func_0x000100100fd4(&lStack_28);
  return param_1;
}



/* Entry: 1009049c4; end: 1009049d3;  */

void FUN_1009049c4(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1009049d4; end: 100904a43;  */

void FUN_1009049d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126c0800;
  func_0x000107c610f4();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1009049c4();
    } while (extraout_w10 != 0);
  }
  func_0x000107c46220();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1009046e4(&uStack_30);
  return;
}



/* Entry: 100904a44; end: 100904a83; -[SCNNotificationsNotificationHandler .cxx_construct] */

undefined8 * FUN_100904a44(undefined8 *param_1)

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
      FUN_1009049c4();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 100904a84; end: 100904afb; -[SCNNotificationsNotificationHandler initWithCpp:] */

undefined1 * FUN_100904a84(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126eb100;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1009049c4();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1009046e4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100904afc; end: 100904b1f;  */

void FUN_100904afc(void)

{
  return;
}



/* Entry: 100904b20; end: 100904b3f;  */

void FUN_100904b20(void)

{
  func_0x000107c61168(&PTR_PTR_112e38570);
  return;
}



/* Entry: 100904b40; end: 100904b4f;  */

void FUN_100904b40(void)

{
  return;
}



/* Entry: 100904b50; end: 100904cc3;  */

void FUN_100904b50(undefined **param_1,undefined4 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined4 uVar5;
  undefined **ppuVar6;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined4 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined **ppuVar7;
  
  ppuVar6 = param_1;
  FUN_100904b40();
  puVar9 = ppuVar6[0xb];
  puVar8 = ppuVar6[10];
  uStack_48 = extraout_x8;
  if (ppuVar6[0xb] != (undefined *)0x0) {
    do {
      FUN_100904d1c();
    } while (extraout_w10 != 0);
  }
  ppuVar1 = param_1 + 9;
  if (((ulong)*ppuVar1 & 1) == 0) {
    FUN_1004b4e98();
    ppuVar7 = ppuVar6;
    func_0x000100904d2c(param_1[5]);
    uVar5 = SUB84(ppuVar7,0);
    (**(code **)(extraout_x8_00 + 0x58))();
    puStack_f8 = &UNK_10f3156e2;
    uStack_e0 = 0;
    uStack_d0 = 1;
    if (puVar9 != (undefined *)0x0) {
      plVar2 = (long *)(puVar9 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pcStack_a8 = FUN_100906c30;
    ppuStack_a0 = &PTR_DAT_1108c29d8;
    uStack_88 = CONCAT44(uStack_e4,param_2);
    puStack_98 = &UNK_10f3156e2;
    uStack_70 = CONCAT71(uStack_cf,1);
    uStack_80 = 0;
    ppuStack_f0 = param_1;
    uStack_e8 = param_2;
    ppuStack_d8 = ppuVar6;
    uStack_c8 = uVar5;
    puStack_c0 = puVar8;
    puStack_b8 = puVar9;
    ppuStack_b0 = ppuVar1;
    ppuStack_90 = param_1;
    ppuStack_78 = ppuVar6;
    uStack_68 = uVar5;
    puStack_60 = puVar8;
    puStack_58 = puVar9;
    if (puVar9 != (undefined *)0x0) {
      do {
        FUN_100904d1c();
      } while (extraout_w10_00 != 0);
    }
    param_1 = &puStack_f8;
    ppuStack_50 = ppuVar1;
    func_0x000100904d38();
    (*extraout_x8_01)();
    func_0x000100904da8(ppuStack_a0);
    FUN_100902b24();
  }
  func_0x000100904db4();
  func_0x000100904dbc(uStack_48);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    func_0x000100904da8(ppuStack_a0);
    param_1 = param_1 + 7;
    FUN_100902b24();
    func_0x000100904db4();
    func_0x000105967a24();
    (**(code **)(*(long *)param_1[3] + 0x40))(param_1[3],param_3);
    return;
  }
  return;
}



/* Entry: 100904cc4; end: 100904d1b; -[SCNNotificationsNotificationHandler appStateChanged:] */

void FUN_100904cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x40))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 100904d1c; end: 100904dcf;  */

void FUN_100904d1c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 100904dd0; end: 100905027;  */

void FUN_100904dd0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  uVar2 = param_1;
  func_0x000107c41bd0();
  func_0x000107c61180();
  puVar7 = &UNK_110495b98;
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_110495b98,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = &UNK_100c1e0e8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c1de60;
  puStack_88 = &UNK_110495bb0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  uVar2 = param_1;
  func_0x000107c419f0(param_1);
  func_0x000107c61180();
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_110495b98,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puStack_80 = &UNK_100c1e15c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c1de60;
  puStack_88 = &UNK_110495bd8;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c5e39c(param_1);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_110495b98,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puStack_80 = &UNK_101eb901c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c1de60;
  puStack_88 = &UNK_110495c00;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar2 = param_1;
  func_0x000107c5c320(param_1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(param_1);
  func_0x000107c3e924(uVar2);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100905028; end: 10090504b;  */

void FUN_100905028(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10090504c; end: 10090506b;  */

void FUN_10090504c(long param_1,long param_2)

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



/* Entry: 10090506c; end: 10090510f; -[SCNativeNotificationHandlingServices initWithNativeNotificationHandler:nativeNotifHandlerObservable:] */

undefined1 *
FUN_10090506c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f8f98;
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
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100905110; end: 10090569b;  */

undefined8 FUN_100905110(int param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  func_0x000107c61434(param_2);
  uVar9 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0180d0);
  iVar3 = param_1;
  func_0x000107c4980c();
  func_0x000107c61170(uVar9);
  if (0 < iVar3) {
    uVar4 = 0x16;
    func_0x000107c5fe40(0x16);
    puVar5 = PTR___ss5Int32VN_11034ee20;
    puVar8 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                        PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    uVar9 = param_2;
    func_0x000107c61558(param_2);
    func_0x0001009053d4(puVar5,puVar8,uVar4,uVar9);
    func_0x000107c61170(uVar4);
  }
  uVar9 = 0xd00000000000002d;
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f018100);
  iVar3 = param_1;
  func_0x000107c4980c();
  func_0x000107c61170(uVar9);
  if (0 < iVar3) {
    uVar4 = 0x17;
    func_0x000107c5fe40(0x17);
    puVar5 = PTR___ss5Int32VN_11034ee20;
    puVar8 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                        PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    uVar9 = param_2;
    func_0x000107c61558(param_2);
    func_0x0001009053d4(puVar5,puVar8,uVar4,uVar9);
    func_0x000107c61170(uVar4);
  }
  uVar9 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f018130);
  func_0x000107c4980c();
  func_0x000107c61170(uVar9);
  pcVar1 = "retry_all_failures";
  uVar9 = 0xd000000000000011;
  if (param_1 != 2) {
    pcVar1 = "TIVE_ACK_RETRY_TREATMENT";
    uVar9 = 0xd000000000000013;
  }
  uVar4 = 0xd000000000000011;
  if (param_1 != 1) {
    uVar4 = uVar9;
  }
  pcVar2 = "retry_all_failures";
  if (param_1 != 1) {
    pcVar2 = pcVar1;
  }
  uVar6 = 0x18;
  func_0x000107c5fe40(0x18);
  uVar9 = param_2;
  func_0x000107c61558(param_2);
  func_0x0001009053d4(uVar4,(ulong)pcVar2 | 0x8000000000000000,uVar6,uVar9);
  func_0x000107c61170(uVar6);
  uVar4 = 0x19;
  func_0x000107c5fe40(0x19);
  uVar9 = 0x6966697373616c63;
  if (param_1 == 2) {
    uVar9 = 0xd000000000000012;
  }
  uVar6 = 0xea00000000006465;
  if (param_1 == 2) {
    uVar6 = 0x800000010f018180;
  }
  uVar7 = param_2;
  func_0x000107c61558(param_2);
  func_0x0001009053d4(uVar9,uVar6,uVar4,uVar7);
  func_0x000107c61170(uVar4);
  return param_2;
}



/* Entry: 10090569c; end: 1009056af;  */

void FUN_10090569c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1000f6b44;
  puStack_58 = &UNK_1107ac600;
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  (*(code *)0x10090575c)();
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1009056b0; end: 100905743;  */

void FUN_1009056b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1000f6b44;
  uStack_58 = param_4;
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  (*param_5)();
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100905744; end: 100905763;  */

void FUN_100905744(long param_1,long param_2)

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



/* Entry: 100905764; end: 100905767; -[sc_async_queue perform:] */

void FUN_100905764(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeb5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__withoutOverridingQoSAsync__112598718);
  return;
}



/* Entry: 100905768; end: 10090578f; -[sc_async_queue_concrete _withoutOverridingQoSAsync:] */

/* WARNING: Possible PIC construction at 0x00010007386c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100073870) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100905768(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276ac78);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  if ((bRam0000000113817cd8 & 1) == 0) {
    iVar1 = 0x13817cd8;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar2 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_async");
      pcRam0000000113817cd0 = pcVar2;
      func_0x000107c60e4c(0x113817cd8);
    }
  }
  pcVar2 = pcRam0000000113817cd0;
  FUN_10002a3a8(param_3);
  func_0x000107c61180();
  (*pcVar2)(uVar3,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100905790; end: 1009058d7;  */

void FUN_100905790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long lVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar4 = (long)&puStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f820(lVar4);
  func_0x000107c5f800();
  (**(code **)(lVar6 + 8))(lVar4,lVar3);
  func_0x000107c5f814();
  if (lVar4 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009058d4);
    (*pcVar2)();
  }
  if (lVar4 < 0x80000000) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1000f6b44;
    puStack_78 = &UNK_1107ac650;
    ppuVar5 = &puStack_90;
    uStack_70 = param_2;
    uStack_68 = param_3;
    func_0x000107c60bc4(ppuVar5);
    uVar1 = uStack_68;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(uVar1);
    FUN_1009058dc();
    func_0x000107c60bd0(ppuVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009058d8);
  (*pcVar2)();
}



/* Entry: 1009058d8; end: 1009058db;  */

void FUN_1009058d8(long param_1,long param_2)

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



/* Entry: 1009058dc; end: 10090593f;  */

/* WARNING: Possible PIC construction at 0x000100905928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010090592c) */

void FUN_1009058dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_1000c5568(0x20,param_2,param_3,param_4);
  func_0x000107c4e524(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100905940; end: 100905aa7;  */

void FUN_100905940(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = 0;
  func_0x000107c5f824();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(unaff_x20 + 0x80);
  if ((lVar2 != 0) && (lVar7 = *(long *)(unaff_x20 + 0x68), lVar7 != 0)) {
    func_0x000107c61174();
    func_0x000107c615f0(lVar7);
    func_0x000107c5f81c(puVar6);
    puVar3 = &UNK_110495c38;
    func_0x000107c613fc(&UNK_110495c38,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_110495d68;
    func_0x000107c613fc(&UNK_110495d68,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(long *)(puVar4 + 0x18) = lVar7;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    *(undefined8 *)(puVar4 + 0x28) = param_2;
    uVar5 = 0;
    FUN_1008fca28(0,0x112d69830,&PTR_PTR_1126a6700);
    func_0x000107c615f0(lVar7);
    func_0x000107c6157c(puVar3);
    func_0x000107c61434(param_2);
    FUN_100905790(puVar6,&UNK_101eb9e80,puVar4,uVar5);
    func_0x000107c615e8(lVar7);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(lVar2);
    (**(code **)(lVar8 + 8))(puVar6,lVar1);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 100905aa8; end: 100905adb;  */

void FUN_100905aa8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100905adc; end: 100905af3; -[_TtC38NativeNotificationHandlingServicesImpl36NativeNotificationPermissionProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100905adc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e38768));
  return;
}



/* Entry: 100905af4; end: 100905b37; -[SCNNotificationsNotificationHandlerParameters .cxx_destruct] */

void FUN_100905af4(long param_1)

{
  func_0x000100905aec(param_1 + 0x28);
  func_0x000100905aec(param_1 + 0x20);
  func_0x000100905aec(param_1 + 0x18);
  func_0x000100905aec(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100905b38; end: 100905b43; -[SCNNotificationsTweaks .cxx_destruct] */

void FUN_100905b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100905b44; end: 100905b73; -[SCNNotificationsRedriveConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100905b5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100905b60) */

void FUN_100905b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 100905b74; end: 100905ba3; -[SCNNotificationsInAppReminderConfig .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100905b8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100905b90) */

void FUN_100905b74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100905ba4; end: 100905baf; -[SCNShimsUUID .cxx_destruct] */

void FUN_100905ba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100905bb0; end: 100905bef;  */

undefined8 FUN_100905bb0(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100905bf0; end: 100905c7b;  */

void FUN_100905bf0(void)

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



/* Entry: 100905c7c; end: 100905dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100905c7c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 uStack_51;
  
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  *(undefined4 *)(unaff_x20 + 0x40) = 0;
  *(undefined1 *)(unaff_x20 + 0x44) = 1;
  uStack_51 = 1;
  FUN_1000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar2 = &uStack_51;
  FUN_10006c248();
  *(undefined1 **)(unaff_x20 + 0x48) = puVar2;
  uVar3 = param_3;
  func_0x000107c4d484();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(param_2 + _DAT_113091b70);
  func_0x000107c615f0();
  uVar3 = param_4;
  func_0x000107c4141c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  uVar3 = param_5;
  func_0x000107c4d7f4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61174(param_6);
    FUN_100905dd4();
    FUN_100906074();
    func_0x000107c61170(param_6);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 100905dcc; end: 100905dd3; -[SCNativeNotificationHandlingServices nativeNotificationHandler] */

undefined8 FUN_100905dcc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100905dd4; end: 10090602f;  */

void FUN_100905dd4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = uVar9;
  func_0x000107c41bd0(uVar9);
  func_0x000107c61180();
  puVar7 = &UNK_1105e9af8;
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_1105e9af8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = &UNK_100c1e174;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c1de60;
  puStack_88 = &UNK_1105e9b88;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  uVar2 = uVar9;
  func_0x000107c419f0(uVar9);
  func_0x000107c61180();
  puVar3 = puVar7;
  func_0x000107c613fc(&UNK_1105e9af8,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puStack_80 = &UNK_100c79f34;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c1de60;
  puStack_88 = &UNK_1105e9bb0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c41b80(uVar9);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_1105e9af8,0x18,7);
  func_0x000107c61644(puVar7 + 0x10);
  puStack_80 = &UNK_102f2b38c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100c1de60;
  puStack_88 = &UNK_1105e9bd8;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar2 = uVar9;
  func_0x000107c5c320(uVar9);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c3e924(uVar2);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100906030; end: 100906053;  */

void FUN_100906030(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100906054; end: 100906073;  */

void FUN_100906054(long param_1,long param_2)

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



/* Entry: 100906074; end: 10090615b;  */

void FUN_100906074(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c41424(uVar1);
  func_0x000107c61180();
  puVar2 = &UNK_1105e9af8;
  func_0x000107c613fc(&UNK_1105e9af8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puStack_40 = &UNK_102f2afb8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_102f2b5a8;
  puStack_48 = &UNK_1105e9b10;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  uVar4 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10090615c; end: 1009061a7;  */

void FUN_10090615c(void)

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



/* Entry: 1009061a8; end: 1009061cb;  */

undefined ** FUN_1009061a8(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 1009061cc; end: 10090624b;  */

void FUN_1009061cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104d8a80;
  func_0x000107c613fc(&UNK_1104d8a80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10090624c,puVar1);
  return;
}



/* Entry: 10090624c; end: 100906253;  */

void FUN_10090624c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = uVar1;
  FUN_100906254();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  FUN_1009062e0(uVar1,uVar2);
  *param_1 = uVar3;
  param_1[1] = &PTR_DAT_1104d8aa8;
  return;
}



/* Entry: 100906254; end: 100906273;  */

void FUN_100906254(void)

{
  func_0x000107c61168(&PTR_PTR_112e5ecb8);
  return;
}



/* Entry: 100906274; end: 1009062df;  */

void FUN_100906274(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_100906254();
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1009062e0(param_2,param_3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104d8aa8;
  return;
}



/* Entry: 1009062e0; end: 1009063e7;  */

void FUN_1009062e0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  
  FUN_100083b20(&lStack_48);
  lVar3 = lStack_48;
  lVar2 = lStack_48;
  func_0x000107c3ffb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    FUN_100083b20(&lStack_48);
    lVar2 = lStack_48;
    func_0x000107c3fa04();
    func_0x000107c61180();
    func_0x000107c61170(lStack_48);
    lVar4 = lVar2;
    FUN_1009065f4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009063e8);
      (*pcVar1)();
    }
    func_0x000107c51918(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 1009063e8; end: 1009063ef;  */

void FUN_1009063e8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7b80;
  func_0x000107c610f8();
  func_0x000107c45ed8();
  func_0x000107c61170(unaff_x20);
  *param_1 = puVar1;
  return;
}



/* Entry: 1009063f0; end: 100906443;  */

void FUN_1009063f0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7b80;
  func_0x000107c610f8();
  func_0x000107c45ed8();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 100906444; end: 1009064b7; -[SCComposerJobSchedulerServices initWithComoposerJobScheduler:] */

undefined1 * FUN_100906444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112702ac0;
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



/* Entry: 1009064b8; end: 1009064c7; -[SCComposerJobSchedulerServices composerJobScheduler] */

undefined8 FUN_1009064b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1009064c8; end: 100906587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009064c8(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  lVar2 = *(long *)(lStack_38 + _DAT_11307e6a8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126a7b78;
    func_0x000107c610f8();
    func_0x000107c47030();
    func_0x000107c615e8(lVar3);
    *param_1 = puVar4;
    return;
  }
  func_0x0001048d9980(0xd00000000000002d,0x800000010efbaed0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100906588);
  (*pcVar1)();
}



/* Entry: 100906588; end: 1009065f3; -[SCComposerJobSchedulerImpl initWithJobScheduler:] */

undefined1 * FUN_100906588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f62a0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1009065f4; end: 1009066c7;  */

void FUN_1009065f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c7530;
  func_0x000107c61174();
  func_0x000107c610f4(puVar1);
  func_0x000107c46800();
  func_0x000107c53790();
  uVar2 = param_1;
  FUN_100906b10(param_1);
  func_0x000107c61170(param_1);
  puVar3 = PTR_PTR_1126c7538;
  func_0x000107c610f4(PTR_PTR_1126c7538);
  func_0x000107c48308((double)((int)uVar2 * 1000));
  func_0x000107c57d38(puVar1,param_2,puVar3);
  func_0x000107c61170(puVar3);
  puVar3 = PTR_PTR_1126c7540;
  func_0x000107c610f4(PTR_PTR_1126c7540);
  func_0x000107c47024();
  func_0x000107c59a38();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1009066c8; end: 100906713; -[SCCJobConfig initWithExistingJobPolicy:persistent:] */

void FUN_1009066c8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270bf28;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 100906714; end: 10090673f; +[SCCJobConfig valdiMarshallableObjectDescriptor] */

void FUN_100906714(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d6fb28;
  param_1[1] = &PTR_DAT_110d6fbe8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 100906740; end: 100906813;  */

void FUN_100906740(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126c0938;
    func_0x000107c610f8(PTR_PTR_1126c0938);
    func_0x000107c49308();
    uVar2 = 0;
    FUN_1008fca28(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = uVar2;
    FUN_100120cb0();
    func_0x000107c5f9dc(param_2,uVar2,PTR___sSSN_11034da80,uVar3);
    func_0x000107c5694c(puVar1);
    func_0x000107c61574(param_1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100906814; end: 100906887; -[SCNotificationServiceExtensionUserDefaults initWithUserScopedAppGroupUserDefaults:] */

undefined1 * FUN_100906814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fc000;
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



/* Entry: 100906888; end: 10090691b; -[SCNotificationServiceExtensionUserDefaults setNSEHandlerConfigDict:] */

/* WARNING: Possible PIC construction at 0x0001009068fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100906900) */

void FUN_100906888(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x000107c3b730();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
  func_0x000107c3e100(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,lVar1,0,0);
  func_0x000107c61180();
  func_0x000107c56bcc(uVar2,param_2,puVar3,&PTR____CFConstantStringClassReference_110ecd9f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10090691c; end: 100906b0f; -[SCNotificationServiceExtensionUserDefaults _filterDictForNSEHandlerConfigDict:] */

void FUN_10090691c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000107c40794();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    func_0x000107c61174(param_3);
    uVar3 = param_3;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (uVar3 != 0) {
      uVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_3);
        }
        uVar9 = *(ulong *)(uVar7 * 8);
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c6115c(uVar9,puVar8);
        if ((uVar9 & 1) != 0) {
          uVar9 = param_3;
          func_0x000107c4d9e8();
          func_0x000107c61180();
          if (uVar9 != 0) {
            uVar4 = param_3;
            func_0x000107c4d9e8();
            func_0x000107c61180();
            puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
            uVar5 = uVar4;
            func_0x000107c6115c(uVar4,puVar8);
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar9);
            if ((uVar5 & 1) != 0) {
              uVar9 = param_3;
              func_0x000107c4d9e8(param_3);
              func_0x000107c61180();
              func_0x000107c56bd8(puVar2);
              func_0x000107c61170(uVar9);
            }
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
      uVar3 = param_3;
      func_0x000107c4080c();
    }
    func_0x000107c61170(param_3);
    puVar8 = puVar2;
    func_0x000107c40794(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(param_3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 100906b10; end: 100906b23;  */

void FUN_100906b10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_intValueForConfigKeySync_default_1125f79d0,
             &PTR____CFConstantStringClassReference_110e76298,0xe10,0);
  return;
}



/* Entry: 100906b24; end: 100906b47; -[SCCRepeatPolicy initWithRepeatIntervalMillis:] */

void FUN_100906b24(void)

{
  FUN_100906b48(PTR_PTR_11270bf30);
  return;
}



/* Entry: 100906b48; end: 100906b63;  */

void FUN_100906b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000010 = param_3;
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)
            (&stack0x00000010,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 100906b64; end: 100906b7f; +[SCCRepeatPolicy valdiMarshallableObjectDescriptor] */

void FUN_100906b64(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d6fc10;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 100906b80; end: 100906bbf; -[SCCJob initWithJobConfig:jobIdentifier:] */

void FUN_100906b80(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270bf20;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 100906bc0; end: 100906bd3; +[SCCJob valdiMarshallableObjectDescriptor] */

void FUN_100906bc0(undefined8 *param_1)

{
  *param_1 = &PTR_s_payload_110d6faa0;
  param_1[1] = &PTR_DAT_110d6fb18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 100906bd4; end: 100906bfb;  */

void FUN_100906bd4(void)

{
  FUN_1008d6464();
  FUN_100906bfc();
  func_0x0001003b1994();
  FUN_1003b12a0();
  return;
}



/* Entry: 100906bfc; end: 100906c2f;  */

void FUN_100906bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_28 [8];
  
  FUN_1003adc98();
  func_0x0001003adca4(param_1,7,param_3,param_4,auStack_28);
  func_0x0001003adcb0();
  return;
}



/* Entry: 100906c30; end: 100906d7b;  */

void FUN_100906c30(long param_1)

{
  long *plVar1;
  
  FUN_1005e3518();
  if ((**(byte **)(param_1 + 0x58) & 1) == 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x18);
    (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined4 *)(param_1 + 0x20));
    FUN_1005e3518(param_1 + 0x28);
    func_0x000100906e10();
    plVar1 = *(long **)(param_1 + 0x48);
    func_0x000100906e20();
    func_0x000100906e3c();
    func_0x000100906e4c();
    func_0x000100906f18(*(undefined8 *)(*plVar1 + 0x18));
    FUN_100907740();
    func_0x000100907748();
    FUN_100907780();
    func_0x000100907798();
    func_0x0001009077a8();
    func_0x0001009077b4();
    func_0x0001009077c0();
    func_0x0001009077e0();
    func_0x000100907748();
    func_0x0001009077e8();
    func_0x000100907800();
    func_0x000100907810();
    func_0x0001009077b4();
    func_0x0001009077c0();
    func_0x00010090781c();
    func_0x000100907748();
    plVar1 = *(long **)(param_1 + 0x48);
    func_0x000100907824();
    func_0x00010090783c();
    func_0x00010090784c();
    func_0x0001009077c0(*(undefined8 *)(*plVar1 + 0x28));
    func_0x00010090786c();
    func_0x000100907748();
  }
  return;
}



/* Entry: 100906d7c; end: 100906da3;  */

void FUN_100906d7c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100906d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    return;
  }
  return;
}



/* Entry: 100906da4; end: 100906e07;  */

void FUN_100906da4(long *param_1,int param_2)

{
  int iVar1;
  code *extraout_x8;
  long lVar2;
  
  *(int *)(param_1 + 0x13) = param_2;
  iVar1 = (int)param_1[0x11];
  func_0x000100906d98();
  (*extraout_x8)();
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == 0) {
    lVar2 = 0x10;
  }
  else {
    if (param_2 != 1) {
      return;
    }
    lVar2 = 0x18;
  }
                    /* WARNING: Could not recover jumptable at 0x000100906e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar2))(param_1);
  return;
}



/* Entry: 100906e08; end: 100906e57;  */

undefined1 FUN_100906e08(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100906e58; end: 100906ecb;  */

undefined8 FUN_100906e58(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_3;
  func_0x000107c613d0(param_3);
  FUN_100906ecc(param_1,&uStack_40,param_3,uVar1);
  func_0x000100906f10();
  return param_1;
}



/* Entry: 100906ecc; end: 100906f03;  */

long FUN_100906ecc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_1000fecf4(param_1 + 8);
  func_0x0001004c38a0(param_1 + 8,&uStack_30);
  return param_1;
}



/* Entry: 100906f04; end: 100906f47;  */

void FUN_100906f04(void)

{
  return;
}



/* Entry: 100906f48; end: 10090713b; -[SCComposerJobSchedulerImpl scheduleWithJob:] */

void FUN_100906f48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c4a810(param_3);
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_100907190();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  func_0x000107c4a81c(param_3);
  func_0x000107c61180();
  func_0x000107c5597c(uVar2);
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  func_0x000107c5c264(param_3);
  func_0x000107c61180();
  uVar4 = uVar1;
  FUN_100907aa0();
  func_0x000107c61180();
  func_0x000107c5596c(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x000107c4a81c();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c5c264();
  func_0x000107c61180();
  func_0x000107c51804();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  param_1 = param_1 + 8;
  func_0x000107c61148(param_1);
  uVar1 = param_3;
  func_0x000107c4e48c(param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar4 = 0x15;
  func_0x000107c60f2c(0x15,0);
  func_0x000107c61180();
  func_0x000107c61174(puVar3);
  func_0x000107c5c2c0(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10090713c; end: 10090715f;  */

void FUN_10090713c(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  FUN_100907160();
  uVar1 = *(undefined8 *)(param_1 + *(long *)(unaff_x19 + 0x20) * 8);
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100907160; end: 10090716b;  */

undefined8 FUN_100907160(undefined8 param_1,long param_2)

{
  if (lRam00000001137fd260 != -1) {
    FUN_10002a2fc(0x1137fd260,&PTR___NSConcreteGlobalBlock_110d7a268);
  }
  return *(undefined8 *)(param_2 + lRam00000001137fd268);
}



/* Entry: 10090716c; end: 10090718f;  */

void FUN_10090716c(undefined8 param_1)

{
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100907190; end: 10090773f;  */

void FUN_100907190(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [112];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  puVar3 = PTR_PTR_1126b7228;
  func_0x000107c610fc();
  lVar4 = param_2;
  func_0x000107c42b5c();
  iVar2 = (int)lVar4;
  iVar1 = iVar2;
  if (iVar2 != 2) {
    iVar1 = 0;
  }
  if (iVar2 == 1) {
    iVar1 = 1;
  }
  func_0x000107c54734(puVar3,param_3,iVar1);
  lVar4 = param_2;
  func_0x000107c4e664(param_2);
  func_0x000107c55960(puVar3,param_3,(uint)lVar4 ^ 1);
  lVar4 = param_2;
  func_0x000107c5ca48();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar4 != 0) {
    lVar4 = param_2;
    func_0x000107c5ca48(param_2);
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c49804();
    param_1 = (double)(int)lVar5 / 1000.0;
    func_0x000107c55970(puVar3,param_3,(int)param_1);
    func_0x000107c61170(lVar4);
  }
  lVar4 = param_2;
  func_0x000107c402b8();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar4 != 0) {
    param_1 = 0.0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar4 = param_2;
    func_0x000107c402b8();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c4080c();
    if (lVar5 != 0) {
      lVar10 = *plStack_130;
      do {
        lVar11 = 0;
        do {
          if (*plStack_130 != lVar10) {
            func_0x000107c61128(lVar4);
          }
          uVar6 = *(ulong *)(lStack_138 + lVar11 * 8);
          func_0x000107c49804();
          puVar7 = puVar3;
          switch(uVar6 & 0xffffffff) {
          case 0:
            func_0x000107c4a814(puVar3);
            func_0x000107c61180();
            goto code_r0x000100907400;
          case 1:
            func_0x000107c4a814(puVar3);
            func_0x000107c61180();
code_r0x000100907400:
            func_0x000107c56a40();
            goto code_r0x000100907488;
          case 2:
            func_0x000107c4a814(puVar3);
            func_0x000107c61180();
            goto code_r0x00010090744c;
          case 3:
            func_0x000107c4a814(puVar3);
            func_0x000107c61180();
            puVar8 = puVar7;
            func_0x000107c3de68();
            func_0x000107c61180();
            break;
          case 4:
            func_0x000107c4a814(puVar3);
            func_0x000107c61180();
            goto code_r0x00010090744c;
          case 5:
            func_0x000107c4a814(puVar3);
            func_0x000107c61180();
            puVar8 = puVar7;
            func_0x000107c3de68();
            func_0x000107c61180();
            break;
          case 6:
            func_0x000107c4a814(puVar3);
            func_0x000107c61180();
code_r0x00010090744c:
            func_0x000107c52c2c();
            goto code_r0x000100907488;
          case 7:
            func_0x000107c4a814(puVar3);
            func_0x000107c61180();
            puVar8 = puVar7;
            func_0x000107c3de68();
            func_0x000107c61180();
            break;
          case 8:
            func_0x000107c4a814(puVar3);
            func_0x000107c61180();
            puVar8 = puVar7;
            func_0x000107c3de68();
            func_0x000107c61180();
            break;
          case 9:
            func_0x000107c4a814(puVar3);
            func_0x000107c61180();
            puVar8 = puVar7;
            func_0x000107c3de68();
            func_0x000107c61180();
            break;
          default:
            goto LAB_100907490;
          }
          func_0x000107c3d93c();
          func_0x000107c61170(puVar8);
code_r0x000100907488:
          func_0x000107c61170(puVar7);
LAB_100907490:
          lVar11 = lVar11 + 1;
        } while (lVar5 != lVar11);
        lVar5 = lVar4;
        func_0x000107c4080c(lVar4,param_3,&uStack_140,auStack_100,0x10);
      } while (lVar5 != 0);
    }
    func_0x000107c61170(lVar4);
  }
  puVar7 = puVar3;
  func_0x000107c4a814();
  func_0x000107c61180();
  puVar8 = puVar7;
  func_0x000107c3de68();
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c40808();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  if (puVar9 == (undefined *)0x0) {
    puVar7 = puVar3;
    func_0x000107c4a814(puVar3);
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c3de68();
    func_0x000107c61180();
    func_0x000107c3d93c();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    puVar7 = puVar3;
    func_0x000107c4a814(puVar3);
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c3de68();
    func_0x000107c61180();
    func_0x000107c3d93c();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
  }
  puVar7 = PTR_PTR_1126b7230;
  func_0x000107c610fc(PTR_PTR_1126b7230);
  lVar4 = param_2;
  func_0x000107c50824();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar4 == 0) {
    func_0x000107c57ed0(puVar7,param_3,0);
  }
  else {
    func_0x000107c57ed0(puVar7,param_3,2);
    lVar4 = param_2;
    func_0x000107c50824(param_2);
    func_0x000107c61180();
    func_0x000107c4d92c();
    func_0x000107c56358(puVar7,param_3,(int)param_1);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c57ec0(puVar3,param_3,puVar7);
  puVar8 = PTR_PTR_1126b7238;
  func_0x000107c610fc(PTR_PTR_1126b7238);
  lVar4 = param_2;
  func_0x000107c49640();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c49804();
  func_0x000107c61170(lVar4);
  lVar4 = param_2;
  func_0x000107c50144();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar4 == 0) {
    dVar12 = (double)(int)lVar5 / 1000.0;
    if (dVar12 <= 0.0) {
      func_0x000107c57f50(puVar8,param_3,1);
    }
    else {
      func_0x000107c57f50(puVar8,param_3,0);
      func_0x000107c57f4c(puVar8,param_3,(int)dVar12);
    }
  }
  else {
    puVar9 = puVar8;
    func_0x000107c4faec(puVar8);
    func_0x000107c61180();
    lVar4 = param_2;
    func_0x000107c50144(param_2);
    func_0x000107c61180();
    func_0x000107c5013c();
    func_0x000107c57d34(puVar9,param_3,(int)(param_1 / 1000.0));
    func_0x000107c61170(lVar4);
    func_0x000107c57c1c(puVar8,param_3,puVar9);
    func_0x000107c61170(puVar9);
  }
  func_0x000107c55974(puVar3,param_3,puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (auStack_f0);
  return;
}



/* Entry: 100907740; end: 10090774f;  */

void FUN_100907740(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000050);
  return;
}



/* Entry: 100907750; end: 10090777f;  */

undefined8 * FUN_100907750(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108c2920;
  FUN_1000e30f4(param_1 + 1);
  return param_1;
}



/* Entry: 100907780; end: 100907883;  */

void FUN_100907780(void)

{
  long unaff_x21;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(long *)(unaff_x29 + -0x58) = unaff_x21 + 0x10;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined4 *)(unaff_x29 + -0x38) = 1;
  return;
}



/* Entry: 100907884; end: 1009078cf;  */

undefined8 FUN_100907884(long param_1)

{
  long unaff_x19;
  
  FUN_100907160();
  return *(undefined8 *)(param_1 + *(long *)(unaff_x19 + 0x20) * 8);
}



/* Entry: 1009078d0; end: 1009078e7;  */

bool FUN_1009078d0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1009078e8; end: 100907973; +[JobTiming descriptor] */

undefined * FUN_1009078e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7458 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c78ca0,
                        &PTR____CFConstantStringClassReference_110f67958,&PTR_DAT_1133b8088,
                        &PTR_DAT_1133b80c0,3,0x18,0x1c);
    func_0x000107c5a8b4();
    puRam00000001137f7458 = puVar1;
  }
  return puRam00000001137f7458;
}



/* Entry: 100907974; end: 100907a9f; +[JobTiming_RecurringConfig descriptor] */

undefined * FUN_100907974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f7460 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c78cf0,
                        &PTR____CFConstantStringClassReference_110f67978,&PTR_DAT_1133b8088,
                        &PTR_DAT_1133b8120,3,0x10,0x1c);
    func_0x000107c5a894();
    func_0x000107c5a88c(puVar1,param_2,&PTR_PTR_112c78ca0);
    puRam00000001137f7460 = puVar1;
  }
  return puRam00000001137f7460;
}



/* Entry: 100907aa0; end: 100907adb;  */

void FUN_100907aa0(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c51804(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 100907adc; end: 100907b3b; -[SCValdiMarshallableObject dealloc] */

void FUN_100907adc(long param_1)

{
  undefined8 uVar1;
  long lStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61158();
  func_0x000107c413b8(uVar1);
  puStack_38 = PTR_PTR_11270c058;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100907b3c; end: 100907ba7; -[SCValdiMarshallableObjectRegistry deallocateStorage:forClass:] */

void FUN_100907b3c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long lVar1;
  char *pcVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  long lStack_30;
  undefined8 uStack_28;
  
  FUN_1003a7f28();
  FUN_1003af0e8(auStack_38,*(undefined8 *)(param_1 + 8),param_4);
  func_0x0001003b2e00();
  lVar1 = *(long *)(lStack_30 + 0x38);
  pcVar2 = (char *)(lStack_30 + 0x48);
  FUN_100907ba8();
  FUN_1003b2fa8();
  func_0x0001003a8294(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c39ff8();
  for (lVar3 = 0; lVar1 != lVar3; lVar3 = lVar3 + 1) {
    if ((*pcVar2 == '\x02') && (*(long *)(param_3 + lVar3 * 8) != 0)) {
      func_0x000107c607f0();
    }
    pcVar2 = pcVar2 + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_3);
  return;
}



/* Entry: 100907ba8; end: 100907c07;  */

void FUN_100907ba8(long param_1,long param_2,char *param_3)

{
  long lVar1;
  
  for (lVar1 = 0; param_2 != lVar1; lVar1 = lVar1 + 1) {
    if ((*param_3 == '\x02') && (*(long *)(param_1 + lVar1 * 8) != 0)) {
      func_0x000107c607f0();
    }
    param_3 = param_3 + 0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 100907c08; end: 100907c13; -[SCValdiMarshallableObject .cxx_destruct] */

void FUN_100907c08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100907c14; end: 100907c3f;  */

void FUN_100907c14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100907c40; end: 100907c67;  */

undefined ** FUN_100907c40(void)

{
  return &PTR_DAT_113082b40;
}



/* Entry: 100907c68; end: 100907ca7;  */

void FUN_100907c68(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x000100907c4c();
  FUN_100082720("KronosCalendarServiceProviderWrapperScopeInitializationPluginProvider",0x45,2);
  *param_1 = unaff_x20;
  return;
}


