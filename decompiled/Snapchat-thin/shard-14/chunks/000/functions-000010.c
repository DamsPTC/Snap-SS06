/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af0f340; end: 10af0f3a7; +[SCMEAddExplorerStatusResponse descriptor] */

void FUN_10af0f340(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0ced8,
                        &PTR____CFConstantStringClassReference_110f35318,
                        &PTR_s_snapchat_map_113323110,0,0,4,0x1c);
    puRam00000001137eef58 = puVar1;
  }
  return;
}



/* Entry: 10af0f3a8; end: 10af0f40f; +[SCMEDeleteAllExplorerStatusRequest descriptor] */

void FUN_10af0f3a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0cf28,
                        &PTR____CFConstantStringClassReference_110f35338,
                        &PTR_s_snapchat_map_113323110,&PTR_s_userId_1133232c8,2,0x18,0x1c);
    puRam00000001137eef60 = puVar1;
  }
  return;
}



/* Entry: 10af0f410; end: 10af0f477; +[SCMEDeleteAllExplorerStatusResponse descriptor] */

void FUN_10af0f410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0cf78,
                        &PTR____CFConstantStringClassReference_110f35358,
                        &PTR_s_snapchat_map_113323110,0,0,4,0x1c);
    puRam00000001137eef68 = puVar1;
  }
  return;
}



/* Entry: 10af0f478; end: 10af0f4df; +[SCMEDeleteExplorerStatusTypeRequest descriptor] */

void FUN_10af0f478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0cfc8,
                        &PTR____CFConstantStringClassReference_110f35378,
                        &PTR_s_snapchat_map_113323110,&PTR_s_userId_113323308,2,0x10,0x1c);
    puRam00000001137eef70 = puVar1;
  }
  return;
}



/* Entry: 10af0f4e0; end: 10af0f5c3; +[SCMEDeleteExplorerStatusTypeResponse descriptor] */

void FUN_10af0f4e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d018,
                        &PTR____CFConstantStringClassReference_110f35398,
                        &PTR_s_snapchat_map_113323110,0,0,4,0x1c);
    puRam00000001137eef78 = puVar1;
  }
  return;
}



/* Entry: 10af0f5c4; end: 10af0f5cf;  */

bool FUN_10af0f5c4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10af0f5d0; end: 10af0f64b;  */

undefined * FUN_10af0f5d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eef88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f353d8,
                        &UNK_10e538098,&UNK_10e5380ac,3,FUN_10af0f64c,0);
    do {
      if (puRam00000001137eef88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eef88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eef88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eef88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eef88;
}



/* Entry: 10af0f64c; end: 10af0f657;  */

bool FUN_10af0f64c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af0f658; end: 10af0f6d3;  */

undefined * FUN_10af0f658(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eef90 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f353f8,
                        &UNK_10e5380b8,&UNK_10e5380ec,6,FUN_10af0f6d4,0);
    do {
      if (puRam00000001137eef90 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eef90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eef90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eef90 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eef90;
}



/* Entry: 10af0f6d4; end: 10af0f6df;  */

bool FUN_10af0f6d4(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10af0f6e0; end: 10af0f75b;  */

undefined * FUN_10af0f6e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eef98 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f35418,
                        &UNK_10e538104,&UNK_10e538138,6,FUN_10af0f75c,0);
    do {
      if (puRam00000001137eef98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eef98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eef98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eef98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eef98;
}



/* Entry: 10af0f75c; end: 10af0f767;  */

bool FUN_10af0f75c(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10af0f768; end: 10af0f7e3;  */

undefined * FUN_10af0f768(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eefa0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f35438,
                        &UNK_10e538150,&UNK_10e538184,8,FUN_10af0f7e4,0);
    do {
      if (puRam00000001137eefa0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eefa0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eefa0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eefa0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eefa0;
}



/* Entry: 10af0f7e4; end: 10af0f7ef;  */

bool FUN_10af0f7e4(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10af0f7f0; end: 10af0f86b;  */

undefined * FUN_10af0f7f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eefa8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f35458,
                        &UNK_10e5381a4,&UNK_10e5381e0,4,FUN_10af0f86c,0);
    do {
      if (puRam00000001137eefa8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eefa8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eefa8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eefa8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eefa8;
}



/* Entry: 10af0f86c; end: 10af0f877;  */

bool FUN_10af0f86c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af0f878; end: 10af0f8f3;  */

undefined * FUN_10af0f878(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eefb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f35478,
                        &UNK_10e5381f0,&UNK_10e538228,4,FUN_10af0f8f4,0);
    do {
      if (puRam00000001137eefb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eefb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eefb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eefb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eefb0;
}



/* Entry: 10af0f8f4; end: 10af0f8ff;  */

bool FUN_10af0f8f4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af0f900; end: 10af0f97b;  */

undefined * FUN_10af0f900(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eefb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f35498,
                        &UNK_10e538238,&UNK_10e538254,3,FUN_10af0f97c,0);
    do {
      if (puRam00000001137eefb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eefb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eefb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eefb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eefb8;
}



/* Entry: 10af0f97c; end: 10af0f987;  */

bool FUN_10af0f97c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af0f988; end: 10af0fa03;  */

undefined * FUN_10af0f988(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eefc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f354b8,
                        &UNK_10e538260,&UNK_10e538284,5,FUN_10af0fa04,0);
    do {
      if (puRam00000001137eefc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eefc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eefc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eefc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eefc0;
}



/* Entry: 10af0fa04; end: 10af0fa0f;  */

bool FUN_10af0fa04(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10af0fa10; end: 10af0fa8b;  */

undefined * FUN_10af0fa10(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eefc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f354d8,
                        &UNK_10e5382c0,&UNK_10e538298,3,FUN_10af0fa8c,0);
    do {
      if (puRam00000001137eefc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eefc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eefc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eefc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eefc8;
}



/* Entry: 10af0fa8c; end: 10af0fa97;  */

bool FUN_10af0fa8c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af0fa98; end: 10af0fb13;  */

undefined * FUN_10af0fa98(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eefd0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f354f8,
                        &UNK_10e5382c0,&UNK_10e5382a4,3,FUN_10af0fb14,0);
    do {
      if (puRam00000001137eefd0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eefd0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eefd0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eefd0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eefd0;
}



/* Entry: 10af0fb14; end: 10af0fb1f;  */

bool FUN_10af0fb14(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af0fb20; end: 10af0fb87; +[SCMTDeviceData descriptor] */

void FUN_10af0fb20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eefd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d130,
                        &PTR____CFConstantStringClassReference_110e5cff8,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_113324ac8,7,0x18,0x1c);
    puRam00000001137eefd8 = puVar1;
  }
  return;
}



/* Entry: 10af0fb88; end: 10af0fbef; +[SCMTLocationPermission descriptor] */

void FUN_10af0fb88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eefe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d180,
                        &PTR____CFConstantStringClassReference_110e5d038,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_113324208,2,8,0x1c);
    puRam00000001137eefe0 = puVar1;
  }
  return;
}



/* Entry: 10af0fbf0; end: 10af0fc57; +[SCMTMotionData descriptor] */

void FUN_10af0fbf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eefe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d1d0,
                        &PTR____CFConstantStringClassReference_110e5cfd8,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_113324628,5,0x20,0x1c);
    puRam00000001137eefe8 = puVar1;
  }
  return;
}



/* Entry: 10af0fc58; end: 10af0fcbf; +[SCMTLocality descriptor] */

void FUN_10af0fc58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeff0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d220,
                        &PTR____CFConstantStringClassReference_110e33098,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_1133243c8,3,0x20,0x1c);
    puRam00000001137eeff0 = puVar1;
  }
  return;
}



/* Entry: 10af0fcc0; end: 10af0fd27; +[SCMTGDPRSettings descriptor] */

void FUN_10af0fcc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeff8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0de50,
                        &PTR____CFConstantStringClassReference_110f35518,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_1133246c8,5,0x20,0x1c);
    puRam00000001137eeff8 = puVar1;
  }
  return;
}



/* Entry: 10af0fd28; end: 10af0fdab; +[SCMTGDPRSettings_GhostMode descriptor] */

undefined * FUN_10af0fd28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef000 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0de78,
                        &PTR____CFConstantStringClassReference_110ea5b18,
                        &PTR_s_snapchat_map_1133240d0,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137ef000 = puVar1;
  }
  return puRam00000001137ef000;
}



/* Entry: 10af0fdac; end: 10af0fe2f; +[SCMTGDPRSettings_OnboardedMap descriptor] */

undefined * FUN_10af0fdac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0dea0,
                        &PTR____CFConstantStringClassReference_110f35538,
                        &PTR_s_snapchat_map_1133240d0,0,0,4,0x1c);
    func_0x00010c228780();
    puRam00000001137ef008 = puVar1;
  }
  return puRam00000001137ef008;
}



/* Entry: 10af0fe30; end: 10af0fe9b; +[SCMTActionSticker descriptor] */

void FUN_10af0fe30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d2e8,
                        &PTR____CFConstantStringClassReference_110f35558,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_113325648,0x14,0x70,0x1c);
    puRam00000001137ef010 = puVar1;
  }
  return;
}



/* Entry: 10af0fe9c; end: 10af0ff07; +[SCMTPrivacySensitiveLocationData descriptor] */

void FUN_10af0fe9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d338,
                        &PTR____CFConstantStringClassReference_110f35578,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_lat_113325428,0x11,0x68,0x1c);
    puRam00000001137ef018 = puVar1;
  }
  return;
}



/* Entry: 10af0ff08; end: 10af0ff6f; +[SCMTPerFriendSharingMode descriptor] */

void FUN_10af0ff08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d388,
                        &PTR____CFConstantStringClassReference_110f35598,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_userId_113324248,2,0x10,0x1c);
    puRam00000001137ef020 = puVar1;
  }
  return;
}



/* Entry: 10af0ff70; end: 10af0ffd7; +[SCMTPassportPreferences descriptor] */

void FUN_10af0ff70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d3d8,
                        &PTR____CFConstantStringClassReference_110f355b8,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_1133240e8,1,8,0x1c);
    puRam00000001137ef028 = puVar1;
  }
  return;
}



/* Entry: 10af0ffd8; end: 10af10043; +[SCMTShareLocationPreferences descriptor] */

void FUN_10af0ffd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef030 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d428,
                        &PTR____CFConstantStringClassReference_110e5cf98,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_1133250e8,10,0x30,0x1c);
    puRam00000001137ef030 = puVar1;
  }
  return;
}



/* Entry: 10af10044; end: 10af100ab; +[SCMTInternalGetShareLocationPreferencesRequest descriptor] */

void FUN_10af10044(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef038 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d478,
                        &PTR____CFConstantStringClassReference_110f355d8,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_userId_113324108,1,0x10,0x1c);
    puRam00000001137ef038 = puVar1;
  }
  return;
}



/* Entry: 10af100ac; end: 10af10113; +[SCMTInternalGetShareLocationPreferencesResponse descriptor] */

void FUN_10af100ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef040 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d4c8,
                        &PTR____CFConstantStringClassReference_110f355f8,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_113324128,1,0x10,0x1c);
    puRam00000001137ef040 = puVar1;
  }
  return;
}



/* Entry: 10af10114; end: 10af1017b; +[SCMTValisGetShareLocationPreferencesRequest descriptor] */

void FUN_10af10114(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d518,
                        &PTR____CFConstantStringClassReference_110f35618,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_userId_113324148,1,0x10,0x1c);
    puRam00000001137ef048 = puVar1;
  }
  return;
}



/* Entry: 10af1017c; end: 10af101e3; +[SCMTGetShareLocationPreferencesRequest descriptor] */

void FUN_10af1017c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef050 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d568,
                        &PTR____CFConstantStringClassReference_110f35638,
                        &PTR_s_snapchat_map_1133240d0,0,0,4,0x1c);
    puRam00000001137ef050 = puVar1;
  }
  return;
}



/* Entry: 10af101e4; end: 10af1024b; +[SCMTGetShareLocationPreferencesResponse descriptor] */

void FUN_10af101e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef058 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d5b8,
                        &PTR____CFConstantStringClassReference_110f35658,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_113324768,5,0x18,0x1c);
    puRam00000001137ef058 = puVar1;
  }
  return;
}



/* Entry: 10af1024c; end: 10af102b3; +[SCMTValisSetShareLocationPreferencesRequest descriptor] */

void FUN_10af1024c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d608,
                        &PTR____CFConstantStringClassReference_110f35678,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_userId_113324428,3,0x20,0x1c);
    puRam00000001137ef060 = puVar1;
  }
  return;
}



/* Entry: 10af102b4; end: 10af1031b; +[SCMTSetShareLocationPreferencesRequest descriptor] */

void FUN_10af102b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d658,
                        &PTR____CFConstantStringClassReference_110f35698,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_1133245a8,4,0x20,0x1c);
    puRam00000001137ef068 = puVar1;
  }
  return;
}



/* Entry: 10af1031c; end: 10af10383; +[SCMTSetShareLocationPreferencesResponse descriptor] */

void FUN_10af1031c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d6a8,
                        &PTR____CFConstantStringClassReference_110f356b8,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_errorCode_113324168,1,8,0x1c);
    puRam00000001137ef070 = puVar1;
  }
  return;
}



/* Entry: 10af10384; end: 10af103eb; +[SCMTDeleteShareLocationPreferencesRequest descriptor] */

void FUN_10af10384(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d6f8,
                        &PTR____CFConstantStringClassReference_110f356d8,
                        &PTR_s_snapchat_map_1133240d0,0,0,4,0x1c);
    puRam00000001137ef078 = puVar1;
  }
  return;
}



/* Entry: 10af103ec; end: 10af10453; +[SCMTDeleteShareLocationPreferencesResponse descriptor] */

void FUN_10af103ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d748,
                        &PTR____CFConstantStringClassReference_110f356f8,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_errorCode_113324188,1,8,0x1c);
    puRam00000001137ef080 = puVar1;
  }
  return;
}



/* Entry: 10af10454; end: 10af104bb; +[SCMTFriendLocationVenue descriptor] */

void FUN_10af10454(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d798,
                        &PTR____CFConstantStringClassReference_110f35718,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_113324288,2,0x18,0x1c);
    puRam00000001137ef088 = puVar1;
  }
  return;
}



/* Entry: 10af104bc; end: 10af10523; +[SCMTFriendStatus descriptor] */

void FUN_10af104bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef090 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d7e8,
                        &PTR____CFConstantStringClassReference_110f35738,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_1133242c8,2,0x18,0x1c);
    puRam00000001137ef090 = puVar1;
  }
  return;
}



/* Entry: 10af10524; end: 10af1058f; +[SCMTFriendLocation descriptor] */

void FUN_10af10524(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef098 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d838,
                        &PTR____CFConstantStringClassReference_110f35758,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_userId_1133258c8,0x1c,0xb0,0x1c);
    puRam00000001137ef098 = puVar1;
  }
  return;
}



/* Entry: 10af10590; end: 10af1061b; +[SCMTLocationAnnotation descriptor] */

undefined * FUN_10af10590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef0a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d888,
                        &PTR____CFConstantStringClassReference_110e5d138,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_113324488,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137ef0a0 = puVar1;
  }
  return puRam00000001137ef0a0;
}



/* Entry: 10af1061c; end: 10af10683; +[SCMTMapPoint descriptor] */

void FUN_10af1061c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef0a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d8d8,
                        &PTR____CFConstantStringClassReference_110f35778,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_lat_113324808,5,0x28,0x1c);
    puRam00000001137ef0a8 = puVar1;
  }
  return;
}



/* Entry: 10af10684; end: 10af106eb; +[SCMTFriendClustersRequest descriptor] */

void FUN_10af10684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef0b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d928,
                        &PTR____CFConstantStringClassReference_110f35798,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_113324948,6,0x30,0x1c);
    puRam00000001137ef0b0 = puVar1;
  }
  return;
}



/* Entry: 10af106ec; end: 10af10753; +[SCMTFriendClustersResponse descriptor] */

void FUN_10af106ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef0b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d978,
                        &PTR____CFConstantStringClassReference_110f357b8,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_113324d88,9,0x48,0x1c);
    puRam00000001137ef0b8 = puVar1;
  }
  return;
}



/* Entry: 10af10754; end: 10af107bb; +[SCMTFriendClusterIds descriptor] */

void FUN_10af10754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef0c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d9c8,
                        &PTR____CFConstantStringClassReference_110f357d8,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_1133241a8,1,0x10,0x1c);
    puRam00000001137ef0c0 = puVar1;
  }
  return;
}



/* Entry: 10af107bc; end: 10af10837; +[SCMTImage descriptor] */

undefined * FUN_10af107bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef0c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0da18,
                        &PTR____CFConstantStringClassReference_110dac698,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_113324308,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001137ef0c8 = puVar1;
  }
  return puRam00000001137ef0c8;
}



/* Entry: 10af10838; end: 10af1089f; +[SCMTFriendCluster descriptor] */

void FUN_10af10838(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef0d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0da68,
                        &PTR____CFConstantStringClassReference_110e5d158,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_prop_113324ba8,7,0x38,0x1c);
    puRam00000001137ef0d0 = puVar1;
  }
  return;
}



/* Entry: 10af108a0; end: 10af10907; +[SCMTLocationUpdate descriptor] */

void FUN_10af108a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef0d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0dab8,
                        &PTR____CFConstantStringClassReference_110e5d078,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_lat_113324c88,8,0x28,0x1c);
    puRam00000001137ef0d8 = puVar1;
  }
  return;
}



/* Entry: 10af10908; end: 10af10973; +[SCMTBatchUserLocationRequest descriptor] */

void FUN_10af10908(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef0e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0db08,
                        &PTR____CFConstantStringClassReference_110f357f8,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_113325228,0x10,0x60,0x1c);
    puRam00000001137ef0e0 = puVar1;
  }
  return;
}



/* Entry: 10af10974; end: 10af109db; +[SCMTKalmanData descriptor] */

void FUN_10af10974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef0e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0db58,
                        &PTR____CFConstantStringClassReference_110f319d8,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_lat_113324ea8,9,0x30,0x1c);
    puRam00000001137ef0e8 = puVar1;
  }
  return;
}



/* Entry: 10af109dc; end: 10af10a43; +[SCMTSpectaclesInfo descriptor] */

void FUN_10af109dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef0f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0dba8,
                        &PTR____CFConstantStringClassReference_110f31b98,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_1133244e8,3,0x10,0x1c);
    puRam00000001137ef0f0 = puVar1;
  }
  return;
}



/* Entry: 10af10a44; end: 10af10aab; +[SCMTBatchUserLocationResponse descriptor] */

void FUN_10af10a44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef0f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0dbf8,
                        &PTR____CFConstantStringClassReference_110f35818,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_errorCode_1133248a8,5,0x28,0x1c);
    puRam00000001137ef0f8 = puVar1;
  }
  return;
}



/* Entry: 10af10aac; end: 10af10b13; +[SCMTInternalGetPassportPreferencesRequest descriptor] */

void FUN_10af10aac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef100 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0dc48,
                        &PTR____CFConstantStringClassReference_110f35838,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_userId_1133241c8,1,0x10,0x1c);
    puRam00000001137ef100 = puVar1;
  }
  return;
}



/* Entry: 10af10b14; end: 10af10b7b; +[SCMTInternalGetPassportPreferencesResponse descriptor] */

void FUN_10af10b14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef108 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0dc98,
                        &PTR____CFConstantStringClassReference_110f35858,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_1133241e8,1,0x10,0x1c);
    puRam00000001137ef108 = puVar1;
  }
  return;
}



/* Entry: 10af10b7c; end: 10af10be3; +[SCMTFriendLocationsRequest descriptor] */

void FUN_10af10b7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef110 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0dce8,
                        &PTR____CFConstantStringClassReference_110f35878,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_lat_113324a08,6,0x28,0x1c);
    puRam00000001137ef110 = puVar1;
  }
  return;
}



/* Entry: 10af10be4; end: 10af10c4b; +[SCMTFriendLocationsResponse descriptor] */

void FUN_10af10be4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef118 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0dd38,
                        &PTR____CFConstantStringClassReference_110f35898,
                        &PTR_s_snapchat_map_1133240d0,&PTR_DAT_113324548,3,0x20,0x1c);
    puRam00000001137ef118 = puVar1;
  }
  return;
}



/* Entry: 10af10c4c; end: 10af10cb7; +[SCMTUserLocationRequest descriptor] */

void FUN_10af10c4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef120 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0dd88,
                        &PTR____CFConstantStringClassReference_110f358b8,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_lat_113324fc8,9,0x38,0x1c);
    puRam00000001137ef120 = puVar1;
  }
  return;
}



/* Entry: 10af10cb8; end: 10af10d1f; +[SCMTUserLocationResponse descriptor] */

void FUN_10af10cb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef128 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0ddd8,
                        &PTR____CFConstantStringClassReference_110f358d8,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_timestamp_113324348,2,0x18,0x1c);
    puRam00000001137ef128 = puVar1;
  }
  return;
}



/* Entry: 10af10d20; end: 10af10e17; +[SCMTLastKnownLocation descriptor] */

void FUN_10af10d20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef130 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0de28,
                        &PTR____CFConstantStringClassReference_110f358f8,
                        &PTR_s_snapchat_map_1133240d0,&PTR_s_userId_113324388,2,0x18,0x1c);
    puRam00000001137ef130 = puVar1;
  }
  return;
}



/* Entry: 10af10e18; end: 10af10e23;  */

bool FUN_10af10e18(uint param_1)

{
  return param_1 < 0x26;
}



/* Entry: 10af10e24; end: 10af10e9f;  */

undefined * FUN_10af10e24(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef140 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f35938,
                        &UNK_10e538508,&UNK_10e538544,4,FUN_10af10ea0,0);
    do {
      if (puRam00000001137ef140 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef140;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef140,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef140 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef140;
}



/* Entry: 10af10ea0; end: 10af10eab;  */

bool FUN_10af10ea0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af10eac; end: 10af10f27;  */

undefined * FUN_10af10eac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef148 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f35958,
                        &UNK_10e538554,&UNK_10e53857c,4,FUN_10af10f28,0);
    do {
      if (puRam00000001137ef148 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef148;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef148,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef148 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef148;
}



/* Entry: 10af10f28; end: 10af10f33;  */

bool FUN_10af10f28(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af10f34; end: 10af10faf;  */

undefined * FUN_10af10f34(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef150 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f35978,
                        &UNK_10e53858c,&UNK_10e5385a0,2,FUN_10af10fb0,0);
    do {
      if (puRam00000001137ef150 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef150;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef150,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef150 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef150;
}



/* Entry: 10af10fb0; end: 10af10fbb;  */

bool FUN_10af10fb0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10af10fbc; end: 10af11037;  */

undefined * FUN_10af10fbc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef158 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f35998,
                        &UNK_10e5385a8,&UNK_10e5385bc,2,FUN_10af11038,0);
    do {
      if (puRam00000001137ef158 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef158;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef158,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef158 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef158;
}



/* Entry: 10af11038; end: 10af11043;  */

bool FUN_10af11038(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10af11044; end: 10af110bf;  */

undefined * FUN_10af11044(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef160 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f359b8,
                        &UNK_10e5385c4,&UNK_10e538608,6,FUN_10af110c0,0);
    do {
      if (puRam00000001137ef160 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef160;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef160,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef160 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef160;
}



/* Entry: 10af110c0; end: 10af110cb;  */

bool FUN_10af110c0(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10af110cc; end: 10af11147;  */

undefined * FUN_10af110cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef168 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f359d8,
                        &UNK_10e538620,&UNK_10e53862c,1,FUN_10af11148,0);
    do {
      if (puRam00000001137ef168 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef168;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef168,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef168 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef168;
}



/* Entry: 10af11148; end: 10af11153;  */

bool FUN_10af11148(int param_1)

{
  return param_1 == 0;
}



/* Entry: 10af11154; end: 10af111bb; +[SCMT1ActionTypeID descriptor] */

void FUN_10af11154(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef170 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0df40,
                        &PTR____CFConstantStringClassReference_110f359f8,&PTR_DAT_113325c50,
                        &PTR_s_id_p_113325d08,2,0x18,0x1c);
    puRam00000001137ef170 = puVar1;
  }
  return;
}



/* Entry: 10af111bc; end: 10af11223; +[SCMT1ActionTiming descriptor] */

void FUN_10af111bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef178 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0df90,
                        &PTR____CFConstantStringClassReference_110f35a18,&PTR_DAT_113325c50,
                        &PTR_DAT_113325e88,3,0x20,0x1c);
    puRam00000001137ef178 = puVar1;
  }
  return;
}



/* Entry: 10af11224; end: 10af1128b; +[SCMT1StickerID descriptor] */

void FUN_10af11224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef180 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0dfe0,
                        &PTR____CFConstantStringClassReference_110f35a38,&PTR_DAT_113325c50,
                        &PTR_DAT_1133263c8,7,0x28,0x1c);
    puRam00000001137ef180 = puVar1;
  }
  return;
}



/* Entry: 10af1128c; end: 10af112f3; +[SCMT1Constrain descriptor] */

void FUN_10af1128c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef188 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0e030,
                        &PTR____CFConstantStringClassReference_110f35a58,&PTR_DAT_113325c50,
                        &PTR_DAT_113326248,6,0x10,0x1c);
    puRam00000001137ef188 = puVar1;
  }
  return;
}



/* Entry: 10af112f4; end: 10af11373; +[SCMT1Action descriptor] */

undefined * FUN_10af112f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef190 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0e080,
                        &PTR____CFConstantStringClassReference_110dfd518,&PTR_DAT_113325c50,
                        &PTR_DAT_113326e28,0x12,0x78,0x1c);
    func_0x00010c2289e0();
    puRam00000001137ef190 = puVar1;
  }
  return puRam00000001137ef190;
}



/* Entry: 10af11374; end: 10af113db; +[SCMT1NonClusterableStickerDefinition descriptor] */

void FUN_10af11374(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef198 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0e0d0,
                        &PTR____CFConstantStringClassReference_110f35a78,&PTR_DAT_113325c50,
                        &PTR_DAT_113325fa8,4,0x20,0x1c);
    puRam00000001137ef198 = puVar1;
  }
  return;
}



/* Entry: 10af113dc; end: 10af11443; +[SCMT1ClusterableStickerDefinition descriptor] */

void FUN_10af113dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef1a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0e120,
                        &PTR____CFConstantStringClassReference_110f35a98,&PTR_DAT_113325c50,
                        &PTR_DAT_113326028,4,0x28,0x1c);
    puRam00000001137ef1a0 = puVar1;
  }
  return;
}



/* Entry: 10af11444; end: 10af114ab; +[SCMT1ActionDefinition descriptor] */

void FUN_10af11444(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef1a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0e170,
                        &PTR____CFConstantStringClassReference_110f35ab8,&PTR_DAT_113325c50,
                        &PTR_DAT_113326908,0xd,0x50,0x1c);
    puRam00000001137ef1a8 = puVar1;
  }
  return;
}



/* Entry: 10af114ac; end: 10af11513; +[SCMT1ActionsDefinition descriptor] */

void FUN_10af114ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef1b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0e1c0,
                        &PTR____CFConstantStringClassReference_110f35ad8,&PTR_DAT_113325c50,
                        &PTR_DAT_113325c68,1,0x10,0x1c);
    puRam00000001137ef1b0 = puVar1;
  }
  return;
}



/* Entry: 10af11514; end: 10af1157b; +[SCMT1StickerPair descriptor] */

void FUN_10af11514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef1b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0e210,
                        &PTR____CFConstantStringClassReference_110f35af8,&PTR_DAT_113325c50,
                        &PTR_DAT_113325ee8,3,0x18,0x1c);
    puRam00000001137ef1b8 = puVar1;
  }
  return;
}



/* Entry: 10af1157c; end: 10af115e7; +[SCMT1MotionActionDefinition descriptor] */

void FUN_10af1157c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef1c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0e260,
                        &PTR____CFConstantStringClassReference_110f35b18,&PTR_DAT_113325c50,
                        &PTR_DAT_113326aa8,0xd,0x50,0x1c);
    puRam00000001137ef1c0 = puVar1;
  }
  return;
}



/* Entry: 10af115e8; end: 10af1164f; +[SCMT1MotionActionsDefinition descriptor] */

void FUN_10af115e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef1c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0e2b0,
                        &PTR____CFConstantStringClassReference_110f35b38,&PTR_DAT_113325c50,
                        &PTR_DAT_113325c88,1,0x10,0x1c);
    puRam00000001137ef1c8 = puVar1;
  }
  return;
}



/* Entry: 10af11650; end: 10af116cb; +[SCMT1Type descriptor] */

undefined * FUN_10af11650(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef1d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0e300,
                        &PTR____CFConstantStringClassReference_110f35b58,&PTR_DAT_113325c50,
                        &PTR_s_id_p_113326588,9,0x50,0x1c);
    func_0x00010c2289e0();
    puRam00000001137ef1d0 = puVar1;
  }
  return puRam00000001137ef1d0;
}



/* Entry: 10af116cc; end: 10af11733; +[SCMT1Sticker descriptor] */

void FUN_10af116cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef1d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0e350,
                        &PTR____CFConstantStringClassReference_110ea5898,&PTR_DAT_113325c50,
                        &PTR_DAT_1133267c8,10,0x50,0x1c);
    puRam00000001137ef1d8 = puVar1;
  }
  return;
}



/* Entry: 10af11734; end: 10af1179b; +[SCMT1GroupSticker descriptor] */

void FUN_10af11734(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef1e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0e3a0,
                        &PTR____CFConstantStringClassReference_110f35b78,&PTR_DAT_113325c50,
                        &PTR_s_id_p_113325ca8,1,0x10,0x1c);
    puRam00000001137ef1e0 = puVar1;
  }
  return;
}



/* Entry: 10af1179c; end: 10af11803; +[SCMT1HomeWorkInfo descriptor] */

void FUN_10af1179c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef1e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0e3f0,
                        &PTR____CFConstantStringClassReference_110f35b98,&PTR_DAT_113325c50,
                        &PTR_DAT_1133261a8,5,0x18,0x1c);
    puRam00000001137ef1e8 = puVar1;
  }
  return;
}



/* Entry: 10af11804; end: 10af1186b; +[SCMT1Constraints descriptor] */

void FUN_10af11804(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef1f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0e440,
                        &PTR____CFConstantStringClassReference_110f35bb8,&PTR_DAT_113325c50,
                        &PTR_DAT_113325d48,2,0x18,0x1c);
    puRam00000001137ef1f0 = puVar1;
  }
  return;
}


