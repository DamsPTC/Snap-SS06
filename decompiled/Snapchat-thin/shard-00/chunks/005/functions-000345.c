/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10073afc0; end: 10073afc7;  */

void FUN_10073afc0(undefined8 *param_1)

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



/* Entry: 10073afc8; end: 10073b01b;  */

void FUN_10073afc8(undefined8 *param_1)

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



/* Entry: 10073b01c; end: 10073b023;  */

void FUN_10073b01c(long *param_1)

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
  func_0x0001005c565c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_10073b108(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_10073b184();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_10073b6e0();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 10073b024; end: 10073b107;  */

void FUN_10073b024(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  func_0x0001005c565c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_10073b108(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_10073b184();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_10073b6e0();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 10073b108; end: 10073b183;  */

void FUN_10073b108(undefined8 param_1)

{
  if (lRam0000000112f6ff60 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e768fe4);
  return;
}



/* Entry: 10073b184; end: 10073b1fb;  */

void FUN_10073b184(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = param_2;
  func_0x000107c5d198();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_10073b204(0);
  func_0x000107c610f8();
  FUN_10073b224(uVar1,uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return;
}



/* Entry: 10073b1fc; end: 10073b203; -[SCLensesFeatureServices uiFeatureRegistry] */

undefined8 FUN_10073b1fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10073b204; end: 10073b223;  */

void FUN_10073b204(void)

{
  func_0x000107c61168(&PTR_PTR_1128dcc28);
  return;
}



/* Entry: 10073b224; end: 10073b353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10073b224(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uStack_41;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112f705b8;
  func_0x000107c61614(unaff_x20 + _DAT_112f705b8,0);
  lVar2 = _DAT_112f705c0;
  uStack_41 = 0;
  FUN_1000285a8(0x112d61fd8,&UNK_10d927f90);
  func_0x000107c613fc();
  puVar3 = &uStack_41;
  FUN_10042e6a0();
  *(undefined1 **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112f705c8;
  uVar4 = 0x112f70618;
  FUN_1000285a8(0x112f70618,&UNK_10dbccbf8);
  func_0x000107c613fc();
  FUN_1000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f705d0) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f705d8,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  puVar3 = &stack0xffffffffffffffa8;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c61180();
  func_0x000107c4fc08(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 10073b354; end: 10073b393;  */

long * FUN_10073b354(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x2;
  }
  plVar1 = (long *)0x2;
  if ((param_2 != (undefined8 *)0x0) && (*param_1 != 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    if (*(code **)*param_1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010073b380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1);
      return param_1;
    }
    plVar1 = (long *)0x6;
  }
  return plVar1;
}



/* Entry: 10073b394; end: 10073b487;  */

void FUN_10073b394(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 *puStack_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x228);
  FUN_10073b354(uVar1,&uStack_48);
  if ((int)uVar1 == 0) {
    (**(code **)(**(long **)(param_2 + 0x18) + 0x10))
              (*(long **)(param_2 + 0x18),uStack_48,uStack_40,**(undefined8 **)(param_2 + 0x78),
               param_2 + 0x220,param_2 + 0x200);
    *param_1 = 0;
  }
  else {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    func_0x000104ab5920(&uStack_50,2,"Peer extraction failed",0x16,&uStack_51,&uStack_70);
    func_0x000104ad56e4(param_1,&uStack_50,uVar1);
    if ((uStack_50 & 1) != 0) {
      FUN_10084dad0();
    }
    puStack_38 = (undefined1 *)&uStack_70;
    func_0x000100482b64(&puStack_38);
  }
  return;
}



/* Entry: 10073b488; end: 10073b683;  */

char * FUN_10073b488(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined4 uStack_3c;
  long lStack_38;
  
  lStack_38 = 0;
  pcVar4 = *(char **)(param_1 + 8);
  FUN_10073b96c();
  if (pcVar4 != (char *)0x0) {
    pcVar5 = pcVar4;
    FUN_10073ba10();
    FUN_1004d22bc(pcVar4);
    if ((int)pcVar5 != 0) {
      return pcVar5;
    }
  }
  FUN_10022a914(*(undefined8 *)(param_1 + 8),&lStack_38,&uStack_3c);
  if (lStack_38 == 0) {
    func_0x000107c2b7fc(*(undefined8 *)(param_1 + 8),&lStack_38,&uStack_3c);
  }
  lVar6 = *(long *)(param_1 + 8);
  FUN_10073ec20();
  lVar9 = param_2[1];
  lVar7 = 3;
  if (lStack_38 != 0) {
    lVar7 = 4;
  }
  if (lVar6 != 0) {
    lVar9 = lVar9 + 1;
  }
  lVar7 = (lVar9 + lVar7) * 0x18;
  FUN_100460860();
  if (param_2[1] != 0) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      puVar1 = (undefined8 *)(*param_2 + lVar9);
      puVar2 = (undefined8 *)(lVar7 + lVar9);
      uVar11 = puVar1[1];
      uVar8 = *puVar1;
      puVar2[2] = puVar1[2];
      puVar2[1] = uVar11;
      *puVar2 = uVar8;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x18;
    } while (uVar10 < (ulong)param_2[1]);
  }
  if (*param_2 != 0) {
    FUN_100460314();
  }
  *param_2 = lVar7;
  if ((lVar6 != 0) && (FUN_10073ec80(lVar6,lVar7 + param_2[1] * 0x18), (int)lVar6 == 0)) {
    param_2[1] = param_2[1] + 1;
  }
  if (lStack_38 != 0) {
    pcVar4 = "ssl_alpn_selected_protocol";
    func_0x00010073d4b0("ssl_alpn_selected_protocol",lStack_38,uStack_3c,
                        *param_2 + param_2[1] * 0x18);
    if ((int)pcVar4 != 0) {
      return pcVar4;
    }
    param_2[1] = param_2[1] + 1;
  }
  uVar8 = 2;
  FUN_10073f24c(2);
  pcVar4 = "security_level";
  FUN_10073c2a8("security_level",uVar8,*param_2 + param_2[1] * 0x18);
  if ((int)pcVar4 == 0) {
    param_2[1] = param_2[1] + 1;
    iVar3 = (int)*(undefined8 *)(param_1 + 8);
    FUN_10022ada8();
    pcVar5 = "false";
    if (iVar3 != 0) {
      pcVar5 = "true";
    }
    pcVar4 = "ssl_session_reused";
    FUN_10073c2a8("ssl_session_reused",pcVar5,*param_2 + param_2[1] * 0x18);
    if ((int)pcVar4 == 0) {
      param_2[1] = param_2[1] + 1;
    }
  }
  return pcVar4;
}



/* Entry: 10073b684; end: 10073b6df; -[SCLensFeatureRegistry registerFeature:] */

void FUN_10073b684(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x10);
  func_0x000107c3d798(*(undefined8 *)(param_1 + 8),param_2,param_3);
  func_0x000107c611f0(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10073b6e0; end: 10073b8db;  */

void FUN_10073b6e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  ppuVar5 = &puStack_90;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_11065a048;
  func_0x000107c613fc(&UNK_11065a048,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_100857f70;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)0x100857f30;
  puStack_78 = &UNK_11065a060;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_11065a098;
  func_0x000107c613fc(&UNK_11065a098,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  pcStack_70 = FUN_1008c6768;
  puStack_90 = puVar6;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1008c6768;
  puStack_78 = &UNK_11065a0b0;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar2 = &UNK_11065a0e8;
  func_0x000107c613fc(&UNK_11065a0e8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  FUN_1000285a8(0x112f6ff30,&UNK_10dbcc6c0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar7);
  puVar6 = &UNK_103472680;
  FUN_1000bdd8c(&UNK_103472680,puVar2);
  uVar7 = 0;
  func_0x0001005c567c(0);
  func_0x000107c610f8();
  FUN_10073b8f8(puVar4,puVar6,puVar1,uVar7);
  return;
}



/* Entry: 10073b8dc; end: 10073b8f7;  */

void FUN_10073b8dc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10073b8f8; end: 10073b96b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073b8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113038b58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113038b60) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113038b68) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10073b96c; end: 10073ba0f;  */

void FUN_10073b96c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10073ba10; end: 10073be17;  */

long * FUN_10073ba10(uint *param_1,int param_2,long *param_3)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  long *plVar4;
  uint *puVar5;
  uint **ppuVar6;
  undefined8 uVar7;
  long *extraout_x8;
  ulong unaff_x21;
  char *pcVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  long lVar12;
  long *plStack_a8;
  uint *puStack_a0;
  ulong uStack_98;
  uint *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  uint uStack_6c;
  uint *puStack_68;
  
  puVar2 = param_1;
  func_0x00010073ba04(param_1,0x55,0,0);
  if (puVar2 == (uint *)0x0) {
    unaff_x21 = 0;
    bVar10 = 0;
    plVar4 = (long *)0x3;
    if (param_2 != 0) {
      plVar4 = (long *)0x4;
    }
  }
  else {
    puVar3 = puVar2;
    FUN_10073c06c();
    if ((int)puVar3 < 0) {
      func_0x000107c2c43c();
      goto LAB_10073be14;
    }
    lVar12 = 3;
    if (param_2 != 0) {
      lVar12 = 4;
    }
    unaff_x21 = (ulong)puVar3 & 0xffffffff;
    plVar4 = (long *)(lVar12 + ((ulong)puVar3 & 0xffffffff));
    if ((int)puVar3 == 0) {
      bVar10 = 0;
    }
    else {
      uVar9 = 0;
      do {
        puVar3 = puVar2;
        func_0x00010073c078(puVar2,uVar9);
        if (*puVar3 < 8 && (1 << (ulong)(*puVar3 & 0x1f) & 0xc6U) != 0) {
          plVar4 = (long *)((long)plVar4 + 1);
        }
        uVar9 = uVar9 + 1;
      } while (unaff_x21 != uVar9);
      bVar10 = 1;
    }
  }
  FUN_10073c09c(plVar4,param_3);
  if ((int)plVar4 != 0) {
    return plVar4;
  }
  if (param_2 == 0) {
    uVar11 = 0;
LAB_10073bb28:
    lVar12 = *param_3;
    puVar3 = param_1;
    uStack_6c = uVar11 + 1;
    FUN_10073c350();
    if (puVar3 == (uint *)0x0) {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                    ,0x14e,1,"Could not get subject name from certificate.");
      pcVar8 = (char *)0x9;
    }
    else {
      func_0x00010073c35c();
      FUN_1001e73a4();
      FUN_10073c3f0();
      puVar5 = puVar3;
      FUN_10073d360(puVar3,&puStack_68);
      if ((long)puVar5 < 0) {
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                      ,0x156,2,"Could not get subject entry from certificate.");
LAB_10073bc44:
        func_0x0001004d2e54(puVar3);
      }
      else {
        pcVar8 = "x509_subject";
        func_0x00010073d4b0("x509_subject",puStack_68,puVar5,lVar12 + (ulong)uVar11 * 0x18);
        func_0x0001004d2e54(puVar3);
        if ((int)pcVar8 != 0) goto LAB_10073bc50;
        lVar12 = *param_3;
        puVar3 = param_1;
        uStack_6c = uVar11 | 2;
        FUN_10073c350();
        if (puVar3 == (uint *)0x0) {
          pcVar8 = "Could not get subject name from certificate.";
          uVar7 = 0x115;
LAB_10073bcd8:
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                        ,uVar7,1,pcVar8);
          uVar9 = 0;
          puStack_68 = (uint *)0x0;
LAB_10073bcec:
          puVar3 = (uint *)"";
          if (puStack_68 != (uint *)0x0) {
            puVar3 = puStack_68;
          }
          pcVar8 = "x509_subject_common_name";
          func_0x00010073d4b0("x509_subject_common_name",puVar3,uVar9,
                              lVar12 + (ulong)(uVar11 + 1) * 0x18);
          puVar3 = puStack_68;
          FUN_1001e33e0();
          if ((int)pcVar8 == 0) {
            lVar12 = *param_3;
            uStack_6c = uVar11 + 3;
            func_0x00010073c35c();
            FUN_1001e73a4();
            puVar5 = puVar3;
            FUN_10073dac8();
            if ((int)puVar5 == 0) goto LAB_10073bc44;
            puVar5 = puVar3;
            FUN_10073d360(puVar3,&puStack_68);
            if ((long)puVar5 < 1) {
              pcVar8 = (char *)0x7;
            }
            else {
              pcVar8 = "x509_pem_cert";
              func_0x00010073d4b0("x509_pem_cert",puStack_68,puVar5,
                                  lVar12 + (ulong)(uVar11 | 2) * 0x18);
            }
            func_0x0001004d2e54(puVar3);
            bVar1 = (bool)(bVar10 ^ 1);
            if ((int)pcVar8 != 0) {
              bVar1 = true;
            }
            if (!bVar1) {
              pcVar8 = (char *)param_3;
              FUN_10073e82c(param_3,puVar2,unaff_x21,&uStack_6c);
            }
          }
          goto LAB_10073bc50;
        }
        puVar5 = puVar3;
        FUN_10073d674();
        if ((int)puVar5 == -1) {
          pcVar8 = "Could not get common name of subject from certificate.";
          uVar7 = 0x11b;
          goto LAB_10073bcd8;
        }
        FUN_10073d744(puVar3,puVar5);
        if (puVar3 != (uint *)0x0) {
          func_0x00010073d77c();
          if (puVar3 == (uint *)0x0) {
            pcVar8 = "Could not get common name entry asn1 from certificate.";
            uVar7 = 0x125;
            goto LAB_10073bda8;
          }
          ppuVar6 = &puStack_68;
          FUN_1004cfb18(ppuVar6,puVar3);
          if ((int)ppuVar6 < 0) {
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                          ,299,2,"Could not extract utf8 from asn1 string.");
            pcVar8 = (char *)0xc;
            goto LAB_10073bc50;
          }
          uVar9 = (ulong)ppuVar6 & 0xffffffff;
          goto LAB_10073bcec;
        }
        pcVar8 = "Could not get common name entry from certificate.";
        uVar7 = 0x120;
LAB_10073bda8:
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                      ,uVar7,2,pcVar8);
      }
      pcVar8 = (char *)0x7;
    }
  }
  else {
    uVar11 = 1;
    uStack_6c = 1;
    pcVar8 = "certificate_type";
    FUN_10073c2a8("certificate_type","X509",*param_3);
    if ((int)pcVar8 == 0) goto LAB_10073bb28;
  }
LAB_10073bc50:
  if (puVar2 != (uint *)0x0) {
    FUN_1004d1b04(puVar2,FUN_10073ebb8,FUN_10073ebc4);
  }
  if ((int)pcVar8 != 0) {
    FUN_100740870(param_3);
  }
  if (uStack_6c == *(uint *)(param_3 + 1)) {
    return (long *)pcVar8;
  }
LAB_10073be14:
  func_0x000107c2c438();
  pcStack_78 = FUN_10073be18;
  puStack_a0 = param_1;
  uStack_98 = unaff_x21;
  puStack_90 = puVar2;
  plStack_88 = param_3;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_100083b20(&plStack_a8,puVar2);
  lVar12 = plStack_a8[5];
  func_0x000107c61174();
  func_0x000107c61574(plStack_a8);
  *extraout_x8 = lVar12;
  return plStack_a8;
}



/* Entry: 10073be18; end: 10073be1f;  */

void FUN_10073be18(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073be20; end: 10073be73;  */

void FUN_10073be20(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073be74; end: 10073be7f;  */

void FUN_10073be74(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  func_0x0001005c6ba0();
  func_0x000107c613fc();
  FUN_10073bf4c(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073be80; end: 10073bf13;  */

void FUN_10073be80(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  func_0x0001005c6ba0();
  func_0x000107c613fc();
  FUN_10073bf4c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 10073bf14; end: 10073bf4b;  */

void FUN_10073bf14(undefined8 param_1)

{
  if (lRam0000000112f84cf8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7726f0);
  return;
}



/* Entry: 10073bf4c; end: 10073c027;  */

void FUN_10073bf4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10073bf14(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10073c0d8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10073d214();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 10073c028; end: 10073c06b;  */

void FUN_10073c028(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBOWV_11034d658 + 0x40;
  func_0x000107c61524(param_1,0x100,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Entry: 10073c06c; end: 10073c09b;  */

undefined8 FUN_10073c06c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}



/* Entry: 10073c09c; end: 10073c0d7;  */

undefined8 FUN_10073c09c(long param_1,long *param_2)

{
  long lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1 != 0) {
    lVar1 = param_1 * 0x18;
    FUN_100460860();
    *param_2 = lVar1;
    param_2[1] = param_1;
  }
  return 0;
}



/* Entry: 10073c0d8; end: 10073c257;  */

void FUN_10073c0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar1 = &UNK_11067ae38;
  func_0x000107c613fc(&UNK_11067ae38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  FUN_1000285a8(0x112ef5510,&UNK_10dbf8e60);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  puVar2 = &UNK_1036962e4;
  FUN_1000bdd8c(&UNK_1036962e4,puVar1);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar1 = &UNK_11067ae60;
  func_0x000107c613fc(&UNK_11067ae60,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  puStack_60 = &UNK_103696350;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_103119608;
  puStack_68 = &UNK_11067ae78;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c60bd0(ppuVar4);
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  return;
}



/* Entry: 10073c258; end: 10073c2a7;  */

void FUN_10073c258(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10073c2a8; end: 10073c307;  */

undefined8 FUN_10073c2a8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2;
  func_0x000107c613d0();
  FUN_10073c308(param_1,lVar1,param_3);
  if (lVar1 != 0) {
    func_0x000107c610b4(*(undefined8 *)(param_3 + 8),param_2,lVar1);
  }
  return 0;
}



/* Entry: 10073c308; end: 10073c34f;  */

undefined8 FUN_10073c308(long param_1,long param_2,long *param_3)

{
  long lVar1;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_1 != 0) {
    FUN_1004601ac();
    *param_3 = param_1;
  }
  if (param_2 != 0) {
    lVar1 = param_2;
    FUN_100460860();
    param_3[1] = lVar1;
    param_3[2] = param_2;
  }
  return 0;
}



/* Entry: 10073c350; end: 10073c367;  */

undefined8 FUN_10073c350(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x28);
}



/* Entry: 10073c368; end: 10073c3ef;  */

bool FUN_10073c368(long param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 1) {
    return true;
  }
  bVar2 = false;
  iVar3 = 1;
  iVar4 = param_2;
  while ((param_1 == 0 || (lVar1 = param_1, FUN_1001f16f8(param_1," ",1), (int)lVar1 == 1))) {
    bVar2 = param_2 <= iVar3;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + -1;
    if (iVar4 == 0) {
      return bVar2;
    }
  }
  return bVar2;
}



/* Entry: 10073c3f0; end: 10073c7eb;  */

undefined ** FUN_10073c3f0(long param_1,undefined **param_2,undefined **param_3,ulong param_4)

{
  uint uVar1;
  undefined **ppuVar2;
  uint uVar3;
  bool bVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  long lVar7;
  byte *pbVar8;
  undefined **ppuVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  undefined **ppuVar17;
  int iVar18;
  uint uVar19;
  undefined **ppuVar20;
  undefined8 *puVar21;
  int iVar22;
  byte *pbVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  char *pcVar29;
  undefined *apuStack_c0 [10];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      func_0x00010ae4c0d4(param_2,0,0);
      if (param_2 == (undefined **)0x0) {
        return (undefined **)0x0;
      }
      if (*(char *)param_2 != '\0') {
        pbVar8 = (byte *)((long)param_2 + 1);
        pbVar23 = (byte *)((long)param_2 + 2);
        iVar25 = (int)param_2;
        while( true ) {
          iVar25 = iVar25 + 1;
          if ((pbVar23[-1] == 0) ||
             (((pbVar23[-1] == 0x2f && (*pbVar23 - 0x41 < 0x1a)) &&
              ((pbVar23[1] == 0x3d || ((pbVar23[1] - 0x41 < 0x1a && (pbVar23[2] == 0x3d))))))))
          break;
code_r0x00010ae4b478:
          pbVar23 = pbVar23 + 1;
        }
        iVar27 = iVar25 - (int)pbVar8;
        lVar7 = param_1;
        func_0x000107c2b1d4(param_1,pbVar8,iVar27);
        if (iVar27 != (int)lVar7) {
code_r0x00010ae4b4b0:
          func_0x000107c2b29c(0xb,0,7,&UNK_10f6cd4e8,0x16d);
          ppuVar17 = (undefined **)0x0;
          goto code_r0x00010ae4b4d0;
        }
        if (pbVar23[-1] != 0) {
          lVar7 = param_1;
          func_0x000107c2b1d4(param_1,&UNK_10f6cd55c,2);
          if ((int)lVar7 != 2) goto code_r0x00010ae4b4b0;
          pbVar8 = pbVar23;
          if (pbVar23[-1] != 0) goto code_r0x00010ae4b478;
        }
      }
      ppuVar17 = (undefined **)0x1;
code_r0x00010ae4b4d0:
      func_0x000107c2b534(param_2);
      return ppuVar17;
    }
  }
  else {
    uVar19 = (uint)param_3 & ((int)(uint)param_3 >> 0x1f ^ 0xffffffffU);
    ppuVar20 = (undefined **)(ulong)uVar19;
    lVar7 = param_1;
    ppuVar17 = ppuVar20;
    FUN_10073c368(param_1,ppuVar20);
    pcVar29 = (char *)ppuVar17;
    if ((int)lVar7 == 0) {
LAB_10073c7a0:
      ppuVar17 = (undefined **)pcVar29;
      ppuVar5 = (undefined **)0xffffffff;
    }
    else {
      uVar11 = (param_4 & 0xf0000) - 0x10000 >> 0x10;
      ppuVar5 = (undefined **)0xffffffff;
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          uVar19 = 0;
          uVar13 = 1;
          pcVar15 = "+";
          uVar14 = 1;
          pcVar16 = &DAT_10f68e8ee;
        }
        else {
          if (uVar11 != 1) goto LAB_10073c7ac;
          uVar19 = 0;
          uVar14 = 3;
          uVar13 = 2;
          pcVar15 = &UNK_10f5aeb6c;
          pcVar16 = &DAT_10f68f19e;
        }
      }
      else if (uVar11 == 2) {
        uVar19 = 0;
        uVar14 = 3;
        uVar13 = 2;
        pcVar15 = &UNK_10f5aeb6c;
        pcVar16 = "; ";
      }
      else {
        if (uVar11 != 3) goto LAB_10073c7ac;
        uVar14 = 3;
        uVar13 = 1;
        pcVar15 = &UNK_10f5aeb6c;
        pcVar16 = &DAT_10f68f57e;
      }
      bVar4 = (param_4 & 0x800000) != 0;
      ppuVar2 = (undefined **)"=";
      if (bVar4) {
        ppuVar2 = (undefined **)&UNK_10f48d1ff;
      }
      uVar10 = 3;
      if (!bVar4) {
        uVar10 = 1;
      }
      ppuVar5 = ppuVar20;
      if (((param_2 != (undefined **)0x0) && ((int *)*param_2 != (int *)0x0)) &&
         (iVar25 = *(int *)*param_2, uVar24 = iVar25 - 1, 0 < iVar25)) {
        uVar26 = 0;
        uVar1 = (uint)param_4 & 0x600000;
        iVar25 = -1;
        ppuVar9 = param_3;
        do {
          iVar27 = (int)ppuVar20;
          uVar3 = uVar26;
          if ((param_4 & 0x100000) != 0) {
            uVar3 = uVar24;
          }
          if ((((int)uVar3 < 0) || (puVar12 = (ulong *)*param_2, puVar12 == (ulong *)0x0)) ||
             (*puVar12 <= (ulong)uVar3)) {
            puVar21 = (undefined8 *)0x0;
          }
          else {
            puVar21 = *(undefined8 **)(puVar12[1] + (ulong)uVar3 * 8);
          }
          param_3 = ppuVar9;
          if (iVar25 != -1) {
            if (iVar25 == *(int *)(puVar21 + 2)) {
              param_3 = (undefined **)(ulong)uVar14;
              if ((param_1 != 0) &&
                 (lVar7 = param_1, pcVar29 = pcVar15, FUN_1001f16f8(param_1,pcVar15),
                 ppuVar9 = param_3, (uint)lVar7 != uVar14)) goto LAB_10073c7a0;
              param_3 = ppuVar9;
              iVar27 = iVar27 + uVar14;
            }
            else {
              ppuVar17 = (undefined **)(ulong)uVar19;
              if (param_1 != 0) {
                param_3 = (undefined **)(ulong)uVar13;
                lVar7 = param_1;
                pcVar29 = pcVar16;
                FUN_1001f16f8(param_1,pcVar16);
                if ((uint)lVar7 != uVar13) goto LAB_10073c7a0;
              }
              lVar7 = param_1;
              FUN_10073c368(param_1,ppuVar17);
              pcVar29 = (char *)ppuVar17;
              if ((int)lVar7 == 0) goto LAB_10073c7a0;
              iVar27 = uVar13 + uVar19 + iVar27;
            }
          }
          iVar25 = *(int *)(puVar21 + 2);
          ppuVar20 = (undefined **)*puVar21;
          ppuVar17 = (undefined **)puVar21[1];
          ppuVar5 = ppuVar20;
          FUN_10072ec28();
          iVar18 = (int)ppuVar5;
          if (uVar1 != 0x600000) {
            if ((uVar1 == 0x400000) || (iVar18 == 0)) {
              pcVar29 = (char *)apuStack_c0;
              func_0x000107c2b558(apuStack_c0,0x50,ppuVar20,1);
              iVar28 = 0;
            }
            else if (uVar1 == 0x200000) {
              FUN_10073c7ec();
              if (ppuVar5 == (undefined **)0x0) {
                pcVar29 = (char *)0x0;
              }
              else {
                pcVar29 = ppuVar5[1];
              }
              iVar28 = 0x19;
              ppuVar20 = param_3;
            }
            else if ((param_4 & 0x600000) == 0) {
              FUN_10073c7ec();
              if (ppuVar5 == (undefined **)0x0) {
                pcVar29 = (char *)0x0;
              }
              else {
                pcVar29 = *ppuVar5;
              }
              iVar28 = 10;
              ppuVar20 = param_3;
            }
            else {
              iVar28 = 0;
              pcVar29 = "";
              ppuVar20 = param_3;
            }
            param_3 = (undefined **)pcVar29;
            func_0x000107c613d0();
            iVar22 = (int)param_3;
            if ((param_1 != 0) &&
               (lVar7 = param_1, FUN_1001f16f8(param_1,pcVar29), ppuVar20 = param_3,
               (int)lVar7 != iVar22)) goto LAB_10073c7a0;
            param_3 = ppuVar20;
            if (((uint)param_4 >> 0x19 & 1) != 0) {
              uVar3 = iVar28 - iVar22;
              pcVar29 = (char *)(ulong)uVar3;
              if (uVar3 != 0 && iVar22 <= iVar28) {
                lVar7 = param_1;
                FUN_10073c368(param_1,pcVar29);
                if ((int)lVar7 == 0) goto LAB_10073c7a0;
                iVar27 = uVar3 + iVar27;
              }
            }
            param_3 = (undefined **)(ulong)uVar10;
            if ((param_1 != 0) &&
               (lVar7 = param_1, pcVar29 = (char *)ppuVar2, FUN_1001f16f8(param_1,ppuVar2),
               (uint)lVar7 != uVar10)) goto LAB_10073c7a0;
            iVar27 = uVar10 + iVar22 + iVar27;
          }
          uVar11 = 0;
          if (iVar18 == 0 && (param_4 & 0x1000000) != 0) {
            uVar11 = 0x80;
          }
          param_3 = (undefined **)(uVar11 | param_4);
          lVar7 = param_1;
          FUN_10073c92c(param_1,ppuVar17);
          pcVar29 = (char *)ppuVar17;
          if ((int)lVar7 < 0) goto LAB_10073c7a0;
          ppuVar20 = (undefined **)(ulong)(uint)((int)lVar7 + iVar27);
          uVar26 = uVar26 + 1;
          uVar24 = uVar24 - 1;
          ppuVar9 = param_3;
          ppuVar5 = ppuVar20;
        } while (uVar24 != 0xffffffff);
      }
    }
LAB_10073c7ac:
    param_1 = lVar7;
    param_2 = ppuVar17;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return ppuVar5;
    }
  }
  uVar19 = (uint)param_1;
  func_0x000107c60e78();
  if (uVar19 < 0x3c3) {
    if (uVar19 == 0) {
      uVar11 = 0;
    }
    else {
      if (*(int *)(&UNK_110c7ccc8 + (ulong)uVar19 * 0x28) == 0) {
LAB_10073c840:
        FUN_1004d2c58(8,0,100,&UNK_10f6c788b,0x16f);
        return (undefined **)0x0;
      }
      uVar11 = (ulong)uVar19;
    }
    return &PTR_DAT_110c7ccb8 + uVar11 * 5;
  }
  lVar7 = 0x113310e80;
  func_0x000107c61288();
  if ((int)lVar7 == 0) {
    lVar7 = 0x113310e80;
    func_0x000107c6128c();
    if ((int)lVar7 == 0) goto LAB_10073c840;
  }
  func_0x000107c60ebc();
  if ((*(uint *)(lVar7 + 0x10) >> 9 & 1) == 0) {
    puVar21 = *(undefined8 **)(lVar7 + 0x20);
    *(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) & 0xfffffdf0;
    *(undefined4 *)(lVar7 + 0x14) = 0;
    uVar19 = (uint)*puVar21;
    iVar25 = (int)param_3;
    if (iVar25 <= (int)(uVar19 ^ 0x7fffffff)) {
      puVar6 = puVar21;
      FUN_1004cc558(puVar21,(long)(int)(iVar25 + uVar19));
      if (puVar6 == (undefined8 *)((long)(int)uVar19 + (long)iVar25)) {
        if (iVar25 == 0) {
          return param_3;
        }
        func_0x000107c610b4(puVar21[1] + (long)(int)uVar19,param_2,(long)iVar25);
        return param_3;
      }
    }
  }
  else {
    FUN_1004d2c58(0x11,0,0x74,&UNK_10f6c51b9,0xa7);
  }
  return (undefined **)0xffffffff;
}



/* Entry: 10073c7ec; end: 10073c87b;  */

undefined ** FUN_10073c7ec(uint param_1,undefined8 param_2,undefined **param_3)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  if (0x3c2 < param_1) {
    lVar1 = 0x113310e80;
    func_0x000107c61288();
    if ((int)lVar1 == 0) {
      lVar1 = 0x113310e80;
      func_0x000107c6128c();
      if ((int)lVar1 == 0) goto LAB_10073c840;
    }
    func_0x000107c60ebc();
    if ((*(uint *)(lVar1 + 0x10) >> 9 & 1) == 0) {
      puVar5 = *(undefined8 **)(lVar1 + 0x20);
      *(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) & 0xfffffdf0;
      *(undefined4 *)(lVar1 + 0x14) = 0;
      uVar6 = (uint)*puVar5;
      iVar3 = (int)param_3;
      if (iVar3 <= (int)(uVar6 ^ 0x7fffffff)) {
        puVar2 = puVar5;
        FUN_1004cc558(puVar5,(long)(int)(iVar3 + uVar6));
        if (puVar2 == (undefined8 *)((long)(int)uVar6 + (long)iVar3)) {
          if (iVar3 == 0) {
            return param_3;
          }
          func_0x000107c610b4(puVar5[1] + (long)(int)uVar6,param_2,(long)iVar3);
          return param_3;
        }
      }
    }
    else {
      FUN_1004d2c58(0x11,0,0x74,&UNK_10f6c51b9,0xa7);
    }
    return (undefined **)0xffffffff;
  }
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(&UNK_110c7ccc8 + (ulong)param_1 * 0x28) == 0) {
LAB_10073c840:
      FUN_1004d2c58(8,0,100,&UNK_10f6c788b,0x16f);
      return (undefined **)0x0;
    }
    uVar4 = (ulong)param_1;
  }
  return &PTR_DAT_110c7ccb8 + uVar4 * 5;
}



/* Entry: 10073c87c; end: 10073c92b;  */

undefined8 FUN_10073c87c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 0x10) >> 9 & 1) == 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffdf0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar4 = (uint)*puVar3;
    iVar2 = (int)param_3;
    if (iVar2 <= (int)(uVar4 ^ 0x7fffffff)) {
      puVar1 = puVar3;
      FUN_1004cc558(puVar3,(long)(int)(iVar2 + uVar4));
      if (puVar1 == (undefined8 *)((long)(int)uVar4 + (long)iVar2)) {
        if (iVar2 == 0) {
          return param_3;
        }
        func_0x000107c610b4(puVar3[1] + (long)(int)uVar4,param_2,(long)iVar2);
        return param_3;
      }
    }
  }
  else {
    FUN_1004d2c58(0x11,0,0x74,&UNK_10f6c51b9,0xa7);
  }
  return 0xffffffff;
}



/* Entry: 10073c92c; end: 10073cbb7;  */

/* WARNING: Type propagation algorithm not settling */

int FUN_10073c92c(long param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  char cStack_59;
  undefined8 uStack_58;
  int aiStack_50 [2];
  undefined4 *puStack_48;
  
  iVar10 = 0;
  cStack_59 = '\0';
  uVar1 = param_2[1];
  if ((param_3 >> 6 & 1) != 0) {
    uVar7 = uVar1 & 10;
    if ((uVar1 & 0xfffffff7) != 0x102) {
      uVar7 = uVar1;
    }
    if (uVar7 < 0x1f) {
      puVar11 = (&PTR_DAT_110c7b700)[uVar7];
    }
    else {
      puVar11 = &UNK_10f6c4e34;
    }
    puVar3 = puVar11;
    func_0x000107c613d0();
    iVar10 = (int)puVar3;
    if (param_1 == 0) {
      iVar10 = iVar10 + 1;
    }
    else {
      lVar4 = param_1;
      FUN_1001f16f8(param_1,puVar11,puVar3);
      if ((int)lVar4 != iVar10) {
        return -1;
      }
      lVar4 = param_1;
      FUN_1001f16f8(param_1,":",1);
      if ((int)lVar4 != 1) {
        return -1;
      }
      iVar10 = iVar10 + 1;
    }
  }
  if ((param_3 >> 7 & 1) != 0) {
LAB_10073cac0:
    if ((param_1 != 0) && (lVar4 = param_1, FUN_1001f16f8(param_1,"#",1), (int)lVar4 != 1)) {
      return -1;
    }
    if ((param_3 >> 9 & 1) == 0) {
      func_0x000107c2b184(param_1,*(undefined8 *)(param_2 + 2),*param_2);
      if ((int)param_1 < 0) {
        return -1;
      }
      iVar9 = (int)param_1 + 1;
    }
    else {
      aiStack_50[0] = param_2[1];
      if (aiStack_50[0] == 0x102) {
        aiStack_50[0] = 2;
      }
      else if (aiStack_50[0] == 0x10a) {
        aiStack_50[0] = 10;
      }
      uStack_58 = 0;
      piVar6 = aiStack_50;
      puStack_48 = param_2;
      FUN_10072d43c(piVar6,&uStack_58,&DAT_110c7b9f0);
      iVar9 = -1;
      if (-1 < (int)piVar6) {
        func_0x000107c2b184(param_1,uStack_58,piVar6);
        FUN_1001e33e0(uStack_58);
        if (-1 < (int)param_1) {
          iVar9 = (int)param_1 + 1;
        }
      }
    }
    if (iVar9 < 0) {
      return -1;
    }
    return iVar9 + iVar10;
  }
  if ((param_3 >> 5 & 1) == 0) {
    if (uVar1 - 1 < 0x1e && (1L << ((ulong)uVar1 & 0x3f) & 0x2a23efffU) == 0) {
      uVar7 = (uint)(char)(&UNK_10e517be0)[uVar1];
      uVar8 = (int)(char)(&UNK_10e517be0)[uVar1] | 8;
      if (uVar1 == 0xc) {
        uVar8 = 1;
      }
      goto LAB_10073ca14;
    }
    if ((param_3 >> 8 & 1) != 0) goto LAB_10073cac0;
  }
  uVar8 = 9;
  uVar7 = 1;
LAB_10073ca14:
  if ((param_3 & 0x10) != 0) {
    uVar7 = uVar8;
  }
  uVar5 = *(undefined8 *)(param_2 + 2);
  FUN_10073cbb8(uVar5,*param_2,uVar7,param_3 & 0xf,&cStack_59,0);
  cVar2 = cStack_59;
  if (-1 < (int)uVar5) {
    iVar10 = (int)uVar5 + iVar10;
    if (cStack_59 != '\0') {
      iVar10 = iVar10 + 2;
    }
    if (param_1 == 0) {
      return iVar10;
    }
    if ((cStack_59 == '\0') ||
       (lVar4 = param_1, FUN_1001f16f8(param_1,&DAT_10f3b3c06,1), (int)lVar4 == 1)) {
      uVar5 = *(undefined8 *)(param_2 + 2);
      FUN_10073cbb8(uVar5,*param_2,uVar7,param_3 & 0xf,0,param_1);
      if (-1 < (int)uVar5) {
        if (cVar2 == '\0') {
          return iVar10;
        }
        FUN_1001f16f8(param_1,&DAT_10f3b3c06,1);
        if ((int)param_1 == 1) {
          return iVar10;
        }
      }
    }
  }
  return -1;
}



/* Entry: 10073cbb8; end: 10073cde7;  */

int FUN_10073cbb8(byte *param_1,ulong param_2,uint param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  byte abStack_6a [6];
  uint uStack_64;
  
  uVar1 = param_3 & 7;
  iVar8 = (int)param_2;
  if (uVar1 == 2) {
    if ((param_2 & 1) == 0) goto LAB_10073cc28;
    uVar4 = 0x8e;
    uVar5 = 0xbb;
  }
  else {
    if ((uVar1 != 4) || ((param_2 & 3) == 0)) {
LAB_10073cc28:
      if (iVar8 == 0) {
        return 0;
      }
      if (uVar1 < 5) {
        if (uVar1 == 3) {
          return -1;
        }
        iVar7 = 0;
        pbVar3 = param_1;
        do {
          uVar6 = 0;
          if (pbVar3 == param_1 && (param_4 & 1) != 0) {
            uVar6 = 0x20;
          }
          if (uVar1 == 1) {
            pbVar10 = pbVar3 + 1;
            uStack_64 = (uint)*pbVar3;
          }
          else if (uVar1 == 2) {
            pbVar10 = pbVar3 + 2;
            uStack_64 = (uint)CONCAT11(*pbVar3,pbVar3[1]);
          }
          else if (uVar1 == 4) {
            pbVar10 = pbVar3 + 4;
            uStack_64 = (uint)*pbVar3 << 0x18 | (uint)pbVar3[1] << 0x10 | (uint)pbVar3[2] << 8 |
                        (uint)pbVar3[3];
          }
          else {
            pbVar10 = pbVar3;
            func_0x000107c2b194(pbVar3,param_2,&uStack_64);
            if ((int)pbVar10 < 0) {
              return -1;
            }
            param_2 = (ulong)(uint)((int)param_2 - (int)pbVar10);
            pbVar10 = pbVar3 + ((ulong)pbVar10 & 0xffffffff);
          }
          if (pbVar10 == param_1 + iVar8 && (param_4 & 1) != 0) {
            uVar6 = 0x40;
          }
          if ((param_3 >> 3 & 1) == 0) {
            uVar2 = uStack_64;
            FUN_10073cde8(uStack_64,uVar6 | param_4,param_5,param_6);
            if ((int)uVar2 < 0) {
              return -1;
            }
            iVar7 = uVar2 + iVar7;
          }
          else {
            pbVar3 = abStack_6a;
            func_0x00010073cffc(pbVar3,6,uStack_64);
            if (0 < (int)pbVar3) {
              uVar9 = 0;
              do {
                uVar2 = (uint)abStack_6a[uVar9];
                FUN_10073cde8(abStack_6a[uVar9],uVar6 | param_4,param_5,param_6);
                if ((int)uVar2 < 0) {
                  return -1;
                }
                iVar7 = uVar2 + iVar7;
                uVar9 = uVar9 + 1;
              } while (((ulong)pbVar3 & 0xffffffff) != uVar9);
            }
            param_2 = param_2 & 0xffffffff;
          }
          pbVar3 = pbVar10;
        } while (pbVar10 != param_1 + iVar8);
        return iVar7;
      }
      return -1;
    }
    uVar4 = 0x95;
    uVar5 = 0xb5;
  }
  FUN_1004d2c58(0xc,0,uVar4,&UNK_10f6c4ade,uVar5);
  return -1;
}



/* Entry: 10073cde8; end: 10073cfe7;  */

void FUN_10073cde8(uint param_1,char *param_2,undefined1 *param_3,long param_4)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cStack_34;
  char acStack_33 [11];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 < 0x10000) {
    if (param_1 < 0x100) {
      cStack_34 = (char)param_1;
      if (param_1 < 0x80) {
        uVar2 = (uint)(byte)(&UNK_10e517bff)[param_1] & (uint)param_2;
      }
      else {
        uVar2 = (uint)param_2 & 4;
      }
      if ((uVar2 & 0x61) == 0) {
        if ((uVar2 & 6) == 0) {
          if ((param_1 != 0x5c) || (((ulong)param_2 & 0xf) == 0)) goto LAB_10073cf50;
          if (param_4 == 0) goto LAB_10073cfcc;
          param_2 = "\\\\";
          FUN_1001f16f8(param_4,&DAT_10f47f5f4,2);
          uVar2 = (uint)param_4;
          bVar1 = uVar2 == 2;
        }
        else {
          param_2 = (char *)0xb;
          FUN_1007362c8(acStack_33,0xb,&UNK_10f6c4b61);
          if (param_4 == 0) {
            uVar4 = 3;
            goto LAB_10073cf6c;
          }
          param_2 = acStack_33;
          FUN_1001f16f8(param_4,param_2,3);
          uVar2 = (uint)param_4;
          bVar1 = uVar2 == 3;
        }
      }
      else {
        if ((uVar2 >> 3 & 1) == 0) {
          if (param_4 != 0) {
            param_2 = "\\";
            lVar3 = param_4;
            FUN_1001f16f8(param_4,"\\",1);
            if ((int)lVar3 == 1) {
              param_2 = &cStack_34;
              FUN_1001f16f8(param_4,param_2,1);
              uVar2 = 2;
              if ((int)param_4 != 1) {
                uVar2 = 0xffffffff;
              }
              uVar4 = (ulong)uVar2;
            }
            else {
              uVar4 = 0xffffffff;
            }
            goto LAB_10073cf6c;
          }
LAB_10073cfcc:
          uVar4 = 2;
          goto LAB_10073cf6c;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 1;
        }
LAB_10073cf50:
        if (param_4 == 0) {
          uVar4 = 1;
          goto LAB_10073cf6c;
        }
        param_2 = &cStack_34;
        FUN_1001f16f8(param_4,param_2,1);
        uVar2 = (uint)param_4;
        bVar1 = uVar2 == 1;
      }
    }
    else {
      param_2 = (char *)0xb;
      FUN_1007362c8(acStack_33,0xb,&UNK_10f6c4b5a);
      if (param_4 == 0) {
        uVar4 = 6;
        goto LAB_10073cf6c;
      }
      param_2 = acStack_33;
      FUN_1001f16f8(param_4,param_2,6);
      uVar2 = (uint)param_4;
      bVar1 = uVar2 == 6;
    }
  }
  else {
    param_2 = (char *)0xb;
    FUN_1007362c8(acStack_33,0xb,&UNK_10f6c4b53);
    if (param_4 == 0) {
      uVar4 = 10;
      goto LAB_10073cf6c;
    }
    param_2 = acStack_33;
    FUN_1001f16f8(param_4,param_2,10);
    uVar2 = (uint)param_4;
    bVar1 = uVar2 == 10;
  }
  if (!bVar1) {
    uVar2 = 0xffffffff;
  }
  uVar4 = (ulong)uVar2;
LAB_10073cf6c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(uVar4 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(uVar4 + 0x20) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar5);
  return;
}



/* Entry: 10073cfe8; end: 10073d1f3;  */

void FUN_10073cfe8(long param_1,long param_2)

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



/* Entry: 10073d1f4; end: 10073d213;  */

void FUN_10073d1f4(void)

{
  func_0x000107c61168(&PTR_PTR_1129c8f50);
  return;
}



/* Entry: 10073d214; end: 10073d2ff;  */

void FUN_10073d214(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10073d1f4(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x00010073d268();
  func_0x0001005c6ea0(0);
  func_0x000107c610f8();
  func_0x00010073d2b4(uVar1);
  return;
}



/* Entry: 10073d300; end: 10073d30b;  */

void FUN_10073d300(void)

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



/* Entry: 10073d30c; end: 10073d35f;  */

void FUN_10073d30c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073d360; end: 10073d36f;  */

long * FUN_10073d360(long *param_1,undefined8 param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar1 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x30), UNRECOVERED_JUMPTABLE != (code *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0x0001001f1f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,3,0,param_2);
      return param_1;
    }
    FUN_1004d2c58(0x11,0,0x73,&UNK_10f6c5149,0xd0);
    plVar1 = (long *)0xfffffffffffffffe;
  }
  return plVar1;
}



/* Entry: 10073d370; end: 10073d4ff;  */

ulong FUN_10073d370(long param_1,int param_2,undefined4 param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  puVar3 = *(ulong **)(param_1 + 0x20);
  if (param_2 < 10) {
    if (param_2 < 3) {
      if (param_2 != 1) {
        if (param_2 != 2) {
          return 0;
        }
        return (ulong)(*puVar3 == 0);
      }
      if (puVar3[1] != 0) {
        uVar1 = puVar3[2];
        if ((*(byte *)(param_1 + 0x11) >> 1 & 1) == 0) {
          if (uVar1 != 0) {
            func_0x000107c60ee4();
          }
          *puVar3 = 0;
        }
        else {
          uVar2 = *puVar3;
          *puVar3 = uVar1;
          puVar3[1] = puVar3[1] + (uVar2 - uVar1);
        }
      }
    }
    else {
      if (param_2 == 3) {
        uVar1 = *puVar3;
        if (param_4 == (ulong *)0x0) {
          return uVar1;
        }
        *param_4 = puVar3[1];
        return uVar1;
      }
      if (param_2 == 8) {
        return (long)*(int *)(param_1 + 0xc);
      }
      if (param_2 != 9) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xc) = param_3;
    }
  }
  else {
    if (param_2 < 0x72) {
      if (param_2 != 10) {
        return (ulong)(param_2 == 0xb);
      }
      return *puVar3;
    }
    if (param_2 == 0x72) {
      func_0x0001004d2ebc(param_1);
      *(undefined4 *)(param_1 + 0xc) = param_3;
      *(ulong **)(param_1 + 0x20) = param_4;
    }
    else if (param_2 == 0x73) {
      if (param_4 != (ulong *)0x0) {
        *param_4 = (ulong)puVar3;
      }
    }
    else {
      if (param_2 != 0x82) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x18) = param_3;
    }
  }
  return 1;
}



/* Entry: 10073d500; end: 10073d50b;  */

void FUN_10073d500(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  func_0x0001005c56bc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  func_0x00010073e498(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_10073e518();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  func_0x00010073e57c();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10073d50c; end: 10073d673;  */

void FUN_10073d50c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  func_0x0001005c56bc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  func_0x00010073e498(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_10073e518();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  func_0x00010073e57c();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10073d674; end: 10073d6bb;  */

uint FUN_10073d674(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  FUN_10073c7ec();
  if (param_2 == 0) {
    return 0xfffffffe;
  }
  if (param_1 == (undefined8 *)0x0) {
LAB_10073d728:
    param_3 = 0xffffffff;
  }
  else {
    piVar3 = (int *)*param_1;
    if (piVar3 == (int *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)*piVar3;
    }
    if (0x7fffffff < param_3) {
      param_3 = 0xffffffff;
    }
    lVar2 = (long)(int)param_3;
    do {
      lVar2 = lVar2 + 1;
      if (lVar4 <= lVar2) goto LAB_10073d728;
      uVar1 = **(undefined8 **)(*(long *)(piVar3 + 2) + lVar2 * 8);
      FUN_100736a18(uVar1,param_2);
      param_3 = param_3 + 1;
    } while ((int)uVar1 != 0);
  }
  return param_3;
}



/* Entry: 10073d6bc; end: 10073d743;  */

uint FUN_10073d6bc(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  long lVar4;
  
  if (param_1 == (undefined8 *)0x0) {
LAB_10073d728:
    param_3 = 0xffffffff;
  }
  else {
    piVar3 = (int *)*param_1;
    if (piVar3 == (int *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (long)*piVar3;
    }
    if (0x7fffffff < param_3) {
      param_3 = 0xffffffff;
    }
    lVar2 = (long)(int)param_3;
    do {
      lVar2 = lVar2 + 1;
      if (lVar4 <= lVar2) goto LAB_10073d728;
      uVar1 = **(undefined8 **)(*(long *)(piVar3 + 2) + lVar2 * 8);
      FUN_100736a18(uVar1,param_2);
      param_3 = param_3 + 1;
    } while ((int)uVar1 != 0);
  }
  return param_3;
}



/* Entry: 10073d744; end: 10073d787;  */

undefined8 FUN_10073d744(long *param_1,uint param_2)

{
  ulong *puVar1;
  
  if ((((param_1 != (long *)0x0) && (-1 < (int)param_2)) &&
      (puVar1 = (ulong *)*param_1, puVar1 != (ulong *)0x0)) && ((ulong)param_2 < *puVar1)) {
    return *(undefined8 *)(puVar1[1] + (ulong)param_2 * 8);
  }
  return 0;
}



/* Entry: 10073d788; end: 10073dac7;  */

code * FUN_10073d788(code *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,uint *param_5
                    ,undefined1 *param_6,int param_7,code *param_8,undefined8 param_9)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  ulong *puStack_560;
  int iStack_558;
  int iStack_554;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 auStack_500 [1024];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 == (uint *)0x0) {
    lVar13 = 0;
LAB_10073d828:
    uVar11 = param_4;
    (*param_1)(param_4,0);
    if (-1 < (int)uVar11) {
      uVar11 = (ulong)((int)uVar11 + 0x14);
      puVar4 = (ulong *)(uVar11 + 8);
      func_0x000107c610a0();
      if (puVar4 == (ulong *)0x0) {
        uVar8 = 0x41;
        uVar9 = 0x12a;
        puVar10 = (ulong *)0x0;
LAB_10073d9e8:
        FUN_1004d2c58(9,0,uVar8,&UNK_10f6ccb34,uVar9);
      }
      else {
        puVar10 = puVar4 + 1;
        *puVar4 = uVar11;
        puStack_560 = puVar10;
        (*param_1)(param_4,&puStack_560);
        iStack_554 = (int)param_4;
        if (param_5 == (uint *)0x0) {
          auStack_500[0] = 0;
LAB_10073d9f4:
          FUN_10073dd88(param_3,param_2,auStack_500,puVar10,(long)(int)param_4);
          pcVar12 = (code *)(ulong)(0 < (int)param_3);
          goto LAB_10073da24;
        }
        uVar1 = param_5[3];
        if (param_6 == (undefined1 *)0x0) {
          pcVar12 = (code *)&UNK_10ae463d4;
          if (param_8 != (code *)0x0) {
            pcVar12 = param_8;
          }
          param_6 = auStack_500;
          puVar5 = auStack_500;
          (*pcVar12)(puVar5,0x400,1,param_9);
          param_7 = (int)puVar5;
          if (param_7 < 1) {
            uVar8 = 0x6f;
            uVar9 = 0x139;
            goto LAB_10073d9e8;
          }
        }
        puVar6 = &uStack_550;
        FUN_1001e47a4(puVar6,uVar1,&UNK_10e525a20);
        func_0x000107c2b420();
        puVar7 = param_5;
        func_0x000107c2b244(param_5,puVar6,&uStack_550,param_6,(long)param_7,1,&uStack_540,0);
        if ((int)puVar7 != 0) {
          if (param_6 == auStack_500) {
            func_0x000107c60ee4(auStack_500,0x400);
          }
          auStack_500[0] = 0;
          func_0x000107c2b55c(auStack_500,10);
          func_0x000107c2b560(auStack_500,lVar13,uVar1,&uStack_550);
          uStack_88 = 0;
          uStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          puVar6 = &uStack_100;
          func_0x000107c2b3dc(puVar6,param_5);
          if ((int)puVar6 != 0) {
            puVar6 = &uStack_100;
            func_0x000107c2b3e0(puVar6,puVar10,&iStack_558,puVar10,param_4);
            if ((int)puVar6 != 0) {
              puVar6 = &uStack_100;
              func_0x000107c2b3e4(puVar6,(long)puVar10 + (long)iStack_558,&iStack_554);
              if ((int)puVar6 != 0) {
                param_4 = (ulong)(uint)(iStack_554 + iStack_558);
                func_0x000107c2b3d8(&uStack_100);
                goto LAB_10073d9f4;
              }
            }
          }
          func_0x000107c2b3d8(&uStack_100);
        }
      }
      pcVar12 = (code *)0x0;
      goto LAB_10073da24;
    }
    uVar8 = 0xc;
    uVar9 = 0x122;
  }
  else {
    plVar2 = (long *)(ulong)*param_5;
    FUN_10073c7ec();
    if ((((plVar2 != (long *)0x0) && (lVar13 = *plVar2, lVar13 != 0)) &&
        (lVar3 = lVar13, func_0x000107c34f98(), lVar3 != 0)) && (7 < param_5[3]))
    goto LAB_10073d828;
    uVar8 = 0x71;
    uVar9 = 0x11c;
  }
  FUN_1004d2c58(9,0,uVar8,&UNK_10f6ccb34,uVar9);
  pcVar12 = (code *)0x0;
  puVar10 = (ulong *)0x0;
LAB_10073da24:
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_550 = 0;
  uStack_548 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uVar8 = 0x400;
  func_0x000107c60ee4(&uStack_100,auStack_500,0x400);
  FUN_1001e33e0(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    pcVar12 = FUN_10073db10;
    FUN_10073d788(FUN_10073db10,&UNK_10f6ccd77,puVar10,uVar8,0,0,0,0,0);
    return pcVar12;
  }
  return pcVar12;
}



/* Entry: 10073dac8; end: 10073db0f;  */

void FUN_10073dac8(undefined8 param_1,undefined8 param_2)

{
  FUN_10073d788(FUN_10073db10,&UNK_10f6ccd77,param_1,param_2,0,0,0,0,0);
  return;
}



/* Entry: 10073db10; end: 10073db23;  */

undefined8 * FUN_10073db10(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_1;
  if ((param_2 == (long *)0x0) || (*param_2 != 0)) {
    puVar3 = &uStack_48;
    FUN_1004d0778(puVar3,param_2,&UNK_110c87868,0xffffffff,0,0);
  }
  else {
    puVar1 = &uStack_48;
    FUN_1004d0778(puVar1,0,&UNK_110c87868,0xffffffff,0,0);
    puVar3 = puVar1;
    if (0 < (int)puVar1) {
      puVar2 = (ulong *)(((ulong)puVar1 & 0xffffffff) + 8);
      func_0x000107c610a0();
      if (puVar2 == (ulong *)0x0) {
        FUN_1004d2c58(0xc,0,0x41,&UNK_10f6c4ee2,0x61);
        puVar3 = (undefined8 *)0xffffffff;
      }
      else {
        *puVar2 = (ulong)puVar1 & 0xffffffff;
        puVar3 = &uStack_48;
        puStack_50 = puVar2 + 1;
        FUN_1004d0778(puVar3,&puStack_50,&UNK_110c87868,0xffffffff,0,0);
        if (0 < (int)puVar3) {
          *param_2 = (long)(puVar2 + 1);
          puVar3 = puVar1;
        }
      }
    }
  }
  return puVar3;
}



/* Entry: 10073db24; end: 10073db77;  */

void FUN_10073db24(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073db78; end: 10073db83;  */

void FUN_10073db78(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10023acbc();
  func_0x000107c613fc();
  FUN_10073dcac(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073db84; end: 10073dc17;  */

void FUN_10073db84(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_10023acbc();
  func_0x000107c613fc();
  FUN_10073dcac(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 10073dc18; end: 10073dc1f;  */

void FUN_10073dc18(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xc0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073dc20; end: 10073dc73;  */

void FUN_10073dc20(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xc0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073dc74; end: 10073dcab;  */

void FUN_10073dc74(undefined8 param_1)

{
  if (lRam0000000112f41448 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7490b4);
  return;
}



/* Entry: 10073dcac; end: 10073dd87;  */

void FUN_10073dcac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10073dc74(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10073e344();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10073e3e0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 10073dd88; end: 10073e01b;  */

void FUN_10073dd88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  ulong param_5)

{
  bool bVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  int iStack_a4;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uVar4 = param_2;
  puVar12 = param_4;
  uVar13 = param_5;
  func_0x000107c613d0();
  uVar5 = param_1;
  FUN_1001f16f8(param_1,&UNK_10f6ccbc0,0xb);
  if ((int)uVar5 == 0xb) {
    uVar5 = param_1;
    FUN_1001f16f8(param_1,param_2,uVar4);
    if (((int)uVar5 != (int)uVar4) ||
       (uVar5 = param_1, FUN_1001f16f8(param_1,&UNK_10f6ccbcc,6), (int)uVar5 != 6))
    goto LAB_10073dfc0;
    uVar5 = param_3;
    func_0x000107c613d0();
    if ((0 < (int)uVar5) &&
       ((uVar6 = param_1, FUN_1001f16f8(param_1,param_3,uVar5), (int)uVar6 != (int)uVar5 ||
        (uVar5 = param_1, FUN_1001f16f8(param_1,&DAT_10f68f57e,1), (int)uVar5 != 1))))
    goto LAB_10073dfc0;
    puVar7 = (undefined8 *)0x2008;
    func_0x000107c610a0();
    if (puVar7 != (undefined8 *)0x0) {
      puVar16 = puVar7 + 1;
      *puVar7 = 0x2000;
      if ((long)param_5 < 1) {
        iVar20 = 0;
LAB_10073df5c:
        iVar14 = 0;
      }
      else {
        lVar21 = 0;
        iVar20 = 0;
        do {
          uVar17 = param_5;
          if (0x13ff < param_5) {
            uVar17 = 0x1400;
          }
          puVar12 = param_4 + lVar21;
          uVar13 = uVar17;
          FUN_10073e01c(&uStack_a0,puVar16,&iStack_a4,puVar12);
          iVar14 = iStack_a4;
          if ((iStack_a4 != 0) &&
             (uVar5 = param_1, FUN_1001f16f8(param_1,puVar16,iStack_a4), (int)uVar5 != iVar14))
          goto LAB_10073df44;
          iVar20 = iVar14 + iVar20;
          lVar21 = lVar21 + uVar17;
          uVar19 = param_5 - uVar17;
          bVar1 = (long)uVar17 <= (long)param_5;
          param_5 = uVar19;
        } while (uVar19 != 0 && bVar1);
        if ((int)uStack_a0 == 0) goto LAB_10073df5c;
        puVar7 = puVar16;
        FUN_10073e1ec(puVar16,(ulong)&uStack_a0 | 4);
        iVar14 = (int)puVar7 + 1;
        *(undefined2 *)((long)puVar16 + (long)puVar7) = 10;
        uStack_a0 = uStack_a0 & 0xffffffff00000000;
        if ((0 < iVar14) &&
           (uVar5 = param_1, FUN_1001f16f8(param_1,puVar16,iVar14), (int)uVar5 != iVar14)) {
LAB_10073df44:
          FUN_1001e33e0(puVar16);
          goto LAB_10073dfc0;
        }
      }
      FUN_1001e33e0(puVar16);
      uVar5 = param_1;
      FUN_1001f16f8(param_1,&UNK_10f6ccbd3,9);
      if (((int)uVar5 == 9) &&
         (uVar5 = param_1, FUN_1001f16f8(param_1,param_2,uVar4), (int)uVar5 == (int)uVar4)) {
        puVar10 = &UNK_10f6ccbcc;
        puVar11 = (undefined4 *)0x6;
        FUN_1001f16f8();
        if ((int)param_1 == 6) {
          puVar8 = (uint *)(ulong)(uint)(iVar14 + iVar20);
          goto LAB_10073dfe0;
        }
      }
      goto LAB_10073dfc0;
    }
    puVar11 = (undefined4 *)0x41;
  }
  else {
LAB_10073dfc0:
    puVar11 = (undefined4 *)0x7;
  }
  puVar12 = &UNK_10f6ccb34;
  puVar10 = (undefined *)0x0;
  uVar13 = 0x23b;
  FUN_1004d2c58(9,0,puVar11,&UNK_10f6ccb34);
  puVar8 = (uint *)0x0;
LAB_10073dfe0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  *puVar11 = 0;
  if (uVar13 != 0) {
    uVar3 = *puVar8;
    uVar19 = (ulong)uVar3;
    uVar17 = 0x30 - uVar19;
    if (uVar13 < uVar17) {
      func_0x000107c610b4((long)puVar8 + uVar19 + 4,puVar12,uVar13);
      *puVar8 = uVar3 + (int)uVar13;
    }
    else {
      if (uVar3 == 0) {
        puVar18 = (undefined *)0x0;
      }
      else {
        if (uVar3 != 0x30) {
          func_0x000107c610b4((long)(puVar8 + 1) + uVar19,puVar12,uVar17);
        }
        puVar12 = puVar12 + uVar17;
        puVar18 = puVar10;
        FUN_10073e1ec(puVar10,puVar8 + 1,0x30);
        *puVar8 = 0;
        puVar2 = (undefined2 *)(puVar10 + (long)puVar18);
        puVar10 = (undefined *)((long)puVar2 + 1);
        *puVar2 = 10;
        puVar18 = puVar18 + 1;
        uVar13 = uVar13 - uVar17;
      }
      for (; 0x2f < uVar13; uVar13 = uVar13 - 0x30) {
        puVar9 = puVar10;
        FUN_10073e1ec(puVar10,puVar12,0x30);
        puVar2 = (undefined2 *)(puVar10 + (long)puVar9);
        puVar10 = (undefined *)((long)puVar2 + 1);
        *puVar2 = 10;
        if ((undefined *)(-2 - (long)puVar9) < puVar18) {
          *puVar11 = 0;
          return;
        }
        puVar12 = puVar12 + 0x30;
        puVar18 = puVar18 + (long)puVar9 + 1;
      }
      if (uVar13 != 0) {
        func_0x000107c610b4(puVar8 + 1,puVar12,uVar13);
      }
      *puVar8 = (uint)uVar13;
      uVar15 = 0;
      if ((ulong)puVar18 >> 0x1f == 0) {
        uVar15 = SUB84(puVar18,0);
      }
      *puVar11 = uVar15;
    }
  }
  return;
}



/* Entry: 10073e01c; end: 10073e16b;  */

void FUN_10073e01c(uint *param_1,long param_2,undefined4 *param_3,long param_4,ulong param_5)

{
  undefined2 *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  *param_3 = 0;
  if (param_5 != 0) {
    uVar2 = *param_1;
    uVar6 = (ulong)uVar2;
    uVar5 = 0x30 - uVar6;
    if (param_5 < uVar5) {
      func_0x000107c610b4((long)param_1 + uVar6 + 4,param_4,param_5);
      *param_1 = uVar2 + (int)param_5;
    }
    else {
      if (uVar2 == 0) {
        uVar6 = 0;
      }
      else {
        if (uVar2 != 0x30) {
          func_0x000107c610b4((long)(param_1 + 1) + uVar6,param_4,uVar5);
        }
        param_4 = param_4 + uVar5;
        lVar3 = param_2;
        FUN_10073e1ec(param_2,param_1 + 1,0x30);
        *param_1 = 0;
        puVar1 = (undefined2 *)(param_2 + lVar3);
        param_2 = (long)puVar1 + 1;
        *puVar1 = 10;
        uVar6 = lVar3 + 1;
        param_5 = param_5 - uVar5;
      }
      for (; 0x2f < param_5; param_5 = param_5 - 0x30) {
        lVar3 = param_2;
        FUN_10073e1ec(param_2,param_4,0x30);
        puVar1 = (undefined2 *)(param_2 + lVar3);
        param_2 = (long)puVar1 + 1;
        *puVar1 = 10;
        if (-lVar3 - 2U < uVar6) {
          *param_3 = 0;
          return;
        }
        param_4 = param_4 + 0x30;
        uVar6 = uVar6 + lVar3 + 1;
      }
      if (param_5 != 0) {
        func_0x000107c610b4(param_1 + 1,param_4,param_5);
      }
      *param_1 = (uint)param_5;
      uVar4 = 0;
      if (uVar6 >> 0x1f == 0) {
        uVar4 = (undefined4)uVar6;
      }
      *param_3 = uVar4;
    }
  }
  return;
}



/* Entry: 10073e16c; end: 10073e1eb;  */

uint FUN_10073e16c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_1 = param_1 & 0x3f;
  uVar1 = 0xff;
  if (param_1 != 0x3e) {
    uVar1 = 0;
  }
  uVar2 = 0xff;
  if (0x3d < param_1) {
    uVar2 = 0;
  }
  uVar3 = 0xff;
  if (0x33 < param_1) {
    uVar3 = 0;
  }
  uVar4 = 0xff;
  if (0x19 < param_1) {
    uVar4 = 0;
  }
  return ~uVar4 & (~uVar3 & (~uVar2 & (~uVar1 & 0x2f | uVar1 & 0x2b) | param_1 - 4 & uVar2) |
                  uVar3 & param_1 + 0x47) | uVar4 & param_1 + 0x41;
}



/* Entry: 10073e1ec; end: 10073e2ff;  */

long FUN_10073e1ec(undefined1 *param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  
  if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    pbVar8 = (byte *)(param_2 + 1);
    lVar3 = 4;
    do {
      lVar7 = lVar3;
      uVar9 = (uint)pbVar8[-1] << 0x10;
      if (param_3 < 3) {
        if (param_3 == 2) {
          uVar9 = uVar9 | (uint)*pbVar8 << 8;
        }
        uVar5 = (undefined1)(uVar9 >> 0x12);
        FUN_10073e16c();
        puVar1 = param_1 + lVar7;
        param_1[lVar7 + -4] = uVar5;
        uVar5 = (undefined1)(uVar9 >> 0xc);
        FUN_10073e16c();
        puVar1[-3] = uVar5;
        uVar5 = 0x3d;
        if (param_3 != 1) {
          uVar5 = (undefined1)(uVar9 >> 6);
          FUN_10073e16c();
        }
        puVar1[-2] = uVar5;
        puVar1[-1] = 0x3d;
        param_1 = puVar1;
        goto LAB_10073e2e0;
      }
      bVar2 = *pbVar8;
      bVar6 = pbVar8[1];
      bVar4 = pbVar8[-1] >> 2;
      FUN_10073e16c();
      param_1[lVar7 + -4] = bVar4;
      uVar5 = (undefined1)((uVar9 | (uint)bVar2 << 8) >> 0xc);
      FUN_10073e16c();
      param_1[lVar7 + -3] = uVar5;
      uVar5 = (undefined1)(CONCAT11(bVar2,bVar6) >> 6);
      FUN_10073e16c();
      param_1[lVar7 + -2] = uVar5;
      FUN_10073e16c();
      param_1[lVar7 + -1] = bVar6;
      pbVar8 = pbVar8 + 3;
      param_3 = param_3 - 3;
      lVar3 = lVar7 + 4;
    } while (param_3 != 0);
    param_1 = param_1 + lVar7;
  }
LAB_10073e2e0:
  *param_1 = 0;
  return lVar7;
}



/* Entry: 10073e300; end: 10073e343;  */

void FUN_10073e300(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  func_0x000107c61524(param_1,0x100,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Entry: 10073e344; end: 10073e3df;  */

void FUN_10073e344(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  puVar1 = &UNK_11060fbc8;
  func_0x000107c613fc(&UNK_11060fbc8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  FUN_1000285a8(0x112f41418,&UNK_10db8ea20);
  func_0x000107c613fc();
  pcVar2 = FUN_10073ed54;
  FUN_1000bdd8c(FUN_10073ed54,puVar1);
  func_0x000107c61170(param_1);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  return;
}



/* Entry: 10073e3e0; end: 10073e463;  */

void FUN_10073e3e0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10023ad48(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x00010073e418();
  return;
}



/* Entry: 10073e464; end: 10073e517;  */

void FUN_10073e464(void)

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



/* Entry: 10073e518; end: 10073e7ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10073e518(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61170();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130827c8);
  func_0x000107c61174();
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  return;
}



/* Entry: 10073e7ac; end: 10073e81b;  */

void FUN_10073e7ac(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  FUN_1005de35c();
  func_0x000107c613fc();
  FUN_1000285a8(0x112fa13d8,&UNK_10dc15bb0);
  func_0x000107c613fc();
  uVar2 = 1;
  FUN_10008747c();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *param_1 = lVar1;
  return;
}



/* Entry: 10073e81c; end: 10073e82b;  */

undefined1  [16] FUN_10073e81c(void)

{
  return ZEXT816(0x11069f2c8);
}



/* Entry: 10073e82c; end: 10073eb6b;  */

long ***** FUN_10073e82c(long *****param_1,int *param_2,long param_3,int *param_4)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long ****pppplVar7;
  undefined8 *extraout_x8;
  long *****ppppplVar8;
  long lVar9;
  int iVar10;
  bool bVar11;
  long ****pppplStack_a0;
  long ****pppplStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar5 = (char *)param_1;
  if (param_3 != 0) {
    lVar9 = 0;
    pcVar1 = "x509_subject_alternative_name";
    do {
      piVar3 = param_2;
      func_0x00010073c078(param_2,lVar9);
      iVar10 = *piVar3;
      if (iVar10 - 1U < 2) {
LAB_10073e8b4:
        pppplStack_a0 = (long ****)0x0;
        pppplStack_98 = (long ****)0x0;
        uStack_90 = 0;
        lStack_88 = 0;
        if (*piVar3 == 1) {
          iVar10 = (int)&pppplStack_a0;
          FUN_1004cfb18(&pppplStack_a0,*(undefined8 *)(piVar3 + 2));
          func_0x000107c60c64(&pppplStack_98,"x509_email");
        }
        else if (*piVar3 == 2) {
          iVar10 = (int)&pppplStack_a0;
          FUN_1004cfb18(&pppplStack_a0,*(undefined8 *)(piVar3 + 2));
          func_0x000107c60c64(&pppplStack_98,"x509_dns");
        }
        else {
          iVar10 = (int)&pppplStack_a0;
          FUN_1004cfb18(&pppplStack_a0,*(undefined8 *)(piVar3 + 2));
          func_0x000107c60c64(&pppplStack_98,"x509_uri");
        }
        if (iVar10 < 0) {
          pcVar5 = 
          "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
          ;
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                        ,400,2,"Could not get utf8 from asn1 string.");
          bVar11 = false;
          ppppplVar8 = (long *****)0x7;
        }
        else {
          pppplVar7 = *param_1;
          iVar2 = *param_4;
          *param_4 = iVar2 + 1;
          ppppplVar8 = (long *****)pcVar1;
          func_0x00010073d4b0("x509_subject_alternative_name",pppplStack_a0,iVar10,
                              pppplVar7 + (long)iVar2 * 3);
          if ((int)ppppplVar8 == 0) {
            ppppplVar8 = (long *****)pppplStack_98;
            if (-1 < lStack_88) {
              ppppplVar8 = &pppplStack_98;
            }
            pppplVar7 = *param_1;
            iVar2 = *param_4;
            *param_4 = iVar2 + 1;
            func_0x00010073d4b0(ppppplVar8,pppplStack_a0,iVar10,pppplVar7 + (long)iVar2 * 3);
            pcVar5 = (char *)pppplStack_a0;
            FUN_1001e33e0();
            bVar11 = true;
          }
          else {
            pcVar5 = (char *)pppplStack_a0;
            FUN_1001e33e0();
            bVar11 = false;
          }
        }
        if (lStack_88 < 0) {
          pcVar5 = (char *)pppplStack_98;
          func_0x000107c60e14();
        }
        if (!bVar11) goto LAB_10073eac4;
        iVar10 = (int)ppppplVar8;
      }
      else {
        pcVar5 = pcVar1;
        if (iVar10 == 7) {
          iVar10 = **(int **)(piVar3 + 2);
          if (iVar10 == 4) {
            lVar4 = 2;
LAB_10073ea48:
            func_0x000107c61040(lVar4,*(undefined8 *)(*(int **)(piVar3 + 2) + 2),&pppplStack_98,0x2e
                               );
            if (lVar4 != 0) {
              pppplVar7 = *param_1;
              iVar10 = *param_4;
              *param_4 = iVar10 + 1;
              FUN_10073c2a8("x509_subject_alternative_name",lVar4,pppplVar7 + (long)iVar10 * 3);
              ppppplVar8 = (long *****)pcVar5;
              if ((int)pcVar5 == 0) {
                pppplVar7 = *param_1;
                iVar10 = *param_4;
                *param_4 = iVar10 + 1;
                pcVar5 = "x509_ip";
                FUN_10073c2a8("x509_ip",lVar4,pppplVar7 + (long)iVar10 * 3);
                goto LAB_10073eaac;
              }
              goto LAB_10073eac4;
            }
            pcVar5 = 
            "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
            ;
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                          ,0x1b1,2,"Could not get IP string from asn1 octet.");
          }
          else {
            if (iVar10 == 0x10) {
              lVar4 = 0x1e;
              goto LAB_10073ea48;
            }
            pcVar5 = 
            "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
            ;
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                          ,0x1aa,2,"SAN IP Address contained invalid IP");
          }
          ppppplVar8 = (long *****)0x7;
          goto LAB_10073eac4;
        }
        if (iVar10 == 6) goto LAB_10073e8b4;
        pppplVar7 = *param_1;
        iVar10 = *param_4;
        *param_4 = iVar10 + 1;
        FUN_10073c2a8("x509_subject_alternative_name","other types of SAN",
                      pppplVar7 + (long)iVar10 * 3);
LAB_10073eaac:
        iVar10 = (int)pcVar5;
        ppppplVar8 = (long *****)pcVar5;
      }
      if (iVar10 != 0) goto LAB_10073eac4;
      lVar9 = lVar9 + 1;
    } while (param_3 != lVar9);
  }
  ppppplVar8 = (long *****)0x0;
LAB_10073eac4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return ppppplVar8;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  ppppplVar8 = *(long ******)pcVar5;
  uVar6 = 0;
  FUN_1005de35c();
  extraout_x8[3] = uVar6;
  extraout_x8[4] = &PTR_DAT_11069da80;
  *extraout_x8 = ppppplVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(ppppplVar8);
  return ppppplVar8;
}



/* Entry: 10073eb6c; end: 10073eb77;  */

void FUN_10073eb6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_1005de35c();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11069da80;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 10073eb78; end: 10073ebb7;  */

void FUN_10073eb78(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_1005de35c();
  param_1[3] = uVar1;
  param_1[4] = param_3;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 10073ebb8; end: 10073ebc3;  */

void FUN_10073ebb8(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010073ebc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 10073ebc4; end: 10073ebf3;  */

void FUN_10073ebc4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_1004d164c(&uStack_18,&DAT_110c88cd8,0);
  return;
}



/* Entry: 10073ebf4; end: 10073ebff;  */

void FUN_10073ebf4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 10073ec00; end: 10073ec1f;  */

void FUN_10073ec00(void)

{
  func_0x000107c61168(&PTR_PTR_1129c6408);
  return;
}



/* Entry: 10073ec20; end: 10073ec7f;  */

undefined8 FUN_10073ec20(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x110);
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x618) >> 3 & 1) != 0)) {
    plVar2 = (long *)(*(long *)(param_1 + 0x30) + 0x1c8);
  }
  else {
    lVar1 = *(long *)(lVar3 + 0x5e0);
    if ((lVar1 != 0) || (lVar1 = *(long *)(lVar3 + 0x5d8), lVar1 != 0)) goto LAB_10073ec5c;
    plVar2 = (long *)(param_1 + 0x58);
  }
  lVar1 = *plVar2;
  if (lVar1 == 0) {
    return 0;
  }
LAB_10073ec5c:
  lVar3 = 0xb0;
  if ((*(byte *)(param_1 + 0xa4) & 1) == 0) {
    lVar3 = 0xa8;
  }
  return *(undefined8 *)(lVar1 + lVar3);
}



/* Entry: 10073ec80; end: 10073ed53;  */

char * FUN_10073ec80(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x00010073c35c();
  FUN_1001e73a4();
  lVar2 = param_1;
  FUN_10073c06c();
  if (lVar2 != 0) {
    lVar6 = 0;
    do {
      lVar3 = param_1;
      func_0x00010073c078(param_1,lVar6);
      lVar4 = lVar1;
      FUN_10073dac8(lVar1,lVar3);
      if ((int)lVar4 == 0) {
        func_0x0001004d2e54(lVar1);
        return (char *)0x7;
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
  }
  lVar2 = lVar1;
  FUN_10073d360(lVar1,&uStack_48);
  if (lVar2 < 1) {
    pcVar5 = (char *)0x7;
  }
  else {
    pcVar5 = "x509_pem_cert_chain";
    func_0x00010073d4b0("x509_pem_cert_chain",uStack_48,lVar2,param_2);
  }
  func_0x0001004d2e54(lVar1);
  return pcVar5;
}



/* Entry: 10073ed54; end: 10073ed5f;  */

/* WARNING: Possible PIC construction at 0x00010073edcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010073edd0) */

void FUN_10073ed54(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_10073ed60();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11060fe98;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 10073ed60; end: 10073ed7f;  */

void FUN_10073ed60(void)

{
  func_0x000107c61168(&PTR_PTR_112f41a00);
  return;
}



/* Entry: 10073ed80; end: 10073ede3;  */

/* WARNING: Possible PIC construction at 0x00010073edcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010073edd0) */

void FUN_10073ed80(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  FUN_10073ed60();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11060fe98;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 10073ede4; end: 10073ede7;  */

void FUN_10073ede4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10073ede8; end: 10073ee13;  */

void FUN_10073ede8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10073ee14; end: 10073ee23;  */

void FUN_10073ee14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_58 [40];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5c734(uVar2,uVar1,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61180();
  FUN_1000d224c(auStack_58);
  FUN_10073f004(0);
  func_0x000107c610f8();
  uVar3 = uVar2;
  FUN_10073f024(uVar2,uVar1,auStack_58);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 10073ee24; end: 10073ee9f;  */

void FUN_10073ee24(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  
  func_0x000107c5c734();
  func_0x000107c61180();
  FUN_1000d224c(auStack_58);
  FUN_10073f004(0);
  func_0x000107c610f8();
  uVar1 = param_2;
  FUN_10073f024(param_2,param_3,auStack_58);
  func_0x000107c615e8(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10073eea0; end: 10073ef13;  */

/* WARNING: Possible PIC construction at 0x00010073eef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010073eef4) */

void FUN_10073eea0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100628a8c(0);
  func_0x000107c613fc();
  uVar3 = uVar1;
  FUN_10073ef14(uVar1,uVar2,uVar4);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10073ef14; end: 10073ef93;  */

void FUN_10073ef14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0xd000000000000019;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x800000010efb92a0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xd00000000000001b;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x800000010f00b6e0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0x1800000028;
  *(undefined4 *)(unaff_x20 + 0x38) = 0x40;
  *(undefined8 *)(unaff_x20 + 0x60) = 1;
  *(undefined8 *)(unaff_x20 + 0x58) = 1;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined1 *)(unaff_x20 + 0x80) = 1;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined1 *)(unaff_x20 + 0x90) = 2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  *(undefined8 *)(unaff_x20 + 0x50) = param_3;
  return;
}



/* Entry: 10073ef94; end: 10073efc7;  */

void FUN_10073ef94(void)

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



/* Entry: 10073efc8; end: 10073f003;  */

void FUN_10073efc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_100628a8c();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11046fd80;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 10073f004; end: 10073f023;  */

void FUN_10073f004(void)

{
  func_0x000107c61168(&PTR_PTR_1128df220);
  return;
}



/* Entry: 10073f024; end: 10073f173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10073f024(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_78 [24];
  long lStack_60;
  long lStack_58;
  
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_112f85080) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f85088);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f85060) = param_2;
  FUN_10073f174(param_3,auStack_78);
  if (lStack_60 == 0) {
    FUN_100741740(auStack_78);
    bVar2 = 0;
  }
  else {
    FUN_1000a8868(auStack_78,lStack_60);
    (**(code **)(lStack_58 + 0x40))(lStack_60,lStack_58);
    bVar2 = (byte)lStack_60;
    func_0x0001000834e4(auStack_78);
  }
  *(byte *)(unaff_x20 + _DAT_112f85068) = bVar2 & 1;
  if (param_1 == 0) {
    uVar3 = 0;
    *(undefined1 *)(unaff_x20 + _DAT_112f85070) = 0;
  }
  else {
    lVar4 = param_1;
    func_0x000107c4ceb4();
    *(char *)(unaff_x20 + _DAT_112f85070) = (char)lVar4;
    func_0x000107c43814();
    uVar3 = (undefined1)param_1;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f85078) = uVar3;
  puVar5 = &stack0xffffffffffffff78;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  FUN_100741740(param_3);
  return puVar5;
}



/* Entry: 10073f174; end: 10073f1c3;  */

undefined8 FUN_10073f174(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f850b8;
  FUN_1000285a8(0x112f850b8,&UNK_10dbf8fd0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10073f1c4; end: 10073f24b;  */

undefined8 FUN_10073f1c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  FUN_1000d224c(&uStack_38);
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f00b830);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10073f24c; end: 10073f26f;  */

char * FUN_10073f24c(uint param_1)

{
  if (param_1 < 3) {
    return (&PTR_s_TSI_SECURITY_NONE_1107c7960)[(int)param_1];
  }
  return "UNKNOWN";
}



/* Entry: 10073f270; end: 10073f2a3;  */

void FUN_10073f270(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c400d4(uVar1,param_3,0x95);
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10073f2a4; end: 10073f5e7;  */

long * FUN_10073f2a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long param_6)

{
  char cVar1;
  bool bVar2;
  undefined8 ******ppppppuVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plStack_d0;
  long alStack_c8 [3];
  undefined1 uStack_a9;
  undefined8 *****pppppuStack_a8;
  ulong uStack_a0;
  byte bStack_91;
  long *plStack_90;
  undefined8 ****ppppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  code *pcStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = (long *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x6f) < '\0') {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_10073f2f4;
LAB_10073f300:
    plVar8 = (long *)*plVar8;
  }
  else if (*(char *)(param_1 + 0x6f) == '\0') {
LAB_10073f2f4:
    plVar8 = (long *)(param_1 + 0x40);
    if (*(char *)(param_1 + 0x57) < '\0') goto LAB_10073f300;
  }
  uStack_68 = param_2;
  uStack_60 = param_3;
  FUN_10073f740(&plStack_70,plVar8,&uStack_68,param_5);
  if ((plStack_70 != (long *)0x0) || (**(long **)(param_1 + 0x70) == 0)) goto LAB_10073f320;
  puVar4 = &uStack_68;
  FUN_10073f5e8(puVar4,"x509_pem_cert");
  if (puVar4 != (undefined8 *)0x0) {
    lVar9 = puVar4[2] + 1;
    FUN_100460200();
    func_0x000107c610b4();
    *(undefined1 *)(lVar9 + puVar4[2]) = 0;
    (*(code *)**(undefined8 **)(param_1 + 0x70))(plVar8,lVar9,(*(undefined8 **)(param_1 + 0x70))[1])
    ;
    FUN_100460314(lVar9);
    if ((int)plVar8 == 0) goto LAB_10073f320;
    plStack_58 = (long *)((ulong)plVar8 & 0xffffffff);
    pcStack_50 = FUN_1004d50a8;
    FUN_1004d4da0(&pppppuStack_a8,"Verify peer callback returned a failure (%d)",0x2c,&plStack_58,1)
    ;
    ppppppuVar3 = (undefined8 ******)pppppuStack_a8;
    if (-1 < (char)bStack_91) {
      uStack_a0 = (ulong)bStack_91;
      ppppppuVar3 = &pppppuStack_a8;
    }
    alStack_c8[1] = 0;
    alStack_c8[2] = 0;
    alStack_c8[0] = 0;
    func_0x000104ab5920(&plStack_90,2,ppppppuVar3,uStack_a0,&uStack_a9,alStack_c8);
    plVar8 = plStack_70;
    if (plStack_90 == plStack_70) {
LAB_10073f494:
      if (((ulong)plVar8 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      plStack_70 = plStack_90;
      plStack_90 = (long *)0x36;
      if (((ulong)plVar8 & 1) != 0) {
        FUN_10084dad0();
        plVar8 = plStack_90;
        goto LAB_10073f494;
      }
    }
    plStack_58 = alStack_c8;
    func_0x000100482b64(&plStack_58);
    if ((char)bStack_91 < '\0') {
      func_0x000107c60e14(pppppuStack_a8);
    }
    goto LAB_10073f320;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  ppppuStack_88 = (undefined8 *****)0x0;
  func_0x000104ab5920(&plStack_58,2,"Cannot check peer: missing pem cert property.",0x2d,&plStack_90
                      ,&ppppuStack_88);
  plVar8 = plStack_70;
  if (plStack_58 == plStack_70) {
LAB_10073f510:
    if (((ulong)plVar8 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  else {
    plStack_70 = plStack_58;
    plStack_58 = (long *)0x36;
    if (((ulong)plVar8 & 1) != 0) {
      FUN_10084dad0();
      plVar8 = plStack_58;
      goto LAB_10073f510;
    }
  }
  pppppuStack_a8 = &ppppuStack_88;
  func_0x000100482b64(&pppppuStack_a8);
LAB_10073f320:
  plStack_d0 = plStack_70;
  if (((ulong)plStack_70 & 1) != 0) {
    piVar6 = (int *)((long)plStack_70 + -1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
      if (bVar2) {
        *piVar6 = *piVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_1004bd7e8(&pppppuStack_a8,param_6,&plStack_d0);
  if (((ulong)plStack_d0 & 1) != 0) {
    FUN_10084dad0();
  }
  FUN_100740870(&uStack_68);
  plVar8 = plStack_70;
  if (((ulong)plStack_70 & 1) != 0) {
    FUN_10084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    FUN_1004bdf74(&plStack_58);
    pppppuStack_a8 = &ppppuStack_88;
    func_0x000100482b64(&pppppuStack_a8);
    FUN_1004bdf74(&plStack_70);
    func_0x000107c60bd8();
    if ((plVar8 != (long *)0x0) && (lVar9 = plVar8[1], lVar9 != 0)) {
      lVar10 = 0;
      plVar8 = (long *)*plVar8;
      plVar7 = plVar8;
      do {
        lVar5 = *plVar7;
        if (param_6 == 0) {
          if (lVar5 == 0) {
            return plVar8 + lVar10 * 3;
          }
        }
        else if ((lVar5 != 0) && (func_0x000107c613c0(lVar5,param_6), (int)lVar5 == 0)) {
          return plVar7;
        }
        lVar10 = lVar10 + 1;
        plVar7 = plVar7 + 3;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    return (long *)0x0;
  }
  return plVar8;
}



/* Entry: 10073f5e8; end: 10073f66f;  */

long * FUN_10073f5e8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if ((param_1 != (undefined8 *)0x0) && (lVar3 = param_1[1], lVar3 != 0)) {
    lVar4 = 0;
    plVar5 = (long *)*param_1;
    plVar2 = plVar5;
    do {
      lVar1 = *plVar2;
      if (param_2 == 0) {
        if (lVar1 == 0) {
          return plVar5 + lVar4 * 3;
        }
      }
      else if ((lVar1 != 0) && (func_0x000107c613c0(lVar1,param_2), (int)lVar1 == 0)) {
        return plVar2;
      }
      lVar4 = lVar4 + 1;
      plVar2 = plVar2 + 3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return (long *)0x0;
}


